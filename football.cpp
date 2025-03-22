// 96A-Football
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin>>s;
  int a=0, z=0, flag=0;
  for(int i=0; i<s.size(); i++){
    if(s[i]=='1'){
      a++;
      z=0;
    }else{
      z++;
      a=0;
    }
    if(a==7 || z==7){
      flag=1;
      break;
    }
  }
  if(flag)cout<<"YES" <<endl;
  else cout<<"NO"<<endl;
  return 0;

}