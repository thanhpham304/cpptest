#include<bits/stdc++.h>
using namespace std;
bool isUsed(int x, vector<int>& b, int n){
    for (int i=1;i<n;i++){
        if (b[i]==x){
            return true;
        }
    }
    return false;
}
void permutation_number(vector<int> b, int k, int n){
    for (int v=1; v<=n;v++){
        if (!isUsed(v,b,k)){
            b[k]=v;
            if (k==n){
                for (int i=1;i<=n;i++){
                    cout <<b[i];
                }
                cout <<endl;
            } else{
                permutation_number(b,k+1,n);
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> b(n+1);
    permutation_number(b,1,n);
    return 0;
}