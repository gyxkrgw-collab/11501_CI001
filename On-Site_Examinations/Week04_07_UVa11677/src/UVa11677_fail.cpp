#include <iostream>
using namespace std;
int main(){
  int h,m,H,M;
  while(cin>>h>>m>>H>>M){ //輸入
    //如果不再範圍內或是全都是0就停
    if((H==0&&M==0&&h==0&&m==0)||(0>h||h>23)||(0>H||H>23)||(0>m||m>59)||(0>M||M>59))
        break;
    //計算總睡眠時間然後直接輸出
    if(H>h)
    	cout<<(H-h)*60+(M-m)<<endl;
    else if(H<h)
    	cout<<(24-h+H)*60+(M-m)<<endl;
    else if(H==h)
    	cout<<24*60+(M-m)<<endl;
  }
  return 0;
}
