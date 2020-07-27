/*
 * =====================================================================================
 *
 *       Filename:  BasicFunctionTemplate.cpp
 *
 *    Description:  Basic function Template
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

template<typename T>
auto add(const T &lhs, const T &rhs) {
    return lhs + rhs;
}

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;  // display message

    std::cout << add(5,8) << '\n'; // print 13
    std::cout << add(1.2,1.5) << '\n'; // print 2.7
    // std::cout << add(5,1.1) << '\n'; // error why?

    return 0;  // indicate that program ended successfully
}  // end function main