#ifndef MEM_MANAGER_H
#define MEM_MANAGER_H

#include <stdlib.h>
#include <string.h>

// Block structure for memory management
typedef struct Block {
    size_t size;                    // Size of the block
    int is_free;                    // Block free status: 1 if free, 0 if allocated
    struct Block* next_block;       // Pointer to the next block
} Block;

// Function prototypes for memory management
void mem_init(size_t size);
void* mem_alloc(size_t size);
void mem_free(void* ptr);
void* mem_resize(void* block, size_t size);
void mem_deinit();

#endif
