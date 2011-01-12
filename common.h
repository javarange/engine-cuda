#ifndef common_h
#define common_h

#include <cuda_runtime_api.h>

#define OUTPUT_QUIET		0
#define OUTPUT_NORMAL		1
#define OUTPUT_VERBOSE		2

#define NUM_BLOCK_PER_MULTIPROCESSOR	3
#define SIZE_BLOCK_PER_MULTIPROCESSOR	256*1024
#define MAX_THREAD			128

#define STATE_THREAD_AES	4
#define AES_KEY_SIZE_128	16
#define AES_KEY_SIZE_192	24
#define AES_KEY_SIZE_256	32

#define STATE_THREAD_DES	2
#define DES_MAXNR		8
#define DES_BLOCK_SIZE		8
#define DES_KEY_SIZE		8
#define DES_KEY_SIZE_64		8

#define IDEA_BLOCK_SIZE		8
#define IDEA_KEY_SIZE		8
#define IDEA_KEY_SIZE_64	8

#define BF_BLOCK_SIZE		8
#define BF_KEY_SIZE_64		8
#define BF_KEY_SIZE_128		16

#define CMLL_BLOCK_SIZE		16
#define CMLL_KEY_SIZE_128	16
#define CMLL_KEY_SIZE_192	24
#define CMLL_KEY_SIZE_256	32

#define CAMELLIA_BLOCK_SIZE	16
#define CAMELLIA_KEY_SIZE_128	16
#define CAMELLIA_KEY_SIZE_192	24
#define CAMELLIA_KEY_SIZE_256	32

#define TX (blockIdx.x * (blockDim.x * blockDim.y) + (blockDim.y * threadIdx.x) + threadIdx.y)

#endif
