/*
This program solves Project Euler ID 18
    Created by: Enrique Hurtado
    Date: 05 February 2023
    History:
        Date: 02/05/23 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>

using namespace std;

int main(void) {
    //int arr[]={75};
    //int arr[]={95, 64};
    //int arr[]={17, 47, 82};
    //int arr[]={18, 35, 87, 10};
    //int arr[]={20, 4, 82, 47, 65};
    //int arr[]={19, 1, 23, 75, 3, 34};
    //int arr[]={88, 2, 77, 73, 7, 63, 67};
    //int arr[]={99, 65, 4, 28, 6, 16, 70, 92};
    //int arr[]={41, 41, 26, 56, 83, 40, 80, 70, 33};
    //int arr[]={41, 48, 72, 33, 47, 32, 37, 16, 94, 29};
    //int arr[]={53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14};
    //int arr[]={70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57};
    //int arr[]={91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48};
    //int arr[]={63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31};
    //int arr[]={4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23};
    int sum = 0;

    double mx=0;
    double com=0;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        mx += arr[i]*(i);
        sum += arr[i];
        com = mx/sum;
    }

    cout << com << " " << com/(sizeof(arr)/sizeof(int)-1)*100 << endl;
}