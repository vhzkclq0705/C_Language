//
//  9.c
//  Practice
//
//  Created by 권오준 on 2022/11/13.
//

#include <stdio.h>

void myMath(int* num1, int* num2, int* max, int* min, int* average) {
    if (*num1 > *num2) {
        *max = *num1;
        *min = *num2;
    } else {
        *max = *num2;
        *min = *num1;
    }
    
    *average = (*num1 + *num2) / 2;
}

int nine() {
    int num1 = 10;
    int num2 = 20;
    
    int max;
    int min;
    int average;
    
    myMath(&num1, &num2, &max, &min, &average);
    
    printf("max = %d, min = %d, average = %d\n", max, min, average);
    
    return 0;
}
