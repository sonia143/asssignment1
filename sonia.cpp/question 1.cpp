#include <iostream>
using namespace std;
int main()
{
  //declare variables
  int num1,num2,result;
  cout<<"Enter two numbers:";  //take values from user
  cin>>num1>>num2;
  result=num1+num2;            
  cout<<endl<<"addition result="<<result<<endl;         //addition
  result=num1-num2;
  cout<<endl<<"subtraction result="<<result<<endl;           //subtraction
result=num1*num2;
cout<<endl<<"multiplication result="<<result<<endl;         //multipication
result=num1/num2;
cout<<endl<<"division result="<<result<<endl;            //division
return 0;                //display result
}
