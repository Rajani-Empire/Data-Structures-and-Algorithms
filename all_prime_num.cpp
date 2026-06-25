#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void allprime(int n){
   
   vector<int>a;
  for(int i=2;i<=n;i++){
     bool ok=true;
    for(int j=2;j<i;j++){
       
        if(i%j==0){
            ok= false;
            break;            
        }
        
    }

    if(ok){
        a.push_back(i);
    }
      
  }

  for(int i=0;i<a.size();i++){
    cout<< a[i]<<endl;
  }

}


int main(){
     int x;
     cin>>x;
     allprime(x);

    return 0;
}