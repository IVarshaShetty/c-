
#include <iostream>
#include<string>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       int i,j;
       int l=1;
       for(j=0;j<=s.length()-3;j++){
           l=1;
           for(i=j;i<j+3;i++){
               if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
               {
               l=0;
           }
       }
       if(l==1){
           cout<<"HAPPY"<<endl;
       }
       if(l==0)
       cout<<"SAD"<<endl;
   }

    return 0;
}
}
