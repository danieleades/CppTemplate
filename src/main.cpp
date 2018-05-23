#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    // version checking
    if (argc == 2 && !strcmp(argv[1], "--version"))
    {
        std::cout << PROJECT_NAME<<'\n';
        std::cout << "VERSION: " << VERSION << '\n';
        std::cout << "COMPILED ON " << __DATE__ << " @ " << __TIME__ << std::endl;
        return 0;
    }
}