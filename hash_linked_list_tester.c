#include <stdio.h>
#include "hash_linked_list.h"

void main() 
{
  HashList test;
  hl_initialize(&test, 1000000);

  hl_insert_or_find(&test, 2269226084916219);
  hl_insert_or_find(&test, 2269226084916220);
  hl_insert_or_find(&test, 2269226084916221);
  hl_insert_or_find(&test, 2269226084916220);
  hl_insert_or_find(&test, 2269226084916222);

  hl_insert_or_find(&test, 222);
  hl_insert_or_find(&test, 333);
  hl_insert_or_find(&test, 2828300503);
  hl_insert_or_find(&test, 222);
  hl_insert_or_find(&test, 23);

  print_list_details(&test);
  return;
}