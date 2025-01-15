class Solution {
public:
    int reverse(int x) {
         long reversed = 0; // Use long to handle overflow temporarily
        while (x != 0) {
            reversed = reversed * 10 + x % 10; // Add the last digit of x to reversed
            x /= 10; // Remove the last digit from x
        }
        // Check if reversed fits in a 32-bit integer
        if (reversed < INT_MIN || reversed > INT_MAX) {
            return 0;
        }
        return (int)reversed;
    }
};