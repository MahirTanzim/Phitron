#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
    Node (int val){
        this->val = val;
        this->next = NULL;
    }
};


void insert_at_head(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    
    Node* t = head;
    while (t->next != NULL)
        t = t->next;

    t->next = newNode;
}


void delete_at_position(Node*& head, int position){
    if(head == NULL) 
        return; 

    if(position == 0){
        Node* delate_node = head;
        head = head->next;
        delete delate_node;
        return;
    }

    Node* t = head;
    for(int i = 0; i < position - 1; i++) {
        if(t->next == NULL) 
            return; 
        t = t->next;
    }

    if(t->next == NULL) 
        return; 

    Node* delate_node = t->next;
    t->next = t->next->next;
    delete delate_node;
}


void printList(Node* head){
    Node* t = head;
    while (t != NULL) {
        cout << t->val << " ";
        t = t->next;
    }
    cout << endl;
}


int main(){
    Node* head = NULL; 
    int tc;
    cin >> tc; 

    while(tc--){
        int x, v;
        cin >> x >> v;

        if(x == 0)
            insert_at_head(head, v);

        else if (x == 1)
            insert_at_tail(head, v);

        else if (x == 2)
            delete_at_position(head, v);

        printList(head); 
    }

    return 0;
}
