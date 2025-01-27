#include <iostream>
#include <string>

struct node{
    string label;
    node *left; // Less than the value being compared.
    node *right; // Greater than the value being compared.
    node * middle; // Equal to the value being compared.
    node *previous; // Pointer to the previous node.
    vector <node*> edges;
};

class decision_tree{
public:
    node* instantiate_root (string label)
    {
        node *root = new node();
        root -> label = label;
        root -> previous = NULL;
        root -> left = NULL;
        root -> right = NULL;
        root -> middle = NULL;
        return root;
    }

    node* insert_node (node* current_node, string label, long number_of_spikes, long radius_of_curve)
    {
        node *new_node = new node();
        new_node -> label = label;
        new_node -> left = NULL;
        new_node -> right = NULL;
        new_node -> middle = NULL;
        new_node -> previous = current_node;
        return new_node;
    }

    node* edit_node (node *current_node, string new_label, long number_of_spikes, long radius_of_curve, node *previous_node)
    {
        current_node -> label = new_label;
        current_node -> left = ;
        current_node -> middle = ;
        current_node -> right = ;
        current_node -> previous = previous_node;
    }

    node* delete_tree (node *root)
    {
        return NULL;
    }
};
