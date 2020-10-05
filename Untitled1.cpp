#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string kituhoa(string a)
{
    for(int i = 0; i<a.size(); i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] = a[i] + 32;
        }
    }
    a[0] = a[0] - 32;
    for(int i = 1; i<a.size(); i++){
        if(a[i] == ' '){
            a[i+1] = a[i+1] - 32;
        }
    }
    return a;
}
string xoakt(string s){
    for(int i = 0; i<s.size(); i++){
        if((s[i] < 'a' && s[i] > 'z') || (s[i] < 'A' && s[i] > 'Z')){
            s.erase(s.begin() + i);
        }
    }
    while(s[0]==' '){
        s.erase(s.begin() + 0);
    }
    while(s[s.size()-1] == ' '){
        s.erase(s.begin() + s.size() - 1);
    }
    for(int i = 0; i<s.size(); i++){
        if(s[i]==' ' && s[i+1]==' '){
            s.erase(s.begin() + i+1);
        }
    }
    
    return s;
}
int main()
{
    string a;
    getline(cin, a);
     fflush(stdin);
     string s = xoakt(a);
     string kq = kituhoa(s);
    cout<<kq;
    
      return 0;
}
