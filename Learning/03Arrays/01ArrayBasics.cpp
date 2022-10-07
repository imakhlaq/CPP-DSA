#include <bits/stdc++.h>
using namespace std;

int main() {

   cout << "Enter the size of array :";

   int n;  // taking the size of array from user;
   cin >> n;
   int arr[n];  // while declaring and array You can use constants or varibles

   // taking elements from the user
   for (int index = 0; index < n; index++) {

      cout << "Enter the element " << index + 1 << " : ";
      cin >> arr[index];
   }

   // displaying array element

   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }

   return 0;
}

// you can make an array of any type and its store in contigious manner means an
// array of int (int arr[3]) will be sotred with the gap of 4 bytes because the
// one int takes 1 byte to store the value.

// and array index star from zero (arr[o]) to store and retrive use 0 index .
// array are fixed in nature one you inisilized the array you cant change it .
// their are differnt ways to inisilize the array
// 1== int arr[varible/constant];
// the push the value inside it
// 2== int arr[]={2,3,4,2,1}
// when you create the array you can inisilize it and in this you can ommit the
// the value in side []. cpp will figure out accorfing the elemts in { }. not in
// 2D[][](you have to specify one ). in 3D(you have to specify 2last [][][])
// dynamic memory allocatiom
// int arr[]=new int

// how to inisilize whole array with 0
// int arr[20]={0};