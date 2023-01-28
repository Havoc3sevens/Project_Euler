/*
This program solves Project Euler ID 15
    Created by: Enrique Hurtado
    Date: 14 November 2022
    History:
        Date: 11/14/22 || Mod: Program written || By: Enrique Hurtado
        Date: 01/27/22 || Mod: Pascal Triagle || By: Enrique Hurtado
*/
#include <iostream>

using namespace std;

double f(int n) {
    double res=1;
    for(int i=n; i>0; i--){
        res = res*i;
    }
    return res;
}

int main(void) {
    //after realizing that a programming method was not the most practical
    //I noticed a pattern with the number of path per row and column
    //it was related to pascal's triangle. I used that relation to
    //come up with an answer. My previous attempts are saved on GitHub
    int k = 20;
    int n = (2*k);

    cout << long (f(n)/(f(k)*f(n-k))) << endl;
}