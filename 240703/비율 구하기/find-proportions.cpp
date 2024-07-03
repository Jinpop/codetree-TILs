#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, double> m;
    double n, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char temp[31];
        cin >> temp;

        m[temp]++;
        total ++;
    }
    cout << fixed;
    cout.precision(4);
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << float(it->second * (100.0000 / total)) << "\n";
    }

    return 0;
}