package br.com.uri;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;
import java.util.Properties;

import org.openqa.selenium.Keys;

public class ReadFile {
	
	private String path;
	private List<String> textFile;
	
	public ReadFile(String path){
		this.path = path;
	}
	
	private void read(){
		Path filePath = FileSystems.getDefault().getPath(path, "");
		textFile = null;
		try {
			textFile = Files.readAllLines(filePath,Charset.defaultCharset());
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally{
			if(textFile == null){
				textFile = new ArrayList<String>();
			}
		}
		
	}
	
	public void readUriConfigurationFile(Properties proparties) throws IOException,FileNotFoundException{
		String configurationUriFile = path + "/uriconfigurationfile";
		System.out.println(configurationUriFile);
		InputStream inputStream = getClass().getClassLoader().getResourceAsStream(configurationUriFile);
		if(inputStream != null){
			proparties.load(inputStream);
		}else{
			throw new FileNotFoundException("The file with your user and password of Uri cannot be found.");
		}
	}
	
	public String getText(){
		if(textFile == null){
			read();
		}
        String text = "";
        for(String line:textFile){
        	text += line + "\n";
        }
        System.out.println(text);
        return text;
	}
	
	public String getLine(int line){
		if(textFile == null){
			read();
		}
		return lineToWebDriver(textFile.get(line));
	}
	
	private String lineToWebDriver(String line){
		line = line.replaceAll("\\(", Keys.chord(Keys.SHIFT,"9"));
		line = line.replaceAll("\\)", Keys.chord(Keys.SHIFT,"0"));
		line = line.replaceAll("#", Keys.chord(Keys.SHIFT,"3"));
		line = line.replaceAll("\\+", Keys.chord(Keys.ADD));
		line = line.replaceAll("-", Keys.chord(Keys.SUBTRACT));
		line = line.replaceAll(";", Keys.chord(Keys.SEMICOLON));
		line = line.replaceAll("=", Keys.chord(Keys.EQUALS));
		line += "\n";
		System.out.println("The new line: " + line);
		return line;
	}
	
	public int size(){
		if(textFile == null){
			read();
		}
		return textFile.size();
	}
	
	public List<String> getTextFile(){
		read();
		return textFile;
	}

}
