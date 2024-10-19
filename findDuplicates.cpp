#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
  
    // Find frequency of every element
    unordered_map<int, int> freq;
    for (int x : arr)
        freq[x]++;

    // Move all those elements to resul that
    // have frequency more than 1.
    vector<int> res;
    for (auto& entry : freq) {
        if (entry.second > 1)
            res.push_back(entry.first);
    }

    return res;
}

int main() {
    vector<int> arr = {12, 11, 40, 12, 5, 6, 5, 12, 11};
    vector<int> res = findDuplicates(arr);
    for (int num : res) {
        cout << num << " ";
    }
    return 0;
}
