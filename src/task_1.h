/*
 * Author: Arislanbek Kalbaev
 * Date: November 16, 2023
 * Name: Arislanbek Kalbaev
 */

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(std::vector<std::string>& books) {
    int n = books.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j] > books[j + 1]) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

void displaySortedBooks(const vector<string>& books) {
    cout << "Sorted List of Books:\n";
    for (const auto & title : books) {
        cout << title << '\n';
    }
}
