import java.io.Serializable;

public class Pair<F , S> implements Serializable {
    
    private F first;

    private S second;

    public static void main(String[] args) {
        System.out.println("Hello World!");
    }

    public Pair(F first, S second) {
        this.first = first;
        this.second = second;
    }

    public F first(){
        return first;
    }

    public S second(){
        return second;
    }

    public void setFirst(F f){
        this.first = f;
    }

    public void setSecond(S s){
        this.second = s;
    }

    @Override
    public String toString() {
        return "[first=" + first + ", second=" + second + "]";
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((first == null) ? 0 : first.hashCode());
        result = prime * result + ((second == null) ? 0 : second.hashCode());
        return result;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Pair other = (Pair) obj;
        if (first == null) {
            if (other.first != null)
                return false;
        } else if (!first.equals(other.first))
            return false;
        if (second == null) {
            if (other.second != null)
                return false;
        } else if (!second.equals(other.second))
            return false;
        return true;
    }

    
    
}

// class Test{

//     public static void main(String[] args) {
//         List <Pair<Integer , Integer >> list = new ArrayList<>();
//          Pair<Integer , Integer> pair = new Pair(5, 10);
//         list.add(pair);
//         System.out.println(pair.first() + " " + pair.second());
//     }
// }

