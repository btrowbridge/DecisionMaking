#include <stdio.h>
#include <memory.h>

using namespace std;



class MeshController
{
public:

    struct MeshEvent
    {
        enum Event
        {
            None
            NodeAdded,
            NodeRemoved
        }

        Event eventID;
        void* data;
    };


    MeshController();

    ~MeshController() = default;

    MeshEvent Analyze();
    void TakeAction(MeshEvent event);

private:

    static class Mesh {
        public:
            Mesh();

            int GetNodeCount();

            void SetBatmanPingRate(int milliseconds);
            
        private:
            void _Update();

            int mNodeCount;
            int mBatmanPingRate
    }

    std::unique_ptr<Mesh> mMesh;

    std::Map<MeshEvent,std::func<void,MeshEvent>> Actions;
};





