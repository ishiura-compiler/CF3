#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x90 = 6697197;
volatile int32_t t1 = 4;
volatile int32_t t5 = 99;
int16_t x206 = INT16_MAX;
uint16_t x208 = 3U;
uint16_t x300 = 0U;
static volatile int32_t t8 = -19865583;
int16_t x313 = INT16_MIN;
int64_t x314 = INT64_MIN;
static volatile int32_t t10 = -6148;
static int16_t x366 = -1;
static volatile int64_t x389 = 0LL;
int64_t x392 = 9LL;
volatile int32_t x398 = INT32_MIN;
static volatile int32_t x425 = INT32_MIN;
int8_t x446 = -1;
uint8_t x448 = 0U;
uint32_t x452 = 0U;
int16_t x460 = 1;
static volatile uint32_t t18 = 4589U;
int64_t x595 = 20329LL;
int64_t x596 = 4LL;
int32_t t20 = -6;
uint8_t x701 = 117U;
static volatile int64_t x702 = INT64_MIN;
static uint8_t x741 = UINT8_MAX;
int32_t t22 = 61;
volatile int32_t x762 = -8927267;
int8_t x765 = 17;
int16_t x766 = INT16_MIN;
static int8_t x935 = INT8_MIN;
volatile uint32_t t27 = 115U;
static uint32_t x962 = 11150U;
uint64_t x989 = 24969105808LLU;
static uint16_t x1129 = 9159U;
static uint64_t x1130 = 2001LLU;
volatile int64_t x1131 = -30658LL;
uint8_t x1132 = 1U;
int8_t x1147 = 27;
static int16_t x1156 = 1;
uint64_t x1169 = UINT64_MAX;
volatile uint64_t t34 = UINT64_MAX;
int8_t x1202 = -1;
int32_t x1203 = -1;
int16_t x1248 = 0;
volatile int32_t x1289 = 53489308;
static volatile uint64_t x1325 = 130192393718879LLU;
volatile int64_t x1326 = -1LL;
uint64_t t40 = 2LLU;
int32_t t41 = -69;
int64_t x1438 = INT64_MIN;
uint16_t x1441 = 26456U;
int8_t x1442 = -10;
uint16_t x1444 = 1U;
volatile int64_t x1463 = INT64_MIN;
uint16_t x1464 = 7U;
volatile int32_t t45 = 7450;
int32_t x1503 = INT32_MAX;
static uint8_t x1504 = 0U;
int64_t x1539 = INT64_MIN;
static int16_t x1540 = 8;
int16_t x1548 = 1;
volatile int32_t t50 = -25;
volatile int8_t x1668 = 2;
uint8_t x1773 = 3U;
int64_t x1776 = 4LL;
uint16_t x1779 = 60U;
int8_t x1858 = -19;
int16_t x1895 = INT16_MIN;
int64_t x1914 = -1LL;
uint64_t x1938 = 3849805783795870LLU;
static uint32_t x1940 = 1U;
int64_t x1943 = INT64_MIN;
int16_t x1979 = 2;
int16_t x1980 = 11;
uint64_t x1997 = UINT64_MAX;
volatile uint8_t x2000 = 11U;
volatile uint64_t t67 = UINT64_MAX;
int16_t x2013 = -1;
int32_t x2049 = INT32_MIN;
uint32_t x2058 = 8363920U;
uint8_t x2060 = 11U;
uint8_t x2076 = 19U;
int16_t x2135 = INT16_MAX;
int32_t t72 = -7545114;
int32_t x2202 = INT32_MIN;
volatile int32_t t74 = 448818;
int16_t x2287 = 2;
volatile int32_t t75 = 3329353;
volatile uint8_t x2340 = 14U;
volatile uint64_t x2401 = 261969280307396LLU;
int8_t x2417 = INT8_MIN;
uint64_t x2441 = 182936210112LLU;
int8_t x2505 = -1;
int8_t x2507 = -1;
int32_t x2529 = INT32_MIN;
int8_t x2530 = -10;
int32_t t82 = -4729060;
volatile int8_t x2589 = INT8_MIN;
volatile int16_t x2591 = -1;
uint8_t x2600 = 0U;
int64_t x2833 = -143973LL;
uint16_t x2850 = UINT16_MAX;
int8_t x2852 = 5;
int32_t x2883 = INT32_MIN;
int32_t t90 = -44;
int32_t x3002 = 0;
static int32_t x3003 = INT32_MAX;
static volatile uint8_t x3004 = 1U;
static uint64_t x3009 = 17068055676LLU;
int8_t x3010 = -1;
static uint8_t x3012 = 10U;
uint8_t x3024 = 6U;
static int64_t x3087 = -1LL;
uint16_t x3128 = 0U;
int8_t x3130 = 15;
int8_t x3132 = 0;
volatile uint64_t t98 = 308533780LLU;
uint8_t x3134 = 7U;
volatile int8_t x3135 = INT8_MIN;
uint8_t x3136 = 11U;


void f0(void) {
	volatile int64_t x9 = -108138824468298596LL;
	uint8_t x10 = 13U;
	int32_t x11 = -220942098;
	uint16_t x12 = 7U;
	volatile int64_t t0 = 3661775238949010217LL;

	t0 = (x9|((x10<x11)<<x12));

	if (t0 != -108138824468298596LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x89 = 1;
	int32_t x91 = -3543;
	uint8_t x92 = 3U;

	t1 = (x89|((x90<x91)<<x92));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x101 = INT32_MIN;
	static int32_t x102 = 2125;
	static int16_t x103 = INT16_MIN;
	static uint16_t x104 = 2U;
	static volatile int32_t t2 = INT32_MIN;

	t2 = (x101|((x102<x103)<<x104));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = -1LL;
	volatile int16_t x119 = 3;
	uint16_t x120 = 25U;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x117|((x118<x119)<<x120));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x121 = 1;
	static volatile uint16_t x122 = UINT16_MAX;
	uint32_t x123 = 4011U;
	static uint16_t x124 = 7U;
	int32_t t4 = -3946;

	t4 = (x121|((x122<x123)<<x124));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x129 = INT8_MIN;
	static int16_t x130 = -1;
	static volatile uint16_t x131 = UINT16_MAX;
	volatile uint8_t x132 = 12U;

	t5 = (x129|((x130<x131)<<x132));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x205 = UINT32_MAX;
	static volatile uint8_t x207 = 2U;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x205|((x206<x207)<<x208));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x237 = 2U;
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = 14U;
	volatile int32_t t7 = 5236;

	t7 = (x237|((x238<x239)<<x240));

	if (t7 != 16386) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x297 = 12U;
	int64_t x298 = 242882666LL;
	uint64_t x299 = 1778305254LLU;

	t8 = (x297|((x298<x299)<<x300));

	if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x315 = INT32_MIN;
	static volatile uint8_t x316 = 7U;
	volatile int32_t t9 = 2;

	t9 = (x313|((x314<x315)<<x316));

	if (t9 != -32640) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x321 = -1;
	static uint32_t x322 = 107U;
	int8_t x323 = INT8_MAX;
	static volatile int8_t x324 = 23;

	t10 = (x321|((x322<x323)<<x324));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x365 = 948U;
	volatile uint64_t x367 = UINT64_MAX;
	volatile uint64_t x368 = 3LLU;
	uint32_t t11 = 132U;

	t11 = (x365|((x366<x367)<<x368));

	if (t11 != 948U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x390 = 20LL;
	volatile int8_t x391 = 24;
	volatile int64_t t12 = -282915LL;

	t12 = (x389|((x390<x391)<<x392));

	if (t12 != 512LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x397 = 0U;
	int64_t x399 = -128LL;
	static int32_t x400 = 30;
	int32_t t13 = -15510;

	t13 = (x397|((x398<x399)<<x400));

	if (t13 != 1073741824) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x426 = -16159259836347059LL;
	int8_t x427 = INT8_MIN;
	int8_t x428 = 1;
	int32_t t14 = 82993611;

	t14 = (x425|((x426<x427)<<x428));

	if (t14 != -2147483646) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x445 = 12;
	int64_t x447 = INT64_MIN;
	int32_t t15 = -374844382;

	t15 = (x445|((x446<x447)<<x448));

	if (t15 != 12) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x449 = 2U;
	int64_t x450 = -1LL;
	static int16_t x451 = -1;
	int32_t t16 = -5;

	t16 = (x449|((x450<x451)<<x452));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x457 = 95U;
	uint64_t x458 = 1001581388LLU;
	uint64_t x459 = UINT64_MAX;
	static volatile int32_t t17 = 1204;

	t17 = (x457|((x458<x459)<<x460));

	if (t17 != 95) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x537 = 3600U;
	static int16_t x538 = INT16_MAX;
	uint8_t x539 = UINT8_MAX;
	static int8_t x540 = 0;

	t18 = (x537|((x538<x539)<<x540));

	if (t18 != 3600U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x593 = 21U;
	uint64_t x594 = 625230664490LLU;
	int32_t t19 = 817;

	t19 = (x593|((x594<x595)<<x596));

	if (t19 != 21) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x597 = UINT16_MAX;
	static int16_t x598 = INT16_MIN;
	int8_t x599 = INT8_MIN;
	static uint16_t x600 = 1U;

	t20 = (x597|((x598<x599)<<x600));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x703 = -1LL;
	uint64_t x704 = 11LLU;
	int32_t t21 = -1;

	t21 = (x701|((x702<x703)<<x704));

	if (t21 != 2165) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x742 = INT32_MIN;
	int8_t x743 = INT8_MIN;
	static uint16_t x744 = 3U;

	t22 = (x741|((x742<x743)<<x744));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x749 = -1;
	static uint16_t x750 = UINT16_MAX;
	volatile int32_t x751 = -9689698;
	uint32_t x752 = 14U;
	volatile int32_t t23 = -40;

	t23 = (x749|((x750<x751)<<x752));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x761 = -12688;
	uint16_t x763 = UINT16_MAX;
	uint8_t x764 = 14U;
	static volatile int32_t t24 = 62956078;

	t24 = (x761|((x762<x763)<<x764));

	if (t24 != -12688) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x767 = 61306LLU;
	static int8_t x768 = 4;
	volatile int32_t t25 = -12284;

	t25 = (x765|((x766<x767)<<x768));

	if (t25 != 17) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x793 = INT64_MIN;
	int16_t x794 = INT16_MIN;
	static int32_t x795 = 20;
	static int8_t x796 = 1;
	int64_t t26 = 2781250909118812783LL;

	t26 = (x793|((x794<x795)<<x796));

	if (t26 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x933 = 41677844U;
	static int64_t x934 = 7456710710LL;
	uint32_t x936 = 14U;

	t27 = (x933|((x934<x935)<<x936));

	if (t27 != 41677844U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x961 = 557U;
	static uint16_t x963 = 3U;
	uint16_t x964 = 8U;
	int32_t t28 = -12605;

	t28 = (x961|((x962<x963)<<x964));

	if (t28 != 557) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x990 = INT32_MIN;
	int8_t x991 = -1;
	int8_t x992 = 1;
	static uint64_t t29 = 80117067152945LLU;

	t29 = (x989|((x990<x991)<<x992));

	if (t29 != 24969105810LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1089 = INT16_MAX;
	uint16_t x1090 = 3406U;
	int16_t x1091 = INT16_MIN;
	int8_t x1092 = 0;
	volatile int32_t t30 = -105;

	t30 = (x1089|((x1090<x1091)<<x1092));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t t31 = 167732;

	t31 = (x1129|((x1130<x1131)<<x1132));

	if (t31 != 9159) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1145 = INT32_MAX;
	static uint64_t x1146 = UINT64_MAX;
	uint8_t x1148 = 1U;
	int32_t t32 = INT32_MAX;

	t32 = (x1145|((x1146<x1147)<<x1148));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1153 = INT16_MIN;
	volatile int32_t x1154 = INT32_MAX;
	int64_t x1155 = INT64_MIN;
	int32_t t33 = -1600;

	t33 = (x1153|((x1154<x1155)<<x1156));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1170 = INT32_MAX;
	volatile int64_t x1171 = -1LL;
	volatile uint32_t x1172 = 0U;

	t34 = (x1169|((x1170<x1171)<<x1172));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x1201 = UINT64_MAX;
	volatile int8_t x1204 = 1;
	static uint64_t t35 = UINT64_MAX;

	t35 = (x1201|((x1202<x1203)<<x1204));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x1213 = UINT64_MAX;
	static int8_t x1214 = -2;
	int8_t x1215 = 5;
	uint16_t x1216 = 0U;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x1213|((x1214<x1215)<<x1216));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1233 = INT8_MIN;
	int16_t x1234 = 56;
	volatile int8_t x1235 = INT8_MIN;
	uint8_t x1236 = 16U;
	static int32_t t37 = -236;

	t37 = (x1233|((x1234<x1235)<<x1236));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1245 = -556291619548279LL;
	static int64_t x1246 = -1LL;
	static int64_t x1247 = 0LL;
	static int64_t t38 = -337251981247LL;

	t38 = (x1245|((x1246<x1247)<<x1248));

	if (t38 != -556291619548279LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1290 = 2317077002LLU;
	int16_t x1291 = 1425;
	static uint8_t x1292 = 4U;
	int32_t t39 = 5333586;

	t39 = (x1289|((x1290<x1291)<<x1292));

	if (t39 != 53489308) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x1327 = 23U;
	int8_t x1328 = 27;

	t40 = (x1325|((x1326<x1327)<<x1328));

	if (t40 != 130192527936607LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1345 = INT16_MIN;
	int64_t x1346 = 788001274LL;
	static int8_t x1347 = -1;
	static uint8_t x1348 = 6U;

	t41 = (x1345|((x1346<x1347)<<x1348));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1369 = INT16_MIN;
	int16_t x1370 = -1;
	volatile int32_t x1371 = -20632542;
	int8_t x1372 = 3;
	int32_t t42 = 410191;

	t42 = (x1369|((x1370<x1371)<<x1372));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1437 = INT16_MIN;
	static uint8_t x1439 = UINT8_MAX;
	volatile uint32_t x1440 = 6U;
	volatile int32_t t43 = -16827718;

	t43 = (x1437|((x1438<x1439)<<x1440));

	if (t43 != -32704) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1443 = UINT32_MAX;
	int32_t t44 = 12570881;

	t44 = (x1441|((x1442<x1443)<<x1444));

	if (t44 != 26458) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x1461 = -1;
	int32_t x1462 = INT32_MAX;

	t45 = (x1461|((x1462<x1463)<<x1464));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1481 = -1116151;
	static int8_t x1482 = INT8_MAX;
	static uint8_t x1483 = 23U;
	uint8_t x1484 = 1U;
	int32_t t46 = 523403362;

	t46 = (x1481|((x1482<x1483)<<x1484));

	if (t46 != -1116151) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1501 = INT16_MIN;
	static int32_t x1502 = INT32_MIN;
	int32_t t47 = -73006324;

	t47 = (x1501|((x1502<x1503)<<x1504));

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1529 = INT8_MIN;
	int16_t x1530 = INT16_MIN;
	int64_t x1531 = INT64_MIN;
	volatile uint16_t x1532 = 8U;
	static int32_t t48 = -21152742;

	t48 = (x1529|((x1530<x1531)<<x1532));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1537 = INT16_MIN;
	static uint64_t x1538 = 2818162378LLU;
	int32_t t49 = -7;

	t49 = (x1537|((x1538<x1539)<<x1540));

	if (t49 != -32512) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1545 = -432852;
	int64_t x1546 = -790680086190293193LL;
	uint16_t x1547 = 13U;

	t50 = (x1545|((x1546<x1547)<<x1548));

	if (t50 != -432850) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1613 = INT8_MAX;
	int8_t x1614 = INT8_MIN;
	uint8_t x1615 = 9U;
	int8_t x1616 = 0;
	static int32_t t51 = 10169794;

	t51 = (x1613|((x1614<x1615)<<x1616));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1629 = -1;
	static int8_t x1630 = INT8_MAX;
	uint16_t x1631 = UINT16_MAX;
	int8_t x1632 = 0;
	int32_t t52 = 2396908;

	t52 = (x1629|((x1630<x1631)<<x1632));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1665 = INT32_MIN;
	volatile uint32_t x1666 = 16118849U;
	static volatile uint8_t x1667 = 34U;
	int32_t t53 = INT32_MIN;

	t53 = (x1665|((x1666<x1667)<<x1668));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1774 = 3110;
	volatile int32_t x1775 = 13;
	static int32_t t54 = 1102;

	t54 = (x1773|((x1774<x1775)<<x1776));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1777 = 0;
	static uint64_t x1778 = UINT64_MAX;
	uint16_t x1780 = 31U;
	volatile int32_t t55 = -10;

	t55 = (x1777|((x1778<x1779)<<x1780));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1813 = -1;
	volatile int64_t x1814 = -2LL;
	int32_t x1815 = -409911325;
	uint8_t x1816 = 8U;
	static volatile int32_t t56 = 127482;

	t56 = (x1813|((x1814<x1815)<<x1816));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1825 = INT32_MIN;
	uint32_t x1826 = 1211U;
	volatile uint8_t x1827 = 0U;
	uint16_t x1828 = 11U;
	static volatile int32_t t57 = INT32_MIN;

	t57 = (x1825|((x1826<x1827)<<x1828));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1857 = -1LL;
	int32_t x1859 = INT32_MIN;
	uint16_t x1860 = 0U;
	volatile int64_t t58 = -88211LL;

	t58 = (x1857|((x1858<x1859)<<x1860));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1881 = -1915;
	int32_t x1882 = INT32_MIN;
	static uint32_t x1883 = UINT32_MAX;
	static volatile uint8_t x1884 = 4U;
	int32_t t59 = 86574;

	t59 = (x1881|((x1882<x1883)<<x1884));

	if (t59 != -1899) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1885 = INT64_MIN;
	int16_t x1886 = INT16_MIN;
	static volatile int8_t x1887 = -1;
	int8_t x1888 = 1;
	static volatile int64_t t60 = -78748980604786570LL;

	t60 = (x1885|((x1886<x1887)<<x1888));

	if (t60 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1893 = -1;
	int16_t x1894 = -7;
	static int64_t x1896 = 0LL;
	int32_t t61 = -11;

	t61 = (x1893|((x1894<x1895)<<x1896));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x1913 = 8541614284LLU;
	uint64_t x1915 = 29709LLU;
	uint8_t x1916 = 1U;
	static volatile uint64_t t62 = 3535333086038914LLU;

	t62 = (x1913|((x1914<x1915)<<x1916));

	if (t62 != 8541614284LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1937 = 7643637024241614LL;
	int32_t x1939 = INT32_MIN;
	volatile int64_t t63 = 201088LL;

	t63 = (x1937|((x1938<x1939)<<x1940));

	if (t63 != 7643637024241614LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1941 = -1725;
	static volatile uint32_t x1942 = 1674U;
	uint8_t x1944 = 5U;
	volatile int32_t t64 = -50621;

	t64 = (x1941|((x1942<x1943)<<x1944));

	if (t64 != -1725) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1949 = 24U;
	int64_t x1950 = -1LL;
	static uint16_t x1951 = UINT16_MAX;
	int16_t x1952 = 22;
	int32_t t65 = -326099850;

	t65 = (x1949|((x1950<x1951)<<x1952));

	if (t65 != 4194328) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1977 = -2;
	int32_t x1978 = -1;
	int32_t t66 = -1;

	t66 = (x1977|((x1978<x1979)<<x1980));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1998 = -1;
	static uint32_t x1999 = 12165U;

	t67 = (x1997|((x1998<x1999)<<x2000));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2014 = 443244U;
	static volatile int16_t x2015 = -1852;
	int16_t x2016 = 1;
	int32_t t68 = 756142;

	t68 = (x2013|((x2014<x2015)<<x2016));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2050 = 82LL;
	static volatile uint64_t x2051 = UINT64_MAX;
	uint16_t x2052 = 14U;
	volatile int32_t t69 = -761759047;

	t69 = (x2049|((x2050<x2051)<<x2052));

	if (t69 != -2147467264) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2057 = UINT64_MAX;
	int16_t x2059 = 46;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x2057|((x2058<x2059)<<x2060));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2073 = -1;
	int64_t x2074 = -1LL;
	int64_t x2075 = INT64_MIN;
	volatile int32_t t71 = -2775837;

	t71 = (x2073|((x2074<x2075)<<x2076));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2133 = 1;
	uint32_t x2134 = 10937U;
	static uint16_t x2136 = 10U;

	t72 = (x2133|((x2134<x2135)<<x2136));

	if (t72 != 1025) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2201 = 27U;
	volatile int64_t x2203 = -1LL;
	uint8_t x2204 = 3U;
	int32_t t73 = 113;

	t73 = (x2201|((x2202<x2203)<<x2204));

	if (t73 != 27) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2281 = 76U;
	uint32_t x2282 = UINT32_MAX;
	int32_t x2283 = INT32_MAX;
	int8_t x2284 = 16;

	t74 = (x2281|((x2282<x2283)<<x2284));

	if (t74 != 76) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2285 = 6U;
	uint32_t x2286 = UINT32_MAX;
	volatile uint8_t x2288 = 1U;

	t75 = (x2285|((x2286<x2287)<<x2288));

	if (t75 != 6) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2313 = INT16_MIN;
	int8_t x2314 = -3;
	volatile uint64_t x2315 = UINT64_MAX;
	uint16_t x2316 = 26U;
	int32_t t76 = 39311;

	t76 = (x2313|((x2314<x2315)<<x2316));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2337 = INT8_MIN;
	int8_t x2338 = 7;
	int32_t x2339 = -1904034;
	volatile int32_t t77 = 525;

	t77 = (x2337|((x2338<x2339)<<x2340));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2402 = INT16_MAX;
	static int16_t x2403 = 4;
	int8_t x2404 = 5;
	volatile uint64_t t78 = 3055327323LLU;

	t78 = (x2401|((x2402<x2403)<<x2404));

	if (t78 != 261969280307396LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2418 = UINT16_MAX;
	static int8_t x2419 = INT8_MAX;
	uint8_t x2420 = 0U;
	volatile int32_t t79 = 0;

	t79 = (x2417|((x2418<x2419)<<x2420));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2442 = -1LL;
	int8_t x2443 = -1;
	uint8_t x2444 = 11U;
	volatile uint64_t t80 = 1779LLU;

	t80 = (x2441|((x2442<x2443)<<x2444));

	if (t80 != 182936210112LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2506 = INT32_MIN;
	uint8_t x2508 = 2U;
	volatile int32_t t81 = 4767672;

	t81 = (x2505|((x2506<x2507)<<x2508));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x2531 = -1LL;
	int32_t x2532 = 7;

	t82 = (x2529|((x2530<x2531)<<x2532));

	if (t82 != -2147483520) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x2590 = INT64_MAX;
	uint8_t x2592 = 22U;
	volatile int32_t t83 = -527;

	t83 = (x2589|((x2590<x2591)<<x2592));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2597 = 6U;
	int16_t x2598 = INT16_MIN;
	static uint64_t x2599 = 1051891026006718351LLU;
	volatile int32_t t84 = 13375408;

	t84 = (x2597|((x2598<x2599)<<x2600));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x2673 = INT64_MIN;
	uint32_t x2674 = UINT32_MAX;
	static uint8_t x2675 = 15U;
	static uint16_t x2676 = 0U;
	static int64_t t85 = INT64_MIN;

	t85 = (x2673|((x2674<x2675)<<x2676));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x2685 = INT8_MIN;
	int8_t x2686 = 40;
	int16_t x2687 = INT16_MIN;
	int16_t x2688 = 2;
	volatile int32_t t86 = 11;

	t86 = (x2685|((x2686<x2687)<<x2688));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x2789 = -180478687925966LL;
	int64_t x2790 = INT64_MIN;
	static int64_t x2791 = INT64_MAX;
	int8_t x2792 = 0;
	int64_t t87 = 606899LL;

	t87 = (x2789|((x2790<x2791)<<x2792));

	if (t87 != -180478687925965LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2834 = -2663461383228555602LL;
	volatile int16_t x2835 = -3943;
	static uint32_t x2836 = 10U;
	volatile int64_t t88 = 216239214108589803LL;

	t88 = (x2833|((x2834<x2835)<<x2836));

	if (t88 != -143973LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x2849 = -1;
	uint32_t x2851 = 1985105U;
	int32_t t89 = -6334276;

	t89 = (x2849|((x2850<x2851)<<x2852));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x2881 = 21;
	int8_t x2882 = INT8_MIN;
	uint16_t x2884 = 4U;

	t90 = (x2881|((x2882<x2883)<<x2884));

	if (t90 != 21) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x2901 = INT64_MIN;
	uint64_t x2902 = 926038749LLU;
	int8_t x2903 = INT8_MAX;
	volatile uint8_t x2904 = 1U;
	volatile int64_t t91 = INT64_MIN;

	t91 = (x2901|((x2902<x2903)<<x2904));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x2953 = 46U;
	int16_t x2954 = INT16_MAX;
	uint32_t x2955 = UINT32_MAX;
	int16_t x2956 = 0;
	static int32_t t92 = -13345210;

	t92 = (x2953|((x2954<x2955)<<x2956));

	if (t92 != 47) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3001 = 3;
	volatile int32_t t93 = 59796887;

	t93 = (x3001|((x3002<x3003)<<x3004));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3011 = 10;
	static uint64_t t94 = 160107LLU;

	t94 = (x3009|((x3010<x3011)<<x3012));

	if (t94 != 17068055676LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3021 = 1U;
	int8_t x3022 = INT8_MIN;
	int32_t x3023 = INT32_MAX;
	volatile int32_t t95 = -2403698;

	t95 = (x3021|((x3022<x3023)<<x3024));

	if (t95 != 65) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3085 = 6;
	int64_t x3086 = INT64_MAX;
	uint8_t x3088 = 1U;
	volatile int32_t t96 = 256315;

	t96 = (x3085|((x3086<x3087)<<x3088));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x3125 = 619618724U;
	uint64_t x3126 = UINT64_MAX;
	int8_t x3127 = INT8_MIN;
	uint32_t t97 = 29303U;

	t97 = (x3125|((x3126<x3127)<<x3128));

	if (t97 != 619618724U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3129 = 1779676645LLU;
	static uint8_t x3131 = 2U;

	t98 = (x3129|((x3130<x3131)<<x3132));

	if (t98 != 1779676645LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3133 = -3;
	volatile int32_t t99 = -16243880;

	t99 = (x3133|((x3134<x3135)<<x3136));

	if (t99 != -3) { NG(); } else { ; }
	
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

