/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(!node)
        {
            return node;
        }
        la=ha.find(node->label);
        if(la==ha.end())
        {
            UndirectedGraphNode *newnode= new UndirectedGraphNode(node->label);
            ha.insert(pair<int,UndirectedGraphNode *>(node->label,newnode));
            int size=node->neighbors.size();
            for(int i=0;i<size;i++)
            {
                newnode->neighbors.push_back(cloneGraph(node->neighbors[i]));
            }
        }
        la=ha.find(node->label);
        return la->second;
    }
private:
    unordered_map<int,UndirectedGraphNode *> ha;
    unordered_map<int,UndirectedGraphNode *>::iterator la;
};