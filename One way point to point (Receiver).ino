#include <esp_now.h>
#include <WiFi.h>
// Struktur pesan sender dan receiver harus sama
typedef struct struct_message {
 char a[32];
 int b;
 float c;
 bool d;
 char e [192];
} struct_message;
// Driver struktur pesan
struct_message myData;
// fungsi callback yang akan dieksekusi ketika ada pesan diterima
void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
 memcpy(&myData, incomingData, sizeof(myData));
 Serial.print("Bytes received: ");
 Serial.println(len);
 Serial.print("Char: ");
 Serial.println(myData.a);
 Serial.print("Int: ");
 Serial.println(myData.b);
 Serial.print("Float: ");
 Serial.println(myData.c);
 Serial.print("Bool: ");
 Serial.println(myData.d);
 Serial.println("Char: ");
 Serial.println(myData.e);
}
void setup() {
 // Initialize Serial Monitor
 Serial.begin(115200);
// Set ESP32 sebagai station
 WiFi.mode(WIFI_STA);
 // Init ESP-NOW
 if (esp_now_init() != ESP_OK) {
 Serial.println("Error initializing ESP-NOW");
 return;
 }
 
 // Fungsi akses register cb untuk proses penerimaan data
 esp_now_register_recv_cb(OnDataRecv);
}
void loop() {
}