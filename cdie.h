// ============================================================================
// File: cdie.h (Spring 2020)
// ============================================================================
// This is the header file for the CDie class, which is used to represent a
// single die.
// ============================================================================

#ifndef CDIE_H
#define CDIE_H

#include    <cstdlib>

// defined constants
const   int     MIN_DIE_VAL = 1;
const   int     MAX_DIE_VAL = 6;

// class declaration
class   CDie
{
public:
    // constructors
    CDie(int  initVal = 1) {  m_value = initVal; }

    // member functions
    void    Draw()const;  // draw the dice
    void    PrintDieVal()const;  // Accessibly show the dice face values
    int     GetVal()const { return  m_value; }
    void    Toss();  // randomize the dice toss

private:
    int     m_value;  // the value of the dice shown
};

#endif // CDIE_H
