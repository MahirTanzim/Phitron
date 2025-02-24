#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int


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

Node* input_tree(){
	int val;
	cin >> val;
	Node* root;
	if(val == -1) root = NULL;
	else root = new Node(val);

	queue <Node*> q;
	q.push(root);
	while(!q.empty()){

		// select the first node.
		Node* p = q.front();
		q.pop();

		// input left and right child of the node
		int l, r;
		cin >> l >> r;
		Node* lft, * rgt;

		if(l == -1) lft = NULL;
		else lft = new Node(l);
		if(r == -1) rgt = NULL;
		else rgt = new Node(r);

		// connect left and right child with parent node
		p->left = lft;
		p->right = rgt;


		if(p->left) q.push(p->left);
		if(p->right) q.push(p->right);
	}

	return root;
}



void level_order(Node* root){
	queue <Node*> q;
	q.push(root);
	while(!q.empty()){
		Node* f = q.front();
		q.pop();

		cout << f->val << " ";
		if(f->left) q.push(f->left);
		if(f->right) q.push(f->right);
	}
	cout << endl;
}

int count_node(Node* root){
	if(root == NULL)
		return 0;
	int l = count_node(root->left);
	int r = count_node(root->right);
	return l+r+1;

}

int max_height(Node* root){
	if(root == NULL)
		return 0;
	if(root->left == NULL && root->right == NULL)
		return 0;
	int l = max_height(root->left);
	int r = max_height(root->right);
	return max(l,r)+1;
}
int main()
{
    Node* root = input_tree();
    level_order(root);
    cout << "Total Node: "<< count_node(root) << endl;
    cout << "Max Height " << max_height(root)<< endl;
    
    return 0;
}