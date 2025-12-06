#include<bits/stdc++.h>
using namespace std;

int score1[8], score2[8], p1, p2, w;

bool ck40() {
    for(int i=1; i<=4; i++) score1[i]=11;
    for(int i=1; i<=4; i++) score2[i]=0;
    for(score2[1]=0; score2[1]<=9; score2[1]++) {
        for(score2[2]=0; score2[2]<=9; score2[2]++) {
            for(score2[3]=0; score2[3]<=9; score2[3]++) {
                for(score2[4]=0; score2[4]<=9; score2[4]++) {
                    if(score1[1]+score1[2]+score1[3]+score1[4]==p1&&score2[1]+score2[2]+score2[3]+score2[4]==p2) {
                        return 1;
                    }
                }
            }
        }
    }
    for(int i=1; i<=3; i++) score1[i]=11;
    for(int i=1; i<=3; i++) score2[i]=0;
    for(score2[1]=0; score2[1]<=9; score2[1]++) {
        for(score2[2]=0; score2[2]<=9; score2[2]++) {
            for(score2[3]=0; score2[3]<=9; score2[3]++) {
                if((p1-33)-(p2-score2[1]-score2[2]-score2[3])==2&&p1-33>=12&&p2-score2[1]-score2[2]-score2[3]>=10){
                    score1[4]=p1-33;
                    score2[4]=p2-score2[1]-score2[2]-score2[3];
                    return 1;
                }
            }
        }
    }
    return 0;
}

bool ck41() {
    int ts1=0, ts2=0;
    score2[1]=11; score1[1]=0;
    for(int i=2; i<=5; i++) score1[i]=11;
    for(int i=2; i<=5; i++) score2[i]=0;
    for(score1[1]=0; score1[1]<=9; score1[1]++) {
        for(score2[2]=0; score2[2]<=9; score2[2]++) {
            for(score2[3]=0; score2[3]<=9; score2[3]++) {
                for(score2[4]=0; score2[4]<=9; score2[4]++) {
                    for(score2[5]=0; score2[5]<=9; score2[5]++) {
                        ts1=0; ts2=0;
                        for(int i=1; i<=5; i++) {ts1+=score1[i]; ts2+=score2[i];}
                        if(ts1==p1&&ts2==p2) return 1;
                    }
                }
            }
        }
    }
    score1[1]=0; score2[1]=0;
    for(int i=2; i<=5; i++) score1[i]=11;
    for(int i=2; i<=5; i++) score2[i]=0;
    for(score2[2]=0; score2[2]<=9; score2[2]++) {
        for(score2[3]=0; score2[3]<=9; score2[3]++) {
            for(score2[4]=0; score2[4]<=9; score2[4]++) {
                for(score2[5]=0; score2[5]<=9; score2[5]++) {
                    ts1=0; ts2=0;
                    for(int i=2; i<=5; i++) {ts1+=score1[i]; ts2+=score2[i];}
                    if((p2-ts2)-(p1-ts1)==2&&p2-ts2>=12&&p1-ts1>=10) {
                        score1[1]=p1-ts1;
                        score2[1]=p2-ts2;
                        return 1;
                    }
                }
            }
        }
    }
    score2[1]=11; score1[1]=0;
    score1[2]=0; score2[2]=0;
    for(int i=3; i<=5; i++) score1[i]=11;
    for(int i=3; i<=5; i++) score2[i]=0;
    for(score1[1]=0; score1[1]<=9; score1[1]++) {
        for(score2[3]=0; score2[3]<=9; score2[3]++) {
            for(score2[4]=0; score2[4]<=9; score2[4]++) {
                for(score2[5]=0; score2[5]<=9; score2[5]++) {
                    ts1=0; ts2=0;
                    for(int i=1; i<=5; i++) {ts1+=score1[i]; ts2+=score2[i];}
                    if((p1-ts1)-(p2-ts2)==2&&p1-ts1>=12&&p2-ts2>=10) {
                        score1[2]=p1-ts1;
                        score2[2]=p2-ts2;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

bool ck42() {
    int ts1=0, ts2=0;
    score1[1]=0; score2[1]=11;
    score1[2]=0; score2[2]=11;
    for(int i=3; i<=6; i++) {score1[i]=11; score2[i]=0;}
    for(score1[1]=0; score1[1]<=9; score1[1]++) {
        for(score1[2]=0; score1[2]<=9; score1[2]++) {
            for(score2[3]=0; score2[3]<=9; score2[3]++) {
                for(score2[4]=0; score2[4]<=9; score2[4]++) {
                    for(score2[5]=0; score2[5]<=9; score2[5]++) {
                        for(score2[6]=0; score2[6]<=9; score2[6]++) {
                            ts1=0; ts2=0;
                            for(int i=1; i<=6; i++) {ts1+=score1[i]; ts2+=score2[i];}
                            if(ts1==p1&&ts2==p2) return 1;   
                        }
                    }
                }
            }
        }
    }
    score1[1]=0; score2[1]=0;
    score1[2]=0; score2[2]=11;
    for(int i=3; i<=6; i++) {score1[i]=11; score2[i]=0;}
    for(score1[2]=0; score1[2]<=9; score1[2]++) {
        for(score2[3]=0; score2[3]<=9; score2[3]++) {
            for(score2[4]=0; score2[4]<=9; score2[4]++) {
                for(score2[5]=0; score2[5]<=9; score2[5]++) {
                    for(score2[6]=0; score2[6]<=9; score2[6]++) {
                        ts1=0; ts2=0;
                        for(int i=1; i<=6; i++) {ts1+=score1[i]; ts2+=score2[i];}
                        if((p2-ts2)-(p1-ts1)==2&&p2-ts2>=12&&p1-ts1>=10) {
                            score1[1]=p1-ts1;
                            score2[1]=p2-ts2;
                            return 1;
                        }  
                    }
                }
            }
        }
    }
    score1[1]=0; score2[1]=11;
    score1[2]=0; score2[1]=11;
    score1[3]=0; score2[3]=0;
    for(int i=4; i<=6; i++) {score1[i]=11; score2[i]=0;}
    for(score1[1]=0; score1[1]<=9; score1[1]++) {
        for(score1[2]=0; score1[2]<=9; score1[2]++) {
            for(score2[4]=0; score2[4]<=9; score2[4]++) {
                for(score2[5]=0; score2[5]<=9; score2[5]++) {
                    for(score2[6]=0; score2[6]<=9; score2[6]++) {
                        ts1=0; ts2=0;
                        for(int i=1; i<=6; i++) {ts1+=score1[i]; ts2+=score2[i];}
                        if((p1-ts1)-(p2-ts2)==2&&p1-ts1>=12&&p2-ts2>=10) {
                            score1[3]=p1-ts1;
                            score2[3]=p2-ts2;
                            return 1;
                        }  
                    }
                }
            }
        }
    }
    return 0;
}

bool ck43() {
    int ts1=0, ts2=0;
    for(int i=1; i<=3; i++) {score1[i]=0; score2[i]=11;}
    for(int i=4; i<=7; i++) {score1[i]=11; score2[i]=0;}
    for(score1[1]=0; score1[1]<=9; score1[1]++) {
        for(score1[2]=0; score1[2]<=9; score1[2]++) {
            for(score1[3]=0; score1[3]<=9; score1[3]++) {
                for(score2[4]=0; score2[4]<=9; score2[4]++) {
                    for(score2[5]=0; score2[5]<=9; score2[5]++) {
                        for(score2[6]=0; score2[6]<=9; score2[6]++) {
                            for(score2[7]=0; score2[7]<=9; score2[7]++) {
                                ts1=0; ts2=0;
                                for(int i=1; i<=7; i++) {ts1+=score1[i]; ts2+=score2[i];}
                                if(ts1==p1&&ts2==p2) return 1;   
                            }
                        }
                    }
                }
            }
        }
    }
    score1[1]=0; score2[1]=0;
    for(int i=2; i<=3; i++) {score1[i]=0; score2[i]=11;}
    for(int i=4; i<=7; i++) {score1[i]=11; score2[i]=0;}
    for(score1[2]=0; score1[2]<=9; score1[2]++) {
        for(score1[3]=0; score1[3]<=9; score1[3]++) {
            for(score2[4]=0; score2[4]<=9; score2[4]++) {
                for(score2[5]=0; score2[5]<=9; score2[5]++) {
                    for(score2[6]=0; score2[6]<=9; score2[6]++) {
                        for(score2[7]=0; score2[7]<=9; score2[7]++) {
                            ts1=0; ts2=0;
                            for(int i=1; i<=7; i++) {ts1+=score1[i]; ts2+=score2[i];}
                            if((p2-ts2)-(p1-ts1)==2&&p2-ts2>=12&&p1-ts1>=10) {
                                score1[1]=p1-ts1;
                                score2[1]=p2-ts2;
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    score1[4]=0; score2[4]=0;
    for(int i=1; i<=3; i++) {score1[i]=0; score2[i]=11;}
    for(int i=5; i<=7; i++) {score1[i]=11; score2[i]=0;}
    for(score1[1]=0; score1[1]<=9; score1[1]++) {
        for(score1[2]=0; score1[2]<=9; score1[2]++) {
            for(score1[3]=0; score1[3]<=9; score1[3]++) {
                for(score2[5]=0; score2[5]<=9; score2[5]++) {
                    for(score2[6]=0; score2[6]<=9; score2[6]++) {
                        for(score2[7]=0; score2[7]<=9; score2[7]++) {
                            ts1=0; ts2=0;
                            for(int i=1; i<=7; i++) {ts1+=score1[i]; ts2+=score2[i];}
                            if((p1-ts1)-(p2-ts2)==2&&p1-ts1>=12&&p2-ts2>=10) {
                                score1[4]=p1-ts1;
                                score2[4]=p2-ts2;
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

bool ck04() {
    for(int i=1; i<=4; i++) score1[i]=0;
    for(int i=1; i<=4; i++) score2[i]=11;
    for(score1[1]=0; score1[1]<=9; score1[1]++) {
        for(score1[2]=0; score1[2]<=9; score1[2]++) {
            for(score1[3]=0; score1[3]<=9; score1[3]++) {
                for(score1[4]=0; score1[4]<=9; score1[4]++) {
                    if(score1[1]+score1[2]+score1[3]+score1[4]==p1&&score2[1]+score2[2]+score2[3]+score2[4]==p2) {
                        return 1;
                    }
                }
            }
        }
    }
    for(int i=1; i<=3; i++) score1[i]=0;
    for(int i=1; i<=3; i++) score2[i]=11;
    for(score1[1]=0; score1[1]<=9; score1[1]++) {
        for(score1[2]=0; score1[2]<=9; score1[2]++) {
            for(score1[3]=0; score1[3]<=9; score1[3]++) {
                if((p2-33)-(p1-score1[1]-score1[2]-score1[3])==2&&p2-33>=12&&p1-score1[1]-score1[2]-score1[3]>=10){
                    score2[4]=p2-33;
                    score1[4]=p1-score1[1]-score1[2]-score1[3];
                    return 1;
                }
            }
        }
    }
    return 0;
}

bool ck14() {
    int ts1=0, ts2=0;
    score1[1]=11; score2[1]=0;
    for(int i=2; i<=5; i++) score1[i]=0;
    for(int i=2; i<=5; i++) score2[i]=11;
    for(score2[1]=0; score2[1]<=9; score2[1]++) {
        for(score1[2]=0; score1[2]<=9; score1[2]++) {
            for(score1[3]=0; score1[3]<=9; score1[3]++) {
                for(score1[4]=0; score1[4]<=9; score1[4]++) {
                    for(score1[5]=0; score1[5]<=9; score1[5]++) {
                        ts1=0; ts2=0;
                        for(int i=1; i<=5; i++) {ts1+=score1[i]; ts2+=score2[i];}
                        if(ts1==p1&&ts2==p2) return 1;
                    }
                }
            }
        }
    }
    score1[1]=0; score2[1]=0;
    for(int i=2; i<=5; i++) score1[i]=0;
    for(int i=2; i<=5; i++) score2[i]=11;
    for(score1[2]=0; score1[2]<=9; score1[2]++) {
        for(score1[3]=0; score1[3]<=9; score1[3]++) {
            for(score1[4]=0; score1[4]<=9; score1[4]++) {
                for(score1[5]=0; score1[5]<=9; score1[5]++) {
                    ts1=0; ts2=0;
                    for(int i=2; i<=5; i++) {ts1+=score1[i]; ts2+=score2[i];}
                    if((p1-ts1)-(p2-ts2)==2&&p1-ts1>=12&&p2-ts2>=10) {
                        score1[1]=p1-ts1;
                        score2[1]=p2-ts2;
                        return 1;
                    }
                }
            }
        }
    }
    score1[1]=11; score2[1]=0;
    score1[2]=0; score2[2]=0;
    for(int i=3; i<=5; i++) score1[i]=0;
    for(int i=3; i<=5; i++) score2[i]=11;
    for(score2[1]=0; score2[1]<=9; score2[1]++) {
        for(score1[3]=0; score1[3]<=9; score1[3]++) {
            for(score1[4]=0; score1[4]<=9; score1[4]++) {
                for(score1[5]=0; score1[5]<=9; score1[5]++) {
                    ts1=0; ts2=0;
                    for(int i=1; i<=5; i++) {ts1+=score1[i]; ts2+=score2[i];}
                    if((p2-ts2)-(p1-ts1)==2&&p2-ts2>=12&&p1-ts1>=10) {
                        score1[2]=p1-ts1;
                        score2[2]=p2-ts2;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

bool ck24() {
    int ts1=0, ts2=0;
    score1[1]=11; score2[1]=0;
    score1[2]=11; score2[2]=0;
    for(int i=3; i<=6; i++) {score1[i]=0; score2[i]=11;}
    for(score2[1]=0; score2[1]<=9; score2[1]++) {
        for(score2[2]=0; score2[2]<=9; score2[2]++) {
            for(score1[3]=0; score1[3]<=9; score1[3]++) {
                for(score1[4]=0; score1[4]<=9; score1[4]++) {
                    for(score1[5]=0; score1[5]<=9; score1[5]++) {
                        for(score1[6]=0; score1[6]<=9; score1[6]++) {
                            ts1=0; ts2=0;
                            for(int i=1; i<=6; i++) {ts1+=score1[i]; ts2+=score2[i];}
                            if(ts1==p1&&ts2==p2) return 1;   
                        }
                    }
                }
            }
        }
    }
    score1[1]=0; score2[1]=0;
    score1[2]=11; score2[2]=0;
    for(int i=3; i<=6; i++) {score1[i]=0; score2[i]=11;}
    for(score2[2]=0; score2[2]<=9; score2[2]++) {
        for(score1[3]=0; score1[3]<=9; score1[3]++) {
            for(score1[4]=0; score1[4]<=9; score1[4]++) {
                for(score1[5]=0; score1[5]<=9; score1[5]++) {
                    for(score1[6]=0; score1[6]<=9; score1[6]++) {
                        ts1=0; ts2=0;
                        for(int i=1; i<=6; i++) {ts1+=score1[i]; ts2+=score2[i];}
                        if((p1-ts1)-(p2-ts2)==2&&p1-ts1>=12&&p2-ts2>=10) {
                            score1[1]=p1-ts1;
                            score2[1]=p2-ts2;
                            return 1;
                        }  
                    }
                }
            }
        }
    }
    score1[1]=11; score2[1]=0;
    score1[2]=11; score2[1]=0;
    score1[3]=0; score2[3]=0;
    for(int i=4; i<=6; i++) {score1[i]=0; score2[i]=11;}
    for(score2[1]=0; score2[1]<=9; score2[1]++) {
        for(score2[2]=0; score2[2]<=9; score2[2]++) {
            for(score1[4]=0; score1[4]<=9; score1[4]++) {
                for(score1[5]=0; score1[5]<=9; score1[5]++) {
                    for(score1[6]=0; score1[6]<=9; score1[6]++) {
                        ts1=0; ts2=0;
                        for(int i=1; i<=6; i++) {ts1+=score1[i]; ts2+=score2[i];}
                        if((p2-ts2)-(p1-ts1)==2&&p2-ts2>=12&&p1-ts1>=10) {
                            score1[3]=p1-ts1;
                            score2[3]=p2-ts2;
                            return 1;
                        }  
                    }
                }
            }
        }
    }
    return 0;
}

bool ck34() {
    int ts1=0, ts2=0;
    for(int i=1; i<=3; i++) {score1[i]=11; score2[i]=0;}
    for(int i=4; i<=7; i++) {score1[i]=0; score2[i]=11;}
    for(score2[1]=0; score2[1]<=9; score2[1]++) {
        for(score2[2]=0; score2[2]<=9; score2[2]++) {
            for(score2[3]=0; score2[3]<=9; score2[3]++) {
                for(score1[4]=0; score1[4]<=9; score1[4]++) {
                    for(score1[5]=0; score1[5]<=9; score1[5]++) {
                        for(score1[6]=0; score1[6]<=9; score1[6]++) {
                            for(score1[7]=0; score1[7]<=9; score1[7]++) {
                                ts1=0; ts2=0;
                                for(int i=1; i<=7; i++) {ts1+=score1[i]; ts2+=score2[i];}
                                if(ts1==p1&&ts2==p2) return 1;   
                            }
                        }
                    }
                }
            }
        }
    }
    score1[1]=0; score2[1]=0;
    for(int i=2; i<=3; i++) {score1[i]=11; score2[i]=0;}
    for(int i=4; i<=7; i++) {score1[i]=0; score2[i]=11;}
    for(score2[2]=0; score2[2]<=9; score2[2]++) {
        for(score2[3]=0; score2[3]<=9; score2[3]++) {
            for(score1[4]=0; score1[4]<=9; score1[4]++) {
                for(score1[5]=0; score1[5]<=9; score1[5]++) {
                    for(score1[6]=0; score1[6]<=9; score1[6]++) {
                        for(score1[7]=0; score1[7]<=9; score1[7]++) {
                            ts1=0; ts2=0;
                            for(int i=1; i<=7; i++) {ts1+=score1[i]; ts2+=score2[i];}
                            if((p1-ts1)-(p2-ts2)==2&&p1-ts1>=12&&p2-ts2>=10) {
                                score1[1]=p1-ts1;
                                score2[1]=p2-ts2;
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    score1[4]=0; score2[4]=0;
    for(int i=1; i<=3; i++) {score1[i]=11; score2[i]=0;}
    for(int i=5; i<=7; i++) {score1[i]=0; score2[i]=11;}
    for(score2[1]=0; score2[1]<=9; score2[1]++) {
        for(score2[2]=0; score2[2]<=9; score2[2]++) {
            for(score2[3]=0; score2[3]<=9; score2[3]++) {
                for(score1[5]=0; score1[5]<=9; score1[5]++) {
                    for(score1[6]=0; score1[6]<=9; score1[6]++) {
                        for(score1[7]=0; score1[7]<=9; score1[7]++) {
                            ts1=0; ts2=0;
                            for(int i=1; i<=7; i++) {ts1+=score1[i]; ts2+=score2[i];}
                            if((p2-ts2)-(p1-ts1)==2&&p2-ts2>=12&&p1-ts1>=10) {
                                score1[4]=p1-ts1;
                                score2[4]=p2-ts2;
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int main() {
    cin>>p1>>p2>>w;
    if(w==1) {
        if(ck40()==1) {
            cout<<"4 0\n"<<score1[1]<<" "<<score2[1]<<"\n"<<score1[2]<<" "<<score2[2]<<"\n"<<score1[3]<<" "<<score2[3]<<"\n"<<score1[4]<<" "<<score2[4]<<"\n";
            return 0;
        }
        if(ck41()==1) {
            cout<<"4 1\n";
            for(int i=1; i<=5; i++) cout<<score1[i]<<" "<<score2[i]<<"\n";
            return 0;
        }
        if(ck42()==1) {
            cout<<"4 2\n";
            for(int i=1; i<=6; i++) cout<<score1[i]<<" "<<score2[i]<<"\n";
            return 0;
        }
        if(ck43()==1) {
            cout<<"4 3\n";
            for(int i=1; i<=7; i++) cout<<score1[i]<<" "<<score2[i]<<"\n";
            return 0;
        }
    }else {
        if(ck04()==1) {
            cout<<"0 4\n";
            for(int i=1; i<=4; i++) cout<<score1[i]<<" "<<score2[i]<<"\n";
            return 0;
        }
        if(ck14()==1) {
            cout<<"1 4\n";
            for(int i=1; i<=5; i++) cout<<score1[i]<<" "<<score2[i]<<"\n";
            return 0;
        }
        if(ck24()==1) {
            cout<<"2 4\n";
            for(int i=1; i<=6; i++) cout<<score1[i]<<" "<<score2[i]<<"\n";
            return 0;
        }
        if(ck34()==1) {
            cout<<"3 4\n";
            for(int i=1; i<=7; i++) cout<<score1[i]<<" "<<score2[i]<<"\n";
            return 0;
        }
    }
    cout<<"-1\n";
    return 0;
}