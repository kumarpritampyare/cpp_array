// //reverse an array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     cout << endl;

//     int start = 0;
//     int end = n-1;
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] <<" ";
//     }
//     return 0;
// }


class Solution {
public:
    void reverse(vector<int> &nums,int low,int high){
        while(low<high){
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = (int)nums.size();
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};


