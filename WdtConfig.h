// FBCODE version (with settings for the platform)
// Source is WdtConfig.h auto generated by CMake from .in file
// You MUST change CMakeLists.txt if you are editing this
// (to change the protocol_version for instance)
#pragma once

#include <fcntl.h>

#define WDT_VERSION_MAJOR 1
#define WDT_VERSION_MINOR 22
#define WDT_VERSION_BUILD 1511090
// Add -fbcode to version str
#define WDT_VERSION_STR "1.22.1511090-fbcode"
// Tie minor and proto version
#define WDT_PROTOCOL_VERSION WDT_VERSION_MINOR

#define HAS_POSIX_FALLOCATE 1
#define HAS_SYNC_FILE_RANGE 1
#define HAS_POSIX_MEMALIGN 1
#define WDT_SUPPORTS_ODIRECT 1
#define WDT_HAS_SOCKIOS_H 1
