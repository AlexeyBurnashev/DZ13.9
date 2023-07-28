#include "Graph.h"

int main() {

    Graph g;

    g.addVertex(0, "Oleg");
    g.addVertex(1, "Nikita");
    g.addVertex(2, "Nastya");
    g.addVertex(3, "Vanya");
    g.addVertex(4, "Ghenya");


    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 1);

    g.findMinDistancesFloyd();

    g.showParsWhisMaxDistance(3);

    return 0;
}