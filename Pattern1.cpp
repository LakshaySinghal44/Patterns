#include<iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter the value of n : " ;
   cin >> n;
   
   if(n <=1){
   cout << "Enter a valid number" << endl;}
   
   else{
   
   int i=1;
   
   while (i<=n)
   {
       int j=1;
       while(j<=n){
           cout << "*";
           j = j+1;
       }
       cout << endl;
       i = i+1;
   }
   }
   return 0;
}

