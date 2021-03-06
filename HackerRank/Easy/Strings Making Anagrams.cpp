#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int alpha[26] = {0, };
    int sum = 0;
    
    for (int i = 0; i < a.length(); i++)
    {
        alpha[a[i] - 'a']++;
    }
    
    for (int i = 0; i < b.length(); i++)
    {
        alpha[b[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++)
    {
        sum += abs(alpha[i]);
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
