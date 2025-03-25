class Solution {
    public String convertToBase7(int num) {
        if(num==0){
            return "0";
        }
        StringBuilder res=new StringBuilder();
         boolean neg=num<0;
        num=Math.abs(num);
       
        while(num>0){
            res=res.append(num%7);
            num=num/7;
        }
        if(neg) res.append('-');
        return res.reverse().toString();
    }
}