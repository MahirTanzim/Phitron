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

void insert_at_any_point(Node* head, int idx, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i = 0; i < idx-1; i++)
        tmp = tmp->next;
    newNode->next = tmp->next;
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
    Node* c = new Node(50);
    
    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_any_point(head, 2, 100);
    print_link_list(head);
    
    return 0;
}