#include<bits/stdc++.h>
using namespace std;
void binary_number(vector<int> b, int k, int n){
    for (int v=0;v<=1;v++){
        b[k] = v;
        if (k==n){
            for (int i=0;i<n;i++){
                cout << b[i];
            }
            cout <<endl;
        } else{
            binary_number(b,k+1,n);
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> b(n+1);
    binary_number(b,1,n);
    return 0;
}