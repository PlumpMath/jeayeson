/*
  Copyright © 2015 Jesse 'Jeaye' Wilkerson
  See licensing at:
    http://opensource.org/licenses/BSD-3-Clause

  File: test/src/map/main.cpp
  Author: Jesse 'Jeaye' Wilkerson
*/

#include <jeayeson/jeayeson.hpp>
#include <jest/jest.hpp>

#include "map/ctor.hpp"
#include "map/get.hpp"
#include "map/set.hpp"
#include "map/find.hpp"
#include "map/size.hpp"
#include "map/clear.hpp"
#include "map/delim.hpp"
#include "map/has.hpp"

int main()
{
  json_array a{ "[0,1,2]" };
  std::cout << a << std::endl;
  return 0;
  //jest::worker const j{};
  //return j();

  json_value vm
  {
    { "bool", true },
    { "int", 3 },
    { "real", 3.145 },
    { "str", "This is a str" },
    { "null", json_null{} },
    {
      "map",
      {
        { "sub", 42 },
        { "arr_int", { 0, 1, 2, 3, 4 } },
        { "arr_str", { "0", "1", "2", "3", "4" } },
      }
    },
  };
  std::cout << vm << std::endl;
}
