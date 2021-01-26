/**
 * @Author ZhangGJ
 * @Date 2021/01/26 21:10
 */

#include <stdio.h>

#define N 10

int main(void) {
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i >= 0; i++) {
        scanf("%d", &a[i]);
    }
    printf("In reverse order: ");
    for (i = N - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
