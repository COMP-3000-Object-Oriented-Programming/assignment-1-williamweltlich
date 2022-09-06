//
// Created by willi on 9/5/2022.
// Question 5 Assignment 1
//
#include <iostream>

using namespace std;

int main() {
    int i,n;
    double guess,r;
    i=0;
    cout<<"Enter a number. ";
    cin>> n;
    guess = static_cast<double>(n)/2;
    while(i<5){
        r=static_cast<double>(n)/guess;
        guess = (guess+r)/2;
        i++;
    }
    cout<<guess;
    return 0;
}
