//Isiah Ruiz
//Source file for CMPS 3350 Project: Soulterrain
//Last modified: February 25, 2022

#include <iostream>
//#include <cstdlib>
//#include <cstring>
//#include <unistd.h>
//#include <ctime>
//#include <cmath>
//#include <X11/Xlib.h>
#include <X11/keysym.h>
//#include <GL/glx.h>
//#include "log.h"
//#include "fonts.h"
//extern class Ship;
//extern class Asteroid;
//extern class Bullet;
//extern class Game {Ship *ship; Asteroid *ahead; Bullet *barr;} g;

using namespace std;

/*
void movement(char *keys)
{
    extern class Ship;
    extern class Asteroid;
    extern class Bullet;
    if (keys[XK_Left]) {
        g.ship->vel[0] -= 0.05f;
    } else {
        if (!keys[XK_Right])
            g.ship->vel[0] = 0.0f;
    }
    if (keys[XK_Right]) {
        g.ship->vel[0] += 0.05f;
    } else {
        if (!keys[XK_Left])
            g.ship->vel[0] = 0.0f;
    }
    if (keys[XK_Up]) {
        g.ship->vel[1] += 0.05f;
    } else {
        if (!keys[XK_Down])
            g.ship->vel[1] = 0.0f;
    }
    if (keys[XK_Down]) {
        g.ship->vel[1] -= 0.05f;
    } else {
        if (!keys[XK_Up])
            g.ship->vel[1] = 0.0f;
    }
}
*/

void test(char *keys)
{
    if (keys[XK_W] || keys[XK_w]) {
        cout << "W pressed" << endl;
    }
    if (keys[XK_A] || keys[XK_a]) {
        cout << "A pressed" << endl;
    }
    if (keys[XK_S] || keys[XK_s]) {
        cout << "S pressed" << endl;
    }
    if (keys[XK_D] || keys[XK_d]) {
        cout << "D pressed" << endl;
    }
}

void iruiz(char *keys)
{
    cout << "Testing diagonal directions. " << endl;
    cout << "Try to go in diagonal directions with WASD." << endl;
    if((keys[XK_W] || keys[XK_w]) && (keys[XK_A] || keys[XK_a])) {
        cout << "northwest " << endl;
    }
    if ((keys[XK_W] || keys[XK_w]) && (keys[XK_D] || keys[XK_d])) {
        cout << "northeast" << endl;
    }
    if ((keys[XK_S] || keys[XK_s]) && (keys[XK_A] || keys[XK_a])) {
        cout << "southwest" << endl;
    }
    if ((keys[XK_W] || keys[XK_w]) && (keys[XK_A] || keys[XK_a])) {
        cout << "southeast" << endl;
    }
    else cout << "Not a diagonal direction." << endl;
}
