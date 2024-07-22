#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " \n" );

    std::cin.get();
}

/*
=== For Linux ===

https://www.baeldung.com/linux/boost-install-on-ubuntu

g++ main_boost_example.cpp -o a.out -I/opt/boost/include



=== For Windows ====

https://www.boost.org/doc/libs/1_85_0/more/getting_started/windows.html

Нужно зайти в директорию куда бубуд генерироваться файлы exe obj
cl /EHsc /I path\to\boost_1_82_0 path\to\example.cpp
cl /EHsc /I C:\boost\boost_1_82_0\ C:\boost_example\main_boost_example.cpp
cl /EHsc /I C:\boost\boost_1_82_0\ "C:\boost example\main_boost_example.cpp"
cl /EHsc /I C:\boost\boost_1_82_0\ C:\PRO28_v2\TilirMFTI\C_practice\c-graduate\boost_example\main_boost_example.cpp

mkdir build_windows && cd build_windows
cl /EHsc /I C:\boost\boost_1_82_0\ ..\main_boost_example.cpp

Cygwin
https://fischerlaender.de/en/using-boost-c-libraries-with-gcc-g-under-windows

*/