/* config.h.  Generated from build/cmake/config.h.in by cmake configure */
#define __LIBARCHIVE_CONFIG_H_INCLUDED 1

/*
 * Ensure we have C99-style int64_t, etc, all defined.
 */

/* First, we need to know if the system has already defined them. */
#define HAVE_INT16_T
#define HAVE_INT32_T
#define HAVE_INT64_T
#define HAVE_INTMAX_T

#define HAVE_UINT8_T
#define HAVE_UINT16_T
#define HAVE_UINT32_T
#define HAVE_UINT64_T
#define HAVE_UINTMAX_T

/* We might have the types we want under other spellings. */
#define HAVE___INT64
/* #undef HAVE_U_INT64_T */
#define HAVE_UNSIGNED___INT64

/* The sizes of various standard integer types. */
#define SIZEOF_SHORT 2
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
#define SIZEOF_LONG_LONG 8
#define SIZEOF_UNSIGNED_SHORT 2
#define SIZEOF_UNSIGNED 4
#define SIZEOF_UNSIGNED_LONG 4
#define SIZEOF_UNSIGNED_LONG_LONG 8

/*
 * If we lack int64_t, define it to the first of __int64, int, long, and long long
 * that exists and is the right size.
 */
#if !defined(HAVE_INT64_T) && defined(HAVE___INT64)
typedef __int64 int64_t;
#define HAVE_INT64_T
#endif

#if !defined(HAVE_INT64_T) && SIZEOF_INT == 8
typedef int int64_t;
#define HAVE_INT64_T
#endif

#if !defined(HAVE_INT64_T) && SIZEOF_LONG == 8
typedef long int64_t;
#define HAVE_INT64_T
#endif

#if !defined(HAVE_INT64_T) && SIZEOF_LONG_LONG == 8
typedef long long int64_t;
#define HAVE_INT64_T
#endif

#if !defined(HAVE_INT64_T)
#error No 64-bit integer type was found.
#endif

/*
 * Similarly for int32_t
 */
#if !defined(HAVE_INT32_T) && SIZEOF_INT == 4
typedef int int32_t;
#define HAVE_INT32_T
#endif

#if !defined(HAVE_INT32_T) && SIZEOF_LONG == 4
typedef long int32_t;
#define HAVE_INT32_T
#endif

#if !defined(HAVE_INT32_T)
#error No 32-bit integer type was found.
#endif

/*
 * Similarly for int16_t
 */
#if !defined(HAVE_INT16_T) && SIZEOF_INT == 2
typedef int int16_t;
#define HAVE_INT16_T
#endif

#if !defined(HAVE_INT16_T) && SIZEOF_SHORT == 2
typedef short int16_t;
#define HAVE_INT16_T
#endif

#if !defined(HAVE_INT16_T)
#error No 16-bit integer type was found.
#endif

/*
 * Similarly for uint64_t
 */
#if !defined(HAVE_UINT64_T) && defined(HAVE_UNSIGNED___INT64)
typedef unsigned __int64 uint64_t;
#define HAVE_UINT64_T
#endif

#if !defined(HAVE_UINT64_T) && SIZEOF_UNSIGNED == 8
typedef unsigned uint64_t;
#define HAVE_UINT64_T
#endif

#if !defined(HAVE_UINT64_T) && SIZEOF_UNSIGNED_LONG == 8
typedef unsigned long uint64_t;
#define HAVE_UINT64_T
#endif

#if !defined(HAVE_UINT64_T) && SIZEOF_UNSIGNED_LONG_LONG == 8
typedef unsigned long long uint64_t;
#define HAVE_UINT64_T
#endif

#if !defined(HAVE_UINT64_T)
#error No 64-bit unsigned integer type was found.
#endif


/*
 * Similarly for uint32_t
 */
#if !defined(HAVE_UINT32_T) && SIZEOF_UNSIGNED == 4
typedef unsigned uint32_t;
#define HAVE_UINT32_T
#endif

#if !defined(HAVE_UINT32_T) && SIZEOF_UNSIGNED_LONG == 4
typedef unsigned long uint32_t;
#define HAVE_UINT32_T
#endif

#if !defined(HAVE_UINT32_T)
#error No 32-bit unsigned integer type was found.
#endif

/*
 * Similarly for uint16_t
 */
#if !defined(HAVE_UINT16_T) && SIZEOF_UNSIGNED == 2
typedef unsigned uint16_t;
#define HAVE_UINT16_T
#endif

#if !defined(HAVE_UINT16_T) && SIZEOF_UNSIGNED_SHORT == 2
typedef unsigned short uint16_t;
#define HAVE_UINT16_T
#endif

#if !defined(HAVE_UINT16_T)
#error No 16-bit unsigned integer type was found.
#endif

/*
 * Similarly for uint8_t
 */
#if !defined(HAVE_UINT8_T)
typedef unsigned char uint8_t;
#define HAVE_UINT8_T
#endif

#if !defined(HAVE_UINT8_T)
#error No 8-bit unsigned integer type was found.
#endif

/* Define intmax_t and uintmax_t if they are not already defined. */
#if !defined(HAVE_INTMAX_T)
typedef int64_t intmax_t;
#endif

#if !defined(HAVE_UINTMAX_T)
typedef uint64_t uintmax_t;
#endif

/* Define ZLIB_WINAPI if zlib was built on Visual Studio. */
/* #undef ZLIB_WINAPI */

/* Darwin ACL support */
/* #undef ARCHIVE_ACL_DARWIN */

/* FreeBSD ACL support */
/* #undef ARCHIVE_ACL_FREEBSD */

/* FreeBSD NFSv4 ACL support */
/* #undef ARCHIVE_ACL_FREEBSD_NFS4 */

/* Linux POSIX.1e ACL support via libacl */
/* #undef ARCHIVE_ACL_LIBACL */

/* Linux NFSv4 ACL support via librichacl */
/* #undef ARCHIVE_ACL_LIBRICHACL */

/* Solaris ACL support */
/* #undef ARCHIVE_ACL_SUNOS */

/* Solaris NFSv4 ACL support */
/* #undef ARCHIVE_ACL_SUNOS_NFS4 */

/* MD5 via ARCHIVE_CRYPTO_MD5_LIBC supported. */
/* #undef ARCHIVE_CRYPTO_MD5_LIBC */

/* MD5 via ARCHIVE_CRYPTO_MD5_LIBSYSTEM supported. */
/* #undef ARCHIVE_CRYPTO_MD5_LIBSYSTEM */

/* MD5 via ARCHIVE_CRYPTO_MD5_MBEDTLS supported. */
/* #undef ARCHIVE_CRYPTO_MD5_MBEDTLS */

/* MD5 via ARCHIVE_CRYPTO_MD5_NETTLE supported. */
/* #undef ARCHIVE_CRYPTO_MD5_NETTLE */

/* MD5 via ARCHIVE_CRYPTO_MD5_OPENSSL supported. */
#define ARCHIVE_CRYPTO_MD5_OPENSSL 1

/* MD5 via ARCHIVE_CRYPTO_MD5_WIN supported. */
/* #undef ARCHIVE_CRYPTO_MD5_WIN */

/* RMD160 via ARCHIVE_CRYPTO_RMD160_LIBC supported. */
/* #undef ARCHIVE_CRYPTO_RMD160_LIBC */

/* RMD160 via ARCHIVE_CRYPTO_RMD160_NETTLE supported. */
/* #undef ARCHIVE_CRYPTO_RMD160_NETTLE */

/* RMD160 via ARCHIVE_CRYPTO_RMD160_MBEDTLS supported. */
/* #undef ARCHIVE_CRYPTO_RMD160_MBEDTLS */

/* RMD160 via ARCHIVE_CRYPTO_RMD160_OPENSSL supported. */
#define ARCHIVE_CRYPTO_RMD160_OPENSSL 1

/* SHA1 via ARCHIVE_CRYPTO_SHA1_LIBC supported. */
/* #undef ARCHIVE_CRYPTO_SHA1_LIBC */

/* SHA1 via ARCHIVE_CRYPTO_SHA1_LIBSYSTEM supported. */
/* #undef ARCHIVE_CRYPTO_SHA1_LIBSYSTEM */

/* SHA1 via ARCHIVE_CRYPTO_SHA1_MBEDTLS supported. */
/* #undef ARCHIVE_CRYPTO_SHA1_MBEDTLS */

/* SHA1 via ARCHIVE_CRYPTO_SHA1_NETTLE supported. */
/* #undef ARCHIVE_CRYPTO_SHA1_NETTLE */

/* SHA1 via ARCHIVE_CRYPTO_SHA1_OPENSSL supported. */
#define ARCHIVE_CRYPTO_SHA1_OPENSSL 1

/* SHA1 via ARCHIVE_CRYPTO_SHA1_WIN supported. */
/* #undef ARCHIVE_CRYPTO_SHA1_WIN */

/* SHA256 via ARCHIVE_CRYPTO_SHA256_LIBC supported. */
/* #undef ARCHIVE_CRYPTO_SHA256_LIBC */

/* SHA256 via ARCHIVE_CRYPTO_SHA256_LIBC2 supported. */
/* #undef ARCHIVE_CRYPTO_SHA256_LIBC2 */

/* SHA256 via ARCHIVE_CRYPTO_SHA256_LIBC3 supported. */
/* #undef ARCHIVE_CRYPTO_SHA256_LIBC3 */

/* SHA256 via ARCHIVE_CRYPTO_SHA256_LIBSYSTEM supported. */
/* #undef ARCHIVE_CRYPTO_SHA256_LIBSYSTEM */

/* SHA256 via ARCHIVE_CRYPTO_SHA256_MBEDTLS supported. */
/* #undef ARCHIVE_CRYPTO_SHA256_MBEDTLS */

/* SHA256 via ARCHIVE_CRYPTO_SHA256_NETTLE supported. */
/* #undef ARCHIVE_CRYPTO_SHA256_NETTLE */

/* SHA256 via ARCHIVE_CRYPTO_SHA256_OPENSSL supported. */
#define ARCHIVE_CRYPTO_SHA256_OPENSSL 1

/* SHA256 via ARCHIVE_CRYPTO_SHA256_WIN supported. */
/* #undef ARCHIVE_CRYPTO_SHA256_WIN */

/* SHA384 via ARCHIVE_CRYPTO_SHA384_LIBC supported. */
/* #undef ARCHIVE_CRYPTO_SHA384_LIBC */

/* SHA384 via ARCHIVE_CRYPTO_SHA384_LIBC2 supported. */
/* #undef ARCHIVE_CRYPTO_SHA384_LIBC2 */

/* SHA384 via ARCHIVE_CRYPTO_SHA384_LIBC3 supported. */
/* #undef ARCHIVE_CRYPTO_SHA384_LIBC3 */

/* SHA384 via ARCHIVE_CRYPTO_SHA384_LIBSYSTEM supported. */
/* #undef ARCHIVE_CRYPTO_SHA384_LIBSYSTEM */

/* SHA384 via ARCHIVE_CRYPTO_SHA384_MBEDTLS supported. */
/* #undef ARCHIVE_CRYPTO_SHA384_MBEDTLS */

/* SHA384 via ARCHIVE_CRYPTO_SHA384_NETTLE supported. */
/* #undef ARCHIVE_CRYPTO_SHA384_NETTLE */

/* SHA384 via ARCHIVE_CRYPTO_SHA384_OPENSSL supported. */
#define ARCHIVE_CRYPTO_SHA384_OPENSSL 1

/* SHA384 via ARCHIVE_CRYPTO_SHA384_WIN supported. */
/* #undef ARCHIVE_CRYPTO_SHA384_WIN */

/* SHA512 via ARCHIVE_CRYPTO_SHA512_LIBC supported. */
/* #undef ARCHIVE_CRYPTO_SHA512_LIBC */

/* SHA512 via ARCHIVE_CRYPTO_SHA512_LIBC2 supported. */
/* #undef ARCHIVE_CRYPTO_SHA512_LIBC2 */

/* SHA512 via ARCHIVE_CRYPTO_SHA512_LIBC3 supported. */
/* #undef ARCHIVE_CRYPTO_SHA512_LIBC3 */

/* SHA512 via ARCHIVE_CRYPTO_SHA512_LIBSYSTEM supported. */
/* #undef ARCHIVE_CRYPTO_SHA512_LIBSYSTEM */

/* SHA512 via ARCHIVE_CRYPTO_SHA512_MBEDTLS supported. */
/* #undef ARCHIVE_CRYPTO_SHA512_MBEDTLS */

/* SHA512 via ARCHIVE_CRYPTO_SHA512_NETTLE supported. */
/* #undef ARCHIVE_CRYPTO_SHA512_NETTLE */

/* SHA512 via ARCHIVE_CRYPTO_SHA512_OPENSSL supported. */
#define ARCHIVE_CRYPTO_SHA512_OPENSSL 1

/* SHA512 via ARCHIVE_CRYPTO_SHA512_WIN supported. */
/* #undef ARCHIVE_CRYPTO_SHA512_WIN */

/* AIX xattr support */
/* #undef ARCHIVE_XATTR_AIX */

/* Darwin xattr support */
/* #undef ARCHIVE_XATTR_DARWIN */

/* FreeBSD xattr support */
/* #undef ARCHIVE_XATTR_FREEBSD */

/* Linux xattr support */
/* #undef ARCHIVE_XATTR_LINUX */

/* Version number of bsdcpio */
#define BSDCPIO_VERSION_STRING "3.8.0"

/* Version number of bsdtar */
#define BSDTAR_VERSION_STRING "3.8.0"

/* Version number of bsdcat */
#define BSDCAT_VERSION_STRING "3.8.0"

/* Version number of bsdunzip */
#define BSDUNZIP_VERSION_STRING "3.8.0"

/* Define to 1 if you have the `acl_create_entry' function. */
/* #undef HAVE_ACL_CREATE_ENTRY */

/* Define to 1 if you have the `acl_get_fd_np' function. */
/* #undef HAVE_ACL_GET_FD_NP */

/* Define to 1 if you have the `acl_get_link' function. */
/* #undef HAVE_ACL_GET_LINK */

/* Define to 1 if you have the `acl_get_link_np' function. */
/* #undef HAVE_ACL_GET_LINK_NP */

/* Define to 1 if you have the `acl_get_perm' function. */
/* #undef HAVE_ACL_GET_PERM */

/* Define to 1 if you have the `acl_get_perm_np' function. */
/* #undef HAVE_ACL_GET_PERM_NP */

/* Define to 1 if you have the `acl_init' function. */
/* #undef HAVE_ACL_INIT */

/* Define to 1 if you have the <acl/libacl.h> header file. */
/* #undef HAVE_ACL_LIBACL_H */

/* Define to 1 if the system has the type `acl_permset_t'. */
/* #undef HAVE_ACL_PERMSET_T */

/* Define to 1 if you have the `acl_set_fd' function. */
/* #undef HAVE_ACL_SET_FD */

/* Define to 1 if you have the `acl_set_fd_np' function. */
/* #undef HAVE_ACL_SET_FD_NP */

/* Define to 1 if you have the `acl_set_file' function. */
/* #undef HAVE_ACL_SET_FILE */

/* Define to 1 if you have the `arc4random_buf' function. */
/* #undef HAVE_ARC4RANDOM_BUF */

/* Define to 1 if you have the <attr/xattr.h> header file. */
/* #undef HAVE_ATTR_XATTR_H */

/* Define to 1 if you have the <bcrypt.h> header file. */
#define HAVE_BCRYPT_H 1

/* Define to 1 if you have the <bsdxml.h> header file. */
/* #undef HAVE_BSDXML_H */

/* Define to 1 if you have the <bzlib.h> header file. */
#define HAVE_BZLIB_H 1

/* Define to 1 if you have the `chflags' function. */
/* #undef HAVE_CHFLAGS */

/* Define to 1 if you have the `chown' function. */
/* #undef HAVE_CHOWN */

/* Define to 1 if you have the `chroot' function. */
/* #undef HAVE_CHROOT */

/* Define to 1 if you have the <copyfile.h> header file. */
/* #undef HAVE_COPYFILE_H */

/* Define to 1 if you have the `ctime_r' function. */
/* #undef HAVE_CTIME_R */

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the `cygwin_conv_path' function. */
/* #undef HAVE_CYGWIN_CONV_PATH */

/* Define to 1 if you have the declaration of `ACE_GETACL', and to 0 if you
   don't. */
/* #undef HAVE_DECL_ACE_GETACL */

/* Define to 1 if you have the declaration of `ACE_GETACLCNT', and to 0 if you
   don't. */
/* #undef HAVE_DECL_ACE_GETACLCNT */

/* Define to 1 if you have the declaration of `ACE_SETACL', and to 0 if you
   don't. */
/* #undef HAVE_DECL_ACE_SETACL */

/* Define to 1 if you have the declaration of `ACL_SYNCHRONIZE', and to 0 if
   you don't. */
/* #undef HAVE_DECL_ACL_SYNCHRONIZE */

/* Define to 1 if you have the declaration of `ACL_TYPE_EXTENDED', and to 0 if
   you don't. */
/* #undef HAVE_DECL_ACL_TYPE_EXTENDED */

/* Define to 1 if you have the declaration of `ACL_TYPE_NFS4', and to 0 if you
   don't. */
/* #undef HAVE_DECL_ACL_TYPE_NFS4 */

/* Define to 1 if you have the declaration of `ACL_USER', and to 0 if you
   don't. */
/* #undef HAVE_DECL_ACL_USER */

/* Define to 1 if you have the declaration of `INT32_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_INT32_MAX 1

/* Define to 1 if you have the declaration of `INT32_MIN', and to 0 if you
   don't. */
#define HAVE_DECL_INT32_MIN 1

/* Define to 1 if you have the declaration of `INT64_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_INT64_MAX 1

/* Define to 1 if you have the declaration of `INT64_MIN', and to 0 if you
   don't. */
#define HAVE_DECL_INT64_MIN 1

/* Define to 1 if you have the declaration of `INTMAX_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_INTMAX_MAX 1

/* Define to 1 if you have the declaration of `INTMAX_MIN', and to 0 if you
   don't. */
#define HAVE_DECL_INTMAX_MIN 1

/* Define to 1 if you have the declaration of `SETACL', and to 0 if you don't.
   */
/* #undef HAVE_DECL_SETACL */

/* Define to 1 if you have the declaration of `SIZE_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_SIZE_MAX 1

/* Define to 1 if you have the declaration of `SSIZE_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_SSIZE_MAX 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRERROR_R */

/* Define to 1 if you have the declaration of `UINT32_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_UINT32_MAX 1

/* Define to 1 if you have the declaration of `UINT64_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_UINT64_MAX 1

/* Define to 1 if you have the declaration of `UINTMAX_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_UINTMAX_MAX 1

/* Define to 1 if you have the declaration of `XATTR_NOFOLLOW', and to 0 if
   you don't. */
/* #undef HAVE_DECL_XATTR_NOFOLLOW */

/* Define to 1 if you have the <direct.h> header file. */
#define HAVE_DIRECT_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function. */
/* #undef HAVE_DIRFD */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if nl_langinfo supports D_MD_ORDER */
/* #undef HAVE_D_MD_ORDER */

/* A possible errno value for invalid file format errors */
/* #undef HAVE_EFTYPE */

/* A possible errno value for invalid file format errors */
#define HAVE_EILSEQ 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <expat.h> header file. */
/* #undef HAVE_EXPAT_H */

/* Define to 1 if you have the <ext2fs/ext2_fs.h> header file. */
/* #undef HAVE_EXT2FS_EXT2_FS_H */

/* Define to 1 if you have the `extattr_get_file' function. */
/* #undef HAVE_EXTATTR_GET_FILE */

/* Define to 1 if you have the `extattr_list_file' function. */
/* #undef HAVE_EXTATTR_LIST_FILE */

/* Define to 1 if you have the `extattr_set_fd' function. */
/* #undef HAVE_EXTATTR_SET_FD */

/* Define to 1 if you have the `extattr_set_file' function. */
/* #undef HAVE_EXTATTR_SET_FILE */

/* Define to 1 if EXTATTR_NAMESPACE_USER is defined in sys/extattr.h. */
/* #undef HAVE_DECL_EXTATTR_NAMESPACE_USER */

/* Define to 1 if you have the declaration of `GETACL', and to 0 if you don't.
   */
/* #undef HAVE_DECL_GETACL */

/* Define to 1 if you have the declaration of `GETACLCNT', and to 0 if you
   don't. */
/* #undef HAVE_DECL_GETACLCNT */

/* Define to 1 if you have the `fchdir' function. */
/* #undef HAVE_FCHDIR */

/* Define to 1 if you have the `fchflags' function. */
/* #undef HAVE_FCHFLAGS */

/* Define to 1 if you have the `fchmod' function. */
/* #undef HAVE_FCHMOD */

/* Define to 1 if you have the `fchown' function. */
/* #undef HAVE_FCHOWN */

/* Define to 1 if you have the `fcntl' function. */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdopendir' function. */
/* #undef HAVE_FDOPENDIR */

/* Define to 1 if you have the `fgetea' function. */
/* #undef HAVE_FGETEA */

/* Define to 1 if you have the `fgetxattr' function. */
/* #undef HAVE_FGETXATTR */

/* Define to 1 if you have the `flistea' function. */
/* #undef HAVE_FLISTEA */

/* Define to 1 if you have the `flistxattr' function. */
/* #undef HAVE_FLISTXATTR */

/* Define to 1 if you have the `fnmatch' function. */
/* #undef HAVE_FNMATCH */

/* Define to 1 if you have the <fnmatch.h> header file. */
/* #undef HAVE_FNMATCH_H */

/* Define to 1 if you have the `fork' function. */
/* #undef HAVE_FORK */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fsetea' function. */
/* #undef HAVE_FSETEA */

/* Define to 1 if you have the `fsetxattr' function. */
/* #undef HAVE_FSETXATTR */

/* Define to 1 if you have the `fstat' function. */
#define HAVE_FSTAT 1

/* Define to 1 if you have the `fstatat' function. */
/* #undef HAVE_FSTATAT */

/* Define to 1 if you have the `fstatfs' function. */
/* #undef HAVE_FSTATFS */

/* Define to 1 if you have the `fstatvfs' function. */
/* #undef HAVE_FSTATVFS */

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `futimens' function. */
/* #undef HAVE_FUTIMENS */

/* Define to 1 if you have the `futimes' function. */
/* #undef HAVE_FUTIMES */

/* Define to 1 if you have the `futimesat' function. */
/* #undef HAVE_FUTIMESAT */

/* Define to 1 if you have the `getea' function. */
/* #undef HAVE_GETEA */

/* Define to 1 if you have the `geteuid' function. */
/* #undef HAVE_GETEUID */

/* Define to 1 if you have the `getgrgid_r' function. */
/* #undef HAVE_GETGRGID_R */

/* Define to 1 if you have the `getgrnam_r' function. */
/* #undef HAVE_GETGRNAM_R */

/* Define to 1 if you have the `getline' function. */
/* #undef HAVE_GETLINE */

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getpwnam_r' function. */
/* #undef HAVE_GETPWNAM_R */

/* Define to 1 if you have the `getpwuid_r' function. */
/* #undef HAVE_GETPWUID_R */

/* Define to 1 if you have the `getvfsbyname' function. */
/* #undef HAVE_GETVFSBYNAME */

/* Define to 1 if you have the `getxattr' function. */
/* #undef HAVE_GETXATTR */

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* Define to 1 if you have the <grp.h> header file. */
/* #undef HAVE_GRP_H */

/* Define to 1 if you have the `iconv' function. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <io.h> header file. */
#define HAVE_IO_H 1

/* Define to 1 if you have the <langinfo.h> header file. */
/* #undef HAVE_LANGINFO_H */

/* Define to 1 if you have the `lchflags' function. */
/* #undef HAVE_LCHFLAGS */

/* Define to 1 if you have the `lchmod' function. */
/* #undef HAVE_LCHMOD */

/* Define to 1 if you have the `lchown' function. */
/* #undef HAVE_LCHOWN */

/* Define to 1 if you have the `lgetea' function. */
/* #undef HAVE_LGETEA */

/* Define to 1 if you have the `lgetxattr' function. */
/* #undef HAVE_LGETXATTR */

/* Define to 1 if you have the `acl' library (-lacl). */
/* #undef HAVE_LIBACL */

/* Define to 1 if you have the `attr' library (-lattr). */
/* #undef HAVE_LIBATTR */

/* Define to 1 if you have the `bsdxml' library (-lbsdxml). */
/* #undef HAVE_LIBBSDXML */

/* Define to 1 if you have the `bz2' library (-lbz2). */
#define HAVE_LIBBZ2 1

/* Define to 1 if you have the `b2' library (-lb2). */
#define HAVE_LIBB2 1

/* Define to 1 if you have the <blake2.h> header file. */
#define HAVE_BLAKE2_H 1

/* Define to 1 if you have the `charset' library (-lcharset). */
/* #undef HAVE_LIBCHARSET */

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the `expat' library (-lexpat). */
/* #undef HAVE_LIBEXPAT */

/* Define to 1 if you have the `gcc' library (-lgcc). */
/* #undef HAVE_LIBGCC */

/* Define to 1 if you have the `iconv' library (-liconv). */
#define HAVE_LIBICONV 1

/* Define to 1 if you have the `lz4' library (-llz4). */
#define HAVE_LIBLZ4 1

/* Define to 1 if you have the `lzma' library (-llzma). */
#define HAVE_LIBLZMA 1

/* Define to 1 if you have the `lzo2' library (-llzo2). */
/* #undef HAVE_LIBLZO2 */

/* Define to 1 if you have the `mbedcrypto' library (-lmbedcrypto). */
/* #undef HAVE_LIBMBEDCRYPTO */

/* Define to 1 if you have the `nettle' library (-lnettle). */
/* #undef HAVE_LIBNETTLE */

/* Define to 1 if you have the `pcre' library (-lpcre). */
/* #undef HAVE_LIBPCRE */

/* Define to 1 if you have the `pcreposix' library (-lpcreposix). */
/* #undef HAVE_LIBPCREPOSIX */

/* Define to 1 if you have the `pcre2-8' library (-lpcre2-8). */
/* #undef HAVE_LIBPCRE2 */

/* Define to 1 if you have the `pcreposix' library (-lpcre2posix). */
/* #undef HAVE_LIBPCRE2POSIX */

/* Define to 1 if you have the `xml2' library (-lxml2). */
#define HAVE_LIBXML2 1

/* Define to 1 if you have the <libxml/xmlreader.h> header file. */
#define HAVE_LIBXML_XMLREADER_H 1

/* Define to 1 if you have the <libxml/xmlwriter.h> header file. */
#define HAVE_LIBXML_XMLWRITER_H 1

/* Define to 1 if you have the <libxml/xmlversion.h> header file. */
#define HAVE_LIBXML_XMLVERSION_H 1

/* Define to 1 if you have the `z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the `zstd' library (-lzstd). */
#define HAVE_LIBZSTD 1

/* Define to 1 if you have the ZSTD_compressStream function. */
#define HAVE_ZSTD_compressStream 1

/* Define to 1 if you have the ZSTD_minCLevel function. */
#define HAVE_ZSTD_minCLevel 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `link' function. */
/* #undef HAVE_LINK */

/* Define to 1 if you have the `linkat' function. */
/* #undef HAVE_LINKAT */

/* Define to 1 if you have the <linux/fiemap.h> header file. */
/* #undef HAVE_LINUX_FIEMAP_H */

/* Define to 1 if you have the <linux/fs.h> header file. */
/* #undef HAVE_LINUX_FS_H */

/* Define to 1 if you have the <linux/magic.h> header file. */
/* #undef HAVE_LINUX_MAGIC_H */

/* Define to 1 if you have the <linux/types.h> header file. */
/* #undef HAVE_LINUX_TYPES_H */

/* Define to 1 if you have the `listea' function. */
/* #undef HAVE_LISTEA */

/* Define to 1 if you have the `listxattr' function. */
/* #undef HAVE_LISTXATTR */

/* Define to 1 if you have the `llistea' function. */
/* #undef HAVE_LLISTEA */

/* Define to 1 if you have the `llistxattr' function. */
/* #undef HAVE_LLISTXATTR */

/* Define to 1 if you have the <localcharset.h> header file. */
#define HAVE_LOCALCHARSET_H 1

/* Define to 1 if you have the `locale_charset' function. */
#define HAVE_LOCALE_CHARSET 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define to 1 if the system has the type `long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the `lsetea' function. */
/* #undef HAVE_LSETEA */

/* Define to 1 if you have the `lsetxattr' function. */
/* #undef HAVE_LSETXATTR */

/* Define to 1 if you have the `lstat' function. */
/* #undef HAVE_LSTAT */

/* Define to 1 if `lstat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_LSTAT_EMPTY_STRING_BUG */

/* Define to 1 if you have the `lutimes' function. */
/* #undef HAVE_LUTIMES */

/* Define to 1 if you have the <lz4hc.h> header file. */
#define HAVE_LZ4HC_H 1

/* Define to 1 if you have the <lz4.h> header file. */
#define HAVE_LZ4_H 1

/* Define to 1 if you have the <lzma.h> header file. */
#define HAVE_LZMA_H 1

/* Define to 1 if you have a working `lzma_stream_encoder_mt' function. */
#define HAVE_LZMA_STREAM_ENCODER_MT 1

/* Define to 1 if you have the <lzo/lzo1x.h> header file. */
/* #undef HAVE_LZO_LZO1X_H */

/* Define to 1 if you have the <lzo/lzoconf.h> header file. */
/* #undef HAVE_LZO_LZOCONF_H */

/* Define to 1 if you have the <mbedtls/aes.h> header file. */
/* #undef HAVE_MBEDTLS_AES_H */

/* Define to 1 if you have the <mbedtls/md.h> header file. */
/* #undef HAVE_MBEDTLS_MD_H */

/* Define to 1 if you have the <mbedtls/pkcs5.h> header file. */
/* #undef HAVE_MBEDTLS_PKCS5_H */

/* Define to 1 if you have the <mbedtls/pkcs5.h> header file. */
/* #undef HAVE_MBEDTLS_VERSION_H */

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the <membership.h> header file. */
/* #undef HAVE_MEMBERSHIP_H */

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have the `mkfifo' function. */
/* #undef HAVE_MKFIFO */

/* Define to 1 if you have the `mknod' function. */
/* #undef HAVE_MKNOD */

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <nettle/aes.h> header file. */
/* #undef HAVE_NETTLE_AES_H */

/* Define to 1 if you have the <nettle/hmac.h> header file. */
/* #undef HAVE_NETTLE_HMAC_H */

/* Define to 1 if you have the <nettle/md5.h> header file. */
/* #undef HAVE_NETTLE_MD5_H */

/* Define to 1 if you have the <nettle/pbkdf2.h> header file. */
/* #undef HAVE_NETTLE_PBKDF2_H */

/* Define to 1 if you have the <nettle/ripemd160.h> header file. */
/* #undef HAVE_NETTLE_RIPEMD160_H */

/* Define to 1 if you have the <nettle/sha.h> header file. */
/* #undef HAVE_NETTLE_SHA_H */

/* Define to 1 if you have the <nettle/version.h> header file. */
/* #undef HAVE_NETTLE_VERSION_H */

/* Define to 1 if you have the `nl_langinfo' function. */
/* #undef HAVE_NL_LANGINFO */

/* Define to 1 if you have the `openat' function. */
/* #undef HAVE_OPENAT */

/* Define to 1 if you have the <openssl/evp.h> header file. */
#define HAVE_OPENSSL_EVP_H 1

/* Define to 1 if you have the <openssl/opensslv.h> header file. */
#define HAVE_OPENSSL_OPENSSLV_H 1

/* Define to 1 if you have the <paths.h> header file. */
/* #undef HAVE_PATHS_H */

/* Define to 1 if you have the <pcreposix.h> header file. */
/* #undef HAVE_PCREPOSIX_H */

/* Define to 1 if you have the <pcre2posix.h> header file. */
/* #undef HAVE_PCRE2POSIX_H */

/* Define to 1 if you have the `pipe' function. */
/* #undef HAVE_PIPE */

/* Define to 1 if you have the `PKCS5_PBKDF2_HMAC_SHA1' function. */
#define HAVE_PKCS5_PBKDF2_HMAC_SHA1 1

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Define to 1 if you have the <poll.h> header file. */
/* #undef HAVE_POLL_H */

/* Define to 1 if you have the `posix_spawnp' function. */
/* #undef HAVE_POSIX_SPAWNP */

/* Define to 1 if you have the <process.h> header file. */
#define HAVE_PROCESS_H 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <pwd.h> header file. */
/* #undef HAVE_PWD_H */

/* Define to 1 if you have the `readdir_r' function. */
/* #undef HAVE_READDIR_R */

/* Define to 1 if you have the `readlink' function. */
/* #undef HAVE_READLINK */

/* Define to 1 if you have the `readlinkat' function. */
/* #undef HAVE_READLINKAT */

/* Define to 1 if you have the `readpassphrase' function. */
/* #undef HAVE_READPASSPHRASE */

/* Define to 1 if you have the <readpassphrase.h> header file. */
/* #undef HAVE_READPASSPHRASE_H */

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the `select' function. */
/* #undef HAVE_SELECT */

/* Define to 1 if you have the `setenv' function. */
/* #undef HAVE_SETENV */

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `sigaction' function. */
/* #undef HAVE_SIGACTION */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the <spawn.h> header file. */
/* #undef HAVE_SPAWN_H */

/* Define to 1 if you have the `statfs' function. */
/* #undef HAVE_STATFS */

/* Define to 1 if you have the `statvfs' function. */
/* #undef HAVE_STATVFS */

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_STAT_EMPTY_STRING_BUG */

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if the system has the type `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS */

/* Define to 1 if `f_iosize' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_IOSIZE */

/* Define to 1 if `f_namemax' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_NAMEMAX */

/* Define to 1 if `f_iosize' is a member of `struct statvfs'. */
/* #undef HAVE_STRUCT_STATVFS_F_IOSIZE */

/* Define to 1 if `st_birthtime' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIME */

/* Define to 1 if `st_birthtimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC */

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BLKSIZE */

/* Define to 1 if `st_flags' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_FLAGS */

/* Define to 1 if `st_mtimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIMESPEC_TV_NSEC */

/* Define to 1 if `st_mtime_n' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIME_N */

/* Define to 1 if `st_mtime_usec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIME_USEC */

/* Define to 1 if `st_mtim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC */

/* Define to 1 if `st_umtime' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_UMTIME */

/* Define to 1 if `tm_gmtoff' is a member of `struct tm'. */
/* #undef HAVE_STRUCT_TM_TM_GMTOFF */

/* Define to 1 if `__tm_gmtoff' is a member of `struct tm'. */
/* #undef HAVE_STRUCT_TM___TM_GMTOFF */

/* Define to 1 if you have `struct vfsconf'. */
/* #undef HAVE_STRUCT_VFSCONF */

/* Define to 1 if you have `struct xvfsconf'. */
/* #undef HAVE_STRUCT_XVFSCONF */

/* Define to 1 if you have the `symlink' function. */
/* #undef HAVE_SYMLINK */

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the <sys/acl.h> header file. */
/* #undef HAVE_SYS_ACL_H */

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#define HAVE_SYS_CDEFS_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ea.h> header file. */
/* #undef HAVE_SYS_EA_H */

/* Define to 1 if you have the <sys/extattr.h> header file. */
/* #undef HAVE_SYS_EXTATTR_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
/* #undef HAVE_SYS_MOUNT_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
/* #undef HAVE_SYS_POLL_H */

/* Define to 1 if you have the <sys/richacl.h> header file. */
/* #undef HAVE_SYS_RICHACL_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/statfs.h> header file. */
/* #undef HAVE_SYS_STATFS_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
/* #undef HAVE_SYS_STATVFS_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
/* #undef HAVE_SYS_SYSMACROS_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utime.h> header file. */
#define HAVE_SYS_UTIME_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
/* #undef HAVE_SYS_UTSNAME_H */

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <sys/xattr.h> header file. */
/* #undef HAVE_SYS_XATTR_H */

/* Define to 1 if you have the `tcgetattr' function. */
/* #undef HAVE_TCGETATTR */

/* Define to 1 if you have the `tcsetattr' function. */
/* #undef HAVE_TCSETATTR */

/* Define to 1 if you have the `timegm' function. */
/* #undef HAVE_TIMEGM */

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlinkat' function. */
/* #undef HAVE_UNLINKAT */

/* Define to 1 if you have the `unsetenv' function. */
/* #undef HAVE_UNSETENV */

/* Define to 1 if the system has the type `unsigned long long'. */
/* #undef HAVE_UNSIGNED_LONG_LONG */

/* Define to 1 if the system has the type `unsigned long long int'. */
/* #undef HAVE_UNSIGNED_LONG_LONG_INT */

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the `utimensat' function. */
/* #undef HAVE_UTIMENSAT */

/* Define to 1 if you have the `utimes' function. */
/* #undef HAVE_UTIMES */

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if the system has the type `wchar_t'. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcscmp' function. */
#define HAVE_WCSCMP 1

/* Define to 1 if you have the `wcscpy' function. */
#define HAVE_WCSCPY 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wctomb' function. */
#define HAVE_WCTOMB 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the <wincrypt.h> header file. */
#define HAVE_WINCRYPT_H 1

/* Define to 1 if you have the <windows.h> header file. */
#define HAVE_WINDOWS_H 1

/* Define to 1 if you have the <winioctl.h> header file. */
#define HAVE_WINIOCTL_H 1

/* Define to 1 if you have _CrtSetReportMode in <crtdbg.h>  */
#define HAVE__CrtSetReportMode 1

/* Define to 1 if you have the `wmemcmp' function. */
#define HAVE_WMEMCMP 1

/* Define to 1 if you have the `wmemcpy' function. */
#define HAVE_WMEMCPY 1

/* Define to 1 if you have the `wmemmove' function. */
#define HAVE_WMEMMOVE 1

/* Define to 1 if you have a working EXT2_IOC_GETFLAGS */
/* #undef HAVE_WORKING_EXT2_IOC_GETFLAGS */

/* Define to 1 if you have a working FS_IOC_GETFLAGS */
/* #undef HAVE_WORKING_FS_IOC_GETFLAGS */

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if you have the <zstd.h> header file. */
#define HAVE_ZSTD_H 1

/* Define to 1 if you have the `ctime_s' function. */
#define HAVE_CTIME_S 1

/* Define to 1 if you have the `_fseeki64' function. */
#define HAVE__FSEEKI64 1

/* Define to 1 if you have the `_get_timezone' function. */
/* #undef HAVE__GET_TIMEZONE */

/* Define to 1 if you have the `gmtime_s' function. */
#define HAVE_GMTIME_S 1

/* Define to 1 if you have the `localtime_s' function. */
#define HAVE_LOCALTIME_S 1

/* Define to 1 if you have the `_mkgmtime' function. */
#define HAVE__MKGMTIME 1

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Version number of libarchive as a single integer */
#define LIBARCHIVE_VERSION_NUMBER "3008000"

/* Version number of libarchive */
#define LIBARCHIVE_VERSION_STRING "3.8.0"

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
/* #undef MAJOR_IN_SYSMACROS */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 2

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
/* #undef TIME_WITH_SYS_TIME */

/* Version number of package */
/* #undef LIBATTR_PKGCONFIG_VERSION */

/* Version number of package */
/* #undef LIBACL_PKGCONFIG_VERSION */

/* Version number of package */
/* #undef LIBRICHACL_PKGCONFIG_VERSION */

/*
 * Some platform requires a macro to use extension functions.
 */
#define SAFE_TO_DEFINE_EXTENSIONS 1
#ifdef SAFE_TO_DEFINE_EXTENSIONS
/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
#endif /* SAFE_TO_DEFINE_EXTENSIONS */

/* Version number of package */
#define VERSION "3.8.0"

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to control Windows SDK version */
#ifndef NTDDI_VERSION
#define NTDDI_VERSION 0x0A000000
#endif // NTDDI_VERSION

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0A00
#endif // _WIN32_WINNT

#ifndef WINVER
#define WINVER 0x0A00
#endif // WINVER

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
#define gid_t short

/* Define to `unsigned long' if <sys/types.h> does not define. */
#define id_t short

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `long long' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
#define uid_t short

/* Define to `int' if <sys/types.h> does not define. */
/* #undef intptr_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef uintptr_t */


#define ARCHIVE_SHA256_COMPILE_TEST
#define ARCHIVE_CRYPTO_SHA256_LIBMD
#define PLATFORM_CONFIG_H "check_crypto_md.h"

/*-
* Copyright (c) 2003-2007 Tim Kientzle
* Copyright (c) 2011 Andres Mejia
* Copyright (c) 2011 Michihiro NAKAJIMA
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the distribution.
*
* THIS SOFTWARE IS PROVIDED BY THE AUTHOR(S) ``AS IS'' AND ANY EXPRESS OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
* NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
* THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "archive_platform.h"

#include "archive.h"
#include "archive_digest_private.h"

/* In particular, force the configure probe to break if it tries
 * to test a combination of OpenSSL and libmd. */
#if defined(ARCHIVE_CRYPTO_OPENSSL) && defined(ARCHIVE_CRYPTO_LIBMD)
#error Cannot use both OpenSSL and libmd.
#endif

/* Common in other bcrypt implementations, but missing from VS2008. */
#ifndef BCRYPT_SUCCESS
#define BCRYPT_SUCCESS(r) ((NTSTATUS)(r) == STATUS_SUCCESS)
#endif

/*
 * Message digest functions for Windows platform.
 */
#if defined(ARCHIVE_CRYPTO_MD5_WIN)    ||\
	defined(ARCHIVE_CRYPTO_SHA1_WIN)   ||\
	defined(ARCHIVE_CRYPTO_SHA256_WIN) ||\
	defined(ARCHIVE_CRYPTO_SHA384_WIN) ||\
	defined(ARCHIVE_CRYPTO_SHA512_WIN)

/*
 * Initialize a Message digest.
 */
#if defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA
static int
win_crypto_init(Digest_CTX *ctx, const WCHAR *algo)
{
	NTSTATUS status;
	ctx->valid = 0;

	status = BCryptOpenAlgorithmProvider(&ctx->hAlg, algo, NULL, 0);
	if (!BCRYPT_SUCCESS(status))
		return (ARCHIVE_FAILED);
	status = BCryptCreateHash(ctx->hAlg, &ctx->hHash, NULL, 0, NULL, 0, 0);
	if (!BCRYPT_SUCCESS(status)) {
		BCryptCloseAlgorithmProvider(ctx->hAlg, 0);
		return (ARCHIVE_FAILED);
	}

	ctx->valid = 1;
	return (ARCHIVE_OK);
}
#else
static int
win_crypto_init(Digest_CTX *ctx, DWORD prov, ALG_ID algId)
{

	ctx->valid = 0;
	if (!CryptAcquireContext(&ctx->cryptProv, NULL, NULL,
	    prov, CRYPT_VERIFYCONTEXT)) {
		if (GetLastError() != (DWORD)NTE_BAD_KEYSET)
			return (ARCHIVE_FAILED);
		if (!CryptAcquireContext(&ctx->cryptProv, NULL, NULL,
		    prov, CRYPT_NEWKEYSET))
			return (ARCHIVE_FAILED);
	}

	if (!CryptCreateHash(ctx->cryptProv, algId, 0, 0, &ctx->hash)) {
		CryptReleaseContext(ctx->cryptProv, 0);
		return (ARCHIVE_FAILED);
	}

	ctx->valid = 1;
	return (ARCHIVE_OK);
}
#endif

/*
 * Update a Message digest.
 */
static int
win_crypto_Update(Digest_CTX *ctx, const unsigned char *buf, size_t len)
{

	if (!ctx->valid)
		return (ARCHIVE_FAILED);

#if defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA
	BCryptHashData(ctx->hHash,
		      (PUCHAR)(uintptr_t)buf,
		      (ULONG)len, 0);
#else
	CryptHashData(ctx->hash,
		      (unsigned char *)(uintptr_t)buf,
		      (DWORD)len, 0);
#endif
	return (ARCHIVE_OK);
}

static int
win_crypto_Final(unsigned char *buf, size_t bufsize, Digest_CTX *ctx)
{
#if !(defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA)
	DWORD siglen = (DWORD)bufsize;
#endif

	if (!ctx->valid)
		return (ARCHIVE_FAILED);

#if defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA
	BCryptFinishHash(ctx->hHash, buf, (ULONG)bufsize, 0);
	BCryptDestroyHash(ctx->hHash);
	BCryptCloseAlgorithmProvider(ctx->hAlg, 0);
#else
	CryptGetHashParam(ctx->hash, HP_HASHVAL, buf, &siglen, 0);
	CryptDestroyHash(ctx->hash);
	CryptReleaseContext(ctx->cryptProv, 0);
#endif
	ctx->valid = 0;
	return (ARCHIVE_OK);
}

#endif /* defined(ARCHIVE_CRYPTO_*_WIN) */


/* MD5 implementations */
#if defined(ARCHIVE_CRYPTO_MD5_LIBC)

static int
__archive_md5init(archive_md5_ctx *ctx)
{
  MD5Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_md5update(archive_md5_ctx *ctx, const void *indata,
    size_t insize)
{
  MD5Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_md5final(archive_md5_ctx *ctx, void *md)
{
  MD5Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_MD5_LIBMD)

static int
__archive_md5init(archive_md5_ctx *ctx)
{
  MD5Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_md5update(archive_md5_ctx *ctx, const void *indata,
    size_t insize)
{
  MD5Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_md5final(archive_md5_ctx *ctx, void *md)
{
  MD5Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_MD5_LIBSYSTEM)

// These functions are available in macOS 10.4 and later, but deprecated from 10.15 onwards.
// We need to continue supporting this feature regardless, so suppress the warnings.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif

static int
__archive_md5init(archive_md5_ctx *ctx)
{
  CC_MD5_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_md5update(archive_md5_ctx *ctx, const void *indata,
    size_t insize)
{
  CC_MD5_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_md5final(archive_md5_ctx *ctx, void *md)
{
  CC_MD5_Final(md, ctx);
  return (ARCHIVE_OK);
}

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#elif defined(ARCHIVE_CRYPTO_MD5_MBEDTLS)

static int
__archive_md5init(archive_md5_ctx *ctx)
{
  mbedtls_md5_init(ctx);
  if (mbedtls_md5_starts_ret(ctx) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_md5update(archive_md5_ctx *ctx, const void *indata,
    size_t insize)
{
  if (mbedtls_md5_update_ret(ctx, indata, insize) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_md5final(archive_md5_ctx *ctx, void *md)
{
  if (mbedtls_md5_finish_ret(ctx, md) == 0) {
    mbedtls_md5_free(ctx);
    return (ARCHIVE_OK);
  } else {
    mbedtls_md5_free(ctx);
    return (ARCHIVE_FATAL);
  }
}

#elif defined(ARCHIVE_CRYPTO_MD5_NETTLE)

static int
__archive_md5init(archive_md5_ctx *ctx)
{
  md5_init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_md5update(archive_md5_ctx *ctx, const void *indata,
    size_t insize)
{
  md5_update(ctx, insize, indata);
  return (ARCHIVE_OK);
}

static int
__archive_md5final(archive_md5_ctx *ctx, void *md)
{
  md5_digest(ctx, MD5_DIGEST_SIZE, md);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_MD5_OPENSSL)

static int
__archive_md5init(archive_md5_ctx *ctx)
{
  if ((*ctx = EVP_MD_CTX_new()) == NULL)
	return (ARCHIVE_FAILED);
  if (!EVP_DigestInit(*ctx, EVP_md5()))
	return (ARCHIVE_FAILED);
  return (ARCHIVE_OK);
}

static int
__archive_md5update(archive_md5_ctx *ctx, const void *indata,
    size_t insize)
{
  EVP_DigestUpdate(*ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_md5final(archive_md5_ctx *ctx, void *md)
{
  /* HACK: archive_write_set_format_xar.c is finalizing empty contexts, so
   * this is meant to cope with that. Real fix is probably to fix
   * archive_write_set_format_xar.c
   */
  if (*ctx) {
    EVP_DigestFinal(*ctx, md, NULL);
    EVP_MD_CTX_free(*ctx);
    *ctx = NULL;
  }
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_MD5_WIN)

static int
__archive_md5init(archive_md5_ctx *ctx)
{
#if defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA
  return (win_crypto_init(ctx, BCRYPT_MD5_ALGORITHM));
#else
  return (win_crypto_init(ctx, PROV_RSA_FULL, CALG_MD5));
#endif
}

static int
__archive_md5update(archive_md5_ctx *ctx, const void *indata,
    size_t insize)
{
  return (win_crypto_Update(ctx, indata, insize));
}

static int
__archive_md5final(archive_md5_ctx *ctx, void *md)
{
  return (win_crypto_Final(md, 16, ctx));
}

#else

static int
__archive_md5init(archive_md5_ctx *ctx)
{
	(void)ctx; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_md5update(archive_md5_ctx *ctx, const void *indata,
    size_t insize)
{
	(void)ctx; /* UNUSED */
	(void)indata; /* UNUSED */
	(void)insize; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_md5final(archive_md5_ctx *ctx, void *md)
{
	(void)ctx; /* UNUSED */
	(void)md; /* UNUSED */
	return (ARCHIVE_FAILED);
}

#endif

/* RIPEMD160 implementations */
#if defined(ARCHIVE_CRYPTO_RMD160_LIBC)

static int
__archive_ripemd160init(archive_rmd160_ctx *ctx)
{
  RMD160Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_ripemd160update(archive_rmd160_ctx *ctx, const void *indata,
    size_t insize)
{
  RMD160Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_ripemd160final(archive_rmd160_ctx *ctx, void *md)
{
  RMD160Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_RMD160_LIBMD)

static int
__archive_ripemd160init(archive_rmd160_ctx *ctx)
{
  RIPEMD160_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_ripemd160update(archive_rmd160_ctx *ctx, const void *indata,
    size_t insize)
{
  RIPEMD160_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_ripemd160final(archive_rmd160_ctx *ctx, void *md)
{
  RIPEMD160_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_RMD160_MBEDTLS)

static int
__archive_ripemd160init(archive_rmd160_ctx *ctx)
{
  mbedtls_ripemd160_init(ctx);
  if (mbedtls_ripemd160_starts_ret(ctx) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_ripemd160update(archive_rmd160_ctx *ctx, const void *indata,
    size_t insize)
{
  if (mbedtls_ripemd160_update_ret(ctx, indata, insize) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_ripemd160final(archive_rmd160_ctx *ctx, void *md)
{
  if (mbedtls_ripemd160_finish_ret(ctx, md) == 0) {
    mbedtls_ripemd160_free(ctx);
    return (ARCHIVE_OK);
  } else {
    mbedtls_ripemd160_free(ctx);
    return (ARCHIVE_FATAL);
  }
}

#elif defined(ARCHIVE_CRYPTO_RMD160_NETTLE)

static int
__archive_ripemd160init(archive_rmd160_ctx *ctx)
{
  ripemd160_init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_ripemd160update(archive_rmd160_ctx *ctx, const void *indata,
    size_t insize)
{
  ripemd160_update(ctx, insize, indata);
  return (ARCHIVE_OK);
}

static int
__archive_ripemd160final(archive_rmd160_ctx *ctx, void *md)
{
  ripemd160_digest(ctx, RIPEMD160_DIGEST_SIZE, md);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_RMD160_OPENSSL)

static int
__archive_ripemd160init(archive_rmd160_ctx *ctx)
{
  if ((*ctx = EVP_MD_CTX_new()) == NULL)
	return (ARCHIVE_FAILED);
  if (!EVP_DigestInit(*ctx, EVP_ripemd160()))
	return (ARCHIVE_FAILED);
  return (ARCHIVE_OK);
}

static int
__archive_ripemd160update(archive_rmd160_ctx *ctx, const void *indata,
    size_t insize)
{
  EVP_DigestUpdate(*ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_ripemd160final(archive_rmd160_ctx *ctx, void *md)
{
  if (*ctx) {
    EVP_DigestFinal(*ctx, md, NULL);
    EVP_MD_CTX_free(*ctx);
    *ctx = NULL;
  }
  return (ARCHIVE_OK);
}

#else

static int
__archive_ripemd160init(archive_rmd160_ctx *ctx)
{
	(void)ctx; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_ripemd160update(archive_rmd160_ctx *ctx, const void *indata,
    size_t insize)
{
	(void)ctx; /* UNUSED */
	(void)indata; /* UNUSED */
	(void)insize; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_ripemd160final(archive_rmd160_ctx *ctx, void *md)
{
	(void)ctx; /* UNUSED */
	(void)md; /* UNUSED */
	return (ARCHIVE_FAILED);
}

#endif

/* SHA1 implementations */
#if defined(ARCHIVE_CRYPTO_SHA1_LIBC)

static int
__archive_sha1init(archive_sha1_ctx *ctx)
{
  SHA1Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha1update(archive_sha1_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA1Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha1final(archive_sha1_ctx *ctx, void *md)
{
  SHA1Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA1_LIBMD)

static int
__archive_sha1init(archive_sha1_ctx *ctx)
{
  SHA1_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha1update(archive_sha1_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA1_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha1final(archive_sha1_ctx *ctx, void *md)
{
  SHA1_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA1_LIBSYSTEM)

static int
__archive_sha1init(archive_sha1_ctx *ctx)
{
  CC_SHA1_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha1update(archive_sha1_ctx *ctx, const void *indata,
    size_t insize)
{
  CC_SHA1_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha1final(archive_sha1_ctx *ctx, void *md)
{
  CC_SHA1_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA1_MBEDTLS)

static int
__archive_sha1init(archive_sha1_ctx *ctx)
{
  mbedtls_sha1_init(ctx);
  if (mbedtls_sha1_starts_ret(ctx) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_sha1update(archive_sha1_ctx *ctx, const void *indata,
    size_t insize)
{
  if (mbedtls_sha1_update_ret(ctx, indata, insize) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_sha1final(archive_sha1_ctx *ctx, void *md)
{
  if (mbedtls_sha1_finish_ret(ctx, md) == 0) {
    mbedtls_sha1_free(ctx);
    return (ARCHIVE_OK);
  } else {
    mbedtls_sha1_free(ctx);
    return (ARCHIVE_FATAL);
  }
}

#elif defined(ARCHIVE_CRYPTO_SHA1_NETTLE)

static int
__archive_sha1init(archive_sha1_ctx *ctx)
{
  sha1_init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha1update(archive_sha1_ctx *ctx, const void *indata,
    size_t insize)
{
  sha1_update(ctx, insize, indata);
  return (ARCHIVE_OK);
}

static int
__archive_sha1final(archive_sha1_ctx *ctx, void *md)
{
  sha1_digest(ctx, SHA1_DIGEST_SIZE, md);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA1_OPENSSL)

static int
__archive_sha1init(archive_sha1_ctx *ctx)
{
  if ((*ctx = EVP_MD_CTX_new()) == NULL)
	return (ARCHIVE_FAILED);
  if (!EVP_DigestInit(*ctx, EVP_sha1()))
	return (ARCHIVE_FAILED);
  return (ARCHIVE_OK);
}

static int
__archive_sha1update(archive_sha1_ctx *ctx, const void *indata,
    size_t insize)
{
  EVP_DigestUpdate(*ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha1final(archive_sha1_ctx *ctx, void *md)
{
  /* HACK: archive_write_set_format_xar.c is finalizing empty contexts, so
   * this is meant to cope with that. Real fix is probably to fix
   * archive_write_set_format_xar.c
   */
  if (*ctx) {
    EVP_DigestFinal(*ctx, md, NULL);
    EVP_MD_CTX_free(*ctx);
    *ctx = NULL;
  }
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA1_WIN)

static int
__archive_sha1init(archive_sha1_ctx *ctx)
{
#if defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA
  return (win_crypto_init(ctx, BCRYPT_SHA1_ALGORITHM));
#else
  return (win_crypto_init(ctx, PROV_RSA_FULL, CALG_SHA1));
#endif
}

static int
__archive_sha1update(archive_sha1_ctx *ctx, const void *indata,
    size_t insize)
{
  return (win_crypto_Update(ctx, indata, insize));
}

static int
__archive_sha1final(archive_sha1_ctx *ctx, void *md)
{
  return (win_crypto_Final(md, 20, ctx));
}

#else

static int
__archive_sha1init(archive_sha1_ctx *ctx)
{
	(void)ctx; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_sha1update(archive_sha1_ctx *ctx, const void *indata,
    size_t insize)
{
	(void)ctx; /* UNUSED */
	(void)indata; /* UNUSED */
	(void)insize; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_sha1final(archive_sha1_ctx *ctx, void *md)
{
	(void)ctx; /* UNUSED */
	(void)md; /* UNUSED */
	return (ARCHIVE_FAILED);
}

#endif

/* SHA256 implementations */
#if defined(ARCHIVE_CRYPTO_SHA256_LIBC)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
  SHA256_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA256_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  SHA256_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA256_LIBC2)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
  SHA256Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA256Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  SHA256Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA256_LIBC3)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
  SHA256Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA256Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  SHA256Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA256_LIBMD)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
  SHA256_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA256_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  SHA256_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA256_LIBSYSTEM)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
  CC_SHA256_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  CC_SHA256_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  CC_SHA256_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA256_MBEDTLS)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
  mbedtls_sha256_init(ctx);
  if (mbedtls_sha256_starts_ret(ctx, 0) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  if (mbedtls_sha256_update_ret(ctx, indata, insize) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  if (mbedtls_sha256_finish_ret(ctx, md) == 0) {
    mbedtls_sha256_free(ctx);
    return (ARCHIVE_OK);
  } else {
    mbedtls_sha256_free(ctx);
    return (ARCHIVE_FATAL);
  }
}

#elif defined(ARCHIVE_CRYPTO_SHA256_NETTLE)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
  sha256_init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  sha256_update(ctx, insize, indata);
  return (ARCHIVE_OK);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  sha256_digest(ctx, SHA256_DIGEST_SIZE, md);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA256_OPENSSL)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
  if ((*ctx = EVP_MD_CTX_new()) == NULL)
	return (ARCHIVE_FAILED);
  if (!EVP_DigestInit(*ctx, EVP_sha256()))
	return (ARCHIVE_FAILED);
  return (ARCHIVE_OK);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  EVP_DigestUpdate(*ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  if (*ctx) {
    EVP_DigestFinal(*ctx, md, NULL);
    EVP_MD_CTX_free(*ctx);
    *ctx = NULL;
  }
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA256_WIN)

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
#if defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA
  return (win_crypto_init(ctx, BCRYPT_SHA256_ALGORITHM));
#else
  return (win_crypto_init(ctx, PROV_RSA_AES, CALG_SHA_256));
#endif
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
  return (win_crypto_Update(ctx, indata, insize));
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
  return (win_crypto_Final(md, 32, ctx));
}

#else

static int
__archive_sha256init(archive_sha256_ctx *ctx)
{
	(void)ctx; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_sha256update(archive_sha256_ctx *ctx, const void *indata,
    size_t insize)
{
	(void)ctx; /* UNUSED */
	(void)indata; /* UNUSED */
	(void)insize; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_sha256final(archive_sha256_ctx *ctx, void *md)
{
	(void)ctx; /* UNUSED */
	(void)md; /* UNUSED */
	return (ARCHIVE_FAILED);
}

#endif

/* SHA384 implementations */
#if defined(ARCHIVE_CRYPTO_SHA384_LIBC)

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
  SHA384_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA384_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
  SHA384_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA384_LIBC2)

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
  SHA384Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA384Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
  SHA384Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA384_LIBC3)

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
  SHA384Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA384Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
  SHA384Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA384_LIBSYSTEM)

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
  CC_SHA384_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
  CC_SHA384_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
  CC_SHA384_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA384_MBEDTLS)

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
  mbedtls_sha512_init(ctx);
  if (mbedtls_sha512_starts_ret(ctx, 1) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
  if (mbedtls_sha512_update_ret(ctx, indata, insize) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
  if (mbedtls_sha512_finish_ret(ctx, md) == 0) {
    mbedtls_sha512_free(ctx);
    return (ARCHIVE_OK);
  } else {
    mbedtls_sha512_free(ctx);
    return (ARCHIVE_FATAL);
  }
}

#elif defined(ARCHIVE_CRYPTO_SHA384_NETTLE)

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
  sha384_init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
  sha384_update(ctx, insize, indata);
  return (ARCHIVE_OK);
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
  sha384_digest(ctx, SHA384_DIGEST_SIZE, md);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA384_OPENSSL)

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
  if ((*ctx = EVP_MD_CTX_new()) == NULL)
	return (ARCHIVE_FAILED);
  if (!EVP_DigestInit(*ctx, EVP_sha384()))
	return (ARCHIVE_FAILED);
  return (ARCHIVE_OK);
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
  EVP_DigestUpdate(*ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
  if (*ctx) {
    EVP_DigestFinal(*ctx, md, NULL);
    EVP_MD_CTX_free(*ctx);
    *ctx = NULL;
  }
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA384_WIN)

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
#if defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA
  return (win_crypto_init(ctx, BCRYPT_SHA384_ALGORITHM));
#else
  return (win_crypto_init(ctx, PROV_RSA_AES, CALG_SHA_384));
#endif
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
  return (win_crypto_Update(ctx, indata, insize));
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
  return (win_crypto_Final(md, 48, ctx));
}

#else

static int
__archive_sha384init(archive_sha384_ctx *ctx)
{
	(void)ctx; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_sha384update(archive_sha384_ctx *ctx, const void *indata,
    size_t insize)
{
	(void)ctx; /* UNUSED */
	(void)indata; /* UNUSED */
	(void)insize; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_sha384final(archive_sha384_ctx *ctx, void *md)
{
	(void)ctx; /* UNUSED */
	(void)md; /* UNUSED */
	return (ARCHIVE_FAILED);
}

#endif

/* SHA512 implementations */
#if defined(ARCHIVE_CRYPTO_SHA512_LIBC)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
  SHA512_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA512_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  SHA512_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA512_LIBC2)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
  SHA512Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA512Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  SHA512Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA512_LIBC3)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
  SHA512Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA512Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  SHA512Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA512_LIBMD)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
  SHA512_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  SHA512_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  SHA512_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA512_LIBSYSTEM)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
  CC_SHA512_Init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  CC_SHA512_Update(ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  CC_SHA512_Final(md, ctx);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA512_MBEDTLS)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
  mbedtls_sha512_init(ctx);
  if (mbedtls_sha512_starts_ret(ctx, 0) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  if (mbedtls_sha512_update_ret(ctx, indata, insize) == 0)
    return (ARCHIVE_OK);
  else
    return (ARCHIVE_FATAL);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  if (mbedtls_sha512_finish_ret(ctx, md) == 0) {
    mbedtls_sha512_free(ctx);
    return (ARCHIVE_OK);
  } else {
    mbedtls_sha512_free(ctx);
    return (ARCHIVE_FATAL);
  }
}

#elif defined(ARCHIVE_CRYPTO_SHA512_NETTLE)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
  sha512_init(ctx);
  return (ARCHIVE_OK);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  sha512_update(ctx, insize, indata);
  return (ARCHIVE_OK);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  sha512_digest(ctx, SHA512_DIGEST_SIZE, md);
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA512_OPENSSL)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
  if ((*ctx = EVP_MD_CTX_new()) == NULL)
	return (ARCHIVE_FAILED);
  if (!EVP_DigestInit(*ctx, EVP_sha512()))
	return (ARCHIVE_FAILED);
  return (ARCHIVE_OK);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  EVP_DigestUpdate(*ctx, indata, insize);
  return (ARCHIVE_OK);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  if (*ctx) {
    EVP_DigestFinal(*ctx, md, NULL);
    EVP_MD_CTX_free(*ctx);
    *ctx = NULL;
  }
  return (ARCHIVE_OK);
}

#elif defined(ARCHIVE_CRYPTO_SHA512_WIN)

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
#if defined(HAVE_BCRYPT_H) && _WIN32_WINNT >= _WIN32_WINNT_VISTA
  return (win_crypto_init(ctx, BCRYPT_SHA512_ALGORITHM));
#else
  return (win_crypto_init(ctx, PROV_RSA_AES, CALG_SHA_512));
#endif
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
  return (win_crypto_Update(ctx, indata, insize));
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
  return (win_crypto_Final(md, 64, ctx));
}

#else

static int
__archive_sha512init(archive_sha512_ctx *ctx)
{
	(void)ctx; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_sha512update(archive_sha512_ctx *ctx, const void *indata,
    size_t insize)
{
	(void)ctx; /* UNUSED */
	(void)indata; /* UNUSED */
	(void)insize; /* UNUSED */
	return (ARCHIVE_FAILED);
}

static int
__archive_sha512final(archive_sha512_ctx *ctx, void *md)
{
	(void)ctx; /* UNUSED */
	(void)md; /* UNUSED */
	return (ARCHIVE_FAILED);
}

#endif

/* NOTE: Message Digest functions are set based on availability and by the
 * following order of preference.
 * 1. libc
 * 2. libc2
 * 3. libc3
 * 4. libSystem
 * 5. Nettle
 * 6. OpenSSL
 * 7. libmd
 * 8. Windows API
 */
const struct archive_digest __archive_digest =
{
/* MD5 */
  &__archive_md5init,
  &__archive_md5update,
  &__archive_md5final,

/* RIPEMD160 */
  &__archive_ripemd160init,
  &__archive_ripemd160update,
  &__archive_ripemd160final,

/* SHA1 */
  &__archive_sha1init,
  &__archive_sha1update,
  &__archive_sha1final,

/* SHA256 */
  &__archive_sha256init,
  &__archive_sha256update,
  &__archive_sha256final,

/* SHA384 */
  &__archive_sha384init,
  &__archive_sha384update,
  &__archive_sha384final,

/* SHA512 */
  &__archive_sha512init,
  &__archive_sha512update,
  &__archive_sha512final
};


int
main(int argc, char **argv)
{
  archive_sha256_ctx ctx;
  archive_sha256_init(&ctx);
  archive_sha256_update(&ctx, *argv, argc);
  archive_sha256_final(&ctx, NULL);
  return 0;
}
