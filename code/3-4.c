#include <stdio.h>

int main() {
    int arr0[3] = {1,2,3};
    int arr1[3] = {4,5,6};
    int (*p[2])[3] = {&arr0, &arr1};

    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", *(*(*(p + x)) + y));
}
