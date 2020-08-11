#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long int t,p,h;
	cin>>t;
	for(int j=0; j<t; j++)
    {
        cin>>h>>p;
        for(int i=0; ; i++)
        {
            h= h-p;
            p=p/2;
            cout<<h<<" "<<p<<endl;
            if(p==0)
            {   cout<<"0"<<endl;
                break;
            }
            else if(h<=0)
            {
                cout<<"1"<<endl;
                break;
            }
        }

    }
	return 0;
}