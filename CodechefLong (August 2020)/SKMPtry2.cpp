#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        string s , p ;
        cin >> s ;
        cin >> p ;

        for (auto num1 : p)
        {
            for (int i=0 ; i<s.size() ; i++)
            {
                if (num1 == s[i])
                {
                    s.replace(i , 1 , "");
                    break ;
                }
                else
                {
                    continue ;
                }
                
            }
        }

        sort(s.begin() , s.end()) ;
        
        char first = p[0] ;

        int next = 0 ;

        for (int i=0 ; i<s.size() ; i++)
        {
            if (s[i] <= first)
            {
                cout << s[i] ;
            }
            else
            {
                cout << p ;
                next = i ;
                break ;
            }
            
        }

        for (int i = next ; i<s.size() ; i++)
        {
            cout << s[i] ;
        }

        cout << endl ;

    }

    return 0;
}