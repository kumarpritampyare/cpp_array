#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5};
    cout << &arr[0] <<endl;
    cout << &arr[1] <<endl;
    cout << &arr[2] <<endl;
    cout << &arr[3] <<endl;
    cout << &arr[4] <<endl;
    cout << &arr[5] <<endl;


    //sum

    int arr[] = {15,1,3,2};
    int n= sizeof(arr)/sizeof(int);
    int sum =0;
    for(int i =0; i<n;i++){
        sum = sum+arr[i];
    }
    cout <<sum<<endl;
    cout << sum/n;

    //product
    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    int product =1;
    for(int i =0; i<n; i++){
        product = product * arr[i];
        
    }
    cout << product ;
}
