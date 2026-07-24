#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int a[1000];
    int capacity;
    int n;
    Queue(int cap){
        capacity = cap;
        n=0;
    }
    bool isFull(){
        return n == capacity;
    }
    bool isEmpty(){
        return n == 0;
    }
    void enqueue(int x){
        if (isFull()){
            cout <<"Queue is full. Cannot insert more elements."<<endl;
            return;
        } else{
            a[n] = x;
            n++;
            cout <<"Added "<<x<<" to the queue"<<endl;
        }
    }
    int dequeue(){
        if (isEmpty()){
            cout <<"Queue is empty. Cannot delete any elements."<<endl;
            return -1;
        } else {
            int dele_var = a[0];
            for (int i=0;i<n;i++){
                a[i] = a[i+1];
            }
            cout <<"Deleted the first element."<<endl;
            n--;
            return dele_var;
        }
    }
    void printQueue(){
        if(isEmpty()){
            cout <<"Queue is empty. Cannot print any elements."<<endl;
            return;
        } else {
            cout <<"Current queue: "<<endl;
            for (int i=0;i<n;i++){
                cout << a[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Queue q(5);
    q.dequeue();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.printQueue();
}
