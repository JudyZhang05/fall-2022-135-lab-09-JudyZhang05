#include <iostream>
#include "coord3d.h"
#include <cmath>
#include "funcs.h"

//add funcs here

//TASK A
double length(Coord3D *p){
    double result;
    result = sqrt(pow(p->x,2) + pow (p->y,2) + pow(p->z,2));
    return result;
}

// //task a usage
// int main() {
//     Coord3D pointP = {10, 20, 30};
//     cout << length(&pointP) <<  ; // would print 37.4166
// }


//TASK B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){

    double address_p = length(*&p1);
    double address_q = length(*&p2);

    std::cout << "Calculating Distances: \nP: " << address_p << '\n' << "Q: " << address_q << std::endl;

    if(address_p > address_q){
        return p1;
    }
    else{
        return p2; 
    }
}


// //usage example task b
// int main() {
//     Coord3D pointP = {10, 20, 30};
//     Coord3D pointQ = {-20, 21, -22};

//     std::cout << "Address of P: " << &pointP << std::endl;
//     std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

//     Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
//     std::cout << "ans = " << ans << std::endl; // So which point is farther?
// }

//TASK C
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos->x = ppos->x + pvel->x *dt;
    ppos->y = ppos->y + pvel->y *dt;
    ppos->z = ppos->z + pvel->z *dt;
}

// //usage example task c
// int main() {
//     Coord3D pos = {0, 0, 100.0};
//     Coord3D vel = {1, -5, 0.2};

//     move(&pos, &vel, 2.0); // object pos gets changed
//     std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
//     // prints: 2 -10 100.4
// }

//TASK E
Coord3D* createCoord3D(double x, double y, double z){       // allocate memory and initialize
    Coord3D* position = new Coord3D;
    *position = {x, y, z};
    return position;
}

void deleteCoord3D(Coord3D *p){         // free memory
    delete p;
}

// // //usage example task e
// int main() {
//     double x, y, z;
//     std::cout << "Enter position: ";
//     std::cin >> x >> y >> z;
//     Coord3D *ppos = createCoord3D(x,y,z);
    
//     std::cout << "Enter velocity: ";
//     std::cin >> x >> y >> z;
//     Coord3D *pvel = createCoord3D(x,y,z);

//     move(ppos, pvel, 10.0);

//     std::cout << "Coordinates after 10 seconds: " 
//          << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

//     deleteCoord3D(ppos); // release memory
//     deleteCoord3D(pvel);
// }