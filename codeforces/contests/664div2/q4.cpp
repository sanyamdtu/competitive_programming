#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
class Student
{
	int marks,Reg_No;
	string Name,Address;
	public:
		 void initialze(int marks,int Reg_No,string Name,string Address){
		 	this->marks=marks;
		 	this->Reg_No=Reg_No;
		 	this->Name=Name;
		 	this->Address=Address;
		 }
		 void display(){
		 	cout<<"Name- "<<Name<<endl;
		 	cout<<"Reg_No- "<<Reg_No<<endl;
		 	cout<<"Address- "<<Address<<endl;
		 	cout<<"marks- "<<marks<<endl;
		 }
};


int main()
{
	Student s;
	int marks,Reg_No;
	string Name,Address;
	cin>>marks;
	cin>>Address;
	cin>>Reg_No;
	cin>>Name;
	s.initialze(marks,Reg_No,Name,Address);
	s.display();
	return 0;
}