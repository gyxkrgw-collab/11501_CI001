#include <iostream>
using namespace std;
int main(){
    long long n;
    int z=100;
    while(cin>>n && n>=-1 && z!=1 && n<1000000001){
        long long i,a,b=n/3,all=0;
        long long j=1;
        for(i=0;i<=b;i++){
            a = n % 3;
            n /= 3;
            all += a * j;
            j *= 10;
            }
            cout<<all<<endl;
            z-=1;
        }
    return 0;
}
