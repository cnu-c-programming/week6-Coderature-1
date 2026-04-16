#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // 이중 루프로 주소 출력하기
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%p\n", (void*)&arr[i][j]);
        }
    }
    printf("\n");
}
