/**
 * File: cdiceplayer.h
 *
 * This is the header file for the CDicePlayer class, which is used to
 * represent an individual pair of rolling dice.
 */

#ifndef CDICEPLAYER_H
#define CDICEPLAYER_H

#include    <cstdlib>
#include    <ctime>
#include    "cdie.h"

// defined constants
const   int     DEFAULT_NUM_DICE = 2;
const   int     MAX_NUM_DICE = 100;

// Class declaration
class   CDicePlayer
{
public:
    // constructors
    CDicePlayer(int numDice = DEFAULT_NUM_DICE)
                 {
                 srand(time(NULL));  // seed the randomization
                 m_score = m_numRolls = 0;  // default value
                 m_numDice = numDice;  // value passed through to constructor
                 }

    // member functions
    int     GetDiceSum()const;
    int     GetNumRolls()const { return m_numRolls; }  // how many times rolled
    int     GetScore()const { return m_score; }
    void    RollDice();  // randomizes the roll
    void    ShowDice(int displayChoice)const;

private:
    int     m_numDice;
    int     m_numRolls;
    int     m_score;
    CDie    m_dice[MAX_NUM_DICE];
};

#endif // CDICEPLAYER_H
