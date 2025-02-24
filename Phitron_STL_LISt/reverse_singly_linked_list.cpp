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
void reverse_link_list(Node* &head, Node* &tail, Node* tmp){
    if(tmp->next == NULL){
        head = tmp;
        return;
    }
    reverse_link_list(head, tail, tmp->next); 
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
    
}
void print_linked_list(Node* &head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    cout << head->val << endl;
    cout << tail->val << endl;    
    reverse_link_list(head, tail, head);
    print_linked_list(head);
    cout << head->val << endl;
    cout << tail->val << endl;
    return 0;
}