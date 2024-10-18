#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    
    int count=0,rem,result=0;
    while(a!=0)
    {
        rem=a%10;
        if(rem>7 || rem<0)
    {
        cout<<"INVALID INPUT";
        return 1;
    }
        a=a/10;
        result=result+(rem*pow(8,count));
        count++;
    }
    cout<<result<<endl;
    return 0;
    system("pause");
}