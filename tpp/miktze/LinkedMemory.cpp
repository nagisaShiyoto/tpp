#include "LinkedMemory.h"

MemoryNode* LinkedMemory::m_firstMemoryNode = nullptr;
int LinkedMemory::m_counter = 0;

void* LinkedMemory::operator new(std::size_t count) {
    void* newData = malloc(count);
    if (newData == nullptr) {
        throw std::bad_alloc();
    }
    LinkedMemory::addStart(LinkedMemory::createNode(count, newData));
    return newData;
}

void LinkedMemory::operator delete(void* ptr) throw() {
    LinkedMemory::removeFromList(ptr);
    free(ptr);
}

void LinkedMemory::printMemoryData() {
    MemoryNode* curr = LinkedMemory::m_firstMemoryNode;
    while (curr != nullptr) {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "place in memory: " << curr -> m_memory << std::endl;
        std::cout << "size: " << curr -> m_size << std::endl;
        std::cout << "place: " << curr -> m_place << std::endl;
        std::cout << "---------------------------------" << std::endl;

        curr = curr->m_nextNode;
    }
}

void LinkedMemory::addStart(MemoryNode* newNode) {
    newNode->m_nextNode = LinkedMemory::m_firstMemoryNode;
    LinkedMemory::m_firstMemoryNode = newNode;
    LinkedMemory::m_counter++;
}

MemoryNode* LinkedMemory::findBeforeMemory(void* pointer) {
    MemoryNode* temp = LinkedMemory::m_firstMemoryNode;

    while (temp != nullptr && temp->m_nextNode != nullptr && temp->m_nextNode->m_memory != pointer) {
        temp = temp->m_nextNode;
    }
    if (temp == nullptr || temp->m_nextNode == nullptr) {
        // to-do: find error
        throw std::bad_alloc();
    }
    return temp;
}

void LinkedMemory::removeFromList(void* toDelete) {
    MemoryNode* beforeDelete = LinkedMemory::m_firstMemoryNode;
    MemoryNode* toDeleteNode = LinkedMemory::m_firstMemoryNode;
    //first node
    if (toDeleteNode->m_memory == toDelete) {
        LinkedMemory::m_firstMemoryNode = toDeleteNode->m_nextNode;
        free(toDeleteNode);
        return;
    }
    beforeDelete = LinkedMemory::findBeforeMemory(toDelete);
    toDeleteNode = beforeDelete->m_nextNode;
    beforeDelete->m_nextNode = beforeDelete->m_nextNode->m_nextNode;
    free(toDeleteNode);
}

void* operator new(std::size_t count) {
    return LinkedMemory::operator new(count);
}

void operator delete(void* ptr) throw() {
    return LinkedMemory::operator delete(ptr);
}

_MemoryNode* LinkedMemory::createNode(size_t size, void* memory_p) {
    MemoryNode* newNode = (MemoryNode*)malloc(sizeof(MemoryNode));
    if (newNode == nullptr) {
        free(memory_p);
        throw std::bad_alloc();
    }
    newNode->m_memory = memory_p;
    newNode->m_size = size;
    newNode->m_nextNode = nullptr;
    newNode->m_place = LinkedMemory::m_counter;
    return newNode;
}
