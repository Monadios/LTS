#include "../misc/EntityFactory.h"

EntityFactory::EntityFactory()
{
}

int EntityFactory::idCounter = 0;


int EntityFactory::generateEntity()
{
  return Entity(idCounter++);
}
