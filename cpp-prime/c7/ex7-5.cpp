//
// Created by xiaochen on 2019-07-19.
//

#include <iostream>
#include <string>

using namespace ::std;

struct Person {
    string getName() const { return name; }

    string getAddr() const { return address; }

    string name;
    string address;
};

int main() {}
