#include <bits/stdc++.h>
using namespace std;
# define endl "\n"

class Node {
    public:
        int val;
        Node* next;
        Node* prev;
    Node (int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void print_forward(Node* &head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}


void print_backward(Node* &tail){
    Node* tmp = tail;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->prev;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;

    tail->prev = b;
    b->prev = a;
    a->prev = head;
    
    print_forward(head);
    cout << endl;
    print_backward(tail);    
    return 0;
}