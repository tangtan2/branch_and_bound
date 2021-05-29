#ifndef TREE_H
#define TREE_H

#include "Node.h";

class Tree
{
private:
    Node *root;

public:
    Node *getRoot() { return root; }
};

#endif