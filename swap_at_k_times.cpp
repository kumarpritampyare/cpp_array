#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseArr(vector<int> &arr, int n){
    int max;
    for(int i=0; i<n; i++){
        if(max > arr[i]){
            max = arr[i];
        }
         cout << arr[i]<<" ";
    }
}
void display(vector<int> &arr,int n){
    for(int i=0; i<n;i++){
        cout << arr[i]<<" ";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    reverseArr(arr,n);
    display(arr,n);
}