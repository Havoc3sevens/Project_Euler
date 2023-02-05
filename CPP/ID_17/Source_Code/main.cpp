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
    if (to_string(int_in).size() == 1) {
        return ones(int_in);
    } else if (to_string(int_in).size() == 2) {
        if (cti(to_string(int_in)[0]) == 1) {
            return teens(int_in);
        } else if (cti(to_string(int_in)[1]) == 0){
            return tens(cti(to_string(int_in)[0]));
        } else {
            return tens(cti(to_string(int_in)[0])) + ones(cti(to_string(int_in)[1]));
        }
    } else if (to_string(int_in).size() == 3) {
        if ((cti(to_string(int_in)[2]) == 0) && (cti(to_string(int_in)[1]) == 0)) {
            return hundreds(cti(to_string(int_in)[0]));
        } else if (cti(to_string(int_in)[1]) == 1) {
            return hundreds(cti(to_string(int_in)[0])) + teens(cti(to_string(int_in)[1])*10+cti(to_string(int_in)[2]));
        } else if (cti(to_string(int_in)[1]) == 0){
            return hundreds(cti(to_string(int_in)[0])) + ones(cti(to_string(int_in)[2]));
        } else {
            if (cti(to_string(int_in)[2]) == 0) {
                return hundreds(cti(to_string(int_in)[0])) + tens(cti(to_string(int_in)[1]));
            } else {
                return hundreds(cti(to_string(int_in)[0])) + tens(cti(to_string(int_in)[1])) + ones(cti(to_string(int_in)[2]));
            }
        } 
    } else if (to_string(int_in).size() == 4) {
        return thousands(cti(to_string(int_in)[0]));
    }
    return "Null";
}

int main(void) {
    long int count=0;
    for (int i=1; i <= 1000; i++) {
        count += (int_to_long_string(i)).length(); 
    }
    cout << count << endl;
}