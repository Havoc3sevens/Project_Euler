/*
This program solves Project Euler ID 10
    Created by: Enrique Hurtado
    Date: 19 June 2022
    History:
        Date: 02/19/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>
#include <vector>

using namespace std;

int is_prime(int n_in, vector<int> p_a_in) {
    for (int prm : p_a_in) {
		if ((n_in%prm)==0) {
			return 0;
		}
    }
    return 1;
}

int main(void) {
	long int sum_p = 0;
	int n_max = 2000000;
    vector<int> p_arr;

    p_arr.push_back(2);
    sum_p = 2;

	for(int i = 3; i <=n_max; ++(++i)) {
		if (is_prime(i,p_arr)) {
			sum_p += i;
            p_arr.push_back(i);
        }
    }
    cout << sum_p << endl;
}
