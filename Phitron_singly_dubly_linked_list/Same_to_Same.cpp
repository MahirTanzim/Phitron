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
    
    Node* head1 = NULL;
    Node* t1 = NULL;
    long long int v;
    int cv = 0, cu = 0;
    while(true){
        cin >> v;
        if(v == -1)
            break;
        Node *newNode1 = new Node(v);
        if(head1 == NULL){
            head1 = newNode1;
            t1 = head1;
        }
        else{
            t1->next = newNode1;
            t1 = t1->next;
        }
        cv++;
    }

    Node* head2 = NULL;
    Node* t2 = NULL;
    long long int u;
    while(true){
        cin >> u;
        if(u == -1)
            break;
        Node *newNode2 = new Node(u);
        if(head2 == NULL){
            head2 = newNode2;
            t2 = head2;
        }
        else{
            t2->next = newNode2;
            t2 = t2->next;
        }
        cu++;
    }
    
    if(cv != cu)
        cout << "NO" << endl;

    else{
        Node* tmp1 = head1;
        Node* tmp2 = head2;
        bool is_same = true;
        while(tmp1 != NULL){
            if(tmp1->val != tmp2->val){
                is_same = false;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }

        is_same ? cout << "YES" << endl : cout << "NO" << endl;
    }
    
    return 0;
}