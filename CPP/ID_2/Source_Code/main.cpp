/*
This program solves Project Euler ID 2
    Created by: Enrique Hurtado
    Date: 20 February 2022
    History:
        Date: 02/20/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>

int main(void) {
    int n;
    int fb;
    int val;
    int prev_val;
    int sum;

    n = 50;
    fb = 0;
    val = 1;
    prev_val = 0;
    sum = 0;

    while (fb < 4000000) {
        fb = prev_val + val;
        if (not(fb%2)) {
            sum += fb;
        }
        prev_val = val;
        val = fb;
    }
    printf("Sum = %d\n", sum);
}