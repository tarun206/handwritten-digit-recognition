class kernel_management{
protected:
    string kernel_stream;
public:
    bool run_kernel (FILE *path_to_file)
    {
        kernel_stream = fileio.read_kernel_file(path_to_file);

        return true;
    }
};
