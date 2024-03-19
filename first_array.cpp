#include<iostream>
using namespace std;
//hold
void printarray(int arr[],int size){
    cout << "printing the array : "<<endl;
    //print the array
    for(int i =0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << "printing done" <<endl;
}
int main(){
    //declare
    int number[15];
    //accessing an arry 
    cout <<  "value at 0 index : " << number[14] << endl;

    //initialising an array
    int second[3]={11,22,33};

    //accessing the element
    cout <<"access the 2 index : "<< second[2] <<endl;

    int third[15] = {2,3};

    int n = 15;
    for(int i =0; i<=n;i++){
        cout << third[i] << " ";
    }
    cout <<endl;
    int fouth[10]={1};

    n =10;
    for(int i=0;i<=n;i++){
        cout << fouth[i] <<" ";
    }
    cout <<endl;

    int fifth[5] ={0};

    n =5;
    printarray(fifth,10);
    int firthsize = sizeof(fifth)/sizeof(int);
    cout <<"size of fifth is :" <<fifth <<endl;
    return 0;
}