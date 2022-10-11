# Import module
import wifi_qrcode_generator as qr

# Use wifi_qrcode() to create a QR image
qrCode = qr.wifi_qrcode("LESBEHONEST", False, "WPA", "#365Nyourmom")

# Display the qrImage
qrCode.show()

# Save the image as PNG file
qrCode.save("my_wifi_qr.png")
