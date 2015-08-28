package br.com.uri.submit;

import java.io.IOException;
import java.nio.charset.Charset;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Logger;

public class ReadConfigurationFile {
	
	private static Logger log = Logger.getLogger(ReadConfigurationFile.class.getName());
	private static String CONFIGURATION_FILE_URI = "/.uriconfigurationfile";
	private String path;
	private List<String> textFile;
	private String email;
	private String password;
	
	public ReadConfigurationFile(String path){
		this.path = path;
	}

	public void readUriConfigurationFile(){
		String configurationUriFile = path + CONFIGURATION_FILE_URI;
		log.info(configurationUriFile);
		Path filePath = FileSystems.getDefault().getPath(configurationUriFile, "");
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
		if(textFile.size() != 2){
			System.out.println("Nao tem duas linhas");
		}
		for(int i = 0; i < textFile.size(); i++){
			System.out.println("The line: " + textFile.get(i));
			if(i == 0){
				email = textFile.get(i).split(" ")[1];
			}
			if(i == 1){
				password = textFile.get(i).split(" ")[1];
			}
		}
		log.info(email);
		log.info(password);
		
	}

	public String getEmail() {
		return email;
	}

	public String getPassword() {
		return password;
	}
	
	
}
