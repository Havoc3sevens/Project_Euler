/*
This program solves Project Euler ID 14
    Created by: Enrique Hurtado
    Date: 03 October 2022
    History:
        Date: 10/03/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>

using namespace std;

bool is_even(int num_in) {
    bool res;

    if (num_in%2==0) {
        return true;
    } else {
        return false;
    }
}

int get_sequence(int num_in) {
    int count=1;
    while(num_in!=1) {
        if (is_even(num_in)) {
            num_in = num_in/2;
        } else {
            num_in = 3*num_in+1;
        }
        cout << num_in << endl;
        ++count;
    }
    return count;
}

int get_sequence_count(long int num_in) {
    int count=1;
    while(num_in!=1) {
        if (is_even(num_in)) {
            num_in = num_in/2;
        } else {
            num_in = 3*num_in+1;
        }
        ++count;
    }
    return count;
}

int main(void) {
    int n=13;
    int res;
    int t_num;
    int max=0;
    for(int i = 1; i <1000000; ++i){
        cout<<"Number being tested: " << i << endl;
        n=i;
        res = get_sequence_count(n);
        cout << "Total count: "<< res << endl << endl;
        if (res>max) {
            max = res;
            t_num = n;
        }
    }

    cout << "Num = " << t_num << ", Total = " << max << endl;

    return 0;
}
