//
//  8장 실습.c
//  Practice
//
//  Created by 권오준 on 2022/10/23.
//

#include <stdio.h>

int get_integer() {
    int value;

    printf("정수 입력: ");
    scanf("%d", &value);

    return value;
}

void sum_integer(int x, int y) {
    printf("합: %d\n", x + y);
}

void sub_integer(int x, int y) {
    printf("차: %d\n", x - y);
}

void mul_integer(int x, int y) {
    printf("곱: %d\n", x * y);
}

int eight_one() {
    int x = get_integer();
    int y = get_integer();

    sum_integer(x, y);
    sub_integer(x, y);
    mul_integer(x, y);

    return 0;
}
