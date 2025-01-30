struct node{
    string label;
    node *previous;
    node *left;
    node *right;
    vector<node*> edges;// Pointer to the previous node.
};

class decision_forest{
public:
    mathematics m;
    node* instantiate_root (string label)
    {
        node *root = new node();
        root -> label = label;
        edges.push_back(NULL);
        return root;
    }

    node* insert_node (node* current_node, string label, long number_of_spikes, long radius_of_curve)
    {
        node *new_node = new node();
        new_node -> label = label;
        new_node -> previous = current_node;
        edges.push_back(new_node);
        current_node = new_node;
        return new_node;
    }

    node* edit_node (node *current_node, long index_to_edit, string label_to_edit)
    {
        current_node -> label = new_label;
        node *temp_node = current_node -> edges.at(index_to_edit);
        temp_node -> label = label_to_edit;
        current_node = current_node -> edges.at(index_to_edit);
        return current_node;
    }

    int* convert_vector_into_array(vector<long> vector_to_turn)
    {
        long converted_array[vector_to_turn.size()];
        for (int i = 0; i < vector_to_turn.size(); i++)
                converted_array[i] = vector_to_turn.at(i);
        return converted_array;
    }

    vector<double> calculate_splitting_criteria_and_add_to_vector (vector<long> spike_dataset, vector<long> radius_dataset, long X)
    {
        long spike_array[] = convert_vector_into_array(spike_dataset);
        long radius_array[] = convert_vector_into_array(radius_dataset);
        vector<double> entropy_of_spikes_and_radii_vector;
        double entropy_of_spikes = 0, entropy_of_radii = 0;

        for (int i = 0; i < 784; i++)
        {
            entropy_of_spikes = entropy_of_spikes + m.compute_information_entropy(spike_array,spike_array[i]);
            entropy_of_radii = entropy_of_radii + m.compute_information_entropy(radius_array,radius_array[i]);
            entropy_of_spikes_and_radii_vector.push_back(entropy_of_spikes*entropy_of_radii);
        }

        return entropy_of_spikes_and_radii_vector;
    }
};
