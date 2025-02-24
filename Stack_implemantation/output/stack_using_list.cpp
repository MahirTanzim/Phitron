#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


class myStack{
    public:
        list <int> l;

        void push(int val){
            l.push_back(val);
        }
        void pop(){
            l.pop_back();
        }
        int top(){
            return l.back();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }
};


int main()
{
    myStack st;
    int n, val;
    cin >> n;
    while(n--){
        cin >> val;
        st.push(val);
    }
    cout << st.size() << endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}