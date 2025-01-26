class round_robin{
protected:
    int thread_counter = 0;
    kernel_management km;
    pthread_t cpu_thread, gpu_thread;
public:
    bool create_threads(bool create_cpu_thread, bool create_gpu_thread)
    {
        if (create_cpu_thread == true)
        {
            pthread_t cpu_thread;
            thread_array[0] = cpu_thread;
        }

        else if (create_gpu_thread == true)
        {
            pthread_t gpu_thread;
            thread_array[1] = gpu_thread;
        }
        return true;
    }

    bool schedule_threads (bool schedule_cpu_thread, bool schedule_gpu_thread)
    {
        if (schedule_cpu_thread == true)
        {
            pthread_create(thread_array[0],,,);
            return true;
        }
        else if (schedule_gpu_thread == true)
        {
            pthread_create(thread_array[1],,km.run_kernel(),);
            return true;
        }
        return false;
    }

    bool join_threads(bool join_cpu_thread, bool join_gpu_thread)
    {
        if (join_cpu_thread == true)
        {
            cpu_thread;
        }

        else if (join_gpu_thread)
        {
            gpu_thread;
        }

        return false;
    }
};
