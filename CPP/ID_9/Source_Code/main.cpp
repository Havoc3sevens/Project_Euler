/*
This program solves Project Euler ID 8
    Created by: Enrique Hurtado
    Date: 02 June 2022
    History:
        Date: 02/02/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>

int main(void) {
    int n;
    int sq_sm;
    int sum_all;
    bool test = true;
    n = 20;
    int i = 1;
    sum_all = 1;
    do{
        for (int j = i-1; j >0; --j) {
            for (int k = j-1; k >0; --k) {
                sq_sm = k*k + j*j;
                if (sq_sm == i*i) {
                    sum_all = k+j+i;
                    printf("%d", sum_all != 1000);
                    if (sum_all == 1000) {
                        printf("i = %d, j = %d, k = %d\n", i, j, k);
                        printf("j*j = %d, k*k = %d, k*k + j*j = %d\n", j*j, k*k, sq_sm);
                        printf("sum_all = %d\n", sum_all);
                        test = false;
                    }
                    printf("sum_all = %d\n", sum_all);
                }
                printf("sum_all = %d\n", sum_all);
            }
            printf("sum_all = %d\n", sum_all);
        }
        printf("sum_all = %d\n", sum_all);
        ++i;
    } while (test);

    printf("sum_all = %d\n", sum_all);
    
}