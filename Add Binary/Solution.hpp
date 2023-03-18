#pragma once
#include <string>
using namespace std;


// TODO: Does not work for numbers larger than unsigned long long
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result;
        bool carry = 0;
        auto it1 = a.rbegin();
        auto it2 = b.rbegin();

        while(it1 != a.rend() || it2 != b.rend() || carry)
        {
            int sum = 0;

            if(it1 != a.rend())
            {
                sum += *it1 - '0';
                ++it1;
            }
            if (it2 != b.rend())
            {
                sum += *it2 - '0';
                ++it2;
            }
            sum+= carry;
            carry = sum / 2;
            result.insert(0, to_string(sum % 2));
        }
        return result;
    }
};