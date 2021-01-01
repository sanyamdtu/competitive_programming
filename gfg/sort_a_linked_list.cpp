#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node
{
	int data;
	ListNode *next;
};
void insert(ListNode *&head,int x){
	ListNode *temp=new node;
	temp->data=x;
	temp->next=NULL;
	ListNode *t=head;
	if(head==NULL){
		head=temp;
		return ;
	}
	while(t->next){
		t=t->next;
	 }
	t->next=temp;
}
ListNode *merge(ListNode * a, ListNode *b){
	if(!a)
		return b;
	if(!b)
		return a;
	ListNode *t=new node ;

	if(a->data>b->data){
		t->data=b->data;
		b=b->next;
		t->next=merge(a,b);
	}
	else{
		t->data=a->data;
		a=a->next;
		t->next=merge(a,b);
	}
	return t;
}
ListNode*  msort(ListNode *head){
	if(head==NULL||head->next==NULL)
		return head ;
	ListNode *f,*sl;
	f=sl=head;
	ListNode *temp=NULL;
	while(f&&f->next){
		temp=sl;
		sl=sl->next;
		f=f->next->next;
	}
	temp->next=NULL;
	ListNode *l=msort(head);
	ListNode *r=msort(sl);
	ListNode *s=merge(l,r);
	return s;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ListNode *head=NULL;
	while(1){
		int x;
		cin>>x;
		if(x==-1)
			break;
		insert(head,x);
	}
	head=msort(head);
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
	return 0;
}