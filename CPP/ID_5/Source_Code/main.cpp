/*
This program solves Project Euler ID 4
    Created by: Enrique Hurtado
    Date: 28 May 2022
    History:
        Date: 05/28/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>

int main(void) {
    int check;
    int i = 1;
    int n = 20;
    
    while (check != 0) {
        check = (i%2)+(i%3)+(i%4)+(i%5)+(i%6)+(i%7)+(i%8)+(i%9)+(i%10)+(i%11)+(i%12)+(i%13)+(i%14)+(i%15)+(i%16)+(i%17)+(i%18)+(i%19)+(i%20);
        ++i;
    }
    printf("i = %d\n", i-1);
    return 0;
} 