/*
This program solves Project Euler ID 16
    Created by: Enrique Hurtado
    Date: 28 January 2023
    History:
        Date: 01/28/23 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>

using namespace std;

inline int cti(char c_in) {
    return int(c_in)-48;
}

double exp_sqr(double x, int n) {
    if (n == 1) {
        return x;
    } else if ((n%2) != 0) {
        return x*exp_sqr(x*x,(n-1)/2);
    }
    return exp_sqr(x*x,n/2);
}

int main(void) {
    string pow_2;
    int count;

    pow_2 = to_string(exp_sqr(2,1000));

    count = 0;
    for (auto item : pow_2) {
        if (item == '.') break;
        count += cti(item);
    }

    cout << count << endl;
}