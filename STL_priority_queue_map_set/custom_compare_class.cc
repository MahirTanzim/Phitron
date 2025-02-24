#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


class Students{
	public:
		string name;
		int roll;
		int marks;

		Students(string name, int roll, int marks){
			this->name = name;
			this->roll = roll;
			this->marks = marks;
		}	
};
class cmp{
	public:
		bool operator()(Students l, Students r){
			if(l.marks < r.marks)				// Unlike normal custom compare function
				return true;					// for decending order we have to use left < right
			else if(l.marks > r.marks)			// nd for ascending order we use left > right
				return false;
			else
				if(l.roll > r.roll)
					return true;
				else
					return false;
		}	
};
int main()
{
    priority_queue <Students, vector<Students>, cmp> pq;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    	string name;
		int roll;
		int marks;
		cin >> name >> roll >> marks;
		Students obj(name, roll, marks);
		pq.push(obj);
    }

    while(!pq.empty()){
    	cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    	pq.pop();
    }
    
    return 0;
}