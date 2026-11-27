#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    if(!(cin>>n)) return 0;
    for(int t=1;t<=n;t++){
        int a;
        cin>>a;
        int m=0;
        for(int i=0;i<a;i++){
            int s;
            cin>>s;
            if(s>m){
                m=s;
            }
        }
    cout<<"Case "<<t<<": "<<m<<endl;
    }
}
