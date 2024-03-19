#include<iostream>
using namespace std;
int reverse(int arr[],int n){
    int start =0;
    int end =n-1;
    while(start <= end){
        swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
int printthearray(int arr[],int n){
    for(int i =0;i<=n;i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main(){
    int arr[6] = {3,2,5,4,6,7};
    int array[5] = {1,2,3,4,5};

    reverse(arr,6);
    reverse(array,5);

    printthearray(arr,6);
    printthearray(array,5);

}