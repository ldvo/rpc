#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct person
{
    int s1, s2, s3;
};

bool compareByS1(const person &a, const person &b)
{
    return a.s1 < b.s1;
}

bool compareByS2(const person &a, const person &b)
{
    return a.s2 < b.s2;
}

bool compareByS3(const person &a, const person &b)
{
    return a.s3 < b.s3;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    int tests, people, counter;
    bool possible;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        cin >> people;
        vector<person> can1(people);
        vector<person> can2(people);
        vector<person> can3(people);
        for (int y = 0; y < people; y++)
        {
            cin >> can1[y].s1 >> can1[y].s2 >> can1[y].s3;
            can2[y].s1 = can1[y].s1;
            can2[y].s2 = can1[y].s2;
            can2[y].s3 = can1[y].s3;
            can3[y].s1 = can1[y].s1;
            can3[y].s2 = can1[y].s2;
            can3[y].s3 = can1[y].s3;
        }
        sort(can1.begin(), can1.end(), compareByS1);
        sort(can2.begin(), can2.end(), compareByS2);
        sort(can3.begin(), can3.end(), compareByS3);

        counter = 1;
        for (int y = 1; y < people; y++)
        {
            possible = false;
            if ( (can1[y].s1 < can1[y].s2 && can1[y].s1 < can1[y].s3))
            {
                for (int z = 0; z < people; z++)
                {
                    if (can1[y].s1 == can1[z].s1)
                    {
                        possible = true;
                        break;
                    }
                    if (can1[y].s2 > can1[z].s2 && can1[y].s3 > can1[z].s3)
                        break;
                }
            }
            else if (can1[y].s2 < can1[y].s1 && can1[y].s2 < can1[y].s3)
            {
                for (int z = 0; z < people; z++)
                {
                    if (can1[y].s2 == can2[z].s2)
                    {
                        possible = true;
                        break;
                    }
                    if (can1[y].s1 > can2[z].s1 && can1[y].s3 > can2[z].s3)
                        break;
                }
            }
            else
            {
                for (int z = 0; z < people; z++)
                {
                    if (can1[y].s3 == can3[z].s3)
                    {
                        possible = true;
                        break;
                    }
                    if (can1[y].s2 > can3[z].s2 && can1[y].s1 > can3[z].s1)
                        break;
                }
            }
            if (possible)
                counter++;

        }
        cout << counter << endl;
        can1.clear();
        can2.clear();
        can3.clear();
    }
    return 0;
}

