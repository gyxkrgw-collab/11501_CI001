#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n && n!=0 && 1<=n<=2147483647){
        int i,a,b=n/2,all=0,c=n,d=0;
        int j=1;
        for(i=0;i<=b;i++){
            a = n % 2;
            n /= 2;
            all += a * j;
            j *= 10;
            if(a==1)
                d+=1;
            }
            cout<<"The parity of "<<all<<" is "<<d<<" (mod 2)."<<endl;
        }
    return 0;
}
