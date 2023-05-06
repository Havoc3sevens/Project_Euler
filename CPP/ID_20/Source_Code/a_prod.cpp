#include <iostream>

using namespace std;

void times_engine(int x, int arr_in[], int arr_out[], int & r_size) {
    int prod;
    int n_carry=0;
    int carry=0;

    for(int i = 0; i <= r_size; i++) {
        arr_out[i] = arr_in[i];
    }

    for (int i = 0; i <= r_size; i++) {
        prod = (arr_out[i] * x) + carry;
        
        n_carry = (prod-prod%10)/10;

        arr_out[i] = prod%10;

        carry = n_carry;
    }

    if (carry > 0) {
        r_size+=1;
        arr_out[r_size] = carry;
    }
}

void sum_engine(int arr_s[], int arr_r[], int & s_size) {
    int carry;
    int sum;
    carry = 0;
    for(int i = 0; i <= s_size; i++) {
        sum = arr_s[i] + arr_r[i] + carry;
        carry = (sum-sum%10)/10;
        arr_s[i] = sum%10;
    }

    if (carry > 0) {
        s_size++;
        arr_s[s_size] = carry;
    }
}

void print_array(int arr_in[], int a_size) {
    for(int i = 0; i <= a_size; i++) {
        cout << arr_in[a_size-i];
    }
}

void large_num_pow(unsigned long long int first_num, unsigned long long int second_num) {
    int arr[500] = {};
    int a_size;
    int arr_p[500] = {};
    int p_size;
    int arr_res[500]={};
    int r_size;
    int arr_store[500]={};
    int s_size;
    int pow_num;
    cout << first_num << "x" << second_num << "=";

    a_size = 0;
    while(first_num != 0) {
        arr[a_size] = first_num%10;
        first_num = first_num/10;
        a_size+=1;
    }
    a_size=a_size-1;

    p_size = 0;
    while(second_num != 0) {
        arr_p[p_size] = second_num%10;
        second_num = second_num/10;
        p_size+=1;
    }
    p_size=p_size-1;

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
        
        sum_engine(arr_store, arr_res, s_size);
        
    }
    print_array(arr_store, s_size);
    cout << endl;
}

int main (void) {
    large_num_pow(72572875544652895, 655765687512789543);

}