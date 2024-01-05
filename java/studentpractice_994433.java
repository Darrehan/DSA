// Practice program from student challange 

class Subject_888{
    private String subID;
    private String name;
    private int maxMarks;
    private int marksObtain;

    public Subject_888(String subID, String name, int maxMarks,int marksObtain) {
        this.subID = subID;
        this.name = name;
        this.maxMarks = maxMarks; // this operator is used to reduce the name ambiguity but in c++ we use this-> to reduce name ambiguity 
        this.marksObtain=marksObtain;
    }

    public String getSubID() {
        return subID; // this funtion is called Accesser
    }

    public String getName() {
        return name;
    }

    public int getMaxMarks() {
        return maxMarks;  
    }

    public int getMarksObtain() {
        return marksObtain;
    }

    public void setMaxMarks(int mm) {  // the funtion is called mutator
        maxMarks = mm;
    }

    public void setMarksObtain(int m) {
        marksObtain = m;                // the funtion is called mutator
    }

    boolean isQualified() {
        return marksObtain >= maxMarks / 10 * 4;   // mean's if student is getting 40 % than its qualified 
    }

    public String toString() {
        return "\nSubject ID:" + subID + "\nName :" + name + "\nMarks Obtained: " + marksObtain +"\nis it qualified buddy "+ isQualified();
        // if we want to print object by itself than object should have toString() method implemented
    }
}

class Student {
    private String rollNo;
    private String name;
    private String dept;
    private int numOfSub;
    private Subject_888 sub[];  // array of subjects

    public Student(String roll, String name) {
        this.rollNo = roll;
        this.name = name;

    }

    public Student(String roll, String name, int ns) {
        this.rollNo = roll;
        this.name = name;
        this.numOfSub = ns;
    }

    public String getRollNo() {
        return rollNo;
    }

    public String getName() {
        return name;
    }

    public String getDept() {
        return dept;
    }

    public int getNoOfSubjects() {
        return numOfSub;
    }

    public Subject_888[] getSubjects() {   // here it's returning array of all subjects 
        return sub;
    }

    public void setDept(String dept) {
        this.dept = dept;
    }

    public void setSubjects(Subject_888... subs) {
        for (int i = 0; i < subs.length; i++)
            sub[i] = subs[i];
    }

    public String toString() {
        return "Roll :" + rollNo + "\nName :" + name + "\nDept :" + dept;
    }

}

public class studentpractice_994433 {

    public static void main(String[] args) {
        Subject_888 subs[] = new Subject_888[3];
        subs[0] = new Subject_888("S-101", "Data structure", 100,50);
        subs[1] = new Subject_888("S-102", "Algorithm", 100,100);
        subs[2] = new Subject_888("S-103", "Operating Systems", 100,30);

        for (Subject_888 s : subs)
            System.out.println(s);

    }

}