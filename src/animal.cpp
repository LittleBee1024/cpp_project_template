#include "./animal.h"

#include <iostream>

namespace DEMO
{

Animal::Animal(const char* name):
   m_name(name),
   m_weight(0)
{}

void Animal::set_weight(int weight)
{
   m_weight = weight;
}

Dog::Dog(const char* name):
   Animal(name)
{}

void Dog::dump()
{
   std::cout << "Dog name: " << m_name << ", weight: " << m_weight << std::endl;
}

Bird::Bird(const char* name):
   Animal(name)
{}

void Bird::dump()
{
   std::cout << "Bird name: " << m_name << ", weight: " << m_weight << std::endl;
}

}
