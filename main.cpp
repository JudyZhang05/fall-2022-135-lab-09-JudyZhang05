#include <iostream>

#include "funcs.h"

#include "coord3d.h"

int main()
{
  //Task A
  Coord3D pointP = {10,20,30};
  std::cout << "\nTASK A Length and distance in 3D space\n\nCoord3D Numbers: "<< &pointP << '\n';
  std::cout << "Calculated Length and distance in 3D space: " << length(&pointP) << std::endl; //would print 37.4166

  //Task B
  std::cout << "\n\nTASK B Farther from the origin?\n\n";

  Coord3D pointP1 = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  std::cout << "Address of P: " << &pointP1 << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;
  
  Coord3D * ans = fartherFromOrigin(&pointP1, &pointQ);

  std::cout << "ans = " << ans << std::endl; // So which point is farther?

  if (ans == &pointP1){
    std::cout << "\nPoint P is Father" << std::endl;
  }else{
    std::cout << "\nPoint Q is Father" << std::endl;
  }

  //Task C
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << "\n\nTASK C Velocity and moving objects: \n\n" << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4

  //Task E
    double x, y, z;
    //std::cout << "\n\nTASK E\nEnter position: ";
    //std::cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(10,20,30);
    
    // std::cout << "Enter velocity: ";
    // std::cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(5.5,-1.4,7.77);

    move(ppos, pvel, 10.0);

    std::cout << "\n\nTASK E Creating and deleting objects dynamically\n\nCoordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl << '\n';

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
  
  return 0;
}
