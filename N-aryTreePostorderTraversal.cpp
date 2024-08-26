class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> postorder;
        stack<Node*> st1,st2;
        if(root==NULL) return postorder;
        st1.push(root);
        while(!st1.empty()){
            Node* node = st1.top();
            st1.pop();
            st2.push(node);
            for(auto child: node->children){
                if(child!=nullptr){
                    st1.push(child);
                }
            }
        }
        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
    }
};
