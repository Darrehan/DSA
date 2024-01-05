
class Studentdemo_9080 {
    public int roll;
    public String name;
    public String course;
    public int m1, m2, m3;

    public int total() {
        return m1 + m2 + m3;
    }

    public float average() {
        return (float) total() / 3;
    }

    public char grade() {
        if (average() >= 60)
            return 'A';
        else
            return 'B';
    }

    // if we want to object print itself than object should have toString()method
    // implemented
    public String toString() {
        return "Roll No:" + roll + "\n" + "Name:" + name + "\n" + "Course:" + course + "\n";
    }

    public String details() {
        return "Roll No:" + roll + "\n" + "Name:" + name + "\n" + "Course:" + course + "\n";
    }
}

public class studentpractice_56565 {

    public static void main(String[] args) {
        Studentdemo_9080 s = new Studentdemo_9080();

        s.roll = 1;
        s.name = "John";
        s.course = "CS";
        s.m1 = 70;
        s.m2 = 80;
        s.m3 = 65;

        System.out.println("Total : " + s.total());
        System.out.println("Average : " + s.average());
        System.out.println("Grade : " + s.grade());
        System.out.println("Details:\n" + s);
        System.out.println("Details:\n" + s.details());

    }

}