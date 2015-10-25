#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    unsigned long long g1, g2, f1, f2, f3, n, tests;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        cin >> n;
        g1 = 1;
        g2 = 1;
        while (true)
        {
            f1 = g1;
            f2 = g2;
            do
            {
                f3 = f1 + f2;
                f1 = f2;
                f2 = f3;
            } while (f3 < n);
            if (f3 == n)
                break;
            else
            {
                g1++;
                if (g1 > g2)
                {
                    g1 = 1;
                    g2++;
                }
            }

        }

        cout << g1 << " " << g2 << endl;
    }

    return 0;
}
