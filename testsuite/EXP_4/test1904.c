#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x14 = -280919642479415732LL;
int64_t x21 = 38389252589LL;
int16_t x22 = -1;
static volatile uint8_t x29 = 0U;
uint8_t x50 = UINT8_MAX;
int64_t x56 = INT64_MIN;
int32_t x74 = INT32_MIN;
volatile int32_t x76 = INT32_MIN;
int16_t x84 = -1;
int8_t x91 = INT8_MIN;
int32_t t11 = INT32_MAX;
static int64_t x120 = 444275157801LL;
volatile int32_t t12 = 775980;
int64_t x133 = 0LL;
int64_t t13 = -65219LL;
int16_t x161 = INT16_MAX;
int16_t x164 = INT16_MIN;
volatile int32_t x182 = INT32_MIN;
volatile int16_t x183 = 6618;
uint32_t t17 = 18213U;
uint64_t x227 = UINT64_MAX;
uint8_t x235 = UINT8_MAX;
int32_t t21 = 23607;
int16_t x261 = INT16_MAX;
static int64_t x264 = 38549339483605LL;
uint64_t x266 = 890LLU;
uint16_t x281 = 22665U;
volatile int16_t x284 = INT16_MIN;
uint32_t x295 = 339854330U;
int16_t x319 = 210;
int8_t x376 = INT8_MIN;
int32_t t32 = 0;
static volatile int32_t t33 = 89982555;
static volatile int16_t x409 = 11336;
static uint8_t x411 = 4U;
uint32_t x421 = 9447U;
volatile uint32_t t35 = 1U;
volatile int64_t x429 = 1LL;
static uint8_t x456 = 1U;
int32_t t37 = 0;
volatile int16_t x471 = INT16_MIN;
int64_t x484 = INT64_MIN;
volatile int32_t t39 = -76194942;
uint16_t x509 = 1U;
static int8_t x510 = -31;
int64_t x512 = 54996001212625LL;
static int32_t t40 = -12045253;
volatile uint32_t x514 = 6434U;
int32_t x516 = -14;
int32_t t41 = 382;
volatile int32_t t42 = 832946;
int32_t x550 = INT32_MIN;
int8_t x554 = INT8_MIN;
volatile uint64_t t44 = UINT64_MAX;
uint8_t x589 = UINT8_MAX;
int64_t x591 = INT64_MIN;
volatile int8_t x599 = INT8_MIN;
volatile int16_t x625 = 210;
uint64_t x641 = 1LLU;
volatile int8_t x649 = INT8_MAX;
int64_t x652 = INT64_MIN;
int16_t x654 = INT16_MAX;
static volatile int32_t t53 = -68925513;
volatile int16_t x685 = INT16_MAX;
int32_t x686 = 26;
int8_t x710 = -1;
volatile uint16_t x729 = 10763U;
int32_t t61 = -833;
volatile uint64_t x798 = 124497826LLU;
volatile uint64_t t63 = 6887141499993944921LLU;
uint16_t x853 = 3637U;
int16_t x854 = INT16_MIN;
volatile uint32_t t72 = 458U;
uint32_t x889 = 198094U;
volatile int32_t t75 = -502;
int16_t x943 = INT16_MAX;
static volatile int64_t t79 = -1097880113347411LL;
uint64_t x970 = 870511349958994835LLU;
uint16_t x986 = 5U;
static uint64_t x998 = 9230LLU;
int32_t x1016 = INT32_MIN;
int64_t t85 = -195157022287458731LL;
volatile int8_t x1050 = -1;
uint32_t x1053 = 5876227U;
int8_t x1062 = 1;
uint32_t x1067 = 15985U;
int16_t x1091 = INT16_MIN;
uint16_t x1096 = 7U;
int32_t t92 = -1493125;
int8_t x1132 = INT8_MIN;
uint32_t x1149 = UINT32_MAX;
int32_t x1156 = 4107984;


void f0(void) {
	volatile uint16_t x13 = 0U;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t0 = 96994474;

	t0 = (x13<<(x14/(x15|x16)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x23 = INT8_MAX;
	uint8_t x24 = 57U;
	volatile int64_t t1 = -536185775057576397LL;

	t1 = (x21<<(x22/(x23|x24)));

	if (t1 != 38389252589LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x25 = INT32_MAX;
	volatile uint32_t x26 = 6229U;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MAX;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x25<<(x26/(x27|x28)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x30 = UINT32_MAX;
	int64_t x31 = INT64_MAX;
	uint32_t x32 = 8890158U;
	volatile int32_t t3 = 3503;

	t3 = (x29<<(x30/(x31|x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int16_t x34 = INT16_MAX;
	uint32_t x35 = 34U;
	int64_t x36 = INT64_MAX;
	int32_t t4 = 16;

	t4 = (x33<<(x34/(x35|x36)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 1962355067638908175LLU;
	int8_t x38 = INT8_MAX;
	static int8_t x39 = INT8_MIN;
	uint32_t x40 = UINT32_MAX;
	static volatile uint64_t t5 = 37786LLU;

	t5 = (x37<<(x38/(x39|x40)));

	if (t5 != 1962355067638908175LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x49 = 4228904U;
	int32_t x51 = INT32_MAX;
	uint64_t x52 = UINT64_MAX;
	static uint32_t t6 = 15U;

	t6 = (x49<<(x50/(x51|x52)));

	if (t6 != 4228904U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = 6250252060685539LLU;
	int8_t x54 = INT8_MIN;
	uint32_t x55 = 6929622U;
	uint64_t t7 = 134250966LLU;

	t7 = (x53<<(x54/(x55|x56)));

	if (t7 != 6250252060685539LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x57 = INT16_MAX;
	int8_t x58 = 2;
	volatile int16_t x59 = INT16_MIN;
	volatile int8_t x60 = INT8_MIN;
	int32_t t8 = -25;

	t8 = (x57<<(x58/(x59|x60)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x73 = 1619LLU;
	int64_t x75 = -368182884052021098LL;
	static volatile uint64_t t9 = 1522597828067019LLU;

	t9 = (x73<<(x74/(x75|x76)));

	if (t9 != 3238LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x81 = 4U;
	int64_t x82 = -1LL;
	int16_t x83 = INT16_MAX;
	int32_t t10 = 198279810;

	t10 = (x81<<(x82/(x83|x84)));

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x89 = INT32_MAX;
	volatile int32_t x90 = -1;
	uint8_t x92 = 12U;

	t11 = (x89<<(x90/(x91|x92)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MIN;
	static int16_t x119 = INT16_MAX;

	t12 = (x117<<(x118/(x119|x120)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 1U;
	volatile int64_t x136 = INT64_MIN;

	t13 = (x133<<(x134/(x135|x136)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x162 = 30U;
	uint16_t x163 = 2825U;
	static volatile int32_t t14 = 25;

	t14 = (x161<<(x162/(x163|x164)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x165 = 502;
	int16_t x166 = -1;
	uint16_t x167 = 3U;
	int32_t x168 = INT32_MIN;
	int32_t t15 = -1975877;

	t15 = (x165<<(x166/(x167|x168)));

	if (t15 != 502) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x169 = 439U;
	uint64_t x170 = 223499372507LLU;
	static int16_t x171 = -1;
	volatile int32_t x172 = -518;
	volatile int32_t t16 = 7599486;

	t16 = (x169<<(x170/(x171|x172)));

	if (t16 != 439) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x181 = 409U;
	int32_t x184 = INT32_MIN;

	t17 = (x181<<(x182/(x183|x184)));

	if (t17 != 818U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x185 = 3;
	int32_t x186 = 4;
	static uint32_t x187 = 2147516U;
	static volatile int16_t x188 = INT16_MIN;
	int32_t t18 = -906197;

	t18 = (x185<<(x186/(x187|x188)));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x217 = 15205LLU;
	uint64_t x218 = UINT64_MAX;
	int32_t x219 = -35393;
	static volatile int64_t x220 = INT64_MIN;
	uint64_t t19 = 1054LLU;

	t19 = (x217<<(x218/(x219|x220)));

	if (t19 != 30410LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x225 = 50;
	int16_t x226 = 61;
	static volatile int32_t x228 = 0;
	volatile int32_t t20 = -147;

	t20 = (x225<<(x226/(x227|x228)));

	if (t20 != 50) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x233 = 548U;
	static int32_t x234 = 8;
	int16_t x236 = -408;

	t21 = (x233<<(x234/(x235|x236)));

	if (t21 != 548) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x253 = 5;
	static int8_t x254 = INT8_MIN;
	uint16_t x255 = 11U;
	volatile int64_t x256 = 196LL;
	int32_t t22 = 494;

	t22 = (x253<<(x254/(x255|x256)));

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x257 = 564714082;
	int32_t x258 = INT32_MIN;
	static int32_t x259 = -11286580;
	uint64_t x260 = 124568LLU;
	int32_t t23 = -50595407;

	t23 = (x257<<(x258/(x259|x260)));

	if (t23 != 564714082) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x262 = -776LL;
	uint8_t x263 = 3U;
	int32_t t24 = -81941;

	t24 = (x261<<(x262/(x263|x264)));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x265 = UINT8_MAX;
	static volatile int16_t x267 = INT16_MAX;
	int8_t x268 = -4;
	int32_t t25 = -1;

	t25 = (x265<<(x266/(x267|x268)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x282 = -1LL;
	int8_t x283 = INT8_MIN;
	static int32_t t26 = -33024;

	t26 = (x281<<(x282/(x283|x284)));

	if (t26 != 22665) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = -1;
	int32_t x296 = INT32_MAX;
	volatile int32_t t27 = -1615;

	t27 = (x293<<(x294/(x295|x296)));

	if (t27 != 508) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x305 = 22U;
	uint64_t x306 = UINT64_MAX;
	static uint16_t x307 = UINT16_MAX;
	int8_t x308 = -1;
	static uint32_t t28 = 165U;

	t28 = (x305<<(x306/(x307|x308)));

	if (t28 != 44U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x317 = 47U;
	uint32_t x318 = 3528823U;
	int32_t x320 = INT32_MIN;
	volatile int32_t t29 = 213270;

	t29 = (x317<<(x318/(x319|x320)));

	if (t29 != 47) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x345 = INT64_MAX;
	static int32_t x346 = -1;
	uint16_t x347 = 811U;
	int32_t x348 = INT32_MIN;
	int64_t t30 = INT64_MAX;

	t30 = (x345<<(x346/(x347|x348)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x369 = 100LL;
	int8_t x370 = -6;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MIN;
	int64_t t31 = 65765827405LL;

	t31 = (x369<<(x370/(x371|x372)));

	if (t31 != 100LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x373 = INT8_MAX;
	int8_t x374 = -6;
	volatile int16_t x375 = 0;

	t32 = (x373<<(x374/(x375|x376)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x377 = UINT16_MAX;
	volatile int8_t x378 = -1;
	int8_t x379 = INT8_MIN;
	int32_t x380 = -1;

	t33 = (x377<<(x378/(x379|x380)));

	if (t33 != 131070) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x410 = 59U;
	uint32_t x412 = 112686791U;
	volatile int32_t t34 = 1964025;

	t34 = (x409<<(x410/(x411|x412)));

	if (t34 != 11336) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x422 = UINT8_MAX;
	int64_t x423 = INT64_MAX;
	int32_t x424 = INT32_MAX;

	t35 = (x421<<(x422/(x423|x424)));

	if (t35 != 9447U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x430 = INT16_MIN;
	int8_t x431 = -2;
	uint64_t x432 = 42150048LLU;
	static int64_t t36 = -1LL;

	t36 = (x429<<(x430/(x431|x432)));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x453 = UINT8_MAX;
	uint64_t x454 = 253136152753929104LLU;
	int8_t x455 = INT8_MIN;

	t37 = (x453<<(x454/(x455|x456)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x469 = 918519239LLU;
	uint8_t x470 = 0U;
	uint8_t x472 = 2U;
	uint64_t t38 = 0LLU;

	t38 = (x469<<(x470/(x471|x472)));

	if (t38 != 918519239LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x481 = INT8_MAX;
	int64_t x482 = 473190125232586455LL;
	int64_t x483 = INT64_MIN;

	t39 = (x481<<(x482/(x483|x484)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x511 = 21;

	t40 = (x509<<(x510/(x511|x512)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x513 = INT8_MAX;
	int32_t x515 = INT32_MIN;

	t41 = (x513<<(x514/(x515|x516)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x517 = INT8_MAX;
	uint64_t x518 = UINT64_MAX;
	int16_t x519 = 374;
	volatile int64_t x520 = -1LL;

	t42 = (x517<<(x518/(x519|x520)));

	if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x549 = 75140572U;
	volatile int32_t x551 = -1;
	volatile uint64_t x552 = 202754019734LLU;
	static uint32_t t43 = 261121U;

	t43 = (x549<<(x550/(x551|x552)));

	if (t43 != 75140572U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x553 = UINT64_MAX;
	int64_t x555 = 193765089LL;
	uint16_t x556 = 123U;

	t44 = (x553<<(x554/(x555|x556)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x565 = INT64_MAX;
	int8_t x566 = INT8_MIN;
	int16_t x567 = 1776;
	static int64_t x568 = INT64_MIN;
	volatile int64_t t45 = INT64_MAX;

	t45 = (x565<<(x566/(x567|x568)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x590 = -1;
	int32_t x592 = INT32_MAX;
	int32_t t46 = -18388245;

	t46 = (x589<<(x590/(x591|x592)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x597 = INT32_MAX;
	volatile uint8_t x598 = 15U;
	static uint32_t x600 = 1592U;
	volatile int32_t t47 = INT32_MAX;

	t47 = (x597<<(x598/(x599|x600)));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x601 = UINT64_MAX;
	volatile int16_t x602 = INT16_MIN;
	volatile int32_t x603 = INT32_MIN;
	volatile int64_t x604 = INT64_MIN;
	uint64_t t48 = UINT64_MAX;

	t48 = (x601<<(x602/(x603|x604)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x626 = 1U;
	volatile uint32_t x627 = UINT32_MAX;
	int8_t x628 = -1;
	volatile int32_t t49 = -89100296;

	t49 = (x625<<(x626/(x627|x628)));

	if (t49 != 210) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x642 = 2U;
	uint64_t x643 = 1543194187LLU;
	uint8_t x644 = 7U;
	volatile uint64_t t50 = 96094LLU;

	t50 = (x641<<(x642/(x643|x644)));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x645 = 1U;
	int32_t x646 = INT32_MIN;
	int64_t x647 = INT64_MIN;
	int8_t x648 = 0;
	volatile int32_t t51 = 8690;

	t51 = (x645<<(x646/(x647|x648)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x650 = -427090;
	static uint32_t x651 = UINT32_MAX;
	int32_t t52 = 10;

	t52 = (x649<<(x650/(x651|x652)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x653 = UINT8_MAX;
	volatile int16_t x655 = INT16_MAX;
	int16_t x656 = INT16_MAX;

	t53 = (x653<<(x654/(x655|x656)));

	if (t53 != 510) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x673 = UINT8_MAX;
	uint64_t x674 = 476517LLU;
	int16_t x675 = INT16_MIN;
	static volatile int64_t x676 = INT64_MIN;
	static volatile int32_t t54 = 1785;

	t54 = (x673<<(x674/(x675|x676)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x687 = 3;
	static uint64_t x688 = 7LLU;
	int32_t t55 = -109728600;

	t55 = (x685<<(x686/(x687|x688)));

	if (t55 != 262136) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x697 = 512236;
	int64_t x698 = -1LL;
	volatile int16_t x699 = INT16_MIN;
	uint32_t x700 = UINT32_MAX;
	static int32_t t56 = 77071;

	t56 = (x697<<(x698/(x699|x700)));

	if (t56 != 512236) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x709 = INT8_MAX;
	int64_t x711 = -1LL;
	int32_t x712 = INT32_MAX;
	int32_t t57 = 735;

	t57 = (x709<<(x710/(x711|x712)));

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x730 = -1;
	volatile int16_t x731 = -1;
	volatile int8_t x732 = INT8_MIN;
	volatile int32_t t58 = 30;

	t58 = (x729<<(x730/(x731|x732)));

	if (t58 != 21526) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x741 = UINT32_MAX;
	int32_t x742 = -7;
	int8_t x743 = INT8_MAX;
	int32_t x744 = -1;
	static uint32_t t59 = 71541U;

	t59 = (x741<<(x742/(x743|x744)));

	if (t59 != 4294967168U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x749 = 12316321957LL;
	int64_t x750 = -2607LL;
	uint8_t x751 = 1U;
	int64_t x752 = INT64_MAX;
	int64_t t60 = -1717503LL;

	t60 = (x749<<(x750/(x751|x752)));

	if (t60 != 12316321957LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x789 = UINT16_MAX;
	int64_t x790 = 15046LL;
	int64_t x791 = INT64_MIN;
	uint64_t x792 = 28701LLU;

	t61 = (x789<<(x790/(x791|x792)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x797 = 12U;
	int8_t x799 = -1;
	static int16_t x800 = -1;
	int32_t t62 = 26;

	t62 = (x797<<(x798/(x799|x800)));

	if (t62 != 12) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x805 = 17LLU;
	uint64_t x806 = UINT64_MAX;
	int32_t x807 = 215088;
	int64_t x808 = -1LL;

	t63 = (x805<<(x806/(x807|x808)));

	if (t63 != 34LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x817 = INT16_MAX;
	uint8_t x818 = UINT8_MAX;
	uint32_t x819 = 31U;
	int32_t x820 = INT32_MIN;
	int32_t t64 = 1401;

	t64 = (x817<<(x818/(x819|x820)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x821 = UINT64_MAX;
	uint64_t x822 = 2039LLU;
	uint32_t x823 = 3988U;
	int8_t x824 = INT8_MIN;
	static uint64_t t65 = UINT64_MAX;

	t65 = (x821<<(x822/(x823|x824)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x825 = 263LL;
	int8_t x826 = INT8_MIN;
	volatile uint8_t x827 = 65U;
	uint8_t x828 = UINT8_MAX;
	int64_t t66 = -2049950938767464LL;

	t66 = (x825<<(x826/(x827|x828)));

	if (t66 != 263LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x833 = UINT32_MAX;
	int8_t x834 = -20;
	volatile int32_t x835 = INT32_MIN;
	static int16_t x836 = INT16_MIN;
	uint32_t t67 = UINT32_MAX;

	t67 = (x833<<(x834/(x835|x836)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x837 = 19335284U;
	uint64_t x838 = 3876899832134813528LLU;
	int16_t x839 = -1;
	uint8_t x840 = 4U;
	volatile uint32_t t68 = 2833U;

	t68 = (x837<<(x838/(x839|x840)));

	if (t68 != 19335284U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x855 = 238872237LLU;
	uint64_t x856 = UINT64_MAX;
	int32_t t69 = 2058032;

	t69 = (x853<<(x854/(x855|x856)));

	if (t69 != 3637) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x857 = UINT32_MAX;
	volatile uint64_t x858 = 292LLU;
	int8_t x859 = -1;
	static int8_t x860 = INT8_MIN;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x857<<(x858/(x859|x860)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x861 = UINT16_MAX;
	int32_t x862 = INT32_MAX;
	static int32_t x863 = INT32_MIN;
	uint64_t x864 = 97238417144LLU;
	volatile int32_t t71 = 92444799;

	t71 = (x861<<(x862/(x863|x864)));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x869 = 142U;
	int8_t x870 = -1;
	volatile int8_t x871 = INT8_MIN;
	int16_t x872 = -1;

	t72 = (x869<<(x870/(x871|x872)));

	if (t72 != 284U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x890 = 1179036;
	int32_t x891 = INT32_MAX;
	int16_t x892 = 209;
	volatile uint32_t t73 = 8200539U;

	t73 = (x889<<(x890/(x891|x892)));

	if (t73 != 198094U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x909 = INT32_MAX;
	static volatile int16_t x910 = INT16_MIN;
	int32_t x911 = INT32_MIN;
	uint16_t x912 = 46U;
	volatile int32_t t74 = INT32_MAX;

	t74 = (x909<<(x910/(x911|x912)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x917 = 20895849;
	uint32_t x918 = UINT32_MAX;
	uint32_t x919 = UINT32_MAX;
	volatile int8_t x920 = INT8_MIN;

	t75 = (x917<<(x918/(x919|x920)));

	if (t75 != 41791698) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x925 = 1U;
	static int32_t x926 = 2024;
	int32_t x927 = INT32_MAX;
	int64_t x928 = INT64_MIN;
	static volatile int32_t t76 = -366868657;

	t76 = (x925<<(x926/(x927|x928)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x929 = 8428;
	uint64_t x930 = 903726334723631LLU;
	volatile int8_t x931 = -1;
	int16_t x932 = INT16_MIN;
	volatile int32_t t77 = 81;

	t77 = (x929<<(x930/(x931|x932)));

	if (t77 != 8428) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x941 = 126219026066718LLU;
	int64_t x942 = -1LL;
	int8_t x944 = INT8_MIN;
	volatile uint64_t t78 = 1816765147579571907LLU;

	t78 = (x941<<(x942/(x943|x944)));

	if (t78 != 252438052133436LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x957 = 1682014LL;
	int32_t x958 = -8;
	int32_t x959 = 114048;
	static uint64_t x960 = UINT64_MAX;

	t79 = (x957<<(x958/(x959|x960)));

	if (t79 != 1682014LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x969 = 101617;
	volatile int16_t x971 = -1;
	int8_t x972 = INT8_MAX;
	int32_t t80 = 7;

	t80 = (x969<<(x970/(x971|x972)));

	if (t80 != 101617) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x985 = 7997U;
	int8_t x987 = INT8_MIN;
	int8_t x988 = INT8_MIN;
	uint32_t t81 = 170U;

	t81 = (x985<<(x986/(x987|x988)));

	if (t81 != 7997U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x989 = 1;
	volatile uint32_t x990 = 45968808U;
	int64_t x991 = INT64_MIN;
	static uint32_t x992 = UINT32_MAX;
	volatile int32_t t82 = 9766765;

	t82 = (x989<<(x990/(x991|x992)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x997 = 2592U;
	int8_t x999 = INT8_MIN;
	int16_t x1000 = -1;
	volatile int32_t t83 = 2;

	t83 = (x997<<(x998/(x999|x1000)));

	if (t83 != 2592) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1009 = INT16_MAX;
	static uint8_t x1010 = UINT8_MAX;
	uint64_t x1011 = 50324924279LLU;
	int32_t x1012 = INT32_MIN;
	int32_t t84 = 3;

	t84 = (x1009<<(x1010/(x1011|x1012)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1013 = 63LL;
	static volatile int32_t x1014 = INT32_MIN;
	static uint16_t x1015 = 576U;

	t85 = (x1013<<(x1014/(x1015|x1016)));

	if (t85 != 126LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1049 = UINT64_MAX;
	static int32_t x1051 = INT32_MIN;
	int16_t x1052 = -2;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x1049<<(x1050/(x1051|x1052)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x1054 = INT16_MIN;
	int32_t x1055 = -96947;
	int8_t x1056 = INT8_MAX;
	volatile uint32_t t87 = 1701192474U;

	t87 = (x1053<<(x1054/(x1055|x1056)));

	if (t87 != 5876227U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1061 = UINT32_MAX;
	int8_t x1063 = INT8_MIN;
	int32_t x1064 = INT32_MIN;
	uint32_t t88 = UINT32_MAX;

	t88 = (x1061<<(x1062/(x1063|x1064)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1065 = INT8_MAX;
	volatile int16_t x1066 = -1;
	static int32_t x1068 = -1;
	int32_t t89 = -142;

	t89 = (x1065<<(x1066/(x1067|x1068)));

	if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1085 = 8813;
	int8_t x1086 = INT8_MAX;
	volatile int64_t x1087 = 131LL;
	int16_t x1088 = -1569;
	int32_t t90 = -114211240;

	t90 = (x1085<<(x1086/(x1087|x1088)));

	if (t90 != 8813) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x1089 = 2665U;
	int8_t x1090 = -36;
	static uint64_t x1092 = 11095110038LLU;
	static volatile uint32_t t91 = 37251U;

	t91 = (x1089<<(x1090/(x1091|x1092)));

	if (t91 != 5330U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x1093 = 1;
	int64_t x1094 = -26070LL;
	static uint64_t x1095 = UINT64_MAX;

	t92 = (x1093<<(x1094/(x1095|x1096)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x1109 = UINT32_MAX;
	volatile uint32_t x1110 = 305731519U;
	int32_t x1111 = 1098;
	int8_t x1112 = -1;
	uint32_t t93 = UINT32_MAX;

	t93 = (x1109<<(x1110/(x1111|x1112)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x1113 = 209487122U;
	int64_t x1114 = -1LL;
	uint64_t x1115 = UINT64_MAX;
	int8_t x1116 = INT8_MIN;
	static volatile uint32_t t94 = 3423U;

	t94 = (x1113<<(x1114/(x1115|x1116)));

	if (t94 != 418974244U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x1125 = 691U;
	int8_t x1126 = -55;
	uint64_t x1127 = UINT64_MAX;
	uint32_t x1128 = UINT32_MAX;
	int32_t t95 = 3334129;

	t95 = (x1125<<(x1126/(x1127|x1128)));

	if (t95 != 691) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1129 = 17;
	uint32_t x1130 = 111374485U;
	static uint16_t x1131 = UINT16_MAX;
	int32_t t96 = -1;

	t96 = (x1129<<(x1130/(x1131|x1132)));

	if (t96 != 17) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1137 = 59709786LLU;
	uint64_t x1138 = 83426522310881LLU;
	volatile int16_t x1139 = -12002;
	static int64_t x1140 = INT64_MIN;
	volatile uint64_t t97 = 704967910705833601LLU;

	t97 = (x1137<<(x1138/(x1139|x1140)));

	if (t97 != 59709786LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1150 = -1;
	volatile int16_t x1151 = INT16_MAX;
	int32_t x1152 = INT32_MIN;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x1149<<(x1150/(x1151|x1152)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1153 = 152758LLU;
	static int32_t x1154 = INT32_MIN;
	static int64_t x1155 = 1303447632367LL;
	uint64_t t99 = 24519LLU;

	t99 = (x1153<<(x1154/(x1155|x1156)));

	if (t99 != 152758LLU) { NG(); } else { ; }
	
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

