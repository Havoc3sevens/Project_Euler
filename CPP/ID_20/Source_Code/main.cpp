/*
This program solves Project Euler ID 20
    Created by: Enrique Hurtado
    Date: 15 March 2023
    History:
        Date: 03/15/23 || Mod: Program written || By: Enrique Hurtado
        Date: 04/10/23 || Mod: Product engine built || By: Enrique Hurtado
        Date: 05/06/23 || Mod: Factorial engine built || By: Enrique Hurtado
*/

#include <iostream>
#include "a_prod.h"

using namespace std;

int main(void) {
    int arr_store[500]={};
    int s_size;
    int sum_res;

    long_factorial(100,arr_store,s_size);

    sum_res = 0;
    for(int i = 0; i <= s_size; i++) {
        sum_res += arr_store[i];
    }

    cout << sum_res << endl;

}