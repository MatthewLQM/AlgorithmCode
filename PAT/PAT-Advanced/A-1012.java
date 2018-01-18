import java.util.*;

public class Main {

    static Map<String, Student> map;
    static Scanner sc;

    public static void main(String[] args) {
        sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        Student[] stu = new Student[N];
        init(stu, N);
        for (int i = 0; i < N; i++) {
            solve(stu[i], N);
        }
        for (int i = 0; i < N; i++) {
            map.put(stu[i].ID, stu[i]);
        }
        for (int i = 0; i < M; i++) {
            String IDTest = sc.next();
            if (map.containsKey(IDTest)) {
                Student student = map.get(IDTest);
                System.out.println(student.bestRank + " " + student.bestCourse);
            } else {
                System.out.println("N/A");
            }
        }
    }

    private static void init(Student[] stu, int N) {
        map = new HashMap<>();
        Student.cSeq = new Integer[N];
        Student.mSeq = new Integer[N];
        Student.eSeq = new Integer[N];
        Student.aSeq = new Integer[N];
        for (int i = 0; i < N; i++) {
            String ID = sc.next();
            int c = sc.nextInt(), m = sc.nextInt(), e = sc.nextInt();
            stu[i] = new Student(ID, c, m, e);
            map.put(stu[i].ID, stu[i]);
        }
        Collection<Student> lists = map.values();
        int i = 0;
        for (Student s : lists) {
            Student.cSeq[i] = s.scores[0];
            Student.mSeq[i] = s.scores[1];
            Student.eSeq[i] = s.scores[2];
            Student.aSeq[i] = s.scores[3];
            i++;
        }
        Comparator<Integer> c = new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2 - o1;
            }
        };
        Arrays.sort(Student.cSeq, c);
        Arrays.sort(Student.mSeq, c);
        Arrays.sort(Student.eSeq, c);
        Arrays.sort(Student.aSeq, c);
    }

    private static void solve(Student stu, int N) {
        int min = 5;
        for (int i = 0; i < N; i++) {
            if (stu.scores[3] == Student.aSeq[i] && i < min) {
                nameResult(stu, "A", i);
                min = i;
                break;
            }
            if (stu.scores[0] == Student.cSeq[i] && i < min) {
                nameResult(stu, "C", i);
                min = i;
                break;
            }
            if (stu.scores[1] == Student.mSeq[i] && i < min) {
                nameResult(stu, "M", i);
                min = i;
                break;
            }
            if (stu.scores[2] == Student.eSeq[i] && i < min) {
                nameResult(stu, "E", i);
                min = i;
                break;
            }
        }
        stu.bestRank = min + 1;
    }

    private static void nameResult(Student stu, String subject, int rank) {
        stu.bestCourse = subject;
        stu.bestRank = rank;
    }

    static class Student {
        public static Integer[] cSeq;
        public static Integer[] mSeq;
        public static Integer[] eSeq;
        public static Integer[] aSeq;
        String ID;
        int scores[] = new int[4];
        int bestRank;
        String bestCourse;

        public Student(String ID, int a, int b, int c) {
            super();
            this.ID = ID;
            scores[0] = a;
            scores[1] = b;
            scores[2] = c;
            scores[3] = (a + b + c) / 3;
        }
    }
}