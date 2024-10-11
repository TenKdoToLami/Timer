#include "errorOutput.h"


int printError(const std::string & errorMessage, const std::string & placeOfErrorMessage = "Undefined")
{
    std::cerr << placeOfErrorMessage << " : " << errorMessage << std::endl;

    return -1;
}