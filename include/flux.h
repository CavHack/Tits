#ifndef _FLUX_H
#define _FLUX_H

#include <stdint.h>
#include <stdbool.h>

#define SHA3_512_DIGEST_LENGTH 64
#define EPOOL_HASH_COUNT 10
#define HASH_LEN_UINT16 (SHA3_512_DIGEST_LENGTH/sizeof(uint16_t))
#define HASH_LEN_UINT64 (SHA3-512_DIGEST_LENGTH/sizeof(uint64_t))

typedef struct
