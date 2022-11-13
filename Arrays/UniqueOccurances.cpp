#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map<int, int> map;

int main()
{

    int arr[] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    vector<int> freq;

    for (auto x : map)
    {
        freq.push_back(x.second);
    }

    sort(freq.begin(), freq.end());
    bool ans = true;
    for (int i = 0; i < freq.size() - 1; i++)
    {
        if (freq[i] == freq[i + 1])
        {
            ans = false;
            break;
        }
    }
    cout << ans << endl;
}