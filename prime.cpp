#include <iostream>
using namespace std;

bool prime(int n);

int main() {

  int n, i;
  bool flag = false;

  cout << "Enter a positive  integer: ";
  cin >> n;

  for(i = 2; i <= n/2; ++i) {
    if (prime(i)) {
      if (prime(n - i)) {
        cout << n << " = " << i << " + " << n-i << endl;
        flag = true;
      }
    }
  }

  if (!flag)
    cout << n << " can't be expressed as sum of two prime numbers."<<endl;

  return 0;
}

// checking if its prime number or not
bool prime(int n) {
  int i;
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }
  
  for(i = 2; i <= n/2; ++i) {
    if(n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
