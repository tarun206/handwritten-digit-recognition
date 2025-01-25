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
}
