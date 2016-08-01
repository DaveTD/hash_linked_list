#ifndef HASH_LIST_
#define HASH_LIST_

#include <stdint.h>

typedef struct HashList
{
  int length; 
  unsigned long bucket_interval;
  struct HashListNode* next;
  struct HashListNode* last;
  struct HashListNode** buckets;
} HashList;

typedef struct HashListNode
{
  uint64_t hash;
  struct HashListNode* next;
  struct HashListNode* bucket_next;
  struct HashListNode* bucket_previous;
} HashListNode;

void hl_initialize(HashList *list, int query_rows);
void print_list_details(HashList *list);
void increment_length(HashList *list);
uint64_t hl_first(HashList *list);
int find_target_bucket(uint64_t passed_hash, unsigned long interval);

HashListNode* hl_insert_or_find(HashList *list, uint64_t passed_hash);
HashListNode* hl_find_node(HashList *list, uint64_t passed_hash);

#endif // HASH_LIST_
