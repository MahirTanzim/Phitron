#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


class Node {
    public:
        int val;
        Node* left;
        Node* right;
    Node (int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node* root){          // preorder binary tree traversal
    if(root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inordeer(Node* root){          // inorder binary tree traversal
    if(root == NULL)
        return;

    inordeer(root->left);
    cout << root->val << " ";
    inordeer(root->right);
}

void postordeer(Node* root){        // postorder binary tree traversal
    if(root == NULL)
        return;

    postordeer(root->left);
    postordeer(root->right);
    cout << root->val << " ";
}

void level_order(Node* root){       // Level order binary tree traversal
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        cout << f->val << " ";
        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(40);
    Node* e = new Node(50);
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    preorder(root);
    cout << endl;
    inordeer(root);
    cout << endl;
    postordeer(root);
    cout << endl;
    level_order(root);
    cout << endl;
    
    return 0;
}