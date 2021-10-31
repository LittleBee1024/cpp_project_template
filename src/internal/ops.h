/**
 * @file op.h
 * @author Little Bee (littlebee1024@outlook.com)
 * @brief Funtions for number operations.
 * @version 0.1
 * @date 2021-10-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

namespace DEMO
{

/**
 * @brief The operation class offers static functions about number operations.
 * 
 */
class Op
{
public:
   /**
    * @brief Sum two numbers
    * 
    * @param f1 Sum left operand
    * @param f2 Sum right operand
    * @return double Sum result
    */
   static double add_numbers(const double f1, const double f2);

   /**
    * @brief Subtract two numbers
    * 
    * @param f1 Sub left operand
    * @param f2 Sub right operand
    * @return double Subtract result
    */
   static double subtract_numbers(const double f1, const double f2);
};

}
