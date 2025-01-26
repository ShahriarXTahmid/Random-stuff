#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  float num1, num2;

  cout<<"enter 2 numbers : ";
  cin>>num1>>num2;

  cout<<showpoint;
  cout<<fixed;
  cout<<setprecision(2);

  float sum= num1+ num2;
  cout<<setw(20)<<"sum is = "<<sum<<endl;

  float sub= num1-num2;
  cout<<setw(20)<<"substraction is = "<<sub<<endl;

  float multi= num1*num2;
  cout<<setw(20)<<"multiplication is = "<<multi<<endl;

  float div= (float)num1/num2;
  cout<<setw(20)<<"division is = "<<div<<endl;

  /*int rem= num1%num2;
    cout<<"reminder is = "<<rem<<endl;
  */
    return 0;
}