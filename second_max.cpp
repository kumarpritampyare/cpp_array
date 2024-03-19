// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[100];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int max=INT_MIN;
//     for(int i=0; i<n; i++ ){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//     int smax = INT_MIN;
//     for(int i=0; i<n; i++ ){
//         if(smax < arr[i] && max != arr[i]){
//             smax = arr[i];
//         }
//     }

//     cout << max << endl;
//     cout << smax << endl;
// }


#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;
    for(int i=0;i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << max << endl;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << min << endl;
    cout << min+max << endl;
}