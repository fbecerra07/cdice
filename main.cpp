/**
 * File: main.cpp (Spring 2020)
 * 
 * Programmer: F. Becerra
 * Date: 05/14/2020
 * Revised: 11/29/2020
 * Class: Intro To Programming Using C++
 * Project: CDicePlayer
 * 
 * This program is a simple dice game that allows the player to repeatedly roll
 * one or more dice to accumulate a total number of points without exceeding a
 * limit of 100. The player at the keyboard is prompted to enter the number of
 * dice to play with, and that value is then used to create a CDicePlayer
 * object, which is then used to allow the player to play the game. The game is
 * over when either the player decides to stop rolling dice, or the limit is
 * exceeded.
 */

#include    <iostream>
#include    <cstdlib>
#include    "cdiceplayer.h"
using namespace std;


// Function prototypes
void    EvaluateScore(const CDicePlayer  &player);

// defined constants
const   int     MAX_POINTS = 100;


int     main()
{
    int diceVal;
    int diceRepVal;

    // Welcome the player to the game
    cout << "Welcome to the dice rolling game. \n";
    cout << "You will be able to see if you can roll the dice and get a score of " << MAX_POINTS << " points. \n";
    cout << "But try not to go over " << MAX_POINTS << " points!" << endl;

    // ask the user how many dice to play with
    cout << "How many dice to you wish to roll?\n";
    cout << "Enter a number between 1 and 100:  ";
    if (!(cin >> diceVal))
        {
        cout << "\nInvalid input." << endl;
    cout << "Exiting program." << endl;
        exit(EXIT_FAILURE);
        }
    else if (diceVal > MAX_NUM_DICE)
        {
        cout << "\nAttention: You can only have up to 100 dice to roll." << endl;
        cout << "Exiting program." << endl;
        exit(EXIT_FAILURE);
        }

    cout << "\nHow do you wish for the dice to be displayed?\n";
    cout << "Enter 1 for visual dice or 2 for just dice numbers to be displayed:  ";
    if ( !(cin >> diceRepVal) )
        {
        cout << "\nAttention: Error getting input." << endl;
        exit(EXIT_FAILURE);
        }
    else if (diceRepVal >= 3)
        {
        cout << "\nWarning: Invalid option chosen. Exiting for now..." << endl;
        exit(EXIT_FAILURE);
        }
    else
        {
        cout << "\nAttention: Unexpected value chosen. Exiting game..." << endl;
        exit(EXIT_FAILURE);
        }

    // Create the dice player object, passing the number of dice to play with
    // as an argument to the constructor
    CDicePlayer player(diceVal);
    player.RollDice();
    player.ShowDice(diceRepVal);

    // loop and play the game...
    do
        {
        // see if we should keep looping
        // by checking if we have hit the limit of 100

        if (player.GetScore() >= MAX_POINTS)
            {
            cout << "\nAttention!" << endl;
            cout << "Your score: " << player.GetScore() << " points." << endl;
            break;
            }
        else
            {
            // Display the current total value
            cout << "\nRoll #" << player.GetNumRolls();
            cout << ": Your current score is " << player.GetScore() << "." << endl;
            }

        // see if the user wishes to roll again
        char response;
        cout << "Do you want to roll again?  (Y/N):  ";
        cin.getline(response);
        response = toupper(response);

        if (response == 'Y')
        {
            player.RollDice();
            player.ShowDice(diceRepVal);
            }
        else
            {
            break;
            }

        }
    while (true);

    // Display a final summary message
    EvaluateScore(player);
    cout << "\nThanks for playing!" << endl;

    return  0;

}  // end of "main"


/**  EvaluateScore
 * 
 * This function is used at the end of the game to evaluate the player's final
 * score and display a summary.
 * 
 * Input:
 *      player [IN]  -- a const reference to a CDicePlayer object
 * 
 * Output:
 *      Nothing
 * 
 */

void    EvaluateScore(const CDicePlayer&  player)
{

    cout << "\nGame over!" << endl;
    cout << "With " << player.GetNumRolls();
    cout << " turns, your score is ";
    cout << player.GetScore() << " points." << endl;

    // evaluate the current score against the limit and maximum number of
    // rolls allowed
    if (player.GetScore() < MAX_POINTS)
        {
        cout << "You didn't reach the limit exactly." << endl;
        cout << "You have ";
        cout << MAX_POINTS - player.GetScore();
        cout << " to spare." << endl;
        }
    else if (player.GetScore() == MAX_POINTS)
        {
        cout << "\nCongratulations!" << endl;
        cout << "You reached exactly " << MAX_POINTS << " points!" << endl;
        cout << "It took you ";
        cout << player.GetNumRolls();
        cout << " turns!" << endl;
        }
    else if (player.GetScore() > MAX_POINTS)
        {
        cout << "Oh no!" << endl;
        cout << "Your score is ";
        cout << player.GetScore() << " points, ";
        cout << "which is ";
        cout << player.GetScore() - MAX_POINTS;
        cout << " point(s) above " << MAX_POINTS << endl;
        cout << "Better luck next time!" << endl;
        }

}  // end of "EvaluateScore"
