#include <iostream>
#include "build/ProjectConfig.h"

int main(int argc, char* argv[])
{
    std::string version = "Version: ";
    if (argc > 1)
    {
        version = argv[1];
    }
    else 
    {
        version += std::to_string(Project_VERSION_MAJOR) + "."
                 + std::to_string(Project_VERSION_MINOR);
    }
    std::cout << version << std::endl;
    return 0;
}