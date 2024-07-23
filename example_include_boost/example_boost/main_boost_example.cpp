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
=== For Linux ===

https://www.baeldung.com/linux/boost-install-on-ubuntu

g++ main_example_boost.cpp -o a.out -I/opt/boost/include



=== For Windows ====

https://www.boost.org/doc/libs/1_85_0/more/getting_started/windows.html

Нужно зайти в директорию куда бубуд генерироваться файлы exe obj
cl /EHsc /I path\to\boost_1_82_0 path\to\example.cpp
cl /EHsc /I C:\boost\boost_1_82_0\ C:\example_boost\main_example_boost.cpp
cl /EHsc /I C:\boost\boost_1_82_0\ "C:\boost example\main_example_boost.cpp"
cl /EHsc /I C:\boost\boost_1_82_0\ C:\PRO28_v2\TilirMFTI\C_practice\c-graduate\example_boost\main_example_boost.cpp

mkdir build_windows && cd build_windows && \
cl /EHsc /I C:\boost\boost_1_82_0\ ..\main_example_boost.cpp && \
cd ..

Cygwin
https://fischerlaender.de/en/using-boost-c-libraries-with-gcc-g-under-windows



=== For Windows v2 =======

g++ -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I C:\boost\boost_1_82_0\  ../source.cpp
/c/boost/boost_1_82_0_unix/boost_1_82_0
g++ -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I /c/boost/boost_1_82_0_unix/boost_1_82_0  ../source.cpp
g++ -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I /c/boost/boost_1_82_0  ../source.cpp
g++ -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I c:\boost\boost_1_82_0  ..\source.cpp

https://cplusplus.com/forum/beginner/281662/
So, finally, I get something like this:
C:\raylib\w64devkit\bin\g++.exe -pedantic-errors -Wall -Wextra -fdiagnostics-color=always -g -I E:/Documents/Downloads/imgui-master -I E:/Documents/Downloads/imgui-master/backends E:\Documents\Downloads\imgui-master\examples\example_win32_directx11/\*.cpp -o E:\Documents\Downloads\imgui-master\examples\example_win32_directx11\main.exe


c:/PRO28_v2\VSCode1_settings_for_C-\VSCode1\buildw


=== Fow Visual Studio ===
https://www.boost.org/doc/libs/1_85_0/more/getting_started/windows.html
In Configuration Properties > C/C++ > General > Additional Include Directories, enter the path to the Boost root directory, for example
C:\Program Files\boost\boost_1_82_0
In Configuration Properties > C/C++ > Precompiled Headers, change Use Precompiled Header (/Yu) to Not Using Precompiled Headers.

*/