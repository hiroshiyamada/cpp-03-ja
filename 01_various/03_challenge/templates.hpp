bool allTrue()
{
    return true;
}

template <typename... Args>
bool allTrue(bool head, Args... args)
{
    return head && allTrue(args...);
}
