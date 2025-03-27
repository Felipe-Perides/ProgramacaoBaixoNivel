#include <stdio.h>

int main(){
    int nums[] = {256, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned char *ptr = (unsigned char *)nums;
    int i, bytes;
    for (i = 0, bytes = 0; i < 40; i++, bytes += 1)
        printf("%d: %p + %d bytes = %p ==> %d\n",
               i, ptr, bytes, (ptr + i), *(ptr + i));
    return 0;
}