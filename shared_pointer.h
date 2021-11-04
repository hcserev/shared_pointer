
template <class T>
class MySharedPtr
{
public:
    MySharedPtr()
    {
        ptr = nullptr;
        contrBlock = new ControlBlock{ 1 };
    }
    MySharedPtr(T* ptr_)
    {
        ptr = ptr_;
        contrBlock = new ControlBlock{ 1 };
    }
    MySharedPtr(const MySharedPtr& ref)
    {
        reset();
        ptr = ref.ptr;
        contrBlock = ref.contrBlock;
        contrBlock->refCounter++;
    }
    MySharedPtr& operator=(const MySharedPtr& ref)
    {
        reset();
        ptr = ref;
        contrBlock = ref.counter;
        contrBlock->refCounter++;
        return *this;
    }
    ~MySharedPtr()
    {
        reset();
    }

    void reset()
    {
        if (contrBlock && --contrBlock->refCounter == 0)
        {
            delete ptr;
            delete contrBlock;
            ptr = nullptr;
            contrBlock = nullptr;
        }
    }
private:
    struct ControlBlock
    {
        int refCounter = 0;
    };
    T* ptr = nullptr;
    ControlBlock* contrBlock = nullptr;
};