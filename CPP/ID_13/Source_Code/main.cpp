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
    ifstream data_in("alt_data.txt");

    while(getline(data_in,line)) {
        line_read.push_back(line);
    }

    cout << atol(line_read[0]) << endl;
}
