#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t,p,h;
	cin>>t;
	for(int j=0; j<t; j++)
    {
        cin>>h>>p;
            h= h-p;
            p=p/2;
            if(h>=p*2)
            {   cout<<0<<endl;
                
            }
            else 
            {
                cout<<1<<endl;
            }

    }
	return 0;
}