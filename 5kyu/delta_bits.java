// Delta Bits 5th kyu kata

public class DeltaBits {
    public static int convertBits(int a, int b) {
      String binary = Integer.toBinaryString(a ^ b);
      return binary.length() - binary.replace("1", "").length();
    }
}

