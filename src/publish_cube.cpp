#include <analyze_pc/pcl_cube.h>

int main(int argc, char ** argv){
    ros::init (argc, argv, "pcl_cube_creation");
    PCLCube* c = new PCLCube;
    c->spin();
    return 0;
}
