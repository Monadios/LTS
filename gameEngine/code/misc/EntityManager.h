#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H

#include <map>
#include "../misc/Entity.h"
#include "../misc/EntityFactory.h"

typedef int id;

class EntityManager
{
 public:
  Entity& findById(id _id);
  std::vector<Entity> getListOfEntities();
  id generateEntity(); 
 private:
  EntityFactory factory;
  std::map<id, Entity> entities;
  std::vector<id> ids;
};

#endif
