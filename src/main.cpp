#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    // version checking
    #ifdef VERSION
    if (argc == 2 && !strcmp(argv[1], "--version"))
    {
        std::cout <<VERSION<< "\n";
        return 0;
    }
    #endif
}