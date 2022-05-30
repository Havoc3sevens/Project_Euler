/*
This program solves Project Euler ID 6
    Created by: Enrique Hurtado
    Date: 30 May 2022
    History:
        Date: 05/30/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>

int sum_sqr_delta(int num_n) {
    int sum_i = 0;
    int sum_sq = 0;
    int sum_i_sq;

    for (int i = 1; i <= num_n; ++i) {
        sum_i += i;
        sum_sq += i*i;
    }
    sum_i_sq = sum_i*sum_i;
    return sum_i_sq - sum_sq;
}

int main(void) {
    int n = 100;

    printf("Res = %d\n", sum_sqr_delta(n));
}