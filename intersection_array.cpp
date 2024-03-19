#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> v1(m);
    vector<int> v2(n); 

    for(int i = 0; i < m; i++){
        cin >> v1[i]; 
    }

    for(int i = 0; i < n; i++){
        cin >> v2[i]; 
    }

    vector<int> v3;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(v1[i] == v2[j]){
                v3.push_back(v1[i]); 
            }
        }
    }
    
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }

    return 0;
}