/*
This program solves Project Euler ID 7
    Created by: Enrique Hurtado
    Date: 30 May 2022
    History:
        Date: 05/30/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>

int prime_n (int n_in) {
    int m;
    int count;
    int f_i;

    count = 0;
    m = 2;
    while(count < n_in) {
        for(int i = 2; i <= m; ++i) {
            f_i = i;
            if (m%i == 0) {
                break;
            }
        }
        if(m == f_i) {
            count += 1;
        }
        m += 1;
    }
    return f_i;
}

int main(void) {
    int n = 10001;
    printf("prime = %d\n", prime_n(n));
}