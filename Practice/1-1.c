//
//  1-1.c
//  Practice
//
//  Created by 권오준 on 2022/09/25.
//

#include <stdio.h>
#define EXCHANGE_RATE 1392

int one_one() {
    int usd, krw;
    
    printf("달러화 금액을 입력하시오: ");
    scanf("%d", &usd);
    
    krw = EXCHANGE_RATE * usd;
    printf("달러화 %d달러는 %d원입니다.\n", usd, krw);
    
    return 0;
}
