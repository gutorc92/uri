package br.com.uri;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;

public class LoginPage {

	@FindBy(id = "UserEmail")
	private WebElement emailElement;
	
	@FindBy(id = "UserPassword")
	private WebElement passwordElement;
	
	@FindBy(className = "send-sign-in")
	private WebElement send;
	
	public void setEmail(String email){
		emailElement.sendKeys(email);
	}
	
	public void setPassword(String password){
		passwordElement.sendKeys(password);
	}
	
	public void submit(){
		send.click();
	}
}
