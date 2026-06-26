#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
   int n;
   cin>>n;
  
   int ans = 0;
   int pow=1;
   int rem=0;

   while(n !=0){
     rem=n%10;
     ans += (rem*pow);
     n = n/10;
     pow=pow*2;

   }

   cout <<ans;



 

    return 0;
}