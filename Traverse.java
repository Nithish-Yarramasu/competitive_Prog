
//Program to Traverse a graph using breadth first search Algorithm 

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author nithish
 */
public class Traverse {

    public void breadthIt(int edges[][], int start) {

        Queue<Integer> q = new LinkedList();
        Queue<Integer> v = new LinkedList();
        
        if (q.isEmpty()) {
            q.<Integer>add(start);
            v.<Integer>add(start);
        }

        System.out.println("The path is as follows :");

        while (!q.isEmpty()) {
            int e = q.element();
            for (int i = 0; i < edges[e].length; i++) {
                if (edges[e][i] != 0) {
                    if (!v.contains(i)) {
                        q.<Integer>add(i);
                        v.<Integer>add(i);
                    }
                }
            }

            System.out.print(q.remove()+"->");
            System.out.print("*");
        }

    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Enter Number of Nodes");
        int n = in.nextInt();
        int edges[][] = new int[n][n];
        int s;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.println("1/0 :Is there an edge from node " + i + " -> " + j);
                edges[i][j] = in.nextInt();
            }
        }

        System.out.println("Enter the starting Node");
        s = in.nextInt();

        Traverse t = new Traverse();
        t.breadthIt(edges, s);

    }
}
