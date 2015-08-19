package br.com.uri;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class SubmitPage {
	
	private WebDriver driver;
	
	public SubmitPage(WebDriver driver) {
		// TODO Auto-generated constructor stub
		this.driver = driver;
	}
	
	public void clickLink(){
		WebElement menu = driver.findElement(By.id("menu"));
		WebElement submit = menu.findElement(By.linkText("SUBMETER"));
		submit.click();
	}
	
	public void setProblem(String problem){
		WebElement problemElement = driver.findElement(By.id("RunProblemId"));
		problemElement.sendKeys(problem);
	}
	
	public void clearSolution(){
		WebElement pre = driver.findElement(By.id("editor"));
		WebElement textArea = pre.findElement(By.tagName("textarea"));
		textArea.clear();
	}
	
	public void setSolution(String solution){
		WebElement pre = driver.findElement(By.id("editor"));
		WebElement textArea = pre.findElement(By.tagName("textarea"));
		textArea.sendKeys(solution);
	}
	
	
	public void submit(){
		WebElement form = driver.findElement(By.id("RunAddForm"));
		WebElement send = form.findElement(By.className("send-submit"));
		send.click();
	}

}
