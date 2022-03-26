/**
 * File: cdie.cpp
 * Programmer: Florentino Becerra
 * 
 * Description:
 * Implementation of the CDie class
 * Contains functions to toss and draw a single die during gameplay
 */

#include    <iostream>
#include    "cdie.h"
using namespace std;


/**  CDie::Draw
 *  A function to draw a single die to standard out
 * Draws based on condition of the face value of the die
 * 
 * Input: Nothing
 * 
 * Output: Nothing, it just draws the die based on condition
 */

void    CDie::Draw()const
{
    // begin drawing based on conditions
    // m_value is the face value of the die
// The @ symbol represents what the die's face value is in the drawing

    if (m_value == 1)
        {
        cout << "*********" << endl;
        cout << "*       *" << endl;
        cout << "*   @   *" << endl;
        cout << "*       *" << endl;
        cout << "*********" << endl;
        }
    else if (m_value == 2)
        {
        cout << "*********" << endl;
        cout << "* @     *" << endl;
        cout << "*       *" << endl;
        cout << "*     @ *" << endl;
        cout << "*********" << endl;
        }
    else if (m_value == 3)
        {
        cout << "*********" << endl;
        cout << "* @     *" << endl;
        cout << "*   @   *" << endl;
        cout << "*     @ *" << endl;
        cout << "*********" << endl;
        }
    else if (m_value == 4)
        {
        cout << "*********" << endl;
        cout << "* @   @ *" << endl;
        cout << "*       *" << endl;
        cout << "* @   @ *" << endl;
        cout << "*********" << endl;
        }
    else if (m_value == 5)
        {
        cout << "*********" << endl;
        cout << "* @   @ *" << endl;
        cout << "*   @   *" << endl;
        cout << "* @   @ *" << endl;
        cout << "*********" << endl;
        }
    else if (m_value == 6)
        {
        cout << "*********" << endl;
        cout << "* @   @ *" << endl;
        cout << "* @   @ *" << endl;
        cout << "* @   @ *" << endl;
        cout << "*********" << endl;
        }

}  // End of "CDie::Draw"


/**  DieVal
 * This function is responsible for printing the face value of a die
 * from face values 1 through 6
 * Symmetrically, a printed value should be available to read by the player
 * 
 * Input: Nothing
 * Output: Nothing, it just prints the die's face value to stdout
 */

void    CDie::PrintDieVal()const
{
    // Get the value and print

    if (m_value == 1)
        {
        cout << "1" << endl;
        }
    else if (m_value == 2)
        {
        cout << "2" << endl;
        }
    else if (m_value == 3)
        {
        cout << "3" << endl;
        }
    else if (m_value == 4)
        {
        cout << "4" << endl;
        }
    else if (m_value == 5)
        {
        cout << "5" << endl;
        }
    else if (m_value == 6)
        {
        cout << "6" << endl;
        }

}  // End of "CDie::DieVal"


/** CDie::Toss
 * A function to randomize a single die
 * Uses the rand() function to give a random number
 * Between 1 through 6
 * This will be the dice's face value
 * 
 * Input: Nothing
 * 
 * Output: Nothing, it just updates the die's face value
 */

void    CDie::Toss()
{
    m_value = MIN_DIE_VAL + (rand() % MAX_DIE_VAL);
}  // End of "CDie::Toss"
