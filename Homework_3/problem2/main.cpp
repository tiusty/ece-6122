/*
Author: Alex Agudelo
Class: ECE 6122
Last date modified: 9/10/2019
Description:
 Main file for problem 2 homework 2. Executes the program
*/

#include "grid.hpp"

/**
 * @\class
 * Main function that executes the program
 * @return Exit status
 */
int main(int argc, char *argv[])
{
    char filename[50];

    sprintf(filename, "%s", argv[1]);

    Grid grid = Grid(filename);

    grid.findMaxProductNeighbors();
    return 0;
}

