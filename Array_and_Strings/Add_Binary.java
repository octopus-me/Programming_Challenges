class Solution {
    public String addBinary(String a, String b) {

        int indexA = a.length() - 1 , indexB= a.length() - 1;

        StringBuilder sb = new StringBuilder();



        int carry = 0;
        while(indexA >= 0 || indexB >=0 || carry != 0){
            int sum = 0;

            if(indexA >= 0){
                sum += a.charAt(indexA) - '0';

            }

            if(indexB >= 0) {
                sum += a.charAt(indexB) - '0';
            }

            sum += carry;

            sb.append(sum % 2);
            carry = sum / 2;


        }
        return sb.reverse().toString();
    }

}