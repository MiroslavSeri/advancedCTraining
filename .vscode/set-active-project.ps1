$cacheFile = "build/CMakeCache.txt"
$line = Get-Content $cacheFile | Where-Object { $_ -match "^ACTIVE_PROJECT:STRING=" }

if ($line -match "^ACTIVE_PROJECT:STRING=(.+)$") {
    $project = $matches[1]
    Set-Content -Path ".vscode/.env" -Value "ACTIVE_PROJECT=$project"
    Write-Host "ACTIVE_PROJECT = $project"
}
else {
    Write-Host "ACTIVE_PROJECT nebyl nalezen v CMakeCache.txt"
}

