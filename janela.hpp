#ifndef JANELA_H_
#define JANELA_H_

#include <iostream>
#include <string>
#include <vector>

namespace janela {   
    struct coordinate
    {
        int x;
        int y;
    };
    typedef struct coordinate Coordinate;

    struct window {
        std::string id;
        Coordinate p1;
        Coordinate p2;
        int level;
    };
    typedef struct window Window;

    bool compareLevels (const Window &a, const Window &b);
    void discardOverflow (Window windows[], int w, int h);
    std::vector<Window> onClick (std::vector<Window> windows, Coordinate click);
    std::vector<Window> moveUp (std::vector<Window> windows, int level);
}

#endif