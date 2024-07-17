//
// Created by HP on 12-06-2024.
//

#ifndef GENERIC_RUBIKS_CUBE_H
#define GENERIC_RUBIKS_CUBE_H
#include <bits/stdc++.h>
using namespace std;


class generic_rubiks_cube {
public:
    enum class MOVE {
        U,UPRIME,U2,
        L,LPRIME,L2,
        F,FPRIME,F2,
        R,RPRIME,R2,
        B,BPRIME,B2,
        D,DPRIME,D2

    };

    enum class COLOR {
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum  class FACE {
        UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN,
    };

    //task 1 a all 18 moves
    virtual generic_rubiks_cube &u() = 0;
    virtual generic_rubiks_cube &uPrime() = 0;
    virtual generic_rubiks_cube &u2() = 0;

    virtual generic_rubiks_cube &l() = 0;
    virtual generic_rubiks_cube &lPrime() = 0;
    virtual generic_rubiks_cube &l2() = 0;

    virtual generic_rubiks_cube &f() = 0;
    virtual generic_rubiks_cube &fPrime() = 0;
    virtual generic_rubiks_cube &f2() = 0;

    virtual generic_rubiks_cube &r() = 0;
    virtual generic_rubiks_cube &rPrime() = 0;
    virtual generic_rubiks_cube &r2() = 0;

    virtual generic_rubiks_cube &b() = 0;
    virtual generic_rubiks_cube &bPrime() = 0;
    virtual generic_rubiks_cube &b2() = 0;

    virtual generic_rubiks_cube &d() = 0;
    virtual generic_rubiks_cube &dPrime() = 0;
    virtual generic_rubiks_cube &d2() = 0;


    // is solved
    virtual bool isSolved() const =0;

    // get color
    virtual  COLOR getColor(FACE face,unsigned row,unsigned col)  const=0;

    // functions that we'll implement also
    // print, getcolorletter,getmove,move,invert,randomshuffle

    //getcolorletter
    static  char getColorLetter(COLOR color);

    //get move
    static  string getMove(MOVE ind);

    //move
    generic_rubiks_cube &move(MOVE ind);

    //revert
    generic_rubiks_cube &invert(MOVE ind);

    //random shuffle
    vector<MOVE> randomSuffle(unsigned int times);

    //print
    void print() const;

};




#endif //GENERIC_RUBIKS_CUBE_H
