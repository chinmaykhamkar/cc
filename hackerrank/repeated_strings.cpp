#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    int i, ini = 0, rem = 0;
    long count = 0;
    long mul = n / s.length();
    long ext = n % s.length();
    string temp = s, f, e;
    if (n < s.length())
    {
        for (i = 0; i < n; i++)
        {
            if ('a' == s[i])
            {
                count++;
            }
        }
    }
    else
    {
        for (i = 0; i < s.length(); i++)
        {
            if ('a' == s[i])
            {
                ini++;
            }
        }
        count = ini * mul;
        e = s.substr(0, ext);
        for (i = 0; i < e.length(); i++)
        {
            if ('a' == e[i])
            {
                rem++;
            }
        }
        count = count + rem;
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
