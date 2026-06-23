#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

   int n = 4;
   int num=1;
  
   for(int i =n;i>=1;i--){

   for(int j =1;j<=n-i;j++){
    cout<<"  ";
   }




    for(int j=1;j<=i;j++){
        cout <<num<< " ";
       
    }
    num++;
    cout<<endl;
   }


   char ch = 'A';

   for(int i =n;i>=1;i--){

   for(int j =1;j<=n-i;j++){
    cout<<"  ";
   }




    for(int j=1;j<=i;j++){
        cout <<ch<< " ";
       
    }
    ch++;
    cout<<endl;
   }



    return 0;
}