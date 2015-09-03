#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x184 = 2U;
uint16_t x333 = 24U;
int8_t x360 = -1;
int32_t t3 = -537458;
static volatile uint32_t x466 = 51816U;
volatile uint8_t x539 = 15U;
int16_t x540 = INT16_MIN;
static volatile int32_t t5 = 71;
int8_t x605 = INT8_MIN;
static int8_t x607 = 0;
static int16_t x802 = INT16_MAX;
uint64_t x945 = 1856037967996LLU;
int32_t x1009 = INT32_MIN;
static uint64_t x1114 = UINT64_MAX;
volatile int8_t x1115 = 1;
int32_t x1201 = INT32_MAX;
uint64_t x1322 = UINT64_MAX;
uint64_t x1324 = UINT64_MAX;
volatile uint8_t x1329 = UINT8_MAX;
volatile int32_t t16 = -521143621;
static volatile uint32_t x1394 = 0U;
uint64_t x1396 = 15LLU;
uint8_t x1722 = 8U;
volatile uint8_t x1723 = 1U;
static int8_t x1932 = INT8_MIN;
uint8_t x2119 = 0U;
int8_t x2270 = 1;
static int32_t t23 = INT32_MIN;
volatile int64_t x2548 = INT64_MAX;
uint32_t x2705 = 3198989U;
volatile uint16_t x2708 = 1993U;
uint16_t x3002 = UINT16_MAX;
volatile int64_t x3061 = -61751841LL;
int64_t t31 = 1640074901293946LL;
volatile uint16_t x3261 = 789U;
int64_t x3280 = -1LL;
volatile uint32_t t33 = 4520U;
int32_t x3613 = INT32_MAX;
uint16_t x3646 = 0U;
uint16_t x3747 = 21U;
static int64_t x4385 = INT64_MIN;
int64_t x4605 = 30681600180958LL;
int64_t x4657 = -14809805080006LL;
uint16_t x4659 = 31U;
uint8_t x5086 = 112U;
int8_t x5216 = -20;
static volatile int32_t t51 = INT32_MIN;
static uint8_t x5431 = 7U;
uint8_t x5599 = 10U;


void f0(void) {
	uint8_t x181 = 11U;
	int16_t x182 = INT16_MAX;
	int8_t x183 = 18;
	int32_t t0 = 261;

	t0 = (x181/((x182>>x183)<=x184));

	if (t0 != 11) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x334 = 21073U;
	static uint8_t x335 = 4U;
	volatile uint32_t x336 = 816887U;
	volatile int32_t t1 = 3425;

	t1 = (x333/((x334>>x335)<=x336));

	if (t1 != 24) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x357 = INT8_MIN;
	uint32_t x358 = 1U;
	int8_t x359 = 29;
	static volatile int32_t t2 = -44492536;

	t2 = (x357/((x358>>x359)<=x360));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x433 = -7;
	volatile uint64_t x434 = 8432002702661LLU;
	int16_t x435 = 1;
	int32_t x436 = INT32_MIN;

	t3 = (x433/((x434>>x435)<=x436));

	if (t3 != -7) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x465 = 4792938043115794551LLU;
	uint32_t x467 = 4U;
	int64_t x468 = INT64_MAX;
	static uint64_t t4 = 2222LLU;

	t4 = (x465/((x466>>x467)<=x468));

	if (t4 != 4792938043115794551LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x537 = INT16_MIN;
	uint64_t x538 = 478139255521LLU;

	t5 = (x537/((x538>>x539)<=x540));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x606 = 1;
	static volatile uint32_t x608 = 32U;
	static int32_t t6 = -191699;

	t6 = (x605/((x606>>x607)<=x608));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x801 = INT16_MAX;
	int16_t x803 = 1;
	volatile int64_t x804 = INT64_MAX;
	int32_t t7 = 28;

	t7 = (x801/((x802>>x803)<=x804));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x946 = 91U;
	static int8_t x947 = 9;
	uint8_t x948 = UINT8_MAX;
	uint64_t t8 = 339468859508127LLU;

	t8 = (x945/((x946>>x947)<=x948));

	if (t8 != 1856037967996LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x1005 = 29962LL;
	static int16_t x1006 = 92;
	uint8_t x1007 = 1U;
	uint32_t x1008 = 98713974U;
	volatile int64_t t9 = -110441572363LL;

	t9 = (x1005/((x1006>>x1007)<=x1008));

	if (t9 != 29962LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x1010 = 9428U;
	int8_t x1011 = 9;
	volatile int64_t x1012 = INT64_MAX;
	int32_t t10 = INT32_MIN;

	t10 = (x1009/((x1010>>x1011)<=x1012));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x1061 = 1U;
	uint8_t x1062 = 104U;
	int8_t x1063 = 0;
	volatile int32_t x1064 = 258742;
	static volatile uint32_t t11 = 3264U;

	t11 = (x1061/((x1062>>x1063)<=x1064));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x1113 = 2436U;
	int8_t x1116 = INT8_MIN;
	volatile int32_t t12 = -24;

	t12 = (x1113/((x1114>>x1115)<=x1116));

	if (t12 != 2436) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x1137 = UINT64_MAX;
	volatile uint32_t x1138 = 6U;
	int32_t x1139 = 0;
	static uint32_t x1140 = UINT32_MAX;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x1137/((x1138>>x1139)<=x1140));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x1202 = 8467LLU;
	uint64_t x1203 = 2LLU;
	int16_t x1204 = INT16_MIN;
	static int32_t t14 = INT32_MAX;

	t14 = (x1201/((x1202>>x1203)<=x1204));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1321 = INT64_MAX;
	static int8_t x1323 = 5;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x1321/((x1322>>x1323)<=x1324));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1330 = 4;
	volatile int8_t x1331 = 5;
	int16_t x1332 = 0;

	t16 = (x1329/((x1330>>x1331)<=x1332));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1393 = 43U;
	static uint8_t x1395 = 2U;
	int32_t t17 = 1279360;

	t17 = (x1393/((x1394>>x1395)<=x1396));

	if (t17 != 43) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1709 = 4U;
	static int8_t x1710 = 1;
	uint64_t x1711 = 14LLU;
	int32_t x1712 = 14652950;
	int32_t t18 = 796;

	t18 = (x1709/((x1710>>x1711)<=x1712));

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1721 = UINT8_MAX;
	int32_t x1724 = 1975928;
	static int32_t t19 = 0;

	t19 = (x1721/((x1722>>x1723)<=x1724));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1749 = INT8_MIN;
	int64_t x1750 = INT64_MAX;
	uint8_t x1751 = 54U;
	static uint64_t x1752 = 28593397387237LLU;
	static volatile int32_t t20 = 27292;

	t20 = (x1749/((x1750>>x1751)<=x1752));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1929 = 23387367109LL;
	uint64_t x1930 = 191376008LLU;
	volatile uint8_t x1931 = 12U;
	int64_t t21 = 571730350065380LL;

	t21 = (x1929/((x1930>>x1931)<=x1932));

	if (t21 != 23387367109LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x2117 = INT16_MIN;
	volatile int64_t x2118 = INT64_MAX;
	static uint64_t x2120 = UINT64_MAX;
	int32_t t22 = 558;

	t22 = (x2117/((x2118>>x2119)<=x2120));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x2269 = INT32_MIN;
	uint8_t x2271 = 7U;
	static int32_t x2272 = 153346145;

	t23 = (x2269/((x2270>>x2271)<=x2272));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x2545 = UINT16_MAX;
	uint32_t x2546 = 5161U;
	int8_t x2547 = 1;
	int32_t t24 = -49432163;

	t24 = (x2545/((x2546>>x2547)<=x2548));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x2706 = 0;
	int8_t x2707 = 3;
	static uint32_t t25 = 32481331U;

	t25 = (x2705/((x2706>>x2707)<=x2708));

	if (t25 != 3198989U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2817 = 117206U;
	static uint32_t x2818 = 22U;
	int8_t x2819 = 1;
	volatile int32_t x2820 = INT32_MIN;
	volatile uint32_t t26 = 427989992U;

	t26 = (x2817/((x2818>>x2819)<=x2820));

	if (t26 != 117206U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2885 = 42;
	uint8_t x2886 = 122U;
	uint16_t x2887 = 0U;
	volatile uint16_t x2888 = UINT16_MAX;
	volatile int32_t t27 = 82;

	t27 = (x2885/((x2886>>x2887)<=x2888));

	if (t27 != 42) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2897 = -1;
	int8_t x2898 = INT8_MAX;
	static int8_t x2899 = 0;
	static uint64_t x2900 = 50013508769LLU;
	int32_t t28 = -195959349;

	t28 = (x2897/((x2898>>x2899)<=x2900));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2905 = -60;
	int8_t x2906 = INT8_MAX;
	uint8_t x2907 = 14U;
	int8_t x2908 = INT8_MAX;
	static int32_t t29 = -6241;

	t29 = (x2905/((x2906>>x2907)<=x2908));

	if (t29 != -60) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x3001 = 10701357000086727LL;
	uint32_t x3003 = 5U;
	uint32_t x3004 = UINT32_MAX;
	volatile int64_t t30 = -1652697994302LL;

	t30 = (x3001/((x3002>>x3003)<=x3004));

	if (t30 != 10701357000086727LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x3062 = 46U;
	static int16_t x3063 = 28;
	uint64_t x3064 = 8173LLU;

	t31 = (x3061/((x3062>>x3063)<=x3064));

	if (t31 != -61751841LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x3262 = UINT32_MAX;
	int8_t x3263 = 0;
	int64_t x3264 = INT64_MAX;
	int32_t t32 = 2297;

	t32 = (x3261/((x3262>>x3263)<=x3264));

	if (t32 != 789) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x3277 = 41084U;
	static uint64_t x3278 = 19385891609191258LLU;
	volatile uint8_t x3279 = 62U;

	t33 = (x3277/((x3278>>x3279)<=x3280));

	if (t33 != 41084U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x3614 = INT8_MAX;
	static uint16_t x3615 = 0U;
	uint32_t x3616 = UINT32_MAX;
	static volatile int32_t t34 = INT32_MAX;

	t34 = (x3613/((x3614>>x3615)<=x3616));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x3645 = 1;
	int8_t x3647 = 9;
	volatile int8_t x3648 = INT8_MAX;
	volatile int32_t t35 = -233697;

	t35 = (x3645/((x3646>>x3647)<=x3648));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x3697 = 1U;
	static uint16_t x3698 = UINT16_MAX;
	int64_t x3699 = 0LL;
	int32_t x3700 = INT32_MAX;
	volatile int32_t t36 = 5602;

	t36 = (x3697/((x3698>>x3699)<=x3700));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x3705 = -1LL;
	int32_t x3706 = INT32_MAX;
	uint32_t x3707 = 3U;
	volatile uint64_t x3708 = UINT64_MAX;
	volatile int64_t t37 = -5521912299LL;

	t37 = (x3705/((x3706>>x3707)<=x3708));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x3725 = INT8_MIN;
	volatile int16_t x3726 = INT16_MAX;
	uint16_t x3727 = 2U;
	volatile int64_t x3728 = INT64_MAX;
	volatile int32_t t38 = 67220;

	t38 = (x3725/((x3726>>x3727)<=x3728));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x3745 = 3761850U;
	static volatile uint64_t x3746 = UINT64_MAX;
	volatile int64_t x3748 = INT64_MIN;
	uint32_t t39 = 113393502U;

	t39 = (x3745/((x3746>>x3747)<=x3748));

	if (t39 != 3761850U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x4089 = INT32_MIN;
	volatile uint64_t x4090 = 271993076LLU;
	volatile int16_t x4091 = 0;
	uint64_t x4092 = UINT64_MAX;
	int32_t t40 = INT32_MIN;

	t40 = (x4089/((x4090>>x4091)<=x4092));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x4109 = 1084588471U;
	static volatile uint32_t x4110 = UINT32_MAX;
	static uint16_t x4111 = 0U;
	int8_t x4112 = -1;
	volatile uint32_t t41 = 6549947U;

	t41 = (x4109/((x4110>>x4111)<=x4112));

	if (t41 != 1084588471U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x4386 = INT8_MAX;
	uint8_t x4387 = 14U;
	uint16_t x4388 = 764U;
	static volatile int64_t t42 = INT64_MIN;

	t42 = (x4385/((x4386>>x4387)<=x4388));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x4449 = 73481266U;
	uint32_t x4450 = 224596U;
	uint16_t x4451 = 10U;
	uint32_t x4452 = 14304836U;
	static uint32_t t43 = 3U;

	t43 = (x4449/((x4450>>x4451)<=x4452));

	if (t43 != 73481266U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x4606 = 12053LLU;
	uint32_t x4607 = 3U;
	int8_t x4608 = INT8_MIN;
	int64_t t44 = 217140546919LL;

	t44 = (x4605/((x4606>>x4607)<=x4608));

	if (t44 != 30681600180958LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x4658 = 1908882294LLU;
	uint32_t x4660 = 2565U;
	volatile int64_t t45 = 8690282937229809LL;

	t45 = (x4657/((x4658>>x4659)<=x4660));

	if (t45 != -14809805080006LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x4677 = 1U;
	int16_t x4678 = INT16_MAX;
	int8_t x4679 = 13;
	uint8_t x4680 = 3U;
	int32_t t46 = 247598876;

	t46 = (x4677/((x4678>>x4679)<=x4680));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x4993 = 156380647U;
	uint8_t x4994 = 23U;
	int64_t x4995 = 4LL;
	uint32_t x4996 = 4U;
	volatile uint32_t t47 = 1614U;

	t47 = (x4993/((x4994>>x4995)<=x4996));

	if (t47 != 156380647U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x5085 = -1;
	static int32_t x5087 = 31;
	int8_t x5088 = INT8_MAX;
	volatile int32_t t48 = -5181;

	t48 = (x5085/((x5086>>x5087)<=x5088));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x5213 = 292579474LL;
	uint32_t x5214 = 6054936U;
	uint32_t x5215 = 7U;
	int64_t t49 = 184LL;

	t49 = (x5213/((x5214>>x5215)<=x5216));

	if (t49 != 292579474LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x5357 = -26171;
	volatile int16_t x5358 = 5262;
	uint16_t x5359 = 14U;
	uint16_t x5360 = UINT16_MAX;
	int32_t t50 = 5794566;

	t50 = (x5357/((x5358>>x5359)<=x5360));

	if (t50 != -26171) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x5389 = INT32_MIN;
	uint64_t x5390 = UINT64_MAX;
	static uint32_t x5391 = 7U;
	int16_t x5392 = INT16_MIN;

	t51 = (x5389/((x5390>>x5391)<=x5392));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x5413 = -507400086493145LL;
	static volatile int64_t x5414 = 1LL;
	uint32_t x5415 = 4U;
	uint64_t x5416 = UINT64_MAX;
	int64_t t52 = -1351241480340982477LL;

	t52 = (x5413/((x5414>>x5415)<=x5416));

	if (t52 != -507400086493145LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x5429 = -1;
	static uint64_t x5430 = 4138309252854136LLU;
	int16_t x5432 = -7;
	volatile int32_t t53 = 1634;

	t53 = (x5429/((x5430>>x5431)<=x5432));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x5493 = INT32_MIN;
	int8_t x5494 = 60;
	static uint8_t x5495 = 29U;
	uint8_t x5496 = UINT8_MAX;
	static int32_t t54 = INT32_MIN;

	t54 = (x5493/((x5494>>x5495)<=x5496));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x5597 = INT64_MAX;
	volatile uint8_t x5598 = UINT8_MAX;
	uint64_t x5600 = 102009176603103391LLU;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x5597/((x5598>>x5599)<=x5600));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
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


    return 0;
}

