#ifndef GRAPHADJLIST_H
#define GRAPHADJLIST_H
#include<vector>
#include<iostream>
#include "Tree.h"
using namespace std;

class GraphAdjList{
private:
    vector<vector<int> > graph;
    int sz;
    bool directed;
    bool multi;
public:
    GraphAdjList();
    GraphAdjList(vector<vector<int> >& graph, bool directed, bool multi);
    void print();
    vector<vector<int> > getGraph()const;
    bool isDirected()const;
    bool isMulti()const;
    Tree BFSSpanningTree(int vertex);
    vector<int> parents();
    bool isConnected();
    bool isThereEulerLoop();
    bool isThereEulerPath();
    vector<int> findEulerLoop();
};
#endif // GRAPHADJLIST_H
