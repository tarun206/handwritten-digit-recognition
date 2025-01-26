struct node{
    string label;
    bool comaparator_array = {false,false,false}; //Format of array: boolean values for: < (is less than), > (is greater than), = (is equal to).
    int comparator_value;
    vector<node*> edges;
};

class tree{
public:
    node* instantiate_root(string label_to_insert, bool is_greater_than, bool is_less_than, bool is_equal_to, int comparator_value)
    {
        node *root = new node();
        root -> label = label_to_insert;
        root -> comparator_array [0] = is_less_than;
        root -> comparator_array [1] = is_greater_than;
        root -> comparator_array [2] = is_equal_to;
        root -> comparator_value = comparator_value;
        return root;
    }
    node* create_new_node (node *current_node, string label_to_insert, bool is_greater_than, bool is_less_than, bool is_equal_to, int comparator_value)
    {
        node *new_node = new node();
        new_node -> label = label_to_insert;
        new_node -> comparator_array [0] = is_less_than;
        new_node -> comparator_array [1] = is_greater_than;
        new_node -> comparator_array [2] = is_equal_to;
        new_node -> comparator_value = comparator_value;
        edges.push_back(new_node);
        return new_node;
    }
};
