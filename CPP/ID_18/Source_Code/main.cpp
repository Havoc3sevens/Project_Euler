/*
This program solves Project Euler ID 18
    Created by: Enrique Hurtado
    Date: 05 February 2023
    History:
        Date: 02/05/23 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>

using namespace std;

int main(void) {
    int arr[15][15] = {{75},
                       {95, 64},
                       {17, 47, 82},
                       {18, 35, 87, 10},
                       {20, 4, 82, 47, 65},
                       {19, 1, 23, 75, 3, 34},
                       {88, 2, 77, 73, 7, 63, 67},
                       {99, 65, 4, 28, 6, 16, 70, 92},
                       {41, 41, 26, 56, 83, 40, 80, 70, 33},
                       {41, 48, 72, 33, 47, 32, 37, 16, 94, 29},
                       {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14},
                       {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57},
                       {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48},
                       {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31},
                       {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}};

    int n;
    int i;
    int ii;
    int num_res;

    n = 15;
    
    for (int nn = n; nn >= 2; nn--) {
        i = nn-1;
        ii = i-1;

        for (int j=0; j <= ii; j++) {
            if (arr[i][j] > arr[i][j+1]) {
                num_res = arr[i][j]; 
            } else {
                num_res = arr[i][j+1];
            }
            arr[ii][j] += num_res;
        }
    }
    cout << arr[0][0] << endl;
}