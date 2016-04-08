import java.io.*;

import java.awt.Component;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class VotingBooth
{
	private JPanel panel1;
	private JPanel panel2;
	private JPanel panel3;
	private JButton button1;
	private JButton button2;
	private JButton button3;
	private JButton button4;
	private JButton button5;
	
	private JTextField text1;
	private JTextField text2;
	
	private JLabel label1;
	private JLabel label2;
	private JLabel label3;

	public VotingBooth()
	{
		//Initialize panels
		panel1 = new JPanel();
		panel2 = new JPanel();
		panel3 = new JPanel();
		//Initialize buttons
		button1 = new JButton("Submit Name");
		button2 = new JButton("Candidate 1");
		button3 = new JButton("Candidate 2");
		button4 = new JButton("Candidate 3");
		button5 = new JButton("Candidate 4");
		//Initialize Text Fields
		text1 = new JTextField(3);
		text2 = new JTextField(3);
		//Initialize labels
		label1 = new JLabel("First Name:");
		label2 = new JLabel("Last Name");
	

		button1.addActionListener(button1Listener());
		button2.addActionListener(button2Listener());
		button3.addActionListener(button3Listener());
		button4.addActionListener(button4Listener());
		button5.addActionListener(button5Listener());
		
		//Add components to panel 1
		panel1.add(label1);
		panel1.add(text1);
		panel1.add(label2);
		panel1.add(text2);
		panel1.add(button1);	
		//Add Components to panel 2
		panel2.add(button2);
		panel2.add(button3);
		//Add Components to panel 3
		panel3.add(button4);
		panel3.add(button5);

	}
	
	public Component getContent1()
	{
		return (panel1);
	}
	
	public Component getContent2()
	{
		return (panel2);
	}

	public Component getContent3()
	{
		return (panel3);
	}
	
	private ActionListener button1Listener()
	{
		ActionListener listener = new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				
			}
		};		
		return listener;
	}	
	
	private ActionListener button2Listener()
	{
		ActionListener listener = new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				
				
			}
		};	
		return listener;
	}	
	
	private ActionListener button3Listener()
	{
		ActionListener listener = new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				
			}
		};
		return listener;
	}	
	
	private ActionListener button4Listener()
	{
		ActionListener listener = new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				
			}
		};
		return listener;
	}	
	
	private ActionListener button5Listener()
	{
		ActionListener listener = new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				
			}
		};
		return listener;
	}
}