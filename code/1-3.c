#include <stdio.h>

int main() {
    // 문자열 배열 선언
    char *names[5] = {"kim", "lee", "park", "choi", "jeong"};

    
    for (int i=0; i<5; i++) {
        for (int j=0; ; j++) {
            char c = *(*(names + i) + j);
            if (c == '\0') {
                break;
            }
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}
