#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b&&(a!=-1||b!=-1)){
        int diff=abs(a-b);
        int ans=min(diff,100-diff);
        cout<<ans<<endl;
    }
    return 0;
}
