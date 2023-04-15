/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

vector<int> preorder(Node* root) {
    
    //keep checking the first non-null node in vector<children>, if no more then push into vector<result>
    //record the current node and search itsown child, if no child, move onto the next node in the same child vector

    // Node* p = root;
    vector<int> result;

    if(root)
    {
        preorderNode(root, result);
    }

    return result;
}

void preorderNode(Node* p, vector<int> &result)
{
    result.push_back(p->val);
    for(auto node : p->children)
    {
        if(node)
        {
            preorderNode(node, result);
        }
    }
}