#include <iostream>
#include <vector>
#include <cmath> // For std::abs

using namespace std;

vector<int> findDuplicates(std::vector<int>& nums) {
    vector<int> duplicates;

    for (int i = 0; i < nums.size(); ++i) {
        // Calculate the index to mark based on the value at nums[i]
        int index = std::abs(nums[i]) - 1; // Convert value to index (1-based to 0-based)

        if (nums[index] < 0) {
            duplicates.push_back(abs(nums[i]));
        } else {
            // Mark the value at this index as visited by negating it
            nums[index] = -nums[index];
        }
    }

    for (int i = 0; i < nums.size(); ++i) {
        nums[i] = abs(nums[i]);
    }

    return duplicates;
}

int main() {
    // Initialize the vector using the constructor syntax
    std::vector<int> input_array{4, 3, 2, 7, 8, 2, 3, 1};
    std::vector<int> output = findDuplicates(input_array);

    std::cout << "Duplicates: ";
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
