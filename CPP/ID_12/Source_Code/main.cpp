/*
This program solves Project Euler ID 12
    Created by: Enrique Hurtado
    Date: 04 September 2022
    History:
        Date: 09/04/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>
#include <math.h>

using namespace std;

int devisor_count(long int val) {
    int count = 0;
    int sqrt_val = sqrt(val);
    for(int i=1; i<=sqrt_val; ++i) {
        if (val%i==0) {
            count += 2;
        }
    }
    if (sqrt_val*sqrt_val == val){
        count = count - 1;
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
    }

    cout << tri_num << endl;
    cout << count_val << endl;

    return 0;

}
