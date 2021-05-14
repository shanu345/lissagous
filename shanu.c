#include<stdio.h>
#include<math.h>
double x(double alpha,double B){
    return B*sin(alpha);
}
double y(double alpha, double A,double n, double delta){
    return A*sin(n*alpha+delta);
}
int main(){
    double alpha;
    FILE *fp=NULL;
    double A,B,n,delta;
    printf("Enter the frequency\n");
    scanf("%lf",&n);
    fp=fopen("lissajous.dat","w");
    //Loop to calculate and store data-points/
    for(alpha=0;alpha<=4*M_PI;alpha=alpha+0.01){
        //Change delta here M_PI is the value of Pie/
        A=2; //Amplitudes of the two signals same
        B=2; //Amplitudes of the two signals same
        delta=M_PI;
        fprintf(fp,"%lf\t%lf\n",x(alpha,B),y(alpha,A,n,delta));
    }
    return 0;
}
