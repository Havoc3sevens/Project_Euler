/*
This program solves Project Euler ID 4
    Created by: Enrique Hurtado
    Date: 07 March 2022
    History:
        Date: 03/07/22 || Mod: Program written || By: Enrique Hurtado
        Date: 05/28/22 || Mod: Program finished || By: Enrique Hurtado
*/
#include <iostream>
#include <string>

using namespace std;

string revers_string(string s_in) {
    string s_out;
    for (int i=s_in.size()-1; i >= 0; --i) {
        s_out.push_back(s_in[i]);
    }
    return s_out;
}

bool check_palin(int int_in) {
    string s_1;
    string s_2;
    bool palin = true;
    s_1 = to_string(int_in);
    s_2 = revers_string(s_1);
    if (s_1 != s_2) {
        palin = false;
    }
    return palin;
}

int main(void) {
    int n = 999;
    int max_num = 0;

    for (int i=1; i <=n; ++i) {
        for (int j=i; j <= n; ++j) {
            if (check_palin(i*j)) {
                if ((i*j)>max_num) {
                    max_num = i*j;
                } 
            }
        }
    }

    cout << max_num << endl;

    return 0;

}