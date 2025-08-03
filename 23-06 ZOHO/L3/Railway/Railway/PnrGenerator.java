package Railway;

import java.util.*;
public class PnrGenerator {

    private static final Random random = new Random();
    public String generatePnr(){
        long mini = 1_000_000_000L;
        long maxi = 9_999_999_999L;
        long pnr = mini + ((long)(random.nextDouble() * (maxi - mini)));
        return String.valueOf(pnr);
    }
}
