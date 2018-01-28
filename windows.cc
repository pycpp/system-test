//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief <windows.h> definition unittests.
 */

#include <pycpp/system/windows.h>
#include <gtest/gtest.h>

PYCPP_USING_NAMESPACE

// TESTS
// -----


TEST(windows_defines, windows_defines)
{
#if defined(PYCPP_WINDOWS)

#   ifndef ERROR_ELEVATION_REQUIRED
#      error ERROR_ELEVATION_REQUIRED
#   endif

#   ifndef ERROR_SYMLINK_NOT_SUPPORTED
#      error ERROR_SYMLINK_NOT_SUPPORTED
#   endif

#   ifndef ERROR_MUI_FILE_NOT_FOUND
#      error ERROR_MUI_FILE_NOT_FOUND
#   endif

#   ifndef ERROR_MUI_INVALID_FILE
#      error ERROR_MUI_INVALID_FILE
#   endif

#   ifndef ERROR_MUI_INVALID_RC_CONFIG
#      error ERROR_MUI_INVALID_RC_CONFIG
#   endif

#   ifndef ERROR_MUI_INVALID_LOCALE_NAME
#      error ERROR_MUI_INVALID_LOCALE_NAME
#   endif

#   ifndef ERROR_MUI_INVALID_ULTIMATEFALLBACK_NAME
#      error ERROR_MUI_INVALID_ULTIMATEFALLBACK_NAME
#   endif

#   ifndef ERROR_MUI_FILE_NOT_LOADED
#      error ERROR_MUI_FILE_NOT_LOADED
#   endif

#endif                  // defined(PYCPP_WINDOWS)
}


TEST(winerror, winerror)
{
    translate_win32_error(0);
    set_errno_win32();
}
