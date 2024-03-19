// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[100];
//     for(int i=0; i<n; i++){
//         cin  >> n;
//     }
//     for(int i=0; i<n; i++){
//         cout << n;
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[i]){
//                 int temp = arr[j];
//                 arr[j] =arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout  << arr[i] << " ";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[100];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i=i+2){
//         for(int j=0;j<n;j++){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
    
//     }
    
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int  i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i] ;
    }
    cout<<sum<<endl;

    bool flag=true;
    for (int i=2;i<sum;i++){
        if (sum%i==0){
            flag=false;
            break;
        }
    }
    if (flag){
        cout << "yes number is prime";
    }
    else{
        cout << "not prime";
    }
    
    
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n,k;
//     cin >> n>> k;
//     int arr[100];
//     for(int i =0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout <<endl;
//     cout << arr[k] <<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout << "enter the number :" <<endl;
//     cin >> n;
//     bool flag = true;
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             flag =false;        }
//     }
//     if(flag==1){
//         cout << "NO" <<endl;
//     }
//     else{
//         cout << "YES" <<endl;
//     }
    
    
// }

//armstrong number
// #include<iostream >
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arm=0;
//     int temp = n;
//     while(n>0){
//         int d = n%10;
//         arm = arm + ( d*d*d);
//         n =n/10;
//     }
//     if(temp==arm){
//         cout << "armstrong " <<endl;
//     }
//     else{
//         cout << "not armstrong" <<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int sum=0;
//     int temp = n;
//     while(n>0){
//         int ld = n % 10;
//         sum = (sum * 10) + ld;
//         n= n/10;  
//     }
//     if(temp == sum){
//         cout <<"palindrome " <<endl;
//     }
//     else{
//         cout << "not palindrome" <<endl;
//     }
// }





// #include<iostream>
// using namespace std;
// bool ispresent(int arr[][], int target,int m, int n);
// int main(){
//     int m , n ;
//     cin >> m >> n;
//     int arr[m][n];
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int target;
//     cin >> target;
// }






// how many number should i have to add in the n number to make it become prime number 
// #include <bits/stdc++.h>
// using namespace std;


// bool isPrime(int n) 
// { 
// 	// Corner cases 
// 	if (n <= 1) return false; 
// 	if (n <= 3) return true; 

// 	if (n%2 == 0 || n%3 == 0) return false; 

// 	for (int i=5; i*i<=n; i=i+6) 
// 		if (n%i == 0 || n%(i+2) == 0) 
// 		return false; 

// 	return true; 
// } 

// int nextPrime(int N)
// {

	
// 	if (N <= 1)
// 		return 2;

// 	int prime = N;
// 	bool found = false;
// 	while (!found) {
// 		prime++;

// 		if (isPrime(prime))
// 			found = true;
// 	}

// 	return prime;
// }
// int main()
// {
// 	int N;
//    cout<<"Enter the number :"<<endl;
//    cin>>N;
//    int n1=nextPrime(N);
// 	int n3=n1-N;
//    cout<<"The numebr is "<<n3<<endl;

// 	return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cin >> str;
//     int count =0;

    
//     for(int i=0; i<str.length(); i++){
//         if(str[i]=='a'||  str[i]=='e'|| str[i]=='o'|| str[i]=='u'|| str[i]=='i'
//         || str[i]=='A'|| str[i]=='E'|| str[i]=='O'|| str[i]=='U'|| str[i]=='I'  ){
//             count ++;
//         }
//     }
//     cout << "the vowel `is  : " << count ;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin >> n >> m ;
//     int arr1[n][m];
//     for(int i=n; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin >> arr1[i][j];
//         }
//     }
//     int sum=0;
//     for(int i=0; i<n; i++ ){
//         for(int j=n-1; j<m; j--){
            
//         }
//         sum = sum + arr1[i][i];
//     }
//     cout << "the sum is : " << sum ; 
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int array[100];
//     for(int i=0;i<n;i++)
//     {
//         cin>>array[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<array[i]<<" ";
//     }
    

//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[100];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i++){
//         for(int j=n-1; j<n; j--){
//             int temp = arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] <<" ";
//     }
// }


// // input = 4
// 4 8 3 2
// d r s t



// output 
// 2 3 4 8
// d r s t