#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, float> m;
    float n, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char temp[11];
        cin >> temp;

        m[temp]++;
        total++;
    }

    for (auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second*(100/total) << "\n";
    }

    return 0;
}