/*
This program solves Project Euler ID 11
    Created by: Enrique Hurtado
    Date: 23 August 2022
    History:
        Date: 08/23/22 || Mod: Program written || By: Enrique Hurtado
*/
#include "mylib.h"

int main(void) {
    vector<vector<int>> mtrx;
    int row_num;
    int column_num;
    long int max=0;
    long int horz_prod;
    long int diag_prod;
    long int r_diag_prod;
    long int vert_prod;
    mtrx = matrix_read("data.txt", ',');
    row_num = mtrx.size();
    column_num = mtrx[0].size();

    for (int i=0; i<row_num;++i) {
        for (int j=0; j<column_num;++j) {
            if (j<column_num-3) {
                horz_prod = mtrx[i][j] * mtrx[i][j+1] * mtrx[i][j+2] * mtrx[i][j+3];
                if(horz_prod>max) {
                    max = horz_prod;
                }
            }
            if (i<row_num-3) {
                vert_prod = mtrx[i][j] * mtrx[i+1][j] * mtrx[i+2][j] * mtrx[i+3][j];
                if(vert_prod>max) {
                    max = vert_prod;
                }
            }
            if ((i<row_num-3) && (j<column_num-3)) {
                diag_prod = mtrx[i][j] * mtrx[i+1][j+1] * mtrx[i+2][j+2] * mtrx[i+3][j+3];
                if(diag_prod>max) {
                    max = diag_prod;
                }
            }
            if ((i<row_num-3) && (j>=3)) {
                r_diag_prod = mtrx[i][j] * mtrx[i+1][j-1] * mtrx[i+2][j-2] * mtrx[i+3][j-3];
                if(r_diag_prod>max) {
                    max = r_diag_prod;
                }
            }
        }
    }

    cout << "Max product = " << max << endl;

    return 0;

}
