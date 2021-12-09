public class Basic{
    /**
     * 数组去重，
     */
    public static int unique(List<Integer> list){
        int j = 0;
        for (int i = 0; i < list.size(); i++) {
            if (i == 0 || list.get(i) != list.get(i - 1)) {
                list.set(j++, list.get(i));
            }
        }
        return j;
    }
    public static void main(String[] args) {
        
    }
}