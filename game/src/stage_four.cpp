#include "stage_four.hpp"

using namespace engine;

StageFour::StageFour(int id, std::string newTiledFile) : GameScene (id, newTiledFile){

}

void StageFour::createGuards(){
    std::pair <std::string, int> wayOne ("right", 480);
    std::pair <std::string, int> wayTwo ("up", HEADER_SIZE + 20);
    std::pair <std::string, int> wayThree ("left", 220);
    std::pair <std::string, int> wayFour ("down", HEADER_SIZE + 120);

    Guard * guard = new Guard("assets/sprites/seguranca_sheet.png", 220, HEADER_SIZE + 120, 18, 35, "right", 2, 10);
    guard->addWay(1, wayOne);
    guard->addWay(2, wayTwo);
    guard->addWay(3, wayThree);
    guard->addWay(4, wayFour);

    Camera* camera1 = new Camera("assets/sprites/camera(11X8).png",217,40,11,8, "right");
    gameObjectsList.push_back(camera1);

    Camera* camera2 = new Camera("assets/sprites/camera(11X8).png",945,170,11,8, "left");
    gameObjectsList.push_back(camera2);

    Camera* camera3 = new Camera("assets/sprites/camera(11X8).png",2,370,11,8, "right");
    gameObjectsList.push_back(camera3);

    Camera* camera4 = new Camera("assets/sprites/camera(11X8).png",197,625,11,8, "upright");
    gameObjectsList.push_back(camera4);


    gameObjectsList.push_back(guard);
}

void StageFour::createAliens(){
    std::pair <int, int> biluPos (40, HEADER_SIZE + 290);
    std::pair <int, int> etemerPos (35, HEADER_SIZE + 270);
    std::pair <int, int> varginhaPos (30, HEADER_SIZE + 310);

    player = new Player(biluPos, etemerPos, varginhaPos);
    gameObjectsList.push_back(player);
}

void StageFour::createDoorSystems(){
    std::pair<int,int> doorOnePosition (780, HEADER_SIZE + 120);
    std::pair<int,int> switchOnePosition (880, HEADER_SIZE + 300);

    std::pair<int,int> doorTwoPosition (163, HEADER_SIZE + 500);
    std::pair<int,int> switchTwoPosition (460, HEADER_SIZE + 350);

    std::pair<int,int> doorThreePosition (780, HEADER_SIZE + 220);
    std::pair<int,int> switchThreePosition (20, HEADER_SIZE + 50);

    gameObjectsList.push_back(new DoorSystem(doorOnePosition,switchOnePosition, "DOWN"));
    gameObjectsList.push_back(new DoorSystem(doorTwoPosition,switchTwoPosition, "RIGHT"));
    gameObjectsList.push_back(new DoorSystem(doorThreePosition,switchThreePosition, "DOWN"));
}

void StageFour::createPapers(){
    gameObjectsList.push_back(new PaperTable("Paper", 880, HEADER_SIZE + 50, 60, 34));
    gameObjectsList.push_back(new PaperTable("Paper", 880, HEADER_SIZE + 520, 60, 34));
    gameObjectsList.push_back(new PaperTable("Paper", 610, HEADER_SIZE + 270, 60, 34));
}

void StageFour::createTables(){
    gameObjectsList.push_back(new Table("assets/sprites/mesa.png", 890, HEADER_SIZE + 360, 60, 34));
    gameObjectsList.push_back(new Table("assets/sprites/mesa.png", 828, HEADER_SIZE + 360, 60, 34));

    gameObjectsList.push_back(new Table("assets/sprites/mesa.png", 890, HEADER_SIZE + 460, 60, 34));
    gameObjectsList.push_back(new Table("assets/sprites/mesa.png", 828, HEADER_SIZE + 460, 60, 34));
}
