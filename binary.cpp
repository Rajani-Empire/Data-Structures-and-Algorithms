#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
   int n;
   cin>>n;

   int rem=0;
   int ans=0;
   int pow=1;
//    vector<int>vec1;

   while(n !=0){
    rem = n%2;
    // vec1.push_back(rem);
    n=n/2;
    ans+=(rem*pow);
    pow=pow*10;

   }

//    for(int i=vec1.size()-1;i>=0;i--){
//     cout<< vec1[i];
//    }

 cout<<ans;
 

    return 0;
}