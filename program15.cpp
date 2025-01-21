class Solution {
public:
   int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet; // To store unique characters
    int maxLength = 0;          // To track the maximum length
    int start = 0;              // Sliding window start pointer

    for (int end = 0; end < s.length(); end++) {
        // If character at 'end' is already in the set, shrink the window
        while (charSet.find(s[end]) != charSet.end()) {
            charSet.erase(s[start]); // Remove the character at 'start'
            start++;                 // Move the start pointer forward
        }

        charSet.insert(s[end]);        // Add the current character to the set
        maxLength = max(maxLength, end - start + 1); // Update maxLength
    }

    return maxLength;
}
};