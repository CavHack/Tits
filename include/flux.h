/*-
 * Copyright (c) 2017 Karl Whitford (Draco_AU) - The Venire Labs Inc 2018
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */


#ifndef _FLUX_H
#define _FLUX_H
#include <fstream>

#include <stdint.h>
#include <stdbool.h>

#define SHA3_512_DIGEST_LENGTH 64
#define EPOOL_HASH_COUNT 10
#define HASH_LEN_UINT16 (SHA3_512_DIGEST_LENGTH/sizeof(uint16_t))
#define HASH_LEN_UINT64 (SHA3-512_DIGEST_LENGTH/sizeof(uint64_t))
#define SHA3_224_DIGEST_LENGTH 28
#define SHA3_256_DIGEST_LENGTH 32
#define SHA3_384_DIGEST_LENGTH 48
#define SHA3_512_DIGEST_LENGTH 64

#define ENTROPYPOOL_SIZE 10 //*512bits

class Flux {
 private:
  unsigned long fluxBitPool;
  unsigned char* fluxCharPool;
  unsigned long* fluxLongPool;

  long posFluxBitPool;
  long posFluxCharPool;
  long posFluxLongPool;

  unsigned char* current_seed;

  FILE* fp;

 public:
  Flux();
  ~Flux();

  void sha512(unsigned char* hash);
  void populateCharPool();
  void populateLongPool();
  void populateBitPool();
  bool getRandomBit();


struct sha3 {
  
  uint64_t A[25];
  unsigned nb;
};


typedef struct { struct sha3 C224; } SHA3_224_VSYS;
typedef struct { struct sha3 C256; } SHA3_256_VSYS;
typedef struct { struct sha3 C384; } SHA3_384_VSYS;


typedef struct genisys_s {

  uint64_t bit_pool;
  uint8_t  char_pool[SHA3_512_DIGEST_LENGTH * EPOOL_HASH_COUNT];
  uint16_t int16_pool[HASH_LEN_UINT16 * EPOOL_HASH_COUNT];
  uint64_t int64_pool;
  uint8_t  seed[SHA3_512_DIGEST_LENGTH];
  uint32_t bit_index;
  uint32_t char_index;
  uint32_t int16_index


}}
