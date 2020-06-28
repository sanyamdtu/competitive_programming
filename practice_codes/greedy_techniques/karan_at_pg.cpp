    #include <bits/stdc++.h>
    using namespace std;
    struct fiend
    {
        int s, e,i;
    };
    bool comp(fiend a,fiend b){
        return a.s<b.s;
    }
    bool comp2(fiend a,fiend b){
        return a.e<b.e;
    }
    int main()
    {
        int t;
        cin >> t;
       for(int l=1;l<=t;l++)
        {
            int n;
            cin >> n;
            int x,y,p,q,a,b,r,s;

            scanf("%d:%d",&x,&y);
            scanf("%d:%d",&p,&q);
            scanf("%d:%d",&a,&b);
            cin>>r>>s;
            
            int in,wake,open,extra=0;
            in=x*60+y;
            wake=p*60+q;
            open=a*60+b;
            fiend f[n];
            for(int i=0;i<n;i++){
                int h1,h2,m1,m2;
                scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
                f[i].s=h1*60+m1;
                f[i].e=h2*60+m2;
                f[i].i=i;
            }   
             // for(int i=0;i<n;i++){
             //    cout<<f[i].s<<" "<<f[i].e<<endl;
             // }
            int ans=-1,time=INT_MAX;
            sort(f,f+n,comp);
            for(int i=0;i<n;i++){
                int total=max(open,wake+r)+r+s;
                if(f[i].s>=total){
                    if(time>total){
                        time=total;
                        ans=f[i].i+1;
                    }
                }
            }
            sort(f,f+n,comp2);
            for(int i=0;i<n;i++){
                int total=max(f[i].e,max(wake+r,open))+r+s;
                if(total<=in){
                    if(time>total){
                        time=total;
                        ans=f[i].i+1; 
                    }                   
                }
            }

            cout<<"Case "<<l<<": "<<ans<<endl;
        }
    }