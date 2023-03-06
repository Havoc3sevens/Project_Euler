/*
This program solves Project Euler ID 19
    Created by: Enrique Hurtado
    Date: 05 March 2023
    History:
        Date: 03/05/23 || Mod: Program written || By: Enrique Hurtado
*/

/*
You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/

/*
itterate by day. Process the day from 0. Use rules to determin the day to return.
nope. Just calculate total days and iterate.
*/

#include <iostream>

using namespace std;

int day_num_of_week(int day_in) {
    return day_in%7;
}

int main (void) {
    int n = 100;
    int sundays;
    sundays = 0;
    for (int i = 1; i <= n; i++) {
        if (not(day_num_of_week(i))) {
            sundays += 1;
        }
    }
    cout << sundays << endl;
}