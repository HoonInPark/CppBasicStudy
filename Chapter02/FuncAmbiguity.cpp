//
// Created by Changjoon Lee on 11/6/23.
//

#include <iostream>
using namespace std;

void TestFunc(int a) {
    std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10) {
    std::cout << "TestFunc(int, int)" << std::endl;
}

int main() {
//    TestFunc(5);

    return 0;
}