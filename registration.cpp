#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin >>n;
    unordered_map<string, int>m;
    string name;
    for(int i=0; i<n; i++){
        cin>> name;
        if(m[name]==0){
            cout<<"OK"<<endl;
            m[name]++;
        }else{
            cout<<name<<m[name]<<endl;
            m[name + to_string(m[name])]=1;
            m[name]++;
        }
    }
    return 0;
    
}