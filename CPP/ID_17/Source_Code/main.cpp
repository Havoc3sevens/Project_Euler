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

int main(void) {
    for (int i=1; i <= 1000; i++) { 
        if (to_string(i).size() == 1) {
            cout << ones(i) << endl;
        } else if (to_string(i).size() == 2) {
            if (cti(to_string(i)[0]) == 1) {
                cout << teens(i) << endl;
            } else if (cti(to_string(i)[1]) == 0){
                cout << tens(cti(to_string(i)[0])) << endl;
            } else {
                cout << tens(cti(to_string(i)[0])) << " " << ones(cti(to_string(i)[1])) << endl;
            }
        } else if (to_string(i).size() == 3) {
            if ((cti(to_string(i)[2]) == 0) && (cti(to_string(i)[1]) == 0)) {
                cout << hundreds(cti(to_string(i)[0])) << endl;    
            } else if (cti(to_string(i)[1]) == 1) {
                cout << hundreds(cti(to_string(i)[0])) << " and " << teens(cti(to_string(i)[1])*10+cti(to_string(i)[2])) << endl;
            } else if (cti(to_string(i)[1]) == 0){
                cout << hundreds(cti(to_string(i)[0])) << " and " << ones(cti(to_string(i)[2])) << endl;
            } else {
                if (cti(to_string(i)[2]) == 0) {
                    cout << hundreds(cti(to_string(i)[0])) << " and " << tens(cti(to_string(i)[1])) << endl;    
                } else {
                    cout << hundreds(cti(to_string(i)[0])) << " and " << tens(cti(to_string(i)[1])) << " " << ones(cti(to_string(i)[2])) << endl;
                }
            } 
        } else if (to_string(i).size() == 4) {
            cout << thousands(cti(to_string(i)[0])) << endl;
        }
    }
}