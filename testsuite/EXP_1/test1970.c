#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x38 = 2U;
static int8_t x184 = 22;
uint8_t x225 = UINT8_MAX;
volatile int8_t x231 = -26;
int32_t x386 = -701183;
uint8_t x388 = 8U;
volatile int64_t x435 = INT64_MAX;
int32_t x436 = 1;
int16_t x469 = INT16_MIN;
int32_t x473 = INT32_MIN;
int64_t x475 = INT64_MAX;
volatile int32_t t14 = -576766;
int8_t x497 = INT8_MAX;
int32_t x514 = -1;
int16_t x515 = INT16_MIN;
volatile int32_t t17 = 74287151;
static int32_t x517 = -1;
static int32_t t18 = -336;
volatile int8_t x527 = INT8_MAX;
uint8_t x528 = 1U;
volatile int32_t t19 = -34768;
uint32_t x555 = 1211087156U;
static int8_t x572 = 1;
int32_t t22 = 193053;
uint16_t x589 = UINT16_MAX;
uint8_t x590 = 0U;
static volatile int32_t t26 = 375004;
static int16_t x650 = INT16_MAX;
uint8_t x652 = 0U;
int64_t x653 = -1LL;
int8_t x656 = 1;
int8_t x657 = INT8_MIN;
int32_t x659 = -1;
volatile int32_t t30 = -2;
int32_t t32 = -11;
int8_t x741 = 1;
int8_t x742 = INT8_MIN;
volatile int32_t t33 = 4092;
uint8_t x815 = 75U;
static volatile int16_t x824 = 22;
int16_t x843 = -1;
volatile int16_t x913 = INT16_MIN;
volatile int32_t t37 = 735831;
int32_t x934 = -1;
uint64_t x935 = 55466526155LLU;
static int32_t t40 = -161992071;
int32_t x969 = 3603;
int16_t x1059 = -1;
int64_t x1066 = INT64_MIN;
volatile int64_t x1079 = -1LL;
volatile uint32_t x1114 = UINT32_MAX;
int8_t x1116 = 12;
int16_t x1285 = -14397;
uint8_t x1288 = 2U;
volatile int64_t x1493 = 1650872598427LL;
int8_t x1504 = 0;
static volatile int32_t t58 = -1951;
volatile uint8_t x1542 = 0U;
static volatile uint8_t x1544 = 7U;
int32_t x1585 = INT32_MIN;
volatile int64_t x1671 = INT64_MIN;
uint16_t x1679 = 1U;
uint64_t x1714 = 442873383480104LLU;
int8_t x1737 = INT8_MAX;
int8_t x1740 = 0;
volatile int16_t x1757 = -60;
int16_t x1758 = -1;
volatile uint16_t x1760 = 1U;
int8_t x1783 = 32;
uint64_t x1791 = 143493008LLU;
volatile int16_t x1815 = INT16_MIN;
int16_t x1829 = -1;
int8_t x1832 = 0;
int32_t t71 = 14758;
int8_t x1882 = INT8_MIN;
uint8_t x1892 = 22U;
int8_t x1909 = 0;
uint16_t x1940 = 0U;
static uint8_t x2072 = 22U;
volatile int32_t x2205 = INT32_MIN;
int8_t x2230 = INT8_MIN;
volatile int16_t x2262 = INT16_MAX;
int8_t x2289 = INT8_MIN;
uint8_t x2417 = 30U;
volatile int8_t x2455 = -1;
uint8_t x2456 = 19U;
volatile int32_t x2543 = INT32_MIN;
uint32_t x2566 = UINT32_MAX;
int8_t x2567 = INT8_MIN;
volatile int32_t t88 = -2339956;
volatile int32_t t91 = -3192;
uint8_t x2668 = 1U;
int64_t x2707 = INT64_MIN;
static volatile int32_t t94 = -281173039;
int32_t t96 = 122;
int64_t x2851 = INT64_MIN;
uint32_t x2864 = 0U;


void f0(void) {
	int64_t x37 = INT64_MAX;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = 20LLU;
	int32_t t0 = -99126744;

	t0 = (((x37|x38)<x39)>>x40);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x53 = INT64_MAX;
	int64_t x54 = -1LL;
	int16_t x55 = INT16_MIN;
	uint8_t x56 = 6U;
	static volatile int32_t t1 = -401701511;

	t1 = (((x53|x54)<x55)>>x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MAX;
	uint8_t x83 = UINT8_MAX;
	static uint16_t x84 = 4U;
	static int32_t t2 = 7361115;

	t2 = (((x81|x82)<x83)>>x84);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x181 = INT32_MIN;
	int64_t x182 = 3505482519086675575LL;
	int8_t x183 = -1;
	int32_t t3 = 7134476;

	t3 = (((x181|x182)<x183)>>x184);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x197 = INT16_MIN;
	volatile uint16_t x198 = 15292U;
	uint8_t x199 = 11U;
	uint16_t x200 = 0U;
	int32_t t4 = 3115760;

	t4 = (((x197|x198)<x199)>>x200);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x226 = -364;
	int32_t x227 = INT32_MAX;
	int32_t x228 = 0;
	volatile int32_t t5 = 387;

	t5 = (((x225|x226)<x227)>>x228);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MAX;
	int8_t x232 = 1;
	volatile int32_t t6 = 11;

	t6 = (((x229|x230)<x231)>>x232);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x237 = INT32_MAX;
	static int8_t x238 = INT8_MIN;
	int8_t x239 = -9;
	int16_t x240 = 29;
	volatile int32_t t7 = 176809;

	t7 = (((x237|x238)<x239)>>x240);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	static uint32_t x300 = 15U;
	volatile int32_t t8 = -1;

	t8 = (((x297|x298)<x299)>>x300);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x385 = -1;
	int32_t x387 = -1;
	int32_t t9 = 183;

	t9 = (((x385|x386)<x387)>>x388);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x433 = 4;
	int32_t x434 = 57143;
	volatile int32_t t10 = -118;

	t10 = (((x433|x434)<x435)>>x436);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x449 = 740266LLU;
	int32_t x450 = INT32_MIN;
	uint64_t x451 = 8950823920851646LLU;
	int8_t x452 = 0;
	volatile int32_t t11 = -110994661;

	t11 = (((x449|x450)<x451)>>x452);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x457 = 111022625183272954LL;
	int64_t x458 = -27869LL;
	int16_t x459 = -362;
	uint16_t x460 = 1U;
	static int32_t t12 = -1905;

	t12 = (((x457|x458)<x459)>>x460);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x470 = UINT16_MAX;
	static uint8_t x471 = 2U;
	static int8_t x472 = 0;
	int32_t t13 = 1161;

	t13 = (((x469|x470)<x471)>>x472);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x474 = INT64_MAX;
	volatile uint64_t x476 = 28LLU;

	t14 = (((x473|x474)<x475)>>x476);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x481 = UINT64_MAX;
	int32_t x482 = -1;
	uint16_t x483 = 9683U;
	uint16_t x484 = 1U;
	int32_t t15 = -36;

	t15 = (((x481|x482)<x483)>>x484);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x498 = 4U;
	static int8_t x499 = -1;
	static int8_t x500 = 0;
	int32_t t16 = -522107;

	t16 = (((x497|x498)<x499)>>x500);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x513 = UINT16_MAX;
	uint8_t x516 = 0U;

	t17 = (((x513|x514)<x515)>>x516);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x518 = 3298U;
	int32_t x519 = -1;
	static int16_t x520 = 11;

	t18 = (((x517|x518)<x519)>>x520);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x525 = INT16_MIN;
	int64_t x526 = INT64_MIN;

	t19 = (((x525|x526)<x527)>>x528);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x553 = -513543234438LL;
	static int8_t x554 = INT8_MIN;
	uint32_t x556 = 4U;
	volatile int32_t t20 = 277036502;

	t20 = (((x553|x554)<x555)>>x556);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x569 = INT64_MIN;
	uint32_t x570 = 86U;
	int32_t x571 = -1;
	static volatile int32_t t21 = -412;

	t21 = (((x569|x570)<x571)>>x572);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x573 = 160905632U;
	static volatile int8_t x574 = -1;
	int32_t x575 = 15201207;
	uint16_t x576 = 0U;

	t22 = (((x573|x574)<x575)>>x576);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x577 = -1;
	int16_t x578 = -1;
	uint8_t x579 = 4U;
	uint8_t x580 = 6U;
	int32_t t23 = -2907;

	t23 = (((x577|x578)<x579)>>x580);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x585 = 43U;
	int32_t x586 = INT32_MAX;
	int64_t x587 = 31654LL;
	uint8_t x588 = 3U;
	volatile int32_t t24 = -5471;

	t24 = (((x585|x586)<x587)>>x588);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x591 = INT64_MIN;
	int16_t x592 = 0;
	volatile int32_t t25 = -7732262;

	t25 = (((x589|x590)<x591)>>x592);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x621 = -1;
	int64_t x622 = INT64_MAX;
	int16_t x623 = INT16_MIN;
	int64_t x624 = 0LL;

	t26 = (((x621|x622)<x623)>>x624);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x649 = INT32_MAX;
	uint8_t x651 = 1U;
	int32_t t27 = -3804;

	t27 = (((x649|x650)<x651)>>x652);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x654 = INT8_MIN;
	int32_t x655 = -1;
	static volatile int32_t t28 = 671;

	t28 = (((x653|x654)<x655)>>x656);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x658 = INT8_MAX;
	int8_t x660 = 4;
	static volatile int32_t t29 = -164;

	t29 = (((x657|x658)<x659)>>x660);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x709 = 53U;
	volatile int64_t x710 = INT64_MIN;
	int64_t x711 = -11882749183LL;
	int8_t x712 = 1;

	t30 = (((x709|x710)<x711)>>x712);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x717 = INT8_MAX;
	static int16_t x718 = INT16_MAX;
	int16_t x719 = -19;
	uint8_t x720 = 1U;
	volatile int32_t t31 = 24769;

	t31 = (((x717|x718)<x719)>>x720);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x721 = INT8_MIN;
	int64_t x722 = 198LL;
	int8_t x723 = 26;
	uint16_t x724 = 0U;

	t32 = (((x721|x722)<x723)>>x724);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x743 = UINT16_MAX;
	static uint8_t x744 = 1U;

	t33 = (((x741|x742)<x743)>>x744);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x813 = INT32_MAX;
	volatile int16_t x814 = INT16_MIN;
	int16_t x816 = 10;
	volatile int32_t t34 = 7;

	t34 = (((x813|x814)<x815)>>x816);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x821 = INT16_MIN;
	int8_t x822 = 25;
	uint64_t x823 = 203075252LLU;
	int32_t t35 = 487;

	t35 = (((x821|x822)<x823)>>x824);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x841 = -1LL;
	static volatile uint8_t x842 = 4U;
	uint8_t x844 = 25U;
	int32_t t36 = -635219;

	t36 = (((x841|x842)<x843)>>x844);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x914 = -1;
	int64_t x915 = INT64_MAX;
	int16_t x916 = 1;

	t37 = (((x913|x914)<x915)>>x916);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x933 = 0;
	uint16_t x936 = 4U;
	int32_t t38 = -54186;

	t38 = (((x933|x934)<x935)>>x936);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x953 = -54612;
	uint8_t x954 = UINT8_MAX;
	uint32_t x955 = 13466U;
	uint8_t x956 = 0U;
	int32_t t39 = 0;

	t39 = (((x953|x954)<x955)>>x956);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x961 = UINT16_MAX;
	volatile int8_t x962 = INT8_MAX;
	static uint32_t x963 = UINT32_MAX;
	uint64_t x964 = 20LLU;

	t40 = (((x961|x962)<x963)>>x964);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x970 = 1734U;
	volatile int32_t x971 = INT32_MAX;
	uint8_t x972 = 3U;
	static int32_t t41 = 22;

	t41 = (((x969|x970)<x971)>>x972);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x981 = 2U;
	uint32_t x982 = UINT32_MAX;
	volatile uint64_t x983 = UINT64_MAX;
	static int8_t x984 = 1;
	volatile int32_t t42 = 6103;

	t42 = (((x981|x982)<x983)>>x984);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1009 = INT64_MIN;
	int16_t x1010 = INT16_MAX;
	uint16_t x1011 = 127U;
	int16_t x1012 = 1;
	volatile int32_t t43 = -15693530;

	t43 = (((x1009|x1010)<x1011)>>x1012);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1057 = -1LL;
	uint32_t x1058 = UINT32_MAX;
	volatile int8_t x1060 = 0;
	int32_t t44 = 3;

	t44 = (((x1057|x1058)<x1059)>>x1060);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1065 = 1;
	static uint8_t x1067 = 12U;
	static int8_t x1068 = 4;
	int32_t t45 = 2118103;

	t45 = (((x1065|x1066)<x1067)>>x1068);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1077 = INT16_MAX;
	uint32_t x1078 = 40U;
	uint32_t x1080 = 0U;
	static volatile int32_t t46 = 3903361;

	t46 = (((x1077|x1078)<x1079)>>x1080);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1113 = 990U;
	int32_t x1115 = INT32_MAX;
	int32_t t47 = 3;

	t47 = (((x1113|x1114)<x1115)>>x1116);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x1129 = -1;
	static int32_t x1130 = -484663118;
	int16_t x1131 = -1;
	uint8_t x1132 = 1U;
	volatile int32_t t48 = 283013;

	t48 = (((x1129|x1130)<x1131)>>x1132);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1221 = 17788561;
	uint32_t x1222 = UINT32_MAX;
	uint16_t x1223 = UINT16_MAX;
	int8_t x1224 = 0;
	volatile int32_t t49 = 8844616;

	t49 = (((x1221|x1222)<x1223)>>x1224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1233 = INT64_MIN;
	volatile int16_t x1234 = -7563;
	uint32_t x1235 = 979350U;
	int16_t x1236 = 13;
	int32_t t50 = 459095;

	t50 = (((x1233|x1234)<x1235)>>x1236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1286 = -1;
	static uint16_t x1287 = 1U;
	int32_t t51 = 83176;

	t51 = (((x1285|x1286)<x1287)>>x1288);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1289 = INT16_MIN;
	static int16_t x1290 = -1;
	uint64_t x1291 = UINT64_MAX;
	static uint8_t x1292 = 4U;
	volatile int32_t t52 = 205;

	t52 = (((x1289|x1290)<x1291)>>x1292);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1445 = -1;
	uint64_t x1446 = UINT64_MAX;
	uint64_t x1447 = UINT64_MAX;
	uint8_t x1448 = 3U;
	volatile int32_t t53 = -387221541;

	t53 = (((x1445|x1446)<x1447)>>x1448);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x1473 = INT32_MIN;
	int16_t x1474 = 7742;
	static uint16_t x1475 = UINT16_MAX;
	static uint64_t x1476 = 17LLU;
	volatile int32_t t54 = -7681458;

	t54 = (((x1473|x1474)<x1475)>>x1476);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x1481 = INT16_MAX;
	uint8_t x1482 = UINT8_MAX;
	static uint32_t x1483 = UINT32_MAX;
	static int8_t x1484 = 0;
	static int32_t t55 = 240776;

	t55 = (((x1481|x1482)<x1483)>>x1484);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1494 = -1LL;
	int64_t x1495 = INT64_MIN;
	static volatile uint8_t x1496 = 2U;
	static volatile int32_t t56 = -11053167;

	t56 = (((x1493|x1494)<x1495)>>x1496);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1501 = INT8_MAX;
	uint16_t x1502 = 257U;
	int8_t x1503 = INT8_MIN;
	volatile int32_t t57 = 2;

	t57 = (((x1501|x1502)<x1503)>>x1504);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1521 = -1;
	static uint16_t x1522 = 11072U;
	int8_t x1523 = INT8_MIN;
	volatile uint16_t x1524 = 1U;

	t58 = (((x1521|x1522)<x1523)>>x1524);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1541 = INT16_MIN;
	int64_t x1543 = INT64_MAX;
	static int32_t t59 = 3752875;

	t59 = (((x1541|x1542)<x1543)>>x1544);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1581 = -1LL;
	volatile int64_t x1582 = -1LL;
	int32_t x1583 = -1;
	static uint8_t x1584 = 4U;
	volatile int32_t t60 = -12;

	t60 = (((x1581|x1582)<x1583)>>x1584);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1586 = UINT16_MAX;
	int16_t x1587 = -1;
	volatile uint8_t x1588 = 11U;
	static volatile int32_t t61 = 17;

	t61 = (((x1585|x1586)<x1587)>>x1588);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x1601 = INT64_MAX;
	uint32_t x1602 = 669613204U;
	int64_t x1603 = INT64_MIN;
	uint8_t x1604 = 25U;
	static int32_t t62 = -198866;

	t62 = (((x1601|x1602)<x1603)>>x1604);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1669 = INT16_MAX;
	int64_t x1670 = -1LL;
	uint8_t x1672 = 1U;
	volatile int32_t t63 = -325136;

	t63 = (((x1669|x1670)<x1671)>>x1672);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1677 = -113199553LL;
	int32_t x1678 = 911;
	uint16_t x1680 = 1U;
	int32_t t64 = -617914;

	t64 = (((x1677|x1678)<x1679)>>x1680);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1713 = 58U;
	volatile int16_t x1715 = INT16_MAX;
	uint8_t x1716 = 5U;
	volatile int32_t t65 = 614;

	t65 = (((x1713|x1714)<x1715)>>x1716);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1738 = 27U;
	static uint8_t x1739 = UINT8_MAX;
	volatile int32_t t66 = -1765;

	t66 = (((x1737|x1738)<x1739)>>x1740);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1759 = INT16_MIN;
	int32_t t67 = 5625173;

	t67 = (((x1757|x1758)<x1759)>>x1760);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1781 = 416375915296612LL;
	int64_t x1782 = INT64_MIN;
	volatile int16_t x1784 = 3;
	static int32_t t68 = -1386456;

	t68 = (((x1781|x1782)<x1783)>>x1784);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1789 = INT32_MIN;
	int64_t x1790 = -14671902153LL;
	int16_t x1792 = 15;
	static volatile int32_t t69 = -1008;

	t69 = (((x1789|x1790)<x1791)>>x1792);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x1813 = 228;
	int8_t x1814 = INT8_MIN;
	uint16_t x1816 = 3U;
	static volatile int32_t t70 = -352;

	t70 = (((x1813|x1814)<x1815)>>x1816);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x1830 = INT64_MIN;
	uint16_t x1831 = UINT16_MAX;

	t71 = (((x1829|x1830)<x1831)>>x1832);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x1861 = INT64_MAX;
	volatile int64_t x1862 = INT64_MIN;
	int32_t x1863 = INT32_MIN;
	int8_t x1864 = 1;
	static int32_t t72 = 1055677339;

	t72 = (((x1861|x1862)<x1863)>>x1864);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1881 = INT16_MIN;
	int32_t x1883 = INT32_MIN;
	int32_t x1884 = 0;
	int32_t t73 = 37;

	t73 = (((x1881|x1882)<x1883)>>x1884);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x1889 = 3U;
	uint8_t x1890 = 14U;
	volatile int64_t x1891 = -1LL;
	static int32_t t74 = -16067073;

	t74 = (((x1889|x1890)<x1891)>>x1892);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1910 = 0U;
	static int8_t x1911 = -1;
	uint8_t x1912 = 2U;
	volatile int32_t t75 = -16264;

	t75 = (((x1909|x1910)<x1911)>>x1912);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x1937 = INT64_MAX;
	int16_t x1938 = -1;
	int16_t x1939 = 3;
	int32_t t76 = -278404;

	t76 = (((x1937|x1938)<x1939)>>x1940);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x1997 = -1;
	volatile int64_t x1998 = INT64_MIN;
	uint64_t x1999 = 3LLU;
	int8_t x2000 = 6;
	static int32_t t77 = 8;

	t77 = (((x1997|x1998)<x1999)>>x2000);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2069 = -1;
	int64_t x2070 = INT64_MAX;
	static uint32_t x2071 = UINT32_MAX;
	int32_t t78 = -20;

	t78 = (((x2069|x2070)<x2071)>>x2072);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2206 = UINT64_MAX;
	int16_t x2207 = INT16_MIN;
	volatile uint8_t x2208 = 0U;
	int32_t t79 = 66;

	t79 = (((x2205|x2206)<x2207)>>x2208);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2229 = INT64_MIN;
	uint16_t x2231 = 44U;
	volatile uint8_t x2232 = 23U;
	int32_t t80 = -42;

	t80 = (((x2229|x2230)<x2231)>>x2232);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2261 = INT64_MAX;
	uint32_t x2263 = 31149U;
	uint16_t x2264 = 0U;
	int32_t t81 = -53;

	t81 = (((x2261|x2262)<x2263)>>x2264);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x2290 = 142U;
	static volatile uint8_t x2291 = UINT8_MAX;
	volatile int8_t x2292 = 0;
	int32_t t82 = 62420937;

	t82 = (((x2289|x2290)<x2291)>>x2292);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x2325 = INT64_MAX;
	uint16_t x2326 = UINT16_MAX;
	int16_t x2327 = INT16_MIN;
	volatile uint16_t x2328 = 0U;
	static volatile int32_t t83 = -17992;

	t83 = (((x2325|x2326)<x2327)>>x2328);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x2418 = 50291110222823874LLU;
	int64_t x2419 = -1LL;
	uint8_t x2420 = 11U;
	volatile int32_t t84 = -16135;

	t84 = (((x2417|x2418)<x2419)>>x2420);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2433 = 2;
	int16_t x2434 = INT16_MAX;
	static int32_t x2435 = -1;
	uint16_t x2436 = 1U;
	int32_t t85 = 20304;

	t85 = (((x2433|x2434)<x2435)>>x2436);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x2453 = 880;
	int8_t x2454 = -1;
	int32_t t86 = 20034;

	t86 = (((x2453|x2454)<x2455)>>x2456);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x2541 = -1LL;
	int32_t x2542 = INT32_MAX;
	uint8_t x2544 = 4U;
	int32_t t87 = 110236658;

	t87 = (((x2541|x2542)<x2543)>>x2544);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x2565 = -1;
	int8_t x2568 = 5;

	t88 = (((x2565|x2566)<x2567)>>x2568);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2581 = INT8_MIN;
	int16_t x2582 = -1;
	uint8_t x2583 = 1U;
	uint8_t x2584 = 8U;
	volatile int32_t t89 = -1774987;

	t89 = (((x2581|x2582)<x2583)>>x2584);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x2593 = -16437912;
	int16_t x2594 = -1;
	int32_t x2595 = INT32_MAX;
	int8_t x2596 = 13;
	static volatile int32_t t90 = 12291;

	t90 = (((x2593|x2594)<x2595)>>x2596);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2617 = INT64_MAX;
	int32_t x2618 = -67755115;
	int64_t x2619 = -23814900LL;
	static uint8_t x2620 = 3U;

	t91 = (((x2617|x2618)<x2619)>>x2620);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2641 = INT16_MIN;
	uint64_t x2642 = 1219605552LLU;
	uint16_t x2643 = 37U;
	uint64_t x2644 = 8LLU;
	volatile int32_t t92 = 19;

	t92 = (((x2641|x2642)<x2643)>>x2644);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2665 = UINT64_MAX;
	int16_t x2666 = -235;
	static int32_t x2667 = INT32_MIN;
	int32_t t93 = -818967;

	t93 = (((x2665|x2666)<x2667)>>x2668);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2705 = 180397U;
	volatile int64_t x2706 = INT64_MIN;
	int32_t x2708 = 1;

	t94 = (((x2705|x2706)<x2707)>>x2708);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x2749 = 7415;
	int8_t x2750 = INT8_MIN;
	volatile uint8_t x2751 = 110U;
	volatile int16_t x2752 = 1;
	volatile int32_t t95 = 0;

	t95 = (((x2749|x2750)<x2751)>>x2752);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2765 = 63U;
	int32_t x2766 = INT32_MAX;
	int64_t x2767 = 0LL;
	uint8_t x2768 = 0U;

	t96 = (((x2765|x2766)<x2767)>>x2768);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x2845 = -4175656029491LL;
	int8_t x2846 = INT8_MIN;
	volatile int8_t x2847 = -26;
	int16_t x2848 = 0;
	static int32_t t97 = -740965;

	t97 = (((x2845|x2846)<x2847)>>x2848);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2849 = -1;
	static int16_t x2850 = INT16_MAX;
	static int32_t x2852 = 1;
	int32_t t98 = 3344;

	t98 = (((x2849|x2850)<x2851)>>x2852);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2861 = INT8_MIN;
	static uint16_t x2862 = 120U;
	uint16_t x2863 = UINT16_MAX;
	volatile int32_t t99 = -28342;

	t99 = (((x2861|x2862)<x2863)>>x2864);

	if (t99 != 1) { NG(); } else { ; }
	
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

