cmake_minimum_required(VERSION 3.10)
project(AdvancedTrainingRoot)

# Nastav základní C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Definuj aktivní podprojekt a zapiš ho do cache
set(ACTIVE_PROJECT "ringBuffer" CACHE STRING "Aktivní podprojekt")
# Přidej aktivní podprojekt
add_subdirectory(sources/${ACTIVE_PROJECT})
