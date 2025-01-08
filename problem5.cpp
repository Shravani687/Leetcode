class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        int windfreq[26] = {0};
        int windsize = s1.length();

        // Populate the frequency array for s1
        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        // Populate the frequency array for the first window in s2
        for (int i = 0; i < s2.length() && i < windsize; i++) {
            windfreq[s2[i] - 'a']++;
        }

        // Check the first window
        if (isFreqSame(freq, windfreq)) {
            return true;
        }

        // Slide the window across s2
        for (int i = windsize; i < s2.length(); i++) {
            // Add the current character to the window
            windfreq[s2[i] - 'a']++;
            // Remove the character that's no longer in the window
            windfreq[s2[i - windsize] - 'a']--;

            // Check if the current window matches the frequency of s1
            if (isFreqSame(freq, windfreq)) {
                return true;
            }
        }

        return false;
    }
};
