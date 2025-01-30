__kernel int train_tree (__global node* root, __global vector<double> entropy_vector)
{
    for (int i = 0; i < 10; i++)
        root -> edges.push_back(0);
    for (int i = 0; i < 10; i++)
    {
        if (entropy_vector.at(i) >= 0.3 && entropy_vector.at(i) <= 0.37)
            return 0;
        else if (entropy_vector.at(i) >= 0.37 && entropy_vector.at(i) <= 0.43)
            return 1;
        else if (entropy_vector.at(i) >= 0.43 && entropy_vector.at(i) <= 0.49)
            return 2;
        else if (entropy_vector.at(i) >= 0.49 && entropy_vector.at(i) <= 0.56)
            return 3;
        else if (entropy_vector.at(i) >= 0.56 && entropy_vector.at(i) <= 0.62)
            return 4;
        else if (entropy_vector.at(i) >= 0.62 && entropy_vector.at(i) <= 0.7)
            return 5;
        else if (entropy_vector.at(i) >= 0.7 && entropy_vector.at(i) <= 0.76)
            return 6;
        else if (entropy_vector.at(i) >= 0.76 && entropy_vector.at(i) <= 0.8)
            return 7;
        else if (entropy_vector.at(i) >= 0.8 && entropy_vector.at(i) <= 0.87)
            return 8;
        else if (entropy_vector.at(i) >= 0.87 && entropy_vector.at(i) <= 0.92)
            return 9;
    }
}
