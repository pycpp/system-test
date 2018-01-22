//  :copyright: (c) 2012-2017 Steven Lee.
//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief <sys/mman.h> unittests.
 */

#include <pycpp/system/sys/mman.h>
#include <gtest/gtest.h>

// TESTS
// -----

TEST(mmap, anon_readwrite)
{
    // mmap
    int prot = PROT_READ | PROT_WRITE;
    int flags = MAP_PRIVATE | MAP_ANONYMOUS;
    void* map = mmap(NULL, 1024, prot, flags, -1, 0);
    ASSERT_NE(map, MAP_FAILED);

    // munmap
    int result = munmap(map, 1024);
    ASSERT_EQ(result, 0);
}


TEST(mmap, anon_readonly)
{
    // mmap
    int prot = PROT_READ;
    int flags = MAP_PRIVATE | MAP_ANONYMOUS;
    void* map = mmap(NULL, 1024, prot, flags, -1, 0);
    ASSERT_NE(map, MAP_FAILED);

    // munmap
    int result = munmap(map, 1024);
    ASSERT_EQ(result, 0);
}
