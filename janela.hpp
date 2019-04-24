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

    // Compare two windows by their levels
    bool compareLevels (const Window &a, const Window &b);

    // Compare two windows by their areas
    bool compareAreas (const Window &a, const Window &b);

    // Return a vector of all windows hit by a click
    std::vector<Window> onClick (std::vector<Window> windows, Coordinate click);

    // Move windows from given leven to the top and return the edited vector
    std::vector<Window> moveUp (std::vector<Window> windows, int level);
}

#endif