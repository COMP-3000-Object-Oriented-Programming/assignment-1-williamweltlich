//
// Created by willi on 9/5/2022.
// Question 3 Assignment 1
//
#include <iostream>

using namespace std;

int main() {
   int maxCapacity,numOfPeople,diff;
   cout <<"Enter the Maximum Occupancy for the room.";
   cin >>maxCapacity;
   cout <<"Enter the number of occupants in the room.";
   cin >>numOfPeople;
   diff = maxCapacity-numOfPeople;
   if(numOfPeople<=maxCapacity){
       cout <<"It is legal to hold the meeting, and you have room for " <<diff <<" more people.";
   }
   else{
       cout<<"The meeting cannot be held due to fire regulations. " <<diff*-1 << " people need to leave.";
   }
   return 0;
}
