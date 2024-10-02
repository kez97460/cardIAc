import serial
import numpy as np
import time

PORT = "COM6"
NUM_CLASSES = 5

def synchronise_UART(serial_port):
    """
    Synchronizes the UART communication by sending a byte and waiting for a response.

    Args:
        serial_port (serial.Serial): The serial port object to use for communication.

    Returns:
        None
    """
    while (1):
        serial_port.write(b"\xAB")
        ret = serial_port.read(1)
        if (ret == b"\xCD"):
            serial_port.read(1)
            break

def inputsToBuffer(inputs):
    inputs = inputs.astype(np.float32)
    buffer = b""
    for x in inputs:
        buffer += x.tobytes()
    return buffer

def outputsToInt(output):
    float_values = [int(out)/255 for out in output]
    return float_values

if __name__ == '__main__':
    X_test = np.load("../neural_network/dataset_publications/MLP/STM32Inputs/X_test.npy")
    Y_test = np.load("../neural_network/Notebooks_Kez/Y_test_STM32.npy")

    iterations = 100

    with serial.Serial(PORT, 115200, timeout=1) as ser:
        print("Synchronising...")
        synchronise_UART(ser)
        print("Synchronised")

        print("Evaluating model on STM32...")
        accuracy = 0
        for i in range(iterations):
            print(f"----- Iteration {i+1} -----")
            time.sleep(0.1)
            ser.write(inputsToBuffer(X_test[i]))
            time.sleep(0.1)
            output = outputsToInt(ser.read(NUM_CLASSES))
            if (np.argmax(output) == np.argmax(Y_test[i])):
                accuracy += 1 / iterations
            print(f"   Expected output: {Y_test[i]}")
            print(f"   Received output: {output}")
            print(f"----------------------- Accuracy: {accuracy:.2f}\n")

        print("---Finished---")
