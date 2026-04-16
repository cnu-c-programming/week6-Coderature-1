#include <stdio.h>

void print_2d_arr(int *element, int row_size, int col_size) {
    // 1차원 포인터로 2차원 배열 접근
    for (int i=0; i<row_size; i++) {
        for (int j=0; j<col_size; j++) {
            printf("%d ", *(element + i * col_size + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    print_2d_arr(&arr[0][0], 2, 3);

}
