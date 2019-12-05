//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int winnings, answer, choice;
	char playAgain;
	
	do
	{
		winnings = 0;
		int gamesWon = 0;
		int gamesLost = 0;
		
		cout << "In this game, I will choose a number between 1 and 3.\n" << 
			"You must pick a number and try to guess my number.\nif you "<<
			"guess it, you will earn $1.\nIf you are wrong, you will owe me "<<
			"$2.\nWe will play 5 times, and then divy out the cash.\n";
	
		for (int i = 0; i < 5; i++)
		{
			answer = (rand() % 3) + 1;
		
			cout << "\nI've picked a number between 1 and 3.\n";
		
			do 
			{
				cout << "\nPlease guess which number is correct: ";
				cin >> choice;
			} while (choice > 3 || choice < 1);
		
			if (choice == answer)
			{
				winnings += 1;
				gamesWon += 1;
				cout << "\nCongrats! You have earned $1.\n";
				cout << "You have won " << gamesWon << " games, and lost " <<
						gamesLost << " games.\n";
			} else
			{
				winnings -= 2;
				gamesLost += 1;
				cout << "\nYou lost this time. My number was " << answer << 
						". You have lost $2.\n";
				cout << "You have won " << gamesWon << " games, and lost " <<
						gamesLost << " games.\n";
			}
		}
	
		if (winnings > 0)
		{
			cout << "\nCongrats! You beat me and earned $" << winnings << ".\n";
			cout << "You won " << gamesWon << " games, and lost " <<
					gamesLost << " games.\n";
		} else if (winnings < 0)
		{
			cout << "\nToo bad, you ended up losing $" << abs(winnings) << 
					".\n";
			cout << "You won " << gamesWon << " games, and lost " <<
					gamesLost << " games.\n";
		} else
		{
			cout << "\nLooks like you broke even! Well, no harm, no foul. " <<
					"Better luck next time!\n";
			cout << "You won " << gamesWon << " games, and lost " <<
					gamesLost << " games.\n";
		}
		
		cout << "\nWould you like to play again? (y/n): ";
		cin >> playAgain;
		cout << endl;
	} while (playAgain == 'y' || playAgain == 'Y');
	
	cout << "Program end.";
	
	cout << endl;
	return 0;
}
