#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Stack{
    Node* head;
    Node* tail;
    Stack(){
        head = nullptr;
        tail = nullptr;
    }
    bool isEmpty(){
        if (head == nullptr){
            return true;
        } else return false;
    }
    void push(int x){
        Node* newNode = new Node();
        cout <<"Added element "<<x<<" to the stack."<<endl;
        newNode ->data = x;
        newNode->next = head;
        head = newNode;
    }
    int pop(){
        int popped_val;
        if (isEmpty()){
            cout<<"Stack is empty. Cannot remove elements."<<endl;
            return -1;
        } else{
            cout<<"Element at the top of the stack has been removed."<<endl;
            Node* temp = head;
            popped_val = temp->data;
            head = head->next;
            delete temp;
        }
        return popped_val;
    }
    void printStack(){
        if (isEmpty()){
            cout<<"Stack is empty. Cannot print elements."<<endl;
            return;
        } else{
            cout<<"Current stack: "<<endl;
            Node* current = head;
            while (current != nullptr){
                cout <<current->data<<" ";
                current = current->next;
            }
            cout<<endl;
        }
    }
};
int main(){
    int n;
    cin >> n;
    Stack s;
    string a;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == "push"){
            int x;
            cin >> x;
            s.push(x);
        } else if (a == "pop"){
            s.pop();
        } else if (a == "printStack"){
            s.printStack();
        }
    }
    return 0;
}
