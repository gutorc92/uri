package br.com.uri;


import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;
import org.openqa.selenium.support.PageFactory;

import br.com.uri.submit.ReadConfigurationFile;


/**
 * Hello world!
 *
 */
public class App 
{

	public static void main( String[] args )
	{
		String file = null, problemId = null;
		if(args.length == 2){
			file = args[0];
			problemId = args[1];

		}else if(args.length == 1){
			file = args[0];
			
		}else if(args.length == 0){
			System.out.println("It needs a less one argument ");
			System.exit(1);
			
		}
		
		System.out.println(System.getProperty("user.dir"));
		
		
		
		ReadConfigurationFile readConfiguration = new ReadConfigurationFile(System.getProperty("user.dir"));
		readConfiguration.readUriConfigurationFile();
		
		System.out.println("Main: " + readConfiguration.getEmail() + " " + readConfiguration.getPassword());
		
		String email = readConfiguration.getEmail(); 
		String password = readConfiguration.getPassword();
		
		
		System.out.println( "Starting to submit your problem" );

		ReadFile read = new ReadFile(file);
		WebDriver driver = new FirefoxDriver();

		// And now use this to visit Google
		driver.get("https://www.urionlinejudge.com.br/judge/login");

		//Login in uri
		LoginPage loginPage = PageFactory.initElements(driver, LoginPage.class);
		loginPage.setEmail(email);
		loginPage.setPassword(password);
		loginPage.submit();

		//submit
		SubmitPage submit = PageFactory.initElements(driver, SubmitPage.class);
		submit.clickLink();
		submit.setProblem(problemId);
		submit.clearSolution();

		Paste paste = new Paste(read.getText());
		paste.setClipboardContents();
		submit.pasteSolution();

		System.out.println(paste.getClipboardContents());

		submit.submit();
		
		driver.quit();

	}
	
	
}
