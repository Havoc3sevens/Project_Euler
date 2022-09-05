/*
This program solves Project Euler ID 12
    Created by: Enrique Hurtado
    Date: 04 September 2022
    History:
        Date: 09/04/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>
#include <omp.h>

using namespace std;

int devisor_count(long int val) {
    int count = 0;
    int sqrt_val = sqrt(val);
    #pragma omp parallel shared(count)
    #pragma omp for
    for(int i=1; i<=val; ++i) {
        if (val%i==0) {
            #pragma omp critical
            ++count;
        }
    }
    return count;
}

int main(void) {
    long int tri_num=0;
    long int max_tri;
    int count_val=0;
    int max_count=0;

    for (int i=1; count_val<500; ++i) {
        tri_num +=i;
        count_val = devisor_count(tri_num);
        if(count_val>max_count) {
            max_count = count_val;
            max_tri = tri_num;
        }
        if(i%100==0) {
            cout << "i = " << i << endl;
            cout << "Current num = " << tri_num << endl;
            cout << "Max dev = " << max_count << endl;
            cout << "Max num = " << max_tri << endl;
        }
    }

    cout << tri_num << endl;
    cout << count_val << endl;

    return 0;

}
