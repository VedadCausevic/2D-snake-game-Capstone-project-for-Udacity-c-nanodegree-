#ifndef PLAYER_H
#define PLAYER_H

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class Player{
public:
    //Constructors and Destructors
    Player(){};
    Player(string name, int score, string time);
    ~Player(){};
    //Copy Semantics
        Player(const Player &source);
        Player &operator=(const Player &source);
    //Move Semantics
        Player(Player &&source);
        Player &operator=(Player &&source);
    //Setters
        void SetPlayerName(string name);
        void SetPlayerScore(int score);
        void SetPlayerGameTime();
    //Getters
        string GetPlayerName() const;
        int GetPlayerScore() const;
        string GetPlayerGameTime() const;
    //Overloading the (<) operator for players socres comparison
    bool operator<(const Player &data); 

private:
    string player_name;
    //Struct holding the score and gametime of the player
    struct stats{
        int _score;
        string _game_time;
    }player;
};
#endif