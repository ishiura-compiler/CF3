#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 13LL;
volatile int16_t x69 = INT16_MIN;
uint16_t x155 = 7U;
int16_t x161 = -1;
static int8_t x162 = -3;
int64_t t3 = -4622LL;
int32_t x189 = INT32_MAX;
int64_t x190 = INT64_MIN;
static volatile int64_t x374 = -3023482290534021LL;
int8_t x375 = 0;
int64_t x393 = INT64_MIN;
int16_t x396 = INT16_MIN;
int32_t x416 = -1;
int64_t x422 = INT64_MAX;
int32_t x500 = INT32_MIN;
int32_t x565 = -53763811;
int64_t x566 = 505477904329LL;
uint64_t x607 = 1LLU;
uint32_t x631 = 2U;
uint64_t x632 = 858462496LLU;
uint16_t x667 = 11U;
static uint16_t x668 = 8041U;
int32_t x674 = -1;
uint16_t x675 = 2U;
uint32_t x680 = 26U;
uint8_t x689 = UINT8_MAX;
volatile int32_t t25 = 513404010;
int8_t x817 = INT8_MIN;
static int32_t x829 = -121;
uint16_t x937 = UINT16_MAX;
uint32_t x967 = 0U;
int16_t x1001 = INT16_MAX;
int8_t x1004 = INT8_MAX;
uint8_t x1086 = UINT8_MAX;
static volatile int32_t t34 = 1;
int8_t x1155 = 0;
int16_t x1177 = INT16_MIN;
int8_t x1192 = -1;
uint8_t x1193 = UINT8_MAX;
static int64_t x1194 = INT64_MIN;
static int8_t x1225 = INT8_MAX;
volatile uint64_t x1226 = UINT64_MAX;
int64_t x1227 = 2LL;
int32_t x1228 = INT32_MAX;
static volatile int16_t x1237 = -1;
int8_t x1239 = 11;
int8_t x1250 = INT8_MIN;
uint64_t t43 = 772003171427156LLU;
uint64_t t44 = 2LLU;
uint8_t x1399 = 28U;
uint64_t x1486 = 153988798971218LLU;
volatile int16_t x1610 = INT16_MIN;
uint16_t x1691 = 1U;
int64_t x1694 = INT64_MAX;
int8_t x1695 = 27;
volatile int64_t t53 = -59036270616LL;
uint16_t x1823 = 31U;
int16_t x1913 = -1;
int64_t x1961 = 1213LL;
volatile int64_t x1962 = 9299866633LL;
uint64_t t57 = 650115787479LLU;
uint64_t x1988 = UINT64_MAX;
int8_t x2021 = INT8_MIN;
volatile uint16_t x2023 = 1U;
static uint8_t x2047 = 2U;
uint64_t x2048 = 260714675LLU;
volatile uint64_t t60 = 939341070LLU;
int32_t x2049 = 1;
uint32_t x2109 = UINT32_MAX;
int64_t x2112 = INT64_MAX;
uint16_t x2225 = 380U;
static uint32_t x2228 = 134156U;
uint32_t t65 = 214620U;
int8_t x2293 = 0;
static volatile int64_t t67 = -1001987232952721376LL;
uint32_t x2437 = UINT32_MAX;
uint32_t x2440 = 341U;
volatile int64_t t70 = -15223300481416235LL;
int32_t x2458 = -1;
int8_t x2459 = 6;
int8_t x2501 = 3;
int16_t x2502 = 105;
static volatile uint32_t t74 = 2708677U;
uint32_t x2522 = 128708U;
static volatile int16_t x2642 = INT16_MIN;
volatile uint8_t x2643 = 12U;
static volatile int16_t x2778 = 48;
static int16_t x2813 = -1;
static int16_t x2947 = 1;
static int64_t x3013 = 1356LL;
uint8_t x3014 = 2U;
int32_t x3015 = 16;
volatile int64_t t81 = 685058377855248LL;
volatile uint64_t x3077 = 104609325610761LLU;
static int8_t x3080 = 9;
int16_t x3125 = -5;
static uint64_t x3128 = 361294275LLU;
static uint64_t x3220 = 6482436017707LLU;
uint8_t x3304 = 66U;
uint16_t x3473 = 3672U;
int8_t x3538 = -14;
volatile uint32_t x3603 = 3U;
int16_t x3621 = -224;
static uint8_t x3623 = 0U;
int8_t x3624 = -1;
int32_t t93 = 5316451;
static volatile int8_t x3634 = -1;
int8_t x3757 = INT8_MIN;
uint64_t t98 = 836516LLU;


void f0(void) {
	volatile int64_t x41 = -1LL;
	int64_t x42 = -17916128LL;
	int8_t x43 = 7;
	volatile int8_t x44 = INT8_MAX;

	t0 = (((x41/x42)<<x43)*x44);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x70 = -1;
	uint8_t x71 = 13U;
	int8_t x72 = 6;
	volatile int32_t t1 = 401193437;

	t1 = (((x69/x70)<<x71)*x72);

	if (t1 != 1610612736) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x153 = INT8_MIN;
	int16_t x154 = INT16_MAX;
	uint8_t x156 = 1U;
	int32_t t2 = -361162604;

	t2 = (((x153/x154)<<x155)*x156);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x163 = 0U;
	volatile int64_t x164 = INT64_MAX;

	t3 = (((x161/x162)<<x163)*x164);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x173 = 8106U;
	static uint32_t x174 = 8U;
	uint8_t x175 = 17U;
	static int8_t x176 = INT8_MAX;
	uint32_t t4 = 31U;

	t4 = (((x173/x174)<<x175)*x176);

	if (t4 != 3977641984U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x181 = -1;
	static volatile uint16_t x182 = UINT16_MAX;
	int8_t x183 = 10;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t5 = -12697571;

	t5 = (((x181/x182)<<x183)*x184);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x191 = 0U;
	int64_t x192 = -1LL;
	int64_t t6 = -172061878301LL;

	t6 = (((x189/x190)<<x191)*x192);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x249 = INT32_MIN;
	int64_t x250 = -1LL;
	int32_t x251 = 0;
	static int32_t x252 = -1;
	volatile int64_t t7 = 124869535LL;

	t7 = (((x249/x250)<<x251)*x252);

	if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x357 = 1252593036813LLU;
	int16_t x358 = INT16_MIN;
	uint8_t x359 = 1U;
	int64_t x360 = -1LL;
	uint64_t t8 = 3461152064578842593LLU;

	t8 = (((x357/x358)<<x359)*x360);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x373 = INT16_MIN;
	int64_t x376 = 202288774919091LL;
	int64_t t9 = -485341128087604777LL;

	t9 = (((x373/x374)<<x375)*x376);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x394 = INT32_MIN;
	int8_t x395 = 1;
	static int64_t t10 = 1LL;

	t10 = (((x393/x394)<<x395)*x396);

	if (t10 != -281474976710656LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x413 = 1;
	int16_t x414 = 372;
	uint16_t x415 = 31U;
	static volatile int32_t t11 = 2;

	t11 = (((x413/x414)<<x415)*x416);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x421 = INT16_MIN;
	volatile uint32_t x423 = 0U;
	uint16_t x424 = UINT16_MAX;
	static volatile int64_t t12 = 642307016732LL;

	t12 = (((x421/x422)<<x423)*x424);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x465 = INT32_MIN;
	int64_t x466 = -38198821148008173LL;
	int16_t x467 = 2;
	int8_t x468 = -1;
	static volatile int64_t t13 = -1767LL;

	t13 = (((x465/x466)<<x467)*x468);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x497 = INT8_MAX;
	int16_t x498 = INT16_MIN;
	uint16_t x499 = 3U;
	int32_t t14 = -27;

	t14 = (((x497/x498)<<x499)*x500);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x567 = 56U;
	int64_t x568 = -4057393970333605751LL;
	volatile int64_t t15 = -27755107299LL;

	t15 = (((x565/x566)<<x567)*x568);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x585 = -477LL;
	int32_t x586 = -53623;
	int8_t x587 = 0;
	static int32_t x588 = INT32_MAX;
	volatile int64_t t16 = -29LL;

	t16 = (((x585/x586)<<x587)*x588);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x605 = INT64_MIN;
	static int32_t x606 = INT32_MIN;
	static int16_t x608 = -87;
	volatile int64_t t17 = -1045584026LL;

	t17 = (((x605/x606)<<x607)*x608);

	if (t17 != -747324309504LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x629 = -6836;
	int32_t x630 = INT32_MIN;
	uint64_t t18 = 354184268525464145LLU;

	t18 = (((x629/x630)<<x631)*x632);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x665 = 108U;
	int64_t x666 = INT64_MAX;
	volatile int64_t t19 = 576974997909558LL;

	t19 = (((x665/x666)<<x667)*x668);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x673 = -1;
	uint16_t x676 = 2U;
	static volatile int32_t t20 = -198080671;

	t20 = (((x673/x674)<<x675)*x676);

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x677 = 16274;
	int8_t x678 = INT8_MAX;
	int16_t x679 = 0;
	volatile uint32_t t21 = 6253U;

	t21 = (((x677/x678)<<x679)*x680);

	if (t21 != 3328U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x690 = 291455131LLU;
	uint16_t x691 = 29U;
	volatile int8_t x692 = INT8_MIN;
	uint64_t t22 = 1004199LLU;

	t22 = (((x689/x690)<<x691)*x692);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x693 = 0U;
	int16_t x694 = INT16_MAX;
	uint64_t x695 = 22LLU;
	volatile uint16_t x696 = UINT16_MAX;
	int32_t t23 = -45712925;

	t23 = (((x693/x694)<<x695)*x696);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x805 = -675015164305066867LL;
	int32_t x806 = INT32_MIN;
	volatile uint64_t x807 = 1LLU;
	volatile int8_t x808 = INT8_MAX;
	int64_t t24 = 2731578903LL;

	t24 = (((x805/x806)<<x807)*x808);

	if (t24 != 79839421220LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x813 = 12;
	int8_t x814 = INT8_MIN;
	static volatile uint8_t x815 = 0U;
	int32_t x816 = 2991;

	t25 = (((x813/x814)<<x815)*x816);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x818 = 105364U;
	int8_t x819 = 5;
	int8_t x820 = INT8_MIN;
	uint32_t t26 = 854983064U;

	t26 = (((x817/x818)<<x819)*x820);

	if (t26 != 4128002048U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x821 = 78U;
	uint8_t x822 = UINT8_MAX;
	uint8_t x823 = 4U;
	int32_t x824 = INT32_MIN;
	int32_t t27 = 3102;

	t27 = (((x821/x822)<<x823)*x824);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x830 = UINT32_MAX;
	int16_t x831 = 0;
	volatile int32_t x832 = INT32_MIN;
	uint32_t t28 = 102393241U;

	t28 = (((x829/x830)<<x831)*x832);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x933 = INT8_MAX;
	int64_t x934 = INT64_MIN;
	uint16_t x935 = 0U;
	int64_t x936 = INT64_MAX;
	int64_t t29 = 19680740092622455LL;

	t29 = (((x933/x934)<<x935)*x936);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x938 = 7;
	volatile uint32_t x939 = 1U;
	int16_t x940 = -1;
	int32_t t30 = 54860;

	t30 = (((x937/x938)<<x939)*x940);

	if (t30 != -18724) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x965 = UINT8_MAX;
	volatile int32_t x966 = INT32_MIN;
	int16_t x968 = -1;
	int32_t t31 = 3648519;

	t31 = (((x965/x966)<<x967)*x968);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1002 = INT32_MAX;
	volatile int16_t x1003 = 5;
	volatile int32_t t32 = -428;

	t32 = (((x1001/x1002)<<x1003)*x1004);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1081 = INT16_MIN;
	uint32_t x1082 = UINT32_MAX;
	volatile uint8_t x1083 = 0U;
	static int8_t x1084 = INT8_MAX;
	uint32_t t33 = 11181U;

	t33 = (((x1081/x1082)<<x1083)*x1084);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1085 = 1;
	int8_t x1087 = 7;
	int8_t x1088 = INT8_MIN;

	t34 = (((x1085/x1086)<<x1087)*x1088);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1153 = -15794878764477070LL;
	volatile int8_t x1154 = -1;
	int64_t x1156 = -1LL;
	int64_t t35 = -4199070553737404675LL;

	t35 = (((x1153/x1154)<<x1155)*x1156);

	if (t35 != -15794878764477070LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1169 = INT32_MAX;
	uint8_t x1170 = UINT8_MAX;
	uint8_t x1171 = 1U;
	uint32_t x1172 = 3229565U;
	uint32_t t36 = 12U;

	t36 = (((x1169/x1170)<<x1171)*x1172);

	if (t36 != 4123294976U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1178 = INT32_MAX;
	uint32_t x1179 = 0U;
	int32_t x1180 = 11;
	int32_t t37 = 140483956;

	t37 = (((x1177/x1178)<<x1179)*x1180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1189 = INT64_MAX;
	volatile uint32_t x1190 = UINT32_MAX;
	static volatile int8_t x1191 = 30;
	int64_t t38 = 29563719546LL;

	t38 = (((x1189/x1190)<<x1191)*x1192);

	if (t38 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1195 = 58;
	uint64_t x1196 = 174004315862952LLU;
	uint64_t t39 = 12734986LLU;

	t39 = (((x1193/x1194)<<x1195)*x1196);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t t40 = 208252640197959LLU;

	t40 = (((x1225/x1226)<<x1227)*x1228);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1238 = -24393670LL;
	uint32_t x1240 = 5303369U;
	volatile int64_t t41 = 52LL;

	t41 = (((x1237/x1238)<<x1239)*x1240);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x1241 = 29U;
	volatile int64_t x1242 = INT64_MIN;
	volatile int32_t x1243 = 1;
	int64_t x1244 = -4923715521LL;
	int64_t t42 = 470LL;

	t42 = (((x1241/x1242)<<x1243)*x1244);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1249 = 566701481272857LLU;
	uint32_t x1251 = 59U;
	uint16_t x1252 = UINT16_MAX;

	t43 = (((x1249/x1250)<<x1251)*x1252);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1305 = 1319LLU;
	volatile int64_t x1306 = INT64_MIN;
	static volatile uint16_t x1307 = 0U;
	static volatile int32_t x1308 = -348236895;

	t44 = (((x1305/x1306)<<x1307)*x1308);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x1397 = 1U;
	volatile uint64_t x1398 = 6398046973710LLU;
	static int64_t x1400 = INT64_MIN;
	static uint64_t t45 = 624LLU;

	t45 = (((x1397/x1398)<<x1399)*x1400);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1457 = INT16_MAX;
	static uint16_t x1458 = 178U;
	int8_t x1459 = 1;
	uint16_t x1460 = 598U;
	static int32_t t46 = 12609870;

	t46 = (((x1457/x1458)<<x1459)*x1460);

	if (t46 != 220064) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1485 = INT32_MIN;
	volatile int8_t x1487 = 0;
	volatile int16_t x1488 = 2;
	static volatile uint64_t t47 = 638920296511LLU;

	t47 = (((x1485/x1486)<<x1487)*x1488);

	if (t47 != 239584LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1601 = 6;
	volatile int16_t x1602 = INT16_MAX;
	uint16_t x1603 = 1U;
	static int16_t x1604 = -1;
	static volatile int32_t t48 = -639;

	t48 = (((x1601/x1602)<<x1603)*x1604);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1609 = INT8_MAX;
	static int16_t x1611 = 5;
	static uint16_t x1612 = UINT16_MAX;
	volatile int32_t t49 = -490935;

	t49 = (((x1609/x1610)<<x1611)*x1612);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1689 = INT16_MIN;
	volatile int32_t x1690 = INT32_MIN;
	uint8_t x1692 = UINT8_MAX;
	volatile int32_t t50 = 245;

	t50 = (((x1689/x1690)<<x1691)*x1692);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x1693 = INT8_MIN;
	int64_t x1696 = 68665969LL;
	static volatile int64_t t51 = -246543145LL;

	t51 = (((x1693/x1694)<<x1695)*x1696);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1705 = 415522U;
	uint64_t x1706 = UINT64_MAX;
	uint64_t x1707 = 10LLU;
	uint64_t x1708 = UINT64_MAX;
	volatile uint64_t t52 = 85764LLU;

	t52 = (((x1705/x1706)<<x1707)*x1708);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1765 = -1;
	volatile int64_t x1766 = -885362LL;
	static uint16_t x1767 = 3U;
	volatile int16_t x1768 = INT16_MIN;

	t53 = (((x1765/x1766)<<x1767)*x1768);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1821 = INT32_MIN;
	volatile uint32_t x1822 = 14548927U;
	uint8_t x1824 = 46U;
	volatile uint32_t t54 = 2358U;

	t54 = (((x1821/x1822)<<x1823)*x1824);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1833 = UINT8_MAX;
	uint64_t x1834 = 1274333432867479LLU;
	volatile int16_t x1835 = 0;
	static volatile int32_t x1836 = INT32_MAX;
	volatile uint64_t t55 = 2391265866827LLU;

	t55 = (((x1833/x1834)<<x1835)*x1836);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1914 = 15U;
	static volatile int8_t x1915 = 28;
	uint32_t x1916 = UINT32_MAX;
	uint32_t t56 = 807920U;

	t56 = (((x1913/x1914)<<x1915)*x1916);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1963 = 20;
	volatile uint64_t x1964 = 283287117LLU;

	t57 = (((x1961/x1962)<<x1963)*x1964);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x1985 = 640U;
	volatile uint64_t x1986 = 3498712LLU;
	static int8_t x1987 = 4;
	static uint64_t t58 = 3691666886LLU;

	t58 = (((x1985/x1986)<<x1987)*x1988);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x2022 = 128749LLU;
	int8_t x2024 = -12;
	uint64_t t59 = 488047LLU;

	t59 = (((x2021/x2022)<<x2023)*x2024);

	if (t59 != 18443305430630622640LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2045 = 20833986431333LLU;
	volatile int16_t x2046 = -9064;

	t60 = (((x2045/x2046)<<x2047)*x2048);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x2050 = 3U;
	uint8_t x2051 = 8U;
	static int64_t x2052 = INT64_MAX;
	volatile int64_t t61 = 50984LL;

	t61 = (((x2049/x2050)<<x2051)*x2052);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2085 = -13978687LL;
	int16_t x2086 = -1;
	int8_t x2087 = 1;
	static int64_t x2088 = -1LL;
	volatile int64_t t62 = -7924583762895061LL;

	t62 = (((x2085/x2086)<<x2087)*x2088);

	if (t62 != -27957374LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2110 = UINT64_MAX;
	int16_t x2111 = 33;
	volatile uint64_t t63 = 1509LLU;

	t63 = (((x2109/x2110)<<x2111)*x2112);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2226 = 791120LL;
	volatile uint16_t x2227 = 12U;
	int64_t t64 = 158072186525926450LL;

	t64 = (((x2225/x2226)<<x2227)*x2228);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2249 = -1;
	volatile int32_t x2250 = INT32_MIN;
	int8_t x2251 = 0;
	uint32_t x2252 = UINT32_MAX;

	t65 = (((x2249/x2250)<<x2251)*x2252);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2294 = INT8_MIN;
	static int8_t x2295 = 0;
	int16_t x2296 = 1;
	volatile int32_t t66 = 809112699;

	t66 = (((x2293/x2294)<<x2295)*x2296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x2313 = -1LL;
	static int8_t x2314 = INT8_MIN;
	static int8_t x2315 = 10;
	int64_t x2316 = INT64_MAX;

	t67 = (((x2313/x2314)<<x2315)*x2316);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x2361 = 1125U;
	static uint32_t x2362 = 3092155U;
	uint16_t x2363 = 4U;
	int16_t x2364 = INT16_MIN;
	uint32_t t68 = 29U;

	t68 = (((x2361/x2362)<<x2363)*x2364);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2417 = -1;
	uint32_t x2418 = 3U;
	uint8_t x2419 = 3U;
	volatile int8_t x2420 = -1;
	static uint32_t t69 = 11768140U;

	t69 = (((x2417/x2418)<<x2419)*x2420);

	if (t69 != 1431655768U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x2438 = INT64_MAX;
	uint16_t x2439 = 1U;

	t70 = (((x2437/x2438)<<x2439)*x2440);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2457 = 1045030LLU;
	volatile int64_t x2460 = -11136574LL;
	uint64_t t71 = 3662052881347LLU;

	t71 = (((x2457/x2458)<<x2459)*x2460);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2465 = -15217072027LL;
	uint64_t x2466 = UINT64_MAX;
	int8_t x2467 = 5;
	int64_t x2468 = 39761LL;
	uint64_t t72 = 61LLU;

	t72 = (((x2465/x2466)<<x2467)*x2468);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2503 = 0U;
	volatile uint8_t x2504 = UINT8_MAX;
	volatile int32_t t73 = -2818;

	t73 = (((x2501/x2502)<<x2503)*x2504);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2513 = -1;
	uint32_t x2514 = 99202U;
	uint8_t x2515 = 0U;
	static uint32_t x2516 = 0U;

	t74 = (((x2513/x2514)<<x2515)*x2516);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2521 = -1LL;
	static uint8_t x2523 = 0U;
	static int64_t x2524 = INT64_MIN;
	volatile int64_t t75 = 2450290541589517LL;

	t75 = (((x2521/x2522)<<x2523)*x2524);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2641 = UINT8_MAX;
	static int32_t x2644 = INT32_MAX;
	int32_t t76 = -246095;

	t76 = (((x2641/x2642)<<x2643)*x2644);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2745 = UINT8_MAX;
	uint16_t x2746 = UINT16_MAX;
	volatile uint8_t x2747 = 18U;
	int32_t x2748 = INT32_MAX;
	volatile int32_t t77 = -211;

	t77 = (((x2745/x2746)<<x2747)*x2748);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x2777 = -1LL;
	volatile int32_t x2779 = 3;
	static volatile int8_t x2780 = 1;
	int64_t t78 = -550047930365065LL;

	t78 = (((x2777/x2778)<<x2779)*x2780);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2814 = INT8_MIN;
	uint16_t x2815 = 0U;
	volatile uint32_t x2816 = 61093U;
	uint32_t t79 = 950417U;

	t79 = (((x2813/x2814)<<x2815)*x2816);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2945 = -40;
	uint16_t x2946 = UINT16_MAX;
	volatile uint8_t x2948 = 5U;
	volatile int32_t t80 = 1067895;

	t80 = (((x2945/x2946)<<x2947)*x2948);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x3016 = 118U;

	t81 = (((x3013/x3014)<<x3015)*x3016);

	if (t81 != 5243142144LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3025 = INT32_MIN;
	uint64_t x3026 = UINT64_MAX;
	uint8_t x3027 = 3U;
	static uint8_t x3028 = 91U;
	volatile uint64_t t82 = 40504LLU;

	t82 = (((x3025/x3026)<<x3027)*x3028);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3078 = INT8_MIN;
	static volatile uint8_t x3079 = 1U;
	static uint64_t t83 = 1502219377857126815LLU;

	t83 = (((x3077/x3078)<<x3079)*x3080);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x3121 = INT32_MIN;
	int64_t x3122 = INT64_MIN;
	volatile int8_t x3123 = 32;
	uint8_t x3124 = UINT8_MAX;
	int64_t t84 = 99437295LL;

	t84 = (((x3121/x3122)<<x3123)*x3124);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x3126 = INT16_MIN;
	volatile uint32_t x3127 = 9U;
	volatile uint64_t t85 = 1774559LLU;

	t85 = (((x3125/x3126)<<x3127)*x3128);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3217 = 5U;
	int8_t x3218 = INT8_MIN;
	volatile int16_t x3219 = 0;
	static uint64_t t86 = 3722807502696LLU;

	t86 = (((x3217/x3218)<<x3219)*x3220);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3261 = 31690;
	uint32_t x3262 = 12U;
	uint16_t x3263 = 0U;
	int32_t x3264 = INT32_MIN;
	uint32_t t87 = 211776U;

	t87 = (((x3261/x3262)<<x3263)*x3264);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3301 = 14;
	int16_t x3302 = INT16_MAX;
	int8_t x3303 = 0;
	int32_t t88 = -142;

	t88 = (((x3301/x3302)<<x3303)*x3304);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x3474 = 359U;
	uint16_t x3475 = 7U;
	int8_t x3476 = -6;
	volatile int32_t t89 = -522671511;

	t89 = (((x3473/x3474)<<x3475)*x3476);

	if (t89 != -7680) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3513 = INT32_MAX;
	int64_t x3514 = INT64_MIN;
	int32_t x3515 = 1;
	uint16_t x3516 = UINT16_MAX;
	volatile int64_t t90 = 9LL;

	t90 = (((x3513/x3514)<<x3515)*x3516);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3537 = 0;
	volatile uint16_t x3539 = 17U;
	static volatile int32_t x3540 = INT32_MIN;
	volatile int32_t t91 = 138;

	t91 = (((x3537/x3538)<<x3539)*x3540);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3601 = 0U;
	volatile int64_t x3602 = -1LL;
	int32_t x3604 = 747;
	volatile int64_t t92 = 170922009534090274LL;

	t92 = (((x3601/x3602)<<x3603)*x3604);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x3622 = INT16_MIN;

	t93 = (((x3621/x3622)<<x3623)*x3624);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3633 = 999U;
	uint8_t x3635 = 6U;
	int64_t x3636 = INT64_MIN;
	volatile int64_t t94 = -1384586813LL;

	t94 = (((x3633/x3634)<<x3635)*x3636);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3645 = -1;
	int16_t x3646 = INT16_MIN;
	uint16_t x3647 = 27U;
	int32_t x3648 = 300250703;
	volatile int32_t t95 = -60717;

	t95 = (((x3645/x3646)<<x3647)*x3648);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3753 = UINT8_MAX;
	int64_t x3754 = INT64_MAX;
	uint16_t x3755 = 34U;
	uint8_t x3756 = 50U;
	volatile int64_t t96 = -2LL;

	t96 = (((x3753/x3754)<<x3755)*x3756);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3758 = -7;
	uint32_t x3759 = 1U;
	int64_t x3760 = 175741LL;
	volatile int64_t t97 = 26605LL;

	t97 = (((x3757/x3758)<<x3759)*x3760);

	if (t97 != 6326676LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3769 = 1LLU;
	int32_t x3770 = INT32_MIN;
	int8_t x3771 = 2;
	static int32_t x3772 = INT32_MIN;

	t98 = (((x3769/x3770)<<x3771)*x3772);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3773 = 12U;
	int32_t x3774 = INT32_MAX;
	static int16_t x3775 = 31;
	static int8_t x3776 = INT8_MIN;
	volatile int32_t t99 = -93;

	t99 = (((x3773/x3774)<<x3775)*x3776);

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

