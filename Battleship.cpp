#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// declare the board scale, board arrays, and tokens (number of times one can place ships) as global variables
int scale = 0;
int playerboard[11][11];
int enemyboard[11][11];
int hitsAndmisses[11][11];
int tokens = 0;

// create the board function
void createboard () {
    cout << "Please enter the size of the battlespace. \nPlease make sure it is between 5 and 11: \n";
    cin >> scale;

    while (scale > 11 || scale < 5) {
            if (scale > 11) {
                cout << "This size of the battlespace is too large. \nPlease try again: \n";
                cin >> scale;
            } else if (scale < 5) {
                cout << "This size of the battlespace is too small. \nPlease try again: \n";
                cin >> scale;
            }
        }

    tokens = static_cast<int>(round(scale * 0.8));
    // create the board
    for (int i = 0; i < scale; i++) {
        for (int j = 0; j < scale; j++) {
            playerboard[i][j] = 0;
        }
    }
}

// initialize the enemy's board function
void createEnemyBoard () {
    for (int i = 0; i < scale; i++) {
        for (int j = 0; j < scale; j++) {
            enemyboard[i][j] = 0;
        }
    }
}

// initialize the hits and misses board
void createHitsandMisses () {
    for (int i = 0; i < scale; i++) {
        for (int j = 0; j < scale; j++) {
            hitsAndmisses[i][j] = 0;
        }
    }
}


// print the general board function
void printboard () {
    cout << "BATTLESHIP BOARD SIZE:" << scale << "\n"; 
    for (int j = 0; j < scale; j++) {
        for (int i = 0; i < scale; i++) {
            cout << "\033[1;34m" << "W" << "\033[0m" << "  ";
        }
        cout << "\n";
    }
     cout << "Thank you! You will have " << tokens << " tokens to place your ships. \nYou can place as many ships as you have tokens! \n";
    cout << "Loading... The enemy is preparing themselves.\n";
}

// print the player's board function
void printPlayerboard () {
    cout << "YOUR GLORIOUS FLEET: \n"; 
    for (int j = 0; j < scale; j++) {
        for (int i = 0; i < scale; i++) {
            if (playerboard[i][j] == 1) {
                cout << "\033[1;32m" << "S" << "\033[0m" << "  ";
            } else {
            cout << "\033[1;34m" << "W" << "\033[0m" << "  ";
            }
        }
        cout << "\n";
    }
}

// print the visualization of the hits and misses on the enemy's fleet
void printHitsandMisses () {
    cout << "HITS AND MISSES: \n"; 
    for (int j = 0; j < scale; j++) {
        for (int i = 0; i < scale; i++) {
            if (hitsAndmisses[i][j] == 1) {
                cout << "\033[1;31m" << "H" << "\033[0m" << "  ";
            } else if (hitsAndmisses[i][j] == 2) {
                cout << "\033[1;33m" << "M" << "\033[0m" << "  ";
            } else {
                cout << "\033[1;34m" << "W" << "\033[0m" << "  ";
            }
        }
        cout << "\n";
    }
}

// place enemy ships
void EnemyShips () {
    for (int i = 0; i < tokens; i++) {
        int row, collumn;
        
        //generate row position
        srand(time(NULL));
        int random_row = rand() % scale;
        row = random_row;

        //generate collumn position
        srand(time(NULL));
        int random_collumn = rand() % scale;
        row = random_collumn;


        if (enemyboard[row][collumn] == 1) {
            i--;
        } else {
            enemyboard[row][collumn] = 1;
        }
    }
}

// let player set their ships
void askshiplocation () {
    for (int i = 0; i < tokens; i++) {
        int row, collumn;
        cout << "Please enter the x coordinate of your " << (i+1);
        switch (i) {
            case 0: 
                cout <<"st ship. \n" << "The top left corner is (0,0). \n";
                break;
            case 1:
                cout <<"nd ship. \n" << "The top left corner is (0,0). \n";
                break;
            case 2:
                cout <<"rd ship. \n" << "The top left corner is (0,0). \n";
                break;
            default:
                cout <<"th ship. \n" << "The top left corner is (0,0). \n";
        }

        cin >> row;

        while (row >= scale || row < 0) {
            if (row >= scale) {
                cout << "The maximum coordinate of this battle space is " << (scale-1) << "! \n" << "Please enter a valid coordinate. \n";
                cin >> row;
            } else if (row < 0) {
                cout << "The battlespace does not extend into the negative dimension! \n" << "Please enter a valid coordinate. \n";
                cin >> row;
            }
        }

        cout << "Please enter the y coordinate of your " << (i+1);
        switch (i) {
            case 0: 
                cout <<"st ship. \n" << "The top left corner is (0,0). \n";
                break;
            case 1:
                cout <<"nd ship. \n" << "The top left corner is (0,0). \n";
                break;
            case 2:
                cout <<"rd ship. \n" << "The top left corner is (0,0). \n";
                break;
            default:
                cout <<"th ship. \n" << "The top left corner is (0,0). \n";
        }

        cin >> collumn;

        while (collumn >= scale || collumn < 0) {
            if (collumn >= scale) {
                cout << "The maximum coordinate of this battle space is " << (scale-1) << "! \n" << "Please enter a valid coordinate. \n";
                cin >> collumn;
            } else if (collumn < 0) {
                cout << "The battlespace does not extend into the negative dimension! \n" << "Please enter a valid coordinate. \n";
                cin >> collumn;
            }
        }

        if (playerboard[row][collumn] == 1) {
            cout << "You cannot place two ships in the same location! \n";
            i--;
        } else {
            playerboard[row][collumn] = 1;
        }
        cout << "You have " << (tokens-i-1) << " tokens remaining!" << endl;
        printPlayerboard ();
    }
    cout << "All of your ships have been placed! \n";
}

// the player's turn to try and sink an enemy ship

// the enemy's turn to try and sink a player ship

// win condition loop (if either player runs out of ships)

int main () {
    createboard ();
    createEnemyBoard ();
    createHitsandMisses ();
    printboard (); 
    EnemyShips ();
    askshiplocation();
    return 0;
}