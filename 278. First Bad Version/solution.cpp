int firstBadVersion(int n) {
    
    return binarySearch(1, n);
}

int binarySearch(int startPoint, int endPoint)
{
    if(endPoint > startPoint)
    {
        long longStartPoint = (long) startPoint;
        long longEndPoint = (long) endPoint;
        long longmidPoint = (longStartPoint + longEndPoint) / 2;
        int midPoint = int(longmidPoint);

        if(isBadVersion(midPoint - 1) == false && isBadVersion(midPoint) == false && isBadVersion(midPoint + 1) == true) //前对后错
        {
            return midPoint + 1;
        }
        if(isBadVersion(midPoint - 1) == false && isBadVersion(midPoint) == true && isBadVersion(midPoint + 1) == true) //前对后错
        {
            return midPoint;
        }
        if(isBadVersion(midPoint - 1) == true && isBadVersion(midPoint) == true && isBadVersion(midPoint + 1) == true) //前后都错
        {
            return binarySearch(startPoint, midPoint - 1);
        }
        if(isBadVersion(midPoint - 1) == false && isBadVersion(midPoint) == false && isBadVersion(midPoint + 1) == false) //前后都对
        {
            return binarySearch(midPoint + 1, endPoint);
        }
    }

    return 1;
}