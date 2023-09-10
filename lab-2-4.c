#include<stdio.h>
int main(){

float m_1, m_2, m_3, m_4, m_5, total, avg;

printf ("Enter marks: ");

printf ("\n\nEnglish: ");
scanf ("%f", &m_1);

printf ("Physics: ");
scanf ("%f", &m_2);

printf ("Chemistry: ");
scanf ("%f", &m_3);

printf ("Maths: ");
scanf ("%f", &m_4);

printf ("Computer Science: ");
scanf ("%f", &m_5);

total= m_1 + m_2 + m_3 + m_4 + m_5;
avg= (m_1 + m_2 + m_3 + m_4 + m_5)/5;

printf ("\nTotal marks: %f", total);
printf ("\n\nAverage marks: %f\n\n", avg);

if (avg>=91 && avg<=100){
    printf ("Grade: A");
}

else if (avg>=81 && avg<=90){
    printf ("Grade: B");
}

else if (avg>=71 && avg<=80){
    printf ("Grade: C");
}

else if (avg>=61 && avg<=70){
    printf ("Grade: D");
}

else if (avg>=51 && avg<=60){
    printf ("Grade: E");
}

else if (avg>=41 && avg<=50){
    printf ("Grade: F");
}

else {
    printf ("Grade: Fail");
}

return 0;

}