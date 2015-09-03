#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = INT32_MIN;
uint64_t x29 = 1139758651981534LLU;
volatile uint64_t t2 = 464524347744556LLU;
uint32_t x38 = 53U;
int8_t x39 = INT8_MIN;
int16_t x61 = 374;
volatile int32_t t4 = 1;
int32_t x138 = 14735108;
int32_t t6 = 774755;
uint8_t x244 = 19U;
uint32_t x265 = UINT32_MAX;
uint8_t x408 = 0U;
static volatile int8_t x478 = -3;
uint8_t x480 = 30U;
volatile int32_t t12 = -39;
int32_t x499 = INT32_MAX;
int8_t x549 = INT8_MIN;
uint16_t x727 = 97U;
int16_t x776 = 0;
static volatile int64_t x822 = INT64_MIN;
uint16_t x824 = 6U;
uint64_t x842 = 31030535720LLU;
int64_t x845 = INT64_MIN;
uint32_t x846 = 12U;
uint8_t x947 = 108U;
volatile int32_t t24 = -13675872;
volatile int8_t x998 = INT8_MAX;
volatile int8_t x999 = -5;
volatile int64_t x1034 = INT64_MIN;
int8_t x1036 = 0;
volatile uint8_t x1072 = 8U;
int8_t x1131 = -1;
int8_t x1157 = -1;
int8_t x1158 = INT8_MAX;
volatile int32_t t31 = 5429394;
int64_t x1182 = INT64_MAX;
volatile int32_t t33 = 11;
int32_t x1189 = INT32_MAX;
volatile uint64_t x1284 = 2LLU;
volatile int8_t x1285 = -1;
uint64_t t39 = UINT64_MAX;
volatile int8_t x1317 = -1;
static int32_t x1322 = 1719;
int8_t x1324 = 2;
int32_t x1333 = INT32_MIN;
int32_t x1334 = INT32_MIN;
static int32_t t42 = INT32_MIN;
int16_t x1378 = 1007;
uint8_t x1380 = 2U;
volatile int32_t x1399 = INT32_MAX;
static int64_t x1422 = 43067LL;
volatile uint16_t x1512 = 0U;
volatile int32_t x1513 = INT32_MIN;
int8_t x1515 = INT8_MIN;
int32_t t48 = INT32_MIN;
int16_t x1553 = INT16_MIN;
static int16_t x1678 = -55;
int8_t x1680 = 19;
uint16_t x1682 = UINT16_MAX;
int8_t x1684 = 0;
int32_t t51 = 131025033;
int64_t x1851 = INT64_MAX;
volatile int8_t x1852 = 5;
volatile int64_t x1886 = 202794LL;
int8_t x1888 = 0;
uint64_t x1895 = 1429558116LLU;
volatile uint8_t x1896 = 6U;
static int8_t x1914 = -1;
volatile int32_t t57 = 3443926;
static int8_t x2155 = -1;
uint16_t x2212 = 6U;
static uint64_t x2339 = 5105151038LLU;
static volatile int32_t t65 = -6356;
volatile int32_t t67 = -4888742;
uint8_t x2412 = 20U;
uint32_t x2424 = 23U;
uint8_t x2474 = 3U;
static uint32_t x2475 = 14U;
int64_t x2543 = 3380641127LL;
uint32_t x2690 = 217U;
volatile int16_t x2887 = -1;
static int16_t x2888 = 0;
static int8_t x2968 = 0;
static int32_t t85 = -11;
uint8_t x3321 = UINT8_MAX;
volatile int16_t x3378 = -26;
static int16_t x3379 = -1;
volatile int8_t x3380 = 9;
int16_t x3402 = INT16_MIN;
volatile uint32_t t93 = 8422U;
int32_t x3433 = -1;
int8_t x3434 = INT8_MAX;
volatile int64_t x3643 = -352688964839853LL;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x2 = INT32_MIN;
	volatile int16_t x3 = -1;
	uint8_t x4 = 27U;
	static volatile int64_t t0 = -4063439990786967789LL;

	t0 = (x1^((x2==x3)<<x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	static volatile int32_t x10 = INT32_MAX;
	uint16_t x11 = 511U;
	int8_t x12 = 3;

	t1 = (x9^((x10==x11)<<x12));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x30 = INT16_MAX;
	int64_t x31 = INT64_MIN;
	volatile uint64_t x32 = 23LLU;

	t2 = (x29^((x30==x31)<<x32));

	if (t2 != 1139758651981534LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x37 = -1LL;
	static uint8_t x40 = 1U;
	int64_t t3 = 371461501640LL;

	t3 = (x37^((x38==x39)<<x40));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x62 = UINT8_MAX;
	volatile int32_t x63 = INT32_MIN;
	volatile int16_t x64 = 0;

	t4 = (x61^((x62==x63)<<x64));

	if (t4 != 374) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x85 = INT16_MAX;
	volatile int64_t x86 = INT64_MIN;
	volatile int32_t x87 = 1321;
	static uint32_t x88 = 18U;
	volatile int32_t t5 = 1;

	t5 = (x85^((x86==x87)<<x88));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x137 = 13U;
	volatile int32_t x139 = 9159194;
	int16_t x140 = 0;

	t6 = (x137^((x138==x139)<<x140));

	if (t6 != 13) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = -4;
	int64_t x195 = 0LL;
	int8_t x196 = 0;
	volatile int64_t t7 = INT64_MIN;

	t7 = (x193^((x194==x195)<<x196));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x241 = 33066277265LLU;
	static uint64_t x242 = 1435831391244061LLU;
	int32_t x243 = -719305827;
	uint64_t t8 = 988749265461517827LLU;

	t8 = (x241^((x242==x243)<<x244));

	if (t8 != 33066277265LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x266 = INT16_MAX;
	int16_t x267 = INT16_MIN;
	int8_t x268 = 3;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x265^((x266==x267)<<x268));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x321 = -1;
	int64_t x322 = INT64_MIN;
	volatile uint32_t x323 = 610U;
	uint8_t x324 = 1U;
	volatile int32_t t10 = -45467;

	t10 = (x321^((x322==x323)<<x324));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x405 = 0;
	static int16_t x406 = -1;
	int16_t x407 = -1;
	int32_t t11 = -8837;

	t11 = (x405^((x406==x407)<<x408));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x477 = 2U;
	int8_t x479 = INT8_MIN;

	t12 = (x477^((x478==x479)<<x480));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x497 = INT8_MAX;
	uint8_t x498 = 1U;
	int8_t x500 = 18;
	volatile int32_t t13 = 143612537;

	t13 = (x497^((x498==x499)<<x500));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x509 = 3274U;
	uint8_t x510 = 99U;
	uint64_t x511 = 142434405LLU;
	int64_t x512 = 0LL;
	volatile uint32_t t14 = 14U;

	t14 = (x509^((x510==x511)<<x512));

	if (t14 != 3274U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x550 = 2U;
	volatile int64_t x551 = INT64_MAX;
	uint16_t x552 = 9U;
	static volatile int32_t t15 = 27137014;

	t15 = (x549^((x550==x551)<<x552));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x609 = 128LLU;
	int32_t x610 = INT32_MAX;
	static volatile uint64_t x611 = 202011333LLU;
	uint32_t x612 = 2U;
	static volatile uint64_t t16 = 4087801103299LLU;

	t16 = (x609^((x610==x611)<<x612));

	if (t16 != 128LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x657 = 8264086U;
	static volatile int16_t x658 = -1;
	int32_t x659 = INT32_MIN;
	volatile int16_t x660 = 19;
	uint32_t t17 = 21885984U;

	t17 = (x657^((x658==x659)<<x660));

	if (t17 != 8264086U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x697 = 5U;
	volatile uint32_t x698 = UINT32_MAX;
	int8_t x699 = 37;
	uint16_t x700 = 7U;
	volatile int32_t t18 = 34946;

	t18 = (x697^((x698==x699)<<x700));

	if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x725 = 408716;
	int32_t x726 = INT32_MIN;
	static uint8_t x728 = 3U;
	int32_t t19 = -4970;

	t19 = (x725^((x726==x727)<<x728));

	if (t19 != 408716) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x773 = 2011LLU;
	int64_t x774 = INT64_MIN;
	int16_t x775 = INT16_MIN;
	static volatile uint64_t t20 = 24395638LLU;

	t20 = (x773^((x774==x775)<<x776));

	if (t20 != 2011LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x821 = -1;
	int8_t x823 = INT8_MIN;
	int32_t t21 = -465579;

	t21 = (x821^((x822==x823)<<x824));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x841 = 446931532U;
	int8_t x843 = -1;
	int32_t x844 = 2;
	static uint32_t t22 = 78147U;

	t22 = (x841^((x842==x843)<<x844));

	if (t22 != 446931532U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x847 = -1;
	uint8_t x848 = 4U;
	volatile int64_t t23 = INT64_MIN;

	t23 = (x845^((x846==x847)<<x848));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x945 = INT8_MIN;
	uint16_t x946 = 1U;
	static uint32_t x948 = 18U;

	t24 = (x945^((x946==x947)<<x948));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x953 = 129442624556223190LLU;
	static uint32_t x954 = UINT32_MAX;
	int32_t x955 = INT32_MAX;
	static uint8_t x956 = 0U;
	uint64_t t25 = 1334976241523024590LLU;

	t25 = (x953^((x954==x955)<<x956));

	if (t25 != 129442624556223190LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x997 = 17U;
	uint8_t x1000 = 1U;
	volatile int32_t t26 = -4;

	t26 = (x997^((x998==x999)<<x1000));

	if (t26 != 17) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1033 = 8020U;
	int32_t x1035 = INT32_MIN;
	static uint32_t t27 = 4823993U;

	t27 = (x1033^((x1034==x1035)<<x1036));

	if (t27 != 8020U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1069 = 1692;
	uint16_t x1070 = 111U;
	static int8_t x1071 = -2;
	int32_t t28 = 22;

	t28 = (x1069^((x1070==x1071)<<x1072));

	if (t28 != 1692) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1081 = INT32_MAX;
	uint64_t x1082 = 31954LLU;
	volatile uint8_t x1083 = 3U;
	static int8_t x1084 = 31;
	volatile int32_t t29 = INT32_MAX;

	t29 = (x1081^((x1082==x1083)<<x1084));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1129 = -9;
	int64_t x1130 = INT64_MIN;
	int16_t x1132 = 0;
	static int32_t t30 = 1;

	t30 = (x1129^((x1130==x1131)<<x1132));

	if (t30 != -9) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1159 = INT32_MIN;
	volatile int32_t x1160 = 12;

	t31 = (x1157^((x1158==x1159)<<x1160));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1169 = -1;
	uint16_t x1170 = 31U;
	volatile uint32_t x1171 = 0U;
	uint8_t x1172 = 3U;
	int32_t t32 = 448;

	t32 = (x1169^((x1170==x1171)<<x1172));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1181 = -648256;
	volatile int64_t x1183 = INT64_MAX;
	int16_t x1184 = 0;

	t33 = (x1181^((x1182==x1183)<<x1184));

	if (t33 != -648255) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x1190 = INT32_MIN;
	int16_t x1191 = -1555;
	volatile int16_t x1192 = 2;
	static volatile int32_t t34 = INT32_MAX;

	t34 = (x1189^((x1190==x1191)<<x1192));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1245 = INT32_MIN;
	uint32_t x1246 = 78U;
	int8_t x1247 = INT8_MIN;
	volatile uint16_t x1248 = 0U;
	int32_t t35 = INT32_MIN;

	t35 = (x1245^((x1246==x1247)<<x1248));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1249 = -713;
	int16_t x1250 = -6;
	static int16_t x1251 = INT16_MIN;
	uint8_t x1252 = 11U;
	volatile int32_t t36 = 734;

	t36 = (x1249^((x1250==x1251)<<x1252));

	if (t36 != -713) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1281 = INT64_MIN;
	static volatile int8_t x1282 = INT8_MIN;
	uint64_t x1283 = UINT64_MAX;
	static int64_t t37 = INT64_MIN;

	t37 = (x1281^((x1282==x1283)<<x1284));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1286 = INT16_MIN;
	static uint64_t x1287 = UINT64_MAX;
	uint8_t x1288 = 6U;
	int32_t t38 = 27;

	t38 = (x1285^((x1286==x1287)<<x1288));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1313 = UINT64_MAX;
	int8_t x1314 = INT8_MIN;
	uint32_t x1315 = 54563403U;
	uint64_t x1316 = 0LLU;

	t39 = (x1313^((x1314==x1315)<<x1316));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1318 = -1;
	int8_t x1319 = INT8_MIN;
	volatile uint8_t x1320 = 20U;
	static int32_t t40 = -213709941;

	t40 = (x1317^((x1318==x1319)<<x1320));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1321 = INT32_MIN;
	uint32_t x1323 = 208464288U;
	volatile int32_t t41 = INT32_MIN;

	t41 = (x1321^((x1322==x1323)<<x1324));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x1335 = INT8_MIN;
	uint8_t x1336 = 2U;

	t42 = (x1333^((x1334==x1335)<<x1336));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x1341 = 3338U;
	int8_t x1342 = -1;
	int32_t x1343 = INT32_MIN;
	uint8_t x1344 = 7U;
	uint32_t t43 = 10U;

	t43 = (x1341^((x1342==x1343)<<x1344));

	if (t43 != 3338U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1377 = 58455871;
	int32_t x1379 = -1;
	int32_t t44 = 0;

	t44 = (x1377^((x1378==x1379)<<x1380));

	if (t44 != 58455871) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1397 = INT8_MIN;
	int32_t x1398 = -5279;
	uint16_t x1400 = 1U;
	volatile int32_t t45 = 53509;

	t45 = (x1397^((x1398==x1399)<<x1400));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1421 = -1LL;
	static uint64_t x1423 = 973210LLU;
	static uint32_t x1424 = 0U;
	int64_t t46 = -24339794009LL;

	t46 = (x1421^((x1422==x1423)<<x1424));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1509 = 951317047LLU;
	volatile uint16_t x1510 = UINT16_MAX;
	volatile uint64_t x1511 = 98139992208LLU;
	static uint64_t t47 = 91LLU;

	t47 = (x1509^((x1510==x1511)<<x1512));

	if (t47 != 951317047LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1514 = INT8_MAX;
	static uint32_t x1516 = 1U;

	t48 = (x1513^((x1514==x1515)<<x1516));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1554 = UINT8_MAX;
	int32_t x1555 = -13;
	uint16_t x1556 = 14U;
	static volatile int32_t t49 = -152;

	t49 = (x1553^((x1554==x1555)<<x1556));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1677 = 15148252839105007LL;
	int16_t x1679 = -42;
	static int64_t t50 = -533827539LL;

	t50 = (x1677^((x1678==x1679)<<x1680));

	if (t50 != 15148252839105007LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1681 = -53;
	volatile int8_t x1683 = 55;

	t51 = (x1681^((x1682==x1683)<<x1684));

	if (t51 != -53) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1745 = UINT8_MAX;
	volatile uint64_t x1746 = 35694015421241123LLU;
	uint32_t x1747 = 2468U;
	volatile int8_t x1748 = 17;
	volatile int32_t t52 = 177627;

	t52 = (x1745^((x1746==x1747)<<x1748));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1849 = INT16_MAX;
	uint16_t x1850 = UINT16_MAX;
	volatile int32_t t53 = 783330017;

	t53 = (x1849^((x1850==x1851)<<x1852));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x1885 = UINT64_MAX;
	static volatile int64_t x1887 = -1LL;
	static uint64_t t54 = UINT64_MAX;

	t54 = (x1885^((x1886==x1887)<<x1888));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1893 = INT16_MIN;
	static int64_t x1894 = -4010095813LL;
	volatile int32_t t55 = -43062;

	t55 = (x1893^((x1894==x1895)<<x1896));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1913 = INT16_MIN;
	uint8_t x1915 = UINT8_MAX;
	uint16_t x1916 = 1U;
	volatile int32_t t56 = 27;

	t56 = (x1913^((x1914==x1915)<<x1916));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1929 = -7348;
	int16_t x1930 = -365;
	uint8_t x1931 = 0U;
	uint64_t x1932 = 15LLU;

	t57 = (x1929^((x1930==x1931)<<x1932));

	if (t57 != -7348) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1945 = INT32_MIN;
	uint8_t x1946 = UINT8_MAX;
	uint64_t x1947 = 16780529765218LLU;
	uint64_t x1948 = 20LLU;
	int32_t t58 = INT32_MIN;

	t58 = (x1945^((x1946==x1947)<<x1948));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x2009 = UINT64_MAX;
	uint64_t x2010 = 113122866LLU;
	volatile uint32_t x2011 = UINT32_MAX;
	volatile int8_t x2012 = 16;
	static uint64_t t59 = UINT64_MAX;

	t59 = (x2009^((x2010==x2011)<<x2012));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2153 = 6752;
	volatile int8_t x2154 = -4;
	volatile int8_t x2156 = 0;
	volatile int32_t t60 = 136808085;

	t60 = (x2153^((x2154==x2155)<<x2156));

	if (t60 != 6752) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x2181 = UINT8_MAX;
	uint64_t x2182 = UINT64_MAX;
	volatile uint32_t x2183 = 213262582U;
	int8_t x2184 = 3;
	int32_t t61 = 5759;

	t61 = (x2181^((x2182==x2183)<<x2184));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x2209 = 1U;
	int16_t x2210 = INT16_MAX;
	volatile uint32_t x2211 = UINT32_MAX;
	volatile int32_t t62 = 2059;

	t62 = (x2209^((x2210==x2211)<<x2212));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2329 = -1LL;
	volatile int64_t x2330 = 0LL;
	uint64_t x2331 = 8199040LLU;
	uint8_t x2332 = 5U;
	volatile int64_t t63 = -133102534659861469LL;

	t63 = (x2329^((x2330==x2331)<<x2332));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2337 = INT64_MAX;
	volatile uint32_t x2338 = 1297U;
	static int8_t x2340 = 1;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x2337^((x2338==x2339)<<x2340));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x2365 = 19413U;
	uint32_t x2366 = 74U;
	uint32_t x2367 = 162U;
	volatile uint32_t x2368 = 14U;

	t65 = (x2365^((x2366==x2367)<<x2368));

	if (t65 != 19413) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x2385 = 593015U;
	int16_t x2386 = INT16_MAX;
	uint16_t x2387 = 68U;
	int16_t x2388 = 19;
	uint32_t t66 = 218669685U;

	t66 = (x2385^((x2386==x2387)<<x2388));

	if (t66 != 593015U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x2389 = INT16_MIN;
	uint16_t x2390 = 1181U;
	int8_t x2391 = INT8_MAX;
	int8_t x2392 = 17;

	t67 = (x2389^((x2390==x2391)<<x2392));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2409 = UINT64_MAX;
	int16_t x2410 = INT16_MIN;
	int8_t x2411 = 2;
	static volatile uint64_t t68 = UINT64_MAX;

	t68 = (x2409^((x2410==x2411)<<x2412));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2421 = -1LL;
	uint64_t x2422 = UINT64_MAX;
	static int32_t x2423 = 0;
	volatile int64_t t69 = 6571LL;

	t69 = (x2421^((x2422==x2423)<<x2424));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2445 = INT16_MIN;
	int32_t x2446 = INT32_MIN;
	int8_t x2447 = -1;
	int8_t x2448 = 1;
	volatile int32_t t70 = 12112;

	t70 = (x2445^((x2446==x2447)<<x2448));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2473 = 4;
	static volatile int16_t x2476 = 2;
	volatile int32_t t71 = -156318817;

	t71 = (x2473^((x2474==x2475)<<x2476));

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2485 = 2976U;
	uint8_t x2486 = UINT8_MAX;
	volatile int64_t x2487 = INT64_MAX;
	int8_t x2488 = 0;
	int32_t t72 = -32;

	t72 = (x2485^((x2486==x2487)<<x2488));

	if (t72 != 2976) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2537 = INT64_MIN;
	int8_t x2538 = INT8_MIN;
	static uint64_t x2539 = UINT64_MAX;
	uint8_t x2540 = 11U;
	int64_t t73 = INT64_MIN;

	t73 = (x2537^((x2538==x2539)<<x2540));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x2541 = 9766344U;
	int32_t x2542 = INT32_MIN;
	static uint8_t x2544 = 1U;
	volatile uint32_t t74 = 25646U;

	t74 = (x2541^((x2542==x2543)<<x2544));

	if (t74 != 9766344U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x2553 = UINT64_MAX;
	int8_t x2554 = -1;
	uint64_t x2555 = 524034148LLU;
	int8_t x2556 = 23;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x2553^((x2554==x2555)<<x2556));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2593 = 0LLU;
	uint16_t x2594 = 1486U;
	uint8_t x2595 = UINT8_MAX;
	int8_t x2596 = 0;
	static uint64_t t76 = 253612511535LLU;

	t76 = (x2593^((x2594==x2595)<<x2596));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x2689 = INT16_MIN;
	static int16_t x2691 = INT16_MIN;
	uint32_t x2692 = 0U;
	int32_t t77 = 1110;

	t77 = (x2689^((x2690==x2691)<<x2692));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2693 = 56498324001833LLU;
	static uint16_t x2694 = 236U;
	int32_t x2695 = INT32_MAX;
	int8_t x2696 = 6;
	volatile uint64_t t78 = 89852385LLU;

	t78 = (x2693^((x2694==x2695)<<x2696));

	if (t78 != 56498324001833LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2881 = -7631753591LL;
	uint16_t x2882 = UINT16_MAX;
	int8_t x2883 = -2;
	volatile uint8_t x2884 = 8U;
	int64_t t79 = 82783226675373212LL;

	t79 = (x2881^((x2882==x2883)<<x2884));

	if (t79 != -7631753591LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2885 = 13;
	int32_t x2886 = -287;
	int32_t t80 = -1040642;

	t80 = (x2885^((x2886==x2887)<<x2888));

	if (t80 != 13) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2889 = -2342;
	int8_t x2890 = INT8_MIN;
	int8_t x2891 = INT8_MIN;
	volatile uint8_t x2892 = 13U;
	static int32_t t81 = -1132;

	t81 = (x2889^((x2890==x2891)<<x2892));

	if (t81 != -10534) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2909 = 3264;
	int8_t x2910 = 42;
	int64_t x2911 = -63952907351LL;
	uint16_t x2912 = 1U;
	int32_t t82 = -2;

	t82 = (x2909^((x2910==x2911)<<x2912));

	if (t82 != 3264) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2965 = INT8_MIN;
	int8_t x2966 = INT8_MAX;
	int8_t x2967 = -1;
	static volatile int32_t t83 = 4620;

	t83 = (x2965^((x2966==x2967)<<x2968));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3045 = UINT64_MAX;
	static volatile int8_t x3046 = -1;
	uint32_t x3047 = 353097U;
	int16_t x3048 = 4;
	uint64_t t84 = UINT64_MAX;

	t84 = (x3045^((x3046==x3047)<<x3048));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3225 = INT32_MIN;
	int8_t x3226 = -1;
	int8_t x3227 = -1;
	uint8_t x3228 = 12U;

	t85 = (x3225^((x3226==x3227)<<x3228));

	if (t85 != -2147479552) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x3281 = -1;
	int64_t x3282 = -1LL;
	uint64_t x3283 = UINT64_MAX;
	int8_t x3284 = 5;
	volatile int32_t t86 = 11732;

	t86 = (x3281^((x3282==x3283)<<x3284));

	if (t86 != -33) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x3322 = UINT64_MAX;
	static int16_t x3323 = INT16_MIN;
	uint16_t x3324 = 11U;
	static volatile int32_t t87 = -161;

	t87 = (x3321^((x3322==x3323)<<x3324));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3341 = -1LL;
	static uint8_t x3342 = 5U;
	int16_t x3343 = INT16_MIN;
	uint16_t x3344 = 6U;
	int64_t t88 = 608099355532267980LL;

	t88 = (x3341^((x3342==x3343)<<x3344));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3353 = INT64_MIN;
	volatile uint32_t x3354 = 1727U;
	static uint16_t x3355 = 187U;
	int8_t x3356 = 12;
	int64_t t89 = INT64_MIN;

	t89 = (x3353^((x3354==x3355)<<x3356));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3377 = 769125734912642LLU;
	uint64_t t90 = 9110705552927LLU;

	t90 = (x3377^((x3378==x3379)<<x3380));

	if (t90 != 769125734912642LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x3381 = UINT16_MAX;
	int32_t x3382 = -2785175;
	volatile int16_t x3383 = -1;
	uint8_t x3384 = 2U;
	int32_t t91 = -333544;

	t91 = (x3381^((x3382==x3383)<<x3384));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3401 = 0U;
	int16_t x3403 = -6;
	static volatile uint8_t x3404 = 0U;
	volatile uint32_t t92 = 31U;

	t92 = (x3401^((x3402==x3403)<<x3404));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3429 = 195895U;
	uint32_t x3430 = 1640060U;
	int8_t x3431 = INT8_MIN;
	volatile int16_t x3432 = 0;

	t93 = (x3429^((x3430==x3431)<<x3432));

	if (t93 != 195895U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x3435 = 472;
	uint32_t x3436 = 27U;
	volatile int32_t t94 = -121;

	t94 = (x3433^((x3434==x3435)<<x3436));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3441 = -59394005;
	int8_t x3442 = 55;
	uint32_t x3443 = 2660U;
	uint8_t x3444 = 30U;
	int32_t t95 = 14104381;

	t95 = (x3441^((x3442==x3443)<<x3444));

	if (t95 != -59394005) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3457 = INT32_MIN;
	volatile uint64_t x3458 = 8172973924359186LLU;
	int8_t x3459 = INT8_MIN;
	int8_t x3460 = 20;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x3457^((x3458==x3459)<<x3460));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3557 = INT64_MIN;
	int8_t x3558 = INT8_MIN;
	volatile uint32_t x3559 = UINT32_MAX;
	static uint8_t x3560 = 0U;
	int64_t t97 = INT64_MIN;

	t97 = (x3557^((x3558==x3559)<<x3560));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3641 = 9690439659995622LL;
	int32_t x3642 = 7556501;
	static int8_t x3644 = 8;
	int64_t t98 = 856872215999LL;

	t98 = (x3641^((x3642==x3643)<<x3644));

	if (t98 != 9690439659995622LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3685 = 48U;
	static volatile int16_t x3686 = 6;
	uint32_t x3687 = UINT32_MAX;
	static uint8_t x3688 = 3U;
	volatile int32_t t99 = 0;

	t99 = (x3685^((x3686==x3687)<<x3688));

	if (t99 != 48) { NG(); } else { ; }
	
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

