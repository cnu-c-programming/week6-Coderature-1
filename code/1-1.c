#include <stdio.h>

int main() {
    // 변수 선언
    int target_array[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    int (*array_pointer)[5] = target_array;
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int *pointer_array[5] = {&a, &b, &c, &d, &e};

    printf("sizeof(array_pointer): %zu\n", sizeof(array_pointer));
    printf("sizeof(pointer_array): %zu\n", sizeof(pointer_array));
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", (void *)(array_pointer + i));
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        printf("%p\n", (void *)(pointer_array + i));
    }

    return 0;
}
