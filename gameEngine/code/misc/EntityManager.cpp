#include "../misc/EntityFactory.h"

EntityManager::EntityManager()
{
}

id EntityManager::generateEntity()
{
  Entity ent = factory.generateEntity();
  id id = ent.id;
  entities[id] = ent;
  ids.add(id);
  return id;
}


Entity& EntityManager::findById(id _id)
{
  return entities[_id];
}

std::vector<id> EntityManager::getListOfEntities()
{
  return ids;
}
