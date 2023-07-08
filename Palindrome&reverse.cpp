#include <bits/stdc++.h>
using namespace std ;
int reverNum(int n)
{
    int ans = 0 ;
    while(n != 0)
    {
        int lst = n%10 ;
        if((ans > INT_MAX/10) || (ans < INT_MIN/10))
            return 0 ;
        ans = (ans*10)+lst ;
        n = n/10 ;
    }
    return ans ;
}
int main()
{
    int n ;
    cout<<"Enter the number: ";
    cin>>n ;
    cout<<"The reversed number is: "<<reverNum(n)<<endl ;
    
    int revnum = reverNum(n);
    if(n < 0)
    {
        cout<<"Negative number, cannot be a palindrome";
        return 0 ;
    }
    if(n == revnum)
        cout<<"Palindrome"<<endl ;
    else
        cout<<"Not palindrome" ;
        
    return 0;
    
}
