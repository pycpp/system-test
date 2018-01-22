//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief <errno.h> definition unittests.
 */

#include <pycpp/system/errno.h>
#include <gtest/gtest.h>

// TESTS
// -----


TEST(errno_defines, errno_defines)
{
#ifndef EADDRINFO
#   error EADDRINFO
#endif

#ifndef EADDRINUSE
#   error EADDRINUSE
#endif

#ifndef EADDRNOTAVAIL
#   error EADDRNOTAVAIL
#endif

#ifndef EAFNOSUPPORT
#   error EAFNOSUPPORT
#endif

#ifndef EAGAIN
#   error EAGAIN
#endif

#ifndef EALREADY
#   error EALREADY
#endif

#ifndef EBADF
#   error EBADF
#endif

#ifndef EBUSY
#   error EBUSY
#endif

#ifndef ECANCELED
#   error ECANCELED
#endif

#ifndef ECHARSET
#   error ECHARSET
#endif

#ifndef ECONNABORTED
#   error ECONNABORTED
#endif

#ifndef ECONNREFUSED
#   error ECONNREFUSED
#endif

#ifndef ECONNRESET
#   error ECONNRESET
#endif

#ifndef EDESTADDRREQ
#   error EDESTADDRREQ
#endif

#ifndef EEXIST
#   error EEXIST
#endif

#ifndef EFAULT
#   error EFAULT
#endif

#ifndef EHOSTUNREACH
#   error EHOSTUNREACH
#endif

#ifndef EINTR
#   error EINTR
#endif

#ifndef EINVAL
#   error EINVAL
#endif

#ifndef EIO
#   error EIO
#endif

#ifndef EISCONN
#   error EISCONN
#endif

#ifndef EISDIR
#   error EISDIR
#endif

#ifndef ELOOP
#   error ELOOP
#endif

#ifndef EMFILE
#   error EMFILE
#endif

#ifndef EMSGSIZE
#   error EMSGSIZE
#endif

#ifndef ENAMETOOLONG
#   error ENAMETOOLONG
#endif

#ifndef ENETDOWN
#   error ENETDOWN
#endif

#ifndef ENETUNREACH
#   error ENETUNREACH
#endif

#ifndef ENFILE
#   error ENFILE
#endif

#ifndef ENOBUFS
#   error ENOBUFS
#endif

#ifndef ENODEV
#   error ENODEV
#endif

#ifndef ENOENT
#   error ENOENT
#endif

#ifndef ENOMEM
#   error ENOMEM
#endif

#ifndef ENONET
#   error ENONET
#endif

#ifndef ENOSPC
#   error ENOSPC
#endif

#ifndef ENOSYS
#   error ENOSYS
#endif

#ifndef ENOTCONN
#   error ENOTCONN
#endif

#ifndef ENOTDIR
#   error ENOTDIR
#endif

#ifndef ENOTEMPTY
#   error ENOTEMPTY
#endif

#ifndef ENOTSOCK
#   error ENOTSOCK
#endif

#ifndef ENOTSUP
#   error ENOTSUP
#endif

#ifndef EPERM
#   error EPERM
#endif

#ifndef EPIPE
#   error EPIPE
#endif

#ifndef EPROTO
#   error EPROTO
#endif

#ifndef EPROTONOSUPPORT
#   error EPROTONOSUPPORT
#endif

#ifndef EPROTOTYPE
#   error EPROTOTYPE
#endif

#ifndef EROFS
#   error EROFS
#endif

#ifndef ESHUTDOWN
#   error ESHUTDOWN
#endif

#ifndef ESPIPE
#   error ESPIPE
#endif

#ifndef ESRCH
#   error ESRCH
#endif

#ifndef ETIMEDOUT
#   error ETIMEDOUT
#endif

#ifndef EUNKNOWN
#   error EUNKNOWN
#endif

#ifndef EXDEV
#   error EXDEV
#endif
}
