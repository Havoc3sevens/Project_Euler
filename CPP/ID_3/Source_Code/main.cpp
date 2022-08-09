/*
This program solves Project Euler ID 3
    Created by: Enrique Hurtado
    Date: 22 February 2022
    History:
        Date: 02/22/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <cstdio>
#include <vector>

using std::vector;

vector <int> prime_factors(long int nn) {
    int prime_f;
    vector <int> prime_vec;

    while(nn != 1) {
        if (not(nn%2)) {
            prime_f = 2;
        }
        else {
            for (int i = 2; (nn%i); ++i) {
                prime_f = i+1;
            }
        }
        nn = nn/prime_f;
        prime_vec.push_back(prime_f);
    }
    return prime_vec;
}

int max_value(vector <int> vec_in) {
    int max_val;
    max_val = vec_in[0];
    for(int i : vec_in) {
        if (i > max_val) {
            max_val = i;
        }
    }
    return max_val;
}

int main(void) {
    long int nn;
    vector <int> prime_vec;
    int max_val;

    nn = 600851475143;

    prime_vec = prime_factors(nn);

    max_val = max_value(prime_vec);

    printf("max = %d\n", max_val);
}