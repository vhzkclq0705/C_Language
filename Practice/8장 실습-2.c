//
//  8장 실습-2.c
//  Practice
//
//  Created by 권오준 on 2022/10/23.
//

#include <stdio.h>
#include <stdlib.h>

int get_ranNumber() {
    return rand() % 101 + 100;
}

void print_Primes(int x) {
    for (int i = 2; i <= x; i++)
    {
        int cnt = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
                cnt++;
        }
        if (cnt == 1)
            printf("%d\n", i);
    }
}

int eight_tow() {
    int x = get_ranNumber();
    print_Primes(x);

    return 0;
}
