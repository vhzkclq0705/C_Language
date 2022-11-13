//
//  Bubble_Sort.c
//  Practice
//
//  Created by 권오준 on 2022/10/23.
//

#include<stdio.h>

// bubble sort
int bubble_Sort() {

    //추가변수는 허용되지 않습니다.
    int sort[4][4] = {{5,8,10,15}, {6,9,2,14}, {3,12,16,13}, {1,11,7,4}};
    int tmp1, tmp2;
    int i, j, x, y;

    //버블 정렬을 사용하세요.
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            tmp1 = j;
            for (x = i; x < 4; x++) {
                for(y = tmp1; y < 4; y++) {
                    if (sort[i][j] > sort[x][y]) {
                        tmp2 = sort[i][j];
                        sort[i][j] = sort[x][y];
                        sort[x][y] = tmp2;
                    }
                }
                tmp1 = 0;
            }
        }
    }


    //아래의 출력문을 쓰세요.
    printf("The aligned values are: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", sort[i][j]);
        }
        printf("\n");
    }

    //아래와 같이 출력되면 됩니다.
    //1 2 3 4
    //5 6 7 8
    //9 10 11 12
    //13 14 15 16
    
    return 0;
}
