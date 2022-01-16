int iterativeFibonacci(int n)
{
  if(n < 1)
  {
    return 0;
  }
  if (n == 1 || n == 2)
  {
    return 1;
  }
  else
  {
    int first = 1;
    int second = 1;
    int third = 0;

    for(int i=0; i<n-2; i++)
    {
      third = first + second;
      first = second;
      second = third;
    }
    return second;
  }
}
