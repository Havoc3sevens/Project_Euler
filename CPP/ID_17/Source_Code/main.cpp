/*
This program solves Project Euler ID 17
    Created by: Enrique Hurtado
    Date: 04 February 2023
    History:
        Date: 02/04/23 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>
#include <string>
#include "string_int.h"

using namespace std;

string int_to_long_string(int int_in) {
    int new_int;
    if (to_string(int_in).size() == 1) {
        return ones(int_in);
    } else if (to_string(int_in).size() == 2) {
        if (cti(to_string(int_in)[0]) == 1) return teens(int_in);
        new_int = int_in - cti(to_string(int_in)[0])*10;
        if (new_int == 0) return tens(cti(to_string(int_in)[0]));
        return tens(cti(to_string(int_in)[0])) + int_to_long_string(new_int);
    } else if (to_string(int_in).size() == 3) {
        int new_int;
        new_int = int_in - cti(to_string(int_in)[0])*100;
        if (new_int == 0) return hundreds(cti(to_string(int_in)[0]));
        return hundreds(cti(to_string(int_in)[0])) + int_to_long_string(new_int);
    } else if (to_string(int_in).size() == 4) {
        int new_int;
        new_int = int_in - cti(to_string(int_in)[0])*1000;
        if (new_int == 0) return thousands(cti(to_string(int_in)[0]));
        return thousands(cti(to_string(int_in)[0])) + int_to_long_string(new_int);
    }
    return "Null";
}

int main(void) {
    int count=0;

    for (int i = 1; i <= 1000; i++) {
        count += int_to_long_string(i).length();
    }
    
    cout << count << endl;
}