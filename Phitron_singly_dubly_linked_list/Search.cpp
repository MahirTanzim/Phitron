#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while(tc--){
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

        long long int x;
        cin >> x;

        int i = 0, index = -1;    
        
        Node* tmp = head;
        while(tmp != NULL){
            if(tmp->val == x){
                index = i;
                break;
            }
            tmp = tmp->next;
            i++;
        }

        cout << index << endl;
        
    }
    
    return 0;
}