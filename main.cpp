#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long  n , q  , r , l , m  ;
   cin >> n >> q  ;
    long long arr[n];
    for(long long i = 0 ; i < n ;i++)
    {
         cin >> arr[i] ;
    }
    sort(arr , arr + n) ;
   while(q--)
   {
       long long x  ;
       cin >> x  ;
       l = 0 ;
       r = n - 1 ;
       bool c = false ;
       while(l<=r)
       {
           m = (r+l)/2;
           if(x==arr[m])
           {
               c = true;
               break;
           }
           else if(x>arr[m])
           {
               l = m + 1 ;
           }
           else
           {
               r = m - 1 ;
           }
       }
       if(c)
       {
           cout << "found" << endl ;
       }
       else
       {
           cout << "not found" << endl ;
       }
   }

    return 0;
}
