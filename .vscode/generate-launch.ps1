$cacheFile = "build/CMakeCache.txt"
$templateFile = ".vscode/launch.template.json"
$outputFile = ".vscode/launch.json"

# Najdi řádek s proměnnou ACTIVE_PROJECT
$line = Get-Content $cacheFile | Where-Object { $_ -match "^ACTIVE_PROJECT:STRING=" }

if ($line -match "^ACTIVE_PROJECT:STRING=(.+)$") {
    $project = $matches[1]

    # Načti šablonu
    $template = Get-Content $templateFile -Raw

    # Nahraď @@PROJECT@@ skutečnou hodnotou
    $output = $template -replace "@@PROJECT@@", $project

    # Zapiš nový launch.json
    $output | Set-Content $outputFile -Encoding UTF8

    Write-Host "✅ launch.json byl vygenerován pro projekt '$project'"
} else {
    Write-Error "❌ ACTIVE_PROJECT nebyl nalezen v CMakeCache.txt"
}
