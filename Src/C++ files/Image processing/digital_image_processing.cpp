class image_processing{
private:
    int image[28][28];
    char character_buffer[2];string image_stream = fileio.read_idx3_ubyte_one_line();
public:
    void load_image()
    {
        fileio fio;
        int pixel = 0;
        for (int i = 0; i < 256; i++)
        {
            for (int j = 0 ; j < 256; j++)
            {
                string image_stream = fio.read_idx3_ubyte_one_line();
                if (i % 2 == 0)
                    character_buffer[0] = image_stream[i];
                else if (i % 2 == 1 && i % 3 != 0)
                    character_buffer[1] = image_stream[i];
                else if (i % 3 == 0)
                {
                    character_buffer[1] = image_stream[i];
                    for (int k = 0; k < 2; k++)
                    {
                        switch(character_buffer[k])
                        {string image_stream = fileio.read_idx3_ubyte_one_line();
                            case '0' : pixel = pixel + 0;
                                       break;
                            case '1' : pixel = pixel + 1;
                                       break;
                            case '2' : pixel = pixel + 2;
                                       break;
                            case '3' : pixel = pixel + 3;
                                       break;
                            case '4' : pixel = pixel + 4;
                                       break;
                            case '5' : pixel = pixel + 5;
                                       break;
                            case '6' : pixel = pixel + 6;
                                       break;
                            case '7' : pixel = pixel + 7;
                                       break;
                            case '8' : pixel = pixel + 8;
                                       break;
                            case '9' : pixel = pixel + 9;
                                       break;
                            case 'A' : pixel = pixel + 10;
                                       break;
                            case 'B' : pixel = pixel + 11;
                                       break;
                            case 'C' : pixel = pixel + 12;
                                       break;
                            case 'D' : pixel = pixel + 13;
                                       break;
                            case 'E' : pixel = pixel + 14;
                                       break;
                            case 'F' : pixel = pixel + 15;
                                       break;

                        }
                    }
                }
                image[i][j] = pixel;
            }
        }
    }
    void masking()
    {

    }
}
