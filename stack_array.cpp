#include<bits/stdc++.h>
using namespace std;
struct Stack{
    int a[1000];
    int capacity;
    int n;
    Stack(int cap){
        capacity = cap;
        n = 0;
    }
    bool isFull(){
        return n == capacity;
    }
    bool isEmpty(){
        return n == 0;
    }
    void push(int x){
        if(isFull()){
            cout <<"Stack is full. Cannot add more elements."<<endl;
            return;
        } else{
            cout<<"Element "<<x<<" has been added to the stack."<<endl;
            a[n] = x;
            n++;
        }
    }
    int pop(){
        int dele_var;
        if(isEmpty()){
            cout <<"Stack is empty. Cannot remove elements."<<endl;
            return -1;
        } else{
            dele_var = a[n-1];
        }
         cout<<"Element at the top of the stack has been removed."<<endl;
        n--;
        return dele_var;
    }
    void printStack(){
        if(isEmpty()){
            cout<<"Stack is empty. Cannot print elements."<<endl;
            return;
        } else {
            cout<<"Current stack: "<<endl;
            for (int i=0;i<n;i++){
                cout <<a[i]<<" ";
            }
            cout <<endl;
        }
    }
};
int main(){
    Stack s(5);
    s.pop();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.printStack();
}
