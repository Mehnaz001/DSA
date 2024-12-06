/*Delete a node from BST
Difficulty: MediumAccuracy: 40.7%Submissions: 124K+Points: 4
Given a Binary Search Tree and a node value x. Delete the node with the given value x from the BST. If no node with value x exists, then do not make any change. Return the root of the BST after deleting the node with value x. Do not make any update if there's no node with value x present in the BST.*/

Node *deleteNode(Node *root, int target) {
        // your code goes here
        
        //base condition
        if(!root)
        return NULL;
        
        if(root->data>target) {
            root->left = deleteNode(root->left,target);
            return root;
        }
        
        else if(root->data<target) {
            root->right = deleteNode(root->right,target);
            return root;
        }
        
        else {
            //Leaf Child
            if(!root->right && !root->left) {
                delete root;
                return NULL;
            }
            
            // 1 child exist
            else if(!root->right) { //Left child exist
               Node *temp = root->left;
                delete root;
                return temp; 
            }
            else if(!root->left) { //Right child exist
                Node *temp = root->right;
                delete root;
                return temp;
            }
            //Both two child exist
            else {
                //Find the greatest element in left
                Node* parent = root;
                Node* child = root->left;
                
                //Rightmost Node tak phuchna hai
                while(child->right) {
                    parent = child;
                    child = child->right;
                }
                
                if(root!=parent) {
                   parent->right = child->left;
                   child->left = root->left;
                   child->right = root->right;
                   delete root;
                   return child;
                }
                else {
                    child->right = root->right;
                    delete root;
                    return child;
                }
            }
        }
    }