#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // malloc example
    arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Using malloc:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    // realloc example
    arr = (int *) realloc(arr, 10 * sizeof(int));
    printf("\n\nAfter realloc to 10 integers:\n");
    for (int i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // free memory
    free(arr);
    return 0;
}


/*

🔹 Dynamic Memory Allocation (from <stdlib.h>)
    | Function    | Purpose                             |
    | ----------- | ----------------------------------- |
    | `malloc()`  | Allocates memory (uninitialized)    |
    | `calloc()`  | Allocates memory (initialized to 0) |
    | `realloc()` | Resizes previously allocated block  |
    | `free()`    | Frees the allocated memory          |

🔹 1. malloc() – Memory Allocation
    Allocates memory block of given size (in bytes)
    Returns a void pointer to the first byte of the block
    Memory is uninitialized
✅ Syntax:
c
ptr = (cast_type *) malloc(size_in_bytes);

🔹 2. calloc() – Contiguous Allocation
    Allocates memory for multiple blocks, initializes all to zero
✅ Syntax:
c
ptr = (cast_type *) calloc(number_of_elements, size_of_each);

🔹 3. realloc() – Reallocate Memory
    Changes the size of previously allocated memory
    Keeps old data up to the smaller of new or old size
✅ Syntax:
c
ptr = (cast_type *) realloc(ptr, new_size_in_bytes);

🔹 4. free() – Free Allocated Memory
    Used to release memory allocated by malloc(), calloc(), or realloc()
✅ Syntax:
c
free(ptr);

*/