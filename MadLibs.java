public class MadLibs
{
    /* This program generates a mad libbed story
          Author: Lennard
          Date: 10/4/21
     */
    public static void main(String[] args)
    {
        String name1 = "Lennard";
        String name2 = "Lauren";
        int number = 3000;
        String place1 = "Europe";
        String adjective1 = "lit";
        String adjective2 =  "bullshitass";
        String adjective3 = "sauced";
        String verb1 = "dance";
        String noun1 = "nematoads";
        String noun2 = "lean";
        String noun3 = "night";
        String noun4 = "noob";
        String noun5 = "balls";
        String noun6 = "nematoad";

        //The template for the story
        String story = "This morning "+name1+" woke up feeling "+adjective1+". 'It is going to be a "+adjective2+" day!' Outside, a bunch of "+noun1+"s were protesting to keep "+noun2+" in stores. They began to "+verb1+" to the rhythm of the "+noun3+", which made all the "+noun4+"s very "+adjective3+". Concerned, "+name1+" texted "+name2+", who flew "+name1+" to "+place1+" and dropped "+name1+" in a puddle of frozen "+noun5+". "+name1+" woke up in the year "+number+", in a world where "+noun6+"s ruled the world.";
        System.out.println(story);
    }
}
