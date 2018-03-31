void getBMP()
{

  data += ((String)millis() + ";" + bmp.readTemperature() + ";" + bmp.readPressure() + ";" + bmp.readAltitude(1033.25) + ";");
  
}

