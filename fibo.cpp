#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fibo(int n){
    int a=1,b=2;
    int ans=0;
    vector<int>vec;
     vec.push_back(a);
      vec.push_back(b);

    for(int i=3;i<n;i++){
        ans = a+b ;
        vec.push_back(ans);
        a=b;
        b=ans;
        
    }
    
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }

}



int main(){


   int n=6;
   fibo(n);



    return 0;
}