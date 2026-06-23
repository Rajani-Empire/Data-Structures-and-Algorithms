#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

   int n =4;
   for(int i =1;i<=n;i++){

      for(int j =1;j<=n-i;j++){
        cout<<"  ";
      }

      for(int j =1;j<=i;j++){
        cout<<j<<" ";
      }

      for(int j=2;j<=i;j++){
        cout<<j-1<<" ";
      }
     



   cout<<endl;


   }



    return 0;
}