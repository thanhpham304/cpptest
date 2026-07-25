#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Queue{
    Node* head;
    Node* tail;
    Queue(){
        head = nullptr;
        tail = nullptr;
    }
    bool isEmpty(){
        if (head == nullptr){
            return true;
        }
        return false;
    }
    void enqueue(int x){
        Node* newNode = new Node;
        cout<<"Added "<<x<<" to the queue."<<endl;
        newNode->data = x;
        newNode->next = nullptr;
        if (head == nullptr){
            head = newNode;
            tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    int dequeue(){
        int popped_val;
        if (isEmpty()){
            cout<<"Queue is empty. Cannot remove elements."<<endl;
            return -1;
        } else{
            cout<<"Element at the front of the queue has been removed."<<endl;
            Node* temp = head;
            popped_val = temp->data;
            head = head->next;
            if(head == nullptr){
                tail = nullptr;
            }
            delete temp;
        }


        return popped_val;
    }
    void printQueue(){
        if (isEmpty()){
            cout<<"Queue is empty. Cannot print elements."<<endl;
            return;
        } else {
            cout<<"Current queue: "<<endl;
            Node* current = head;
            while (current != nullptr){
                cout <<current->data<<" ";
                current = current->next;
            }
            cout <<endl;
        }
    }
};
int main(){
    Queue q;
    q.dequeue();
    q.printQueue();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.printQueue();
}
