package com.company;

public class Language {

    protected String name;
    protected int numSpeakers;
    protected String regionsSpoken;
    protected String wordOrder;

    public Language(String langName, int speakers, String regions, String wdOrder) {
        this.name = langName;
        this.numSpeakers = speakers;
        this.regionsSpoken = regions;
        this.wordOrder = wdOrder;
    }

    public void getInfo() {
        System.out.println(this.name + " is spoken by " + this.numSpeakers + " people mainly in " + this.regionsSpoken+ ".");
        System.out.println("The language follows the word order: " + this.wordOrder + ".\n");
    }

    public static void main (String[] args) {
        Language tagalog = new Language("Tagalog", 22500000, "Philippines", "subject-verb-object");
        tagalog.getInfo();

        Mayan mayan = new Mayan("Chontal", 36810);
        mayan.getInfo();

        SinoTibetan sino = new SinoTibetan("Mandarin Chinese", 132456789);
        sino.getInfo();
        SinoTibetan burm = new SinoTibetan("Burmese", 41638541);
        burm.getInfo();
    }
}