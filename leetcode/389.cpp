// You are given two strings s and t.

// String t is generated by random shuffling string s and then add one more letter at a random position.

// Return the letter that was added to t.

// Example 1:

// Input: s = "abcd", t = "abcde"
// Output: "e"
// Explanation: 'e' is the letter that was added.
// Example 2:

// Input: s = "", t = "y"
// Output: "y"

// Solutions
class Solution {
public:
  char findTheDifference(string s, string t) {
    for (int i = 0; i < s.size(); i++)
      t[i + 1] += t[i] - s[i]; // Passing the diff: (t[i]-s[i]) to t[i+1]
    return t[t.size() -
             1]; // The diff will be carried over to the last element eventually
  }
};
