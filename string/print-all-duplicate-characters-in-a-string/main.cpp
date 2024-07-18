#include <iostream>
#include <unordered_map>
using namespace std;

// TC - O(n)
// SC - O(n)
void printDups(string s) {
    unordered_map<char, int> ump;
    for (char c : s)
        ump[c]++;

    for (auto it : ump) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    string s = "good morning";
    printDups(s);
    return 0;
}