/*
This program solves Project Euler ID 1
    Created by: Enrique Hurtado
    Date: 20 February 2022
    History:
        Date: 02/20/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>

int main(void) {
    int n;
    int sum;

    n = 10000;
    sum = 0;
    for (int i = 1; i < n; ++i) {
        if (i%3 == 0 || (i%5 == 0)) {
            sum += i;
        }
    }
    printf("\nTotal = %d\n\n",sum);
}