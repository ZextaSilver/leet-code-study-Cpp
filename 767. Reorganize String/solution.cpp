
string reorganizeString(string s) {
    int n = s.length();
    
    // Count the frequency of each character in the input string
    int freq[26] = {0};
    for (char c : s) {
        freq[c-'a']++;
    }
    
    // Create a priority queue to store the characters by their frequency
    priority_queue<pair<int, char>> pq;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            pq.push({freq[i], 'a'+i});
        }
    }
    
    // Construct the output string by appending alternating characters
    string output;
    char lastChar = '-';
    while (!pq.empty()) {
        auto [count1, char1] = pq.top();
        pq.pop();
        if (lastChar == char1) {
            if (pq.empty()) {
                // Impossible to rearrange characters without adjacent characters being the same
                return "";
            }
            auto [count2, char2] = pq.top();
            pq.pop();
            output += char2;
            count2--;
            if (count2 > 0) {
                pq.push({count2, char2});
            }
            pq.push({count1, char1});
        } else {
            output += char1;
            count1--;
            if (count1 > 0) {
                pq.push({count1, char1});
            }
        }
        lastChar = output.back();
    }
    
    return output;
}