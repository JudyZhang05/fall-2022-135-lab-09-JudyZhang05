#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here

Coord3D pointAa = {20,30,40};
Coord3D pointAb = {15,21,76};
Coord3D pointAc = {83,23,56};
Coord3D pointBa = {62,63,16};
Coord3D pointBb = {41,64,71};
Coord3D pointBc = {36,88,41};
Coord3D pointBd = {26,45,22};

TEST_CASE("TASK A"){
    CHECK(length(&pointAa) == 53.85164807134504);
    CHECK(length(&pointAb) == 80.26207074328447);
    CHECK(length(&pointAc) == 102.73266277090261423241013344731515453545515079035184951605249632);
    CHECK(length(&pointBa) == 89.827612681179499328082381256795598116868114937551075322934613989);
    CHECK(length(&pointBb) == 104.0096149401583);
    CHECK(length(&pointBc) == 103.54226190305097);
}

TEST_CASE("TASK B"){
    CHECK(fartherFromOrigin(&pointBa, &pointBb) == &pointBb);
    CHECK(fartherFromOrigin(&pointBc, &pointBd) == &pointBc);
    CHECK(fartherFromOrigin(&pointBb, &pointBc) == &pointBb);
    CHECK(fartherFromOrigin(&pointBa, &pointBd) == &pointBa);
}

// Coord3D pos = {0,0,100.0};
// Coord3D vel = {1,5,0.2};

// //Task C? void function?
// TEST_CASE("TASK C"){
//     CHECK(move(&pos, &vel, 12) == void);
// }


// Coord3D *taskEa = &pointAa;
// Coord3D *taskEb = &pointAb;
// Coord3D *taskEc = &pointAc;
// Coord3D *taskEd = &pointBa;

// TEST_CASE("TASK E"){     //creates a new memory address within the function 
//     CHECK(createCoord3D(20,30,40) == );
//     CHECK(createCoord3D(15,21,76) == );
//     CHECK(createCoord3D(62,63,16) == );
// }
