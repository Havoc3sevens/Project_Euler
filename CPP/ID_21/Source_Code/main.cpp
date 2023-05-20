/*
This program solves Project Euler ID 21
    Created by: Enrique Hurtado
    Date: 13 May 2023
    History:
        Date: 05/13/23 || Mod: Program written || By: Enrique Hurtado
*/

/*
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void file_in_1D(vector<int> & vec_out) {
    string item;

    ifstream file_in ("primes.txt");
    
    while (getline(file_in,item))
    {
        vec_out.push_back(stoi(item));
    }
    file_in.close();
    cout << "File read in." << endl;
}

int main(void) {
    int i_n=16;
    int f_n=16;
    int test_i;
    vector <int> primes;
    int prime;
    int p_i;
    
    file_in_1D(primes);

    for(int i = i_n; i <= f_n; i++){
        cout << "Number being tested: " << i << endl;
        cout << "Prime factors = ";
        p_i=0;
        test_i = i;
        while(test_i>1) {
            prime = primes[p_i];
            if((test_i%prime)==0) {
                test_i = test_i/prime;
                cout << prime << " ";
            } else {
                p_i++;
            }
        }
        cout << endl;
    }
}