#include <iostream>
#include <vector>
#include <string>
#include "ttt.hpp"
#include "ttt_functions.cpp"

int main() {
std::string winner = "Nobody";
int i = 0;
std::string playerOne;
std::string playerTwo;
greeting();
std::vector<char> ttt;
ttt.push_back(' '); ttt.push_back(' '); ttt.push_back(' ');
ttt.push_back(' '); ttt.push_back(' '); ttt.push_back(' ');
ttt.push_back(' '); ttt.push_back(' '); ttt.push_back(' ');
tttBoard(ttt);

while (i != 9) {
  std::cout << "Player one, please make your selection: ";
  std::cin >> playerOne;
  if (playerOne == "A1" && ttt[0] == ' ') {
      ttt[0] = 'X';
      i++;
    } else if (playerOne == "A2" && ttt[1] == ' ') {
      ttt[1] = 'X';
      i++;
    } else if (playerOne == "A3" && ttt[2] == ' ') {
      ttt[2] = 'X';
      i++;
    } else if (playerOne == "B1" && ttt[3] == ' ') {
      ttt[3] = 'X';
      i++;
    } else if (playerOne == "B2" && ttt[4] == ' ') {
      ttt[4] = 'X';
      i++;
    } else if (playerOne == "B3" && ttt[5] == ' ') {
      ttt[5] = 'X';
      i++;
    } else if (playerOne == "C1" && ttt[6] == ' ') {
      ttt[6] = 'X';
      i++;
    } else if (playerOne == "C2" && ttt[7] == ' ') {
      ttt[7] = 'X';
      i++;
    } else if (playerOne == "C3" && ttt[8] == ' ') {
      ttt[8] = 'X';
      i++;
    } else {
      std::cout << "The selection you have made is not valid, You forfeit your turn.\n";
      }
  std::cout << i << "\n\n";
  tttBoard(ttt);
  if (ttt[0] == ttt[1] && ttt[1] == ttt[2] && ttt[0] != ' ') {
    if (ttt[0] == 'X') {
      winner = "Player One";
      } else {
      winner = "Player Two";
      }
    } else if (ttt[3] == ttt[4] && ttt[4] == ttt[5] && ttt[3] != ' ') {
   if (ttt[3] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
      }
    } else if (ttt[6] == ttt[7] && ttt[7] == ttt[8] && ttt[6] != ' ') {
   if (ttt[6] == 'X') {
      winner = "Player One";
      } else {
      winner = "Player Two";
      }
    } else if (ttt[0] == ttt[3] && ttt[3] == ttt[6] && ttt[0] != ' ') {
   if (ttt[0] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
      }
    } else if (ttt[1] == ttt[4] && ttt[4] == ttt[7] && ttt[1] != ' ') {
   if (ttt[1] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
      }
    } else if (ttt[2] == ttt[5] && ttt[5] == ttt[8] && ttt[2] != ' ') {
   if (ttt[2] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
      }
    } else if (ttt[0] == ttt[4] && ttt[4] == ttt[8] && ttt[0] != ' ') {
   if (ttt[0] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
      }
    } else if (ttt[6] == ttt[4] && ttt[4] == ttt[2] && ttt[6] != ' '){
     if (ttt[6] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
      }
    }
  if (winner != "Nobody") {
    gameOver(winner);
    return 0;
  }
  std::cout << "Player two, please make your selection: ";
  std::cin >> playerTwo;
  if (playerTwo == "A1" && ttt[0] == ' ') {
      ttt[0] = 'O';
      i++;
    } else if (playerTwo == "A2" && ttt[1] == ' ') {
      ttt[1] = 'O';
      i++;
    } else if (playerTwo == "A3" && ttt[2] == ' ') {
      ttt[2] = 'O';
      i++;
    } else if (playerTwo == "B1" && ttt[3] == ' ') {
      ttt[3] = 'O';
      i++;
    } else if (playerTwo == "B2" && ttt[4] == ' ') {
      ttt[4] = 'O';
      i++;
    } else if (playerTwo == "B3" && ttt[5] == ' ') {
      ttt[5] = 'O';
      i++;
    } else if (playerTwo == "C1" && ttt[6] == ' ') {
      ttt[6] = 'O';
      i++;
    } else if (playerTwo == "C2" && ttt[7] == ' ') {
      ttt[7] = 'O';
      i++;
    } else if (playerTwo == "C3" && ttt[8] == ' ') {
      ttt[8] = 'O';
      i++;
    } else {
      std::cout << "The selection you have made is not valid, you forfeit your turn.\n";
    }
  std::cout << i << "\n\n";
  tttBoard(ttt);
  if (ttt[0] == ttt[1] && ttt[1] == ttt[2] && ttt[0] != ' ') {
    if (ttt[0] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
    }
    } else if (ttt[3] == ttt[4] && ttt[4] == ttt[5] && ttt[3] != ' ') {
   if (ttt[3] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
    }
    } else if (ttt[6] == ttt[7] && ttt[7] == ttt[8] && ttt[6] != ' ') {
   if (ttt[6] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
    }
    } else if (ttt[0] == ttt[3] && ttt[3] == ttt[6] && ttt[0] != ' ') {
   if (ttt[0] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
    }
    } else if (ttt[1] == ttt[4] && ttt[4] == ttt[7] && ttt[1] != ' ') {
   if (ttt[1] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
    }
    } else if (ttt[2] == ttt[5] && ttt[5] == ttt[8] && ttt[2] != ' ') {
   if (ttt[2] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
    }
    } else if (ttt[0] == ttt[4] && ttt[4] == ttt[8] && ttt[0] != ' ') {
   if (ttt[0] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
    }
    } else if (ttt[6] == ttt[4] && ttt[4] == ttt[2] && ttt[6] != ' '){
     if (ttt[6] == 'X') {
      winner = "Player One";
    } else {
      winner = "Player Two";
    }
    }
  if (winner != "Nobody") {
    gameOver(winner);
    return 0;
    }
  }
  gameOver(winner);
}