import java.awt.*;
import java.awt.event.*;

public class DemoAppAWT extends Frame implements ActionListener {
    
    // Declaring components
    TextField textField;
    Label label, resultLabel;
    Button button;

    // Constructor to set up the GUI components
    public DemoAppAWT() {
        // Set up Frame
        setTitle("AWT Demo Application");
        setSize(400, 200);
        setLayout(null);
        
        // Create a Label for instruction
        label = new Label("Enter your name: ");
        label.setBounds(20, 50, 120, 30);
        add(label);

        // Create a TextField for user input
        textField = new TextField();
        textField.setBounds(150, 50, 150, 30);
        add(textField);

        // Create a Button to trigger action
        button = new Button("Submit");
        button.setBounds(150, 100, 100, 30);
        add(button);

        // Add ActionListener to the button
        button.addActionListener(this);

        // Create another Label to display result
        resultLabel = new Label();
        resultLabel.setBounds(20, 150, 300, 30);
        add(resultLabel);

        // Set Frame properties
        setVisible(true);
        
        // Add window closing event to terminate the program
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });
    }

    // ActionListener method to handle button click
    public void actionPerformed(ActionEvent e) {
        String input = textField.getText();
        resultLabel.setText("Hello, " + input + "!");
    }

    public static void main(String[] args) {
        new DemoAppAWT(); // Create and display the app
    }
}