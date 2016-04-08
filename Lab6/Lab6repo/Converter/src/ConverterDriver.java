import java.awt.BorderLayout;

import javax.swing.JFrame;
public class ConverterDriver 
{
	private static void createAndDisplayGUI()
	{
		JFrame frame = new JFrame("Temperature Converter");
		Converter Converter = new Converter();
		
		frame.getContentPane().add(Converter.getContent1(), BorderLayout.NORTH);
		frame.getContentPane().add(Converter.getContent2(),BorderLayout.CENTER);
		frame.getContentPane().add(Converter.getContent3(),BorderLayout.SOUTH);
		frame.pack();
		frame.setVisible(true);
	}
	
	
	public static void main(String[] args)
	{
		createAndDisplayGUI();
	}
}
