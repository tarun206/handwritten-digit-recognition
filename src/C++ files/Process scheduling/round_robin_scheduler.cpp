#include <pthread.h>
#include<sys/types.h>

class round_robin{
protected:
    int thread_counter = 0;
    kernel_management km;
    pthread_t thread_array[2];
public:
    pthread_t* create_threads(bool create_cpu_thread, bool create_gpu_thread)
    {
        int return_value;
        if (create_cpu_thread == true)
        {
            return_value = pthread_create(thread_array[0],,,);
            if (return_value == 0)
                break;
        }
        else if (create_gpu_thread == true)
        {
            return_value = pthread_create(thread_array[1]);
            if (return_value == 0)
                break;
        }
        return thread_array;
    }

    bool join_threads(bool join_cpu_thread, bool join_gpu_thread)
    {
        int return_value = 0;
        if (join_cpu_thread == true)
        {
            return_value = pthread_join(cpu_thread);
            if (return_value == 0)
                return true;
        }
        else if (join_gpu_thread)
        {
            return_value = pthread_join(gpu_thread);
            if (return_value == 0)
                return true;
        }
        return false;
    }
};
