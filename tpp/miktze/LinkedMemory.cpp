#include "LinkedMemory.h"

MemoryNode* LinkedMemory::m_firstMemoryNode = nullptr;

void* LinkedMemory::operator new(std::size_t count) {
    void* newData = malloc(count);
    if (newData == nullptr) {
        throw std::bad_alloc();
    }
    LinkedMemory::addStart(MemoryNode::createNode(count, newData));
    return newData;
}

void LinkedMemory::printMemoryData() {
}

void LinkedMemory::addStart(MemoryNode* newNode) {
    newNode->m_nextNode = LinkedMemory::m_firstMemoryNode;
    LinkedMemory::m_firstMemoryNode = newNode;
}

void* operator new(std::size_t count) {
    return LinkedMemory::operator new(count);
}

_MemoryNode* _MemoryNode::createNode(size_t size, void* memory_p) {
    MemoryNode* newNode = (MemoryNode*)malloc(sizeof(MemoryNode));
    newNode->m_memory = memory_p;
    newNode->m_size = size;
    newNode->m_nextNode = nullptr;
    return newNode;
}
