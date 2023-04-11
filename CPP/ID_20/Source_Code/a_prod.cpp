#include <iostream>

using namespace std;

int main (void) {
    int arr[500] = {2, 5, 1, 7};
    int a_size = 3;
    int pow_num = 7;
    int prod;
    int v;
    int n_carry;
    int carry=0;

    cout << "=====";
    for(int i = 0; i <= a_size; i++) {
        cout << arr[a_size-i];
    }
    cout << " x " << pow_num << "=====" << endl;

    for (int i = 0; i <= a_size; i++) {
        prod = arr[i] * pow_num;
        
        n_carry = (prod-prod%10)/10;

        v = prod%10 + carry;
        
        if (v > 9) {
            n_carry = (v-v%10)/10 + n_carry;

            v = v%10;
        }
        arr[i] = v;

        cout << "Product = " << prod;
        cout << ", new_val = " << v;
        cout << ", n_carry = " << n_carry << endl;

        carry = n_carry;
    }

    if (carry > 0) {
        a_size++;
        arr[a_size] = carry;
    }

    cout << "=====";
    for(int i = 0; i <= a_size; i++) {
        cout << arr[a_size-i];
    }
    cout << "=====" << endl;

}