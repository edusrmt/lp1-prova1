#include "janela.hpp"

using namespace std;

namespace janela {
    vector<Window> onClick (Window windows[], int size, Coordinate click) {
        vector<Window> subL;

        for (int i = 0; i < size; i++) {
            Window win = windows[i];

            if (click.x >= win.p1.x && click.x <= win.p2.x &&click.y >= win.p1.y && click.y <= win.p2.y) {
                //std::cout << "(" << click.x << ", " << click.y << ") is into (" << win.p1.x << ", " << win.p1.y << ") and (" << win.p1.x << ", " << win.p1.y << ")!" << std::endl;
                
                subL.push_back(win);
            }
        }

        return subL;
    }

    Window inFront (vector<Window> windows) {
        Window min;

        if (windows.size() > 0) {
            Window min = windows[0];

            for (Window w : windows) {
                if (w.level < min.level)
                    min = w;
            }
        }        

        return min;
    }
}