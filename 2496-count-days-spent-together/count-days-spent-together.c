int day(char *day){
    int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int month,date;
    sscanf(day,"%2d-%2d",&month,&date);
    int total=0;
    for(int i=0;i<month-1;i++){
        total+=months[i];
    }
    return total+date;

}
int countDaysTogether(char* arriveAlice, char* leaveAlice, char* arriveBob, char* leaveBob) {
    int start= day(arriveAlice)>day(arriveBob)?day(arriveAlice):day(arriveBob);
    int end= day(leaveAlice)<day(leaveBob)?day(leaveAlice):day(leaveBob);
    return start<=end? end-start+1:0;
}