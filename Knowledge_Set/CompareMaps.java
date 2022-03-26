import java.util.HashMap;
import java.util.Map;

/**
 *
 * @author nithi
 */

/* NOTE : Two Maps can be same even if their hashCodes are Different
  ex :  ["abbbbbbbbbbb","aaaaaaaaaaab"] (Don't rely on hashcodes, use equals/custome written equals method)
*/

public class CompareMaps {

    public static void main(String[] args) {
        HashMap<Integer, Integer> h1 = new HashMap<Integer, Integer>();
        HashMap<Integer, Integer> h2 = new HashMap<Integer, Integer>();

        String s1 = "abc";
        String s2 = "cab";
        int v;
        System.out.println("--------------Map 1--------");

        for (int i = 0; i < s1.length(); i++) {
            Integer k = s1.charAt(i) - 'a';
            if (!h1.containsKey(k)) {
                h1.put(k, 1);
            } else {
                v = h1.get(k);
                h1.put(k, ++v);
            }

        }

        for (Map.Entry<Integer, Integer> m : h1.entrySet()) {
            System.out.println("Key " + m.getKey() + " value " + m.getValue());
        }

        System.out.println("--------------Map 2--------");

        for (int i = 0; i < s2.length(); i++) {
            Integer k = s2.charAt(i) - 'a';
            if (!h2.containsKey(k)) {
                h2.put(k, 1);
            } else {
                v = h2.get(k);
                h2.put(k, ++v);
            }

        }

        for (Map.Entry<Integer, Integer> m : h2.entrySet()) {
            System.out.println("Key " + m.getKey() + " value " + m.getValue());
        }

        System.out.println("--------------------");

        System.out.println("IS Map 1 equal to Map 2 ? " + h1.equals(h2));
        if (h1.hashCode() == h2.hashCode()) {
            System.out.println("Their hashcodes are equal ");
        } else {
            System.out.println("Their hashCodes are different");
        }

    }

}