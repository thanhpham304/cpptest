#include<bits/stdc++.h>
#include<unordered_map>
#include<sstream>      // Dùng stringstream để tách chuỗi theo khoảng trắng
using namespace std;
struct student{
    string name;
    string class_name; //classroom
   
};
 bool isEmpty(string s){
        return s.empty();
    }
int main(){
    unordered_map<int, student> studentData;
    string s;
    while (getline(cin,s)){
        if (isEmpty(s)){
            continue; // Bỏ qua các dòng trống
        }
        size_t openParen = s.rfind('(');
        size_t closeParen = s.rfind(')');
        if (openParen == string :: npos || closeParen == string :: npos) continue;
        string op = s.substr(0, openParen);
            string args = s.substr(openParen + 1, closeParen - openParen - 1);
            if (op == "Insert"){
                stringstream ss(args);
                string id_str, name, class_name;
                getline(ss, id_str, ',');
                getline(ss, name, ',');
                getline(ss, class_name, ',');
                int id = stoi(id_str);
                studentData[id] = {name, class_name};
            } else if (op == "Delete"){
                int id = stoi(args);
                studentData.erase(id);
            } else if (op == "Infor"){
                int id = stoi(args);
                if (studentData.find(id) != studentData.end()){
                    cout << "Result: " << studentData[id].name << "," << studentData[id].class_name << endl;
                } else {
                    cout <<"Result: NA,NA"<<endl;
                }
            }
        }
    return 0;
}