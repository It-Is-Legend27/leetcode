/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 415.
 * @version 0.1
 * @date 2023-04-19
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <string>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string result;
        int carry = 0;
        reverse_iterator<string::iterator> i = num1.rbegin();
        reverse_iterator<std::string::iterator> j = num2.rbegin();
        while (i != num1.rend() || j != num2.rend() || carry)
        {
            int sum = 0;

            if (i != num1.rend())
            {
                sum += *i - '0';
                ++i;
            }
            if (j != num2.rend())
            {
                sum += *j - '0';
                ++j;
            }
            sum += carry;
            carry = sum / 10;
            result.append(to_string(sum % 10));
        }

        reverse(result.begin(), result.end());
        return result;
    }
};