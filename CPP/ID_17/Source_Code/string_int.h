#include <string>

using namespace std;

inline int cti(char c_in) {
    return int(c_in)-48;
}

string ones(int int_in) {
    switch (int_in) {
    case 1:
        return "one";
        break;
    case 2:
        return "two";
        break;
    case 3:
        return "three";
        break;
    case 4:
        return "four";
        break;
    case 5:
        return "five";
        break;
    case 6:
        return "six";
        break;
    case 7:
        return "seven";
        break;
    case 8:
        return "eight";
        break;
    case 9:
        return "nine";
        break;
    default:
        return "Null";
        break;
    }
}

string teens(int int_in) {
    switch (int_in) {
    case 10:
        return "ten";
        break;
    case 11:
        return "eleven";
        break;
    case 12:
        return "twelve";
        break;
    case 13:
        return "thirteen";
        break;
    case 14:
        return "fourteen";
        break;
    case 15:
        return "fifteen";
        break;
    case 16:
        return "sixteen";
        break;
    case 17:
        return "seventeen";
        break;
    case 18:
        return "eighteen";
        break;
    case 19:
        return "nineteen";
        break;
    default:
        return "Null";
        break;
    }
}

string tens(int int_in) {
    switch (int_in) {
    case 2:
        return "twenty";
        break;
    case 3:
        return "thirty";
        break;
    case 4:
        return "fourty";
        break;
    case 5:
        return "fifty";
        break;
    case 6:
        return "sixty";
        break;
    case 7:
        return "seventy";
        break;
    case 8:
        return "eighty";
        break;
    case 9:
        return "ninety";
        break;
    default:
        return "Null";
        break;
    } 
}

string hundreds(int int_in) {
    switch (int_in) {
    case 1:
        return "onehundred";
        break;
    case 2:
        return "twohundred";
        break;
    case 3:
        return "threehundred";
        break;
    case 4:
        return "fourhundred";
        break;
    case 5:
        return "fivehundred";
        break;
    case 6:
        return "sixhundred";
        break;
    case 7:
        return "sevenhundred";
        break;
    case 8:
        return "eighthundred";
        break;
    case 9:
        return "ninehundred";
        break;
    default:
        return "Null";
        break;
    } 
}

string thousands(int int_in) {
    switch (int_in) {
    case 1:
        return "onethousand";
        break;
    case 2:
        return "twothousand";
        break;
    case 3:
        return "threethousand";
        break;
    case 4:
        return "fourthousand";
        break;
    case 5:
        return "fivethousand";
        break;
    case 6:
        return "sixthousand";
        break;
    case 7:
        return "seventhousand";
        break;
    case 8:
        return "eightthousand";
        break;
    case 9:
        return "ninethousand";
        break;
    default:
        return "Null";
        break;
    } 
}

string int_to_long_string_format(int int_in) {
    int new_int;
    if (to_string(int_in).size() == 1) {
        return ones(int_in);
    } else if (to_string(int_in).size() == 2) {
        if (cti(to_string(int_in)[0]) == 1) return teens(int_in);
        new_int = int_in - cti(to_string(int_in)[0])*10;
        if (new_int == 0) return tens(cti(to_string(int_in)[0]));
        return tens(cti(to_string(int_in)[0])) + "-" + int_to_long_string_format(new_int);
    } else if (to_string(int_in).size() == 3) {
        int new_int;
        new_int = int_in - cti(to_string(int_in)[0])*100;
        if (new_int == 0) return hundreds(cti(to_string(int_in)[0]));
        return hundreds(cti(to_string(int_in)[0])) + " and " + int_to_long_string_format(new_int);
    } else if (to_string(int_in).size() == 4) {
        int new_int;
        new_int = int_in - cti(to_string(int_in)[0])*1000;
        return thousands(cti(to_string(int_in)[0])) + " " + int_to_long_string_format(new_int);
    }
    return "Null";
}