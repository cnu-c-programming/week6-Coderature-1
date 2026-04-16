#include <stdio.h>

int main() {
    // 2차원 배열 
    int arr2[2][4] = {{1,2,3,4}, {5,6,7,8}};
    int (*p)[4];

    for (int i = 0; i < 2; i++) {
        p = arr2 + i;
        for (int j = 0; j < 4; j++) {
            printf("%d\n", (*p)[j]);
        }
    }
    return 0;
}
