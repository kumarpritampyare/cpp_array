#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[i] != arr[j]){
                arr[j]++;
                break;
            }
            if(arr[i]==arr[j]){
                
                cout <<  arr[j] <<endl;
            }
        }
    }
}