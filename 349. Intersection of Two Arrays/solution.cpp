vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> intersectionPoint;

    set<int> setNums1(begin(nums1), end(nums1));
    set<int> setNums2(begin(nums2), end(nums2));

    set_intersection(setNums1.begin(), setNums1.end(), 
                        setNums2.begin(), setNums2.end(),
                        inserter(intersectionPoint, intersectionPoint.begin()));

    return intersectionPoint;
}