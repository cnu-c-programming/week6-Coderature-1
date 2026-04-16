#include <stdio.h>

void print_2d_arr(int *rows[], int row_size, int col_size) {
    // 포인터 배열로 출력
    for (int i=0; i<row_size; i++) {
        for (int j=0; j<col_size; j++) {
            printf("%d ", rows[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {1,2,3,4,5,6};
    int *rows[2] = {arr[0], arr[1]};

    print_2d_arr(rows, 2, 3);

}
