#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'beautifulStrings' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts STRING s as parameter.
 */

long beautifulStrings(string s) {
    long long le = 0, sl = 0;
    string news = "";
    for (int i = 0; i < s.length(); i++)
    {
        le++;
        news += s[i];
        int j = i;
        while (j < s.length() && s[i] == s[j])
            j++;
        if (j - i > 1)
            sl++;
        i = j - 1;
    }
    long long res = 0;
    for (int i = 0; i + 2 < s.length(); i++)
    {
        if (s[i] == s[i + 2] && s[i] != s[i + 1])
            res--;
    }
    return res + le * (le - 1) / 2 + sl;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long result = beautifulStrings(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
