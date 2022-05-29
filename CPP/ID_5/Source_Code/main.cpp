/*
This program solves Project Euler ID 4
    Created by: Enrique Hurtado
    Date: 28 May 2022
    History:
        Date: 05/28/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>

using namespace std;

int programmed(int num_in, int max_f) {
    int check;
    check = 0;
    for (int i = 2; i <= max_f; ++i) {
        check += (num_in%i);
    }
    return check;
}

inline int bruteforce(int num_in) {
    int check;
    return (num_in%2)+(num_in%3)+(num_in%4)+(num_in%5)+(num_in%6)+(num_in%7)+(num_in%8)+(num_in%9)+(num_in%10)+(num_in%11)+(num_in%12)+(num_in%13)+(num_in%14)+(num_in%15)+(num_in%16)+(num_in%17)+(num_in%18)+(num_in%19)+(num_in%20);
}

int main(void) {
    int check;
    int i = 1;
    int n = 20;

    auto fun = [&](int num_in) {
        int check;
        check = 0;
        for (int i = 2; i <= 20; ++i) {
            check += (num_in%i);
        }
        return check;  
    };
    
    while (check != 0) {
        //check = 0;
        //for (int j = 2; j <= n; ++j) {
        //    check += (i%j);
        //}
        //check = (i%2)+(i%3)+(i%4)+(i%5)+(i%6)+(i%7)+(i%8)+(i%9)+(i%10)+(i%11)+(i%12)+(i%13)+(i%14)+(i%15)+(i%16)+(i%17)+(i%18)+(i%19)+(i%20);
        check = fun(i);
        //check = programmed(i,n);
        //check = bruteforce(i);
        ++i;
    }
    printf("i = %d\n", i-1);
    return 0;
} 