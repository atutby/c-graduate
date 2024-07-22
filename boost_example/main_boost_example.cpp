#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace boost::multiprecision;
using namespace std;

int main()
{
  long long num1 = 1523844560192817464;
  long long num2= 598274671729184766;
  int128_t result = (int128_t) num1 * num2;
  cout << "The product of the two integers is:" << "\n" << result << '\n';
  return 0;
}

/*
https://www.baeldung.com/linux/boost-install-on-ubuntu

g++ main_boost_example.cpp -o a.out -I/opt/boost/include

*/