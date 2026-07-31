#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("matrix.txt");
    int m,n;
    fin >> m >> n;
    vector<vector<int>> A(m+1, vector<int>(n+1));
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            fin >> A[i][j];
        }
    }
    fin.close();
    int max_sum = 0;
    int max_r1 = 0, max_c1 = 0, max_r2 = 0, max_c2 = 0;
    for (int r1=1; r1<=m;r1++){
        vector<int> temp(n+1,0);
        for (int r2=1;r2<=m;r2++){
            for (int i=1;i<=n;i++){
                temp[i] += A[r2][i];
            }
    int current_sum = 0;
    int temp_c1 = 1;
    for (int i=0;i<=n;i++){
        current_sum += temp[i];
        if(current_sum > max_sum){
            max_sum = current_sum;
            max_r1 = r1;
            max_c1 = temp_c1;
            max_r2 = r2;
            max_c2 = i;
        }
        if(current_sum < 0){
            current_sum = 0;
            temp_c1 = i+1;
            }
        }
    }
}
   
    ofstream fout("maxtrix_out.txt");
    fout << max_r1<<" "<<max_c1<<" "<<max_r2<<" "<<max_c2<<" "<<max_sum<<endl;
    fout.close();
    return 0;
}