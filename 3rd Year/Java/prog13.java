// Java Program to Show the Use of 'while' in a GUI Based Program

import javax.swing.*;

public class prog13 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("While Loop Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(null);

        int i = 1;
        while (i <= 5) {
            JLabel label = new JLabel("Label " + i);
            label.setBounds(50, 30 + i * 30, 200, 30);
            frame.add(label);
            i++;
        }

        frame.setVisible(true);
    }
}
