import javax.swing.*;

import java.awt.event.*;
import java.awt.Component;
import java.awt.GridLayout;
import java.awt.event.KeyEvent;
import java.util.Random;
public class Dice 
{
	private JPanel panel;
	private JButton button;
	private JTextField text;
	private JLabel label;
		
	public Dice()
	{
		//Initialize Panel
		panel = new JPanel();
		//Initialize button
		button = new JButton("Roll Dice");
		//Initialize text box
		text = new JTextField(3);
		//Initialize label
		label = new JLabel("Enter the number of the sides for the dice:");

		button.addActionListener(buttonListener());	
		//Add components to panel
		panel.add(text);
		panel.add(button);
		panel.add(label);
	}
	
	public Component getContent()
	{
		return panel;
	}
	private ActionListener buttonListener()
	{
			ActionListener listener = new ActionListener()
			{
				public void actionPerformed(ActionEvent e)
				{
					//rolls random number and prints to screen
					String input = text.getText();
					int sides = Integer.parseInt(input);
					Random random = new Random();
					String newText ="You rolled a " + (random.nextInt(sides)+1) + " with a " + sides + " sided dice.";
					label.setText(newText);
					System.out.println(newText);
				}
			};
			return listener;
	}
}