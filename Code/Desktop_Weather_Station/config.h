// Change to your WiFi credentials
const char* ssid     = "circuitdigest";
const char* password = "12345678";

// Use your own API key by signing up for a free developer account at https://openweathermap.org/
String apikey       = "ad3ecf5138caa102cb4e7320a121c0d0";                      // openweathermap API
const char server[] = "api.openweathermap.org";
//Set your location according to OWM locations
String LAT              = "11.0110382";                     //Latitude
String LON              = "77.0130247";                     //Longitude

String City             = "Coimbatore";                     
String Country          = "IN";                            
String Language         = "EN";                            // Language
String Hemisphere       = "north";                         // or "south"  
String Units            = "M";                             // Use 'M' for Metric or I for Imperial 
const char* Timezone    = "IST-5:30";                     //Time Zone
const char* ntpServer   = "pool.ntp.org";                 //ntp server                                                           
int   gmtOffset_sec     = 19800;                          // +5.30
int  daylightOffset_sec = 0; 
