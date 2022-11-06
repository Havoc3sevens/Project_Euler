/*
This program solves Project Euler ID 13
    Created by: Enrique Hurtado
    Date: 06 September 2022
    History:
        Date: 09/06/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    string line;
    vector<string> line_read;
    int long sum_int;
    int long res;
    ifstream data_in("alt_data.txt");

    sum_int;
    while(getline(data_in,line)) {
        line_read.push_back(line);
        sum_int += stol(line);
    }

    res = stol(to_string(sum_int).substr(0,10));

    cout << res << endl;
}
