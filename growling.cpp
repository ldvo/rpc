#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int tests;
    double gears, a, b , c, zero, maxi, tm, tn;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        tm = 0;
        cin >> gears;
        for (int y = 0; y < gears; y++)
        {
            cin >> a >> b >> c;
            zero = b/(2*a);
            maxi = (-1*a*zero*zero)+(b*zero)+c;
            if (maxi > tm)
            {
                tm = maxi;
                tn = y+1;
            }
        }
        cout << tn << endl;
    }
    return 0;
}
