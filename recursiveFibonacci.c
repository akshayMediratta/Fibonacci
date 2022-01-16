int recursiveFibonacci(int n)
{
  if(n < 1)
  {
    return 0;
  }

  if(n == 1 || n == 2)
  {
    return 1;
  }

  else
  {
    return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
  }
}
