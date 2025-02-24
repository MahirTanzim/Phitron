#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}


void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node* head = new Node(20);
    Node* a = new Node(30);
    Node* b = new Node(40);
    
    head->next = a;
    a->next = b;
    insert_at_head(head, 10);
    print_linked_list(head);
    
    return 0;
}