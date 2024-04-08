template <typename... Args>
int sum(const Args &...args)
{
    return (args + ...);
}