class round_robin{
protected:
    pthread_t thread_array [2];
    int thread_counter = 0;
public:
    bool create_threads()
    {
        if (thread_counter == 0)
        {
            pthread_t cpu_thread;
            thread_array[0] = cpu_thread;
            thread_counter++;
        }

        else if (thread_counter == 1)
        {
            pthread_t gpu_thread;
            thread_array[1] = gpu_thread;
            thread_counter++;
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
            pthread_create(thread_array[1],,,);
            return true;
        }
        return false;
    }
};
