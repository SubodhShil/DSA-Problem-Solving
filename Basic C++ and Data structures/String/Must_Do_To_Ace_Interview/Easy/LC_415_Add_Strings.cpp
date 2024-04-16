#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string result = "";
        int i = num1.size() - 1, j = num2.size() - 1;
        int carry = 0;

        for (; i >= 0 || j >= 0 || carry;)
        {
            int sum = 0;
            if (i >= 0)
                sum += num1[i--] - '0';
            if (j >= 0)
                sum += num2[j--] - '0';

            sum += carry;
            carry = sum / 10;

            result = to_string(sum % 10) + result;
        }

        return result;
    }
};

class Solution1
{
public:
    string addStrings(string num1, string num2)
    {
        string result = "";
        int i = num1.size() - 1, j = num2.size() - 1;
        int carry = 0;

        for (; i >= 0 && j >= 0; --i, --j)
        {
            int sum = (num1[i] - '0') + (num2[j] - '0');
            if (carry)
            {
                sum += 1;
                carry = 0;
            }

            string sumStr = to_string(sum);
            if (sumStr.size() == 2)
            {
                result = sumStr[1] + result;
                carry = 1;
            }
            else
                result = sumStr[0] + result;
        }

        for (; i >= 0; --i)
        {
            int sum = (num1[i] - '0');
            if (carry)
            {
                sum += 1;
                carry = 0;
            }

            string sumStr = to_string(sum);
            if (sumStr.size() == 2)
            {
                result = sumStr[1] + result;
                carry = 1;
            }
            else
                result = sumStr[0] + result;
        }

        for (; j >= 0; --j)
        {
            int sum = (num2[j] - '0');
            if (carry)
            {
                sum += 1;
                carry = 0;
            }

            string sumStr = to_string(sum);
            if (sumStr.size() == 2)
            {
                result = sumStr[1] + result;
                carry = 1;
            }
            else
                result = sumStr[0] + result;
        }

        if (i < 0 && j < 0 && carry)
        {
            result = "1" + result;
            return result;
        }

        return result;
    }
};

int main()
{

    return 0;
}