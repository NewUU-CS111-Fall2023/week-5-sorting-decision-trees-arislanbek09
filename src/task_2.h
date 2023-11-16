/*
 * Author: Arislanbek Kalbaev
 * Date: November 16, 2023
 * Name: Arislanbek Kalbaev
 */

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; ++i) {

        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }

    swap(denominations[i], denominations[minIndex]);
    }
}

void displaySortedDenominations(const std::vector<int>& denominations) {
    cout << "Sorted List of Denominations:\n";
    for (int denomination : denominations) {
        cout << denomination << ' ';
    }
    cout << '\n';
}
