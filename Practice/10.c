//
//  10.c
//  Practice
//
//  Created by 권오준 on 2022/11/20.
//

#include<stdio.h>
#include<string.h>

int main() {
    char sentence[100];
    char same[100];
    
    printf("Insert a sentence: ");
    // MAC OS에서는 fgets를 사용해야 하기 때문에 이렇게 작성하였습니다.
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("Insert the same: ");
    fgets(same, sizeof(same), stdin);
    
    if (strcmp(sentence, same) == 0) {
        printf("Correct!!\nWords are: ");
        for (int i = 0; same[i] != '\0'; i++) {
            if (same[i] == ' ') {
                printf("\n");
            } else {
                printf("%c", same[i]);
            }
        }
    } else {
        printf("Incorrect!!\n");
    }
}
