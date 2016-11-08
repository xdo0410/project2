//
//  GameBoard.cpp
//

#include "GameBoard.hpp"

// Build the gameboard
// If the landing square is a chute, set the position to the corresponding lower square
// I.e., player slides down to the lower square
// If the landing square is a ladder, set the position to the corresponding higher square
// Player climbs up to the higher square
// Otherwise, player stays put at the landing square
// TO DO: implement this method
void GameBoard::buildBoard() {
      for(int i = 0; i < BOARD_SIZE; i++)
   {
     switch (i) 
      {
            case GameBoard::ONE: // Ladder
                (*Spaces)[i] = 38;
                break;
            case GameBoard::FOUR: // Ladder
                (*Spaces)[i] = 14;
                break;
            case GameBoard::NINE: // Ladder
                (*Spaces)[i] = 31;
                break;
            case GameBoard::SIXTEEN: // Chute
                (*Spaces)[i] = 6;
                break;
            case GameBoard::TWENTY_ONE: // Ladder
                (*Spaces)[i] = 42;
                break;
            case GameBoard::TWENTY_EIGHT: // Ladder
                (*Spaces)[i] = 84;
                break;
            case GameBoard::THIRTY_SIX: // Ladder
                (*Spaces)[i] = 44;
                break;
            case GameBoard::FORTY_SEVEN: // Chute
                (*Spaces)[i] = 26;
                break;
            case GameBoard::FORTY_NINE: // Chute
                (*Spaces)[i] = 11;
                break;
            case GameBoard::FIFTY_ONE: // Ladder
                (*Spaces)[i] = 67;
                break;
            case GameBoard::SIXTY_TWO: // Chute
                (*Spaces)[i] = 19;
                break;
            case GameBoard::FIFTY_SIX: // Chute
                (*Spaces)[i] = 53;
                break;
            case GameBoard::SIXTY_FOUR: // Chute
                (*Spaces)[i] = 60;
                break;
            case GameBoard::SEVENTY_ONE: // Ladder
                (*Spaces)[i] = 91;
                break;
            case GameBoard::EIGHTY: // Ladder
                (*Spaces)[i] = 100;
                break;
            case GameBoard::EIGHTY_SEVEN: // Chute
                (*Spaces)[i] = 24;
                break;
            case GameBoard::NINETY_THREE: // Chute
                (*Spaces)[i] = 73;
                break;
            case GameBoard::NINETY_FIVE: // Chute
                (*Spaces)[i] = 75;
                break;
            case GameBoard::NINETY_EIGHT: // Chute
                (*Spaces)[i] = 78;
                break;
            default:
                (*Spaces)[i] = i;
                break;
        }
    }

}
