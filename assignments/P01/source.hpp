/*
 
  ________  ________    _____                        
 |\   __  \|\   __  \  / __  \                       
 \ \  \|\  \ \  \|\  \|\/_|\  \                      
  \ \   ____\ \  \\\  \|/ \ \  \                     
   \ \  \___|\ \  \\\  \   \ \  \                    
    \ \__\    \ \_______\   \ \__\                   
     \|__|     \|_______|    \|__|                   
                                                     
                                                     
                                                     
   _______   _____  ___   ___  ________              
  /  ___  \ / __  \|\  \ |\  \|\_____  \             
 /__/|_/  /|\/_|\  \ \  \\_\  \|____|\ /_            
 |__|//  / ||/ \ \  \ \______  \    \|\  \           
     /  /_/__   \ \  \|_____|\  \  __\_\  \          
    |\________\  \ \__\     \ \__\|\_______\         
     \|_______|   \|__|      \|__|\|_______|         
                                                     
                                                     
                                                     
  ________  ________  ___      ___ ___  ________     
 |\   ___ \|\   __  \|\  \    /  /|\  \|\   ___ \    
 \ \  \_|\ \ \  \|\  \ \  \  /  / | \  \ \  \_|\ \   
  \ \  \ \\ \ \   __  \ \  \/  / / \ \  \ \  \ \\ \  
   \ \  \_\\ \ \  \ \  \ \    / /   \ \  \ \  \_\\ \ 
    \ \_______\ \__\ \__\ \__/ /     \ \__\ \_______\
     \|_______|\|__|\|__|\|__|/       \|__|\|_______|
                                                     
                                                     
                                                     
 
*/

#include "termio.h"
#include "Playing_Card.hpp" // including Card Classes
#include<iostream>
#include <string>
#include <vector>

class WarGame {
private:
int numPlayers;

Deck XtraDeck;
protected:

public:
void declareWar();
void declareWinner();
int War();


};