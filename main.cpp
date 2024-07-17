
#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Model/RubiksCubeBitboard.cpp"

using namespace std;

int main() {
    // RubiksCube3dArray object3DArray;
    RubiksCube1dArray object1dArray;
    RubiksCubeBitboard objectBitboard;


    objectBitboard.print();
    objectBitboard.u();
    objectBitboard.d();

    objectBitboard.print();
    objectBitboard.r();
    objectBitboard.print();
    // // object3DArray.u();
    // // object3DArray.uPrime();
    // // object3DArray.u2();
    // object3DArray.l();
    // object3DArray.print();


    return 0;
}