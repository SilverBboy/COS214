#include <iostream>
#include <vector>
#include <string>
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "Infantry.h"
#include "InfantryFactory.h"
#include "Game.h"

int main() {
    try{
        Game game;
        game.start();
        return 0;
    }
    catch(char const* message){
        std::cout<<message<<std::endl;
    }
    
}
