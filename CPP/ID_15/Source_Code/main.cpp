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

void matrix_nearest_nbr(int n, vector <pair<int,int>> &vec_out) {
    int nn = (n+1)*(n+1);
    int ii;
    int jj;
    int mtrx[nn][nn];
    int count=1;

    for(int i=0; i<=n; ++i) {
        for(int j=0; j<=n; ++j) {
            mtrx[i][j] = count;
            count ++;
        }
    }

    for(int i=0; i<=n; ++i) {
        for(int j=0; j<=n; ++j) {
            ii = i + 1;
            jj = j + 1;
            if (ii != n+1) {
                vec_out[mtrx[i][j]].first = mtrx[ii][j];
            }
            if (jj != n+1) {
                vec_out[mtrx[i][j]].second = mtrx[i][jj];
            }
         }
    }
}

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