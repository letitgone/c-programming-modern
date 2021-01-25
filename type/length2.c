/**
 * @Author ZhangGJ
 * @Date 2021/01/25 22:05
 */

#include <stdio.h>

int main(void) {
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n') {
        len++;
    }
    printf("Your message was %d character(s) long.\n", len);
    return 0;
}
