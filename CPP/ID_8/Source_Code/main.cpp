/*
This program solves Project Euler ID 8
    Created by: Enrique Hurtado
    Date: 01 June 2022
    History:
        Date: 06/01/22 || Mod: Program written || By: Enrique Hurtado
        Date: 06/02/22 || Mod: Solved || By: Enrique Hurtado
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void max_num_in_series(vector <long int> a_in, int nn) {
    long int max_val;
    int max_i;
    long int prod;

    int n = a_in.size();
    int i;
    max_val = 0;
    for(int i; i <= n-nn; ++i) {
        prod = 1;
        for (unsigned int j=0; j<nn; ++j) {
            prod *= a_in[i+j];
        }

        if (prod > max_val) {
            max_val = prod;
            max_i = i;
        }
    }

    for (int j=0; j<nn; ++j) {
        cout << a_in[max_i+j];
        if(j < nn-1) {
            cout << ", ";
        }
    }
    cout<< endl;

    //cout << "maxi = " << max_i << endl;
    cout << "Prod = " << max_val << endl;
}

int main(void) {
    string line_in;
    ifstream f1 ("data.txt");
    vector <long int> a1;
    int nn = 13;
    long int max_val;
    int max_i;
    long int prod;

    if (f1.is_open()) {
        while (getline (f1,line_in)) {a1.push_back(stoi(line_in));}
        f1.close();
    } else {cout << "Could not open file." <<endl;}

    max_num_in_series(a1, nn);
    
}