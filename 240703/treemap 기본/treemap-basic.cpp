#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char temp[11];
        cin >> temp;
        int key, value;

        switch (temp[0])
        {
        case 'a':

            cin >> key >> value;
            m[key] = value;
            break;
        case 'f':
            cin >> key;
            if (m.find(key) == m.end())
            {
                cout << "None" << "\n";
            }
            else
            {
                cout << m[key] << "\n";
            }
            break;
        case 'r':
            cin >> key;
            m.erase(key);
            break;
        case 'p':
            if (!m.empty())
            {
                map<int, int>::iterator it;
                for (it = m.begin(); it != m.end(); it++)
                {
                    cout << (it->second) << " ";
                }
                cout << "\n";
            }
            else
            {
                cout << "None" << "\n";
            }
            break;
        }
    }

    return 0;
}