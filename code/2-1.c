#include <stdio.h>

void print_arr(int *p, int size) {
    // 포인터 크기 출력
    printf("%zu\n", sizeof(p));
    for (int i=0; i<size; i++) 
        printf("%d ", *(p + i));
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // 배열 크기 출력
    printf("%zu\n", sizeof(arr));
    for (int i=0; i<5; i++) 
        printf("%d ", *(arr + i));
    printf("\n");

    print_arr(arr, 5);

}
