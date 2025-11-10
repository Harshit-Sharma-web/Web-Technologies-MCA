#include<iostream>
using namespace std;
int main(){
    int a=10,b=20,c=15;
    if(a>b&&a>c)
    {
        cout<<a<<"is largest"<<endl;
    }
    else if(b>a&&b>c){
        cout<<b<<"is largest"<<endl;
    }
    else{
        cout<<c<<"is largest"<<endl;
    }
    return 0;
}