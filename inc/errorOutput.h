#ifndef ERROR_OUTPUT
#define ERROR_OUTPUT


#include <iostream>
#include <string>


/**
 * Prints an error message to the standard error output stream.
 *
 * This function is intended to be used for logging error messages in a structured manner.
 * It takes two parameters: an error message and the place where the error occurred.
 *
 * @param errorMessage The error message to be printed.
 * @param placeOfErrorMessage The place where the error occurred. This could be a function name, file name, or any other relevant information.
 *
 * @return This function returns a -1 for ease of use.
 */
int printError(const std::string & errorMessage, const std::string & placeOfErrorMessage);




#endif /* ERROR_OUTPUT */