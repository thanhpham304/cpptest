#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("numbers.txt");
    vector<double> a;
    double x;
    while(fin >> x){
        a.push_back(x);
    }
    for (int i=0;i<a.size();i++){
        int temp;
        for (int j=i+1;j<a.size();j++){
            if( a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    ofstream fout("numbers_sorted.txt");
    for (int i=0;i<a.size();i++){
        fout << a[i]<<" ";
    }
    return 0;
}