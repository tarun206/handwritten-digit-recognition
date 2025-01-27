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
    mathematics m;
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

    node* edit_node (node *current_node, string new_label, long number_of_spikes, long radius_of_curve, node *previous_node, node *left_node_to_put, node *right_node_to_put, node *middle_node_to_put)
    {
        current_node -> label = new_label;
        current_node -> left = left_node_to_put;
        current_node -> middle = middle_node_to_put;
        current_node -> right = right_node_to_put;
        current_node -> previous = previous_node;
        return current_node;
    }

    node* delete_tree (node *root)
    {
        node* current = root;
        while (current != NULl)
        {

        }

        return NULL;
    }

    int* convert_vector_into_array(vector<long> vector_to_turn)
    {
        long converted_array[vector_to_turn.size()];
        for (int i = 0; i < vector_to_turn.size(); i++)
                converted_array[i] = vector_to_turn.at(i);
        return converted_array;
    }

    bool calculate_splitting_criteria (vector<long> spike_dataset, vector<long> radius_dataset, long X)
    {
        long spike_array[] = convert_vector_into_array(spike_dataset);
        long radius_array[] = convert_vector_into_array(radius_dataset);
        double P_X = 0, log10_P_X = 0, spike_entropy = 0, radius_entropy = 0;

        for (int i = 0; i < spike_dataset.size(); i++)
        {
            P_X = m.probability(spike_array, spike_dataset.size(), X);
            log10_P_X = m.compute_log10(P_X);
            spike_entropy = entropy + (P_X * log10_P_X);
        }

        for (int j = 0; j < radius_dataset.size(); j++)
        {
            P_X = m.probability(spike_array, spike_dataset.size(), X);
            log10_P_X = m.compute_log10(P_X);
            radius_entropy = entropy + (P_X * log10_P_X);
        }

        if ((spike_entropy + radius_entropy) >= 0.53)
            return true;

        return false;
    }
    node* train_decision_tree(vector<long> spike_dataset. vector<long> radius_dataset)
    {
        node *root = instantiate_root("initial label");
        node *current_node = root;
        node *new_node = insert_node();
        return root;
    }
};
