#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int left = 0;
    int maxLen = 0;
    unordered_set<char> window;

    for (int right = 0; right < s.size(); ++right)
    {
        while (window.find(s[right]) != window.end())
        {
            window.erase(s[left]);
            ++left;
        }
        window.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main()
{
    string s1 = "abcabcbb";
    string s2 = "bbbbb";
    string s3 = "pwwkew";
    string s4 = " ";
    string s5 = "dvdf";
    string s6 = "ckilbkd";
    string s7 = "tmmzuxt";

    cout << lengthOfLongestSubstring(s1) << endl; // 3
    cout << lengthOfLongestSubstring(s2) << endl; // 1
    cout << lengthOfLongestSubstring(s3) << endl; // 3
    cout << lengthOfLongestSubstring(s4) << endl; // 1
    cout << lengthOfLongestSubstring(s5) << endl; // 3
    cout << lengthOfLongestSubstring(s6) << endl; // 5
    cout << lengthOfLongestSubstring(s7) << endl; // 5


    return 0;
}
