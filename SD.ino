void saveData(String data)
{

  Serial.println(data);

  File dataFile = SD.open("Asgard.csv", FILE_WRITE);
  dataFile.println(data);
  dataFile.close();
  
}

