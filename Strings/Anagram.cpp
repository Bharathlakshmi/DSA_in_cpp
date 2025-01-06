// Function to check if two strings are anagrams

#include <iostream>
#include <cstring>
using namespace std;


bool areAnagrams(string str1, string str2) {
    // If lengths are not equal, they cannot be anagrams
    if (str1.length() != str2.length())
        return false;

    // Frequency array for 256 ASCII characters initialized to 0
    int freq[256] = {0};

    // Increment frequency for characters in str1
    // Decrement frequency for characters in str2
    for (int i = 0; i < str1.length(); i++) {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

int main() {
    string str1, str2;

    // Input two strings
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Check if they are anagrams
    if (areAnagrams(str1, str2))
        cout << "The strings are anagrams of each other." << endl;
    else
        cout << "The strings are NOT anagrams of each other." << endl;

    return 0;
}
