//
// Created by Atul on 19-06-2024.
//

#include<bits/stdc++.h>
#include "../Model/generic_rubiks_cube.h"

#ifndef BFSSOLVER_H
#define BFSSOLVER_H

// Typename T: RubiksCube Representation used (3d, 1d, Bitboard)
// Typename H: Corresponding Hash function

template<typename T, typename H>
class BFSSolver {
private:
    vector<generic_rubiks_cube::MOVE> moves;
    unordered_map<T, bool, H> visited;
    unordered_map<T, generic_rubiks_cube::MOVE, H> move_done;

    //    bfs() -> performs breadth-first-search and returns a solved Rubik's Cube
    //    move_done[] -> Back-Pointer map as to how we reached that state
    T bfs() {
        queue<T> q;
        q.push(rubiksCube);
        visited[rubiksCube] = true;

        while (!q.empty()) {
            T node = q.front();
            q.pop();
            if (node.isSolved()) {
                return node;
            }
            for (int i = 0; i < 18; i++) {
                auto curr_move = generic_rubiks_cube::MOVE(i);
                node.move(curr_move);
                if (!visited[node]) {
                    visited[node] = true;
                    move_done[node] = curr_move;
                    q.push(node);
                }
                node.invert(curr_move);
            }
        }
        return rubiksCube;
    }

public:
    T rubiksCube;

    BFSSolver(T _rubiksCube) {
        rubiksCube = _rubiksCube;
    }

    //    Performs BFS and returns the vector of moves done to solve the cube
    vector<generic_rubiks_cube::MOVE> solve() {
        T solved_cube = bfs();
        assert(solved_cube.isSolved());
        T curr_cube = solved_cube;
        while (!(curr_cube == rubiksCube)) {
            generic_rubiks_cube::MOVE curr_move = move_done[curr_cube];
            moves.push_back(curr_move);
            curr_cube.invert(curr_move);
        }
        rubiksCube = solved_cube;
        reverse(moves.begin(), moves.end());
        return moves;
    }
};

#endif //BFSSOLVER_H