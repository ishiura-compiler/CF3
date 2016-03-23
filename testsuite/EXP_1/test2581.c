
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
static int64_t x11 = -1LL;
uint64_t x12 = UINT64_MAX;
uint32_t x13 = 12201196U;
int64_t x30 = INT64_MAX;
static uint64_t t6 = 1004818604761LLU;
static volatile int64_t x33 = 73549005LL;
static uint64_t x38 = UINT64_MAX;
static volatile uint64_t t8 = 41741894692LLU;
volatile int32_t x51 = -1;
volatile int8_t x52 = INT8_MAX;
volatile int8_t x63 = -4;
static int8_t x66 = 7;
int32_t x67 = INT32_MIN;
uint64_t x68 = UINT64_MAX;
static uint32_t x75 = 103218U;
static int8_t x77 = 1;
int16_t x79 = -1;
int8_t x94 = 1;
volatile uint32_t x98 = 84558315U;
uint32_t x99 = 2028U;
static volatile uint16_t x103 = UINT16_MAX;
uint16_t x104 = 69U;
volatile uint32_t x109 = 903796229U;
volatile int16_t x116 = INT16_MAX;
uint8_t x120 = 99U;
volatile int8_t x121 = -1;
volatile int32_t t24 = 235;
volatile int32_t t26 = 0;
int32_t t27 = 2960;
volatile uint8_t x148 = 2U;
int32_t x158 = INT32_MIN;
int32_t x160 = INT32_MAX;
int16_t x161 = INT16_MIN;
uint16_t x172 = 20U;
uint32_t x185 = 75785024U;
int8_t x187 = INT8_MIN;
uint32_t t34 = 0U;
uint64_t t35 = 1410972052899948LLU;
uint64_t x193 = 0LLU;
volatile int16_t x195 = INT16_MAX;
int32_t x202 = -1;
static int16_t x208 = INT16_MIN;
int32_t x209 = INT32_MIN;
static int16_t x213 = -1;
static uint32_t x224 = UINT32_MAX;
volatile int64_t t41 = -791633510LL;
volatile int16_t x230 = -1;
uint16_t x231 = 5308U;
int16_t x253 = INT16_MIN;
uint8_t x258 = 78U;
int16_t x266 = INT16_MIN;
static int16_t x268 = INT16_MIN;
static volatile uint64_t x270 = 12937177LLU;
int64_t x271 = 8049LL;
int32_t x272 = INT32_MIN;
uint64_t t50 = 16914214987030392LLU;
volatile int8_t x296 = INT8_MAX;
uint8_t x301 = 1U;
uint8_t x303 = UINT8_MAX;
uint16_t x315 = 0U;
int8_t x328 = INT8_MIN;
uint64_t t58 = 133597277158295LLU;
int32_t x339 = -1;
static int32_t x346 = -847618091;
volatile int64_t x361 = -1LL;
volatile int64_t x362 = -1LL;
int32_t x363 = INT32_MIN;
int32_t x364 = INT32_MIN;
static volatile int16_t x367 = INT16_MAX;
uint64_t x383 = 611680893233079LLU;
volatile uint64_t x385 = UINT64_MAX;
uint32_t x387 = 40677U;
int32_t x389 = INT32_MIN;
volatile int16_t x392 = INT16_MIN;
volatile uint64_t x404 = UINT64_MAX;
int64_t x409 = 401675911445380LL;
static int32_t x411 = -1;
int16_t x412 = 28;
int8_t x418 = INT8_MIN;
volatile int8_t x420 = 22;
volatile int32_t x422 = -1;
int32_t x424 = -240731911;
uint32_t x426 = 2U;
int64_t x428 = 3051710099565LL;
int32_t x429 = INT32_MAX;
volatile uint64_t t80 = 592716883LLU;
volatile int64_t x436 = -633750468765852735LL;
static volatile uint64_t t81 = 4LLU;
static int16_t x437 = -7;
static int16_t x438 = -1;
static volatile int16_t x439 = INT16_MAX;
volatile int64_t t82 = -5LL;
int64_t x454 = -1LL;
volatile int64_t x461 = -23LL;
static uint8_t x468 = 92U;
uint64_t t86 = 28404393561731LLU;
static volatile int64_t t87 = 12LL;
uint32_t x483 = 1800686U;
volatile int64_t t88 = -2026869781651879LL;
static int64_t x494 = 789999484055904LL;
volatile int8_t x499 = -1;
volatile uint64_t t91 = 11365873LLU;
int64_t x512 = INT64_MIN;
volatile int64_t x541 = INT64_MIN;
static int32_t x543 = 108460;
volatile uint64_t t96 = 702LLU;
uint16_t x555 = 13U;
int32_t x572 = 14;
static uint64_t t99 = 41627189949LLU;
int64_t x581 = INT64_MIN;
volatile uint64_t t101 = 811589471220843369LLU;
int64_t x588 = -1LL;
int16_t x590 = INT16_MIN;
static uint16_t x591 = 5608U;
uint8_t x592 = UINT8_MAX;
uint64_t x600 = UINT64_MAX;
int64_t x609 = INT64_MAX;
int64_t x610 = INT64_MAX;
int16_t x614 = -1;
int16_t x629 = 1317;
int32_t x645 = INT32_MIN;
uint64_t x650 = 291460830909287LLU;
volatile uint64_t t114 = 6975110601162193971LLU;
static uint64_t x654 = UINT64_MAX;
int64_t x656 = -1LL;
volatile uint8_t x675 = 1U;
int64_t t118 = 188798895364847LL;
volatile int32_t x686 = INT32_MAX;
int64_t x688 = 14608941270LL;
volatile int8_t x701 = INT8_MIN;
uint16_t x714 = 4U;
uint64_t x715 = 840127033345858LLU;
volatile int16_t x716 = -54;
static uint32_t t123 = 1U;
int8_t x734 = -1;
volatile uint64_t x746 = 232LLU;
volatile int64_t x748 = -1LL;
volatile int32_t x749 = -85;
int64_t t129 = 3759971957206LL;
int8_t x761 = -1;
int32_t x768 = -1;
static volatile int16_t x770 = INT16_MIN;
int8_t x788 = 31;
uint32_t t136 = 1369805U;
static volatile int32_t x795 = INT32_MIN;
volatile uint64_t t138 = 1053345105798LLU;
uint8_t x820 = 117U;
static volatile uint64_t t140 = 139624LLU;
static volatile int8_t x836 = INT8_MIN;
uint8_t x856 = 2U;
volatile uint32_t t146 = 1575651U;
int16_t x878 = INT16_MAX;
static int32_t x888 = INT32_MIN;
volatile int32_t t150 = 27;
uint16_t x919 = 2713U;
uint8_t x920 = UINT8_MAX;
uint32_t x924 = 200776664U;
uint32_t x929 = 240501911U;
uint32_t x930 = UINT32_MAX;
int16_t x934 = -1;
uint64_t t161 = 4527957LLU;
uint32_t x945 = 8U;
static volatile int16_t x954 = -1;
static volatile int64_t t166 = -152365816726LL;
static int64_t x963 = -1LL;
int32_t x969 = INT32_MAX;
int16_t x971 = INT16_MIN;
uint32_t t169 = 511U;
uint64_t t171 = 1085425587668520LLU;
uint32_t x991 = 245U;
int16_t x992 = INT16_MIN;
int16_t x1015 = -7;
volatile int64_t x1032 = 361LL;
uint64_t t181 = 27LLU;
uint32_t x1042 = 446485516U;
int8_t x1045 = -1;
static int64_t x1046 = -2687920593552LL;
int8_t x1050 = 0;
volatile uint64_t t185 = 38172515LLU;
static int16_t x1058 = 9924;
static int64_t t188 = 45344854655879LL;
int16_t x1071 = 504;
uint8_t x1077 = UINT8_MAX;
int32_t x1078 = INT32_MIN;
static int8_t x1079 = 0;
int16_t x1082 = INT16_MIN;
static uint8_t x1089 = UINT8_MAX;
volatile uint8_t x1091 = 6U;
int32_t x1092 = -647;
uint32_t x1105 = UINT32_MAX;
static volatile uint32_t x1108 = 99329973U;
uint8_t x1109 = UINT8_MAX;
uint64_t x1110 = 6LLU;
int16_t x1111 = INT16_MIN;
int8_t x1113 = INT8_MIN;
volatile int32_t x1116 = -15423;
volatile int64_t x1122 = -236484074966477LL;
static int16_t x1123 = -1;
int64_t t199 = -7295011LL;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int64_t x2 = -6504860093011923LL;
	volatile uint16_t x3 = 47U;
	int64_t t0 = 19354172597LL;

    t0 = (((x1^x2)*x3)%x4);

    if (t0 != 24643LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 1;
	volatile uint64_t x6 = UINT64_MAX;
	int16_t x7 = -1;
	int64_t x8 = -1LL;
	static uint64_t t1 = 1069579089981LLU;

    t1 = (((x5^x6)*x7)%x8);

    if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -2;
	int16_t x10 = INT16_MIN;
	uint64_t t2 = 2779LLU;

    t2 = (((x9^x10)*x11)%x12);

    if (t2 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 935084116097LLU;
	uint32_t x15 = 10243U;
	uint32_t x16 = UINT32_MAX;
	static uint64_t t3 = 413717086458997272LLU;

    t3 = (((x13^x14)*x15)%x16);

    if (t3 != 1601649807LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MAX;
	int32_t x18 = -472649;
	int8_t x19 = INT8_MIN;
	int16_t x20 = -1;
	volatile int32_t t4 = 1;

    t4 = (((x17^x18)*x19)%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x21 = INT16_MIN;
	int16_t x22 = 751;
	int32_t x23 = -3;
	static int32_t x24 = -4042847;
	static int32_t t5 = 593575984;

    t5 = (((x21^x22)*x23)%x24);

    if (t5 != 96051) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 61578233LLU;
	static int64_t x31 = -505106472128555682LL;
	uint64_t x32 = 71861007354LLU;

    t6 = (((x29^x30)*x31)%x32);

    if (t6 != 25459591214LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = -417;
	static uint8_t x35 = UINT8_MAX;
	int16_t x36 = INT16_MIN;
	int64_t t7 = 1271210084559LL;

    t7 = (((x33^x34)*x35)%x36);

    if (t7 != -10386LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	int64_t x39 = 18631LL;
	int16_t x40 = INT16_MIN;

    t8 = (((x37^x38)*x39)%x40);

    if (t8 != 9223372036854757177LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x45 = 701;
	volatile int32_t x46 = -100;
	static uint32_t x47 = UINT32_MAX;
	int16_t x48 = -1;
	uint32_t t9 = 14445U;

    t9 = (((x45^x46)*x47)%x48);

    if (t9 != 735U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x49 = INT32_MIN;
	volatile int32_t x50 = 255496549;
	volatile int32_t t10 = 32;

    t10 = (((x49^x50)*x51)%x52);

    if (t10 != 27) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = 26189366953102LLU;
	int8_t x62 = INT8_MAX;
	int32_t x64 = 31;
	uint64_t t11 = 112349999214162249LLU;

    t11 = (((x61^x62)*x63)%x64);

    if (t11 != 24LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x65 = UINT32_MAX;
	uint64_t t12 = 5565908482257LLU;

    t12 = (((x65^x66)*x67)%x68);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = -1;
	static volatile int64_t x74 = -1LL;
	volatile int64_t x76 = INT64_MAX;
	static int64_t t13 = 7699599LL;

    t13 = (((x73^x74)*x75)%x76);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x78 = 0;
	static int8_t x80 = 51;
	volatile int32_t t14 = 1;

    t14 = (((x77^x78)*x79)%x80);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x85 = 1;
	uint32_t x86 = 70533U;
	static int16_t x87 = 28;
	uint32_t x88 = UINT32_MAX;
	volatile uint32_t t15 = 1217U;

    t15 = (((x85^x86)*x87)%x88);

    if (t15 != 1974896U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x89 = -1;
	static int16_t x90 = -432;
	static volatile uint32_t x91 = UINT32_MAX;
	int8_t x92 = INT8_MIN;
	static volatile uint32_t t16 = 195U;

    t16 = (((x89^x90)*x91)%x92);

    if (t16 != 4294966865U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x93 = -20509812134359055LL;
	int16_t x95 = -1;
	int16_t x96 = -1;
	static volatile int64_t t17 = 35453LL;

    t17 = (((x93^x94)*x95)%x96);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x97 = 92;
	int64_t x100 = INT64_MAX;
	volatile int64_t t18 = -7108LL;

    t18 = (((x97^x98)*x99)%x100);

    if (t18 != 3980432820LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x101 = 1014772118U;
	int16_t x102 = INT16_MIN;
	volatile uint32_t t19 = 24521441U;

    t19 = (((x101^x102)*x103)%x104);

    if (t19 != 5U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x105 = 1018125LLU;
	int64_t x106 = INT64_MIN;
	int64_t x107 = -6452503525113520LL;
	int64_t x108 = INT64_MAX;
	uint64_t t20 = 1339628752LLU;

    t20 = (((x105^x106)*x107)%x108);

    if (t20 != 6809110771252601105LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x110 = 7;
	int32_t x111 = -1;
	int8_t x112 = -1;
	volatile uint32_t t21 = 2671810U;

    t21 = (((x109^x110)*x111)%x112);

    if (t21 != 3391171070U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x113 = UINT64_MAX;
	static uint8_t x114 = 1U;
	int64_t x115 = INT64_MIN;
	volatile uint64_t t22 = 9793307673413985LLU;

    t22 = (((x113^x114)*x115)%x116);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x117 = INT32_MIN;
	int8_t x118 = -9;
	volatile int64_t x119 = 381847337LL;
	volatile int64_t t23 = 122LL;

    t23 = (((x117^x118)*x119)%x120);

    if (t23 != 34LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x122 = -298346;
	static volatile int16_t x123 = -1;
	static volatile int16_t x124 = -1;

    t24 = (((x121^x122)*x123)%x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x125 = 1017U;
	volatile uint64_t x126 = UINT64_MAX;
	uint32_t x127 = 117006U;
	int8_t x128 = INT8_MAX;
	uint64_t t25 = 0LLU;

    t25 = (((x125^x126)*x127)%x128);

    if (t25 != 51LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x137 = INT8_MAX;
	static volatile int16_t x138 = 8065;
	static int8_t x139 = INT8_MAX;
	volatile int8_t x140 = INT8_MAX;

    t26 = (((x137^x138)*x139)%x140);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x141 = 12U;
	int16_t x142 = -1;
	volatile uint16_t x143 = 5405U;
	volatile uint8_t x144 = 69U;

    t27 = (((x141^x142)*x143)%x144);

    if (t27 != -23) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x145 = INT8_MAX;
	uint64_t x146 = 1517LLU;
	static int64_t x147 = -9921378727476672LL;
	uint64_t t28 = 26LLU;

    t28 = (((x145^x146)*x147)%x148);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x157 = 47U;
	uint8_t x159 = 0U;
	static volatile int32_t t29 = -288;

    t29 = (((x157^x158)*x159)%x160);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x162 = INT16_MIN;
	uint32_t x163 = 15U;
	static int8_t x164 = -1;
	volatile uint32_t t30 = 6524086U;

    t30 = (((x161^x162)*x163)%x164);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x169 = UINT16_MAX;
	static int16_t x170 = -1;
	int32_t x171 = -1;
	static volatile int32_t t31 = 278167;

    t31 = (((x169^x170)*x171)%x172);

    if (t31 != 16) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x173 = 1;
	int16_t x174 = 0;
	int8_t x175 = 1;
	uint32_t x176 = 6348740U;
	uint32_t t32 = 57823715U;

    t32 = (((x173^x174)*x175)%x176);

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x177 = 919669525;
	uint16_t x178 = 0U;
	int16_t x179 = -1;
	int64_t x180 = INT64_MIN;
	static volatile int64_t t33 = -192636LL;

    t33 = (((x177^x178)*x179)%x180);

    if (t33 != -919669525LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x186 = 6422U;
	uint8_t x188 = 37U;

    t34 = (((x185^x186)*x187)%x188);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x189 = -1;
	int32_t x190 = -1;
	int8_t x191 = -1;
	static volatile uint64_t x192 = 253LLU;

    t35 = (((x189^x190)*x191)%x192);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x194 = INT16_MIN;
	int8_t x196 = -1;
	volatile uint64_t t36 = 1791174LLU;

    t36 = (((x193^x194)*x195)%x196);

    if (t36 != 18446744072635842560LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x201 = UINT8_MAX;
	int32_t x203 = -7194069;
	volatile int8_t x204 = 6;
	int32_t t37 = 11145183;

    t37 = (((x201^x202)*x203)%x204);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x205 = INT16_MAX;
	int16_t x206 = INT16_MAX;
	static int64_t x207 = -1LL;
	volatile int64_t t38 = -120467LL;

    t38 = (((x205^x206)*x207)%x208);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x210 = INT64_MIN;
	static uint64_t x211 = 67298947654LLU;
	uint8_t x212 = 4U;
	uint64_t t39 = 308480LLU;

    t39 = (((x209^x210)*x211)%x212);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x214 = -1;
	int8_t x215 = INT8_MAX;
	int16_t x216 = 15007;
	volatile int32_t t40 = 536051281;

    t40 = (((x213^x214)*x215)%x216);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x221 = 916LL;
	uint32_t x222 = UINT32_MAX;
	uint8_t x223 = UINT8_MAX;

    t41 = (((x221^x222)*x223)%x224);

    if (t41 != 4294733715LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x229 = 125U;
	int16_t x232 = -1;
	static volatile int32_t t42 = 29;

    t42 = (((x229^x230)*x231)%x232);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x233 = 1U;
	int8_t x234 = -1;
	uint64_t x235 = 436258734703705LLU;
	volatile int8_t x236 = 7;
	static uint64_t t43 = 553795LLU;

    t43 = (((x233^x234)*x235)%x236);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x245 = INT32_MIN;
	volatile int8_t x246 = INT8_MIN;
	volatile int16_t x247 = -1;
	int16_t x248 = INT16_MIN;
	static volatile int32_t t44 = -11;

    t44 = (((x245^x246)*x247)%x248);

    if (t44 != -32640) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x249 = INT16_MAX;
	int32_t x250 = INT32_MAX;
	static uint64_t x251 = 3190413019823785LLU;
	volatile int32_t x252 = 24524904;
	uint64_t t45 = 15033410139LLU;

    t45 = (((x249^x250)*x251)%x252);

    if (t45 != 7711640LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x254 = -10;
	volatile uint16_t x255 = 6699U;
	static uint32_t x256 = 4U;
	uint32_t t46 = 130436U;

    t46 = (((x253^x254)*x255)%x256);

    if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x257 = -1;
	static uint8_t x259 = 70U;
	static uint64_t x260 = UINT64_MAX;
	volatile uint64_t t47 = 469281474253522899LLU;

    t47 = (((x257^x258)*x259)%x260);

    if (t47 != 18446744073709546086LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x261 = INT32_MIN;
	static int16_t x262 = INT16_MIN;
	int8_t x263 = -1;
	int16_t x264 = INT16_MAX;
	static int32_t t48 = 1;

    t48 = (((x261^x262)*x263)%x264);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x265 = INT16_MIN;
	int8_t x267 = INT8_MAX;
	int32_t t49 = -1;

    t49 = (((x265^x266)*x267)%x268);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x269 = 1U;

    t50 = (((x269^x270)*x271)%x272);

    if (t50 != 104131329624LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x273 = -1;
	static int8_t x274 = INT8_MAX;
	uint32_t x275 = 8U;
	int64_t x276 = INT64_MAX;
	int64_t t51 = -164842254LL;

    t51 = (((x273^x274)*x275)%x276);

    if (t51 != 4294966272LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x277 = 11U;
	static int8_t x278 = INT8_MAX;
	static int64_t x279 = 21942LL;
	int64_t x280 = -370251411647637701LL;
	int64_t t52 = -604667601LL;

    t52 = (((x277^x278)*x279)%x280);

    if (t52 != 2545272LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x293 = -1LL;
	int8_t x294 = INT8_MAX;
	static int8_t x295 = -4;
	volatile int64_t t53 = 487402LL;

    t53 = (((x293^x294)*x295)%x296);

    if (t53 != 4LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x302 = UINT64_MAX;
	static int32_t x304 = INT32_MIN;
	volatile uint64_t t54 = 331577394727227LLU;

    t54 = (((x301^x302)*x303)%x304);

    if (t54 != 2147483138LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x305 = -1;
	int8_t x306 = 1;
	uint64_t x307 = 1473491130924966471LLU;
	uint8_t x308 = 83U;
	uint64_t t55 = 80366239884LLU;

    t55 = (((x305^x306)*x307)%x308);

    if (t55 != 50LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x309 = INT8_MIN;
	uint8_t x310 = 13U;
	uint32_t x311 = 31432896U;
	volatile uint32_t x312 = 12725U;
	uint32_t t56 = 88003700U;

    t56 = (((x309^x310)*x311)%x312);

    if (t56 != 7556U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x313 = 96U;
	static int8_t x314 = -1;
	uint32_t x316 = 8384035U;
	volatile uint32_t t57 = 3574545U;

    t57 = (((x313^x314)*x315)%x316);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x325 = 216;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 58LLU;

    t58 = (((x325^x326)*x327)%x328);

    if (t58 != 18446743949155512560LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x329 = INT8_MIN;
	static uint64_t x330 = 126486132LLU;
	int32_t x331 = -1;
	static uint64_t x332 = 115006937LLU;
	uint64_t t59 = 41095294458LLU;

    t59 = (((x329^x330)*x331)%x332);

    if (t59 != 11479091LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x337 = -578;
	uint16_t x338 = 28U;
	uint64_t x340 = 89178601024983209LLU;
	uint64_t t60 = 219547746718580LLU;

    t60 = (((x337^x338)*x339)%x340);

    if (t60 != 606LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x345 = 6;
	int64_t x347 = -1LL;
	int64_t x348 = -1340566LL;
	volatile int64_t t61 = -887070750395600LL;

    t61 = (((x345^x346)*x347)%x348);

    if (t61 != 380381LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x357 = 9;
	volatile int8_t x358 = INT8_MAX;
	volatile uint8_t x359 = 3U;
	int32_t x360 = INT32_MIN;
	volatile int32_t t62 = 767481;

    t62 = (((x357^x358)*x359)%x360);

    if (t62 != 354) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t t63 = -1318106000846985908LL;

    t63 = (((x361^x362)*x363)%x364);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x365 = -1LL;
	int16_t x366 = -24;
	uint64_t x368 = 215116611845LLU;
	volatile uint64_t t64 = 40LLU;

    t64 = (((x365^x366)*x367)%x368);

    if (t64 != 753641LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x369 = UINT64_MAX;
	int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = 1211616841757623LLU;
	volatile uint64_t t65 = 5LLU;

    t65 = (((x369^x370)*x371)%x372);

    if (t65 != 32768LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x373 = INT64_MIN;
	uint8_t x374 = 3U;
	static volatile int64_t x375 = -1LL;
	int16_t x376 = 1619;
	static volatile int64_t t66 = 8412237831873508LL;

    t66 = (((x373^x374)*x375)%x376);

    if (t66 != 991LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x377 = 2321LLU;
	static int32_t x378 = -366249;
	static int16_t x379 = INT16_MAX;
	uint8_t x380 = 56U;
	uint64_t t67 = 11LLU;

    t67 = (((x377^x378)*x379)%x380);

    if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x381 = -1;
	int32_t x382 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t68 = 55337867LLU;

    t68 = (((x381^x382)*x383)%x384);

    if (t68 != 516655606650935369LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x386 = 3U;
	static int32_t x388 = INT32_MIN;
	static volatile uint64_t t69 = 56114LLU;

    t69 = (((x385^x386)*x387)%x388);

    if (t69 != 2147320940LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x390 = 32342100080786LLU;
	volatile uint8_t x391 = 2U;
	uint64_t t70 = 383509158LLU;

    t70 = (((x389^x390)*x391)%x392);

    if (t70 != 18446679389199790372LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x393 = INT8_MAX;
	static volatile int64_t x394 = -12588LL;
	int16_t x395 = INT16_MAX;
	uint8_t x396 = 95U;
	volatile int64_t t71 = 120470881LL;

    t71 = (((x393^x394)*x395)%x396);

    if (t71 != -48LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x397 = INT8_MIN;
	uint32_t x398 = 810U;
	volatile int32_t x399 = INT32_MIN;
	static int8_t x400 = -1;
	uint32_t t72 = 462452U;

    t72 = (((x397^x398)*x399)%x400);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MIN;
	static volatile uint16_t x403 = UINT16_MAX;
	static volatile uint64_t t73 = 15835LLU;

    t73 = (((x401^x402)*x403)%x404);

    if (t73 != 18446744071578812161LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x405 = 2U;
	int16_t x406 = INT16_MAX;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = 411034LLU;
	static volatile uint64_t t74 = 98456222761637788LLU;

    t74 = (((x405^x406)*x407)%x408);

    if (t74 != 131170LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x410 = INT64_MIN;
	int64_t t75 = -23707072754LL;

    t75 = (((x409^x410)*x411)%x412);

    if (t75 != 24LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x413 = INT16_MIN;
	uint8_t x414 = 124U;
	uint16_t x415 = 0U;
	int64_t x416 = INT64_MAX;
	int64_t t76 = 219264LL;

    t76 = (((x413^x414)*x415)%x416);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x417 = -5703331;
	uint64_t x419 = 34LLU;
	uint64_t t77 = 2682332704586115LLU;

    t77 = (((x417^x418)*x419)%x420);

    if (t77 != 10LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x421 = UINT32_MAX;
	static int64_t x423 = INT64_MIN;
	static volatile int64_t t78 = 28LL;

    t78 = (((x421^x422)*x423)%x424);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x425 = -1;
	volatile int16_t x427 = 0;
	volatile int64_t t79 = 0LL;

    t79 = (((x425^x426)*x427)%x428);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x430 = 15806LLU;
	volatile uint64_t x431 = 2617915607183058LLU;
	uint64_t x432 = 2284784584021151832LLU;

    t80 = (((x429^x430)*x431)%x432);

    if (t80 != 2227957077554738938LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x433 = -1;
	static int8_t x434 = 28;
	uint64_t x435 = UINT64_MAX;

    t81 = (((x433^x434)*x435)%x436);

    if (t81 != 29LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x440 = -1LL;

    t82 = (((x437^x438)*x439)%x440);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	int8_t x442 = -22;
	uint64_t x443 = UINT64_MAX;
	int8_t x444 = INT8_MAX;
	volatile uint64_t t83 = 1759235357988972LLU;

    t83 = (((x441^x442)*x443)%x444);

    if (t83 != 108LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x453 = INT16_MIN;
	uint64_t x455 = 150205677160666745LLU;
	volatile int64_t x456 = 2887010146LL;
	volatile uint64_t t84 = 48364618LLU;

    t84 = (((x453^x454)*x455)%x456);

    if (t84 != 704435709LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x462 = 1005445;
	static int16_t x463 = 1;
	uint32_t x464 = 22300372U;
	volatile int64_t t85 = 372401LL;

    t85 = (((x461^x462)*x463)%x464);

    if (t85 != -1005460LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x465 = -1LL;
	uint64_t x466 = UINT64_MAX;
	volatile int16_t x467 = INT16_MAX;

    t86 = (((x465^x466)*x467)%x468);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x473 = 12316U;
	uint32_t x474 = UINT32_MAX;
	static uint32_t x475 = 259074236U;
	int64_t x476 = 42LL;

    t87 = (((x473^x474)*x475)%x476);

    if (t87 != 28LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x481 = INT64_MAX;
	int64_t x482 = INT64_MIN;
	int32_t x484 = INT32_MAX;

    t88 = (((x481^x482)*x483)%x484);

    if (t88 != -1800686LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x489 = 108U;
	volatile int32_t x490 = INT32_MIN;
	int16_t x491 = 85;
	int64_t x492 = INT64_MIN;
	int64_t t89 = 47145687554094LL;

    t89 = (((x489^x490)*x491)%x492);

    if (t89 != 2147492828LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x493 = -1LL;
	uint8_t x495 = 2U;
	int8_t x496 = 3;
	volatile int64_t t90 = 5LL;

    t90 = (((x493^x494)*x495)%x496);

    if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x497 = 36913LLU;
	static volatile uint32_t x498 = 4032U;
	int8_t x500 = INT8_MIN;

    t91 = (((x497^x498)*x499)%x500);

    if (t91 != 18446744073709510671LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x501 = INT8_MAX;
	int64_t x502 = -2632848124478850LL;
	uint64_t x503 = 31LLU;
	uint8_t x504 = UINT8_MAX;
	static uint64_t t92 = 114739LLU;

    t92 = (((x501^x502)*x503)%x504);

    if (t92 != 11LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x505 = 24;
	static uint16_t x506 = UINT16_MAX;
	volatile int32_t x507 = -1;
	uint32_t x508 = 1456U;
	uint32_t t93 = 274649U;

    t93 = (((x505^x506)*x507)%x508);

    if (t93 != 265U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x509 = UINT16_MAX;
	int8_t x510 = INT8_MIN;
	static int8_t x511 = INT8_MIN;
	volatile int64_t t94 = -51575LL;

    t94 = (((x509^x510)*x511)%x512);

    if (t94 != 8372352LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x525 = 8U;
	int8_t x526 = INT8_MIN;
	uint8_t x527 = 3U;
	int32_t x528 = INT32_MIN;
	int32_t t95 = -15321;

    t95 = (((x525^x526)*x527)%x528);

    if (t95 != -360) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x542 = UINT64_MAX;
	static volatile int64_t x544 = INT64_MIN;

    t96 = (((x541^x542)*x543)%x544);

    if (t96 != 9223372036854667348LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x553 = 1U;
	volatile int64_t x554 = -1LL;
	volatile int32_t x556 = INT32_MAX;
	volatile int64_t t97 = 74463857773LL;

    t97 = (((x553^x554)*x555)%x556);

    if (t97 != -26LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x569 = -6695063535012LL;
	int8_t x570 = INT8_MAX;
	int8_t x571 = INT8_MAX;
	static volatile int64_t t98 = 1403298815264181LL;

    t98 = (((x569^x570)*x571)%x572);

    if (t98 != -7LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint8_t x573 = 45U;
	int32_t x574 = -96;
	uint32_t x575 = UINT32_MAX;
	uint64_t x576 = 52316775900704046LLU;

    t99 = (((x573^x574)*x575)%x576);

    if (t99 != 115LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x577 = 16U;
	volatile int16_t x578 = INT16_MAX;
	uint16_t x579 = 11646U;
	int32_t x580 = -1;
	volatile int32_t t100 = 61375;

    t100 = (((x577^x578)*x579)%x580);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x582 = 2590158658355630LLU;
	uint64_t x583 = UINT64_MAX;
	static int32_t x584 = 530436870;

    t101 = (((x581^x582)*x583)%x584);

    if (t101 != 495119988LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x585 = INT8_MAX;
	volatile uint16_t x586 = 4509U;
	static int8_t x587 = INT8_MAX;
	volatile int64_t t102 = -190130LL;

    t102 = (((x585^x586)*x587)%x588);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x589 = -86;
	static int32_t t103 = 33401;

    t103 = (((x589^x590)*x591)%x592);

    if (t103 != 171) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x593 = 14U;
	int16_t x594 = INT16_MAX;
	static int64_t x595 = 15552730739LL;
	static volatile int16_t x596 = 81;
	static int64_t t104 = 137983725368949724LL;

    t104 = (((x593^x594)*x595)%x596);

    if (t104 != 49LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x597 = 13953565161933391LLU;
	int16_t x598 = INT16_MIN;
	static uint8_t x599 = 1U;
	volatile uint64_t t105 = 124145671139772LLU;

    t105 = (((x597^x598)*x599)%x600);

    if (t105 != 18432790508547623503LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x611 = INT32_MIN;
	static int32_t x612 = INT32_MAX;
	volatile int64_t t106 = -202150456895917LL;

    t106 = (((x609^x610)*x611)%x612);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x613 = -7904;
	volatile uint32_t x615 = UINT32_MAX;
	int32_t x616 = -1;
	static uint32_t t107 = 3774U;

    t107 = (((x613^x614)*x615)%x616);

    if (t107 != 4294959393U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x621 = 5;
	uint8_t x622 = UINT8_MAX;
	uint32_t x623 = 5016U;
	int32_t x624 = 3068;
	static volatile uint32_t t108 = 541937850U;

    t108 = (((x621^x622)*x623)%x624);

    if (t108 != 2256U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x625 = INT16_MIN;
	static int16_t x626 = 424;
	int64_t x627 = -1LL;
	int8_t x628 = -1;
	int64_t t109 = -6617315907915538LL;

    t109 = (((x625^x626)*x627)%x628);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x630 = UINT64_MAX;
	volatile uint32_t x631 = 442U;
	static volatile int16_t x632 = -12;
	uint64_t t110 = 8618612010835LLU;

    t110 = (((x629^x630)*x631)%x632);

    if (t110 != 18446744073708969060LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x633 = -1;
	int64_t x634 = -1540LL;
	int32_t x635 = INT32_MAX;
	static int64_t x636 = -1LL;
	volatile int64_t t111 = 1374LL;

    t111 = (((x633^x634)*x635)%x636);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x637 = -15;
	volatile int16_t x638 = -28;
	static uint64_t x639 = 5276089702016650LLU;
	volatile int64_t x640 = INT64_MIN;
	static uint64_t t112 = 7LLU;

    t112 = (((x637^x638)*x639)%x640);

    if (t112 != 110797883742349650LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x646 = -109;
	static volatile uint64_t x647 = 233412530232LLU;
	volatile int16_t x648 = -1;
	static uint64_t t113 = 196531614862983LLU;

    t113 = (((x645^x646)*x647)%x648);

    if (t113 != 3187476479401957416LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x649 = 4;
	uint8_t x651 = 83U;
	static uint32_t x652 = UINT32_MAX;

    t114 = (((x649^x650)*x651)%x652);

    if (t114 != 295205609LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x653 = -5LL;
	int64_t x655 = -90LL;
	uint64_t t115 = 1999606LLU;

    t115 = (((x653^x654)*x655)%x656);

    if (t115 != 18446744073709551256LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x661 = 59976535378142LLU;
	int8_t x662 = INT8_MIN;
	int16_t x663 = -162;
	static volatile int16_t x664 = -2;
	static volatile uint64_t t116 = 14345696429150179LLU;

    t116 = (((x661^x662)*x663)%x664);

    if (t116 != 9716198731249284LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x665 = 9438922266LLU;
	int8_t x666 = -3;
	uint32_t x667 = UINT32_MAX;
	int64_t x668 = -307342501373126147LL;
	uint64_t t117 = 524801767126891LLU;

    t117 = (((x665^x666)*x667)%x668);

    if (t117 != 14800369792906331673LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x673 = 4908491U;
	static int16_t x674 = -1;
	int64_t x676 = INT64_MIN;

    t118 = (((x673^x674)*x675)%x676);

    if (t118 != 4290058804LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x685 = -113LL;
	static uint64_t x687 = 13LLU;
	static volatile uint64_t t119 = 988684705525LLU;

    t119 = (((x685^x686)*x687)%x688);

    if (t119 != 11419519248LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x702 = 2900;
	uint64_t x703 = 69833LLU;
	volatile uint16_t x704 = 3U;
	static uint64_t t120 = 4938218115135LLU;

    t120 = (((x701^x702)*x703)%x704);

    if (t120 != 2LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x709 = -41;
	volatile int16_t x710 = INT16_MIN;
	int64_t x711 = -1LL;
	uint8_t x712 = UINT8_MAX;
	volatile int64_t t121 = 7LL;

    t121 = (((x709^x710)*x711)%x712);

    if (t121 != -87LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x713 = 0U;
	uint64_t t122 = 7LLU;

    t122 = (((x713^x714)*x715)%x716);

    if (t122 != 3360508133383432LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x721 = INT16_MIN;
	int32_t x722 = INT32_MAX;
	uint32_t x723 = UINT32_MAX;
	int8_t x724 = INT8_MAX;

    t123 = (((x721^x722)*x723)%x724);

    if (t123 != 7U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x725 = UINT64_MAX;
	static uint8_t x726 = 26U;
	volatile int32_t x727 = -1;
	int16_t x728 = 4887;
	uint64_t t124 = 8LLU;

    t124 = (((x725^x726)*x727)%x728);

    if (t124 != 27LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x729 = INT16_MAX;
	uint8_t x730 = UINT8_MAX;
	uint16_t x731 = 15U;
	int16_t x732 = -14;
	static int32_t t125 = -2;

    t125 = (((x729^x730)*x731)%x732);

    if (t125 != 4) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x733 = 55729495537376LLU;
	static int64_t x735 = -1LL;
	static int64_t x736 = -1LL;
	static volatile uint64_t t126 = 106986514404LLU;

    t126 = (((x733^x734)*x735)%x736);

    if (t126 != 55729495537377LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x737 = UINT8_MAX;
	volatile int32_t x738 = -1;
	volatile uint8_t x739 = 0U;
	int32_t x740 = -1;
	volatile int32_t t127 = -15553152;

    t127 = (((x737^x738)*x739)%x740);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x745 = INT32_MIN;
	int64_t x747 = INT64_MIN;
	volatile uint64_t t128 = 0LLU;

    t128 = (((x745^x746)*x747)%x748);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x750 = INT8_MAX;
	static uint16_t x751 = UINT16_MAX;
	int64_t x752 = INT64_MIN;

    t129 = (((x749^x750)*x751)%x752);

    if (t129 != -2883540LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x762 = UINT8_MAX;
	int32_t x763 = 15;
	volatile uint32_t x764 = 7U;
	volatile uint32_t t130 = 119881226U;

    t130 = (((x761^x762)*x763)%x764);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint32_t x765 = 219U;
	uint8_t x766 = 15U;
	volatile uint16_t x767 = 23U;
	volatile uint32_t t131 = 84693U;

    t131 = (((x765^x766)*x767)%x768);

    if (t131 != 4876U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x769 = UINT16_MAX;
	int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	int32_t t132 = 0;

    t132 = (((x769^x770)*x771)%x772);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x773 = UINT32_MAX;
	int32_t x774 = INT32_MIN;
	static int16_t x775 = INT16_MIN;
	int16_t x776 = INT16_MAX;
	uint32_t t133 = 5875U;

    t133 = (((x773^x774)*x775)%x776);

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x781 = -1110198;
	uint64_t x782 = UINT64_MAX;
	int64_t x783 = INT64_MIN;
	static uint32_t x784 = 10U;
	uint64_t t134 = 15477473954518LLU;

    t134 = (((x781^x782)*x783)%x784);

    if (t134 != 8LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x785 = INT32_MIN;
	uint16_t x786 = 15U;
	volatile int8_t x787 = -1;
	int32_t t135 = 14;

    t135 = (((x785^x786)*x787)%x788);

    if (t135 != 18) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x789 = INT8_MIN;
	int8_t x790 = INT8_MAX;
	int32_t x791 = 8198;
	uint32_t x792 = 1335U;

    t136 = (((x789^x790)*x791)%x792);

    if (t136 != 1103U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x793 = INT8_MAX;
	uint32_t x794 = 3890U;
	uint32_t x796 = 114U;
	volatile uint32_t t137 = 2U;

    t137 = (((x793^x794)*x795)%x796);

    if (t137 != 98U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x805 = -1;
	volatile uint64_t x806 = 3761516973183LLU;
	int32_t x807 = INT32_MIN;
	int32_t x808 = INT32_MIN;

    t138 = (((x805^x806)*x807)%x808);

    if (t138 != 16569031376020439040LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x817 = 3U;
	int64_t x818 = 90LL;
	static volatile int16_t x819 = INT16_MAX;
	static int64_t t139 = 2328801632110024LL;

    t139 = (((x817^x818)*x819)%x820);

    if (t139 != 38LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x821 = 326623LLU;
	int8_t x822 = 0;
	int64_t x823 = INT64_MIN;
	volatile uint8_t x824 = 1U;

    t140 = (((x821^x822)*x823)%x824);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x833 = -1;
	static uint8_t x834 = 93U;
	int16_t x835 = -2;
	int32_t t141 = 14;

    t141 = (((x833^x834)*x835)%x836);

    if (t141 != 60) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x838 = INT16_MAX;
	int16_t x839 = -1;
	static uint8_t x840 = UINT8_MAX;
	volatile int32_t t142 = 178847;

    t142 = (((x837^x838)*x839)%x840);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x845 = 5U;
	static uint16_t x846 = 23U;
	uint8_t x847 = 1U;
	volatile uint32_t x848 = 1709162093U;
	uint32_t t143 = 1442U;

    t143 = (((x845^x846)*x847)%x848);

    if (t143 != 18U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x853 = 1783U;
	static volatile uint8_t x854 = UINT8_MAX;
	uint16_t x855 = 110U;
	volatile int32_t t144 = -3;

    t144 = (((x853^x854)*x855)%x856);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x865 = INT32_MAX;
	volatile int16_t x866 = INT16_MIN;
	uint32_t x867 = 137U;
	volatile uint8_t x868 = 25U;
	volatile uint32_t t145 = 42U;

    t145 = (((x865^x866)*x867)%x868);

    if (t145 != 2U) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint8_t x869 = 0U;
	int32_t x870 = INT32_MIN;
	uint32_t x871 = UINT32_MAX;
	volatile uint32_t x872 = 320930U;

    t146 = (((x869^x870)*x871)%x872);

    if (t146 != 141018U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x873 = UINT16_MAX;
	volatile int8_t x874 = INT8_MIN;
	int8_t x875 = 31;
	int32_t x876 = 26;
	int32_t t147 = 123891026;

    t147 = (((x873^x874)*x875)%x876);

    if (t147 != -17) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x877 = UINT8_MAX;
	int8_t x879 = -3;
	int64_t x880 = -110474946983012LL;
	volatile int64_t t148 = 64606188LL;

    t148 = (((x877^x878)*x879)%x880);

    if (t148 != -97536LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x881 = 1LLU;
	uint32_t x882 = 229U;
	uint64_t x883 = 334679664320LLU;
	static int64_t x884 = INT64_MIN;
	volatile uint64_t t149 = 3839672413167562LLU;

    t149 = (((x881^x882)*x883)%x884);

    if (t149 != 76306963464960LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x885 = INT8_MIN;
	int8_t x886 = INT8_MAX;
	int32_t x887 = -434928950;

    t150 = (((x885^x886)*x887)%x888);

    if (t150 != 434928950) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x889 = 383702629;
	static int8_t x890 = -1;
	int64_t x891 = -1LL;
	int64_t x892 = -477657090889497LL;
	int64_t t151 = -28LL;

    t151 = (((x889^x890)*x891)%x892);

    if (t151 != 383702630LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x893 = UINT64_MAX;
	int32_t x894 = INT32_MIN;
	int64_t x895 = -1LL;
	uint16_t x896 = 1460U;
	uint64_t t152 = 55891360LLU;

    t152 = (((x893^x894)*x895)%x896);

    if (t152 != 1009LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x897 = 376486360U;
	int16_t x898 = -470;
	int8_t x899 = -1;
	int64_t x900 = INT64_MIN;
	int64_t t153 = -5421606051140LL;

    t153 = (((x897^x898)*x899)%x900);

    if (t153 != 376485902LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x905 = 556U;
	int64_t x906 = INT64_MIN;
	int32_t x907 = -1;
	static int32_t x908 = INT32_MIN;
	static int64_t t154 = 0LL;

    t154 = (((x905^x906)*x907)%x908);

    if (t154 != 2147483092LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x909 = INT32_MIN;
	int32_t x910 = INT32_MIN;
	int16_t x911 = -1;
	uint8_t x912 = UINT8_MAX;
	int32_t t155 = -9444;

    t155 = (((x909^x910)*x911)%x912);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x913 = -1;
	static volatile int32_t x914 = INT32_MIN;
	int64_t x915 = 4039LL;
	volatile int64_t x916 = -28346150530777058LL;
	volatile int64_t t156 = 2LL;

    t156 = (((x913^x914)*x915)%x916);

    if (t156 != 8673686450233LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x917 = 188U;
	uint32_t x918 = 237559866U;
	static volatile uint32_t t157 = 486786U;

    t157 = (((x917^x918)*x919)%x920);

    if (t157 != 196U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x921 = 8847892187702109LL;
	volatile uint32_t x922 = 23671U;
	static int32_t x923 = 501;
	int64_t t158 = 942541LL;

    t158 = (((x921^x922)*x923)%x924);

    if (t158 != 12608738LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x931 = INT16_MAX;
	int64_t x932 = -33861567943448092LL;
	int64_t t159 = -123792646377402LL;

    t159 = (((x929^x930)*x931)%x932);

    if (t159 != 738837656LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x933 = 2U;
	volatile int8_t x935 = INT8_MAX;
	uint16_t x936 = 6U;
	volatile int32_t t160 = 18;

    t160 = (((x933^x934)*x935)%x936);

    if (t160 != -3) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x937 = UINT16_MAX;
	int16_t x938 = -467;
	uint64_t x939 = UINT64_MAX;
	uint8_t x940 = 1U;

    t161 = (((x937^x938)*x939)%x940);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x941 = INT16_MIN;
	uint32_t x942 = UINT32_MAX;
	static uint64_t x943 = 4501446970990075LLU;
	int16_t x944 = -644;
	volatile uint64_t t162 = 30LLU;

    t162 = (((x941^x942)*x943)%x944);

    if (t162 != 18371704382464926213LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x946 = -1LL;
	static int8_t x947 = -1;
	static uint16_t x948 = 7383U;
	int64_t t163 = -7814LL;

    t163 = (((x945^x946)*x947)%x948);

    if (t163 != 9LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x949 = 2U;
	static int32_t x950 = INT32_MIN;
	static int32_t x951 = -1;
	volatile int32_t x952 = -1;
	static volatile uint32_t t164 = 0U;

    t164 = (((x949^x950)*x951)%x952);

    if (t164 != 2147483646U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x953 = 192861753060LLU;
	int32_t x955 = INT32_MAX;
	uint16_t x956 = 72U;
	volatile uint64_t t165 = 1638379021860LLU;

    t165 = (((x953^x954)*x955)%x956);

    if (t165 != 13LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x957 = 9;
	uint8_t x958 = 11U;
	static int64_t x959 = -1LL;
	int16_t x960 = -897;

    t166 = (((x957^x958)*x959)%x960);

    if (t166 != -2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x961 = INT16_MIN;
	int64_t x962 = INT64_MAX;
	uint32_t x964 = 31U;
	volatile int64_t t167 = 20765LL;

    t167 = (((x961^x962)*x963)%x964);

    if (t167 != 8LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x965 = INT16_MIN;
	int16_t x966 = INT16_MIN;
	volatile int8_t x967 = 3;
	int64_t x968 = -40148679844937LL;
	int64_t t168 = 1001050832208412920LL;

    t168 = (((x965^x966)*x967)%x968);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x970 = UINT32_MAX;
	int32_t x972 = -943;

    t169 = (((x969^x970)*x971)%x972);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x973 = INT16_MAX;
	uint8_t x974 = 32U;
	int8_t x975 = INT8_MIN;
	uint64_t x976 = 12LLU;
	uint64_t t170 = 329436173LLU;

    t170 = (((x973^x974)*x975)%x976);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x977 = INT8_MAX;
	int8_t x978 = INT8_MIN;
	static volatile uint64_t x979 = 12452996074039853LLU;
	volatile uint64_t x980 = 37885088LLU;

    t171 = (((x977^x978)*x979)%x980);

    if (t171 != 27273747LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x989 = UINT32_MAX;
	int8_t x990 = -4;
	uint32_t t172 = 7679U;

    t172 = (((x989^x990)*x991)%x992);

    if (t172 != 735U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1001 = 0U;
	uint16_t x1002 = UINT16_MAX;
	static int16_t x1003 = -131;
	volatile int8_t x1004 = 8;
	int32_t t173 = -636;

    t173 = (((x1001^x1002)*x1003)%x1004);

    if (t173 != -5) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x1005 = UINT8_MAX;
	uint16_t x1006 = 16092U;
	int8_t x1007 = 1;
	uint64_t x1008 = 247492675LLU;
	uint64_t t174 = 4610789LLU;

    t174 = (((x1005^x1006)*x1007)%x1008);

    if (t174 != 15907LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1009 = 1643209LL;
	int32_t x1010 = 6326749;
	static volatile int16_t x1011 = INT16_MIN;
	uint64_t x1012 = 197535963266LLU;
	volatile uint64_t t175 = 7109169LLU;

    t175 = (((x1009^x1010)*x1011)%x1012);

    if (t175 != 183195408694LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1013 = 8375227U;
	uint8_t x1014 = 40U;
	volatile int32_t x1016 = INT32_MIN;
	volatile uint32_t t176 = 3U;

    t176 = (((x1013^x1014)*x1015)%x1016);

    if (t176 != 2088857339U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1017 = INT8_MAX;
	int8_t x1018 = INT8_MAX;
	static uint64_t x1019 = UINT64_MAX;
	uint8_t x1020 = UINT8_MAX;
	uint64_t t177 = 152912593706LLU;

    t177 = (((x1017^x1018)*x1019)%x1020);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x1021 = INT32_MAX;
	volatile int8_t x1022 = INT8_MAX;
	uint64_t x1023 = 19260695978LLU;
	uint64_t x1024 = 185360713LLU;
	volatile uint64_t t178 = 50194531326798LLU;

    t178 = (((x1021^x1022)*x1023)%x1024);

    if (t178 != 184114632LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1025 = 8779339205373LLU;
	int16_t x1026 = INT16_MIN;
	uint8_t x1027 = UINT8_MAX;
	volatile uint8_t x1028 = UINT8_MAX;
	uint64_t t179 = 257555671LLU;

    t179 = (((x1025^x1026)*x1027)%x1028);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1029 = 270U;
	uint8_t x1030 = UINT8_MAX;
	uint16_t x1031 = 3U;
	volatile int64_t t180 = 0LL;

    t180 = (((x1029^x1030)*x1031)%x1032);

    if (t180 != 47LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x1037 = 46348221784896138LLU;
	uint8_t x1038 = 62U;
	static uint16_t x1039 = 13395U;
	static int16_t x1040 = -11;

    t181 = (((x1037^x1038)*x1039)%x1040);

    if (t181 != 12091876376269127772LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1041 = 66602471LL;
	int32_t x1043 = 23158;
	uint16_t x1044 = 5297U;
	static int64_t t182 = -44564578295419131LL;

    t182 = (((x1041^x1042)*x1043)%x1044);

    if (t182 != 2301LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1047 = INT8_MIN;
	int8_t x1048 = 1;
	static int64_t t183 = 84139881994153LL;

    t183 = (((x1045^x1046)*x1047)%x1048);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1049 = INT8_MAX;
	int8_t x1051 = INT8_MIN;
	int32_t x1052 = INT32_MAX;
	static int32_t t184 = -2058875;

    t184 = (((x1049^x1050)*x1051)%x1052);

    if (t184 != -16256) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1053 = INT8_MIN;
	int16_t x1054 = INT16_MIN;
	uint64_t x1055 = UINT64_MAX;
	uint32_t x1056 = 1U;

    t185 = (((x1053^x1054)*x1055)%x1056);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1057 = -1;
	int8_t x1059 = INT8_MIN;
	int64_t x1060 = INT64_MIN;
	int64_t t186 = 62401LL;

    t186 = (((x1057^x1058)*x1059)%x1060);

    if (t186 != 1270400LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1061 = 4;
	int16_t x1062 = -1;
	volatile int64_t x1063 = 197226556495357293LL;
	static uint16_t x1064 = 206U;
	int64_t t187 = -1LL;

    t187 = (((x1061^x1062)*x1063)%x1064);

    if (t187 != -133LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1065 = INT64_MIN;
	int32_t x1066 = -278572;
	static uint8_t x1067 = 1U;
	static uint32_t x1068 = UINT32_MAX;

    t188 = (((x1065^x1066)*x1067)%x1068);

    if (t188 != 2147205076LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1069 = 1819390LL;
	int32_t x1070 = -1;
	int32_t x1072 = -1;
	int64_t t189 = 787917LL;

    t189 = (((x1069^x1070)*x1071)%x1072);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1080 = 1100384;
	volatile int32_t t190 = 7;

    t190 = (((x1077^x1078)*x1079)%x1080);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x1081 = 13U;
	volatile int16_t x1083 = INT16_MIN;
	int8_t x1084 = -1;
	int32_t t191 = 33;

    t191 = (((x1081^x1082)*x1083)%x1084);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1085 = INT32_MAX;
	int16_t x1086 = INT16_MIN;
	static int32_t x1087 = -1;
	int16_t x1088 = INT16_MAX;
	static int32_t t192 = 1;

    t192 = (((x1085^x1086)*x1087)%x1088);

    if (t192 != 2) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x1090 = 957420U;
	uint32_t t193 = 49695U;

    t193 = (((x1089^x1090)*x1091)%x1092);

    if (t193 != 5743218U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1093 = INT16_MIN;
	int64_t x1094 = INT64_MAX;
	volatile uint32_t x1095 = 1U;
	volatile uint8_t x1096 = 7U;
	int64_t t194 = -2461914388578174LL;

    t194 = (((x1093^x1094)*x1095)%x1096);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1101 = 18U;
	int64_t x1102 = -1256LL;
	volatile uint64_t x1103 = UINT64_MAX;
	int32_t x1104 = INT32_MIN;
	volatile uint64_t t195 = 1LLU;

    t195 = (((x1101^x1102)*x1103)%x1104);

    if (t195 != 1270LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1106 = INT32_MIN;
	int64_t x1107 = -1LL;
	int64_t t196 = -14LL;

    t196 = (((x1105^x1106)*x1107)%x1108);

    if (t196 != -61554214LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1112 = UINT8_MAX;
	uint64_t t197 = 90421866755090LLU;

    t197 = (((x1109^x1110)*x1111)%x1112);

    if (t197 != 4LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1114 = UINT64_MAX;
	volatile uint16_t x1115 = 4U;
	uint64_t t198 = 255312333220203380LLU;

    t198 = (((x1113^x1114)*x1115)%x1116);

    if (t198 != 508LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1121 = INT64_MIN;
	int8_t x1124 = -1;

    t199 = (((x1121^x1122)*x1123)%x1124);

    if (t199 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

