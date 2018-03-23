void saveData(String data)
{

  Serial.println(data);

  File dataFile = SD.open("DATA.txt", FILE_WRITE);
  dataFile.println(data);
  dataFile.close();
  
}

