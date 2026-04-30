#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Sequential Search
int sequentialSearch(vector<int> arr, int target, int &comparisons) {
    comparisons = 0;
    for (int i = 0; i < arr.size(); i++) {
        comparisons++;
        if (arr[i] == target) {
            return i; // found
        }
    }
    return -1; // not found
}

// Binary Search
int binarySearch(vector<int> arr, int target, int &comparisons) {
    int left = 0, right = arr.size() - 1;
    comparisons = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        comparisons++;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    int seqComp, binComp;

    // Sequential Search
    int seqIndex = sequentialSearch(arr, target, seqComp);

    // Sort for Binary Search
    sort(arr.begin(), arr.end());

    // Binary Search
    int binIndex = binarySearch(arr, target, binComp);

    // Results
    cout << "\n--- Results ---\n";

    if (seqIndex != -1)
        cout << "Sequential Search: Found (Comparisons = " << seqComp << ")\n";
    else
        cout << "Sequential Search: Not Found (Comparisons = " << seqComp << ")\n";

    if (binIndex != -1)
        cout << "Binary Search: Found (Comparisons = " << binComp << ")\n";
    else
        cout << "Binary Search: Not Found (Comparisons = " << binComp << ")\n";

    // Efficiency Comparison
    cout << "\n--- Efficiency ---\n";
    if (seqComp < binComp)
        cout << "Sequential Search is more efficient.\n";
    else if (binComp < seqComp)
        cout << "Binary Search is more efficient.\n";
    else
        cout << "Both algorithms have equal efficiency.\n";

    return 0;
}