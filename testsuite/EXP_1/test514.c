#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x46 = INT8_MIN;
volatile int32_t x94 = -15747034;
volatile uint32_t t1 = 10743U;
int16_t x148 = 0;
uint8_t x220 = 9U;
int16_t x243 = INT16_MAX;
uint32_t x244 = 14U;
uint8_t x252 = 1U;
int32_t t5 = -30;
static uint32_t x257 = 115035807U;
volatile uint8_t x258 = 57U;
volatile int64_t t7 = -3290340185LL;
static int64_t x398 = INT64_MAX;
uint8_t x399 = 4U;
static volatile uint16_t x429 = 16243U;
uint8_t x431 = 20U;
int32_t x458 = INT32_MAX;
int64_t t12 = -7717433167LL;
int8_t x664 = 1;
static uint64_t t13 = 465773557582769LLU;
int64_t x665 = 92LL;
uint8_t x740 = 48U;
int32_t x754 = 49;
static uint64_t x794 = 3779403176573363436LLU;
volatile uint64_t x796 = 48LLU;
uint8_t x898 = 1U;
static uint64_t t19 = 3757137782605LLU;
uint16_t x924 = 12U;
static volatile uint32_t t21 = 116U;
volatile uint16_t x1000 = 0U;
int64_t x1019 = -1LL;
uint16_t x1037 = 717U;
static uint64_t x1121 = UINT64_MAX;
static int16_t x1157 = -121;
uint32_t t27 = 14896U;
volatile int32_t t29 = 7325;
volatile int64_t x1253 = 211159989264678240LL;
int8_t x1256 = 3;
static uint64_t x1313 = 144230127970675965LLU;
volatile uint64_t t34 = 3830208245542LLU;
static volatile int64_t t35 = -71972459649174751LL;
static int64_t t36 = 4LL;
int64_t x1606 = INT64_MAX;
uint16_t x1742 = 21182U;
static volatile uint64_t x1743 = UINT64_MAX;
uint8_t x1760 = 7U;
static uint64_t t41 = 1249354566623456LLU;
int32_t x1847 = INT32_MAX;
static volatile uint16_t x1848 = 3U;
int32_t t44 = 6259;
static uint32_t x1916 = 6U;
static int16_t x1930 = -107;
int8_t x1991 = -1;
volatile int32_t t47 = 10689;
uint32_t x2085 = 1927U;
int8_t x2105 = -1;
uint32_t x2117 = 3331U;
int8_t x2138 = 4;
volatile uint32_t x2139 = 2008U;
int64_t x2158 = INT64_MIN;
uint64_t t52 = 20864232529104LLU;
int32_t x2161 = -1;
volatile uint8_t x2163 = UINT8_MAX;
volatile int16_t x2417 = -46;
static uint32_t x2430 = 15U;
int64_t x2437 = INT64_MIN;
volatile uint64_t t59 = 3853938370157563LLU;
uint32_t x2505 = UINT32_MAX;
uint16_t x2507 = 116U;
int8_t x2567 = INT8_MAX;
static volatile int64_t x2681 = -1LL;
static uint64_t x2682 = 7LLU;
int64_t x2690 = INT64_MAX;
volatile int16_t x2819 = INT16_MAX;
int8_t x2820 = 4;
int16_t x2840 = 1;
uint8_t x2916 = 10U;
volatile uint8_t x2966 = 102U;
volatile int32_t t72 = 1;
static uint16_t x3134 = 497U;
volatile uint32_t t73 = 63720U;
int16_t x3207 = INT16_MAX;
uint8_t x3393 = 4U;
static volatile int64_t x3396 = 24LL;
int64_t x3419 = 241735759LL;
volatile int64_t x3423 = INT64_MAX;
int64_t x3567 = 1LL;
volatile int64_t x3568 = 10LL;
static int64_t x3615 = INT64_MAX;
int32_t x3630 = -65309;
volatile int8_t x3738 = -1;
uint16_t x3778 = 952U;
static volatile int32_t x3779 = 193050;
int8_t x3780 = 40;
int64_t x3937 = INT64_MIN;
volatile int64_t t84 = 916148LL;
int16_t x4037 = INT16_MIN;
int32_t x4039 = 4186;
uint64_t x4040 = 50LLU;
volatile uint64_t t89 = 2023128615LLU;
int8_t x4150 = INT8_MIN;
static volatile uint64_t t90 = 26906LLU;
uint8_t x4229 = 3U;
int16_t x4232 = 1;
volatile int8_t x4446 = INT8_MIN;
static int8_t x4447 = INT8_MIN;
int8_t x4448 = 18;
int8_t x4474 = 24;
uint16_t x4476 = 3U;
static uint32_t t96 = 35927201U;
int64_t x4495 = INT64_MAX;


void f0(void) {
	uint64_t x45 = 21737996LLU;
	uint64_t x47 = 41270LLU;
	static uint8_t x48 = 0U;
	uint64_t t0 = 4247875564LLU;

	t0 = (((x45/x46)+x47)>>x48);

	if (t0 != 41270LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x93 = 1751044237U;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = 0;

	t1 = (((x93/x94)+x95)>>x96);

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x145 = INT16_MIN;
	static volatile int64_t x146 = -1LL;
	uint8_t x147 = 2U;
	static int64_t t2 = -825537LL;

	t2 = (((x145/x146)+x147)>>x148);

	if (t2 != 32770LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x217 = INT32_MIN;
	static int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	volatile int32_t t3 = 110;

	t3 = (((x217/x218)+x219)>>x220);

	if (t3 != 64) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x241 = 476U;
	volatile int16_t x242 = -44;
	uint32_t t4 = 99506U;

	t4 = (((x241/x242)+x243)>>x244);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = -1;
	static uint8_t x251 = 40U;

	t5 = (((x249/x250)+x251)>>x252);

	if (t5 != 16404) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x259 = UINT16_MAX;
	volatile uint16_t x260 = 3U;
	volatile uint32_t t6 = 173U;

	t6 = (((x257/x258)+x259)>>x260);

	if (t6 != 260463U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x285 = -1LL;
	uint32_t x286 = 124U;
	int16_t x287 = 128;
	static int16_t x288 = 0;

	t7 = (((x285/x286)+x287)>>x288);

	if (t7 != 128LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x397 = -1279296129468475256LL;
	uint8_t x400 = 4U;
	int64_t t8 = -4758LL;

	t8 = (((x397/x398)+x399)>>x400);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x430 = INT64_MAX;
	volatile uint16_t x432 = 6U;
	int64_t t9 = 50694614625572LL;

	t9 = (((x429/x430)+x431)>>x432);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x457 = INT32_MIN;
	uint16_t x459 = 500U;
	uint32_t x460 = 9U;
	int32_t t10 = 125330;

	t10 = (((x457/x458)+x459)>>x460);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x481 = 3255043U;
	static int8_t x482 = 1;
	static uint8_t x483 = UINT8_MAX;
	uint8_t x484 = 1U;
	uint32_t t11 = 965U;

	t11 = (((x481/x482)+x483)>>x484);

	if (t11 != 1627649U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x517 = UINT8_MAX;
	volatile int64_t x518 = INT64_MIN;
	uint8_t x519 = 1U;
	int8_t x520 = 0;

	t12 = (((x517/x518)+x519)>>x520);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x661 = INT16_MAX;
	volatile int16_t x662 = 40;
	uint64_t x663 = UINT64_MAX;

	t13 = (((x661/x662)+x663)>>x664);

	if (t13 != 409LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x666 = INT32_MIN;
	int64_t x667 = 5013076LL;
	static volatile uint16_t x668 = 7U;
	int64_t t14 = -405314050814487793LL;

	t14 = (((x665/x666)+x667)>>x668);

	if (t14 != 39164LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x737 = INT64_MIN;
	volatile int8_t x738 = INT8_MIN;
	uint32_t x739 = 64U;
	volatile int64_t t15 = 116868526LL;

	t15 = (((x737/x738)+x739)>>x740);

	if (t15 != 256LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x753 = INT64_MAX;
	volatile uint8_t x755 = 93U;
	int16_t x756 = 3;
	int64_t t16 = -2LL;

	t16 = (((x753/x754)+x755)>>x756);

	if (t16 != 23529010298098929LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x793 = INT32_MIN;
	int8_t x795 = INT8_MAX;
	volatile uint64_t t17 = 163442071084905849LLU;

	t17 = (((x793/x794)+x795)>>x796);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x801 = UINT32_MAX;
	volatile uint16_t x802 = 1U;
	uint16_t x803 = UINT16_MAX;
	int16_t x804 = 2;
	volatile uint32_t t18 = 31U;

	t18 = (((x801/x802)+x803)>>x804);

	if (t18 != 16383U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x897 = 817832223LLU;
	int64_t x899 = -1LL;
	int16_t x900 = 12;

	t19 = (((x897/x898)+x899)>>x900);

	if (t19 != 199666LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x921 = -1;
	int64_t x922 = INT64_MIN;
	static int64_t x923 = INT64_MAX;
	int64_t t20 = -7952353373539LL;

	t20 = (((x921/x922)+x923)>>x924);

	if (t20 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x977 = 3;
	volatile uint8_t x978 = 3U;
	volatile uint32_t x979 = 127754183U;
	int8_t x980 = 1;

	t21 = (((x977/x978)+x979)>>x980);

	if (t21 != 63877092U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x997 = 20052U;
	int8_t x998 = -1;
	volatile int64_t x999 = INT64_MAX;
	int64_t t22 = INT64_MAX;

	t22 = (((x997/x998)+x999)>>x1000);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1017 = -1;
	static int8_t x1018 = -1;
	static uint8_t x1020 = 1U;
	int64_t t23 = 425486435503LL;

	t23 = (((x1017/x1018)+x1019)>>x1020);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1038 = INT32_MAX;
	uint64_t x1039 = UINT64_MAX;
	uint16_t x1040 = 6U;
	static uint64_t t24 = 2023075826LLU;

	t24 = (((x1037/x1038)+x1039)>>x1040);

	if (t24 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1122 = 143967759;
	int16_t x1123 = INT16_MIN;
	uint8_t x1124 = 0U;
	uint64_t t25 = 29472466LLU;

	t25 = (((x1121/x1122)+x1123)>>x1124);

	if (t25 != 128131044647LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1153 = -869946;
	static int32_t x1154 = INT32_MIN;
	uint64_t x1155 = 23082951LLU;
	static uint16_t x1156 = 11U;
	uint64_t t26 = 716852315LLU;

	t26 = (((x1153/x1154)+x1155)>>x1156);

	if (t26 != 11270LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1158 = 19910U;
	int16_t x1159 = -1;
	int32_t x1160 = 0;

	t27 = (((x1157/x1158)+x1159)>>x1160);

	if (t27 != 215718U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1169 = 95U;
	static int16_t x1170 = 3;
	uint8_t x1171 = UINT8_MAX;
	uint8_t x1172 = 10U;
	static volatile int32_t t28 = 3;

	t28 = (((x1169/x1170)+x1171)>>x1172);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1241 = INT16_MIN;
	int32_t x1242 = INT32_MAX;
	static uint8_t x1243 = UINT8_MAX;
	uint8_t x1244 = 0U;

	t29 = (((x1241/x1242)+x1243)>>x1244);

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1254 = UINT64_MAX;
	uint64_t x1255 = 6304792LLU;
	static uint64_t t30 = 1386691136LLU;

	t30 = (((x1253/x1254)+x1255)>>x1256);

	if (t30 != 788099LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1265 = 23591U;
	int32_t x1266 = INT32_MIN;
	int16_t x1267 = 10;
	uint8_t x1268 = 0U;
	volatile uint32_t t31 = 125075U;

	t31 = (((x1265/x1266)+x1267)>>x1268);

	if (t31 != 10U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1314 = UINT32_MAX;
	volatile int32_t x1315 = -1;
	uint8_t x1316 = 25U;
	static volatile uint64_t t32 = 462231345LLU;

	t32 = (((x1313/x1314)+x1315)>>x1316);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1341 = UINT8_MAX;
	int16_t x1342 = 910;
	uint32_t x1343 = UINT32_MAX;
	uint8_t x1344 = 12U;
	uint32_t t33 = 58964090U;

	t33 = (((x1341/x1342)+x1343)>>x1344);

	if (t33 != 1048575U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x1513 = UINT16_MAX;
	volatile int32_t x1514 = -120012696;
	uint64_t x1515 = 16559817591439889LLU;
	int16_t x1516 = 16;

	t34 = (((x1513/x1514)+x1515)>>x1516);

	if (t34 != 252682763541LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1541 = INT16_MAX;
	int64_t x1542 = -2465385734939LL;
	volatile int32_t x1543 = 6;
	int8_t x1544 = 31;

	t35 = (((x1541/x1542)+x1543)>>x1544);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1581 = INT64_MIN;
	int64_t x1582 = INT64_MAX;
	volatile int8_t x1583 = INT8_MAX;
	int8_t x1584 = 1;

	t36 = (((x1581/x1582)+x1583)>>x1584);

	if (t36 != 63LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1605 = 272414563089951208LLU;
	int32_t x1607 = INT32_MAX;
	uint64_t x1608 = 1LLU;
	volatile uint64_t t37 = 2287399162633997647LLU;

	t37 = (((x1605/x1606)+x1607)>>x1608);

	if (t37 != 1073741823LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1629 = INT32_MIN;
	int16_t x1630 = INT16_MIN;
	static int32_t x1631 = -1969;
	volatile uint8_t x1632 = 3U;
	int32_t t38 = -4701865;

	t38 = (((x1629/x1630)+x1631)>>x1632);

	if (t38 != 7945) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1741 = UINT64_MAX;
	int16_t x1744 = 36;
	volatile uint64_t t39 = 6266LLU;

	t39 = (((x1741/x1742)+x1743)>>x1744);

	if (t39 != 12672LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1753 = -1;
	uint64_t x1754 = 18560855LLU;
	int16_t x1755 = 176;
	volatile uint8_t x1756 = 1U;
	uint64_t t40 = 2823383875062395LLU;

	t40 = (((x1753/x1754)+x1755)>>x1756);

	if (t40 != 496926032690LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1757 = 83151536LLU;
	static int64_t x1758 = -3315179080LL;
	int16_t x1759 = INT16_MIN;

	t41 = (((x1757/x1758)+x1759)>>x1760);

	if (t41 != 144115188075855616LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1789 = INT64_MIN;
	static int32_t x1790 = INT32_MAX;
	uint64_t x1791 = 7LLU;
	volatile int8_t x1792 = 13;
	uint64_t t42 = 164373573200204LLU;

	t42 = (((x1789/x1790)+x1791)>>x1792);

	if (t42 != 2251799813160960LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1805 = 524249734748LLU;
	int8_t x1806 = INT8_MIN;
	uint32_t x1807 = 238004946U;
	int16_t x1808 = 5;
	volatile uint64_t t43 = 934336748099152LLU;

	t43 = (((x1805/x1806)+x1807)>>x1808);

	if (t43 != 7437654LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1845 = INT16_MIN;
	volatile uint16_t x1846 = 2U;

	t44 = (((x1845/x1846)+x1847)>>x1848);

	if (t44 != 268433407) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1913 = 97618745U;
	int16_t x1914 = INT16_MIN;
	volatile uint64_t x1915 = 33802022813872280LLU;
	static uint64_t t45 = 19619027LLU;

	t45 = (((x1913/x1914)+x1915)>>x1916);

	if (t45 != 528156606466754LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1929 = INT64_MIN;
	int32_t x1931 = INT32_MIN;
	int16_t x1932 = 9;
	volatile int64_t t46 = 13618481834LL;

	t46 = (((x1929/x1930)+x1931)>>x1932);

	if (t46 != 168358860380293LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1989 = INT8_MIN;
	volatile int8_t x1990 = INT8_MIN;
	int64_t x1992 = 11LL;

	t47 = (((x1989/x1990)+x1991)>>x1992);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2086 = INT8_MIN;
	uint32_t x2087 = 6951605U;
	uint8_t x2088 = 0U;
	static volatile uint32_t t48 = 124U;

	t48 = (((x2085/x2086)+x2087)>>x2088);

	if (t48 != 6951605U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2106 = 1U;
	volatile uint16_t x2107 = UINT16_MAX;
	int16_t x2108 = 2;
	int32_t t49 = 128067;

	t49 = (((x2105/x2106)+x2107)>>x2108);

	if (t49 != 16383) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2118 = INT8_MIN;
	int32_t x2119 = INT32_MIN;
	uint8_t x2120 = 16U;
	uint32_t t50 = 55486U;

	t50 = (((x2117/x2118)+x2119)>>x2120);

	if (t50 != 32768U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2137 = 427906508U;
	int16_t x2140 = 1;
	volatile uint32_t t51 = 1570617U;

	t51 = (((x2137/x2138)+x2139)>>x2140);

	if (t51 != 53489317U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x2157 = INT32_MIN;
	static uint64_t x2159 = UINT64_MAX;
	volatile uint8_t x2160 = 16U;

	t52 = (((x2157/x2158)+x2159)>>x2160);

	if (t52 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2162 = 1777747514U;
	uint16_t x2164 = 2U;
	static uint32_t t53 = 1051U;

	t53 = (((x2161/x2162)+x2163)>>x2164);

	if (t53 != 64U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x2381 = INT16_MIN;
	int64_t x2382 = INT64_MIN;
	static volatile int8_t x2383 = 1;
	static uint8_t x2384 = 0U;
	static volatile int64_t t54 = -28929694529201LL;

	t54 = (((x2381/x2382)+x2383)>>x2384);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2418 = INT16_MIN;
	int8_t x2419 = 1;
	uint8_t x2420 = 24U;
	static volatile int32_t t55 = 2;

	t55 = (((x2417/x2418)+x2419)>>x2420);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2429 = 3976U;
	uint16_t x2431 = 31U;
	uint32_t x2432 = 22U;
	volatile uint32_t t56 = 0U;

	t56 = (((x2429/x2430)+x2431)>>x2432);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2438 = 234172722988325LLU;
	int16_t x2439 = INT16_MAX;
	volatile int8_t x2440 = 2;
	uint64_t t57 = 2191LLU;

	t57 = (((x2437/x2438)+x2439)>>x2440);

	if (t57 != 18038LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2457 = 0U;
	uint64_t x2458 = UINT64_MAX;
	int32_t x2459 = INT32_MIN;
	int16_t x2460 = 1;
	static uint64_t t58 = 21038496581198403LLU;

	t58 = (((x2457/x2458)+x2459)>>x2460);

	if (t58 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2485 = 70897LLU;
	int64_t x2486 = -123918801241LL;
	uint32_t x2487 = 13266U;
	uint8_t x2488 = 14U;

	t59 = (((x2485/x2486)+x2487)>>x2488);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2506 = -798;
	static uint16_t x2508 = 1U;
	volatile uint32_t t60 = 42U;

	t60 = (((x2505/x2506)+x2507)>>x2508);

	if (t60 != 58U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2565 = -2753;
	int32_t x2566 = -127724023;
	int8_t x2568 = 1;
	static volatile int32_t t61 = -38681;

	t61 = (((x2565/x2566)+x2567)>>x2568);

	if (t61 != 63) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x2683 = UINT8_MAX;
	int8_t x2684 = 49;
	volatile uint64_t t62 = 29206424416LLU;

	t62 = (((x2681/x2682)+x2683)>>x2684);

	if (t62 != 4681LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2689 = INT8_MIN;
	int8_t x2691 = 2;
	int8_t x2692 = 0;
	volatile int64_t t63 = -3LL;

	t63 = (((x2689/x2690)+x2691)>>x2692);

	if (t63 != 2LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x2765 = -1LL;
	int16_t x2766 = INT16_MIN;
	volatile uint8_t x2767 = 119U;
	int8_t x2768 = 28;
	static volatile int64_t t64 = -63LL;

	t64 = (((x2765/x2766)+x2767)>>x2768);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2817 = 422;
	int32_t x2818 = INT32_MIN;
	volatile int32_t t65 = 215099;

	t65 = (((x2817/x2818)+x2819)>>x2820);

	if (t65 != 2047) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2837 = INT8_MAX;
	uint8_t x2838 = 9U;
	uint16_t x2839 = UINT16_MAX;
	volatile int32_t t66 = -30821;

	t66 = (((x2837/x2838)+x2839)>>x2840);

	if (t66 != 32774) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x2857 = 48U;
	int16_t x2858 = INT16_MIN;
	volatile uint8_t x2859 = UINT8_MAX;
	volatile uint32_t x2860 = 11U;
	volatile int32_t t67 = 9924;

	t67 = (((x2857/x2858)+x2859)>>x2860);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x2913 = -1;
	volatile uint64_t x2914 = UINT64_MAX;
	int16_t x2915 = -1;
	volatile uint64_t t68 = 416725302003665LLU;

	t68 = (((x2913/x2914)+x2915)>>x2916);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2957 = UINT64_MAX;
	volatile int16_t x2958 = INT16_MAX;
	volatile uint16_t x2959 = 23U;
	uint8_t x2960 = 44U;
	uint64_t t69 = 145213696LLU;

	t69 = (((x2957/x2958)+x2959)>>x2960);

	if (t69 != 32LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2965 = INT16_MAX;
	int64_t x2967 = -1LL;
	static uint32_t x2968 = 17U;
	volatile int64_t t70 = 2310290395793905915LL;

	t70 = (((x2965/x2966)+x2967)>>x2968);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3017 = 463312;
	uint8_t x3018 = UINT8_MAX;
	volatile int64_t x3019 = 61085792LL;
	int8_t x3020 = 18;
	static volatile int64_t t71 = -197563LL;

	t71 = (((x3017/x3018)+x3019)>>x3020);

	if (t71 != 233LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x3025 = -7;
	int32_t x3026 = -1;
	static uint16_t x3027 = UINT16_MAX;
	static int8_t x3028 = 28;

	t72 = (((x3025/x3026)+x3027)>>x3028);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3133 = 66963673U;
	uint8_t x3135 = 116U;
	uint16_t x3136 = 6U;

	t73 = (((x3133/x3134)+x3135)>>x3136);

	if (t73 != 2107U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3205 = UINT64_MAX;
	int64_t x3206 = -1099LL;
	uint16_t x3208 = 47U;
	static uint64_t t74 = 65323111116855087LLU;

	t74 = (((x3205/x3206)+x3207)>>x3208);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3329 = INT8_MIN;
	uint32_t x3330 = 8805880U;
	int16_t x3331 = INT16_MIN;
	int8_t x3332 = 11;
	static uint32_t t75 = 5U;

	t75 = (((x3329/x3330)+x3331)>>x3332);

	if (t75 != 2097136U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3394 = 6LL;
	static uint64_t x3395 = 46100868LLU;
	volatile uint64_t t76 = 97054191758074464LLU;

	t76 = (((x3393/x3394)+x3395)>>x3396);

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x3417 = 2372175U;
	uint16_t x3418 = UINT16_MAX;
	uint32_t x3420 = 0U;
	int64_t t77 = 297895038295622LL;

	t77 = (((x3417/x3418)+x3419)>>x3420);

	if (t77 != 241735795LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3421 = INT8_MAX;
	volatile int8_t x3422 = INT8_MIN;
	uint8_t x3424 = 13U;
	int64_t t78 = 1481839811861337LL;

	t78 = (((x3421/x3422)+x3423)>>x3424);

	if (t78 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3565 = -1LL;
	int32_t x3566 = INT32_MIN;
	int64_t t79 = 16906075640469LL;

	t79 = (((x3565/x3566)+x3567)>>x3568);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x3613 = INT64_MIN;
	volatile uint16_t x3614 = 46U;
	uint32_t x3616 = 62U;
	static volatile int64_t t80 = 15LL;

	t80 = (((x3613/x3614)+x3615)>>x3616);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x3629 = -1;
	static uint32_t x3631 = 316U;
	int8_t x3632 = 0;
	static uint32_t t81 = 13U;

	t81 = (((x3629/x3630)+x3631)>>x3632);

	if (t81 != 316U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3737 = -1;
	int8_t x3739 = INT8_MAX;
	uint64_t x3740 = 6LLU;
	int32_t t82 = 465915;

	t82 = (((x3737/x3738)+x3739)>>x3740);

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x3777 = -1301LL;
	volatile int64_t t83 = -12845180302991LL;

	t83 = (((x3777/x3778)+x3779)>>x3780);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x3938 = -10;
	volatile int8_t x3939 = INT8_MIN;
	static int32_t x3940 = 7;

	t84 = (((x3937/x3938)+x3939)>>x3940);

	if (t84 != 7205759403792792LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4021 = 10184;
	static int8_t x4022 = INT8_MIN;
	int64_t x4023 = 6717018618LL;
	static int32_t x4024 = 7;
	volatile int64_t t85 = 464524626701LL;

	t85 = (((x4021/x4022)+x4023)>>x4024);

	if (t85 != 52476707LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x4038 = -98LL;
	static volatile int64_t t86 = 79LL;

	t86 = (((x4037/x4038)+x4039)>>x4040);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x4081 = INT64_MIN;
	static int64_t x4082 = INT64_MAX;
	int16_t x4083 = INT16_MAX;
	static volatile uint16_t x4084 = 2U;
	int64_t t87 = 160LL;

	t87 = (((x4081/x4082)+x4083)>>x4084);

	if (t87 != 8191LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4097 = 11382U;
	static int32_t x4098 = INT32_MIN;
	int16_t x4099 = -158;
	volatile int32_t x4100 = 7;
	volatile uint32_t t88 = 12889U;

	t88 = (((x4097/x4098)+x4099)>>x4100);

	if (t88 != 33554430U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x4137 = 8;
	uint64_t x4138 = 3LLU;
	uint64_t x4139 = 96187667171LLU;
	static uint8_t x4140 = 0U;

	t89 = (((x4137/x4138)+x4139)>>x4140);

	if (t89 != 96187667173LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4149 = -346LL;
	uint64_t x4151 = 51844785LLU;
	uint8_t x4152 = 0U;

	t90 = (((x4149/x4150)+x4151)>>x4152);

	if (t90 != 51844787LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4230 = INT32_MAX;
	volatile uint64_t x4231 = 733422LLU;
	static uint64_t t91 = 1317547211062803798LLU;

	t91 = (((x4229/x4230)+x4231)>>x4232);

	if (t91 != 366711LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4321 = 384;
	int32_t x4322 = INT32_MAX;
	volatile int32_t x4323 = 2383236;
	static uint16_t x4324 = 3U;
	volatile int32_t t92 = 3610;

	t92 = (((x4321/x4322)+x4323)>>x4324);

	if (t92 != 297904) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x4353 = INT64_MAX;
	uint64_t x4354 = 7146818930332151LLU;
	int64_t x4355 = -2523830668370LL;
	int16_t x4356 = 11;
	uint64_t t93 = 402531432258LLU;

	t93 = (((x4353/x4354)+x4355)>>x4356);

	if (t93 != 9007198022401799LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4357 = INT8_MAX;
	int64_t x4358 = -1LL;
	volatile int64_t x4359 = INT64_MAX;
	uint8_t x4360 = 2U;
	int64_t t94 = -32LL;

	t94 = (((x4357/x4358)+x4359)>>x4360);

	if (t94 != 2305843009213693920LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x4445 = INT64_MIN;
	volatile int64_t t95 = -25LL;

	t95 = (((x4445/x4446)+x4447)>>x4448);

	if (t95 != 274877906943LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4473 = UINT32_MAX;
	int8_t x4475 = 0;

	t96 = (((x4473/x4474)+x4475)>>x4476);

	if (t96 != 22369621U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4493 = INT16_MIN;
	static int16_t x4494 = INT16_MAX;
	uint16_t x4496 = 2U;
	volatile int64_t t97 = -132697674648088LL;

	t97 = (((x4493/x4494)+x4495)>>x4496);

	if (t97 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4565 = UINT16_MAX;
	int64_t x4566 = INT64_MIN;
	uint32_t x4567 = 341951074U;
	volatile uint32_t x4568 = 1U;
	static volatile int64_t t98 = 123955533LL;

	t98 = (((x4565/x4566)+x4567)>>x4568);

	if (t98 != 170975537LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4585 = 2014861107749865LLU;
	volatile uint16_t x4586 = 10U;
	uint16_t x4587 = 31438U;
	int16_t x4588 = 3;
	static uint64_t t99 = 35LLU;

	t99 = (((x4585/x4586)+x4587)>>x4588);

	if (t99 != 25185763850803LLU) { NG(); } else { ; }
	
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

