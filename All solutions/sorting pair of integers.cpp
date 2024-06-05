/*#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;
// Custom comparator function
bool compareBySecond(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    vector<std::pair<int, int>> vec = { {1, 4}, {2, 3}, {3, 2}, {4, 1}, {5, 5} };

    // Sort the vector using the custom comparator
    std::sort(vec.begin(), vec.end(), compareBySecond);

    // Print the sorted vector
    std::cout << "Sorted vector based on second element:" << std::endl;
    
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " : " << vec[i].second << endl;
    }

    return 0;
}
*/