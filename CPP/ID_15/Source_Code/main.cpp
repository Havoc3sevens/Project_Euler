/*
This program solves Project Euler ID 15
    Created by: Enrique Hurtado
    Date: 14 November 2022
    History:
        Date: 11/14/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector <pair<int,int>> vec_init={};
    vector <pair<int,int>> vec={};
    int nn = 5;
    int count = 0;
    int ii = 0;
    vec_init.push_back(make_pair(0,0));
    while(vec_init.size() != 0) {
        vec = {};
        for(auto i = 0; i != vec_init.size(); ++i) {
            if ((vec_init[i].first + 1) != nn+1) {
                vec.push_back(make_pair((vec_init[i].first + 1),vec_init[i].second));
            }
            if ((vec_init[i].second + 1) != nn+1) {
                vec.push_back(make_pair(vec_init[i].first,(vec_init[i].second + 1)));
            }
            if ((vec_init[i].first == nn) && (vec_init[i].second == nn)) {
                count += 1;
            }
        }
        vec_init = vec;
        cout << ii << endl;
        cout << "---" << endl;
        ii += 1;
    }

    cout << count << endl;

}