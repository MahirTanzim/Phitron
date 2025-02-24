#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
// # define left cout <<"L -> "<< endl
// # define right cout<<"R -> "<<endl

class Node{
    public:
        int val;
        Node *next;
        Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;

}

void insert_at_index(Node* &head, Node* &tail, int x, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i = 1; i < x; i++)
        tmp = tmp->next;

    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

int size(Node* tmp){
    int length = 0;
    while(tmp != NULL){
        length++;
        tmp = tmp->next;
    }
    return length;
}

void print_forward(Node* &head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


void print_backward(Node* &tail){
    Node* tmp = tail;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}


int main()
{
    int q;
    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;

    while(q--){
        int x, v;
        cin >> x >> v;

        if(x > size(head))
            cout << "Invalid" << endl;

        else if(x == 0){
            insert_at_head(head, tail, v);
            cout << "L -> ";
            print_forward(head);
            cout << "R -> ";
            print_backward(tail);
        }
            
        else if(x == size(head)){
            insert_at_tail(head, tail, v);
            cout << "L -> ";
            print_forward(head);
            cout << "R -> ";
            print_backward(tail);
        }
            
        else if(x > 0 && x < size(head)){
            insert_at_index(head, tail, x, v);
            cout << "L -> ";
            print_forward(head);
            cout << "R -> ";
            print_backward(tail);
        }

    }
    
    
    
    return 0;
}