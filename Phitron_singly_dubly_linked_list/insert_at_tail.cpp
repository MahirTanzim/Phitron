#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *next;
    Node (int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;
    while(tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = newNode;
}

void print_link_list(Node* head){
    Node *tmp = head;
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
    insert_at_tail(head, 100);
    insert_at_tail(head, 120);
    insert_at_tail(head, 110);
    insert_at_tail(head, 10);
    print_link_list(head);
    
    
    return 0;
}