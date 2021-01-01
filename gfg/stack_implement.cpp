#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
class sack{
	int arr[20];
	int top;
	public:
		sack(){
			top=-1;
		}
		void insert(int data){
			if(top==20){
				cout<<"not possible";
				return ;
			}
			// top++;
			// cout<<++top;
			arr[++top]=data;
		}
		bool isempty(){
			return top==-1;
		}
		int pop(){
			if(top==-1){
				cout<<"not possible";
				return INT_MAX;
			}
			return arr[top--];
		}
};
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sack s;
	s.insert(10);
	s.insert(20);
	s.insert(40);
	s.insert(30);
	s.insert(80);
	cout<<s.pop();
	cout<<s.pop();
	cout<<s.pop();
	cout<<s.pop();cout<<s.pop();cout<<s.pop();cout<<s.pop();
	return 0;
}