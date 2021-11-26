/*
Create a function which simulates the game "rock, paper, scissors". The function takes the input of both players (rock, paper or scissors), first parameter from first player, second from second player. The function returns the result as such:
"Player 1 wins\n"
"Player 2 wins\n"
"TIE" (if both inputs are the same)
The rules of rock, paper, scissors, if not known:
Both players have to say either "rock", "paper" or "scissors" at the same time.
Rock beats scissors, paper beats rock, scissors beat paper.
Examples
rps("rock", "paper") ➞ "Player 2 wins"
rps("paper", "rock") ➞ "Player 1 wins"
rps("paper", "scissors") ➞ "Player 2 wins"
rps("scissors", "scissors") ➞ "TIE"
rps("scissors", "paper") ➞ "Player 1 wins"
*/
#include <iostream>	
		
using namespace std;

string rps(string s1, string s2) {
	if (s1 == "rock" && s2 == "paper")
        return "Player 2 wins\n";
    else if (s1=="paper" && s2 == "rock")
        return "Player 1 wins\n";
    else if (s1 == "scissors" && s2 == "paper")
        return "Player 1 wins\n";

    else if (s1 == "rock" && s2 == "rock")
        return "TIE\n";
    else if (s1 == "paper" && s2 == "paper")
        return "TIE\n";
    else if (s1 == "scissors" && s2 == "scissors")
        return "TIE\n";
    
    else if (s2 == "rock" && s1 == "paper")
        return "Player 1 wins\n";
    else if (s2 == "paper" && s1 == "rock")
        return "Player 2 wins\n";
    else if (s2 == "scissors" && s1 == "paper")
        return "Player 2 wins\n";
    
}


int main()								
{
    cout<< rps("rock", "paper") ;
    cout<<  rps("paper", "rock") ;
    cout<<  rps("paper", "scissors");
    cout<<  rps("scissors", "scissors"); 
    cout<<  rps("scissors", "paper") ;
    
    system("pause");				
	return 0;	
}