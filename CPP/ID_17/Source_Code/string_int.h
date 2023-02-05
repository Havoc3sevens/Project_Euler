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
        return "one hundred";
        break;
    case 2:
        return "two hundred";
        break;
    case 3:
        return "three hundred";
        break;
    case 4:
        return "four hundred";
        break;
    case 5:
        return "five hundred";
        break;
    case 6:
        return "six hundred";
        break;
    case 7:
        return "seven hundred";
        break;
    case 8:
        return "eight hundred";
        break;
    case 9:
        return "nine hundred";
        break;
    default:
        return "Null";
        break;
    } 
}

string thousands(int int_in) {
    switch (int_in) {
    case 1:
        return "one thousand";
        break;
    default:
        return "Null";
        break;
    } 
}