// Compute F(n) iteratively in O(n) time and O(1) extra space.
long long computeFibonacci(int n)
{
  if (n <= 0)
  {
    return 0;
  }

  long long previous = 0;
  long long current = 1;
  for (int i = 1; i < n; ++i)
  {
    const long long next = previous + current;
    previous = current;
    current = next;
  }
  return current;
}
