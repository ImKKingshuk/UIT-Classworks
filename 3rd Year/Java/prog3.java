// Java GUI Program to Add Two Decimal Numbers

import javax.swing.*;

public class prog3 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Decimal Number Addition");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(null);

        JTextField num1Field = new JTextField();
        num1Field.setBounds(50, 30, 200, 30);

        JTextField num2Field = new JTextField();
        num2Field.setBounds(50, 70, 200, 30);

        JButton addButton = new JButton("Add");
        addButton.setBounds(50, 110, 200, 30);

        JLabel resultLabel = new JLabel("Result:");
        resultLabel.setBounds(50, 150, 200, 30);

        addButton.addActionListener(e -> {
            try {
                double num1 = Double.parseDouble(num1Field.getText());
                double num2 = Double.parseDouble(num2Field.getText());
                double sum = num1 + num2;
                resultLabel.setText("Result: " + sum);
            } catch (NumberFormatException ex) {
                resultLabel.setText("Invalid input. Please enter valid decimal numbers.");
            }
        });

        frame.add(num1Field);
        frame.add(num2Field);
        frame.add(addButton);
        frame.add(resultLabel);
        frame.setVisible(true);
    }
}
