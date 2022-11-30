
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    cout<<str<<endl;
    char c = str[0];
    int indc = 0;
    while (indc<str.length())
    {
        int a1=indc;
        
        if (c == '1')
        {
            indc++;
            if (indc < str.length())
                c = str[indc];
            else
                break;
        }
        else
        {
            int j = -1;
            cout<<c<<" "<<indc<<" ";
            for (int i = indc + 1; i < str.length(); i++)
            {
                if (str[i] == c)
                {
                    j = i;
                    break;
                }
            }
            cout<<j<<" ";
            int z = -1;
            if (j == -1)
            {
                cout<<endl;
                indc++;
                if (indc < str.length())
                    c = str[indc];
                else
                    break;
            }
            else
            {
                cout<<endl;
                for (int i = indc; i <= j; i++)
                {
                    if (str[i] > c)
                    {
                        z = 0;
                        break;
                    }
                }
                if (z == -1)
                {
                    // str.erase(str[0] + j);
                    str[j]='1';
                }
                else
                {
                    // str.erase(str[0] + indc);
                    str[a1]='1';
                }
            }
        }
    }
    cout << str;
    return 0;
}