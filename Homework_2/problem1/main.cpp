/*
Author: Alex Agudelo
Class: ECE 6122
Last date modified: 9/7/19
Description: 
*/

#include "ECE_Matrix.hpp"

int main()
{
    ECE_Matrix matrix = ECE_Matrix("data_Problem1.txt");
    std::cout << matrix << std::endl;

    return 0;
}
