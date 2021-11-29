// ====================
// File: cdiceplayer.cpp
// ====================
// Programmer: Florentino Becerra
// Date: 05/14/2020
// Revised: 05/16/2020
// Class: CSCI 123 F -- Intro To Programming Using C++
// Instructor: Professor Edwards
// Time: MW 9:30 AM to 11:35 AM
// Project: CDicePlayer
// ====================
// Description:
// Implementation of the CDicePlayer class
// Contains functions for updating the score, turns, and displaying the dice
// ====================

#include    "cdiceplayer.h"


// ========== CDicePlayer::GetDiceSum ==========
// A function to get the total number of dice in the game
// Input: Nothing
// Output: A value corresponding to the sum of dice
// ====================

int    CDicePlayer::GetDiceSum()const
{
    return m_numDice;
}  // End of "CDicePlayer::GetDiceSum"


// ========== CDicePlayer::RollDice ==========
// A function to roll the dice for the CDice game
// Takes the number of dice that the player chose
// And gives randomized values for each one
// Increments the player's score, as well as the number of turns
// Input: Nothing
// Output: Nothing
// Just updates the score, turns, and the dice values
// ====================

void    CDicePlayer::RollDice()
{
    // Toss up the values
    // Randomize it with the toss function
    int index;

    for (index = 0; index < m_numDice; ++index)
        {
        m_dice[index].Toss();
        m_score += m_dice[index].GetVal();
        }
    m_numRolls++;

}  // End of "CDicePlayer::RollDice"


// ========== CDicePlayer::ShowDice ==========
// A function to show the player dice to the screen
// Based on the user's number of dice, provided it is less than
// the limit of allowed dice in the game
// Input: Nothing
// Output: Nothing, it just prints the dice to the screen
// ====================

void    CDicePlayer::ShowDice()const
{
    // loop through and show each die

    for (int index = 0; index < m_numDice; ++index)
        {
        m_dice[index].Draw();
        m_dice[index].PrintDieVal();
        }

}  // End of "CDicePlayer::ShowDice"
