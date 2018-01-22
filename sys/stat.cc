//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief <sys/stat.h> definition unittests.
 */

#include <pycpp/system/sys/stat.h>
#include <gtest/gtest.h>

// TESTS
// -----


TEST(stat_defines, stat_defines)
{
#ifndef S_IRUSR
#   error S_IRUSR
#endif

#ifndef S_IWUSR
#   error S_IWUSR
#endif
}
