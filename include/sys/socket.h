#ifndef	_SYS_SOCKET_H
#define	_SYS_SOCKET_H
#ifdef __cplusplus
extern "C" {
#endif

#include <features.h>

#define __NEED_socklen_t
#define __NEED_sa_family_t
#define __NEED_size_t
#define __NEED_ssize_t
#define __NEED_uid_t
#define __NEED_pid_t
#define __NEED_gid_t
#define __NEED_struct_iovec

#include <bits/alltypes.h>

#include <bits/socket.h>

struct msghdr {
	void *msg_name;
	socklen_t msg_namelen;
	struct iovec *msg_iov;
	int msg_iovlen;
	void *msg_control;
	socklen_t msg_controllen;
	int msg_flags;
};

struct cmsghdr {
	socklen_t cmsg_len;
	int cmsg_level;
	int cmsg_type;
};

#ifdef _GNU_SOURCE
struct ucred {
	pid_t pid;
	uid_t uid;
	gid_t gid;
};

struct mmsghdr {
	struct msghdr msg_hdr;
	unsigned int  msg_len;
};

struct timespec;

int sendmmsg (int, struct mmsghdr *, unsigned int, unsigned int);
int recvmmsg (int, struct mmsghdr *, unsigned int, unsigned int, struct timespec *);
#endif

struct linger {
	int l_onoff;
	int l_linger;
};

#define SHUT_RD 0
#define SHUT_WR 1
#define SHUT_RDWR 2

#ifndef SOCK_STREAM
#define SOCK_STREAM     1
#define SOCK_DGRAM      2
#endif

#define SOCK_RAW        3
#define SOCK_RDM        4
#define SOCK_SEQPACKET  5
#define SOCK_DGRAM_P2P  6
#define SOCK_STREAM_P2P 10

#define PF_UNSPEC       0
#define PF_NETLINK      PF_UNSPEC
#define PF_PACKET       PF_UNSPEC
#define PF_LOCAL        1
#define PF_UNIX         PF_LOCAL
#define PF_FILE         PF_LOCAL
#define PF_INET         2
#define PF_IMPLINK      3
#define PF_PUP          4
#define PF_CHAOS        5
#define PF_NETBIOS      6
#define PF_ISO          7
#define PF_OSI          PF_ISO
#define PF_ECMA         8
#define PF_DATAKIT      9
#define PF_CCITT        10
#define PF_SNA          11
#define PF_DECnet       12
#define PF_DLI          13
#define PF_LAT          14
#define PF_HYLINK       15
#define PF_APPLETALK    16
#define PF_ROUTE        17
#define PF_LINK         18
#define PF_XTP          19
#define PF_COIP         20
#define PF_CNT          21
#define PF_RTIP         22
#define PF_IPX          23
#define PF_SIP          24
#define PF_PIP          25
#define PF_ISDN         26
#define PF_E164         PF_ISDN
#define PF_KEY          27
#define PF_INET6        28
#define PF_NATM         29
#define PF_ATM          30
#define PF_HDRCMPLT     31
#define PF_NETGRAPH     32
#define PF_SLOW         33
#define PF_SCLUSTER     34
#define PF_ARP          35
#define PF_BLUETOOTH    36
#define PF_IEEE80211    37
#define PF_MAX          38

#define AF_UNSPEC       PF_UNSPEC
#define AF_NETLINK      PF_NETLINK
#define AF_PACKET       PF_PACKET
#define AF_LOCAL        PF_LOCAL
#define AF_UNIX         PF_UNIX
#define AF_FILE         PF_FILE
#define AF_INET         PF_INET
#define AF_IMPLINK      PF_IMPLINK
#define AF_PUP          PF_PUP
#define AF_CHAOS        PF_CHAOS
#define AF_NETBIOS      PF_NETBIOS
#define AF_ISO          PF_ISO
#define AF_OSI          PF_OSI
#define AF_ECMA         PF_ECMA
#define AF_DATAKIT      PF_DATAKIT
#define AF_CCITT        PF_CCITT
#define AF_SNA          PF_SNA
#define AF_DECnet       PF_DECnet
#define AF_DLI          PF_DLI
#define AF_LAT          PF_LAT
#define AF_HYLINK       PF_HYLINK
#define AF_APPLETALK    PF_APPLETALK
#define AF_ROUTE        PF_ROUTE
#define AF_LINK         PF_LINK
#define AF_XTP          PF_XTP
#define AF_COIP         PF_COIP
#define AF_CNT          PF_CNT
#define AF_RTIP         PF_RTIP
#define AF_IPX          PF_IPX
#define AF_SIP          PF_SIP
#define AF_PIP          PF_PIP
#define AF_ISDN         PF_ISDN
#define AF_E164         PF_E164
#define AF_KEY          PF_KEY
#define AF_INET6        PF_INET6
#define AF_NATM         PF_NATM
#define AF_ATM          PF_ATM
#define AF_HDRCMPLT     PF_HDRCMPLT
#define AF_NETGRAPH     PF_NETGRAPH
#define AF_SLOW         PF_SLOW
#define AF_SCLUSTER     PF_SCLUSTER
#define AF_ARP          PF_ARP
#define AF_BLUETOOTH    PF_BLUETOOTH
#define AF_IEEE80211    PF_IEEE80211
#define AF_MAX          PF_MAX

#ifndef SO_DEBUG
#define SO_DEBUG        0x0001
#define SO_ACCEPTCONN   0x0002
#define SO_REUSEADDR    0x0004
#define SO_KEEPALIVE    0x0008
#define SO_DONTROUTE    0x0010
#define SO_BROADCAST    0x0020
#define	SO_USELOOPBACK	0x0040		/* bypass hardware when possible */
#define SO_LINGER       0x0080
#define SO_OOBINLINE    0x0100
#define SO_REUSEPORT    0x0200
#define SO_TIMESTAMP    0x0400
#define SO_NOSIGPIPE    0x0800
#define SO_ACCEPTFILTER 0x1000
#define SO_BINTIME      0x2000
#define SO_NO_OFFLOAD   0x4000
#define SO_NO_DDP       0x8000
#define SO_ONESBCAST    0x10000
#define SO_USECRYPTO    0x20000
#define SO_USESIGNATURE 0x40000

#define SO_SNDBUF       0x1001
#define SO_RCVBUF       0x1002
#define SO_SNDLOWAT     0x1003
#define SO_RCVLOWAT     0x1004
#define SO_SNDTIMEO     0x1005
#define SO_RCVTIMEO     0x1006
#define SO_ERROR        0x1007
#define SO_TYPE         0x1008
#define SO_LABEL        0x1009
#define SO_PEERLABEL    0x1010
#define SO_LISTENQLIMIT 0x1011
#define SO_LISTENQLEN   0x1012
#define SO_LISTENINCQLEN 0x1013
#define SO_SETFIB       0x1014
#define SO_USER_COOKIE  0x1015
#define SO_PROTOCOL     0x1016
#define SO_PROTOTYPE    SO_PROTOCOL

#define SO_ERROR_EX     0x1107
#define SO_ACCEPTTIMEO  0x1108
#define SO_CONNECTTIMEO 0x1109
#define SO_NBIO         0x1200
#define SO_POLICY       0x1201
#define SO_NAME         0x1202
#define SO_PRIORITY     0x1203
#endif

#ifndef SOL_SOCKET
#define SOL_SOCKET      0xffff
#endif

#define SOMAXCONN       128

#define MSG_OOB          0x1
#define MSG_PEEK         0x2
#define MSG_DONTROUTE    0x4
#define MSG_EOR          0x8
#define MSG_TRUNC        0x10
#define MSG_CTRUNC       0x20
#define MSG_WAITALL      0x40
#define MSG_DONTWAIT     0x80
#define MSG_EOF          0x100
#define MSG_NOTIFICATION 0x2000
#define MSG_NBIO         0x4000
#define MSG_COMPAT       0x8000
#define MSG_NOSIGNAL     0x20000
#define MSG_USECRYPTO    0x100000
#define MSG_USESIGNATURE 0x200000
#define MSG_PEEKLEN      (0x400000 | MSG_PEEK)

#define CMSG_ALIGN(n) (((size_t)(n) + sizeof(long) - 1) & ~(size_t)(sizeof(long) - 1))

#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + CMSG_ALIGN(sizeof(struct cmsghdr)))
#define CMSG_NXTHDR(mhdr, cmsg) \
	((char *)(cmsg) == 0 ? CMSG_FIRSTHDR(mhdr) : \
	 ((char *)(cmsg) + CMSG_ALIGN(((struct cmsghdr *)(cmsg))->cmsg_len) + \
	  CMSG_ALIGN(sizeof(struct cmsghdr)) > \
	  (char *)(mhdr)->msg_control + (mhdr)->msg_controllen) ? \
	 (struct cmsghdr *)0 : \
	 (struct cmsghdr *)(void *)((char *)(cmsg) + \
	  CMSG_ALIGN(((struct cmsghdr *)(cmsg))->cmsg_len)))
#define CMSG_FIRSTHDR(mhdr) \
	((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? \
	 (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0)

#define CMSG_SPACE(len) (CMSG_ALIGN(sizeof(struct cmsghdr)) + CMSG_ALIGN(len))
#define CMSG_LEN(len)   (CMSG_ALIGN(sizeof(struct cmsghdr)) + (len))

#define SCM_RIGHTS      0x01
#define SCM_TIMESTAMP   0x02
#define SCM_CREDS       0x03
#define SCM_BINTIME     0x04

struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
};

struct sockaddr_storage {
	unsigned char ss_len;
	sa_family_t ss_family;
	char __ss_pad1[6];
	long long __ss_align;
	char __ss_pad2[112];
};

int __sys_socketex(const char*, int, int, int);
int socket (int, int, int);
int socketpair (int, int, int, int [2]);

int shutdown (int, int);

int bind (int, const struct sockaddr *, socklen_t);
int connect (int, const struct sockaddr *, socklen_t);
int listen (int, int);
int accept (int, struct sockaddr *__restrict, socklen_t *__restrict);
int accept4(int, struct sockaddr *__restrict, socklen_t *__restrict, int);

int getsockname (int, struct sockaddr *__restrict, socklen_t *__restrict);
int getpeername (int, struct sockaddr *__restrict, socklen_t *__restrict);

ssize_t send (int, const void *, size_t, int);
ssize_t recv (int, void *, size_t, int);
ssize_t sendto (int, const void *, size_t, int, const struct sockaddr *, socklen_t);
ssize_t recvfrom (int, void *__restrict, size_t, int, struct sockaddr *__restrict, socklen_t *__restrict);
ssize_t sendmsg (int, const struct msghdr *, int);
ssize_t recvmsg (int, struct msghdr *, int);

int getsockopt (int, int, int, void *__restrict, socklen_t *__restrict);
int setsockopt (int, int, int, const void *, socklen_t);

int sockatmark (int);

#if _REDIR_TIME64
#ifdef _GNU_SOURCE
__REDIR(recvmmsg, __recvmmsg_time64);
#endif
#endif

#ifdef __cplusplus
}
#endif
#endif

