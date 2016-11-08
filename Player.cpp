//
//  Player.cpp
//

#include "Player.hpp"

// TO DO: implement Player's assignment operator
Player& Player::operator=(const Player& p) {
      this->setName(p.playerName);
      this->setPostion(p.getPostion());
      this->die = p.die;
      return *this;

}

// return player's new position after player rolls die
// If the new position is outside of the board, player stays put
// If not, player moves to the new square = player's postion + die's face value
// TO DO: implement this function to move player to the new postion
//        after player rolls die. Position must be inside the board
int Player::rollDieAndMove() {
   this->die.roll();
   if ((this->getPostion() + this->die.getFaceValue()) <= 100) this->setPostion(this->getPostion() + this->die.getFaceValue());
   return this->getPostion();

}
