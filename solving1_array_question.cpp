//swap altermate
//if a array[5] = {1,2,3,4,5,6}
//then array[5] {2,1,4,3,6,5}
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
int swapAlterarray(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            int temp;
            temp =arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
int main(){
    int even[6]={3,4,5,6,7,8};
    int odd[7] ={9,8,7,6,7,8,65};
    
    swapAlterarray(even,6);
    swapAlterarray(odd,7);

    printArray(even,6);
    printArray(odd,7);


}