![Screenshot from 2024-04-07 13-46-48](https://github.com/NiranjanGowdaNR/oneTimePad/assets/145254471/a935a632-5921-4b6a-a8a8-4c611dc44393)
![Screenshot from 2024-04-07 13-47-00](https://github.com/NiranjanGowdaNR/oneTimePad/assets/145254471/2c674180-b7ed-4d89-a118-1a2ac71096af)
The provided C++ code implements the one-time pad encryption technique, a theoretically unbreakable encryption method when implemented correctly. 
The code prompts the user to enter a message, which is then encrypted using a randomly generated key of the same length as the message.
The key generation utilizes the `<cstdlib>` and `<ctime>` libraries to seed the random number generator with the current time, ensuring that a different key
is generated each time the program runs. The encryption process involves performing a bitwise XOR operation between each character of the message and 
its corresponding character in the key. The resulting encrypted message is displayed along with the generated key. Subsequently, the code demonstrates decryption
of the encrypted message using the same key, restoring the original plaintext message. This implementation serves as a basic example of one-time pad encryption, 
showcasing its simplicity and effectiveness in ensuring secure communication.
