#include <iostream>

std::string rps(std::string player1, std::string player2)
{
    if (player1 == player2 || player2 == player1) return "TIE";
    
    if (player1 == "rock" && player2 == "scissor")      return "Player 1 wins";
    if (player2 == "rock" && player1 == "scissor")      return "Player 2 wins";
    if (player1 == "rock" && player2 == "paper")        return "Player 2 wins";
    if (player2 == "rock" && player1 == "paper")        return "Player 1 wins";
    
    if (player1 == "paper" && player2 == "rock")        return "Player 1 wins";
    if (player2 == "paper" && player1 == "rock")        return "Player 2 wins";
    if (player1 == "paper" && player2 == "scissor")     return "Player 2 wins";
    if (player2 == "paper" && player1 == "scissor")     return "Player 1 wins";
    
    if (player1 == "scissor" && player2 == "paper")     return "Player 1 wins";
    if (player2 == "scissor" && player1 == "paper")     return "Player 2 wins";
    if (player1 == "scissor" && player2 == "rock")      return "Player 2 wins";
    if (player2 == "scissor" && player1 == "rock")      return "Player 1 wins";      
}