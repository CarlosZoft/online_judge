#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n)
{
  int cont = 0;
  int number = n;

  while (n >= 10)
  {
    int pont = n % 10;
    if (pont != 0 && number % pont == 0)
      cont++;
    n /= 10;
  }
  if (number % n == 0)
    cont++;
  return cont;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int t;
  cin >> t;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int t_itr = 0; t_itr < t; t_itr++)
  {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = findDigits(n);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}
