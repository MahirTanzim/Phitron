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






int main()
{
    
    Node* head = NULL;
    Node* t = NULL;
    long long int v;
    while(true){
        cin >> v;
        if(v == -1)
            break;
        Node *newNode = new Node(v);
        if(head == NULL){
            head = newNode;
            t = head;
        }
        else{
            t->next = newNode;
            t = t->next;
        }
        
    }
    
    
    
    int mx = INT_MIN;
    int mn = INT_MAX;
        
    Node* tmp = head;
    while(tmp != NULL){
        mx = max(mx, tmp->val);
        mn = min(mn, tmp->val);
        tmp = tmp->next;
    }

    cout << mx - mn << endl;
    
    return 0;
}