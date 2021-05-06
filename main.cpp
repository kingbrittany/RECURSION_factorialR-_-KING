//Programmer: Brittany King
//Date: 4/29/21
//Class: COSC 1437-58112

// The definition of recursion is the repeated application of a recursive procedure or definition.
//Recursive Function - contains a call to itself 

#include <bits/stdc++.h>
#include <Input_Validation_e>
using namespace std;
 
int factorialR(int n)
{
   if(n<=1){
      return n;
   }
   return n*factorialR(n-1);//recursively calling factorialR
}
 
int main()
{
   int n;
   n = validateInt(n);
   //cin>>n;//taking input from user
   cout<<factorialR(n)<<endl;//calling recursive function 
   return 0;
}