#include <iostream>
using namespace std;
int main(){
    int a,b,e=0;
    while(cin>>a>>b && (a!=0 && b!=0 && e<=201)){
    int i,c=0,d=0;
    for(i=316;i>=1;i--){
        if(i*i<=b)
             c++;
    }
    for(i=1;i<=316;i++){
        if(i*i<=a && i*i != a)
        d++;
    }
    // cout<<c-d+1<<endl;
     cout<<c-d<<endl;
      e++;
    }
return 0;
    }
