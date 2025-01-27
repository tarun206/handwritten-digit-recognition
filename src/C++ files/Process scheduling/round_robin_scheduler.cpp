#include <pthread.h>
#include<sys/types.h>

class round_robin{
protected:
    int thread_counter = 0;
    kernel_management km;
    pthread_t cpu_thread, gpu_thread;
public:
    bool create_threads(bool create_cpu_thread, bool create_gpu_thread)
    {
        int return_value;
        if (create_cpu_thread == true)
        {
            return_value = pthread_create(cpu_thread,,,);
            if (return_value == 0)
                return true;
        }
        else if (create_gpu_thread == true)
        {
            return_value = pthread_create(gpu_thread,,run_kernel,);
            if (return_value == 0)
                return true;
        }
        return false;
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
