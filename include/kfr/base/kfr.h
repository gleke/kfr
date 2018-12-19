/** @addtogroup utility
 *  @{
 */
#pragma once

#include <stddef.h>
#include <stdint.h>

#include "../cident.h"

#define KFR_VERSION_MAJOR 3
#define KFR_VERSION_MINOR 0
#define KFR_VERSION_BUILD 2
#define KFR_VERSION_STRING                                                                                   \
    CMT_STRINGIFY(KFR_VERSION_MAJOR) "." CMT_STRINGIFY(KFR_VERSION_MINOR) "." CMT_STRINGIFY(KFR_VERSION_BUILD)
#define KFR_VERSION (KFR_VERSION_MAJOR * 10000 + KFR_VERSION_MINOR * 100 + KFR_VERSION_BUILD)

#ifdef CMT_ARCH_X64
#define KFR_VERSION_FULL                                                                                     \
    "KFR " KFR_VERSION_STRING " " CMT_STRINGIFY(CMT_ARCH_NAME) " 64-bit (" CMT_COMPIER_NAME "/" CMT_OS_NAME  \
                                                               ")"
#else
#define KFR_VERSION_FULL                                                                                     \
    "KFR " KFR_VERSION_STRING " " CMT_STRINGIFY(CMT_ARCH_NAME) " 32-bit (" CMT_COMPIER_NAME "/" CMT_OS_NAME  \
                                                               ")"
#endif

#ifdef __cplusplus
namespace kfr
{
/// @brief KFR version string
constexpr const char version_string[] = KFR_VERSION_STRING;

constexpr int version_major = KFR_VERSION_MAJOR;
constexpr int version_minor = KFR_VERSION_MINOR;
constexpr int version_build = KFR_VERSION_BUILD;
constexpr int version       = KFR_VERSION;

/// @brief KFR version string including architecture and compiler name
constexpr const char version_full[] = KFR_VERSION_FULL;
} // namespace kfr
#endif

#define KFR_INTRIN CMT_INTRIN
#define KFR_FUNC CMT_FUNC
#define KFR_SINTRIN CMT_INTRIN static
