#include <iostream>
using namespace std;
int main()
{
  cout<<"enter a number to calculate its factorial"<<endl;
  int x,fact;
  cin>>x; //x=5
  fact=x; //fact=5;
  while(x>1)
  {
	  x--;       //x=4, 3
	  fact=fact*x;      //fact=20*3=60
  }
  cout<<"factorial value:"<<fact;
  return 0;
}