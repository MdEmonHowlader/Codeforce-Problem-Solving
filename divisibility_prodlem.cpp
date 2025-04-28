#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<a<<endl;
        }else{
            cout<<b-(a%b)<<endl;
        }
    }
return 0;

}