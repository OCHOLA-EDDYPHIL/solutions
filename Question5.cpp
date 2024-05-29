#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool twosum(const vector<int>& arr, int target) {
    // Create a hash map to store the elements and their indices. Hashmap is similar to dictionaries in py
    unordered_map<int, int> elements;

    // Iterate through the array
    for (int i = 0; i < arr.size(); ++i) {
        int complementno = target - arr[i];

        // Check if the complement exists in the hash map
        if (elements.find(complementno) != elements.end()) {
            // Print the indices of the elements that add up to the target
            cout << "Pair found at indices " << elements[complementno] << " and " << i << endl;
            return true;
        }

        // Add the current element to the hash map
        elements[arr[i]] = i;
    }

    // No pair found
    cout << "No pair found" << endl;
    return false;
}

int main() {
    vector<int> arr = {17, 12, 1, 45};
    int target = 46;

    twosum(arr, target);

    return 0;
}

