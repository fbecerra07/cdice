/**
 * File: cdiceplayer.cpp
 * 
 * Programmer: F. Becerra
 * Date: 05/14/2020
 * Revised: 05/16/2020
 * Class: Intro To Programming Using C++
 * Project: CDicePlayer
 * 
 * Description:
 * Implementation of the CDicePlayer class
 * Contains functions for updating the score, turns, and displaying the dice
 */

#include    "cdiceplayer.h"


/**  CDicePlayer::GetDiceSum
 * A function to get the total number of dice in the game
 * 
 * Input: Nothing
 * Output: An integer value associated to the total number of dice
 */

int    CDicePlayer::GetDiceSum()const
{
    return m_numDice;
}  // End of "CDicePlayer::GetDiceSum"


/**  CDicePlayer::RollDice
 * A function to roll the dice for the CDice game
 * Takes the number of dice that the player chose
 * And gives randomized values for each one
 * Increments the player's score, as well as the number of turns
 * 
 * Input: Void
 * Output: Void
 * Just updates the score, turns, and the dice values
 */

void    CDicePlayer::RollDice()
{

    for (int index = 0; index < m_numDice; ++index)
        {
        m_dice[index].Toss();
        m_score += m_dice[index].GetVal();
        }
    m_numRolls++;

}  // End of "CDicePlayer::RollDice"


/**  CDicePlayer::ShowDice
 * A function to show the player's dice to the screen
 * based on the user's number of dice, provided it is less than
 * the limit of allowed dice in the game
 * An integer value is passed to indicate how the function will display the dice to the player
 * 
 * Input:
 * displayChoice [IN]: An integer value representing how the dice should be displayed during gameplay
 * Output: Void
 * The function just prints the dice to the screen
 */

void    CDicePlayer::ShowDice(int displayChoice)const
{
    // loop through and show each die

    if (displayVal == 1)
        {
        for (int index = 0; index < m_numDice; ++index)
            {
            m_dice[index].Draw();
            }
        }
    else if (displayVal == 2)
        {
        for (int index = 0; index < m_numDice; ++index)
            {
            m_dice[index].PrintDieVal();
            }
        }

}  // End of "CDicePlayer::ShowDice"
