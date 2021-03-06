#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <map>
#include <typeindex>
#include <vector>
#include <functional>
#include "../Components/Component.h"
#include "../Events/Event.h"

class GameObject
{
public:
  GameObject();
  GameObject(std::vector<Component*> cs);

  int id;

  void addComponent(Component* c);

  template <typename T>
  T* get() {
    auto it = components.find(std::type_index(typeid(T)));
    if (it != components.end()){
      return dynamic_cast<T*>(it->second);
    }
    return nullptr;
  }

private:
  static int idCounter;
  std::map<std::type_index, Component*> components;
};

#endif
