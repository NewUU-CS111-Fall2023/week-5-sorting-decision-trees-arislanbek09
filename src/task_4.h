/*
 * Author: Arislanbek Kalbaev
 * Date: November 16, 2023
 * Name: Arislanbek Kalbaev
 */

#include <iostream>
using namespace std;

int countElementsWithSmallerNeighbors(const int arr[], int size) {
    int count = 0;


    for (int i = 1; i < size - 1; ++i) {

        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
            ++count;
        }
    }

    return count;
}
