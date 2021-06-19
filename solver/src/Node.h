#ifndef NODE_H
#define NODE_H

#include <string>;
using namespace std;

class Node
{
private:
    int depth;
    Node *parentNode;
    string branchingVar;
    double branchingVarValue;
    double lowerBound;
    bool isLeaf;
    bool isRoot;
    double calculateLowerBound();

public:
    int getDepth() { return depth; }
    Node *getParentNode() { return parentNode; }
    string getBranchingVar() { return branchingVar; }
    Node(Node *parentNode);
};

#endif