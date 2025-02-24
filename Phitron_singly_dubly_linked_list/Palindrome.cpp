#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define yes cout<<"YES"<<endl
# define no cout<<"NO"<<endl
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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

bool is_palindrom(Node* head, Node* tail){  
    Node* i = head;
    Node* j = tail;
    while(i != NULL && j != NULL && i != j){
        if(i->val != j->val)
            return false;
        i = i->next;
        j = j->prev;
    }
    return true;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(cin >> val && val != -1)
        insert_at_tail(head, tail, val);

    is_palindrom(head, tail) ? yes : no;
    
    return 0;
}