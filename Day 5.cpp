//gfg 160 days challenge problem Number of occurence
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) 
    {
       int count=0;
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]==target)
           {
               count++;
           }
       }
       return count;
    }
};


//gfg 160 days challenge problem Sorted and rotated minimum
class Solution 
{
  public:
    int findMin(vector<int>& arr) 
    {
        int min=arr[0];
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]<min)
           {
               min=arr[i];
           }
       }
       return min;
    }
};


//gfg 160 days challenge problem Search in rotated sorted array
class Solution {
  public:
    int search(vector<int>& arr, int key) 
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==key)
            {
                return i;
            }
        }
        return -1;
    }
};
