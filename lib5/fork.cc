#include <iostream>
#include <unistd.h>


int main()
{
    auto pid = fork();
    if (pid == 0)
    {
        std::cout << "in child process" << std::endl;
    }
std::cout << "Hello world"<<std::endl;

return 0;
}