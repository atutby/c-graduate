#include <boost/array.hpp> 
// #include "boost/array.hpp" 
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
g++ -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I C:\boost\boost_1_82_0\  ../source.cpp
/c/boost/boost_1_82_0_unix/boost_1_82_0
g++ -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I /c/boost/boost_1_82_0_unix/boost_1_82_0  ../source.cpp
g++ -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I /c/boost/boost_1_82_0  ../source.cpp
g++ -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I c:\boost\boost_1_82_0  ..\source.cpp

https://cplusplus.com/forum/beginner/281662/
So, finally, I get something like this:
C:\raylib\w64devkit\bin\g++.exe -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I E:/Documents/Downloads/imgui-master -I E:/Documents/Downloads/imgui-master/backends E:\Documents\Downloads\imgui-master\examples\example_win32_directx11/\*.cpp -o E:\Documents\Downloads\imgui-master\examples\example_win32_directx11\main.exe


c:/PRO28_v2\VSCode1_settings_for_C-\VSCode1\buildw


*/



// #include <iostream>
// #include <cstdio>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     // изменить кодировку консоли для русского языка
// #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
//     system("chcp 65001");
// #endif

//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!", "ляляжужу"};
    
//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl;

// #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
//     system("pause");
// #endif
// }