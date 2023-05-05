#include <iostream>

using namespace std;

void times_engine(int x, int arr_in[], int arr_out[], int & r_size) {
    int prod;
    int v;
    int n_carry=0;
    int carry=0;

    for(int i = 0; i <= r_size; i++) {
        arr_out[i] = arr_in[i];
    }

    for (int i = 0; i <= r_size; i++) {
        prod = arr_out[i] * x;
        
        n_carry = (prod-prod%10)/10;

        v = prod%10 + carry;
        
        if (v > 9) {
            n_carry = (v-v%10)/10 + n_carry;

            v = v%10;
        }
        arr_out[i] = v;

        carry = n_carry;
    }

    if (carry > 0) {
        r_size+=1;
        arr_out[r_size] = carry;
    }
}

int main (void) {
    int arr[500] = {5, 1, 7};
    int a_size = 2;
    int arr_p[500] = {5, 9};
    int p_size = 1;
    int arr_store[500]={};
    int arr_res[500]={};
    int r_size;
    int s_size;
    int pow_num;
    int v;
    int carry;
    int sum;

    for(int j=0; j <= p_size; j++) {
        pow_num = arr_p[j];
        r_size = a_size;
        if(j==0) {
            times_engine(pow_num, arr, arr_res, r_size);

            s_size = r_size;
            for(int i = 0; i <= s_size; i++) {
                arr_store[i] = arr_res[i];
            }
            continue;
        }

        times_engine(pow_num, arr, arr_res, r_size);

        //move over array by one space
        for(int i = r_size; i >= 0; i--) {
            arr_res[i+j] = arr_res[i];
        }
        for(int i = 0; i < j; i++) {
            arr_res[i] = 0;
        }

        r_size += j;

        //makes sure that the store size will be big enough
        //for the sum
        s_size = r_size;

        //add res to store
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
            s_size++;
            arr_store[s_size] = carry;
        }
    }

    for(int i = 0; i <= a_size; i++) {
        cout << arr[a_size-i];
    }
    cout << "x";

    for(int i = 0; i <= p_size; i++) {
        cout << arr_p[p_size-i];
    }
    cout << "=";

    for(int i = 0; i <= s_size; i++) {
        cout << arr_store[s_size-i];
    }
    cout << endl;

}