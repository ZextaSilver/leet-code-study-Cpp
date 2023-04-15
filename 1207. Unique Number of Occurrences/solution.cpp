bool uniqueOccurrences(vector<int>& arr) {
    map<int, int> occurrenceMap;
    vector<int> occurrenceCount;

    for(auto number : arr)
    {
        if(occurrenceMap.find(number) != occurrenceMap.end())
        {
            occurrenceMap[number] += 1;
        }
        else
        {
            occurrenceMap.insert(pair<int, int>(number, 1));
        }
    }

    for(auto pair : occurrenceMap)
    {
        occurrenceCount.push_back(pair.second);
    }
    
    return areOccurrencesUnique(occurrenceCount);
}

bool areOccurrencesUnique(vector<int> occurrencesList)
{
    set<int> uniqueCount(begin(occurrencesList),end(occurrencesList));

    return occurrencesList.size() == uniqueCount.size();
}