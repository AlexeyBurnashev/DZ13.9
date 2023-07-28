#pragma once
#include <string>

#define SIZE 10
#define VERYBIGINT 1000000000

class Graph {
public:
    Graph();

    void addVertex(int vnumber, std::string name);

    void addEdge(int v1, int v2, int weight);

    void delVertex(int vnumber);

    void delEdge(int v1, int v2);
    void findMinDistancesFloyd();
    void showParsWhisMaxDistance(int distance);

private:
    struct Person {
        int _number;
        std::string _name;

        Person(int num, std::string name) {
            _number = num;
            _name = name;
        }
        Person() {
            _number = VERYBIGINT;
            _name = "";
        }
    };

    Person persons[SIZE];
    bool edgeExists(int v1, int v2);
    bool vertexExists(int v);

    int matrix[SIZE][SIZE];
    int weights[SIZE][SIZE];

    int vertexes[SIZE];
    int vertexCount;
};