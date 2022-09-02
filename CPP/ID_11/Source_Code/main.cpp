/*
This program solves Project Euler ID 11
    Created by: Enrique Hurtado
    Date: 23 August 2022
    History:
        Date: 08/23/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string line;
    string item;
    ifstream data_in("data.txt");
    vector<vector<int>> data_mtrx;
    int ii;
    int jj;

    while(getline(data_in,line)) {
        stringstream line_st(line);
        vector<int> v;
        while(!line_st.eof()) {
            getline(line_st,item,',');
            cout << item << " ";
            v.push_back(stoi(item));
        }
        cout << endl;
        data_mtrx.push_back(v);
    }
    data_in.close();

    ii = data_mtrx.size();
    jj = data_mtrx[0].size();

    for(int i=0; i<ii; ++i) {
        for(int j=0; j<jj; ++j) {
            cout << data_mtrx[i][j]<< " ";
        }
        cout << endl;
    }

}
