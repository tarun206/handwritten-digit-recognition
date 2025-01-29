__kernel long compute_radius (__global int **image)
{
    long curve_radius = 0;
    int current_pixel = image[0][0], next_pixel = 0, pixel_difference = 0, first_spike_pixel = 0, second_spike_pixel = 0;

    for (int i = 0; i < 28; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            if ((j+1) == 28)
                continue;
            else if ((j+1) < 28)
            {
                next_pixel = image[i][j+1];
                pixel_difference = current_pixel - next_pixel;
                if (pixel_difference > 100 && first_spike_pixel == 0)
                    first_spike_pixel = image[i][j+1];
                else if (pixel_difference > 100 && second_spike_pixel == 0)
                     second_spike_pixel = image[i][j+1];

            }
        }
    }
    
    curve_radius = second_spike_pixel - first_spike_pixel;
    return curve_radius;    
}
