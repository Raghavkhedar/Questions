// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 
//  solutions?
class Solution {
public:
    int reverse(int x) {
        int ans = 0; // Variable to store the reversed number
        while (x != 0) { // Continue the loop until all digits of x have been processed
            int digit = x % 10; // Extract the last digit of x

            // Check for overflow or underflow conditions
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0; // Return 0 if the reversed number exceeds the integer range
            }
            
            ans = (ans * 10) + digit; // Update the reversed number by adding the current digit
            x = x / 10; // Remove the last digit from x
        }
        
        return ans; // Return the reversed number
    }
};