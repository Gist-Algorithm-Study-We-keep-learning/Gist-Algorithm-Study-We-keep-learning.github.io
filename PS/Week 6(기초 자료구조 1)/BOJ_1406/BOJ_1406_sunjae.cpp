#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){
    list<char> lst;
    string s;
    int n,m;
    char c;

    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++) lst.push_back(s.at(i));
    list<char>::iterator it;
    it=lst.end();
    
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>c;
        if(c=='L'){
            if(it==lst.begin())continue;
            else it--;
            cout<<"Now cursor is "<<*it<<'\n';
        }
        else if(c=='D'){
            if(it==lst.end())continue;
            else it++;
            cout<<"Now cursor is "<<*it<<'\n';
        }
        else if(c=='B'){
            if(it==lst.begin()) continue;
            else{
                it--; 
                it=lst.erase(it);
                cout<<"Now cursor is "<<*it<<'\n';
            }
        }
        else if(c=='P'){
            cin>>c;
            it=lst.insert(it,c);
            it++;
            cout<<"Now cursor is "<<*it<<'\n';
        }
    }
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it;
    }
    return 0;
}