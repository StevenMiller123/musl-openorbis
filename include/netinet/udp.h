#ifndef _NETINET_UDP_H
#define _NETINET_UDP_H

#ifdef __cplusplus
extern "C" {
#endif

#include <features.h>
#include <stdint.h>

#ifdef _GNU_SOURCE
#define uh_sport source
#define uh_dport dest
#define uh_ulen len
#define uh_sum check
#endif

struct udphdr {
	uint16_t uh_sport;
	uint16_t uh_dport;
	uint16_t uh_ulen;
	uint16_t uh_sum;
};

#define UDP_ENCAP	0x01

#define UDP_ENCAP_ESPINUDP_NON_IKE 1
#define UDP_ENCAP_ESPINUDP	2

#define UDP_ENCAP_ESPINUDP_PORT		500
#define UDP_ENCAP_ESPINUDP_MAXFRAGLEN	552

#define SOL_UDP            17

#ifdef __cplusplus
}
#endif

#endif
