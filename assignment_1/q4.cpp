//
// Created by willi on 9/5/2022.
// Question 4 Assignment 1
//
#include <iostream>

using namespace std;

int main() {
    int seconds,feet;
    cout<<"Enter a time in seconds:";
    cin >> seconds;

    feet = .5*32*seconds*seconds;
    cout<<"An object in freefall for " <<seconds <<" seconds will fall " <<feet <<" feet.";
   return 0;
}
