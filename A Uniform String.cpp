#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int t,n,k,counter = 0;
    char ch;

    cin >> t ;

    for(int i = 0 ; i < t ; i ++)
    {
        cin>> n >> k ;
        ch = 'a';
        counter = 0;
        while(n--)
        {

            cout << ch++;
            counter ++ ;
            if(counter >= k)
            {
                ch ='a';
                counter = 0;
            }


        }
        cout << endl;
    }
    return 0 ;
}
