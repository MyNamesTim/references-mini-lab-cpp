// Name : Timothy Nakev
// Date : 4/16/2026
// Program : References Mini-lab

#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <random>
using namespace std;

void lower(string &value) {
    for(int i=0;i<value.length();i++) {
        value[i]=tolower(value[i]);
    }
}

void mult(int &value) {
    value *= 2;
}

void rand_mult(int &value) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 100);
    value = value + distr(gen);
}

int main() {
    string yes;
    cout << "write the value " << endl;
    cin >> yes;
    lower(yes);
    cout << yes << endl;

    int thing;
    cout << "enter the int " << endl;
    cin >> thing;
    mult(thing);
    cout << thing << endl;

    int new_thing;
    cout << "enter another int " << endl;
    cin >> new_thing;
    rand_mult(new_thing);
    cout << new_thing << endl;

    return 0;
}
