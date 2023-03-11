#include <iostream>

using namespace std;

int main()
{
    int x,y,ans,t;
    cin>>t;
    while(t--){
        cin>>x>>y;
        ans=x/y;
        ans+=x%y;
        cout<<ans<<endl;
    }
    return 0;
    
    
}
