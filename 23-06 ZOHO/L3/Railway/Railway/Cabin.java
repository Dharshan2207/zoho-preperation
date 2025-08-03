package Railway;

public class Cabin {
    Berth[] berths = new Berth[8];

    boolean isCabinFull;

    public Cabin(int seatNumber){
        this.isCabinFull = false;
        Berth b1 = new Berth("LB", seatNumber++);
        Berth b2 = new Berth("MB", seatNumber++);
        Berth b3 = new Berth("UB", seatNumber++);
        Berth b4 = new Berth("LB", seatNumber++);
        
        Berth b5 = new Berth("MB", seatNumber++);
        Berth b6 = new Berth("UB", seatNumber++);
        Berth b7 = new Berth("SL", seatNumber++);
        Berth b8 = new Berth("SU", seatNumber++);

        berths[0] = b1;
        berths[1] = b2;
        berths[2] = b3;
        berths[3] = b4;
        berths[4] = b5;
        berths[5] = b6;
        berths[6] = b7;
        berths[7] = b8;
        
    }
    public void displayCabin(){
        for(Berth berth : berths){
            berth.displayDetails();
        }
    }
    public Berth searchBerth(){
        for(Berth berth : berths){
            if(berth.isAvalable()){
                return berth;
            }
        }
        return null;
    }

    public Berth searchSpecialBerth(){
        for(Berth berth : berths){
            if(berth.isAvalable() && berth.getType().equals("LB")){
                return berth;
            }
        }
        return null;
    }

    public Berth searchAny() {
    for (Berth berth : berths) {
        if (berth.isAvalable()) {
            return berth;
        }
    }
    return null;
}

    public boolean isCabinFull(){
        for(Berth berth : berths){
            if(berth.isAvailable()){
                isCabinFull = false;
                return false;
            }
        }
        return true;
    }
}
