#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a=0,b=0,curr_a=0,curr_b=0,count=0;
        int arr[n],flag=1;//0 means bob turn
        deque<int> deq;
        forn(i,n){
            int num;
            cin>>num;
            deq.push_back(num);
        }
        while(!deq.empty()){
            if(flag==0){
                curr_b=0;
                while(curr_b<=curr_a && !deq.empty()){
                    int num=deq.back();
                    deq.pop_back();
                    curr_b+=num;
                }
                b+=curr_b;
                flag=1;
            }
            else{
                curr_a=0;
                while(curr_a<=curr_b && !deq.empty()){
                    int num=deq.front();
                    deq.pop_front();
                    curr_a+=num;
                }
                a+=curr_a;
                flag=0;
            }
            count++;
        }
        cout<<count<<" "<<a<<" "<<b<<endl;
    }
}