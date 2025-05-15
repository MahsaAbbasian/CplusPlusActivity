std::string& reverseString(std::string& s) {
    size_t left = 0, right = s.size() - 1;
    
    while (left < right) {
        std::swap(s[left], s[right]);
        left++;
        right--;
    }
    
    return s; // Return modified string (same reference)
}