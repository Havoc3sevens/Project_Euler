#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrix_read(string file_in, char delim) {
    string line;
    string item;
    ifstream data_in(file_in);
    vector<vector<int>> data_mtrx;

    while(getline(data_in,line)) {
        stringstream line_st(line);
        vector<int> v;
        while(!line_st.eof()) {
            getline(line_st,item,delim);
            v.push_back(stoi(item));
        }
        data_mtrx.push_back(v);
    }
    data_in.close();
    return data_mtrx;
}