#include <bits/stdc++.h>
using namespace std;

// stack implementation from scratch
struct Node{
    int data;
    Node* next;
};

Node* top = NULL;

void push(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop(){
    if(top == NULL) return;
    Node* temp = top;
    top = top->next;
    delete temp;
}

void print(){
    Node* temp = top;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    push(2);
    push(4);
    push(6);
    push(8);
    push(10);
    cout << "Stack after pushing all the elements: \n";
    print();
    cout << endl;
    cout << "Stack after popping 2 top element: \n";
    pop();
    pop();
    print();
    cout << endl;
}