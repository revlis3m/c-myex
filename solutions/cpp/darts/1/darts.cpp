#include "darts.h"
#include <math.h>

namespace darts {

// TODO: add your solution here
    int score (float posX, float posY)
    {
        // if((posX >= -1.0f && posX <= 1.0f) && (posY >= -1.0f && posY <= 1.0f)) return 10;
        // else if ((posX >= -5.0f && posX <= 5.0f) && (posY >= -5.0f && posY <= 5.0f)) return 5;
        // else if ((posX >= -10.0f && posX <= 10.0f) && (posY >= -10.0f && posY <= 10.0f)) return 1;
        // else return 0;

        double hitPoint { sqrt(pow(abs(posX),2) + pow(abs(posY),2)) };

        if (hitPoint <= 1.0) return 10;
        else if (hitPoint <= 5.0) return 5;
        else if (hitPoint <= 10.0) return 1;
        else return 0;
    }

}  // namespace darts
