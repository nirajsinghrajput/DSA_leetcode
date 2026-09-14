class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0];
        int x2 = rec1[2];
        int x3 = rec2[0];
        int x4 = rec2[2];
        
        int y1 = rec1[1];
        int y2 = rec1[3];
        int y3 = rec2[1];
        int y4 = rec2[3];
        
        if(y1 >= y4 || y3 >= y2 || x1 >= x4 || x3 >= x2){
            return false;
        }

        // if(x1 < x3){
        //     if(x2 < x3){
        //         return false;
        //     }
        //     else if(x2 == x3){
        //         if(x2 < x4){
        //             return false;
        //         }
        //     }
        // }
        // if(x1 == x3){
        //     if(y1 < y3){
        //         return false;
        //     }
        //     else if(y3 < y1){
        //         if(x2 < x4){
        //             return false;
        //         }
        //     }
        // }
        // if(x3 < x1){
        //     if(x3 < x2){
        //         return false;
        //     }
        //     else if(x3 == x2){
        //         if(x4 < x2){
        //             return false;
        //         }
        //     }
        // }
        return true;
    }
};