//Decision making v0.01
#include <unistd.h>
#include <memory.h>
#include "MeshController.h"

#define UNREFERENCED_PARAMETER (x){ x=x; }

using namespace std;

int main (int argn, char* argv)
{

    UNREFERENCED_PARAMETER(argn);
    UNREFERENCED_PARAMETER(argv);

    unsigned int napTime = 1;

    //
    std::unique_ptr<MeshController> meshController = make_unique<MeshController>();

    while (true)
    {
        MeshEvent event = meshController->Analyze();

        MeshController->Handle(event);

        sleep(napTime);
    }


    return 0;
}