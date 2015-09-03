#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x15 = INT32_MIN;
int32_t x29 = -1;
static volatile int64_t x31 = INT64_MAX;
volatile int8_t x34 = INT8_MIN;
int16_t x36 = 5;
int32_t x163 = INT32_MIN;
volatile int32_t x185 = INT32_MAX;
volatile int16_t x205 = 100;
int64_t x207 = INT64_MAX;
uint8_t x234 = 31U;
int32_t x257 = INT32_MIN;
volatile int32_t x258 = 1;
uint32_t x306 = 14368U;
uint16_t x316 = 2U;
uint32_t x319 = UINT32_MAX;
uint64_t x335 = 12205325871646LLU;
uint8_t x344 = 22U;
int8_t x346 = -1;
uint16_t x348 = 2U;
int64_t x430 = INT64_MIN;
int16_t x433 = -14;
int64_t x435 = INT64_MIN;
volatile int32_t t19 = -922770981;
volatile int64_t x454 = -1LL;
uint16_t x473 = 0U;
volatile int32_t t21 = -38277211;
int8_t x518 = INT8_MIN;
uint16_t x519 = 19U;
volatile int32_t t22 = 69903;
volatile int32_t x595 = -66781;
volatile int8_t x605 = 1;
volatile int16_t x606 = -1;
int64_t t30 = 51845857320LL;
uint16_t x713 = 155U;
uint32_t x715 = 121U;
volatile uint32_t x742 = UINT32_MAX;
uint16_t x743 = UINT16_MAX;
int32_t x762 = 0;
uint64_t t34 = 4LLU;
int8_t x810 = -20;
uint32_t x833 = UINT32_MAX;
volatile uint32_t x834 = UINT32_MAX;
volatile int16_t x835 = 363;
uint16_t x866 = 812U;
volatile uint32_t x867 = UINT32_MAX;
int64_t x875 = -3585978LL;
uint16_t x876 = 10U;
volatile int32_t t41 = 3497345;
int8_t x904 = 0;
int32_t t47 = 2885;
int64_t x1113 = INT64_MIN;
uint8_t x1116 = 4U;
int32_t x1122 = INT32_MIN;
int32_t t50 = 21960;
int64_t x1162 = INT64_MIN;
int32_t t54 = 0;
static int32_t x1315 = INT32_MAX;
volatile int32_t t55 = -334264;
uint8_t x1372 = 3U;
int32_t t56 = 0;
uint16_t x1373 = UINT16_MAX;
uint8_t x1376 = 1U;
static int8_t x1402 = INT8_MIN;
uint8_t x1403 = 5U;
int16_t x1404 = 3;
int64_t x1439 = -2690534788LL;
volatile uint64_t x1440 = 16LLU;
static uint8_t x1472 = 24U;
volatile int16_t x1549 = INT16_MAX;
int16_t x1551 = INT16_MIN;
volatile uint16_t x1641 = 0U;
int32_t x1643 = -1;
int32_t t62 = 918085870;
static int32_t t63 = -2548;
volatile int64_t x1781 = 1060494745LL;
volatile int8_t x1828 = 0;
int32_t x1955 = INT32_MIN;
volatile int8_t x1958 = 35;
int32_t x1974 = INT32_MIN;
int32_t x2038 = INT32_MIN;
static volatile int32_t x2126 = -6;
int32_t t75 = 1208255;
int8_t x2234 = -1;
int32_t x2259 = -7;
uint32_t x2318 = 5785678U;
int8_t x2332 = 0;
int8_t x2345 = INT8_MIN;
int16_t x2353 = -2746;
static int16_t x2475 = INT16_MAX;
int32_t t85 = 734039;
volatile int8_t x2511 = -1;
int64_t x2694 = 31328917707747819LL;
volatile int32_t t89 = INT32_MIN;
static volatile uint8_t x2832 = 2U;
static volatile int32_t t90 = 120;
uint64_t t92 = 42976188397LLU;
uint8_t x2848 = 0U;
int8_t x2886 = INT8_MIN;
int16_t x2887 = INT16_MIN;
int64_t x2888 = 1LL;
static int64_t x2990 = INT64_MIN;
int8_t x2992 = 3;
int64_t t97 = -11LL;
volatile int64_t x3010 = INT64_MAX;
int64_t t98 = -836005LL;
static uint64_t x3038 = UINT64_MAX;


void f0(void) {
	int8_t x13 = INT8_MIN;
	static int16_t x14 = -1;
	int16_t x16 = 9;
	static volatile int32_t t0 = 1751424;

	t0 = (x13|((x14<=x15)>>x16));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x30 = INT32_MAX;
	uint8_t x32 = 3U;
	int32_t t1 = 24503658;

	t1 = (x29|((x30<=x31)>>x32));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x33 = 7651U;
	int8_t x35 = INT8_MIN;
	int32_t t2 = 432;

	t2 = (x33|((x34<=x35)>>x36));

	if (t2 != 7651) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x161 = INT32_MIN;
	uint32_t x162 = 53U;
	uint8_t x164 = 0U;
	int32_t t3 = -3836862;

	t3 = (x161|((x162<=x163)>>x164));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x186 = INT8_MIN;
	volatile int8_t x187 = INT8_MIN;
	int32_t x188 = 6;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x185|((x186<=x187)>>x188));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x206 = 1836U;
	static uint32_t x208 = 5U;
	int32_t t5 = 283357360;

	t5 = (x205|((x206<=x207)>>x208));

	if (t5 != 100) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x233 = INT32_MIN;
	static uint8_t x235 = 6U;
	volatile int16_t x236 = 3;
	int32_t t6 = INT32_MIN;

	t6 = (x233|((x234<=x235)>>x236));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x259 = INT64_MIN;
	uint8_t x260 = 19U;
	static volatile int32_t t7 = INT32_MIN;

	t7 = (x257|((x258<=x259)>>x260));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x269 = UINT64_MAX;
	int8_t x270 = INT8_MIN;
	static int32_t x271 = 16123763;
	static volatile uint8_t x272 = 26U;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x269|((x270<=x271)>>x272));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x293 = 33532441181LLU;
	int8_t x294 = 0;
	int32_t x295 = 1;
	uint8_t x296 = 1U;
	uint64_t t9 = 6177243511297572LLU;

	t9 = (x293|((x294<=x295)>>x296));

	if (t9 != 33532441181LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x305 = -290;
	static int64_t x307 = INT64_MAX;
	int8_t x308 = 0;
	int32_t t10 = 209;

	t10 = (x305|((x306<=x307)>>x308));

	if (t10 != -289) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x313 = INT16_MAX;
	uint16_t x314 = 6959U;
	volatile uint64_t x315 = UINT64_MAX;
	volatile int32_t t11 = -402112;

	t11 = (x313|((x314<=x315)>>x316));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x317 = INT32_MIN;
	uint64_t x318 = 15019557LLU;
	uint16_t x320 = 1U;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x317|((x318<=x319)>>x320));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x333 = -44;
	static volatile int8_t x334 = INT8_MAX;
	int8_t x336 = 0;
	int32_t t13 = -15122842;

	t13 = (x333|((x334<=x335)>>x336));

	if (t13 != -43) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x341 = INT8_MAX;
	volatile int16_t x342 = -2;
	volatile int64_t x343 = INT64_MIN;
	static volatile int32_t t14 = -15689888;

	t14 = (x341|((x342<=x343)>>x344));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x345 = 62810486;
	static int64_t x347 = INT64_MAX;
	volatile int32_t t15 = 20847;

	t15 = (x345|((x346<=x347)>>x348));

	if (t15 != 62810486) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x349 = 15667U;
	int8_t x350 = 4;
	uint64_t x351 = 69737557LLU;
	uint8_t x352 = 0U;
	volatile int32_t t16 = -5;

	t16 = (x349|((x350<=x351)>>x352));

	if (t16 != 15667) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x369 = 1192805464LLU;
	int16_t x370 = -1;
	static volatile int8_t x371 = INT8_MIN;
	static int16_t x372 = 1;
	volatile uint64_t t17 = 3853LLU;

	t17 = (x369|((x370<=x371)>>x372));

	if (t17 != 1192805464LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x429 = INT16_MAX;
	volatile uint8_t x431 = 21U;
	int8_t x432 = 19;
	static int32_t t18 = -35241;

	t18 = (x429|((x430<=x431)>>x432));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x434 = INT8_MIN;
	int32_t x436 = 1;

	t19 = (x433|((x434<=x435)>>x436));

	if (t19 != -14) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x453 = INT32_MIN;
	int32_t x455 = INT32_MAX;
	uint64_t x456 = 15LLU;
	int32_t t20 = INT32_MIN;

	t20 = (x453|((x454<=x455)>>x456));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x474 = INT32_MAX;
	static int16_t x475 = -2;
	uint8_t x476 = 13U;

	t21 = (x473|((x474<=x475)>>x476));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x517 = UINT8_MAX;
	uint32_t x520 = 5U;

	t22 = (x517|((x518<=x519)>>x520));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x577 = UINT64_MAX;
	uint8_t x578 = 3U;
	uint64_t x579 = 59187LLU;
	int8_t x580 = 0;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x577|((x578<=x579)>>x580));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x585 = INT64_MIN;
	int32_t x586 = INT32_MIN;
	int64_t x587 = INT64_MAX;
	uint8_t x588 = 20U;
	static int64_t t24 = INT64_MIN;

	t24 = (x585|((x586<=x587)>>x588));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x593 = 16;
	uint8_t x594 = 31U;
	uint16_t x596 = 3U;
	static int32_t t25 = -139580325;

	t25 = (x593|((x594<=x595)>>x596));

	if (t25 != 16) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x607 = 11U;
	uint8_t x608 = 0U;
	static int32_t t26 = -523;

	t26 = (x605|((x606<=x607)>>x608));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x629 = -70020;
	int16_t x630 = INT16_MIN;
	int64_t x631 = -1LL;
	int8_t x632 = 3;
	int32_t t27 = 3529;

	t27 = (x629|((x630<=x631)>>x632));

	if (t27 != -70020) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x641 = INT16_MAX;
	int8_t x642 = INT8_MIN;
	int32_t x643 = -1;
	uint64_t x644 = 0LLU;
	int32_t t28 = -26;

	t28 = (x641|((x642<=x643)>>x644));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x693 = -1;
	volatile int32_t x694 = INT32_MIN;
	int16_t x695 = -1222;
	static int16_t x696 = 0;
	int32_t t29 = -1857;

	t29 = (x693|((x694<=x695)>>x696));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x697 = 3411583LL;
	volatile int8_t x698 = -7;
	int16_t x699 = INT16_MIN;
	uint8_t x700 = 4U;

	t30 = (x697|((x698<=x699)>>x700));

	if (t30 != 3411583LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x714 = UINT8_MAX;
	uint32_t x716 = 11U;
	static int32_t t31 = 83834;

	t31 = (x713|((x714<=x715)>>x716));

	if (t31 != 155) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x741 = UINT16_MAX;
	uint16_t x744 = 15U;
	volatile int32_t t32 = -17487985;

	t32 = (x741|((x742<=x743)>>x744));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x761 = 3U;
	int16_t x763 = INT16_MAX;
	int8_t x764 = 25;
	int32_t t33 = 9;

	t33 = (x761|((x762<=x763)>>x764));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x773 = 17345357278LLU;
	int8_t x774 = INT8_MAX;
	int64_t x775 = -623175453LL;
	uint64_t x776 = 30LLU;

	t34 = (x773|((x774<=x775)>>x776));

	if (t34 != 17345357278LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x789 = INT32_MIN;
	static int16_t x790 = INT16_MIN;
	static int16_t x791 = INT16_MIN;
	static uint32_t x792 = 9U;
	int32_t t35 = INT32_MIN;

	t35 = (x789|((x790<=x791)>>x792));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x793 = -1;
	static int8_t x794 = INT8_MIN;
	int32_t x795 = INT32_MIN;
	int16_t x796 = 13;
	static int32_t t36 = 6;

	t36 = (x793|((x794<=x795)>>x796));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x805 = 36U;
	int32_t x806 = INT32_MIN;
	uint16_t x807 = UINT16_MAX;
	static uint8_t x808 = 4U;
	int32_t t37 = 89345065;

	t37 = (x805|((x806<=x807)>>x808));

	if (t37 != 36) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x809 = INT16_MIN;
	volatile int8_t x811 = -1;
	static volatile uint8_t x812 = 6U;
	int32_t t38 = 62286;

	t38 = (x809|((x810<=x811)>>x812));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x836 = 21LLU;
	uint32_t t39 = UINT32_MAX;

	t39 = (x833|((x834<=x835)>>x836));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x865 = 0LLU;
	uint16_t x868 = 1U;
	volatile uint64_t t40 = 103224974218061LLU;

	t40 = (x865|((x866<=x867)>>x868));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x873 = 24333U;
	int8_t x874 = INT8_MIN;

	t41 = (x873|((x874<=x875)>>x876));

	if (t41 != 24333) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x885 = -1;
	int32_t x886 = INT32_MAX;
	int8_t x887 = INT8_MIN;
	uint8_t x888 = 9U;
	volatile int32_t t42 = 82299;

	t42 = (x885|((x886<=x887)>>x888));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x901 = 5365452LLU;
	static int16_t x902 = -1;
	int64_t x903 = INT64_MIN;
	volatile uint64_t t43 = 50815738LLU;

	t43 = (x901|((x902<=x903)>>x904));

	if (t43 != 5365452LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x941 = -1LL;
	uint8_t x942 = 67U;
	uint16_t x943 = 8680U;
	static int64_t x944 = 0LL;
	int64_t t44 = 1605865133272289698LL;

	t44 = (x941|((x942<=x943)>>x944));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x969 = INT32_MAX;
	int16_t x970 = INT16_MIN;
	static int64_t x971 = -1LL;
	static int16_t x972 = 3;
	int32_t t45 = INT32_MAX;

	t45 = (x969|((x970<=x971)>>x972));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1001 = UINT64_MAX;
	volatile uint8_t x1002 = UINT8_MAX;
	static volatile int64_t x1003 = INT64_MIN;
	static uint16_t x1004 = 2U;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x1001|((x1002<=x1003)>>x1004));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1065 = INT16_MIN;
	int8_t x1066 = -1;
	volatile int32_t x1067 = -36712;
	static uint8_t x1068 = 0U;

	t47 = (x1065|((x1066<=x1067)>>x1068));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1114 = UINT64_MAX;
	int64_t x1115 = INT64_MAX;
	static volatile int64_t t48 = INT64_MIN;

	t48 = (x1113|((x1114<=x1115)>>x1116));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x1121 = INT16_MAX;
	static int16_t x1123 = INT16_MIN;
	uint64_t x1124 = 0LLU;
	volatile int32_t t49 = 1062;

	t49 = (x1121|((x1122<=x1123)>>x1124));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1137 = 47U;
	int16_t x1138 = -3234;
	int16_t x1139 = INT16_MIN;
	int64_t x1140 = 1LL;

	t50 = (x1137|((x1138<=x1139)>>x1140));

	if (t50 != 47) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1145 = 7644U;
	uint16_t x1146 = 1552U;
	int64_t x1147 = -1LL;
	static int8_t x1148 = 13;
	volatile uint32_t t51 = 6U;

	t51 = (x1145|((x1146<=x1147)>>x1148));

	if (t51 != 7644U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1161 = 201LLU;
	int16_t x1163 = -2;
	volatile uint8_t x1164 = 30U;
	volatile uint64_t t52 = 65413185399045LLU;

	t52 = (x1161|((x1162<=x1163)>>x1164));

	if (t52 != 201LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1181 = 7;
	int16_t x1182 = 1;
	int32_t x1183 = -1706856;
	volatile uint16_t x1184 = 3U;
	int32_t t53 = -127;

	t53 = (x1181|((x1182<=x1183)>>x1184));

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x1241 = 5485;
	int64_t x1242 = INT64_MIN;
	int64_t x1243 = INT64_MIN;
	int32_t x1244 = 8;

	t54 = (x1241|((x1242<=x1243)>>x1244));

	if (t54 != 5485) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1313 = 2U;
	volatile uint32_t x1314 = 12962778U;
	volatile uint16_t x1316 = 12U;

	t55 = (x1313|((x1314<=x1315)>>x1316));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1369 = 5U;
	int32_t x1370 = 7618;
	uint16_t x1371 = 212U;

	t56 = (x1369|((x1370<=x1371)>>x1372));

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x1374 = INT64_MIN;
	int64_t x1375 = INT64_MIN;
	int32_t t57 = -7998;

	t57 = (x1373|((x1374<=x1375)>>x1376));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1401 = 15U;
	static volatile int32_t t58 = -3000;

	t58 = (x1401|((x1402<=x1403)>>x1404));

	if (t58 != 15) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x1437 = 0U;
	static volatile int32_t x1438 = INT32_MIN;
	volatile int32_t t59 = -19;

	t59 = (x1437|((x1438<=x1439)>>x1440));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x1469 = 31U;
	static int8_t x1470 = INT8_MIN;
	uint8_t x1471 = UINT8_MAX;
	volatile int32_t t60 = 382353;

	t60 = (x1469|((x1470<=x1471)>>x1472));

	if (t60 != 31) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x1550 = -1LL;
	int64_t x1552 = 1LL;
	static volatile int32_t t61 = -138;

	t61 = (x1549|((x1550<=x1551)>>x1552));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1642 = UINT16_MAX;
	int16_t x1644 = 0;

	t62 = (x1641|((x1642<=x1643)>>x1644));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1681 = INT16_MAX;
	int64_t x1682 = INT64_MIN;
	int32_t x1683 = 5;
	volatile uint64_t x1684 = 3LLU;

	t63 = (x1681|((x1682<=x1683)>>x1684));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1782 = 2U;
	volatile int64_t x1783 = 409749LL;
	static uint8_t x1784 = 14U;
	int64_t t64 = 7303LL;

	t64 = (x1781|((x1782<=x1783)>>x1784));

	if (t64 != 1060494745LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1801 = 5;
	static int8_t x1802 = INT8_MIN;
	int16_t x1803 = -21;
	uint8_t x1804 = 24U;
	static int32_t t65 = 0;

	t65 = (x1801|((x1802<=x1803)>>x1804));

	if (t65 != 5) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x1825 = INT32_MAX;
	static int8_t x1826 = 0;
	volatile int32_t x1827 = INT32_MIN;
	int32_t t66 = INT32_MAX;

	t66 = (x1825|((x1826<=x1827)>>x1828));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1833 = -1;
	int64_t x1834 = -591882951987102LL;
	volatile int8_t x1835 = INT8_MIN;
	static uint16_t x1836 = 4U;
	int32_t t67 = 157;

	t67 = (x1833|((x1834<=x1835)>>x1836));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1857 = 3U;
	static int16_t x1858 = INT16_MIN;
	static int64_t x1859 = INT64_MAX;
	int8_t x1860 = 0;
	int32_t t68 = -81;

	t68 = (x1857|((x1858<=x1859)>>x1860));

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1953 = 118548U;
	volatile uint64_t x1954 = 1332371LLU;
	uint16_t x1956 = 1U;
	volatile uint32_t t69 = 41U;

	t69 = (x1953|((x1954<=x1955)>>x1956));

	if (t69 != 118548U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1957 = INT8_MIN;
	volatile uint32_t x1959 = 15U;
	uint8_t x1960 = 4U;
	int32_t t70 = 1979;

	t70 = (x1957|((x1958<=x1959)>>x1960));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1973 = UINT64_MAX;
	int32_t x1975 = INT32_MAX;
	uint8_t x1976 = 1U;
	uint64_t t71 = UINT64_MAX;

	t71 = (x1973|((x1974<=x1975)>>x1976));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2013 = 30U;
	uint8_t x2014 = UINT8_MAX;
	int64_t x2015 = 187666584LL;
	uint16_t x2016 = 3U;
	static int32_t t72 = 178040;

	t72 = (x2013|((x2014<=x2015)>>x2016));

	if (t72 != 30) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2037 = INT16_MIN;
	int32_t x2039 = -1;
	uint16_t x2040 = 21U;
	int32_t t73 = -33;

	t73 = (x2037|((x2038<=x2039)>>x2040));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2125 = 329150527;
	volatile int64_t x2127 = 85LL;
	volatile int16_t x2128 = 1;
	volatile int32_t t74 = 9;

	t74 = (x2125|((x2126<=x2127)>>x2128));

	if (t74 != 329150527) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2181 = INT8_MIN;
	int32_t x2182 = INT32_MIN;
	volatile uint8_t x2183 = 8U;
	volatile uint16_t x2184 = 3U;

	t75 = (x2181|((x2182<=x2183)>>x2184));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2233 = UINT8_MAX;
	static volatile uint64_t x2235 = UINT64_MAX;
	uint8_t x2236 = 19U;
	static int32_t t76 = 58465;

	t76 = (x2233|((x2234<=x2235)>>x2236));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x2257 = 27U;
	int64_t x2258 = -1438908LL;
	uint16_t x2260 = 0U;
	volatile int32_t t77 = -152;

	t77 = (x2257|((x2258<=x2259)>>x2260));

	if (t77 != 27) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2317 = 5;
	int16_t x2319 = -1;
	int16_t x2320 = 4;
	volatile int32_t t78 = 44;

	t78 = (x2317|((x2318<=x2319)>>x2320));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x2329 = INT32_MIN;
	int8_t x2330 = -1;
	uint64_t x2331 = UINT64_MAX;
	int32_t t79 = -1;

	t79 = (x2329|((x2330<=x2331)>>x2332));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2346 = 28154097;
	volatile int8_t x2347 = INT8_MAX;
	static int64_t x2348 = 31LL;
	volatile int32_t t80 = 4005;

	t80 = (x2345|((x2346<=x2347)>>x2348));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2354 = -1;
	int16_t x2355 = INT16_MIN;
	volatile uint8_t x2356 = 4U;
	int32_t t81 = -1017;

	t81 = (x2353|((x2354<=x2355)>>x2356));

	if (t81 != -2746) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2373 = -452;
	uint32_t x2374 = 355U;
	int32_t x2375 = -1;
	int8_t x2376 = 1;
	int32_t t82 = -130962104;

	t82 = (x2373|((x2374<=x2375)>>x2376));

	if (t82 != -452) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2397 = INT64_MIN;
	static uint32_t x2398 = UINT32_MAX;
	volatile int8_t x2399 = 3;
	int64_t x2400 = 4LL;
	static int64_t t83 = INT64_MIN;

	t83 = (x2397|((x2398<=x2399)>>x2400));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x2473 = INT64_MIN;
	int32_t x2474 = 230459651;
	static volatile uint32_t x2476 = 0U;
	volatile int64_t t84 = INT64_MIN;

	t84 = (x2473|((x2474<=x2475)>>x2476));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2477 = 27U;
	int64_t x2478 = 39104894652342LL;
	volatile uint16_t x2479 = 1208U;
	static uint64_t x2480 = 5LLU;

	t85 = (x2477|((x2478<=x2479)>>x2480));

	if (t85 != 27) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2509 = -55555LL;
	int32_t x2510 = 16;
	uint8_t x2512 = 31U;
	volatile int64_t t86 = -2343365250826763LL;

	t86 = (x2509|((x2510<=x2511)>>x2512));

	if (t86 != -55555LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2693 = INT32_MIN;
	int16_t x2695 = INT16_MAX;
	volatile uint16_t x2696 = 1U;
	volatile int32_t t87 = INT32_MIN;

	t87 = (x2693|((x2694<=x2695)>>x2696));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2701 = INT16_MIN;
	int8_t x2702 = -39;
	uint16_t x2703 = 5U;
	uint32_t x2704 = 8U;
	int32_t t88 = -5442;

	t88 = (x2701|((x2702<=x2703)>>x2704));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2745 = INT32_MIN;
	uint64_t x2746 = UINT64_MAX;
	volatile int16_t x2747 = 2;
	uint32_t x2748 = 0U;

	t89 = (x2745|((x2746<=x2747)>>x2748));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x2829 = 41;
	int64_t x2830 = -1LL;
	static int8_t x2831 = INT8_MAX;

	t90 = (x2829|((x2830<=x2831)>>x2832));

	if (t90 != 41) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2837 = INT32_MIN;
	static int32_t x2838 = INT32_MAX;
	int16_t x2839 = 46;
	static uint8_t x2840 = 17U;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x2837|((x2838<=x2839)>>x2840));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x2841 = 61454472467108LLU;
	volatile int8_t x2842 = 21;
	int64_t x2843 = -6119946367533964LL;
	static int8_t x2844 = 20;

	t92 = (x2841|((x2842<=x2843)>>x2844));

	if (t92 != 61454472467108LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2845 = 1U;
	int64_t x2846 = 4LL;
	uint64_t x2847 = 10467854LLU;
	static volatile uint32_t t93 = 794040065U;

	t93 = (x2845|((x2846<=x2847)>>x2848));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2885 = 1057334275021LLU;
	volatile uint64_t t94 = 41573001997LLU;

	t94 = (x2885|((x2886<=x2887)>>x2888));

	if (t94 != 1057334275021LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x2941 = UINT64_MAX;
	volatile uint8_t x2942 = UINT8_MAX;
	static int32_t x2943 = -1;
	uint16_t x2944 = 0U;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x2941|((x2942<=x2943)>>x2944));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2957 = INT8_MIN;
	int32_t x2958 = INT32_MIN;
	uint16_t x2959 = 41U;
	uint8_t x2960 = 0U;
	static int32_t t96 = -48767;

	t96 = (x2957|((x2958<=x2959)>>x2960));

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2989 = 2799011809LL;
	int8_t x2991 = -1;

	t97 = (x2989|((x2990<=x2991)>>x2992));

	if (t97 != 2799011809LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3009 = -63001119LL;
	uint16_t x3011 = 0U;
	static volatile uint8_t x3012 = 25U;

	t98 = (x3009|((x3010<=x3011)>>x3012));

	if (t98 != -63001119LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3037 = INT32_MIN;
	int32_t x3039 = 281089;
	volatile int16_t x3040 = 1;
	volatile int32_t t99 = INT32_MIN;

	t99 = (x3037|((x3038<=x3039)>>x3040));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

