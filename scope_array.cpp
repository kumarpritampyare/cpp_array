#include<iostream>
using namespace std;
void update (int arr[],int n){

    cout << endl << "inside the main function " <<endl;

    //update the array's first element
    arr[0]=120;

    for(int i =0; i<3; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    cout << "going back to main functionn " <<endl;
}
int main(){
    int arr[3] = {1,2,3};
    update(arr ,3);

    cout <<endl << "printing the main  function  " << endl;
    for(int i= 0; i<3;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}