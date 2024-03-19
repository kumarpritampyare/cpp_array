// #include<iostream>
// using namespace std;
// void maxsubarray(int arr[],int n, int k){
//     int ans=0;
//     int sum =0; 
//     int i=0;
//     int j=0;
//     while (j<n)
//     {
//         sum+=arr[j];
//         while(sum > k){
//             sum -=arr[i];
//             i++;
//         }
//         if(sum ==k){
//             ans = max(ans,j-i+1);
//         }
//         j++;
//     }
//     return  ans;
// }
// int  main(){
//     int n; 
//     cin >> n; 
//     int arr[100];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     cout << maxsubarray(arr,n);
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int m,n;
     cin >> m  >> n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int flag =0;
    for(int j=0; j<n; j++){
        if(flag == 0){
            for(int i=0; i<m; i++){
                cout << arr[i][j]<< " ";
            }
            flag =1;
        }
        else{
            for(int i=m-1; i>=0;i--){
                cout << arr[i][j]<< " ";
            }
            flag =0;
        }
    }
}