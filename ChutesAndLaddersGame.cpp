//
//  ChutesAndLaddersGame.cpp
//

#include <iostream>
#include <string>

#include "ChutesAndLaddersGame.hpp"
#include "GameBoard.hpp"
#include "Player.hpp"

using namespace std;


// TODO: implement the constructor with all your team members
// constructor with the default value of a minimum players
ChutesAndLaddersGame::ChutesAndLaddersGame(int nPlayers) : winner("no winner") {
   playerQueue = new ArrayQueue<Player>(nPlayers);
   player1 = new Player("Player 1");
   player2 = new Player("Player 2");
   playerQueue->enqueue(*player1);
   playerQueue->enqueue(*player2);

}

// TODO: implement the destructor
// destructor - dequeue players from the queue
ChutesAndLaddersGame::~ChutesAndLaddersGame() {
   while(!(playerQueue->empty()))
   {
     playerQueue->dequeue();
   }
   delete playerQueue;
   delete player1;
   delete player2;

}

// TO DO: implement this function properly
// reset the game - rebuild the list of players
//        (i.e., the list should be the same as in the constructor).
//        Place all players at the figurative square zero
void ChutesAndLaddersGame::resetGame() {
   while(!(playerQueue->empty()))
   {
      playerQueue->dequeue();
   }
   winner = "no winner";
   player1->setPostion(0);
   player2->setPostion(0);
   playerQueue->enqueue(*player1);
   playerQueue->enqueue(*player2);
}

// TO DO: implement this function properly
// Play the chutes and ladders until a player reaches the winning square 100
//    - Each player takes turn to roll the die and moves to the new square by invoking rollDieAndMove.
//         If the new square is outside of the board, the player stays put
//    - Player's new position is checked against the game board's checkChutesLadders
//    - checkChutesLadders returns a different square if player lands on a chute or a ladder
//    - Player's position is then set to the new position as indicated by checkChutesLadders
//          If player lands on a chute or a ladder, player slides down or climbs up
//    - If player lands on the winning square 100, game is over
//    - playGame returns after congratulating and printing the winner's name
void ChutesAndLaddersGame::playGame() {
      while(getWinner() == "no winner")
   {
      Player currentPlayer = playerQueue->front();
      currentPlayer.rollDieAndMove();
      int newLocation = currentPlayer.getPostion();
      newLocation = gameBoard.checkChutesLadders(newLocation);
      currentPlayer.setPostion(newLocation);
      if (currentPlayer.getPostion() == 100) winner = currentPlayer.getName();
      playerQueue->dequeue();
      playerQueue->enqueue(currentPlayer);
	}
   cout << getWinner() << " is the winner!" << endl;
   return;
   
}
