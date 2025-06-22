#pragma once
#include <iostream>

//change new definition to the class method's definition
void* operator new(std::size_t count) ;
void operator delete(void* ptr) throw();

typedef struct _MemoryNode {
    size_t m_size;
    void* m_memory;
    struct _MemoryNode* m_nextNode;
    int m_place;
} MemoryNode;

class LinkedMemory {
  public:
    /*
    allocate new memory 

    @param count: the size of wanted new memory
    @param return: pointer to the allocated memory
    */
    static void* operator new(std::size_t count);
    /*
    deallocate memory

    @param ptr: the ptr to deallocate
    */
    static void operator delete(void* ptr) throw();

   
    // print all memory's size and place in memory
    static void printMemoryData();

  private:
    static MemoryNode* m_firstMemoryNode;
    static int m_counter;

    // create the memory node
    static MemoryNode* createNode(size_t size, void* memory_p);

    // add node to the starts
    static void addStart(MemoryNode* newNode);

    /*
    find node before a specify node of memory

    @param ptr: the wanted pointer
    */
    static MemoryNode* findBeforeMemory(void* pointer);

    // delete node from list
    static void removeFromList(void* toDelete);


};
