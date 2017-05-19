#include "game_scene.hpp"
#include "player.hpp"
#include "scene.hpp"
#include "engine.hpp"
#include "wall.hpp"

using namespace engine;

GameScene::GameScene(int id) : Scene(id){

}

GameScene::~GameScene(){}

void GameScene::draw(){
    std::vector<GameObject*>::iterator it;
    for(it=gameObjectsList.begin() ; it < gameObjectsList.end(); it++) {
        std::cout << "AQUI" << std::endl;
        (*it)->draw();
    }
}
void GameScene::update(double timeElapsed){
    std::vector<GameObject*>::iterator it;
    for(it=gameObjectsList.begin() ; it < gameObjectsList.end(); it++) {
        (*it)->update(timeElapsed);
    }
}
void GameScene::load(){
    gameObjectsList.push_back(new Player());
}
void GameScene::unload(){
}
