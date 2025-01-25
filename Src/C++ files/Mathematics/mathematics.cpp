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
        double Y, intermediate_result = 10;
        long iterations = 0;

        while (1)
        {
            /* Explanation of the below statements:
            *  Intermediate result is initialized starting from 10.
            *  The below for loop computes exponents of 10.
            *  If the intermediate result is greater than X,
            *  For, b^Y = X. Where, Y is the exponent to find and X is the result after exponentiation,
            *  it divides the intermediate result with a dividend starting from 2 and increments if the intermediate result does not equal to X,
            *  it increments the dividend.
            *  If the intermediate result is less than X, it increments the iteration. So, that the for loop goes for another exponentiation.
            *  If intermediate result equals X, it is assigned to Y and the while loop breaks.
            */

            for (int i = 0; i < iterations; i++)
                intermediate_result = intermediate_result * 10;

            if (intermediate_result > X)
            {
                long dividend = 2; //To lessen the amount of computation.

                do{
                    intermediate_result = intermediate_result/dividend;
                    dividend++;
                }(intermediate_result != X);

                Y = intermediate_result;
                break;
            }
            else if (intermediate_result < X)
                iterations++;
            else if(intermediate_result == X)
            {
                Y = intermediate_result;
                break;
            }
        }
        return Y;
    }
}
