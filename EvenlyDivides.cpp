#include <bits/stdc++.h>
using namespace std ;
int evenlyDivides(int x)
{
    int cnt = 0 ;
    int temp = x ;
    while(temp > 0)
    {
        int lst = temp%10 ;
        if(lst!=0 && x%lst == 0)
            cnt++ ;
        temp = temp/10 ;
    }
    return cnt ;
}
int main()
{
    int n ;
    cout<<"Enter the number: ";
    cin>>n ;
    cout<<"The count is : "<<evenlyDivides(n);
    return 0 ;
}
