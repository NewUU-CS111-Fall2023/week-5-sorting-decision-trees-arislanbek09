/*
 * Author: Arislanbek Kalbaev
 * Date: November 16, 2023
 * Name: Arislanbek Kalbaev
 */

#include <iostream>
#include <vector>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

using namespace std;

int main() {
    cout << "Task 1" << endl;

    vector<string> books = {"The Catcher in the Rye", "To Kill a Mockingbird", "1984", "Pride and Prejudice", "The Great Gatsby"};

    cout << "Unsorted List of Books:\n";
    for (const auto& title : books) {
        cout << title << '\n';
    }

    bubbleSort(books);
    displaySortedBooks(books);





    cout << "Task 2" << endl;

    vector <int> denominations = {50, 10, 20, 5, 100, 1, 500};

    cout << "Unsorted List of Denominations:\n";
    for (int denomination : denominations) {
        cout << denomination << ' ';
    }
    cout << '\n';

    selectionSort(denominations);

    displaySortedDenominations(denominations);





    cout << "Task 3" << endl;

    vector<int> soldiers = {1, 2, 3, 4, 5, 6, 7};

    cout << "Original List of Soldiers:\n";
    for (int soldier : soldiers) {
        cout << soldier << ' ';
    }
    cout << '\n';

    rearrangeSoldiers(soldiers);

    displayRearrangedSoldiers(soldiers);





    cout << "Task 4" << endl;

    int arr[] = {4, 2, 8, 1, 6, 3, 9};

    int result = countElementsWithSmallerNeighbors(arr, sizeof(arr) / sizeof(arr[0]));

    cout << "Count of elements where both neighboring elements are smaller: " << result << std::endl;





    cout << "Task 5" << endl;

    vector<vector<char>> symbolMatrix = {
            {'b', 'y', 'w'},
            {'y', 'b', 'w'},
            {'w', 'w', 'b'}
    };

    displayColorMatrix(symbolMatrix);

    return 0;
}
