#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    unordered_map<int, int> map;

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        map[temp]++;
    }

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        cout << map[temp] << " ";
    }

    return 0;
}