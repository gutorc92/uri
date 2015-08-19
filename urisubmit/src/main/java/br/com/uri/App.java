package br.com.uri;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.FileSystem;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;
import java.util.Properties;

import org.openqa.selenium.By;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.firefox.FirefoxDriver;
import org.openqa.selenium.support.PageFactory;
import org.openqa.selenium.support.ui.ExpectedCondition;
import org.openqa.selenium.support.ui.WebDriverWait;

import com.gargoylesoftware.htmlunit.javascript.host.dom.Text;

/**
 * Hello world!
 *
 */
public class App 
{
	
    public static void main( String[] args )
    {
    	Properties properties = new Properties();
    	
    	long wait = 30;
    	String email = "gutorc@hotmail.com";
    	String password = "16eb93b2";
    	String problemId = "1036";
    	String file = "/home/gustavo/Documents/uri/1036/1036.cpp";
        System.out.println( "Hello World!" );
        
        ReadFile read = new ReadFile(file);
        WebDriver driver = new FirefoxDriver();
    	
	    // And now use this to visit Google
	    driver.get("https://www.urionlinejudge.com.br/judge/login");
	    
	    LoginPage loginPage = PageFactory.initElements(driver, LoginPage.class);
	    loginPage.setEmail(email);
	    loginPage.setPassword(password);
	    loginPage.submit();
	    SubmitPage submit = PageFactory.initElements(driver, SubmitPage.class);
	    submit.clickLink();
	    submit.setProblem(problemId);
	    submit.clearSolution();
	    
	    for(int i = 0; i < read.size();i++){
	    	String line = read.getLine(i);
	    	submit.setSolution(line);
	    }
//	    for(String line: read.getTextFile()){
//	    	submit.setSolution(line);
//	    }
//	    System.out.println(Keys.chord(Keys.SHIFT,"9"));
//	    submit.setSolution(read.getText());
//	    try {
//			driver.wait(wait);
//		} catch (InterruptedException e) {
//			// TODO Auto-generated catch block
//			e.printStackTrace();
//		}
	    submit.submit();
	    // Alternatively the same thing can be done like this
	    // driver.navigate().to("http://www.google.com");
	
	    
	
	    // Check the title of the page
	    System.out.println("Page title is: " + driver.getTitle());
	    
	    
	
	    // Should see: "cheese! - Google Search"
	    System.out.println("Page title is: " + driver.getTitle());
	    
	    //Close the browser
	    driver.quit();
    }
}
