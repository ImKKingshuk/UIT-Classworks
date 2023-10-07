
import javax.swing.*;
import java.awt.*;

public class BlackPink extends JFrame {
    public BlackPink() {
        JLabel blackLabel = new JLabel("BL\u0245\u03FDK");
        JLabel pinkLabel = new JLabel("PI\u0418K");

        blackLabel.setFont(new Font("Arial", Font.PLAIN, 24));
        pinkLabel.setFont(new Font("Arial", Font.PLAIN, 24));

        blackLabel.setForeground(Color.BLACK);
        pinkLabel.setForeground(Color.PINK);

        JPanel panel = new JPanel();
        panel.add(blackLabel);
        panel.add(pinkLabel);

        add(panel);

        setTitle("BlackPink");
        setSize(300, 100);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            BlackPink example = new BlackPink();
            example.setVisible(true);
        });
    }
}
