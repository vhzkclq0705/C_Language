//
//  2-1.c
//  Practice
//
//  Created by 권오준 on 2022/10/02.
//

#include <stdio.h>

int two_one() {
    int money, price, change, coin1, coin2;

    printf("투입한 돈:");
    scanf("%d", &money);

    printf("물건값:");
    scanf("%d", &price);

    change = money - price;

    printf("거스름돈: %d\n", change);

    coin1 = change / 100;
    coin2 = (change % 100) / 10;

    printf("100원 동전의 개수 : %d\n", coin1);
    printf("10원 동전의 개수 : %d\n", coin2);

    return 0;
}
