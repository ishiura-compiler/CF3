#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x29 = UINT8_MAX;
int8_t x31 = -1;
int8_t x37 = INT8_MAX;
volatile uint16_t x195 = UINT16_MAX;
uint64_t x196 = 9LLU;
int32_t t5 = 1;
static int32_t t6 = 49288256;
volatile int32_t x233 = 44329;
int32_t x287 = 1;
int8_t x288 = 0;
int32_t x299 = -1;
volatile int64_t x337 = -8LL;
uint8_t x338 = UINT8_MAX;
volatile int32_t x390 = INT32_MIN;
static int32_t t14 = -743785;
uint32_t x397 = 1804U;
uint64_t x398 = UINT64_MAX;
int8_t x455 = -1;
volatile int32_t t18 = 48497960;
int16_t x469 = 8;
int32_t t19 = -133;
int32_t t20 = -166203336;
uint8_t x516 = 0U;
uint16_t x572 = 1U;
static volatile int32_t t23 = 901;
volatile int32_t t24 = 1;
int64_t x622 = INT64_MAX;
int8_t x671 = -2;
static uint32_t x696 = 26U;
int8_t x705 = INT8_MAX;
int32_t t31 = 57019091;
volatile int32_t t32 = 612;
int64_t x877 = INT64_MAX;
static int32_t x879 = 16080380;
uint16_t x880 = 3U;
int32_t t35 = -402493333;
static int8_t x941 = INT8_MAX;
int16_t x942 = -3;
static uint8_t x948 = 22U;
uint32_t x991 = 242082797U;
int32_t x1021 = -1;
int16_t x1024 = 0;
static uint32_t x1032 = 12U;
volatile int32_t t41 = 3152733;
uint8_t x1056 = 0U;
volatile int32_t t42 = 308781262;
volatile uint32_t x1189 = 54356340U;
uint8_t x1191 = 1U;
int16_t x1213 = INT16_MIN;
uint64_t x1215 = 133993490537673951LLU;
int8_t x1221 = INT8_MAX;
static volatile uint64_t x1223 = 517095646734477893LLU;
volatile int32_t t49 = 1;
volatile int32_t x1266 = -959449;
int8_t x1268 = 1;
uint8_t x1406 = UINT8_MAX;
int64_t x1434 = INT64_MIN;
static int16_t x1435 = INT16_MIN;
uint8_t x1436 = 0U;
static int8_t x1492 = 1;
static int32_t t54 = -862581696;
int8_t x1514 = -1;
static uint16_t x1695 = 2U;
int32_t x1717 = -49;
uint32_t x1718 = 119226U;
static int16_t x1723 = -1;
static uint32_t x1782 = 3U;
uint16_t x1916 = 1U;
uint64_t x1943 = 4LLU;
int16_t x2163 = INT16_MIN;
int8_t x2164 = 1;
uint8_t x2176 = 2U;
volatile int32_t t69 = -145586534;
volatile int32_t t71 = -3466779;
int32_t t73 = 640690;
uint16_t x2226 = UINT16_MAX;
uint8_t x2271 = 0U;
int16_t x2317 = -50;
int8_t x2388 = 7;
int64_t x2523 = -1LL;
volatile int32_t t82 = -1;
uint32_t x2570 = UINT32_MAX;
uint16_t x2572 = 7U;
int64_t x2687 = INT64_MIN;
uint16_t x2688 = 0U;
int64_t x2706 = INT64_MIN;
uint32_t x2917 = 25U;
uint64_t x2918 = 16LLU;
static int64_t x2920 = 1LL;
int32_t t93 = -28279;
static volatile int16_t x2994 = -1;
uint8_t x3024 = 1U;
static int64_t x3194 = INT64_MAX;
volatile int32_t t98 = -4646;


void f0(void) {
	uint8_t x30 = UINT8_MAX;
	volatile uint64_t x32 = 1LLU;
	int32_t t0 = 2661;

	t0 = (((x29/x30)==x31)<<x32);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x38 = -26;
	static uint64_t x39 = 377317979LLU;
	int8_t x40 = 20;
	int32_t t1 = 762;

	t1 = (((x37/x38)==x39)<<x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x81 = INT8_MIN;
	int64_t x82 = 12266LL;
	uint8_t x83 = 7U;
	int16_t x84 = 3;
	volatile int32_t t2 = 54965001;

	t2 = (((x81/x82)==x83)<<x84);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x149 = 1U;
	int64_t x150 = INT64_MIN;
	uint8_t x151 = UINT8_MAX;
	uint16_t x152 = 17U;
	static volatile int32_t t3 = 21738;

	t3 = (((x149/x150)==x151)<<x152);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x181 = 347U;
	uint16_t x182 = 377U;
	uint8_t x183 = 19U;
	static int8_t x184 = 0;
	static volatile int32_t t4 = -13;

	t4 = (((x181/x182)==x183)<<x184);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x193 = INT16_MIN;
	uint8_t x194 = UINT8_MAX;

	t5 = (((x193/x194)==x195)<<x196);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int64_t x222 = INT64_MIN;
	static volatile uint16_t x223 = 48U;
	volatile uint8_t x224 = 8U;

	t6 = (((x221/x222)==x223)<<x224);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x234 = INT64_MAX;
	int16_t x235 = 54;
	static uint8_t x236 = 0U;
	int32_t t7 = 0;

	t7 = (((x233/x234)==x235)<<x236);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x285 = INT16_MIN;
	static int32_t x286 = INT32_MIN;
	int32_t t8 = -647787;

	t8 = (((x285/x286)==x287)<<x288);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x297 = -3;
	volatile int64_t x298 = -1LL;
	uint8_t x300 = 1U;
	static int32_t t9 = 52;

	t9 = (((x297/x298)==x299)<<x300);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x301 = 13142U;
	int8_t x302 = 4;
	int64_t x303 = INT64_MAX;
	volatile uint16_t x304 = 30U;
	static int32_t t10 = -707;

	t10 = (((x301/x302)==x303)<<x304);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x339 = 3339U;
	uint8_t x340 = 9U;
	static int32_t t11 = -182;

	t11 = (((x337/x338)==x339)<<x340);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x349 = 55U;
	static uint16_t x350 = UINT16_MAX;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = 3;
	int32_t t12 = -11231;

	t12 = (((x349/x350)==x351)<<x352);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MAX;
	static volatile int32_t x359 = INT32_MAX;
	volatile uint32_t x360 = 12U;
	volatile int32_t t13 = -4;

	t13 = (((x357/x358)==x359)<<x360);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x389 = INT64_MIN;
	static int8_t x391 = INT8_MIN;
	uint16_t x392 = 1U;

	t14 = (((x389/x390)==x391)<<x392);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x399 = UINT64_MAX;
	int64_t x400 = 0LL;
	int32_t t15 = -1890;

	t15 = (((x397/x398)==x399)<<x400);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x405 = 83590167984LL;
	uint16_t x406 = UINT16_MAX;
	int64_t x407 = 30LL;
	uint16_t x408 = 5U;
	int32_t t16 = -3222009;

	t16 = (((x405/x406)==x407)<<x408);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x453 = 86U;
	int64_t x454 = INT64_MIN;
	static int16_t x456 = 3;
	int32_t t17 = -46;

	t17 = (((x453/x454)==x455)<<x456);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x457 = -1;
	volatile int8_t x458 = -1;
	volatile uint64_t x459 = 30LLU;
	uint8_t x460 = 11U;

	t18 = (((x457/x458)==x459)<<x460);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x470 = INT32_MIN;
	volatile uint64_t x471 = 355LLU;
	uint64_t x472 = 0LLU;

	t19 = (((x469/x470)==x471)<<x472);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x509 = INT32_MIN;
	static int8_t x510 = INT8_MAX;
	int16_t x511 = -12;
	static uint16_t x512 = 3U;

	t20 = (((x509/x510)==x511)<<x512);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x513 = -1022897982364LL;
	static volatile int64_t x514 = 10LL;
	uint64_t x515 = 7267741397898855990LLU;
	static volatile int32_t t21 = 22;

	t21 = (((x513/x514)==x515)<<x516);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x529 = -8;
	uint32_t x530 = 142U;
	int16_t x531 = INT16_MIN;
	int64_t x532 = 1LL;
	static int32_t t22 = 2764;

	t22 = (((x529/x530)==x531)<<x532);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x569 = INT32_MIN;
	int16_t x570 = INT16_MIN;
	int8_t x571 = INT8_MIN;

	t23 = (((x569/x570)==x571)<<x572);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x597 = 1;
	int8_t x598 = 20;
	volatile int8_t x599 = 21;
	int16_t x600 = 12;

	t24 = (((x597/x598)==x599)<<x600);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x621 = -15;
	static int16_t x623 = INT16_MAX;
	volatile int16_t x624 = 2;
	int32_t t25 = 10107;

	t25 = (((x621/x622)==x623)<<x624);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x669 = UINT32_MAX;
	int8_t x670 = INT8_MIN;
	static int8_t x672 = 0;
	int32_t t26 = -24;

	t26 = (((x669/x670)==x671)<<x672);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x693 = -1;
	int32_t x694 = INT32_MIN;
	static uint8_t x695 = UINT8_MAX;
	int32_t t27 = 16065;

	t27 = (((x693/x694)==x695)<<x696);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x706 = 217567896U;
	static int16_t x707 = -6;
	static uint8_t x708 = 10U;
	static int32_t t28 = -6670881;

	t28 = (((x705/x706)==x707)<<x708);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x733 = UINT32_MAX;
	int32_t x734 = -148;
	static volatile int16_t x735 = INT16_MIN;
	uint64_t x736 = 19LLU;
	volatile int32_t t29 = 3340;

	t29 = (((x733/x734)==x735)<<x736);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x741 = UINT16_MAX;
	static volatile int32_t x742 = -11709;
	int32_t x743 = 5538;
	int16_t x744 = 1;
	int32_t t30 = -253087;

	t30 = (((x741/x742)==x743)<<x744);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x761 = INT32_MIN;
	int16_t x762 = -3224;
	int32_t x763 = 185;
	static int16_t x764 = 1;

	t31 = (((x761/x762)==x763)<<x764);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x789 = INT16_MIN;
	int16_t x790 = INT16_MAX;
	volatile int8_t x791 = -1;
	static uint16_t x792 = 8U;

	t32 = (((x789/x790)==x791)<<x792);

	if (t32 != 256) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x813 = INT8_MIN;
	uint8_t x814 = 3U;
	uint32_t x815 = UINT32_MAX;
	int8_t x816 = 6;
	int32_t t33 = 187;

	t33 = (((x813/x814)==x815)<<x816);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x869 = INT8_MIN;
	static int64_t x870 = INT64_MIN;
	static int8_t x871 = INT8_MIN;
	static uint8_t x872 = 3U;
	int32_t t34 = -91;

	t34 = (((x869/x870)==x871)<<x872);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x878 = INT32_MIN;

	t35 = (((x877/x878)==x879)<<x880);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x913 = UINT16_MAX;
	volatile int64_t x914 = -1LL;
	volatile uint32_t x915 = 2U;
	int8_t x916 = 19;
	volatile int32_t t36 = -1;

	t36 = (((x913/x914)==x915)<<x916);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x943 = INT8_MIN;
	int8_t x944 = 1;
	volatile int32_t t37 = -68081;

	t37 = (((x941/x942)==x943)<<x944);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x945 = 17962U;
	uint16_t x946 = UINT16_MAX;
	volatile uint16_t x947 = 11668U;
	volatile int32_t t38 = 13176956;

	t38 = (((x945/x946)==x947)<<x948);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x989 = -1;
	int16_t x990 = 17;
	uint8_t x992 = 0U;
	int32_t t39 = 0;

	t39 = (((x989/x990)==x991)<<x992);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1022 = INT16_MAX;
	volatile int16_t x1023 = INT16_MIN;
	int32_t t40 = 582959;

	t40 = (((x1021/x1022)==x1023)<<x1024);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1029 = -3;
	volatile int16_t x1030 = -1;
	uint16_t x1031 = 12254U;

	t41 = (((x1029/x1030)==x1031)<<x1032);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1053 = 2;
	int16_t x1054 = -5204;
	int64_t x1055 = -1LL;

	t42 = (((x1053/x1054)==x1055)<<x1056);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1113 = 50U;
	int16_t x1114 = INT16_MAX;
	volatile int32_t x1115 = INT32_MIN;
	uint8_t x1116 = 0U;
	static volatile int32_t t43 = -33;

	t43 = (((x1113/x1114)==x1115)<<x1116);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1117 = -1;
	int8_t x1118 = INT8_MAX;
	uint64_t x1119 = UINT64_MAX;
	static int8_t x1120 = 0;
	static volatile int32_t t44 = -125359154;

	t44 = (((x1117/x1118)==x1119)<<x1120);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1133 = INT32_MIN;
	int32_t x1134 = INT32_MAX;
	int16_t x1135 = INT16_MIN;
	int16_t x1136 = 11;
	static volatile int32_t t45 = 212;

	t45 = (((x1133/x1134)==x1135)<<x1136);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1190 = UINT16_MAX;
	int8_t x1192 = 7;
	int32_t t46 = -268842;

	t46 = (((x1189/x1190)==x1191)<<x1192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1193 = 1787365850U;
	int32_t x1194 = -1345848;
	static int32_t x1195 = INT32_MIN;
	volatile uint8_t x1196 = 1U;
	int32_t t47 = 4015;

	t47 = (((x1193/x1194)==x1195)<<x1196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1214 = 43545LL;
	uint16_t x1216 = 3U;
	volatile int32_t t48 = 1869226;

	t48 = (((x1213/x1214)==x1215)<<x1216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x1222 = -18;
	int8_t x1224 = 5;

	t49 = (((x1221/x1222)==x1223)<<x1224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x1265 = 1;
	uint8_t x1267 = UINT8_MAX;
	int32_t t50 = 52234;

	t50 = (((x1265/x1266)==x1267)<<x1268);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1373 = 29;
	int32_t x1374 = -1;
	int8_t x1375 = -1;
	static uint8_t x1376 = 13U;
	volatile int32_t t51 = -15336133;

	t51 = (((x1373/x1374)==x1375)<<x1376);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x1405 = UINT16_MAX;
	int32_t x1407 = INT32_MAX;
	uint32_t x1408 = 10U;
	volatile int32_t t52 = -5221706;

	t52 = (((x1405/x1406)==x1407)<<x1408);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1433 = INT16_MIN;
	static int32_t t53 = -3;

	t53 = (((x1433/x1434)==x1435)<<x1436);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1489 = UINT64_MAX;
	int8_t x1490 = INT8_MIN;
	uint64_t x1491 = 35795168284538LLU;

	t54 = (((x1489/x1490)==x1491)<<x1492);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1513 = 11U;
	uint64_t x1515 = UINT64_MAX;
	static int16_t x1516 = 0;
	int32_t t55 = 246270;

	t55 = (((x1513/x1514)==x1515)<<x1516);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1629 = -7;
	static int8_t x1630 = INT8_MIN;
	uint8_t x1631 = 60U;
	int8_t x1632 = 7;
	static volatile int32_t t56 = -984;

	t56 = (((x1629/x1630)==x1631)<<x1632);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1693 = INT32_MIN;
	int16_t x1694 = -122;
	volatile uint8_t x1696 = 1U;
	int32_t t57 = -178;

	t57 = (((x1693/x1694)==x1695)<<x1696);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x1697 = UINT32_MAX;
	int16_t x1698 = 4153;
	int16_t x1699 = INT16_MAX;
	int8_t x1700 = 0;
	static int32_t t58 = -53;

	t58 = (((x1697/x1698)==x1699)<<x1700);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1719 = 0U;
	uint16_t x1720 = 1U;
	volatile int32_t t59 = -1;

	t59 = (((x1717/x1718)==x1719)<<x1720);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x1721 = 2320026946534496LLU;
	volatile int64_t x1722 = -2994050239LL;
	static uint32_t x1724 = 14U;
	volatile int32_t t60 = -9139;

	t60 = (((x1721/x1722)==x1723)<<x1724);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1753 = 49U;
	uint64_t x1754 = 15244796LLU;
	int16_t x1755 = INT16_MAX;
	int8_t x1756 = 27;
	volatile int32_t t61 = 25267822;

	t61 = (((x1753/x1754)==x1755)<<x1756);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x1781 = UINT32_MAX;
	uint8_t x1783 = UINT8_MAX;
	int32_t x1784 = 7;
	int32_t t62 = 3;

	t62 = (((x1781/x1782)==x1783)<<x1784);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x1817 = INT8_MAX;
	static int8_t x1818 = INT8_MIN;
	static int8_t x1819 = -1;
	int8_t x1820 = 2;
	volatile int32_t t63 = 1;

	t63 = (((x1817/x1818)==x1819)<<x1820);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1873 = INT32_MAX;
	uint8_t x1874 = 2U;
	int16_t x1875 = INT16_MIN;
	int32_t x1876 = 23;
	static int32_t t64 = -872;

	t64 = (((x1873/x1874)==x1875)<<x1876);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1913 = 4;
	int64_t x1914 = INT64_MAX;
	uint64_t x1915 = 4994780783937604149LLU;
	int32_t t65 = 151053;

	t65 = (((x1913/x1914)==x1915)<<x1916);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x1941 = UINT16_MAX;
	int8_t x1942 = INT8_MAX;
	static uint16_t x1944 = 0U;
	static volatile int32_t t66 = 21;

	t66 = (((x1941/x1942)==x1943)<<x1944);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2117 = 1U;
	uint8_t x2118 = 6U;
	uint64_t x2119 = 70118069807836LLU;
	static uint16_t x2120 = 1U;
	int32_t t67 = 118676728;

	t67 = (((x2117/x2118)==x2119)<<x2120);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x2161 = UINT8_MAX;
	volatile int64_t x2162 = 49827LL;
	volatile int32_t t68 = 91;

	t68 = (((x2161/x2162)==x2163)<<x2164);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2173 = -1LL;
	volatile uint32_t x2174 = 218079U;
	int64_t x2175 = 1LL;

	t69 = (((x2173/x2174)==x2175)<<x2176);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2185 = INT32_MIN;
	int8_t x2186 = INT8_MIN;
	uint32_t x2187 = UINT32_MAX;
	static uint8_t x2188 = 2U;
	static int32_t t70 = 21836024;

	t70 = (((x2185/x2186)==x2187)<<x2188);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2189 = -6199;
	uint32_t x2190 = 639029U;
	int16_t x2191 = 0;
	int8_t x2192 = 0;

	t71 = (((x2189/x2190)==x2191)<<x2192);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2197 = 1;
	static int16_t x2198 = -1;
	static uint32_t x2199 = UINT32_MAX;
	int8_t x2200 = 7;
	volatile int32_t t72 = -298634;

	t72 = (((x2197/x2198)==x2199)<<x2200);

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x2201 = INT16_MAX;
	volatile int32_t x2202 = INT32_MAX;
	int16_t x2203 = 4062;
	static uint8_t x2204 = 1U;

	t73 = (((x2201/x2202)==x2203)<<x2204);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2217 = -1;
	int32_t x2218 = INT32_MIN;
	static int8_t x2219 = INT8_MAX;
	static uint8_t x2220 = 1U;
	static volatile int32_t t74 = 1990;

	t74 = (((x2217/x2218)==x2219)<<x2220);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2225 = UINT16_MAX;
	static volatile int64_t x2227 = INT64_MIN;
	static int64_t x2228 = 17LL;
	int32_t t75 = -27;

	t75 = (((x2225/x2226)==x2227)<<x2228);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2249 = INT16_MIN;
	int32_t x2250 = INT32_MIN;
	static volatile uint32_t x2251 = 25007U;
	uint8_t x2252 = 2U;
	static volatile int32_t t76 = -170302356;

	t76 = (((x2249/x2250)==x2251)<<x2252);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x2269 = 2U;
	int16_t x2270 = INT16_MIN;
	uint8_t x2272 = 2U;
	volatile int32_t t77 = -495458798;

	t77 = (((x2269/x2270)==x2271)<<x2272);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2305 = INT64_MIN;
	volatile int16_t x2306 = 44;
	volatile int32_t x2307 = INT32_MIN;
	static uint16_t x2308 = 0U;
	int32_t t78 = -11;

	t78 = (((x2305/x2306)==x2307)<<x2308);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2318 = -1;
	uint32_t x2319 = UINT32_MAX;
	int8_t x2320 = 0;
	volatile int32_t t79 = 26902188;

	t79 = (((x2317/x2318)==x2319)<<x2320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2385 = 1;
	int8_t x2386 = INT8_MIN;
	static uint16_t x2387 = 425U;
	int32_t t80 = 24293105;

	t80 = (((x2385/x2386)==x2387)<<x2388);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2481 = UINT64_MAX;
	volatile int16_t x2482 = -10;
	int8_t x2483 = -1;
	int8_t x2484 = 5;
	volatile int32_t t81 = 422590;

	t81 = (((x2481/x2482)==x2483)<<x2484);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2521 = UINT64_MAX;
	uint8_t x2522 = UINT8_MAX;
	int32_t x2524 = 2;

	t82 = (((x2521/x2522)==x2523)<<x2524);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x2569 = 125U;
	int64_t x2571 = INT64_MAX;
	int32_t t83 = 846;

	t83 = (((x2569/x2570)==x2571)<<x2572);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2581 = -17684331205619396LL;
	int32_t x2582 = -78;
	volatile int8_t x2583 = -1;
	int8_t x2584 = 2;
	int32_t t84 = -545714611;

	t84 = (((x2581/x2582)==x2583)<<x2584);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2685 = UINT8_MAX;
	static volatile uint8_t x2686 = 61U;
	static int32_t t85 = -1;

	t85 = (((x2685/x2686)==x2687)<<x2688);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2705 = 66375185U;
	uint64_t x2707 = 1866751631142802892LLU;
	int8_t x2708 = 1;
	volatile int32_t t86 = 747;

	t86 = (((x2705/x2706)==x2707)<<x2708);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x2709 = 8;
	static volatile int32_t x2710 = INT32_MIN;
	int16_t x2711 = -1;
	uint8_t x2712 = 0U;
	static int32_t t87 = -4;

	t87 = (((x2709/x2710)==x2711)<<x2712);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2713 = INT16_MAX;
	int32_t x2714 = INT32_MIN;
	int16_t x2715 = -1;
	int8_t x2716 = 1;
	static int32_t t88 = -10835;

	t88 = (((x2713/x2714)==x2715)<<x2716);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2825 = -1;
	int64_t x2826 = INT64_MIN;
	int64_t x2827 = 883311420479406LL;
	uint16_t x2828 = 10U;
	volatile int32_t t89 = 0;

	t89 = (((x2825/x2826)==x2827)<<x2828);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2919 = INT32_MAX;
	volatile int32_t t90 = 91981;

	t90 = (((x2917/x2918)==x2919)<<x2920);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2921 = 72LL;
	int32_t x2922 = INT32_MIN;
	volatile uint8_t x2923 = UINT8_MAX;
	int8_t x2924 = 4;
	int32_t t91 = -1027986560;

	t91 = (((x2921/x2922)==x2923)<<x2924);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2981 = 1;
	int8_t x2982 = INT8_MAX;
	uint32_t x2983 = 1456886588U;
	uint64_t x2984 = 0LLU;
	volatile int32_t t92 = -109930;

	t92 = (((x2981/x2982)==x2983)<<x2984);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x2985 = 9079U;
	uint16_t x2986 = 17067U;
	static volatile int16_t x2987 = INT16_MAX;
	static uint8_t x2988 = 12U;

	t93 = (((x2985/x2986)==x2987)<<x2988);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x2989 = 2011948LLU;
	int8_t x2990 = INT8_MIN;
	static uint32_t x2991 = 26666307U;
	uint16_t x2992 = 0U;
	int32_t t94 = 234154;

	t94 = (((x2989/x2990)==x2991)<<x2992);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x2993 = 583U;
	uint16_t x2995 = 234U;
	volatile int8_t x2996 = 1;
	int32_t t95 = 73055;

	t95 = (((x2993/x2994)==x2995)<<x2996);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x3021 = UINT16_MAX;
	uint64_t x3022 = 3116LLU;
	int16_t x3023 = INT16_MIN;
	static volatile int32_t t96 = 28584359;

	t96 = (((x3021/x3022)==x3023)<<x3024);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x3085 = UINT64_MAX;
	int8_t x3086 = -1;
	int16_t x3087 = INT16_MAX;
	uint16_t x3088 = 19U;
	int32_t t97 = 62;

	t97 = (((x3085/x3086)==x3087)<<x3088);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3193 = INT8_MIN;
	uint16_t x3195 = 194U;
	static volatile uint8_t x3196 = 11U;

	t98 = (((x3193/x3194)==x3195)<<x3196);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3213 = 1396249;
	int64_t x3214 = 1845669522LL;
	uint8_t x3215 = 125U;
	static uint64_t x3216 = 0LLU;
	static volatile int32_t t99 = -791550;

	t99 = (((x3213/x3214)==x3215)<<x3216);

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

