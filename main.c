#include <stdio.h>
#include <stdbool.h>

int main(){
    bool n[1000] = {0};//ָʾ�Ƿ���
    bool m[1000] = {0};
    int liveNumber = 0;//������
    int T = 0;//��������
    int prognosis = 0;//Ԥ������
    int death = 0;//��������

    printf("���������������");
    scanf("%d",&liveNumber);
    printf("�������������ڣ�");
    scanf("%d",&T);
    for(int i = 0;i < liveNumber;i++){
        n[i] = 1;//������ֵ��Ϊһ
    }
    for (int k = 0; k < liveNumber; ++k) {
        printf("%d ",k+1);

    }
    //��ʼɱ��
    for(int y = 0;;y++) {
        if (n[y] == 1){
            prognosis++;//���������
        }
        if (prognosis == T){
            n[y] = 0;
            prognosis = 0;
            printf("\n�˴����߱��Ϊ��%d\n",y+1);
            getchar();getchar();
            death++;
        }
        //��������ž�����
        if (y >= liveNumber) y = -1;
        //ֻʣһ���ˣ�������
        if (liveNumber - death == 1)
            break;
    }
    for(int z = 0;z < liveNumber;z++){
        if (n[z] == 1)
            printf("����Ҵ��߱�ţ�%d",z+1);
    }
    return 0;
}
//    int person[10]={};
//    int j = 0;
//    int n = 0;
//
//    printf("���������������");
//    scanf("%d",&j);
//    for (int i = 1; i <= j; ++i) {
//        person[i]=i;
//        printf("%d ",person[i]);
//    }
//    printf("\n��������ɱ��ţ�");
//    scanf("%d",&n);
//    return 0;
//}