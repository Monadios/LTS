#ifndef GAME_OBJECT_FACTORY_H
#define GAME_OBJECT_FACTORY_H

class GameObjectFactory
{
  GameObject& findById(int _id);
  std::vector<GameObject&> getListOfGameObjects();
};

#endif
