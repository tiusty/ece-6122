/*
Author: Alex Agudelo
Class: ECE 6122
Last date modified: 10/29/19
Description: This main function tests the code without using mpi
*/
#include <iostream>

#include "world.hpp"

int main()
{
    // Generate the world
    World world;

    // Loop for the mount of time we are allowed
    for(int i=0; i< world.duration; i++)
    {
        for(auto &ship : world.fighters)
        {
            world.handleYellowJacket(ship, i);
        }

        world.evolveSystem(world.buzzy);
        for(auto &ship : world.fighters)
        {
            world.evolveSystem(ship);
        }

        for(auto &ship : world.fighters)
        {
            world.checkConditions(ship);
        }
    }

    for(auto &ship :world.fighters)
    {
        std::cout << "Fighter: " << ship.id << ", status: " << world.getStatus(ship) << std::endl;
    }

    return 1;
}

