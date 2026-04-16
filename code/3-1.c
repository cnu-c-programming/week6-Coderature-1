#include <stdio.h>

// 배열 출력 함수
void print_array(int arr[][3]) {
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int arr0[2][3] = {1, 2, 3, 4, 5, 6};     // 전체 나열
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 행 단위 중괄호
    int arr2[2][3] = {1, 2, 3, 4};            // 부분 초기화
    int arr3[2][3] = {{1, 2}, {4}};           // 부분 초기화 {행 단위}

    print_array(arr0);
    print_array(arr1);
    print_array(arr2);
    print_array(arr3);
}