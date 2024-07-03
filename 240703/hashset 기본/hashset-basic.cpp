#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    unordered_set<int> set;

    int n;
    cin >> n;

    while (n--)
    {
        string temp;
        int value;
        cin >> temp >> value;

        switch (temp[0])
        {
        case 'f':
            if (set.find(value) != set.end())
            {
                cout << "true\n";
            }
            else
            {
                cout << "false\n";
            }
            break;
        case 'a':
            set.insert(value);
            break;
        case 'r':
            set.erase(value);
            break;
        }
    }

    return 0;
}