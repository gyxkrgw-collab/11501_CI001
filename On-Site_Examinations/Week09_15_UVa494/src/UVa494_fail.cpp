#include <bits/stdc++.h>
using namespace std;
int main(){
    string line;
    while(getline(cin,line)){
        int count=0;
        bool a=false;
        for(int i=0;i<line.size();i++){
            if(line[i]==' '&& ((line[i+1]>64 && line[i+1]<91)||(line[i+1]>96 && line[i+1]<123)))
                count++;
        }
      if((line[0]>64 && line[0]<91)||(line[0]>96 && line[0]<123))
        cout<<count+1<<endl;
      else
        cout<<count<<endl;
    }
}
