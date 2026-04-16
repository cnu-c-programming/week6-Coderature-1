#include <stdio.h>

int main() {
    // 다중 배열 포인터
    int arr3[2][3][4] = { 0 };
    
    int (*p)[3][4] = arr3;

    printf("%zu\n", sizeof(p));     //int (*)[3][4]
    printf("%zu\n", sizeof(*p));    //int [3][4]
    printf("%zu\n", sizeof(**p));   //int [4]
    printf("%zu\n", sizeof(***p));  //int

    printf("%p\n", (void *)p);
    printf("%p\n", (void *)*p);
    printf("%p\n", (void *)**p);
    printf("%d\n", ***p);

    return 0;
}
