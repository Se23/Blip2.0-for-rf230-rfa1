/**
 * This class is automatically generated by mig. DO NOT EDIT THIS FILE.
 * This class implements a Java interface to the 'UcminiSensorMeas'
 * message type.
 */

public class UcminiSensorMeas extends net.tinyos.message.Message {

    /** The default size of this message type in bytes. */
    public static final int DEFAULT_MESSAGE_SIZE = 16;

    /** The Active Message type associated with this message. */
    public static final int AM_TYPE = 10;

    /** Create a new UcminiSensorMeas of size 16. */
    public UcminiSensorMeas() {
        super(DEFAULT_MESSAGE_SIZE);
        amTypeSet(AM_TYPE);
    }

    /** Create a new UcminiSensorMeas of the given data_length. */
    public UcminiSensorMeas(int data_length) {
        super(data_length);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new UcminiSensorMeas with the given data_length
     * and base offset.
     */
    public UcminiSensorMeas(int data_length, int base_offset) {
        super(data_length, base_offset);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new UcminiSensorMeas using the given byte array
     * as backing store.
     */
    public UcminiSensorMeas(byte[] data) {
        super(data);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new UcminiSensorMeas using the given byte array
     * as backing store, with the given base offset.
     */
    public UcminiSensorMeas(byte[] data, int base_offset) {
        super(data, base_offset);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new UcminiSensorMeas using the given byte array
     * as backing store, with the given base offset and data length.
     */
    public UcminiSensorMeas(byte[] data, int base_offset, int data_length) {
        super(data, base_offset, data_length);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new UcminiSensorMeas embedded in the given message
     * at the given base offset.
     */
    public UcminiSensorMeas(net.tinyos.message.Message msg, int base_offset) {
        super(msg, base_offset, DEFAULT_MESSAGE_SIZE);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new UcminiSensorMeas embedded in the given message
     * at the given base offset and length.
     */
    public UcminiSensorMeas(net.tinyos.message.Message msg, int base_offset, int data_length) {
        super(msg, base_offset, data_length);
        amTypeSet(AM_TYPE);
    }

    /**
    /* Return a String representation of this message. Includes the
     * message type name and the non-indexed field values.
     */
    public String toString() {
      String s = "Message <UcminiSensorMeas> \n";
      try {
        s += "  [press=0x"+Long.toHexString(get_press())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [temp2=0x"+Long.toHexString(get_temp2())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [temp=0x"+Long.toHexString(get_temp())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [humi=0x"+Long.toHexString(get_humi())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [light=0x"+Long.toHexString(get_light())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [temp3=0x"+Long.toHexString(get_temp3())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [voltage=0x"+Long.toHexString(get_voltage())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      return s;
    }

    // Message-type-specific access methods appear below.

    /////////////////////////////////////////////////////////
    // Accessor methods for field: press
    //   Field type: long, unsigned
    //   Offset (bits): 0
    //   Size (bits): 32
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'press' is signed (false).
     */
    public static boolean isSigned_press() {
        return false;
    }

    /**
     * Return whether the field 'press' is an array (false).
     */
    public static boolean isArray_press() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'press'
     */
    public static int offset_press() {
        return (0 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'press'
     */
    public static int offsetBits_press() {
        return 0;
    }

    /**
     * Return the value (as a long) of the field 'press'
     */
    public long get_press() {
        return (long)getUIntBEElement(offsetBits_press(), 32);
    }

    /**
     * Set the value of the field 'press'
     */
    public void set_press(long value) {
        setUIntBEElement(offsetBits_press(), 32, value);
    }

    /**
     * Return the size, in bytes, of the field 'press'
     */
    public static int size_press() {
        return (32 / 8);
    }

    /**
     * Return the size, in bits, of the field 'press'
     */
    public static int sizeBits_press() {
        return 32;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: temp2
    //   Field type: short, unsigned
    //   Offset (bits): 32
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'temp2' is signed (false).
     */
    public static boolean isSigned_temp2() {
        return false;
    }

    /**
     * Return whether the field 'temp2' is an array (false).
     */
    public static boolean isArray_temp2() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'temp2'
     */
    public static int offset_temp2() {
        return (32 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'temp2'
     */
    public static int offsetBits_temp2() {
        return 32;
    }

    /**
     * Return the value (as a short) of the field 'temp2'
     */
    public short get_temp2() {
        return (short)getSIntBEElement(offsetBits_temp2(), 16);
    }

    /**
     * Set the value of the field 'temp2'
     */
    public void set_temp2(short value) {
        setSIntBEElement(offsetBits_temp2(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'temp2'
     */
    public static int size_temp2() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'temp2'
     */
    public static int sizeBits_temp2() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: temp
    //   Field type: int, unsigned
    //   Offset (bits): 48
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'temp' is signed (false).
     */
    public static boolean isSigned_temp() {
        return false;
    }

    /**
     * Return whether the field 'temp' is an array (false).
     */
    public static boolean isArray_temp() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'temp'
     */
    public static int offset_temp() {
        return (48 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'temp'
     */
    public static int offsetBits_temp() {
        return 48;
    }

    /**
     * Return the value (as a int) of the field 'temp'
     */
    public int get_temp() {
        return (int)getUIntBEElement(offsetBits_temp(), 16);
    }

    /**
     * Set the value of the field 'temp'
     */
    public void set_temp(int value) {
        setUIntBEElement(offsetBits_temp(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'temp'
     */
    public static int size_temp() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'temp'
     */
    public static int sizeBits_temp() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: humi
    //   Field type: int, unsigned
    //   Offset (bits): 64
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'humi' is signed (false).
     */
    public static boolean isSigned_humi() {
        return false;
    }

    /**
     * Return whether the field 'humi' is an array (false).
     */
    public static boolean isArray_humi() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'humi'
     */
    public static int offset_humi() {
        return (64 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'humi'
     */
    public static int offsetBits_humi() {
        return 64;
    }

    /**
     * Return the value (as a int) of the field 'humi'
     */
    public int get_humi() {
        return (int)getUIntBEElement(offsetBits_humi(), 16);
    }

    /**
     * Set the value of the field 'humi'
     */
    public void set_humi(int value) {
        setUIntBEElement(offsetBits_humi(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'humi'
     */
    public static int size_humi() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'humi'
     */
    public static int sizeBits_humi() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: light
    //   Field type: int, unsigned
    //   Offset (bits): 80
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'light' is signed (false).
     */
    public static boolean isSigned_light() {
        return false;
    }

    /**
     * Return whether the field 'light' is an array (false).
     */
    public static boolean isArray_light() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'light'
     */
    public static int offset_light() {
        return (80 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'light'
     */
    public static int offsetBits_light() {
        return 80;
    }

    /**
     * Return the value (as a int) of the field 'light'
     */
    public int get_light() {
        return (int)getUIntBEElement(offsetBits_light(), 16);
    }

    /**
     * Set the value of the field 'light'
     */
    public void set_light(int value) {
        setUIntBEElement(offsetBits_light(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'light'
     */
    public static int size_light() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'light'
     */
    public static int sizeBits_light() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: temp3
    //   Field type: int, unsigned
    //   Offset (bits): 96
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'temp3' is signed (false).
     */
    public static boolean isSigned_temp3() {
        return false;
    }

    /**
     * Return whether the field 'temp3' is an array (false).
     */
    public static boolean isArray_temp3() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'temp3'
     */
    public static int offset_temp3() {
        return (96 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'temp3'
     */
    public static int offsetBits_temp3() {
        return 96;
    }

    /**
     * Return the value (as a int) of the field 'temp3'
     */
    public int get_temp3() {
        return (int)getUIntBEElement(offsetBits_temp3(), 16);
    }

    /**
     * Set the value of the field 'temp3'
     */
    public void set_temp3(int value) {
        setUIntBEElement(offsetBits_temp3(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'temp3'
     */
    public static int size_temp3() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'temp3'
     */
    public static int sizeBits_temp3() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: voltage
    //   Field type: int, unsigned
    //   Offset (bits): 112
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'voltage' is signed (false).
     */
    public static boolean isSigned_voltage() {
        return false;
    }

    /**
     * Return whether the field 'voltage' is an array (false).
     */
    public static boolean isArray_voltage() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'voltage'
     */
    public static int offset_voltage() {
        return (112 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'voltage'
     */
    public static int offsetBits_voltage() {
        return 112;
    }

    /**
     * Return the value (as a int) of the field 'voltage'
     */
    public int get_voltage() {
        return (int)getUIntBEElement(offsetBits_voltage(), 16);
    }

    /**
     * Set the value of the field 'voltage'
     */
    public void set_voltage(int value) {
        setUIntBEElement(offsetBits_voltage(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'voltage'
     */
    public static int size_voltage() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'voltage'
     */
    public static int sizeBits_voltage() {
        return 16;
    }

}