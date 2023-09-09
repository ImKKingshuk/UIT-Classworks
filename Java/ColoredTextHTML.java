package Java;

import javax.swing.*;
import java.awt.*;

public class ColoredTextHTML extends JFrame {
    public ColoredTextHTML() {
        JLabel coloredLabel = new JLabel("<html><font color='black'>Black</font> <font color='pink'>Pink</font></html>");
        coloredLabel.setFont(new Font("Arial", Font.PLAIN, 24));

        add(coloredLabel);

        setTitle("Colored Text HTML Swing");
        setSize(300, 100);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            ColoredTextHTML example = new ColoredTextHTML();
            example.setVisible(true);
        });
    }
}
