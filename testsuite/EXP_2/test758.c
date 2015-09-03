#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x25 = INT16_MAX;
int16_t x27 = INT16_MAX;
int64_t x29 = 288LL;
uint32_t x57 = 9533893U;
uint8_t x60 = UINT8_MAX;
uint32_t t2 = 245U;
int16_t x65 = 9;
volatile uint8_t x67 = 1U;
int32_t x76 = -8081656;
uint8_t x145 = 5U;
uint32_t x146 = UINT32_MAX;
int32_t x163 = -1;
uint64_t t9 = 14180167359237LLU;
int8_t x201 = 42;
static int32_t x202 = INT32_MIN;
int8_t x220 = -9;
volatile uint64_t t11 = 4533616494686630886LLU;
int64_t x236 = INT64_MIN;
static uint64_t x298 = 0LLU;
int32_t t15 = 5;
int8_t x320 = INT8_MIN;
static int64_t t17 = -8113746389018LL;
uint8_t x366 = UINT8_MAX;
uint16_t x390 = 0U;
int32_t x399 = 1;
volatile int8_t x415 = INT8_MIN;
static int64_t x418 = INT64_MIN;
volatile int16_t x419 = INT16_MIN;
volatile uint64_t x428 = 24LLU;
int8_t x463 = INT8_MIN;
int16_t x466 = -1;
uint64_t x472 = UINT64_MAX;
int64_t t28 = 40504673LL;
uint8_t x521 = 26U;
static uint64_t x522 = 1LLU;
int16_t x556 = INT16_MIN;
int32_t x560 = INT32_MIN;
volatile uint16_t x645 = 14112U;
uint32_t x650 = UINT32_MAX;
volatile int32_t t34 = -674815;
static int64_t x701 = 1LL;
int64_t t35 = -114558127293388262LL;
static uint64_t x709 = 226895300673469LLU;
int32_t x710 = 7634989;
volatile uint8_t x711 = 20U;
int32_t x723 = -1;
int64_t x748 = INT64_MIN;
int32_t t40 = -46;
int64_t x782 = INT64_MIN;
static int32_t x803 = -1;
int32_t x804 = 445579;
uint32_t t43 = 25268826U;
int64_t x903 = -143848674232150LL;
int32_t x908 = -1;
static uint64_t t47 = 14607LLU;
static volatile uint32_t t48 = 392U;
int8_t x915 = -1;
static int16_t x917 = INT16_MAX;
static uint32_t x926 = UINT32_MAX;
int32_t x935 = -1;
volatile uint64_t t53 = 0LLU;
static volatile int32_t x967 = -1;
int16_t x987 = INT16_MIN;
uint8_t x1005 = UINT8_MAX;
int16_t x1006 = INT16_MIN;
int32_t t56 = -33;
static int32_t x1066 = INT32_MAX;
int64_t x1106 = INT64_MIN;
int64_t x1133 = INT64_MAX;
int16_t x1136 = -209;
uint8_t x1146 = 0U;
volatile int32_t t60 = -36370166;
int64_t x1159 = 24LL;
static uint16_t x1188 = UINT16_MAX;
volatile uint32_t t63 = 408379U;
uint64_t t64 = 503855292196LLU;
uint8_t x1214 = 109U;
uint32_t x1218 = UINT32_MAX;
static volatile uint16_t x1224 = UINT16_MAX;
uint64_t x1241 = 6392680127868LLU;
int32_t x1243 = -1;
volatile int16_t x1244 = -1;
static volatile uint64_t t68 = 17298163LLU;
static uint32_t x1269 = 0U;
uint32_t t69 = 21241U;
volatile int32_t t70 = 1;
int8_t x1315 = INT8_MAX;
int16_t x1361 = INT16_MAX;
volatile uint8_t x1418 = 1U;
uint8_t x1445 = 7U;
int32_t t79 = 423829230;
volatile uint32_t x1469 = 924U;
static int16_t x1477 = 0;
int16_t x1479 = -1;
int32_t t84 = 1381;
static int32_t x1548 = -17275;
volatile uint64_t x1577 = 2LLU;
int16_t x1579 = -1;
int32_t x1580 = -1;
volatile uint64_t t86 = 429703682784539322LLU;
volatile int64_t x1644 = INT64_MIN;
static int64_t t88 = 29267666885LL;
int8_t x1672 = INT8_MAX;
int8_t x1677 = 8;
static int32_t x1691 = -1;
int8_t x1703 = INT8_MAX;
volatile uint32_t t97 = 7989577U;
uint8_t x1791 = UINT8_MAX;
uint64_t t99 = 94LLU;


void f0(void) {
	int8_t x26 = 3;
	uint64_t x28 = 6316649829107103LLU;
	static uint64_t t0 = 277107316991642LLU;

	t0 = ((x25>>(x26%x27))/x28);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x30 = 47;
	static int64_t x31 = INT64_MIN;
	static uint32_t x32 = 6119U;
	volatile int64_t t1 = 408280133700075524LL;

	t1 = ((x29>>(x30%x31))/x32);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x58 = -142;
	volatile int32_t x59 = -1;

	t2 = ((x57>>(x58%x59))/x60);

	if (t2 != 37387U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x61 = 3LL;
	int8_t x62 = 41;
	uint8_t x63 = 115U;
	int16_t x64 = -1;
	static volatile int64_t t3 = -115LL;

	t3 = ((x61>>(x62%x63))/x64);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x66 = 3U;
	static int16_t x68 = 16322;
	int32_t t4 = 705961354;

	t4 = ((x65>>(x66%x67))/x68);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x73 = 8;
	volatile int16_t x74 = -432;
	static volatile int16_t x75 = -1;
	static int32_t t5 = -4430361;

	t5 = ((x73>>(x74%x75))/x76);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x105 = 94645U;
	int16_t x106 = INT16_MIN;
	int32_t x107 = -1;
	uint32_t x108 = UINT32_MAX;
	uint32_t t6 = 1097992493U;

	t6 = ((x105>>(x106%x107))/x108);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x141 = INT16_MAX;
	static uint8_t x142 = 4U;
	int32_t x143 = 2;
	int8_t x144 = 30;
	int32_t t7 = -35535225;

	t7 = ((x141>>(x142%x143))/x144);

	if (t7 != 1092) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x147 = -1;
	int16_t x148 = INT16_MIN;
	int32_t t8 = -119350907;

	t8 = ((x145>>(x146%x147))/x148);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x161 = 94LLU;
	int16_t x162 = -987;
	int32_t x164 = 347387;

	t9 = ((x161>>(x162%x163))/x164);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x203 = INT16_MIN;
	uint16_t x204 = 19857U;
	int32_t t10 = 13;

	t10 = ((x201>>(x202%x203))/x204);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x217 = 23020710864LLU;
	volatile int64_t x218 = INT64_MIN;
	static volatile int8_t x219 = 8;

	t11 = ((x217>>(x218%x219))/x220);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x221 = 7U;
	uint16_t x222 = 7362U;
	uint16_t x223 = 7U;
	volatile int64_t x224 = 91852329110994774LL;
	volatile int64_t t12 = 7LL;

	t12 = ((x221>>(x222%x223))/x224);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x233 = INT8_MAX;
	volatile int8_t x234 = 0;
	int16_t x235 = -793;
	int64_t t13 = -4LL;

	t13 = ((x233>>(x234%x235))/x236);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x297 = 71501285LLU;
	static uint32_t x299 = UINT32_MAX;
	static int64_t x300 = 2081903238LL;
	uint64_t t14 = 695260536521LLU;

	t14 = ((x297>>(x298%x299))/x300);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x301 = INT32_MAX;
	static uint16_t x302 = 12U;
	int8_t x303 = INT8_MIN;
	int32_t x304 = 317353;

	t15 = ((x301>>(x302%x303))/x304);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x317 = 9175;
	uint32_t x318 = 8U;
	int8_t x319 = -58;
	static volatile int32_t t16 = 1355982;

	t16 = ((x317>>(x318%x319))/x320);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x321 = 3U;
	int32_t x322 = 24;
	volatile int32_t x323 = INT32_MIN;
	int64_t x324 = 78107460LL;

	t17 = ((x321>>(x322%x323))/x324);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x365 = 204897U;
	volatile int8_t x367 = -1;
	static int32_t x368 = INT32_MIN;
	volatile uint32_t t18 = 735368103U;

	t18 = ((x365>>(x366%x367))/x368);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x389 = 23797U;
	int32_t x391 = -1;
	int64_t x392 = INT64_MIN;
	volatile int64_t t19 = 769373LL;

	t19 = ((x389>>(x390%x391))/x392);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x397 = UINT8_MAX;
	uint16_t x398 = 508U;
	int64_t x400 = 85521387257LL;
	static int64_t t20 = 193065LL;

	t20 = ((x397>>(x398%x399))/x400);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x401 = 7U;
	int8_t x402 = 0;
	int8_t x403 = -1;
	int32_t x404 = 78;
	int32_t t21 = -54540239;

	t21 = ((x401>>(x402%x403))/x404);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x413 = 14U;
	uint16_t x414 = 1430U;
	int8_t x416 = INT8_MAX;
	static volatile int32_t t22 = -5886;

	t22 = ((x413>>(x414%x415))/x416);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x417 = UINT8_MAX;
	int64_t x420 = -1LL;
	int64_t t23 = -395791LL;

	t23 = ((x417>>(x418%x419))/x420);

	if (t23 != -255LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x425 = 1U;
	volatile int32_t x426 = INT32_MAX;
	int64_t x427 = -1LL;
	volatile uint64_t t24 = 7087183608LLU;

	t24 = ((x425>>(x426%x427))/x428);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x461 = 14853U;
	volatile int64_t x462 = INT64_MIN;
	int16_t x464 = INT16_MAX;
	volatile int32_t t25 = 13258260;

	t25 = ((x461>>(x462%x463))/x464);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x465 = UINT8_MAX;
	static uint64_t x467 = UINT64_MAX;
	int16_t x468 = 2403;
	int32_t t26 = 231292;

	t26 = ((x465>>(x466%x467))/x468);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x469 = INT64_MAX;
	static volatile int32_t x470 = 0;
	int64_t x471 = -1LL;
	volatile uint64_t t27 = 29LLU;

	t27 = ((x469>>(x470%x471))/x472);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x501 = INT8_MAX;
	static int16_t x502 = 3;
	static uint16_t x503 = UINT16_MAX;
	volatile int64_t x504 = -648LL;

	t28 = ((x501>>(x502%x503))/x504);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x523 = INT32_MIN;
	static int64_t x524 = INT64_MIN;
	volatile int64_t t29 = -34537514382742486LL;

	t29 = ((x521>>(x522%x523))/x524);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x553 = INT8_MAX;
	int16_t x554 = INT16_MIN;
	volatile int8_t x555 = INT8_MIN;
	volatile int32_t t30 = -1475253;

	t30 = ((x553>>(x554%x555))/x556);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x557 = UINT16_MAX;
	volatile int64_t x558 = INT64_MIN;
	static int32_t x559 = INT32_MIN;
	int32_t t31 = 17254721;

	t31 = ((x557>>(x558%x559))/x560);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x589 = 30U;
	static uint64_t x590 = 30664281291082LLU;
	int8_t x591 = INT8_MAX;
	volatile uint64_t x592 = UINT64_MAX;
	volatile uint64_t t32 = 64826228LLU;

	t32 = ((x589>>(x590%x591))/x592);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x646 = 1U;
	uint8_t x647 = 11U;
	uint8_t x648 = 47U;
	int32_t t33 = 0;

	t33 = ((x645>>(x646%x647))/x648);

	if (t33 != 150) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x649 = INT16_MAX;
	volatile uint8_t x651 = UINT8_MAX;
	int16_t x652 = -2453;

	t34 = ((x649>>(x650%x651))/x652);

	if (t34 != -13) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x702 = UINT8_MAX;
	volatile int16_t x703 = -1;
	int32_t x704 = INT32_MAX;

	t35 = ((x701>>(x702%x703))/x704);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x712 = -1;
	static uint64_t t36 = 10196LLU;

	t36 = ((x709>>(x710%x711))/x712);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x721 = 1559LLU;
	static int16_t x722 = INT16_MIN;
	uint8_t x724 = 79U;
	volatile uint64_t t37 = 1LLU;

	t37 = ((x721>>(x722%x723))/x724);

	if (t37 != 19LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x725 = INT64_MAX;
	static int32_t x726 = INT32_MIN;
	static int64_t x727 = -1LL;
	uint32_t x728 = UINT32_MAX;
	int64_t t38 = -2103401673LL;

	t38 = ((x725>>(x726%x727))/x728);

	if (t38 != 2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x745 = INT16_MAX;
	int32_t x746 = INT32_MIN;
	static int16_t x747 = -1;
	int64_t t39 = -7LL;

	t39 = ((x745>>(x746%x747))/x748);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x753 = 0U;
	int8_t x754 = 0;
	int8_t x755 = INT8_MIN;
	volatile int8_t x756 = -31;

	t40 = ((x753>>(x754%x755))/x756);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x781 = 349U;
	int8_t x783 = INT8_MIN;
	volatile uint64_t x784 = 6588318566598433589LLU;
	static volatile uint64_t t41 = 242581841140LLU;

	t41 = ((x781>>(x782%x783))/x784);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x801 = UINT16_MAX;
	uint16_t x802 = UINT16_MAX;
	int32_t t42 = 0;

	t42 = ((x801>>(x802%x803))/x804);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x821 = 694;
	int32_t x822 = INT32_MIN;
	int16_t x823 = -1;
	uint32_t x824 = 978U;

	t43 = ((x821>>(x822%x823))/x824);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x873 = 2541204900188LLU;
	uint32_t x874 = UINT32_MAX;
	int16_t x875 = -3;
	static int16_t x876 = INT16_MIN;
	uint64_t t44 = 27LLU;

	t44 = ((x873>>(x874%x875))/x876);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x881 = 86048321678746LLU;
	volatile uint8_t x882 = 4U;
	int64_t x883 = INT64_MIN;
	int8_t x884 = INT8_MIN;
	volatile uint64_t t45 = 1984778LLU;

	t45 = ((x881>>(x882%x883))/x884);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x901 = 2;
	uint16_t x902 = 0U;
	uint16_t x904 = UINT16_MAX;
	volatile int32_t t46 = 7637;

	t46 = ((x901>>(x902%x903))/x904);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x905 = 15LLU;
	int8_t x906 = -10;
	uint16_t x907 = 1U;

	t47 = ((x905>>(x906%x907))/x908);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x909 = 5;
	volatile int64_t x910 = INT64_MIN;
	int16_t x911 = INT16_MIN;
	uint32_t x912 = 7150302U;

	t48 = ((x909>>(x910%x911))/x912);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x913 = 9604U;
	static uint32_t x914 = UINT32_MAX;
	int32_t x916 = 94565906;
	static volatile int32_t t49 = -205;

	t49 = ((x913>>(x914%x915))/x916);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x918 = 7U;
	volatile int64_t x919 = 566684627LL;
	int16_t x920 = INT16_MIN;
	int32_t t50 = -535431;

	t50 = ((x917>>(x918%x919))/x920);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x925 = UINT64_MAX;
	uint8_t x927 = 96U;
	static uint64_t x928 = UINT64_MAX;
	uint64_t t51 = 55225989031492901LLU;

	t51 = ((x925>>(x926%x927))/x928);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x933 = 9178832385LLU;
	int64_t x934 = INT64_MAX;
	volatile uint64_t x936 = UINT64_MAX;
	uint64_t t52 = 2989225946588769LLU;

	t52 = ((x933>>(x934%x935))/x936);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x941 = UINT64_MAX;
	volatile int32_t x942 = INT32_MAX;
	static int8_t x943 = 15;
	static int16_t x944 = INT16_MAX;

	t53 = ((x941>>(x942%x943))/x944);

	if (t53 != 4398180732928LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x965 = UINT32_MAX;
	static int8_t x966 = INT8_MIN;
	uint64_t x968 = 4285387727314141LLU;
	static uint64_t t54 = 1424252032013LLU;

	t54 = ((x965>>(x966%x967))/x968);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x985 = INT16_MAX;
	int32_t x986 = INT32_MIN;
	int16_t x988 = 161;
	int32_t t55 = 1070423977;

	t55 = ((x985>>(x986%x987))/x988);

	if (t55 != 203) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1007 = 4U;
	int32_t x1008 = 1596712;

	t56 = ((x1005>>(x1006%x1007))/x1008);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x1065 = 227U;
	int8_t x1067 = -1;
	int64_t x1068 = INT64_MAX;
	int64_t t57 = -4181607957897LL;

	t57 = ((x1065>>(x1066%x1067))/x1068);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x1105 = 6745346399353LL;
	int8_t x1107 = -1;
	uint16_t x1108 = UINT16_MAX;
	int64_t t58 = 13858666825446238LL;

	t58 = ((x1105>>(x1106%x1107))/x1108);

	if (t58 != 102927388LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x1134 = 57U;
	uint16_t x1135 = 9868U;
	int64_t t59 = -4759094577336LL;

	t59 = ((x1133>>(x1134%x1135))/x1136);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1145 = INT32_MAX;
	int16_t x1147 = -1;
	int32_t x1148 = -12679162;

	t60 = ((x1145>>(x1146%x1147))/x1148);

	if (t60 != -169) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1157 = 1;
	uint64_t x1158 = UINT64_MAX;
	int8_t x1160 = -1;
	volatile int32_t t61 = 220;

	t61 = ((x1157>>(x1158%x1159))/x1160);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1169 = 398949870;
	uint16_t x1170 = UINT16_MAX;
	uint16_t x1171 = UINT16_MAX;
	uint8_t x1172 = 2U;
	volatile int32_t t62 = 43;

	t62 = ((x1169>>(x1170%x1171))/x1172);

	if (t62 != 199474935) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1185 = 918278118U;
	static int32_t x1186 = -1;
	int32_t x1187 = -1;

	t63 = ((x1185>>(x1186%x1187))/x1188);

	if (t63 != 14012U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x1189 = 114074LLU;
	int8_t x1190 = INT8_MIN;
	volatile int16_t x1191 = -1;
	int8_t x1192 = -1;

	t64 = ((x1189>>(x1190%x1191))/x1192);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1213 = UINT64_MAX;
	static int64_t x1215 = -1LL;
	uint32_t x1216 = 1659U;
	volatile uint64_t t65 = 20943426908LLU;

	t65 = ((x1213>>(x1214%x1215))/x1216);

	if (t65 != 11119194740029868LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1217 = 79U;
	volatile uint16_t x1219 = UINT16_MAX;
	uint64_t x1220 = UINT64_MAX;
	volatile uint64_t t66 = 356783104169LLU;

	t66 = ((x1217>>(x1218%x1219))/x1220);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1221 = INT32_MAX;
	int64_t x1222 = 3949023300LL;
	int8_t x1223 = -24;
	int32_t t67 = 149220032;

	t67 = ((x1221>>(x1222%x1223))/x1224);

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x1242 = 7U;

	t68 = ((x1241>>(x1242%x1243))/x1244);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1270 = 3U;
	uint64_t x1271 = UINT64_MAX;
	volatile int16_t x1272 = -2;

	t69 = ((x1269>>(x1270%x1271))/x1272);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1309 = 1613U;
	int64_t x1310 = INT64_MIN;
	volatile int64_t x1311 = INT64_MIN;
	int16_t x1312 = INT16_MAX;

	t70 = ((x1309>>(x1310%x1311))/x1312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1313 = 2021U;
	static int32_t x1314 = 0;
	int16_t x1316 = 6244;
	int32_t t71 = 0;

	t71 = ((x1313>>(x1314%x1315))/x1316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1349 = 156989024U;
	int16_t x1350 = INT16_MAX;
	uint8_t x1351 = 27U;
	volatile int64_t x1352 = 897458421LL;
	volatile int64_t t72 = 65134750863721154LL;

	t72 = ((x1349>>(x1350%x1351))/x1352);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1362 = 0U;
	uint32_t x1363 = 39U;
	uint16_t x1364 = UINT16_MAX;
	volatile int32_t t73 = 640540;

	t73 = ((x1361>>(x1362%x1363))/x1364);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x1389 = 185237730;
	int8_t x1390 = INT8_MAX;
	int8_t x1391 = INT8_MAX;
	int8_t x1392 = -37;
	volatile int32_t t74 = -2;

	t74 = ((x1389>>(x1390%x1391))/x1392);

	if (t74 != -5006425) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1393 = INT32_MAX;
	uint64_t x1394 = UINT64_MAX;
	uint64_t x1395 = UINT64_MAX;
	int64_t x1396 = INT64_MIN;
	volatile int64_t t75 = -2744776871204853938LL;

	t75 = ((x1393>>(x1394%x1395))/x1396);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1413 = UINT8_MAX;
	int8_t x1414 = INT8_MAX;
	int8_t x1415 = -1;
	static int32_t x1416 = INT32_MIN;
	int32_t t76 = -32478;

	t76 = ((x1413>>(x1414%x1415))/x1416);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1417 = 32406752155009327LLU;
	volatile int64_t x1419 = 942035LL;
	static int16_t x1420 = -1;
	volatile uint64_t t77 = 629143200584546LLU;

	t77 = ((x1417>>(x1418%x1419))/x1420);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x1429 = INT8_MAX;
	int64_t x1430 = -1LL;
	uint8_t x1431 = 1U;
	volatile int16_t x1432 = INT16_MIN;
	volatile int32_t t78 = 11904463;

	t78 = ((x1429>>(x1430%x1431))/x1432);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1446 = 14916;
	static uint32_t x1447 = 142U;
	int32_t x1448 = 15238;

	t79 = ((x1445>>(x1446%x1447))/x1448);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1461 = 0LL;
	int8_t x1462 = INT8_MIN;
	int8_t x1463 = INT8_MIN;
	uint64_t x1464 = 300548725751LLU;
	volatile uint64_t t80 = 4974153960LLU;

	t80 = ((x1461>>(x1462%x1463))/x1464);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1470 = 1;
	int64_t x1471 = INT64_MAX;
	int32_t x1472 = 11;
	uint32_t t81 = 9U;

	t81 = ((x1469>>(x1470%x1471))/x1472);

	if (t81 != 42U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1473 = 128958068U;
	uint8_t x1474 = UINT8_MAX;
	uint8_t x1475 = 2U;
	uint8_t x1476 = 2U;
	uint32_t t82 = 32299231U;

	t82 = ((x1473>>(x1474%x1475))/x1476);

	if (t82 != 32239517U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1478 = INT16_MIN;
	int64_t x1480 = 11286359248103508LL;
	volatile int64_t t83 = 78299917LL;

	t83 = ((x1477>>(x1478%x1479))/x1480);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x1497 = 0U;
	uint16_t x1498 = 25U;
	int64_t x1499 = INT64_MAX;
	int16_t x1500 = INT16_MIN;

	t84 = ((x1497>>(x1498%x1499))/x1500);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1545 = UINT8_MAX;
	int8_t x1546 = 1;
	int32_t x1547 = INT32_MAX;
	volatile int32_t t85 = -44;

	t85 = ((x1545>>(x1546%x1547))/x1548);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x1578 = INT16_MIN;

	t86 = ((x1577>>(x1578%x1579))/x1580);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1585 = 4U;
	volatile uint16_t x1586 = 5183U;
	static int32_t x1587 = -1;
	int8_t x1588 = -4;
	int32_t t87 = 68429;

	t87 = ((x1585>>(x1586%x1587))/x1588);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1641 = 1146U;
	int64_t x1642 = INT64_MIN;
	volatile int64_t x1643 = -1LL;

	t88 = ((x1641>>(x1642%x1643))/x1644);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x1649 = 451673LL;
	static int16_t x1650 = INT16_MIN;
	static int64_t x1651 = -1LL;
	uint16_t x1652 = 17478U;
	static volatile int64_t t89 = -6796092704861LL;

	t89 = ((x1649>>(x1650%x1651))/x1652);

	if (t89 != 25LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1657 = 66U;
	int32_t x1658 = -1;
	int8_t x1659 = -1;
	int16_t x1660 = -252;
	volatile int32_t t90 = 66950728;

	t90 = ((x1657>>(x1658%x1659))/x1660);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1669 = 1U;
	int16_t x1670 = 25;
	int32_t x1671 = -46;
	int32_t t91 = 15587783;

	t91 = ((x1669>>(x1670%x1671))/x1672);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1678 = UINT8_MAX;
	int32_t x1679 = -1;
	int32_t x1680 = -6672;
	static volatile int32_t t92 = -146752;

	t92 = ((x1677>>(x1678%x1679))/x1680);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1689 = INT8_MAX;
	volatile int8_t x1690 = INT8_MIN;
	volatile uint16_t x1692 = 12304U;
	volatile int32_t t93 = -10182296;

	t93 = ((x1689>>(x1690%x1691))/x1692);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1701 = UINT64_MAX;
	int16_t x1702 = INT16_MAX;
	static int8_t x1704 = 26;
	uint64_t t94 = 1083LLU;

	t94 = ((x1701>>(x1702%x1703))/x1704);

	if (t94 != 354745078340568300LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1709 = INT16_MAX;
	int16_t x1710 = INT16_MIN;
	int8_t x1711 = -1;
	int16_t x1712 = INT16_MIN;
	static volatile int32_t t95 = -23;

	t95 = ((x1709>>(x1710%x1711))/x1712);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1721 = INT32_MAX;
	int16_t x1722 = INT16_MIN;
	static int8_t x1723 = INT8_MIN;
	int32_t x1724 = INT32_MAX;
	volatile int32_t t96 = -241065;

	t96 = ((x1721>>(x1722%x1723))/x1724);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1733 = 42152151U;
	uint64_t x1734 = UINT64_MAX;
	int8_t x1735 = 1;
	volatile uint32_t x1736 = 4167U;

	t97 = ((x1733>>(x1734%x1735))/x1736);

	if (t97 != 10115U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1785 = 54680;
	static volatile uint64_t x1786 = UINT64_MAX;
	volatile int32_t x1787 = INT32_MAX;
	static int64_t x1788 = -1LL;
	int64_t t98 = -5634455488LL;

	t98 = ((x1785>>(x1786%x1787))/x1788);

	if (t98 != -6835LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1789 = 80U;
	volatile uint16_t x1790 = UINT16_MAX;
	uint64_t x1792 = UINT64_MAX;

	t99 = ((x1789>>(x1790%x1791))/x1792);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

