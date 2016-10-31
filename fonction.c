int carre(int x)
{
  x = x * x;
  return x;
}

int cube(int x)
{
  x = carre(x) * x;
  return x;
}
