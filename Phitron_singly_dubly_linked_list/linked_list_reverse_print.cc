#include <bits/stdc++.h>
using namespace std;
# define endl "\n"

class Node {
    public:
        int val;
        Node *next;
    Node (int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node* tmp){
    if(tmp == NULL)
        return;
    print_linked_list(tmp->next); 
    cout << tmp->val << endl;
    
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        int val;
        cin >> val;
        if(val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    print_linked_list(head);
    
    
    return 0;
}