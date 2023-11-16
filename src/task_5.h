/*
 * Author: Arislanbek Kalbaev
 * Date: November 16, 2023
 * Name: Arislanbek Kalbaev
 */

#include <iostream>
#include <vector>
#include <map>
using namespace std;

void displayColorMatrix(const std::vector<std::vector<char>>& symbolMatrix) {

    map<char, std::string> colorMap = {
        {'b', "Blue"},
        {'y', "Yellow"},
        {'w', "White"}
    };

    for (const auto& row : symbolMatrix) {
        for (char symbol : row) {
            cout << colorMap[symbol] << ' ';
        }
    cout << '\n';
    }

}
