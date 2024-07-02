#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    unordered_map<int, int> map;

    for(int i = 0; i < n; i++){
        char temp[7];
        cin >> temp;

        int key, value;
        switch (temp[0]){
            case 'a':
                cin >> key >> value;
                map[key] = value;
                break;
            case 'f':
                cin >> key;
                if (map[key]){
                    cout << map[key] << "\n";
                }
                else{
                    cout << "None"<< "\n";
                }
                break;
            case 'r':
                cin >> key;
                map.erase(key);
                break;
        }   
    }

    return 0;
}