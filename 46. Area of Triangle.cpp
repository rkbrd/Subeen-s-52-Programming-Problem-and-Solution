#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        double s=(a+b+c)/2.0;
        double area=s*(s-a)*(s-b)*(s-c);
        area=sqrt(area);
        cout<<fixed<<setprecision(3);
        cout<<"Area = "<<area<<endl;
    }
}
