/* config.h.  Generated from config.h.in by configure.  */
/* Define the following if you have the corresponding header */
#define CPU_VENDOR_OS "i686-pc-linux-gnu"
/* #undef HAVE_NETCONFIG_H */
/* #undef HAVE_NETDIR_H */
#define HAVE_POLL_H 1
#define HAVE_PTHREAD_H 1
#define HAVE_STRINGS_H 1
/* #undef HAVE_XTI_INET_H */
/* #undef HAVE_SYS_FILIO_H */
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_SELECT_H 1
/* #undef HAVE_SYS_SOCKIO_H */
#define HAVE_SYS_SYSCTL_H 1
#define HAVE_SYS_TIME_H 1

/* Define if we can include <time.h> with <sys/time.h> */
#define TIME_WITH_SYS_TIME 1

/* Define the following if the function is provided */
#define HAVE_BZERO 1
#define HAVE_GETHOSTBYNAME2 1
#define HAVE_POLL 1
#define HAVE_PSELECT 1
#define HAVE_VSNPRINTF 1

/* Define the following if the function prototype is in a header */
#define HAVE_GETADDRINFO_PROTO 1
#define HAVE_GETNAMEINFO_PROTO 1
#define HAVE_GETHOSTNAME_PROTO 1
#define HAVE_GETRUSAGE_PROTO 1
#define HAVE_HSTRERROR_PROTO 1
#define HAVE_IF_NAMETOINDEX_PROTO 1
#define HAVE_INET_ATON_PROTO 1
#define HAVE_INET_PTON_PROTO 1
/* #undef HAVE_ISFDTYPE_PROTO */
#define HAVE_PSELECT_PROTO 1
#define HAVE_SNPRINTF_PROTO 1
#define HAVE_SOCKATMARK_PROTO 1

/* Define the following if the structure is defined. */
#define HAVE_ADDRINFO_STRUCT 1
#define HAVE_IF_NAMEINDEX_STRUCT 1
/* #undef HAVE_SOCKADDR_DL_STRUCT */
#define HAVE_TIMESPEC_STRUCT 1

/* Define the following if feature is provided. */
/* #undef HAVE_SOCKADDR_SA_LEN */
#define HAVE_MSGHDR_MSG_CONTROL 1

/* Names of XTI devices for TCP and UDP */
/* #undef HAVE_DEV_TCP */
/* #undef HAVE_DEV_XTI_TCP */
/* #undef HAVE_DEV_STREAMS_XTISO_TCP */

/* Define the following to the appropriate datatype, if necessary */
/* #undef int8_t */
/* #undef int16_t */
/* #undef int32_t */
/* #undef uint8_t */
/* #undef uint16_t */
/* #undef uint32_t */
/* #undef size_t */
/* #undef ssize_t */
/* socklen_t should be typedef'd as uint32_t, but configure defines it
   to be an unsigned int, as it is needed early in the compile process,
   sometimes before some implementations define uint32_t. */
/* #undef socklen_t */
/* #undef sa_family_t */
/* #undef SA_FAMILY_T */

/* #undef t_scalar_t */
/* #undef t_uscalar_t */

/* Define the following, if system suports the feature */
#define IPV4 1
#define IPv4 1
#define IPV6 1
#define IPv6 1
#define UNIXDOMAIN 1
#define UNIXdomain 1
#define MCAST 1
