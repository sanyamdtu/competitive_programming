#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
// typedef  long long ll;

class node
{
	node *head;
public:
	int data;
	node *next;
	node(int x){
    	data=x;
		next=NULL;
	}
};
void print(node*  &head){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void insert(node* &head,int s){
	node *t=new node(s);
	node *temp=head;
	if(head==NULL){
		head=t;
	}
	else{
		node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=t;
	}
}
void insert_beg(node* &head,int s){
	node *t=new node (s);
	if(head==NULL){
		head=t;
	}
	else{
		t->next=head;
		head=t;
	}
}
void insert_after(node * &head,int i,int s){
	node *temp=head;
	node *t=new node(s);
	int j=0;
	if(!temp){
		head=t;
		return ;
	}
	while(temp->next!=NULL&&j!=i){
		temp=temp->next;
		j++;
	}
	if(temp!=NULL){
		node *p=temp->next;
		temp->next=t;
		t->next=p;
	}
	else
		temp->next=t;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	node *head=NULL;
	node *temp=new node(20);
	while(1){
		int x;
		cin>>x;
		if(x==-1)
			break;
		insert(head,x);
	}
	insert_beg(head,30);
	insert_after(head,0,88);
	print(head);
	
	return 0;
}