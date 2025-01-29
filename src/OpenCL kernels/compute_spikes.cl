__kernel long count_spikes(__global int** image)
{
    long spike_count = 0;
    int  previous_pixel = 0, current_pixel = image[0][0], pixel_difference = 0;

    for (int i = 0; i < 28; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            if ( j+1 == 28)
                continue;
            else if (j+1 < 28)
            {
                pixel_difference = current_pixel - previous_pixel;
                if (pixel_difference > 100)
                    spike_count ++;
            }
        }
    }
}
