#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int num ;
    cout<<"Enter the number: ";
    cin>>num;
    int count = 0 ;
    while(num > 0)
    {
        int lastDigit = num%10 ;
        count++ ;
        num = num / 10 ;
    }
    cout<<"The number of digits in the number: "<<count<<endl ;
    return 0 ;
}
