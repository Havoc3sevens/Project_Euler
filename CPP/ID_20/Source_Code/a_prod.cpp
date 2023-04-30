#include <iostream>

using namespace std;

void times_engine(int x, int arr_in[], int arr_out[], int & a_size) {
    int prod;
    int v;
    int n_carry=0;
    int carry=0;

    for(int i = 0; i <= a_size; i++) {
        arr_out[i] = arr_in[i];
    }

    cout << "=====";
    for(int i = 0; i <= a_size; i++) {
        cout << arr_out[a_size-i];
    }
    cout << " x " << x << "=====" << endl;

    for (int i = 0; i <= a_size; i++) {
        prod = arr_out[i] * x;
        
        n_carry = (prod-prod%10)/10;

        v = prod%10 + carry;
        
        if (v > 9) {
            n_carry = (v-v%10)/10 + n_carry;

            v = v%10;
        }
        arr_out[i] = v;

        cout << "Product = " << prod;
        cout << ", new_val = " << v;
        cout << ", n_carry = " << n_carry << endl;

        carry = n_carry;
    }

    if (carry > 0) {
        a_size+=1;
        arr_out[a_size] = carry;
    }
    cout << "=====";
    for(int i = 0; i <= a_size; i++) {
        cout << arr_out[a_size-i];
    }
    cout << "=====" << endl;
}

int main (void) {
    int arr[500] = {2, 5, 1, 7};
    int arr_store[500]={};
    int arr_res[500]={};
    int a_size;
    int s_size;
    int pow_num;
    int arr_p[500] = {7, 2};
    int v;
    int carry;
    int sum;

    pow_num = 7;
    a_size = 3;

    times_engine(pow_num, arr, arr_res, a_size);

    s_size = a_size;
    for(int i = 0; i <= s_size; i++) {
        arr_store[i] = arr_res[i];
    }

    pow_num = 2;
    a_size = 3;

    times_engine(pow_num, arr, arr_res, a_size);

    //move over array by one space
    for(int i = a_size; i >= 0; i--) {
        arr_res[i+1] = arr_res[i];
    }
    arr_res[0] = 0;

    //this means that the store size needs to expand to result size
    if (a_size >= s_size) {
        s_size = a_size + 1;
    }

    //add res to store
    //fix array add function
    carry = 0;
    for(int i = 0; i <= s_size; i++) {
        sum = arr_store[i] + arr_res[i] + carry;
        v = sum;
        carry = (v-v%10)/10;
        if (v > 9) {
            v = v%10;
        }
        arr_store[i] = v;
    }

    if (carry > 0) {
        s_size+=1;
        arr_store[s_size] = carry;
    }

    for(int i = 0; i <= s_size; i++) {
        cout << arr_store[s_size-i];
    }
    cout << endl;



}