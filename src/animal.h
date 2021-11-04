/**
 * @file animal.h
 * @author Little Bee (littlebee1024@outlook.com)
 * @brief Base and inherited classes about animal.
 * @version 0.1
 * @date 2021-10-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include <string>

namespace DEMO
{

/**
 * @brief Base class for animal
 * 
 */
class Animal
{
public:
   /**
    * @brief Construct a new Animal object
    * 
    * @param name The animal name
    */
   explicit Animal(const char* name);
   virtual ~Animal() = default;

public:
   /**
    * @brief virtual function to dump animal information
    * 
    */
   virtual void dump() = 0;
   /**
    * @brief Set the weight object
    * 
    * @param weight The animal weight
    */
   void set_weight(int weight);

protected:
   std::string m_name;
   int m_weight;
};

/**
 * @brief Dog class inherits from \ref Animal class
 * 
 */
class Dog: public Animal
{
public:
   /**
    * @brief Construct a new Dog object
    * 
    * @param name The dog name
    */
   explicit Dog(const char* name);

public:
   /**
    * @brief Dump the infomation of the Dog object
    * 
    */
   void dump() override;
};

/**
 * @brief Bird class inherits from \ref Animal class
 * 
 */
class Bird: public Animal
{
public:
   /**
    * @brief Construct a new Bird object
    * 
    * @param name The bird name
    */
   explicit Bird(const char* name);

public:
   /**
    * @brief Dump the infomation of the Bird object
    * 
    */
   void dump() override;
};

}
