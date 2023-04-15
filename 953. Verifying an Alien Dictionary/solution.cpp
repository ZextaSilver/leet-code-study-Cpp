
bool isAlienSorted(vector<string>& words, string order) 
{
    unordered_map<char, int> alienDictionary;
    for (int i = 0; i < order.length(); i++) {
        alienDictionary[order[i]] = i;
    }
    
    for (int i = 0; i < words.size() - 1; i++) {
        if (compareWords(words[i], words[i+1], alienDictionary) > 0) {
            return false;
        }
    }
    
    return true;
}

int compareWords(string str1, string str2, unordered_map<char, int> dictionary)
{
    int n1 = str1.size(), n2 = str2.size();
    int i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(str1[i] != str2[j])
        {
            return dictionary[str1[i]] > dictionary[str2[j]] ? 1 : 0;
        }
        i++;
        j++;
    }

    return n1 > n2 ? 1 : 0;

}