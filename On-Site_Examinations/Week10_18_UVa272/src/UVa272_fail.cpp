#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    while(getline(cin,line)){
        for (char &c:line){
            if(c=='"'){
                c='`';
            }
        }
        cout<<line<<endl;
    }
}
