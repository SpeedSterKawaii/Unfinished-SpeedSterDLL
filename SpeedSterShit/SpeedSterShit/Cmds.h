#include <Windows.h>
#include <string>

namespace Commands
{

}

void ShowTutorial()
{
    const char* Tutorial = R"(
    Print - Print a text in the dev console.
    Warn - Print a warning in the dev console.
    Info - Print a info in the dev console.
    ------------------------------------------
    Sparkles - Add sparkles on the player head.
    Flames - Add Fire/Flames on the player head.
    Speed - Applies 100+ WalkSpeed to the Humanoid.
    Low Grav - Applies 50 Gravity to the Workspace.
    Gravity - Applies 196.2 (default) to Workspace.      
    ----------------------------------------------
    Hopefully that tutorial helped you, enjoy the dll!                                                      
    )";
}