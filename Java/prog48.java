// java  programme which will copy the content of one file into another

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class prog48 {
    public static void main(String[] args) {
       
        String sourceFilePath = "path/to/source/file.txt";
        String destinationFilePath = "path/to/destination/copied_file.txt";

    
        try {
            copyFile(sourceFilePath, destinationFilePath);
            System.out.println("File copied successfully.");
        } catch (IOException e) {
            System.err.println("Error copying the file: " + e.getMessage());
        }
    }

    private static void copyFile(String sourceFilePath, String destinationFilePath) throws IOException {
       
        try (FileInputStream fis = new FileInputStream(sourceFilePath);
             FileOutputStream fos = new FileOutputStream(destinationFilePath)) {

          
            byte[] buffer = new byte[4096];
            int bytesRead;

            
            while ((bytesRead = fis.read(buffer)) != -1) {
                fos.write(buffer, 0, bytesRead);
            }
        }
    }
}

