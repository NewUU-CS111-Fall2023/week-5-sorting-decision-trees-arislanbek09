/*
 * Author: Arislanbek Kalbaev
 * Date: November 16, 2023
 * Name: Arislanbek Kalbaev
 */

#include <iostream>
#include <vector>
using namespace std;

void rearrangeSoldiers(vector<int>& soldiers) {
    int n = soldiers.size();
    for (int i = 0; i < n - 1; i += 2) {
        swap(soldiers[i], soldiers[i + 1]);
    }
}

void displayRearrangedSoldiers(const vector<int>& soldiers) {
    cout << "Rearranged List of Soldiers:\n";
    for (int soldier : soldiers) {
        cout << soldier << ' ';
    }
    cout << '\n';
}
