class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        double a = 0;
        int count = 0;
        double b = 0;
        int index1 = (nums1.size() + nums2.size()) / 2;
        int index2 = index1 - 1;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                if (count == index1) {
                    a = nums1[i];
                }

                if (count == index2) {
                    b = nums1[i];
                }
                i++;
                count++;
            } else {

                if (count == index1) {
                    a = nums2[j];
                }

                if (count == index2) {
                    b = nums2[j];
                }
                j++;
                count++;
            }
        }

        while (i < nums1.size()) {

            if (count == index1) {
                a = nums1[i];
            }

            if (count == index2) {
                b = nums1[i];
            }
            i++;
            count++;
        }

        while (j < nums2.size()) {

            if (count == index1) {
                a = nums2[j];
            }

            if (count == index2) {
                b = nums2[j];
            }
            j++;
            count++;
        }

        if ((nums1.size() + nums2.size()) % 2 == 1) {
            return a;
        } else {
            return (a + b) / 2.0;
        }
    }
};
