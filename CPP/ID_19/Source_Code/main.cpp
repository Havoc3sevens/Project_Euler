/*
This program solves Project Euler ID 19
    Created by: Enrique Hurtado
    Date: 05 March 2023
    History:
        Date: 03/05/23 || Mod: Program written || By: Enrique Hurtado
*/
#include <iostream>

using namespace std;

int day_num_of_week(int day_in) {
    return day_in%7;
}

int days_in_year(int year_in) {
    int days;
    days = 30*4; //sep, apr, jun, nov
    days += 28; //feb
    days += 31*7; //rest
    if(not(year_in%4)) {
        if(not(year_in%100)) {
            if(not(year_in%400)) {
                ;
            } else {
                return days;
            }
        }
        days += 1;
    }
    return days;
}

int main (void) {
    int sundays = 0;
    int days;
    int start_year;
    int end_year;
    int start_day;

    start_year = 1900;
    start_day = 0;
    end_year = 2000;
    days = start_day;

    for (int i = start_year; i <= end_year; i++) {
        days += days_in_year(i);
        if(i >= 1901) {
            for (int d = start_day; d <= days; d++) {
                if(day_num_of_week(d)==6) {
                    sundays += 1;
                }
            }
        }
        start_day = days+1;
    }

    cout << sundays << endl;

}