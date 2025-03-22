#include<iostream>
using namespace std;
int main(){
    string n;
    cin >>n;
    int ans =0;
    for(int i=0; i<n.size(); i++){
        int cnt =0;
        if(n[i]=='0'){
            while (n[i]=='0' && i<n.size())
            {
                cnt++;
                i++;
            }
        }else{
            while (n[i]='1' && i<n.size())
            {
               cnt++;
               i++;
            }
        }
        if(cnt>=7)
            ans=1;
        i--;
    }
    if(ans==1)cout<<"Yes" << endl;
    else cout<<"NO"<<endl;
    return 0;
}