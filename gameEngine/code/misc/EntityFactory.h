#ifndef ENTITY_FACTORY_H
#define ENTITY_FACTORY_H

class EntityFactory
{
 public:
  EntityFactory();
  int generateEntity();
  
 private:
  static int idCounter;
};

#endif
