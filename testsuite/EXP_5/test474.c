#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x27 = INT16_MIN;
uint64_t x57 = 5304080008074LLU;
static volatile uint64_t x71 = 7932983374627089075LLU;
uint16_t x142 = 1U;
volatile int32_t t4 = -4164487;
int32_t t7 = 2;
int16_t x238 = INT16_MIN;
volatile int8_t x240 = 1;
static volatile int32_t t10 = -472;
int64_t x258 = -1LL;
static int64_t x259 = -1LL;
volatile int32_t t11 = 44;
static int8_t x302 = -1;
int8_t x314 = 0;
uint16_t x320 = 378U;
uint32_t x353 = 1U;
uint32_t t17 = 57517U;
static uint32_t x365 = 11495U;
static int32_t x367 = -1;
volatile int32_t t19 = 782578110;
int8_t x429 = 28;
static uint32_t x459 = 10169U;
int16_t x517 = INT16_MAX;
static int32_t x518 = INT32_MIN;
int32_t t23 = 240;
uint16_t x542 = 1U;
static int8_t x566 = INT8_MIN;
int32_t t25 = -1;
uint16_t x625 = 1U;
int8_t x695 = 5;
int64_t t29 = 71263125496885985LL;
uint64_t x745 = UINT64_MAX;
uint64_t t31 = UINT64_MAX;
uint64_t t32 = 686603233LLU;
int8_t x753 = 7;
uint32_t x755 = 13638603U;
int32_t t36 = -167151;
int16_t x840 = -1;
int32_t x841 = INT32_MAX;
int16_t x843 = INT16_MIN;
uint16_t x844 = UINT16_MAX;
volatile int32_t t39 = -122318276;
int32_t x935 = INT32_MAX;
volatile int32_t t41 = -946311;
static uint32_t x950 = UINT32_MAX;
uint32_t x1003 = UINT32_MAX;
static int32_t x1037 = INT32_MAX;
static int64_t x1040 = INT64_MIN;
volatile int32_t t47 = 15420;
uint64_t x1106 = 358LLU;
uint32_t x1137 = 0U;
int32_t x1138 = 3765;
volatile uint32_t t52 = 0U;
int32_t t53 = -503459;
int16_t x1192 = 7236;
uint16_t x1317 = 96U;
static volatile uint32_t x1318 = 0U;
int64_t x1320 = INT64_MIN;
int16_t x1348 = 0;
int16_t x1383 = 230;
int8_t x1460 = INT8_MIN;
int32_t x1571 = -46815328;
volatile int32_t t69 = 949009331;
int8_t x1627 = INT8_MIN;
static volatile uint32_t x1628 = 6U;
uint64_t t70 = UINT64_MAX;
volatile int64_t x1662 = -1LL;
int32_t x1663 = -1;
volatile uint16_t x1729 = 0U;
int16_t x1737 = INT16_MAX;
int8_t x1797 = INT8_MAX;
static volatile uint8_t x1800 = 58U;
static int64_t x1802 = -1LL;
int32_t t79 = 12095;
int64_t x1805 = 1779062LL;
int64_t t80 = -6615371912347382LL;
int8_t x1828 = INT8_MAX;
static uint8_t x1889 = 52U;
uint8_t x1907 = 1U;
uint16_t x1908 = UINT16_MAX;
static uint32_t x1937 = 4186820U;
uint32_t t86 = 442021U;
int64_t x1971 = INT64_MIN;
static int64_t x1978 = 517849578689882LL;
static uint64_t x1980 = 0LLU;
uint8_t x2010 = 1U;
uint16_t x2012 = 15U;
uint64_t x2015 = 3149403632592922LLU;
int8_t x2016 = -1;
volatile uint64_t x2073 = 1304533927611769LLU;
int32_t t94 = -264;
int16_t x2139 = -1257;
int64_t x2140 = INT64_MIN;
uint32_t x2175 = UINT32_MAX;
uint8_t x2184 = 6U;


void f0(void) {
	uint16_t x25 = 7U;
	uint64_t x26 = UINT64_MAX;
	uint8_t x28 = 8U;
	volatile int32_t t0 = 6;

	t0 = (x25<<((x26*x27)&x28));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x58 = 3U;
	int16_t x59 = -198;
	volatile int8_t x60 = 46;
	uint64_t t1 = 34680115664104723LLU;

	t1 = (x57<<((x58*x59)&x60));

	if (t1 != 9287126119079739392LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x69 = 5U;
	static volatile int16_t x70 = -1;
	uint64_t x72 = 34LLU;
	static int32_t t2 = 0;

	t2 = (x69<<((x70*x71)&x72));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x137 = INT8_MAX;
	volatile int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t3 = -30042;

	t3 = (x137<<((x138*x139)&x140));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x141 = INT16_MAX;
	static int8_t x143 = INT8_MAX;
	static uint8_t x144 = 15U;

	t4 = (x141<<((x142*x143)&x144));

	if (t4 != 1073709056) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x161 = 176804348641232LLU;
	volatile uint64_t x162 = UINT64_MAX;
	uint32_t x163 = 358677294U;
	uint8_t x164 = 26U;
	volatile uint64_t t5 = 775LLU;

	t5 = (x161<<((x162*x163)&x164));

	if (t5 != 9454711022788018176LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x177 = 2724U;
	int8_t x178 = -16;
	volatile int8_t x179 = INT8_MIN;
	uint32_t x180 = 0U;
	int32_t t6 = 179270;

	t6 = (x177<<((x178*x179)&x180));

	if (t6 != 2724) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x217 = 12349U;
	uint16_t x218 = 1U;
	int8_t x219 = INT8_MIN;
	volatile int8_t x220 = 0;

	t7 = (x217<<((x218*x219)&x220));

	if (t7 != 12349) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x237 = 187769300578974481LLU;
	volatile uint16_t x239 = UINT16_MAX;
	static uint64_t t8 = 67818855LLU;

	t8 = (x237<<((x238*x239)&x240));

	if (t8 != 187769300578974481LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x245 = 530U;
	int8_t x246 = INT8_MIN;
	uint64_t x247 = 652250LLU;
	static volatile int8_t x248 = 16;
	volatile uint32_t t9 = 1386629391U;

	t9 = (x245<<((x246*x247)&x248));

	if (t9 != 530U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x253 = 266505345;
	int32_t x254 = -1;
	int32_t x255 = -1;
	uint16_t x256 = 1U;

	t10 = (x253<<((x254*x255)&x256));

	if (t10 != 533010690) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x257 = 1683;
	int8_t x260 = INT8_MIN;

	t11 = (x257<<((x258*x259)&x260));

	if (t11 != 1683) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int32_t x262 = -21506619;
	volatile int32_t x263 = -1;
	uint8_t x264 = 30U;
	volatile uint64_t t12 = 191785729842415823LLU;

	t12 = (x261<<((x262*x263)&x264));

	if (t12 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x301 = INT16_MAX;
	int8_t x303 = 0;
	volatile uint64_t x304 = UINT64_MAX;
	int32_t t13 = -35;

	t13 = (x301<<((x302*x303)&x304));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x305 = INT16_MAX;
	int8_t x306 = 2;
	int8_t x307 = 0;
	uint8_t x308 = UINT8_MAX;
	int32_t t14 = 489300;

	t14 = (x305<<((x306*x307)&x308));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x313 = 1;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t15 = -469006;

	t15 = (x313<<((x314*x315)&x316));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x318 = -1;
	int8_t x319 = -1;
	static uint32_t t16 = UINT32_MAX;

	t16 = (x317<<((x318*x319)&x320));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x354 = 0;
	static int32_t x355 = -502;
	int64_t x356 = INT64_MIN;

	t17 = (x353<<((x354*x355)&x356));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x366 = UINT32_MAX;
	int8_t x368 = -1;
	static uint32_t t18 = 26991766U;

	t18 = (x365<<((x366*x367)&x368));

	if (t18 != 22990U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x405 = 9U;
	int16_t x406 = -1;
	int8_t x407 = 0;
	int32_t x408 = -61184847;

	t19 = (x405<<((x406*x407)&x408));

	if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x430 = -7;
	int32_t x431 = -1;
	int64_t x432 = 14728534186372LL;
	static volatile int32_t t20 = -28;

	t20 = (x429<<((x430*x431)&x432));

	if (t20 != 448) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x457 = 3147;
	uint64_t x458 = 37327618392LLU;
	int64_t x460 = INT64_MIN;
	int32_t t21 = -8439398;

	t21 = (x457<<((x458*x459)&x460));

	if (t21 != 3147) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x477 = 10U;
	int32_t x478 = -250114;
	uint16_t x479 = 0U;
	uint64_t x480 = 4801533434249545LLU;
	static int32_t t22 = -1;

	t22 = (x477<<((x478*x479)&x480));

	if (t22 != 10) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x519 = 0;
	volatile int64_t x520 = -3097527924093872LL;

	t23 = (x517<<((x518*x519)&x520));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x541 = 2U;
	uint16_t x543 = 4U;
	volatile int32_t x544 = 72760;
	volatile int32_t t24 = 8338819;

	t24 = (x541<<((x542*x543)&x544));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x565 = 1;
	uint64_t x567 = 52778400428546091LLU;
	int8_t x568 = INT8_MAX;

	t25 = (x565<<((x566*x567)&x568));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x626 = 27LLU;
	uint8_t x627 = 29U;
	static volatile int64_t x628 = INT64_MIN;
	int32_t t26 = 0;

	t26 = (x625<<((x626*x627)&x628));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x689 = 2039887LL;
	volatile uint8_t x690 = UINT8_MAX;
	int16_t x691 = INT16_MAX;
	int8_t x692 = 39;
	int64_t t27 = -132727614513605LL;

	t27 = (x689<<((x690*x691)&x692));

	if (t27 != 4079774LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x693 = 355;
	volatile uint16_t x694 = 0U;
	uint32_t x696 = 1U;
	volatile int32_t t28 = 576180014;

	t28 = (x693<<((x694*x695)&x696));

	if (t28 != 355) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x709 = 2368009924608LL;
	int16_t x710 = -1;
	int8_t x711 = -1;
	uint64_t x712 = 2988661641725587824LLU;

	t29 = (x709<<((x710*x711)&x712));

	if (t29 != 2368009924608LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x741 = UINT16_MAX;
	int64_t x742 = 0LL;
	volatile int32_t x743 = INT32_MAX;
	int32_t x744 = INT32_MIN;
	int32_t t30 = -9330;

	t30 = (x741<<((x742*x743)&x744));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x746 = INT16_MIN;
	uint64_t x747 = 7636LLU;
	uint8_t x748 = 0U;

	t31 = (x745<<((x746*x747)&x748));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x749 = 6526651LLU;
	volatile int8_t x750 = -1;
	int64_t x751 = -381LL;
	uint8_t x752 = 1U;

	t32 = (x749<<((x750*x751)&x752));

	if (t32 != 13053302LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x754 = 47284522503LLU;
	int8_t x756 = 1;
	volatile int32_t t33 = 5989654;

	t33 = (x753<<((x754*x755)&x756));

	if (t33 != 14) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x785 = UINT8_MAX;
	int8_t x786 = -1;
	static int16_t x787 = -1;
	static int32_t x788 = INT32_MIN;
	int32_t t34 = -739362;

	t34 = (x785<<((x786*x787)&x788));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x821 = 452648176476485LLU;
	static int8_t x822 = INT8_MAX;
	static int16_t x823 = -1;
	volatile uint8_t x824 = 24U;
	static uint64_t t35 = 1312176603LLU;

	t35 = (x821<<((x822*x823)&x824));

	if (t35 != 452648176476485LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x829 = 845466567;
	int8_t x830 = INT8_MIN;
	int8_t x831 = INT8_MIN;
	volatile uint64_t x832 = 15621LLU;

	t36 = (x829<<((x830*x831)&x832));

	if (t36 != 845466567) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x837 = 509U;
	static volatile int8_t x838 = INT8_MAX;
	uint8_t x839 = 0U;
	volatile uint32_t t37 = 54623600U;

	t37 = (x837<<((x838*x839)&x840));

	if (t37 != 509U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x842 = INT16_MIN;
	static volatile int32_t t38 = INT32_MAX;

	t38 = (x841<<((x842*x843)&x844));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x885 = INT8_MAX;
	int32_t x886 = 0;
	int32_t x887 = 0;
	int32_t x888 = INT32_MIN;

	t39 = (x885<<((x886*x887)&x888));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x921 = 5918U;
	int32_t x922 = INT32_MIN;
	uint16_t x923 = 1U;
	int8_t x924 = INT8_MAX;
	static int32_t t40 = -1758327;

	t40 = (x921<<((x922*x923)&x924));

	if (t40 != 5918) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x933 = INT16_MAX;
	uint64_t x934 = UINT64_MAX;
	volatile uint8_t x936 = 17U;

	t41 = (x933<<((x934*x935)&x936));

	if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x937 = INT8_MAX;
	int64_t x938 = -1LL;
	static uint64_t x939 = 12383174LLU;
	uint16_t x940 = 7U;
	static volatile int32_t t42 = 36;

	t42 = (x937<<((x938*x939)&x940));

	if (t42 != 508) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x941 = 1184960545493911LLU;
	uint16_t x942 = 5984U;
	static uint32_t x943 = UINT32_MAX;
	static uint32_t x944 = 97U;
	static volatile uint64_t t43 = 151672631053084LLU;

	t43 = (x941<<((x942*x943)&x944));

	if (t43 != 2333730571169038336LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x949 = 25528;
	volatile int8_t x951 = -13;
	int8_t x952 = INT8_MIN;
	volatile int32_t t44 = -25007;

	t44 = (x949<<((x950*x951)&x952));

	if (t44 != 25528) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1001 = 30863U;
	static int64_t x1002 = -1LL;
	uint32_t x1004 = 28830424U;
	static int32_t t45 = 796875344;

	t45 = (x1001<<((x1002*x1003)&x1004));

	if (t45 != 30863) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1038 = 227;
	volatile uint16_t x1039 = 5U;
	static int32_t t46 = INT32_MAX;

	t46 = (x1037<<((x1038*x1039)&x1040));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1049 = 67U;
	uint64_t x1050 = 685694920358635284LLU;
	int64_t x1051 = INT64_MIN;
	volatile uint16_t x1052 = 22U;

	t47 = (x1049<<((x1050*x1051)&x1052));

	if (t47 != 67) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1057 = 74LL;
	volatile int8_t x1058 = -1;
	static int16_t x1059 = 594;
	int8_t x1060 = 4;
	static volatile int64_t t48 = -850220476725889071LL;

	t48 = (x1057<<((x1058*x1059)&x1060));

	if (t48 != 1184LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1105 = 51U;
	int16_t x1107 = INT16_MIN;
	uint16_t x1108 = 4U;
	static volatile int32_t t49 = -5;

	t49 = (x1105<<((x1106*x1107)&x1108));

	if (t49 != 51) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1109 = 4U;
	static int8_t x1110 = -3;
	static int16_t x1111 = 1022;
	uint8_t x1112 = 59U;
	volatile int32_t t50 = 6478229;

	t50 = (x1109<<((x1110*x1111)&x1112));

	if (t50 != 16) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x1125 = 5U;
	static uint64_t x1126 = UINT64_MAX;
	static uint64_t x1127 = UINT64_MAX;
	volatile int64_t x1128 = -1LL;
	uint32_t t51 = 6406U;

	t51 = (x1125<<((x1126*x1127)&x1128));

	if (t51 != 10U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1139 = UINT8_MAX;
	uint8_t x1140 = 0U;

	t52 = (x1137<<((x1138*x1139)&x1140));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x1177 = 3U;
	volatile int16_t x1178 = -1;
	int8_t x1179 = -1;
	int64_t x1180 = INT64_MAX;

	t53 = (x1177<<((x1178*x1179)&x1180));

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x1189 = INT16_MAX;
	uint8_t x1190 = 2U;
	int16_t x1191 = 0;
	int32_t t54 = -364;

	t54 = (x1189<<((x1190*x1191)&x1192));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1225 = INT8_MAX;
	int32_t x1226 = 66912554;
	uint16_t x1227 = 4U;
	int64_t x1228 = INT64_MIN;
	volatile int32_t t55 = -7372133;

	t55 = (x1225<<((x1226*x1227)&x1228));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1319 = 490;
	volatile int32_t t56 = 843315454;

	t56 = (x1317<<((x1318*x1319)&x1320));

	if (t56 != 96) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1345 = 133;
	volatile int8_t x1346 = 1;
	uint64_t x1347 = 111804450LLU;
	static volatile int32_t t57 = 822;

	t57 = (x1345<<((x1346*x1347)&x1348));

	if (t57 != 133) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1381 = UINT64_MAX;
	uint32_t x1382 = 983843154U;
	uint8_t x1384 = 49U;
	uint64_t t58 = 6944753559886254LLU;

	t58 = (x1381<<((x1382*x1383)&x1384));

	if (t58 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1413 = 516483863041480726LL;
	int64_t x1414 = INT64_MIN;
	uint64_t x1415 = UINT64_MAX;
	int32_t x1416 = 1048715;
	volatile int64_t t59 = -4581456915529628LL;

	t59 = (x1413<<((x1414*x1415)&x1416));

	if (t59 != 516483863041480726LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1417 = UINT8_MAX;
	int32_t x1418 = INT32_MAX;
	static int8_t x1419 = -1;
	uint8_t x1420 = 1U;
	static volatile int32_t t60 = -24006;

	t60 = (x1417<<((x1418*x1419)&x1420));

	if (t60 != 510) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1429 = INT8_MAX;
	int8_t x1430 = INT8_MIN;
	int64_t x1431 = 14525LL;
	uint8_t x1432 = 0U;
	int32_t t61 = 840;

	t61 = (x1429<<((x1430*x1431)&x1432));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1457 = 0U;
	int16_t x1458 = 0;
	volatile int16_t x1459 = -1;
	int32_t t62 = -3467272;

	t62 = (x1457<<((x1458*x1459)&x1460));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1473 = 81U;
	static int32_t x1474 = INT32_MIN;
	static uint64_t x1475 = 12040620609021882LLU;
	volatile int32_t x1476 = INT32_MAX;
	volatile int32_t t63 = -9397445;

	t63 = (x1473<<((x1474*x1475)&x1476));

	if (t63 != 81) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1489 = UINT8_MAX;
	int16_t x1490 = -15;
	uint32_t x1491 = UINT32_MAX;
	int8_t x1492 = INT8_MIN;
	volatile int32_t t64 = 578;

	t64 = (x1489<<((x1490*x1491)&x1492));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1497 = UINT16_MAX;
	int32_t x1498 = -1347126;
	int16_t x1499 = -32;
	int32_t x1500 = 1;
	int32_t t65 = -79332;

	t65 = (x1497<<((x1498*x1499)&x1500));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1549 = 888109;
	uint32_t x1550 = UINT32_MAX;
	int64_t x1551 = -1LL;
	uint8_t x1552 = UINT8_MAX;
	volatile int32_t t66 = 358676384;

	t66 = (x1549<<((x1550*x1551)&x1552));

	if (t66 != 1776218) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x1569 = INT8_MAX;
	uint32_t x1570 = 229640U;
	volatile uint8_t x1572 = UINT8_MAX;
	int32_t t67 = -10;

	t67 = (x1569<<((x1570*x1571)&x1572));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1573 = INT8_MAX;
	uint32_t x1574 = 3899344U;
	uint8_t x1575 = 82U;
	static uint8_t x1576 = 23U;
	volatile int32_t t68 = 0;

	t68 = (x1573<<((x1574*x1575)&x1576));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1621 = UINT16_MAX;
	int64_t x1622 = -1LL;
	int64_t x1623 = -1LL;
	static volatile uint16_t x1624 = 2403U;

	t69 = (x1621<<((x1622*x1623)&x1624));

	if (t69 != 131070) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x1625 = UINT64_MAX;
	static uint64_t x1626 = UINT64_MAX;

	t70 = (x1625<<((x1626*x1627)&x1628));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1649 = UINT32_MAX;
	int64_t x1650 = -1432251467502LL;
	int16_t x1651 = INT16_MIN;
	int64_t x1652 = 9LL;
	static volatile uint32_t t71 = UINT32_MAX;

	t71 = (x1649<<((x1650*x1651)&x1652));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1661 = INT16_MAX;
	int64_t x1664 = INT64_MIN;
	static volatile int32_t t72 = -706;

	t72 = (x1661<<((x1662*x1663)&x1664));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x1673 = 0U;
	uint64_t x1674 = 521848060LLU;
	volatile uint16_t x1675 = 0U;
	int32_t x1676 = INT32_MIN;
	static volatile int32_t t73 = -414;

	t73 = (x1673<<((x1674*x1675)&x1676));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x1677 = 907183U;
	uint8_t x1678 = 3U;
	int16_t x1679 = INT16_MIN;
	int8_t x1680 = INT8_MAX;
	uint32_t t74 = 339U;

	t74 = (x1677<<((x1678*x1679)&x1680));

	if (t74 != 907183U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x1730 = -1;
	int32_t x1731 = -1;
	static int32_t x1732 = 2717472;
	static int32_t t75 = 1;

	t75 = (x1729<<((x1730*x1731)&x1732));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1738 = 1LL;
	uint8_t x1739 = UINT8_MAX;
	volatile int64_t x1740 = INT64_MIN;
	int32_t t76 = 3;

	t76 = (x1737<<((x1738*x1739)&x1740));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1769 = 5075U;
	volatile int8_t x1770 = 0;
	volatile uint16_t x1771 = 607U;
	volatile uint64_t x1772 = 2516502240955104888LLU;
	int32_t t77 = 0;

	t77 = (x1769<<((x1770*x1771)&x1772));

	if (t77 != 5075) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x1798 = 5;
	int8_t x1799 = 0;
	volatile int32_t t78 = 252790397;

	t78 = (x1797<<((x1798*x1799)&x1800));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1801 = UINT8_MAX;
	volatile int64_t x1803 = -1126222110957102LL;
	int16_t x1804 = 0;

	t79 = (x1801<<((x1802*x1803)&x1804));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1806 = -14990542;
	uint8_t x1807 = 4U;
	static int8_t x1808 = 3;

	t80 = (x1805<<((x1806*x1807)&x1808));

	if (t80 != 1779062LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1821 = UINT16_MAX;
	static int8_t x1822 = INT8_MIN;
	uint32_t x1823 = 6U;
	uint32_t x1824 = 166U;
	int32_t t81 = 0;

	t81 = (x1821<<((x1822*x1823)&x1824));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x1825 = 13915504919LLU;
	uint32_t x1826 = 140U;
	int16_t x1827 = 837;
	uint64_t t82 = 62LLU;

	t82 = (x1825<<((x1826*x1827)&x1828));

	if (t82 != 8070450532247928832LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1890 = INT8_MIN;
	volatile int32_t x1891 = -2;
	static volatile uint64_t x1892 = 5LLU;
	volatile int32_t t83 = 1;

	t83 = (x1889<<((x1890*x1891)&x1892));

	if (t83 != 52) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x1905 = 3;
	int64_t x1906 = INT64_MIN;
	int32_t t84 = -33;

	t84 = (x1905<<((x1906*x1907)&x1908));

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1938 = -61293475875714LL;
	volatile uint64_t x1939 = UINT64_MAX;
	volatile int64_t x1940 = INT64_MIN;
	volatile uint32_t t85 = 1530867877U;

	t85 = (x1937<<((x1938*x1939)&x1940));

	if (t85 != 4186820U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1941 = 8U;
	uint32_t x1942 = 30094U;
	int8_t x1943 = INT8_MIN;
	int32_t x1944 = 1;

	t86 = (x1941<<((x1942*x1943)&x1944));

	if (t86 != 8U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1969 = 12;
	static uint64_t x1970 = UINT64_MAX;
	uint64_t x1972 = 201256716LLU;
	int32_t t87 = 109253138;

	t87 = (x1969<<((x1970*x1971)&x1972));

	if (t87 != 12) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1977 = INT64_MAX;
	uint8_t x1979 = UINT8_MAX;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x1977<<((x1978*x1979)&x1980));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1981 = 0;
	uint32_t x1982 = 56932U;
	int32_t x1983 = INT32_MIN;
	int64_t x1984 = -19614288586183746LL;
	volatile int32_t t89 = -6080;

	t89 = (x1981<<((x1982*x1983)&x1984));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x2009 = 1U;
	volatile uint32_t x2011 = 373U;
	int32_t t90 = 1;

	t90 = (x2009<<((x2010*x2011)&x2012));

	if (t90 != 32) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2013 = INT16_MAX;
	volatile int8_t x2014 = 0;
	int32_t t91 = -5030899;

	t91 = (x2013<<((x2014*x2015)&x2016));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2069 = 15U;
	int64_t x2070 = INT64_MIN;
	uint64_t x2071 = 6123719237656LLU;
	int64_t x2072 = INT64_MIN;
	static volatile int32_t t92 = 2;

	t92 = (x2069<<((x2070*x2071)&x2072));

	if (t92 != 15) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2074 = INT8_MIN;
	uint32_t x2075 = 1001024U;
	uint8_t x2076 = 26U;
	volatile uint64_t t93 = 33653010655LLU;

	t93 = (x2073<<((x2074*x2075)&x2076));

	if (t93 != 1304533927611769LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2093 = 0;
	int32_t x2094 = -779;
	int32_t x2095 = -18758;
	volatile uint16_t x2096 = 313U;

	t94 = (x2093<<((x2094*x2095)&x2096));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x2105 = 1U;
	volatile uint32_t x2106 = 4441344U;
	int16_t x2107 = 8;
	volatile int32_t x2108 = INT32_MIN;
	int32_t t95 = 3090021;

	t95 = (x2105<<((x2106*x2107)&x2108));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2125 = 0U;
	uint64_t x2126 = 1LLU;
	uint8_t x2127 = 28U;
	uint8_t x2128 = UINT8_MAX;
	static volatile int32_t t96 = -1;

	t96 = (x2125<<((x2126*x2127)&x2128));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2137 = 100U;
	volatile uint32_t x2138 = 16U;
	int32_t t97 = -12238090;

	t97 = (x2137<<((x2138*x2139)&x2140));

	if (t97 != 100) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x2173 = INT32_MAX;
	static int32_t x2174 = INT32_MIN;
	static volatile uint64_t x2176 = 60133553312LLU;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x2173<<((x2174*x2175)&x2176));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x2181 = UINT8_MAX;
	volatile uint8_t x2182 = UINT8_MAX;
	uint8_t x2183 = UINT8_MAX;
	volatile int32_t t99 = -7651;

	t99 = (x2181<<((x2182*x2183)&x2184));

	if (t99 != 255) { NG(); } else { ; }
	
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

