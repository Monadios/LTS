#ifndef COMPONENT_H
#define COMPONENT_H

#include "../misc/Msg.h"

class Component
{
  virtual void sendMessage( Msg msg ) = 0;
};

#endif
