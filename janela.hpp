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

    std::vector<Window> onClick (Window windows[], int size, Coordinate click);
    Window inFront (std::vector<Window> windows);
}



#endif