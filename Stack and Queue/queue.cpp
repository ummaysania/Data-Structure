#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue(){
    if(front == NULL) return;
    if(front == rear){
        front = rear = NULL;
    }
    else{
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

void print(){
    Node* temp = front;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    enqueue(10);
    cout << "Queue after enqueue all the elements: \n";
    print();
    cout << endl;
    cout << "Queue after dequeue 2 front element: \n";
    dequeue();
    dequeue();
    print();
    cout << endl;
}