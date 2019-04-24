#include "janela.hpp"

using namespace std;

namespace janela {
    bool compareLevels (const Window &a, const Window &b) {
        return a.level < b.level;
    }

    vector<Window> onClick (vector<Window> windows, Coordinate click) {
        vector<Window> subL;

        for (int i = 0; i < windows.size(); i++) {
            Window win = windows[i];

            if (click.x >= win.p1.x && click.x <= win.p2.x &&click.y >= win.p1.y && click.y <= win.p2.y) {                
                subL.push_back(win);
            }
        }

        return subL;
    }

    std::vector<Window> moveUp (std::vector<Window> windows, int level) {
        int targetIndex;

        for (int i = 0; i < windows.size(); i++) {
            if (windows[i].level == level) {
                targetIndex = i;
                break;
            }
        }

        Window target = windows[targetIndex];
        target.level = 0;
        
        for (int i = targetIndex - 1; i >= 0; i--) {       
            windows[i + 1] = windows[i];            
        }

        windows[0] = target;

        for (int i = 0; i <= windows.size(); i++) {
            if (windows[i].level == windows[i + 1].level)
                ++windows[i + 1].level;
        }
        
        return windows;
    }        
}