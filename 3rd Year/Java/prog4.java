// Write a menu driven GUI based program in Java to perform the following task:
// 	a) addition 
// 	b) subtraction
// 	c) multiplication
// 	d) division

import javax.swing.*;

public class prog4 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Menu-Driven Calculator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(null);

        JButton addButton = new JButton("Addition");
        addButton.setBounds(50, 30, 200, 30);

        JButton subtractButton = new JButton("Subtraction");
        subtractButton.setBounds(50, 70, 200, 30);

        JButton multiplyButton = new JButton("Multiplication");
        multiplyButton.setBounds(50, 110, 200, 30);

        JButton divideButton = new JButton("Division");
        divideButton.setBounds(50, 150, 200, 30);

        addButton.addActionListener(e -> JOptionPane.showMessageDialog(null, "Performing Addition"));
        subtractButton.addActionListener(e -> JOptionPane.showMessageDialog(null, "Performing Subtraction"));
        multiplyButton.addActionListener(e -> JOptionPane.showMessageDialog(null, "Performing Multiplication"));
        divideButton.addActionListener(e -> JOptionPane.showMessageDialog(null, "Performing Division"));

        frame.add(addButton);
        frame.add(subtractButton);
        frame.add(multiplyButton);
        frame.add(divideButton);
        frame.setVisible(true);
    }
}
