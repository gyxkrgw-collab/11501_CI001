#include <bits/stdc++.h>
using namespace std;
int main(){
    string line;
    while(getline(cin, line)){
        for(char &c : line) c=c-7;
        cout<<line<<'\n';
    }
}
