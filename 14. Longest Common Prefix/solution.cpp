string longestCommonPrefix(vector<string>& words) {

    string commonPrefix = "";

    for(int characterIndex = 0; characterIndex < words[0].size(); characterIndex++)
    {
        for(auto word : words)
        {
            if(characterIndex == word.size())
            {
                return commonPrefix;
            }
            if(words[0][characterIndex] != word[characterIndex])
            {
                return commonPrefix;
            }
        }
        commonPrefix += words[0][characterIndex];
    }

    return commonPrefix;
}