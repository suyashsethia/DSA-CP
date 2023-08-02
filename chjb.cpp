#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
int findSmallestString(const string& inputString) {
    unordered_set<char> uniqueChars;


    for (char ch : inputString) {
        if (uniqueChars.find(ch) == uniqueChars.end()) {
            uniqueChars.insert(ch);
        }
    }

    return uniqueChars.size();
}

int main() {
    string inputString;
    cout << "Enter the input string: ";
    getline(cin, inputString);

    int output = findSmallestString(inputString);
    cout << output << endl;

    return 0;
}
