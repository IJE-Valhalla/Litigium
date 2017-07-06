#include "stage_two.hpp"

using namespace engine;

StageTwo::StageTwo(int id, std::string newTiledFile) : GameScene (id, newTiledFile){

}

void StageTwo::createGuards(){
    std::pair <std::string, int> wayOne1 ("right", 300);
    std::pair <std::string, int> wayTwo1 ("up", HEADER_SIZE + 30);
    std::pair <std::string, int> wayThree1 ("left", 20);
    std::pair <std::string, int> wayFour1 ("down", HEADER_SIZE + 120);
    std::pair <std::string, int> wayFive1 ("right", 300);

    Guard * guard1 = new Guard("assets/sprites/seguranca_sheet.png", 20, HEADER_SIZE + 120, 18, 35, "right", 2, 10);
    guard1->addWay(1, wayOne1);
    guard1->addWay(2, wayTwo1);
    guard1->addWay(3, wayThree1);
    guard1->addWay(4, wayFour1);
    guard1->addWay(5, wayFive1);

    gameObjectsList.push_back(guard1);

    std::pair <std::string, int> wayOne2 ("left", 700);
    std::pair <std::string, int> wayTwo2 ("down", HEADER_SIZE + 400);
    std::pair <std::string, int> wayThree2 ("right", 920);
    std::pair <std::string, int> wayFour2 ("up", HEADER_SIZE + 200);
    std::pair <std::string, int> wayFive2 ("left", 750);
    std::pair <std::string, int> waySix2 ("up", HEADER_SIZE + 50);

    Guard * guard2 = new Guard("assets/sprites/seguranca_sheet.png", 750, HEADER_SIZE + 50, 18, 35, "down", 2, 10);
    guard2->addWay(1, wayOne2);
    guard2->addWay(2, wayTwo2);
    guard2->addWay(3, wayThree2);
    guard2->addWay(4, wayFour2);
    guard2->addWay(5, wayFive2);
    guard2->addWay(6, waySix2);

    gameObjectsList.push_back(guard2);

    // std::pair <std::string, int> wayOne3 ("left", 700);
    // std::pair <std::string, int> wayTwo3 ("down", HEADER_SIZE + 400);
    // std::pair <std::string, int> wayThree3 ("right", 920);
    // std::pair <std::string, int> wayFour3 ("up", HEADER_SIZE + 200);
    // std::pair <std::string, int> wayFive3 ("left", 750);
    // std::pair <std::string, int> waySix3 ("up", HEADER_SIZE + 50);
    //
    // Guard * guard2 = new Guard("assets/sprites/seguranca_sheet.png", 750, HEADER_SIZE + 50, 18, 35, "down", 2, 10);
    // guard2->addWay(1, wayOne3);
    // guard2->addWay(2, wayTwo3);
    // guard2->addWay(3, wayThree3);
    // guard2->addWay(4, wayFour3);
    // guard2->addWay(5, wayFive3);
    // guard2->addWay(6, waySix3);
    //
    // gameObjectsList.push_back(guard2);

    // Camera* camera1 = new Camera("assets/sprites/camera(11X8).png",680,510,11,8, "right");
    // gameObjectsList.push_back(camera1);

    Camera* camera2 = new Camera("assets/sprites/camera(11X8).png",942,195,11,8, "left");
    gameObjectsList.push_back(camera2);
}

void StageTwo::createAliens(){
    std::pair <int, int> biluPos (880, HEADER_SIZE + 550);
    std::pair <int, int> etemerPos (900, HEADER_SIZE + 550);
    std::pair <int, int> varginhaPos (920, HEADER_SIZE + 550);

    player = new Player(biluPos, etemerPos, varginhaPos);
    gameObjectsList.push_back(player);
}

void StageTwo::createDoorSystems(){
    std::pair<int,int> doorOnePosition (163, HEADER_SIZE + 257);
    std::pair<int,int> switchOnePosition (610, HEADER_SIZE + 50);

    std::pair<int,int> doorTwoPosition (163, HEADER_SIZE + 497);
    std::pair<int,int> switchTwoPosition (800, HEADER_SIZE + 50);

    gameObjectsList.push_back(new DoorSystem(doorOnePosition,switchOnePosition, "RIGHT"));
    gameObjectsList.push_back(new DoorSystem(doorTwoPosition,switchTwoPosition, "RIGHT"));
}

void StageTwo::createPapers(){
    gameObjectsList.push_back(new PaperTable("Paper", 30, HEADER_SIZE + 250, 60, 34));
    gameObjectsList.push_back(new PaperTable("Paper", 350, HEADER_SIZE + 170, 60, 34));
    gameObjectsList.push_back(new PaperTable("Paper", 30, HEADER_SIZE + 490, 60, 34));
}
