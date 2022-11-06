#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here

Coord3D pointAa = {20,30,40};
Coord3D pointAb = {15,21,76};
Coord3D pointAc = {83,23,56};

TEST_CASE("TASK A"){
    CHECK(length(&pointAa) == 53.8516);
    CHECK(length(&pointAb) == 80.2627);
    CHECK(length(&pointAc) == 102.7327);
}

Coord3D pointBa = {62,63,16};
Coord3D pointBb = {41,64,71};
Coord3D pointBc = {36,88,41};
Coord3D pointBd = {26,45,22};

TEST_CASE("TASK B"){
    CHECK(fartherFromOrigin(&pointBa, &pointBb) == &pointBb);
    CHECK(fartherFromOrigin(&pointBc, &pointBd) == &pointBc);
    CHECK(fartherFromOrigin(&pointBb, &pointBc) == &pointBc);
    CHECK(fartherFromOrigin(&pointBa, &pointBd) == &pointBa);
}

//Task C? void function?

Coord3D *taskEa = &pointAa;
Coord3D *taskEb = &pointAb;
Coord3D *taskEc = &pointAc;
Coord3D *taskEd = &pointBa;

TEST_CASE("TASK E"){
    CHECK(createCoord3D(20,30,40) == taskEa);
    CHECK(createCoord3D(15,21,76) == taskEb);
    CHECK(createCoord3D(62,63,16) == taskEc);
}
