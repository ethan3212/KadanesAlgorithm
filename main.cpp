#include <vector>
#include <iostream>
using namespace std;

int kadanesAlgorithm(vector<int> array) {
    int largestSum = array[0];
    int currentSum = array[0];
    for(int i = 1; i < array.size(); i++) {
        currentSum = max(array[i], currentSum + array[i]);
        largestSum = max(currentSum, largestSum);
    }
    return largestSum;
}

int main() {
    vector<int> input = {3, 5, -9, 1, 3, -2, 3, 4, 7, 2, -9, 6, 3, 1, -5, 4};
    cout << kadanesAlgorithm(input);
    return 0;
}