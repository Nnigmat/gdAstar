#ifndef GDASTAR_H
#define GDASTAR_H

#include <vector>
#include <utility>

#include "core/reference.h"
#include "stlastar.h"

using namespace std;


class MapSearchNode {
public:
	std::vector< std::pair<int, int> > *_map;
	int x; // the (x,y) positions of the node
	int y;

	MapSearchNode();
	MapSearchNode(int px, int py, std::vector< std::pair<int, int> > *pmap);

	int GetMap(int x, int y);
	float GoalDistanceEstimate(MapSearchNode &nodeGoal);
	bool IsGoal(MapSearchNode &nodeGoal);
	bool GetSuccessors(AStarSearch<MapSearchNode> *astarsearch, MapSearchNode *parent_node);
	float GetCost(MapSearchNode &successor);
	bool IsSameState(MapSearchNode &rhs);

	void PrintNodeInfo();
};


class gdAstar : public Reference {
	GDCLASS(gdAstar, Reference);

protected:
	static void _bind_methods();

	AStarSearch<MapSearchNode> astarsearch;
	std::vector< std::pair<int, int> > astarMap;

public:
	gdAstar();
	~gdAstar();

	void AddPoint(int x, int y);
	void ClearPoints();
	PoolVector2Array FindPath(int x0, int y0, int x1, int y1);
};

#endif
