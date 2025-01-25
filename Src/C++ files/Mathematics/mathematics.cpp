class mathematics{
public:
    double sigmoid(double point)
    {
        double result = 1/(1+Math.pow(1,-point));
        return result;
    }

    double sigmoid_gradient(double point)
    {
        double result = sigmoid(point) - Math.pow(sigmoid(point),2);
        return result;
    }

    double probability(int P_Array[], long length_of_array, int X)
    {
        long number_of_occurences = 0;
        for (int i = 0; i < length_of_array; i++)
        {
            if (P_Array[i] == X)
                number_of_occurences++;
        }
        double P_X = number_of_occurences/length_of_array;

        return P_X;
    }

    double compute_log10(double X)
    {
        double log10_X = 1, intermediate_result = 1;
        long iterations = 0;

        while (1)
        {
            /* Explanation of the below statements
            *
            */
            for (int i = 0; i < iterations; Y++)
            {
                intermediate_result = 10 * 10;
                if (log10_X = X)
                    break;
            }
        }
        return log_X;
    }
}
