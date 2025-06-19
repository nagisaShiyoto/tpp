#pragma once
#include <iostream>

//change new definition to the class method's definition
void* operator new(std::size_t count);

typedef struct _MemoryNode {
    size_t m_size;
    void* m_memory;
    struct _MemoryNode* m_nextNode;
    static struct _MemoryNode* createNode(size_t size, void* memory_p);
} MemoryNode;

class LinkedMemory {
  public:
    static void* operator new(std::size_t count);
    static void printMemoryData();

  private:
    static MemoryNode* m_firstMemoryNode;
    static void addStart(MemoryNode* newNode);


};
