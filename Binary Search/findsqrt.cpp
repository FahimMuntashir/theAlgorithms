#include <iostream>

class Solution
{
public:
    float mySqrt(int x, int p)
    {

        int low = 0, high = x;
        float ans ;

        while (low <= high)
        {
            long long mid = (low + high) / 2;

            if (mid * mid == x)
                return mid;
            else if (mid * mid > x)
                high = mid - 1;
            else
            {
                ans = mid;
                low = mid + 1;
            }
        }

        // fractional part

        float inc = 0.1;
        for (int i = 0; i < p; i++)
        {
            while (ans * ans <= x)
            {

                ans += inc;
            }
            ans  = ans -inc;
            inc = inc / 10;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    std::cout << s.mySqrt(10, 0) << std::endl;
    std::cout << s.mySqrt(10, 3) << std::endl;
}

