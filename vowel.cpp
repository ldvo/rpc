#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int tests, vc, cc;
    string word;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        cin >> word;
        vc = 0;
        cc = 0;
        for (int y = 0; y < word.size(); y++)
        {
            if (word[y] == 'a')
                vc++;
            else if (word[y] == 'e')
                vc++;
            else if (word[y] == 'i')
                vc++;
            else if (word[y] == 'o')
                vc++;
            else if (word[y] == 'u')
                vc++;
            else
                cc++;
        }
        cout << word << endl;
        if (vc > cc)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}

