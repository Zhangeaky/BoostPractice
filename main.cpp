#include<iostream>
#include<boost/function.hpp>
// #include<boost/asio.hpp>
// #include<boost/date_time/posix_time/posix_time.hpp>
// #include<boost/thread.hpp>
//g++ main.cpp -o boost_test -lboost_system
using namespace std;
int f( int a, int b)
{
    return a+b;
}

int main()
{
    boost::function<int(int,int)> func;

    assert(!func);

    func = f;
    assert(func.contains(&f));

    if(func){
        cout<<func(10,20)<<endl;
    }



   
}