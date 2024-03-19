// #include <iostream>
// using namespace std;
// void findnonrepeatednumber(int arr[], int size, int &num1, int &num2) {
//     // XOR all the elements in the array
//     int xorResult = arr[0];
//     for (int i = 1; i < size; ++i) {
//         xorResult ^= arr[i];
//     }

//     // Find the rightmost set bit in the XOR result
//     int rightmostSetBit = xorResult & -xorResult;

//     // Separate the array elements based on the rightmost set bit
//     for (int i = 0; i < size; ++i) {
//         if (arr[i] & rightmostSetBit) {
//             num1 ^= arr[i];
//         } else {
//             num2 ^= arr[i];
//         }
//     }
// }

// int main() {
//     int arr[] = {4, 2, 5, 2, 3, 3, 4, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     int num1 = 0, num2 = 0;

//     findnonrepeatednumber(arr, size, num1, num2);

//     cout << "The non-repeated numbers are: " << num1 << " and " << num2 << std::endl;

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int first_1bit(int n){
    int count =0;
    while(n){
        if(n&1){
            break;
        }
        n=n>>1;
        count++;
    }
}
void findnumber(vector<int> vec){
    int Xor = 0;
    for(int i=0; i<vec.size(); i++){
        Xor = Xor ^ vec[i];
    }
    int k = first_1bit(Xor);
    int xor1 =0;
    int xor2 =0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]&(1<<k)){
            xor1 =xor1^vec[i];
        }
        else{
            xor2 = xor2 ^vec[i];
        }
    }
    cout << "first number : " <<xor1 <<endl;
    cout << "second number : " <<xor2 <<endl;
}
int main(){
    int n;
    cin >> n;
    vector <int> vec(n);
    for(int i=0; i<vec.size(); i++){
        cin  >> vec[i];
    }
    findnumber(vec);
    return 0;
}