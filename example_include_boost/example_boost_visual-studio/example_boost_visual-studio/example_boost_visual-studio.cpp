// example_boost_visual-studio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// #include "boost/array.hpp" 
#include <boost/array.hpp> 
#include <iostream> 

using namespace std;
int main()
{
    boost::array<int, 10> arr
        = { { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } };
    for (int i = 0; i < 10; i++) {
        cout << "Geek Rank is :" << arr[i] << "*"
            << "\n";
    }

    std::cin.get();
    return 0;
}

/*

4.1   Build From the Visual Studio IDE
https://www.boost.org/doc/libs/1_85_0/more/getting_started/windows.html

*/