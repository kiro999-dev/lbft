#include <stdlib.h>


void *ft_memset(void *s, int c, size_t n) {
    size_t i = 0;
    unsigned char *ptr = (unsigned char*) s;
    while (i < n) {
        *ptr = c;
        i++;
        ptr++;
    }
    return s;
}


void *ft_memalloc(size_t size) {
    void *ptr = malloc(size);
    if (ptr) {
        ft_memset(ptr, '0', size);
        return ptr;
    } else {
        return NULL;
    }
}
