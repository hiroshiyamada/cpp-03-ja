template <typename T>
T clamp(T comp_val, T min_val, T max_val){
    if(comp_val < min_val){
        return min_val;
    }else if(comp_val > max_val){
        return max_val;
    }else{
        return comp_val;
    }
}