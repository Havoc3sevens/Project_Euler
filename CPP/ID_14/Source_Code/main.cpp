/*
This program solves Project Euler ID 14
    Created by: Enrique Hurtado
    Date: 03 October 2022
    History:
        Date: 10/03/22 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>
#include <list>

using namespace std;

struct HashTable {
    static const int hash_box_size = 100000;
    list<pair<int, int>> hash_box[hash_box_size];
    
    int hash_func(int key_in) {
        return key_in%100000;
    }

    void insert(int key_in, int int_in) {
        int box_int = hash_func(key_in);
        auto &box = hash_box[box_int];

        box.emplace_front(key_in, int_in);

    }
    int find_value(int key_in) {
        int box_int = hash_func(key_in);
        auto box = hash_box[box_int];

        for (auto item : box) {
            if (item.first == key_in) {
                //cout << item.second << endl;
                return item.second;
            }
        }
        return 0;
    }

    void print_hash_box(int index) {
        for (auto testL : hash_box[index]) {
            cout << testL.first << endl;
            cout << testL.second << endl;
        }
    }

    void print_hash_table() {
        for (int i = 0; i <hash_box_size; ++i)
            if (hash_box[i].size() == 0) {
                cout << "Box: " << i << " is empty." << endl;
                cout << endl;
            } else {
                cout << "Box: " << i << " containes:" << endl;
                for (auto testL : hash_box[i]) {
                    cout << testL.first << endl;
                    cout << testL.second << endl;
                    cout << endl;
                }
            }   
    }

};

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
    int ht_count=0;
    HashTable HT1;
    for(int i = 1; i <1000000; ++i){
        cout<<"Number being tested: " << i << endl;
        int count=1;
        long int num_in = i;
        while(num_in!=1) {
            if (is_even(num_in)) {
                num_in = num_in/2;
            } else {
                num_in = 3*num_in+1;
            }
            if(num_in< i) {
                ht_count = HT1.find_value(num_in);
                if(ht_count) {
                    count = count + ht_count;
                    break;
                }
            }
            ++count;
        }
        HT1.insert(i, count);
        res = count;
        cout << "Total count: "<< res << endl << endl;
        if (res>max) {
            max = count;
            t_num = i;
        }
    }

    cout << "Num = " << t_num << ", Total = " << max << endl;

    return 0;
}