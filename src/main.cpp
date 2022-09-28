
#include "app/App.h"

const bool DEBUG_MODE = false;

int main(int argc, const char *argv[])
{

    if (App::Singleton().Init(DEBUG_MODE))
    {
        App::Singleton().Run();
    }
    return 0;
}

// TODO

// Better main app structure
// Water density and viscosity
// Water is noisy

// Study remove the NextGrid Data
// Better water sim (water is very slow to move)
// Better classes structure
// Optimization

// For the future

// Add HSV color changes
// Add a way to save and load grids
// Add a way to create custom elements
// mix different fluid elements, to get a new one with different color
// Add post processing methods
// Create clone points, when the space bar is pressed, a spawn of this element will be created
