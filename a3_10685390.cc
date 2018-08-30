#include <iostream>

using namespace std;


int main ()


{
int mark;
cout<<"Input score : ";
cin>>mark;

if (mark >= 80 && mark <= 100)
{
cout <<"A"<<endl<<"Outstanding Performance"<<endl;
}
else if(mark >= 75 && mark <= 79)
{
cout <<"B+"<<endl<<"Very Good Performance"<<endl;
}
else if(mark >= 70 && mark <= 74 )
{
cout <<"B"<<endl<<"Good Performance"<<endl;
}
else if(mark >= 65 && mark <= 69)
{
cout <<"C+"<<endl<<"Fairly Good Performance"<<endl;
}
else if(mark >= 60 && mark <= 64)
{
cout <<"C"<<endl<<"Average Performance"<<endl;
}
else if(mark >= 55 && mark <= 59)
{
cout <<"D+"<<endl<<"Below Average"<<endl;
}
else if(mark >= 50 && mark <= 54)
{
cout <<"D"<<endl<<"Marginal Pass"<<endl;
}
else if(mark >= 45 && mark <= 49)
{
cout <<"E"<<endl<<"Unsatisfactory Performance"<<endl<<"Please sit up"<<endl;
}
else if(mark >= 0 && mark <= 44)
{
cout <<"F"<<endl<<"Fail"<<endl<<"You need a resit please"<<endl;
}
else
{
cout <<"Invalid Input"<<endl;
}
return 0;
}
