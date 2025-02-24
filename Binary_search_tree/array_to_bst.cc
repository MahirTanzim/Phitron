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

Node* convert(vector<int>v, int n, int l, int r){
	
	if(l > r)
		return NULL;
	int mid = (l+r)/2;
	Node* root = new Node(v[mid]);
	Node* leftroot = convert(v, n, l, mid-1);
	Node* rightroot = convert(v, n, mid+1, r);
	root->left = leftroot;
	root->right = rightroot;
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
int main()
{
    int n; 
    cin >> n;
    vector<int> v(n);
    for(auto &it : v)
    	cin >> it;
    Node* root = convert(v, n, 0, n-1);

    level_order(root);
    

    
    return 0;
}