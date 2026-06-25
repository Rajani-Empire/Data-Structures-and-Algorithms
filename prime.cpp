#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void isprime(int n){
    int ok=true;
  for(int i=2;i*i<=n;i++){
      if(n%i==0){
        ok=false;
        break;
      }
  }

  if(ok==false){
    cout<<"Not prime number"<<endl;
  }
  else{
    cout<<"prime number"<<endl;
  }


}


int main(){
     int x;
     cin>>x;
     isprime(x);

    return 0;
}