/*
This program solves Project Euler ID 5
    Created by: Enrique Hurtado
    Date: 29 May 2022
    History:
        Date: 05/29/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>

int smllst_multi(int max_fctr) {
    int i = 0;
    int j = max_fctr;
    while (i != 1) {
        i = max_fctr;
        while((j%i==0 && i!=1)) {
            --i;
        }
        ++j;
    }
    return j-1;
}

int main(void) {
    int res;
    int n = 20;
    res = smllst_multi(n);
    printf("Smallest Multiple from 1-%d = %d\n", n, res);
    return 0;
} 