# Jaringan-Sensor-Nirkabel-Menggunakan-ESP-NOW

ESP-NOW adalah protokol yang dikembangkan oleh Espressif, yang memungkinkan banyak perangkat untuk berkomunikasi satu sama lain tanpa menggunakan Wi-Fi. Protokol ini mirip dengan konektivitas nirkabel 2.4GHz berdaya rendah. Pendifinisian alamat (MAC Address) pada masing-masing ESP32 diperlukan pada awal konfigurasi. Setelah konfigurasi alamat selesai dilakukan, jaringan peer-to-peer akan terbentuk dan perangkat tidak perlu melakukan handshaking kembali ketika akan berkomunikasi. Hal ini memunjukkan bahwa setelah perangkat ESP32 saling terpasang satu sama lain, koneksi akan tetap ada. Dengan kata lain, jika tiba-tiba salah satu ESP32 kehilangan daya atau diatur ulang, ketika restart, secara otomatis akan terhubung ke pasangan ESP32 yang telah terdefinisi alamatnya untuk melanjutkan komunikasi.
ESP-NOW mempunyai fitur sebagai berikut.
a. Komunikasi unicast yang terenkripsi maupun tidak terenkripsi.
b. Perpaduan komunikasi data yang terenkripsi maupun yang tidak terenkripsi pada perangkat yang berada pada topologi peer-to-peer.
c. Payload (ukuran) data yang dapat dikirm mencapai 250 byte.
d. Terdapat fungsi callback yang dapat menginformasikan data berhasil terkirim maupun gagal dikirim.
Selain itu, ESP-NOW mempunyai batasan sebagai berikut.
a. Jumlah maksimal perangkat yang dapat berkomunikasi dalam mode station dengan data terenkripsi adalah 10 unit (6 dalam mode SoftAP atau SoftAP+Station).
b. Untuk komunikasi tidak terenkripsi, jumlah maksimal perangkat adalah 20 unit, termasuk dengan yang terenkripsi.
ESP-NOW mempunyai 2 tipe jaringan, yaitu One-Way Communication dan Two-Way Communication. One-Way Communication terbagi menjadi Point-to-Point, One-to-Many Communication dan Many-to-One Communication. Sementara Two-Way Communication terbagi menjadi Point-to-Point dan Mesh Communication.

**ALAT DAN BAHAN**
1) ESP32
2) Breadboard
3) Kabel jumper
4) Resistor 10K Ohm

**HASIL KELUARAN**

**1) Memperoleh MAC Address ESP32 Receiver**
   ![MAC Address](https://user-images.githubusercontent.com/118364435/206248766-90fccff1-2d21-45b1-985c-32f515150bb0.jpeg)


**2) ESP-NOW One-Way Point-to-Point Communication**
   
   Keluaran Sender
   
![B  Simplex PTP Sender](https://user-images.githubusercontent.com/118364435/210263182-1f75d640-de70-4a4e-97d3-d0d380d9bc63.png)



   Keluaran Receiver
   ![Receiver one way point to point](https://user-images.githubusercontent.com/118364435/206249400-a70ed2a4-f6b8-46f5-b6ef-b1801506354d.jpeg)
   
   
   **Data Dummy Ukuran +-250 byte pada Receiver**
   ![Receiver Data Dummy 250 byte](https://user-images.githubusercontent.com/118364435/206249952-47eb1f2e-0ecc-4f33-849e-4cf7716a46cf.jpeg)
   
   
   **Pengukuran Jarak Antara Sender dan Receiver**
   ![Gambar Tinggi antenna One way to point to point xlsx](https://user-images.githubusercontent.com/118364435/210261951-761b5321-669e-4fc0-823c-2b9944345291.png)

   
**3) One Way, One to Many Communication**

   **Mengirim Pesan yang Sama Ke Beberapa Board ESP32**
  
  Keluaran Sender
  ![C  Simplex PTM Sender](https://user-images.githubusercontent.com/118364435/210262013-7c4296aa-c2f2-449c-8968-e28fc0ad2f04.png)
        
        
  Keluaran Receiver 1 (Aku)
  ![Receiver One to many (a)](https://user-images.githubusercontent.com/118364435/206256450-e9c84540-2799-4772-9213-293b1802c539.jpeg)
                  
                  
  Keluaran Receiver 2
  ![C  Simplex PTM Receiver](https://user-images.githubusercontent.com/118364435/210262046-8aed3cf9-e532-4659-9eb0-cdb6053db34e.png)
        
        
  Keluaran Receiver 3
  
  
  Keluaran Receiver 4
          
  Keluaran Sender Setelah Mematikan Receiver 1
          
  Keluaran Receiver 1 Kelas
  
          
   **Mengirim Pesan Berbeda Ke Beberapa Board ESP32**
     
   Keluaran Sender
   ![C  Simplex PTM Tugas 3(b) Master](https://user-images.githubusercontent.com/118364435/210262603-6f2d8f88-7066-4209-9351-1ed68fb548f4.png)


   Keluaran Receiver 1 (Aku)
   ![C  Simplex PTM Tugas 3(b) Slave 1](https://user-images.githubusercontent.com/118364435/210262684-dbf0b2b6-1009-4e90-81d9-58def36275ce.png)
        
        
   Keluaran Receiver 2
   ![Receiver One to many (b)](https://user-images.githubusercontent.com/118364435/206256561-834c725e-d62e-4e39-bc3a-0944ed3b1777.jpeg)
   
   
   Keluaran Receiver 3
   ![C  Simplex PTM Tugas 3(b) Slave 3](https://user-images.githubusercontent.com/118364435/210262633-c5e9eaa7-15cb-458f-b285-cda627909679.png)
          
          
**4) One Way, Many to One Communication**

   Keluaran Sender 1 (Aku)
   ![Sender Many to one](https://user-images.githubusercontent.com/118364435/206255892-f2f618ec-95de-4e8c-9175-221b0f730c1f.jpeg)
    
    
   Keluaran Sender 2
   ![D  Simplex MTP Master](https://user-images.githubusercontent.com/118364435/210262725-f5fc17cd-c21b-46ad-9841-6357461b59d6.png)
  
     
   Keluaran Receiver
   ![D  Simplex MTP Slave](https://user-images.githubusercontent.com/118364435/210262748-81f3cc3c-855d-4151-b852-6f830f47dd8d.png)


     
**5) Two Way Communication**

     



