#include<iostream>
using namespace std;
int main(){
//     int arr[] = {4,5,6,7,8};
//    // int *ptr = arr;
//    int *ptr = &arr[0];  //both are correct 
//     cout << ptr  << endl;
//     ptr[2]=100;
//     for(int i=0; i<5; i++){
//         cout << ptr[i] <<" ";
   // }

int arr[] ={3,4,5,6,6};
int* ptr = arr;  //giving address to the first element of the array
for(int i=0; i<5; i++){
    cout << *ptr  <<" ";
    ptr++;
}
cout <<endl;
ptr =arr;
*ptr =9;
ptr++;
*ptr =10;
ptr--;
for(int i=0; i<5; i++){
    cout << *ptr  <<" ";
    ptr++;
}
}