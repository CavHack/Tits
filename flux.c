#include<assert.h>
#include<stdlib.h> // for NULL

#include "flux.h"
#include "gibbs.h"

/*
 * Increment the counter
 * (little endian array of bytes)
 *
 */

static void increment_counter(genisys_s *flux) {
  uint32_t i;

  for (i=0; i<SHA3_512_DIGEST_LENGTH; i++) {

    genisys->seed[i] ++;
    if (genisys->seed[i] > 0) {
      break;
    }

  }

}
