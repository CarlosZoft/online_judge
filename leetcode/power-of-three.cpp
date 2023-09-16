class Solution
{
public:
  bool isPowerOfThree(int n)
  {
    long long int total = 3;

    if (n == 1 || n == total)
      return true;
    if (n < total)
      return false;

    while (total < n)
      total *= 3;

    return total == n;
  }
};