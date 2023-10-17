// Sven Reyes
// CSCI 1010 Section 1
// Project 1
// Number game
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    char opt; // Variable to hold user's menu choice
    int guess; // Variable to hold user's guess
    while(1) // Start an infinite loop
    {   //output menu
        cout << "***** GUESS THE NUMBER! ******" << endl;
        cout << "Please choose from the menu:\n";
        cout << "S: Start a new game\n";
        cout << "Q: Quit the game\n";
        cin >> opt; // Get user's menu choice

        // Quit the game
        if(opt == 'Q' || opt == 'q')
        {
            cout << "^^ ^^ Thanks for playing! ^^ ^^";
            break; // Exit loop
        }
        // Start a new game
        else if(opt == 'S' || opt == 's')
        {
            srand(time(0)); // Seed the random number generator with the current time
            int num;
            num = rand() % 100 + 1; // Generate a random number between 1 and 100

            // Allow the user to guess up to 10 times
            for(int i = 1; i <= 10; i++)
            {
                cout << "Please enter a number between 1 to 100: ";
                cin >> guess; // Get user's guess
            
                if(guess < num)
                {
                    cout << "Too low!" <<endl;
                    continue; // Skip to the next iteration of the loop
                }
                else if(guess > num)
                {
                    cout << "Too high!" <<endl;
                    continue; // Skip to the next iteration of the loop
                }
                else if(guess == num)
                {
                    cout << "You got it! Congrats!" <<endl;
                    break; // Exit the loop
                }
                
            }
        }
        else
        {
            cout<< "Invaild input" <<endl; // Inform the user of invalid input
        }
        
    }
}