#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,i, dev, result;
    cin >> n ;
    if(n ==1)
    {
        cout << 1 << endl;
        cout << n << endl ;
        return 0 ;
    }

    // DESIGN A LOOP

    for(i = 2 ; i <= 9 ; i++)
    {

        if(n % i == 0)break;

    }

    dev = i ;
    cout << i << endl;
    result = n / i ;

    if(result < 10)
    {

        while(i > 0)
        {
            cout << result << " ";
            i--;
        }
    }
    else{
        n = result ; // hobe na eivabe hobe na
    }





    return 0 ;
}
