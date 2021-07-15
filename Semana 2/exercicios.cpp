//1- Find Smallest Letter Greater Than Target

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0;
        int j = letters.size() - 1;
        int aux = 0;
        int itarget = (int)target; 
        while(i<j){ 
            int k = i + (j - i)/2; 
            if((int)letters[k]>itarget) 
                j = k; else i = k + 1; } 
        if (letters[letters.size() - 1] <= target) return aux = letters[0] ;
        else return aux = letters[i];
    
    }
};

//2- Guess Number Higher or Lower

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int i = 1;
        int j = n;
        while(i <= j) {
            int k = i + (j-i) / 2;
            if((guess(k))== 1) {i = k + 1;}
            else if((guess(k))==-1) { j = k - 1;}
            else return k;
            }
        return 1;
    }
};



//3- Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;        
        int k;
        while (i < j) {
            k = i + (j - i) / 2;            
            if (target == nums[k])  return k;
            if (target > nums[k])  i = k + 1;
            else j = k - 1;
        }
        if (target > nums[i]) return i + 1 ;
            else return i;
    }
};

//4- Kth Smallest Element in a BST(EXTRA)