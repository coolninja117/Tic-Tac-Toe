#include <iostream>
#include <vector>
#include <string>

void greeting(){
  std::cout << "\n===========\n";
  std::cout << "Tic Tac Toe\n";
  std::cout << "===========\n\n";
  std::cout << "Instructions: Each player will have to type the corresponding\n";
  std::cout << "coordinates to play their turn.\n";
  std::cout << "Example: just type 'A1' to play your turn. Typing A1 will\n";
  std::cout << "place either X or O in that space depending on your team.\n";
  std::cout << "Player One places X's down, and Player Two places O's.\n\n";
  }

void gameOver(std::string winner){
  std::cout << winner << " has won the game! Please play again.\n\n";
  }

void tttBoard(std::vector<char> ttt) {
  std::cout << "  1   2   3 \n";
  std::cout << "A " << ttt[0] << " | " << ttt[1] << " | " << ttt[2] << " \n";
  std::cout << " -----------\n";
  std::cout << "B " << ttt[3] << " | " << ttt[4] << " | " << ttt[5] << " \n";
  std::cout << " -----------\n";
  std::cout << "C " << ttt[6] << " | " << ttt[7] << " | " << ttt[8] << " \n\n";
  }

// void placementPlayerOne(std::string playerOne, std::vector<char> ttt, int i){
//   if (playerOne == "A1" && ttt[0] == ' ') {
//       ttt[0] = 'X';
//       std::cout << ttt[0];
//       // i++;
//       // std::cout << i << "\n\n";
//     } else if (playerOne == "A2" && ttt[1] == ' ') {
//       ttt[1] = 'X';
//       i++;
//     } else if (playerOne == "A3" && ttt[2] == ' ') {
//       ttt[2] = 'X';
//       i++;
//     } else if (playerOne == "B1" && ttt[3] == ' ') {
//       ttt[3] = 'X';
//       i++;
//     } else if (playerOne == "B2" && ttt[4] == ' ') {
//       ttt[4] = 'X';
//       i++;
//     } else if (playerOne == "B3" && ttt[5] == ' ') {
//       ttt[5] = 'X';
//       i++;
//     } else if (playerOne == "C1" && ttt[6] == ' ') {
//       ttt[6] = 'X';
//       i++;
//     } else if (playerOne == "C2" && ttt[7] == ' ') {
//       ttt[7] = 'X';
//       i++;
//     } else if (playerOne == "C3" && ttt[8] == ' ') {
//       ttt[8] = 'X';
//       i++;
//     } else {
//       std::cout << "The selection you have made is not valid, please try again.\n";
//       std::cout << "Player one, make your selection: ";
//       std::cin >> playerOne;
//       placementPlayerOne(playerOne, ttt, i);
//     }}

// void placementPlayerTwo(std::string playerTwo, std::vector<char> ttt, int i){
//   if (playerTwo == "A1" && ttt[0] == ' ') {
//       ttt[0] = 'O';
//       i++;
//     } else if (playerTwo == "A2" && ttt[1] == ' ') {
//       ttt[1] = 'O';
//       i++;
//     } else if (playerTwo == "A3" && ttt[2] == ' ') {
//       ttt[2] = 'O';
//       i++;
//     } else if (playerTwo == "B1" && ttt[3] == ' ') {
//       ttt[3] = 'O';
//       i++;
//     } else if (playerTwo == "B2" && ttt[4] == ' ') {
//       ttt[4] = 'O';
//       i++;
//     } else if (playerTwo == "B3" && ttt[5] == ' ') {
//       ttt[5] = 'O';
//       i++;
//     } else if (playerTwo == "C1" && ttt[6] == ' ') {
//       ttt[6] = 'O';
//       i++;
//     } else if (playerTwo == "C2" && ttt[7] == ' ') {
//       ttt[7] = 'O';
//       i++;
//     } else if (playerTwo == "C3" && ttt[8] == ' ') {
//       ttt[8] = 'O';
//       i++;
//     } else {
//       std::cout << "The selection you have made is not valid, please try again.\n";
//       std::cout << "Player two, make your selection: ";
//       std::cin >> playerTwo;
//       placementPlayerTwo(playerTwo, ttt, i);
//     }}


// void winCheck(std::vector<char> ttt, std::string winner) {
//   if (ttt[0] == ttt[1] && ttt[1] == ttt[2] && ttt[0] != ' ') {
//     if (ttt[0] == 'X') {
//       winner = "Player One";
//     } else {
//       winner = "Player Two";
//     }
//   } else if (ttt[3] == ttt[4] && ttt[4] == ttt[5] && ttt[3] != ' ') {
//    if (ttt[3] == 'X') {
//       winner = "Player One";
//     } else {
//       winner = "Player Two";
//     }
//   } else if (ttt[6] == ttt[7] && ttt[7] == ttt[8] && ttt[6] != ' ') {
//    if (ttt[6] == 'X') {
//       winner = "Player One";
//     } else {
//       winner = "Player Two";
//     }
//   } else if (ttt[0] == ttt[3] && ttt[3] == ttt[6] && ttt[0] != ' ') {
//    if (ttt[0] == 'X') {
//       winner = "Player One";
//     } else {
//       winner = "Player Two";
//     }
//   } else if (ttt[1] == ttt[4] && ttt[4] == ttt[7] && ttt[1] != ' ') {
//    if (ttt[1] == 'X') {
//       winner = "Player One";
//     } else {
//       winner = "Player Two";
//     }
//   } else if (ttt[2] == ttt[5] && ttt[5] == ttt[8] && ttt[2] != ' ') {
//    if (ttt[2] == 'X') {
//       winner = "Player One";
//     } else {
//       winner = "Player Two";
//     }
//   } else if (ttt[0] == ttt[4] && ttt[4] == ttt[8] && ttt[0] != ' ') {
//    if (ttt[0] == 'X') {
//       winner = "Player One";
//     } else {
//       winner = "Player Two";
//     }
//   } else if (ttt[6] == ttt[4] && ttt[4] == ttt[2] && ttt[6] != ' '){
//      if (ttt[6] == 'X') {
//       winner = "Player One";
//     } else {
//       winner = "Player Two";
//     }
//   }}