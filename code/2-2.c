#include <stdio.h>

int sum_2d_arr(int (*row)[3], int size) {
    int sum = 0;
    // 배열 요소 모두 더하기
    for (int i=0; i<size; i++) {
        for (int j=0; j<sizeof(*row) / sizeof(int); j++) {
            sum += row[i][j];
        }
    }
    return sum;
}

int main() {
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    printf("%d\n", sum_2d_arr(arr, 2));

}
