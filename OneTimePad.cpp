#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random key of given length
string generateRandomKey(int length) {
    string key = "";
    for (int i = 0; i < length; ++i) {
        // Generate a random character between 'A' and 'Z'
        char randomChar = 'A' + rand() % 26;
        key += randomChar;
    }
    return key;
}

// Function to perform one-time pad encryption
string encrypt(const string &message, const string &key) {
    string encryptedMessage = "";
    for (size_t i = 0; i < message.length(); ++i) {
        // XOR operation to encrypt each character
        char encryptedChar = message[i] ^ key[i];
        encryptedMessage += encryptedChar;
    }
    return encryptedMessage;
}

// Function to perform one-time pad decryption
string decrypt(const string &encryptedMessage, const string &key) {
    string decryptedMessage = "";
    for (size_t i = 0; i < encryptedMessage.length(); ++i) {
        // XOR operation to decrypt each character
        char decryptedChar = encryptedMessage[i] ^ key[i];
        decryptedMessage += decryptedChar;
    }
    return decryptedMessage;
}

int main() {
    string message;
    
    cout << "Enter message: ";
    getline(cin, message);
    
    // Seed the random number generator with current time
    srand(time(nullptr));
    
    // Generate a random key of the same length as the message
    string key = generateRandomKey(message.length());
    
    // Encrypt the message
    string encryptedMessage = encrypt(message, key);
    
    cout << "Encrypted Message: " << encryptedMessage << endl;
    cout << "Generated Key: " << key << endl;
    
    // Decrypt the encrypted message
    string decryptedMessage = decrypt(encryptedMessage, key);
    
    cout << "Decrypted Message: " << decryptedMessage << endl;
    
    return 0;
}

