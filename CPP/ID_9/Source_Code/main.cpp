/*
This program solves Project Euler ID 8
    Created by: Enrique Hurtado
    Date: 02 June 2022
    History:
        Date: 02/02/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>

int main(void) {
    int res;
    int r_i;
    int r_j;
    int r_k;
    bool test = true;

    for (int i = 1; test; ++i) {
        for (int j = i-1; j >0; --j) {
            for (int k = j-1; k >0; --k) {
                if (k*k + j*j == i*i) {
                    if (k+j+i == 1000) {
                        res = k*j*i;
                        test = false;
                    }
                }
            }
        }
    }
    
    printf("res = %d\n", res);

}