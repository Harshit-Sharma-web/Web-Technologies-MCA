#include <iostream>
using namespace std;

int main()
{
int year=1904;

if(year%4==0){

if(year%100!=0 || year%400==0)

{cout<<"leap year";}
else{
    cout<<"not leap year";
}

// else if (year%400==0)

// {cout<<"leap year";}

}
else{
    cout<<"not leap year";
}
return 0;
}
   
