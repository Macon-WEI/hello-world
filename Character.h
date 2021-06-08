#pragma once
#define AD_damage                       100            //AD�˺�
#define AP_damage                       101            //AP�˺�
#define REAL_damage                     102            //��ʵ�˺�

#define Occupation_CIKE                 1001           //ְҵ-�̿�
#define Occupation_YOUXIA               1002           //ְҵ-����
#define Occupation_DOUSHI               1003           //ְҵ-��ʿ
#define Occupation_ZHENGFUZHE           1004           //ְҵ-������
#define Occupation_FUSUZHE              1005           //ְҵ-������
#define Occupation_SHENYUZHE            1006           //ְҵ-������
#define Occupation_QISHI                1007           //ְҵ-��ʿ
#define Occupation_FASHI                1008           //ְҵ-��ʦ
#define Occupation_SHENDUNZHANSHI       1009           //ְҵ-���սʿ
#define Occupation_MISHUSHI             1010           //ְҵ-����ʦ
#define Occupation_ZHONGQIBING          1011           //ְҵ-�����
#define Occupation_DAMOWANG             1012           //ְҵ-��ħ��
#define Occupation_SHENWANG             1013           //ְҵ-����
#define Occupation_XUNLONGDASHI         1014           //ְҵ-ѱ����ʦ

#define Feature_POBAI                   2001           //����-�ưܾ���
#define Feature_HEIYE                   2002           //����-��ҹʹ��
#define Feature_MONV                    2003           //����-ħŮ
#define Feature_XIAOEMO                 2004           //����-С��ħ
#define Feature_TULONG                  2005           //����-������ʿ
#define Feature_SANGSHI                 2006           //����-ɥʬ
#define Feature_SHENGGUANGWEISHI        2007           //����-ʥ����ʿ
#define Feature_LIMING                  2008           //����-����ʹ��
#define Feature_SHENYOUZHISEN           2009           //����-����֮ɭ
#define Feature_LONGZU                  2010           //����-����
#define Feature_TIEJIAWEISHI            2011           //����-������ʿ
#define Feature_YONGLIESHUANGZI         2012           //����-����˫��
#define Feature_FUSHENGWANGHUN          2013           //����-��������

#define Debuff_None                    3000           //��Debuff
#define Debuff_stun                    3001           //Debuff-ѣ��
#define Debuff_slow                    3002           //Debuff-����
#define Debuff_knockup                 3003           //Debuff-����
#define Debuff_root                    3004           //Debuff-����
#define Debuff_blind                   3005           //Debuff-��ä
#define Debuff_taunt                   3006           //Debuff-����
#define Debuff_silence                 3007           //Debuff-��Ĭ
#define Debuff_srslinjured             3008           //Debuff-����
#define Debuff_lowerAD                 3009           //Debuff-���͹�����
#define Debuff_calmdown                3010           //Debuff-ƽ��
#define Debuff_lowerMR                 3011           //Debuff-����ħ��

#define Buff_None                      4000           //��buff
#define Buff_shield                    4001           //Buff-����

#define HERO_Fulajimier                8001      //�������׶�
#define HERO_Wolike                    8002      //�����
#define HERO_VN                        8003      //ޱ��
#define HERO_Bobi                      8004      //����
#define HERO_UD                        8005      //�ڵ϶�
#define HERO_Gulajiasi                 8006      //������˹
#define HERO_Leiouna                   8007      //��ŷ��
#define HERO_Giggs                     8008      //����˹
#define HERO_Kazike                    8009      //���ȿ�
#define HERO_Lisangzhuo                8010      //��ɣ׿
#define HERO_Kelie                     8011      //����
#define HERO_Yatuokesi                 8012      //���п�˹
#define HERO_Kalisita                  8013      //����˹��
#define HERO_Lefulan                   8014      //��ܽ��
#define HERO_Suolaka                   8015      //������
#define HERO_Telangdeer                8016      //���ʵ¶�
#define HERO_Bulande                   8017      //������
#define HERO_Kainan                    8018      //����
#define HERO_Weilusi                   8019      //ά³˹
#define HERO_Nuotilesi                 8020      //ŵ����˹
#define HERO_Weiketuo                  8021      //ά����
#define HERO_Zhuangseni                8022      //ׯɪ��
#define HERO_Hekalimu                  8023      //�տ���ķ
#define HERO_Xindela                   8024      //������
#define HERO_Chuishi                   8025      //��ʯ
#define HERO_Seti                      8026      //ɪ��
#define HERO_Nunu                      8027      //ŬŬ
#define HERO_Ashe                      8028      //��ϣ
#define HERO_Moganna                   8029      //Ī����
#define HERO_Katelinna                 8030      //��������
#define HERO_NOC                       8031      //ħ��
#define HERO_Lee                       8032      //����
#define HERO_Naideli                   8033      //�ε���
#define HERO_Pansen                    8034      //��ɭ
#define HERO_Ruiwen                    8035      //����
#define HERO_Lux                       8036      //����˿
#define HERO_Lulu                      8037      //¶¶
#define HERO_Jiela                     8038      //���
#define HERO_Yasuo                     8039      //����


#define ��λ���ȵ�����ȥ5    88888

#include "AppDelegate.h"
#include <string>
#include <vector>
#include <map>
#include <Windows.h>
#include <cstdlib>
#include <iostream>
#include "tools.h"
using namespace cocos2d;
using namespace std;

class Hero;
//���ܸ���
struct skill
{
	void InitSkill(int ad,int ap,int real,int regrn,int dbf,double dbfe, int bf,double bfe);
	//void getHero(Hero* h);
	//Hero* that;
	int damageAD;
	int damageAP;
	int damageREAL;
	int Regen;
	int Debuff;
	double DebuffEffect;
	int Buff;
	double BuffEffect;
	std::string describe;
};

//Ӣ�۸���
class Hero :public Node
{
public:
	Hero();//��ʼ��ʱ����Ӣ���Ǽ��Է����ʼ��Ӣ�۸�������
	~Hero();
	void bindSprite(Sprite* sprite);
	Sprite* getSprite();//��ȡ��ǰӢ�۵�Sprite
    Hero* create(Sprite* sprite);
	bool init(Sprite* sprite);

	/*����Ӣ��ID���������ļ��ж�ȡӢ������*/
	static Hero* createFromCsvFileByID(int HeroID,int level);
	bool initFromCsvFileByID(int iHeroID,int level);

	Hero* TargetCapture();                          //Ŀ�겶��
	int CmnATKDamage(Hero* target);                 //��ͨ��������˺�
	void CmnAtkMANA();                              //��ͨ��������
	//int SkillATKDamage(Hero* target);               //���ܹ�������˺�
	void hurtMe(int iDamage, int dmgType);          //�ܵ�����
	bool isDead();                                  //���isDeadֵ
	//��һ��Ϊ�麯��
	void onDead();                                  //����Ч��
	void onHurt(int iHurtValue,int mana);           //�ܵ�����Ч�� 
	virtual void Skill();                           //����Ч��
	virtual void CmnATK_effect();                   //��ͨ����
	void upgrade();                                 //����
	void GoOnStage();                               //Ӣ���ϳ�
	void OutOfStage();                              //Ӣ���³�
	void wearEqpmt(void (*a)(Hero*));               //
protected:
	virtual void UseSkill();                        //ʹ�ü���
	virtual void onBindSprite();                    //�󶨾������
	Hero* Target;                                   //Ӣ��Ŀ�꣨capture������ȡ��
	Vector<int> h_occupation, h_feature;            //Ӣ��ְҵ������
	Sprite* h_sprite;                               //Ӣ��ͼƬ
	skill h_Skill;                                  //Ӣ�ۼ���
	CC_SYNTHESIZE(Hero*, Target, fTarget);          //Ŀ��    
	CC_SYNTHESIZE(int, h_ID, fID);                  //ʵ��ID
	CC_SYNTHESIZE(int, h_iModelID, fModelID);       //��ԴID
	CC_SYNTHESIZE(int, h_iPlayerCode, fPlayerCode); //�����ţ�����������˻��Ƕ��ѣ�
	CC_SYNTHESIZE(std::string, h_sName, fName);     //����
	CC_SYNTHESIZE(int, h_iMaxHP, fMaxHP);           //���HP
	CC_SYNTHESIZE(int, h_iCurHP, fCurHP);           //��ǰHP
	CC_SYNTHESIZE(int, h_iAR, fAR);                 //����
	CC_SYNTHESIZE(int, h_iMR, fMR);                 //ħ��
	CC_SYNTHESIZE(int, h_iSpeed, fSpeed);           //�ƶ��ٶ�
	CC_SYNTHESIZE(int, h_iLevel, fLevel);           //�ȼ�
	CC_SYNTHESIZE(int, h_iAD, fAD);                 //������
	CC_SYNTHESIZE(double, h_iAP, fAP);              //��ǿ
	CC_SYNTHESIZE(double, h_iAS, fAS);              //����
	CC_SYNTHESIZE(int, h_iARG, fARG);               //��������(��ʾ��Χ����)
	CC_SYNTHESIZE(double, h_iCRIT, fCRIT);          //������
	CC_SYNTHESIZE(int, h_iInitMANA, fInitMANA);     //��ʼ����ֵ
	CC_SYNTHESIZE(int, h_iCurMANA, fCurMANA);       //��ǰ����ֵ
	CC_SYNTHESIZE(int, h_iMaxMANA, fMaxMANA);       //����ֵ����
	CC_SYNTHESIZE(int, h_iCost, fCost);             //Ӣ�ۻ���
	CC_SYNTHESIZE(int, h_iSell, fSell);             //Ӣ���ۼ�
	CC_SYNTHESIZE(int, h_ATKMANA, fh_ATKMANA);       //�չ�����
	CC_SYNTHESIZE(bool, h_isDead, fh_isDead);        //����Ƿ�����
	CC_SYNTHESIZE(bool, h_isDebuff, fh_isDebuff);    //�ܷ����debuff
	CC_SYNTHESIZE(int, h_Debuff, fh_Debuff);         //����״̬����(��ͬ���ִ���ͬ״̬)
	CC_SYNTHESIZE(double, h_DebuffEffect, fh_DebuffEffect);  //����Ч����ֵ
	CC_SYNTHESIZE(bool, h_onStage, fh_onStage);      //�Ƿ�ǳ�
	CC_SYNTHESIZE(bool, h_isSold, fh_isSold);        //�Ƿ����
	CC_SYNTHESIZE(int, h_Shield, fh_Shield);         //���ܣ�û��Ϊ0�������ʾ����ֵ��
	CC_SYNTHESIZE(bool, h_isTargeted, fh_isTargeted);//�ܷ�ѡ��ΪĿ�꣬�����������
	CC_SYNTHESIZE(bool, h_isMove, fh_isMove);        //�ܷ��ƶ�

	//int h_Armed[3];                                 //Ӣ��װ��
	
};


/*���ϵ�"����"*/
class ManageHero
{
public:

private:
	friend Hero;
	Vector<Hero*> onStageHeroes;
	map<int,int> HeroRelation;
}Manager;

/**********************����Ϊ��Ӣ����***********************/
class Fuajimier :public Hero
{
public:
	Fuajimier(int level);
	~Fuajimier();
	void onBindSprite();
	void UseSkill();
};

class Wolike :public Hero
{
public:
	Wolike(int level);
	~Wolike();
	void onBindSprite();
	void UseSkill();
};
//����û�����ôд
class VN :public Hero
{
public:
	VN(int level);
	~VN();
	void onBindSprite();
	void UseSkill();
};

class Bobi :public Hero
{
public:
	Bobi(int level);
	~Bobi();
	void onBindSprite();
	void UseSkill();
};
//���ܳ���ʱ��
class UD :public Hero
{
public:
	UD(int level);
	~UD();
	void onBindSprite();
	void UseSkill();
};
//�˺�����
class Gulajiasi :public Hero
{
public:
	Gulajiasi(int level);
	~Gulajiasi();
	void onBindSprite();
	void UseSkill();
};

class Leiouna :public Hero
{
public:
	Leiouna(int level);
	~Leiouna();
	void onBindSprite();
	void UseSkill();
};

class Giggs :public Hero
{
public:
	Giggs(int level);
	~Giggs();
	void onBindSprite();
	void UseSkill();
};
//�ж���Χ����
class Kazike:public Hero
{
public:
	Kazike(int level);
	~Kazike();
	void onBindSprite();
	void UseSkill();
};
//���͹�����40%,8s
class Lisangzhuo :public Hero
{
public:
	Lisangzhuo(int level);
	~Lisangzhuo();
	void onBindSprite();
	void UseSkill();
};
//������ʧ��Ĺ��ټӳ�
class Kelie :public Hero
{
public:
	Kelie(int level);
	~Kelie();
	void onBindSprite();
	void UseSkill();//�գ���������
};

class Yatuokesi :public Hero
{
public:
	Yatuokesi(int level);
	~Yatuokesi();
	void onBindSprite();
	void UseSkill();
};

class Kalisita :public Hero
{
public:
	Kalisita(int level);
	~Kalisita();
	void onBindSprite();
	void UseSkill();
};

class Lefulan :public Hero
{
public:
	Lefulan(int level);
	~Lefulan();
	void onBindSprite();
	void UseSkill();
};

class Suolaka :public Hero
{
	
public:
	Suolaka(int level);
	~Suolaka();
	void onBindSprite();
	void UseSkill();
};
/*ûд*/
class Telangdeer :public Hero
{
public:
	Telangdeer(int level);
	~Telangdeer();
	void onBindSprite();
	void UseSkill();
};

class Bulande :public Hero
{
public:
	Bulande(int level);
	~Bulande();
	void onBindSprite();
	void UseSkill();
};

class Kainan :public Hero
{
public:
	Kainan(int level);
	~Kainan();
	void onBindSprite();
	void UseSkill();
};

class Weilusi:public Hero
{
public:
	Weilusi(int level);
	~Weilusi();
	void onBindSprite();
	void UseSkill();
};

class Nuotilesi :public Hero
{
public:
	Nuotilesi(int level);
	~Nuotilesi();
	void onBindSprite();
	void UseSkill();
};

class Weiketuo :public Hero
{
public:
	Weiketuo(int level);
	~Weiketuo();
	void onBindSprite();
	void UseSkill();
};

class Zhuangseni :public Hero
{
public:
	Zhuangseni(int level);
	~Zhuangseni();
	void onBindSprite();
	void UseSkill();
};

class Hekalimu :public Hero
{
public:
	Hekalimu(int level);
	~Hekalimu();
	void onBindSprite();
	void UseSkill();
};

class Xindela :public Hero
{
public:
	Xindela(int level);
	~Xindela();
	void onBindSprite();
	void UseSkill();
};

class Chuishi :public Hero
{
public:
	Chuishi(int level);
	~Chuishi();
	void onBindSprite();
	void UseSkill();
};

class Seti :public Hero
{
public:
	Seti(int level);
	~Seti();
	void onBindSprite();
	void UseSkill();
};

class Nunu :public Hero
{
public:
	Nunu(int level);
	~Nunu();
	void onBindSprite();
	void UseSkill();
};

class Ashe :public Hero
{
public:
	Ashe(int level);
	~Ashe();
	void onBindSprite();
	void UseSkill();
};

class Moganna :public Hero
{
public:
	Moganna(int level);
	~Moganna();
	void onBindSprite();
	void UseSkill();
};

class Katelinna :public Hero
{
public:
	Katelinna(int level);
	~Katelinna();
	void onBindSprite();
	void UseSkill();
};

class NOC :public Hero
{
public:
	NOC(int level);
	~NOC();
	void onBindSprite();
	void UseSkill();
};

class Lee :public Hero
{
public:
	Lee(int level);
	~Lee();
	void onBindSprite();
	void UseSkill();
};

class Naideli :public Hero
{
public:
	Naideli(int level);
	~Naideli();
	void onBindSprite();
	void UseSkill();
};

class Pansen :public Hero
{
public:
	Pansen(int level);
	~Pansen();
	void onBindSprite();
	void UseSkill();
};

class Ruiwen :public Hero
{
public:
	Ruiwen(int level);
	~Ruiwen();
	void onBindSprite();
	void UseSkill();
};

class Lux :public Hero
{
public:
	Lux(int level);
	~Lux();
	void onBindSprite();
	void UseSkill();
};

class Lulu:public Hero
{
public:
	Lulu(int level);
	~Lulu();
	void onBindSprite();
	void UseSkill();
};

class Jiela:public Hero
{
public:
	Jiela(int level);
	~Jiela();
	void onBindSprite();
	void UseSkill();
};

class Yasuo :public Hero
{
public:
	Yasuo(int level);
	~Yasuo();
	void onBindSprite();
	void UseSkill();
};