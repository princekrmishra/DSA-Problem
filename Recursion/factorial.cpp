#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string vowels(string s) {
    unordered_map<char, int> vowelCounts;
    vowelCounts['a'] = 0;
    vowelCounts['e'] = 0;
    vowelCounts['i'] = 0;
    vowelCounts['o'] = 0;
    vowelCounts['u'] = 0;

    // Count occurrences of each vowel
    for (char c : s) {
        if (vowelCounts.find(c) != vowelCounts.end()) {
            vowelCounts[c]++;
        }
    }

    // Check if the sum of vowel counts is even
    int totalVowelCount = 0;
    for (auto& pair : vowelCounts) {
        totalVowelCount += pair.second;
    }
    if (totalVowelCount % 2 != 0) {
        return "No";
    }

    // Check if there exists a split that satisfies the equality property
    int halfVowelCount = totalVowelCount / 2;
    int currentCount = 0;
    for (auto& pair : vowelCounts) {
        currentCount += pair.second;
        if (currentCount == halfVowelCount) {
            return "Yes";
        } else if (currentCount > halfVowelCount) {
            return "No";
        }
    }

    return "No";
}

int main() {
    int T;
    cin >> T;

    // Ignore newline character after reading T
    cin.ignore();

    for (int i = 0; i < T; ++i) {
        string s;
        getline(cin, s);
        cout << vowels(s) << endl;
    }

    return 0;
}