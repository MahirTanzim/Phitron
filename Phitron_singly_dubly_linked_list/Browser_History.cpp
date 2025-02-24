#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define yes cout << *current << endl
# define no cout<<"Not Available"<<endl


int main()
{
    list <string> l;
    string val;
    while(cin >> val && val != "end")
        l.push_back(val);

    auto current = l.begin();

    int q;
    cin >> q;
    while(q--){
        string command;
        cin >> command;
        
        if(command == "visit"){
            string add;
            cin >> add;
            auto it = find(l.begin(), l.end(), add);
            if(it == l.end())
                no;
            else{
                current = it;
                yes;
            }
        }
        else if(command == "next"){
            if(current != l.end() && next(current) != l.end()){
                current = next(current);
                yes;
            }
            else
                no;
        }
        else if(command == "prev"){
            if(current != l.begin()){
                current = prev(current);
                yes;
            }
            else
                no;
        }
    }

    
    
    return 0;
}