
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x10 = 9U;
volatile int64_t x11 = -1LL;
int16_t x13 = INT16_MIN;
int64_t x16 = 2608978LL;
static int32_t t2 = -682;
int16_t x28 = INT16_MAX;
volatile int32_t t4 = -186367778;
volatile int16_t x49 = INT16_MIN;
static int32_t x50 = -1;
uint64_t x74 = UINT64_MAX;
uint8_t x78 = UINT8_MAX;
volatile int16_t x83 = 1;
uint64_t x100 = UINT64_MAX;
int64_t x101 = INT64_MIN;
uint64_t x102 = 4119689844413672LLU;
volatile int32_t x112 = -7779;
int16_t x123 = -1;
volatile int32_t t15 = -3;
int8_t x134 = INT8_MIN;
volatile int64_t x143 = -1LL;
volatile int64_t x155 = -1LL;
int32_t t24 = -368;
int16_t x233 = 243;
uint8_t x235 = UINT8_MAX;
int64_t x240 = INT64_MAX;
static uint64_t x242 = UINT64_MAX;
uint16_t x245 = 16643U;
static int8_t x246 = 4;
int8_t x247 = INT8_MIN;
int64_t x251 = -78979165671771234LL;
static volatile int16_t x253 = 0;
static int32_t x254 = -1;
int32_t t32 = -1892551;
int8_t x271 = INT8_MIN;
int64_t x273 = INT64_MIN;
int32_t x282 = 11063;
int16_t x285 = -2823;
volatile int32_t t37 = -11359;
int8_t x290 = INT8_MIN;
static uint64_t x291 = 52349956LLU;
static int32_t t38 = 2649849;
int8_t x293 = INT8_MIN;
int64_t x301 = -1LL;
static int16_t x304 = INT16_MIN;
uint64_t x317 = 203938803503543548LLU;
int32_t x319 = -117513;
static volatile uint64_t x357 = 111667639317214LLU;
volatile int64_t x360 = 121009204713958LL;
int32_t t42 = -209588042;
static volatile int8_t x367 = INT8_MIN;
int64_t x386 = INT64_MIN;
int8_t x387 = -2;
static int32_t x397 = INT32_MIN;
int32_t x403 = -1;
int8_t x409 = INT8_MAX;
static uint32_t x411 = UINT32_MAX;
uint64_t x412 = 65186296852438LLU;
int32_t t47 = 143212659;
uint32_t x419 = UINT32_MAX;
volatile int16_t x427 = -1;
volatile int32_t x430 = INT32_MAX;
volatile int32_t t52 = 207;
volatile int16_t x444 = -1;
uint32_t x445 = 1845U;
int64_t x446 = -1514620700LL;
volatile int32_t x452 = -1;
int32_t t57 = 41934;
int64_t x470 = 901767006LL;
int16_t x472 = INT16_MIN;
volatile int32_t x477 = INT32_MAX;
uint64_t x484 = 210985229523652222LLU;
volatile int32_t t61 = 33164;
int64_t x494 = -1LL;
int8_t x496 = INT8_MAX;
uint64_t x500 = UINT64_MAX;
uint32_t x502 = UINT32_MAX;
volatile int32_t t64 = -1;
int64_t x509 = INT64_MIN;
int8_t x517 = INT8_MIN;
volatile int32_t t67 = -235220962;
int64_t x536 = -1LL;
int32_t t68 = 130188551;
volatile int32_t x537 = 15452095;
int32_t t69 = -365425;
static int32_t x544 = 7090871;
static int64_t x547 = INT64_MIN;
int32_t t71 = -8510429;
int64_t x557 = -1LL;
uint32_t x568 = 917840U;
volatile int64_t x586 = -1279105465214LL;
static int32_t x588 = INT32_MAX;
volatile uint16_t x590 = 0U;
int16_t x591 = INT16_MIN;
int16_t x593 = INT16_MAX;
int16_t x594 = -4;
static volatile uint16_t x600 = 1U;
int8_t x606 = INT8_MAX;
static uint64_t x609 = 13393641018LLU;
int8_t x611 = 31;
uint8_t x617 = UINT8_MAX;
uint8_t x619 = 3U;
static int8_t x623 = 0;
volatile int8_t x624 = 0;
int32_t t85 = -5788957;
volatile uint32_t x641 = UINT32_MAX;
uint32_t x643 = 57569194U;
int16_t x645 = 422;
int32_t t87 = -125284878;
volatile int32_t x654 = INT32_MIN;
static uint16_t x661 = 95U;
int8_t x668 = INT8_MIN;
static uint8_t x670 = UINT8_MAX;
uint32_t x677 = 1847823647U;
int64_t x678 = 429972310138LL;
volatile int32_t t93 = 2637;
volatile int32_t t95 = -27;
int64_t x697 = INT64_MAX;
uint16_t x698 = 7U;
int32_t x709 = INT32_MIN;
int32_t t98 = -171220;
volatile int64_t x730 = INT64_MIN;
int32_t x742 = INT32_MIN;
int32_t x746 = INT32_MIN;
int32_t x749 = -14900002;
int64_t x756 = INT64_MAX;
volatile int32_t x761 = INT32_MIN;
uint64_t x762 = UINT64_MAX;
volatile uint8_t x764 = UINT8_MAX;
uint16_t x776 = UINT16_MAX;
int16_t x792 = -1;
int32_t x793 = -1;
volatile int64_t x850 = INT64_MIN;
int16_t x851 = 5;
static int8_t x852 = INT8_MAX;
volatile int32_t t115 = -17;
uint16_t x874 = 34U;
volatile int16_t x878 = INT16_MAX;
int8_t x885 = INT8_MIN;
int16_t x886 = -52;
static volatile int32_t x887 = -1;
int32_t x894 = INT32_MIN;
int16_t x897 = -13;
static uint8_t x898 = 0U;
int64_t x934 = INT64_MAX;
static int8_t x935 = INT8_MIN;
uint16_t x940 = 4U;
int32_t t126 = -165243;
volatile uint64_t x944 = 2045671154762LLU;
uint64_t x984 = UINT64_MAX;
int32_t t130 = 71344393;
int32_t t131 = 6852;
volatile int8_t x1007 = -1;
int32_t t132 = 487675;
uint64_t x1018 = 64838006LLU;
volatile int64_t x1020 = 222LL;
static volatile int16_t x1022 = INT16_MIN;
int32_t t134 = 11294326;
int64_t x1046 = INT64_MAX;
volatile int32_t x1049 = INT32_MAX;
uint32_t x1070 = 31540U;
uint16_t x1079 = UINT16_MAX;
static volatile int64_t x1080 = INT64_MAX;
int8_t x1081 = -9;
volatile int32_t t144 = -620;
volatile uint8_t x1115 = 3U;
int64_t x1116 = 365613434630600789LL;
int64_t x1121 = 207483358869LL;
int32_t t149 = -280;
volatile uint8_t x1148 = 70U;
uint64_t x1156 = 12208960LLU;
volatile uint16_t x1176 = UINT16_MAX;
volatile int32_t t152 = 20;
uint8_t x1178 = UINT8_MAX;
int16_t x1180 = -779;
volatile int16_t x1189 = INT16_MIN;
static int32_t t154 = -4;
volatile uint64_t x1195 = 31259343962238LLU;
int64_t x1211 = -151665069441033LL;
volatile int32_t t156 = 1;
int32_t x1215 = -8488279;
volatile uint32_t x1220 = UINT32_MAX;
int32_t x1235 = -1;
uint32_t x1240 = 629U;
volatile uint16_t x1248 = UINT16_MAX;
int32_t t162 = 2601;
int32_t t163 = -3518449;
uint32_t x1256 = 131788878U;
static int16_t x1283 = -161;
int64_t x1305 = INT64_MIN;
volatile int32_t t168 = -19;
volatile int32_t t169 = 11;
uint32_t x1319 = 13U;
int32_t t170 = 53;
uint32_t x1338 = 8003356U;
int8_t x1354 = INT8_MIN;
int32_t x1355 = -772131;
volatile uint32_t x1371 = 835511038U;
volatile int32_t t174 = 8392251;
volatile int8_t x1393 = -1;
uint8_t x1395 = 99U;
static volatile int32_t t176 = -8761;
volatile int32_t x1398 = -104939;
static int32_t x1455 = INT32_MAX;
int64_t x1456 = 148391406192690817LL;
int8_t x1462 = INT8_MIN;
volatile int32_t t181 = -11804627;
static int32_t x1482 = INT32_MIN;
volatile int32_t t182 = -29;
uint8_t x1505 = 0U;
uint32_t x1506 = UINT32_MAX;
int32_t x1513 = INT32_MAX;
int16_t x1517 = 0;
int64_t x1526 = INT64_MIN;
int8_t x1527 = -1;
int8_t x1532 = INT8_MAX;
static uint32_t x1537 = 635191U;
int16_t x1540 = -3;
int8_t x1546 = INT8_MIN;
int8_t x1569 = 6;
volatile uint64_t x1570 = UINT64_MAX;
static volatile int32_t t195 = 70;
int32_t x1581 = INT32_MAX;
int8_t x1582 = 19;
volatile int32_t x1584 = 20004625;
volatile int32_t t196 = 1;
volatile uint16_t x1588 = UINT16_MAX;


void f0(void) {
    	volatile uint64_t x1 = 53LLU;
	static int8_t x2 = INT8_MIN;
	int8_t x3 = 1;
	uint16_t x4 = 27U;
	int32_t t0 = -157806;

    t0 = (x1==(x2/(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = UINT8_MAX;
	int32_t x12 = -1;
	int32_t t1 = 78;

    t1 = (x9==(x10/(x11<=x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x14 = 6U;
	uint16_t x15 = UINT16_MAX;

    t2 = (x13==(x14/(x15<=x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x25 = 618670039LL;
	uint16_t x26 = 2180U;
	uint16_t x27 = 15344U;
	int32_t t3 = -28760550;

    t3 = (x25==(x26/(x27<=x28)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x37 = 15;
	static int16_t x38 = -1;
	static uint16_t x39 = UINT16_MAX;
	uint64_t x40 = UINT64_MAX;

    t4 = (x37==(x38/(x39<=x40)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x41 = UINT32_MAX;
	int16_t x42 = -127;
	uint8_t x43 = 3U;
	int64_t x44 = INT64_MAX;
	volatile int32_t t5 = 263827400;

    t5 = (x41==(x42/(x43<=x44)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x51 = INT8_MIN;
	int8_t x52 = -51;
	volatile int32_t t6 = -103558149;

    t6 = (x49==(x50/(x51<=x52)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x73 = -3;
	int8_t x75 = 51;
	uint32_t x76 = 12951U;
	volatile int32_t t7 = -2;

    t7 = (x73==(x74/(x75<=x76)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x77 = INT32_MIN;
	static volatile int8_t x79 = INT8_MIN;
	uint16_t x80 = 3U;
	volatile int32_t t8 = -463894;

    t8 = (x77==(x78/(x79<=x80)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x81 = 1U;
	int32_t x82 = -11781;
	static uint32_t x84 = UINT32_MAX;
	int32_t t9 = 226748946;

    t9 = (x81==(x82/(x83<=x84)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x93 = 2U;
	int64_t x94 = -174314359307000LL;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = 38U;
	static int32_t t10 = 1;

    t10 = (x93==(x94/(x95<=x96)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x97 = INT16_MAX;
	volatile int8_t x98 = INT8_MIN;
	static int16_t x99 = -1;
	volatile int32_t t11 = 38102;

    t11 = (x97==(x98/(x99<=x100)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x103 = INT64_MIN;
	int64_t x104 = 15538804LL;
	static volatile int32_t t12 = 93;

    t12 = (x101==(x102/(x103<=x104)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x109 = 0U;
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	int32_t t13 = 227;

    t13 = (x109==(x110/(x111<=x112)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x117 = UINT8_MAX;
	static uint32_t x118 = UINT32_MAX;
	static int64_t x119 = INT64_MIN;
	static volatile int32_t x120 = 75838876;
	static volatile int32_t t14 = -49;

    t14 = (x117==(x118/(x119<=x120)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x121 = INT16_MIN;
	uint16_t x122 = 7254U;
	int64_t x124 = INT64_MAX;

    t15 = (x121==(x122/(x123<=x124)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x133 = -1;
	static uint64_t x135 = 32524470583077996LLU;
	int16_t x136 = -1;
	static int32_t t16 = 40;

    t16 = (x133==(x134/(x135<=x136)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x141 = -8404002067LL;
	uint32_t x142 = 55731U;
	int8_t x144 = INT8_MAX;
	int32_t t17 = -14321;

    t17 = (x141==(x142/(x143<=x144)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x153 = -1LL;
	uint16_t x154 = UINT16_MAX;
	int16_t x156 = INT16_MAX;
	int32_t t18 = -1734;

    t18 = (x153==(x154/(x155<=x156)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x177 = -1LL;
	int32_t x178 = 910877;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MAX;
	int32_t t19 = 230867264;

    t19 = (x177==(x178/(x179<=x180)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x193 = 20;
	int16_t x194 = -12246;
	uint64_t x195 = 9475031479LLU;
	volatile int8_t x196 = INT8_MIN;
	int32_t t20 = 310;

    t20 = (x193==(x194/(x195<=x196)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x201 = UINT64_MAX;
	uint8_t x202 = 12U;
	int16_t x203 = INT16_MIN;
	volatile uint8_t x204 = 16U;
	volatile int32_t t21 = -1;

    t21 = (x201==(x202/(x203<=x204)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x205 = -742;
	static int16_t x206 = INT16_MIN;
	static int32_t x207 = INT32_MIN;
	uint16_t x208 = UINT16_MAX;
	int32_t t22 = -1726206;

    t22 = (x205==(x206/(x207<=x208)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x225 = 30U;
	static int64_t x226 = INT64_MIN;
	volatile int32_t x227 = INT32_MAX;
	static int32_t x228 = INT32_MAX;
	int32_t t23 = 1366497;

    t23 = (x225==(x226/(x227<=x228)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x229 = 2;
	volatile int32_t x230 = -5130;
	int8_t x231 = -1;
	int64_t x232 = 1639232829918188LL;

    t24 = (x229==(x230/(x231<=x232)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x234 = 10U;
	uint64_t x236 = 2052573080065841LLU;
	volatile int32_t t25 = -1881872;

    t25 = (x233==(x234/(x235<=x236)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x237 = 2U;
	int32_t x238 = INT32_MIN;
	uint32_t x239 = 820981U;
	int32_t t26 = -6;

    t26 = (x237==(x238/(x239<=x240)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x241 = -1;
	int16_t x243 = 2664;
	static volatile uint16_t x244 = 3156U;
	static volatile int32_t t27 = 241;

    t27 = (x241==(x242/(x243<=x244)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x248 = 9072U;
	static int32_t t28 = 77737;

    t28 = (x245==(x246/(x247<=x248)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x249 = -1;
	uint16_t x250 = 7U;
	static uint16_t x252 = 50U;
	volatile int32_t t29 = -6111;

    t29 = (x249==(x250/(x251<=x252)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x255 = 634U;
	uint32_t x256 = 51373882U;
	volatile int32_t t30 = 33681650;

    t30 = (x253==(x254/(x255<=x256)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x261 = INT8_MIN;
	int64_t x262 = INT64_MIN;
	static int64_t x263 = -5019846618LL;
	int8_t x264 = INT8_MIN;
	int32_t t31 = 156667612;

    t31 = (x261==(x262/(x263<=x264)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x265 = 0U;
	static volatile int64_t x266 = -1LL;
	volatile int8_t x267 = -1;
	int8_t x268 = 53;

    t32 = (x265==(x266/(x267<=x268)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x269 = INT8_MAX;
	uint64_t x270 = UINT64_MAX;
	uint32_t x272 = UINT32_MAX;
	int32_t t33 = -88;

    t33 = (x269==(x270/(x271<=x272)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x274 = -1;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t34 = -94426706;

    t34 = (x273==(x274/(x275<=x276)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x277 = UINT64_MAX;
	uint32_t x278 = 54722298U;
	volatile int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MIN;
	volatile int32_t t35 = -4;

    t35 = (x277==(x278/(x279<=x280)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x283 = -1LL;
	uint8_t x284 = 28U;
	volatile int32_t t36 = -348283;

    t36 = (x281==(x282/(x283<=x284)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x286 = 0;
	int32_t x287 = -2218;
	volatile int64_t x288 = 5045LL;

    t37 = (x285==(x286/(x287<=x288)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x289 = 107552U;
	int16_t x292 = -319;

    t38 = (x289==(x290/(x291<=x292)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x294 = -1;
	static uint64_t x295 = 17030115987LLU;
	volatile int32_t x296 = -1;
	static int32_t t39 = 38;

    t39 = (x293==(x294/(x295<=x296)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x302 = INT32_MIN;
	static int64_t x303 = INT64_MIN;
	int32_t t40 = 453948922;

    t40 = (x301==(x302/(x303<=x304)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x318 = -1;
	int16_t x320 = 36;
	int32_t t41 = -34389;

    t41 = (x317==(x318/(x319<=x320)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x358 = UINT16_MAX;
	int32_t x359 = INT32_MAX;

    t42 = (x357==(x358/(x359<=x360)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x365 = 523LL;
	volatile uint32_t x366 = UINT32_MAX;
	static volatile int32_t x368 = INT32_MAX;
	volatile int32_t t43 = 128;

    t43 = (x365==(x366/(x367<=x368)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x385 = -5142;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t44 = -17;

    t44 = (x385==(x386/(x387<=x388)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x398 = 0U;
	volatile uint8_t x399 = 7U;
	int32_t x400 = INT32_MAX;
	int32_t t45 = 5583297;

    t45 = (x397==(x398/(x399<=x400)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x401 = INT64_MIN;
	uint64_t x402 = 2771066367LLU;
	uint8_t x404 = UINT8_MAX;
	int32_t t46 = 10272;

    t46 = (x401==(x402/(x403<=x404)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x410 = INT64_MIN;

    t47 = (x409==(x410/(x411<=x412)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x413 = -1;
	static uint8_t x414 = 8U;
	static int8_t x415 = 49;
	int16_t x416 = 92;
	volatile int32_t t48 = -6017000;

    t48 = (x413==(x414/(x415<=x416)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x417 = -63;
	int32_t x418 = -1;
	volatile int16_t x420 = -1;
	int32_t t49 = 15127;

    t49 = (x417==(x418/(x419<=x420)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x421 = -33;
	int16_t x422 = -1;
	int64_t x423 = INT64_MIN;
	volatile uint32_t x424 = 372648698U;
	int32_t t50 = -111927156;

    t50 = (x421==(x422/(x423<=x424)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x425 = -44898662LL;
	static uint64_t x426 = UINT64_MAX;
	int16_t x428 = 1785;
	int32_t t51 = 116148;

    t51 = (x425==(x426/(x427<=x428)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x429 = INT32_MIN;
	int32_t x431 = INT32_MIN;
	uint8_t x432 = 0U;

    t52 = (x429==(x430/(x431<=x432)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x437 = UINT8_MAX;
	uint16_t x438 = 1698U;
	int32_t x439 = INT32_MIN;
	int64_t x440 = INT64_MAX;
	volatile int32_t t53 = 33341;

    t53 = (x437==(x438/(x439<=x440)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	int8_t x442 = 1;
	int64_t x443 = -1LL;
	static volatile int32_t t54 = 1736757;

    t54 = (x441==(x442/(x443<=x444)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x447 = INT32_MIN;
	int8_t x448 = INT8_MIN;
	int32_t t55 = 34;

    t55 = (x445==(x446/(x447<=x448)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	uint64_t x450 = 29352LLU;
	int16_t x451 = -1;
	volatile int32_t t56 = 3321;

    t56 = (x449==(x450/(x451<=x452)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x461 = INT8_MIN;
	static int64_t x462 = 2100131981888916829LL;
	int16_t x463 = INT16_MIN;
	volatile uint8_t x464 = 3U;

    t57 = (x461==(x462/(x463<=x464)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x469 = -28770328;
	int64_t x471 = INT64_MIN;
	static int32_t t58 = 92708;

    t58 = (x469==(x470/(x471<=x472)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x473 = 1629U;
	volatile int32_t x474 = INT32_MIN;
	static int8_t x475 = 0;
	volatile uint8_t x476 = UINT8_MAX;
	int32_t t59 = -15420548;

    t59 = (x473==(x474/(x475<=x476)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x478 = -1;
	int16_t x479 = INT16_MIN;
	volatile uint16_t x480 = UINT16_MAX;
	static int32_t t60 = -1;

    t60 = (x477==(x478/(x479<=x480)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x481 = INT16_MIN;
	int64_t x482 = -437LL;
	uint32_t x483 = 16945U;

    t61 = (x481==(x482/(x483<=x484)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x493 = -1;
	int64_t x495 = -1LL;
	int32_t t62 = 876;

    t62 = (x493==(x494/(x495<=x496)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x497 = -120973;
	int64_t x498 = INT64_MIN;
	int8_t x499 = -12;
	int32_t t63 = 0;

    t63 = (x497==(x498/(x499<=x500)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x501 = -210;
	int8_t x503 = -2;
	int16_t x504 = -1;

    t64 = (x501==(x502/(x503<=x504)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x510 = UINT8_MAX;
	uint8_t x511 = 1U;
	volatile int64_t x512 = INT64_MAX;
	int32_t t65 = -27126126;

    t65 = (x509==(x510/(x511<=x512)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x518 = -907861460;
	int32_t x519 = -170808;
	volatile int64_t x520 = 2731405186745185354LL;
	int32_t t66 = -1800;

    t66 = (x517==(x518/(x519<=x520)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x522 = INT64_MIN;
	volatile int16_t x523 = 0;
	uint32_t x524 = UINT32_MAX;

    t67 = (x521==(x522/(x523<=x524)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x533 = -1;
	int16_t x534 = INT16_MAX;
	int16_t x535 = INT16_MIN;

    t68 = (x533==(x534/(x535<=x536)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x538 = INT16_MIN;
	volatile int8_t x539 = INT8_MIN;
	int8_t x540 = INT8_MIN;

    t69 = (x537==(x538/(x539<=x540)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x541 = INT16_MIN;
	volatile int8_t x542 = INT8_MIN;
	int16_t x543 = -1;
	static int32_t t70 = -7;

    t70 = (x541==(x542/(x543<=x544)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x545 = INT8_MIN;
	uint32_t x546 = 177240368U;
	int16_t x548 = INT16_MAX;

    t71 = (x545==(x546/(x547<=x548)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x558 = 79U;
	static uint8_t x559 = UINT8_MAX;
	uint32_t x560 = UINT32_MAX;
	volatile int32_t t72 = -247304;

    t72 = (x557==(x558/(x559<=x560)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	static int64_t x562 = -1LL;
	int8_t x563 = INT8_MIN;
	int32_t x564 = -1;
	int32_t t73 = 64165;

    t73 = (x561==(x562/(x563<=x564)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x565 = 7191U;
	int8_t x566 = INT8_MIN;
	int16_t x567 = 0;
	int32_t t74 = 16462;

    t74 = (x565==(x566/(x567<=x568)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x577 = 0U;
	volatile int64_t x578 = INT64_MIN;
	int64_t x579 = -1LL;
	int8_t x580 = 52;
	volatile int32_t t75 = 1;

    t75 = (x577==(x578/(x579<=x580)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x585 = -7230;
	int64_t x587 = -465463LL;
	int32_t t76 = 1028857861;

    t76 = (x585==(x586/(x587<=x588)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x589 = -8128071;
	int8_t x592 = INT8_MIN;
	static int32_t t77 = -110969627;

    t77 = (x589==(x590/(x591<=x592)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x595 = INT16_MIN;
	int32_t x596 = -2482;
	volatile int32_t t78 = -25800667;

    t78 = (x593==(x594/(x595<=x596)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x597 = UINT8_MAX;
	uint64_t x598 = 17898057577855647LLU;
	volatile int8_t x599 = -1;
	volatile int32_t t79 = 10186;

    t79 = (x597==(x598/(x599<=x600)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x605 = INT8_MIN;
	volatile int8_t x607 = INT8_MIN;
	int32_t x608 = INT32_MAX;
	volatile int32_t t80 = -21;

    t80 = (x605==(x606/(x607<=x608)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x610 = 0U;
	int64_t x612 = INT64_MAX;
	static volatile int32_t t81 = 10;

    t81 = (x609==(x610/(x611<=x612)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x618 = -1LL;
	static uint64_t x620 = UINT64_MAX;
	volatile int32_t t82 = -649189111;

    t82 = (x617==(x618/(x619<=x620)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x621 = -45;
	static volatile int32_t x622 = -1074762;
	volatile int32_t t83 = 155448;

    t83 = (x621==(x622/(x623<=x624)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x629 = INT64_MIN;
	int64_t x630 = INT64_MIN;
	int32_t x631 = -1320;
	uint8_t x632 = UINT8_MAX;
	volatile int32_t t84 = 1;

    t84 = (x629==(x630/(x631<=x632)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x637 = INT64_MIN;
	uint32_t x638 = UINT32_MAX;
	int64_t x639 = INT64_MIN;
	volatile uint8_t x640 = 59U;

    t85 = (x637==(x638/(x639<=x640)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x642 = 869155LLU;
	int16_t x644 = INT16_MIN;
	int32_t t86 = -490;

    t86 = (x641==(x642/(x643<=x644)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x646 = -1LL;
	int8_t x647 = -1;
	int64_t x648 = -1LL;

    t87 = (x645==(x646/(x647<=x648)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x653 = INT8_MIN;
	int32_t x655 = INT32_MIN;
	int16_t x656 = INT16_MIN;
	int32_t t88 = 2;

    t88 = (x653==(x654/(x655<=x656)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x662 = 32U;
	uint16_t x663 = 3777U;
	uint16_t x664 = UINT16_MAX;
	int32_t t89 = -140;

    t89 = (x661==(x662/(x663<=x664)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x665 = 7;
	int32_t x666 = INT32_MAX;
	uint64_t x667 = 158561LLU;
	int32_t t90 = 1999;

    t90 = (x665==(x666/(x667<=x668)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x669 = 4084U;
	int8_t x671 = INT8_MIN;
	int8_t x672 = INT8_MIN;
	int32_t t91 = 68468;

    t91 = (x669==(x670/(x671<=x672)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x679 = INT16_MIN;
	static int16_t x680 = 1;
	int32_t t92 = -6482;

    t92 = (x677==(x678/(x679<=x680)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x681 = 2U;
	uint16_t x682 = 117U;
	int16_t x683 = INT16_MIN;
	int8_t x684 = -1;

    t93 = (x681==(x682/(x683<=x684)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x685 = UINT16_MAX;
	int8_t x686 = INT8_MAX;
	volatile int16_t x687 = INT16_MIN;
	static uint8_t x688 = 86U;
	volatile int32_t t94 = 210;

    t94 = (x685==(x686/(x687<=x688)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x693 = INT16_MIN;
	int16_t x694 = INT16_MIN;
	int8_t x695 = -1;
	int16_t x696 = INT16_MAX;

    t95 = (x693==(x694/(x695<=x696)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x699 = -1;
	static uint64_t x700 = UINT64_MAX;
	int32_t t96 = -671;

    t96 = (x697==(x698/(x699<=x700)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x710 = INT32_MIN;
	volatile int8_t x711 = 1;
	uint32_t x712 = 570U;
	int32_t t97 = -45;

    t97 = (x709==(x710/(x711<=x712)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x725 = -31;
	static int16_t x726 = -7;
	static int32_t x727 = -1;
	static int32_t x728 = INT32_MAX;

    t98 = (x725==(x726/(x727<=x728)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint16_t x729 = UINT16_MAX;
	int32_t x731 = INT32_MIN;
	int16_t x732 = INT16_MAX;
	volatile int32_t t99 = -110648;

    t99 = (x729==(x730/(x731<=x732)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x733 = 192609827LLU;
	uint8_t x734 = 26U;
	int16_t x735 = INT16_MIN;
	int64_t x736 = 10474800599212LL;
	static int32_t t100 = 29390;

    t100 = (x733==(x734/(x735<=x736)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x741 = 501910LLU;
	static uint8_t x743 = 1U;
	static volatile uint32_t x744 = 2079013U;
	volatile int32_t t101 = 49690;

    t101 = (x741==(x742/(x743<=x744)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x745 = -14275;
	volatile uint64_t x747 = UINT64_MAX;
	int32_t x748 = -1;
	volatile int32_t t102 = -739;

    t102 = (x745==(x746/(x747<=x748)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x750 = 1965772357LLU;
	uint8_t x751 = UINT8_MAX;
	int32_t x752 = 1717263;
	static volatile int32_t t103 = 0;

    t103 = (x749==(x750/(x751<=x752)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x753 = 1;
	int32_t x754 = -249493;
	volatile int64_t x755 = INT64_MAX;
	static int32_t t104 = 154;

    t104 = (x753==(x754/(x755<=x756)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x763 = 1U;
	volatile int32_t t105 = -32391;

    t105 = (x761==(x762/(x763<=x764)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x773 = INT32_MIN;
	int32_t x774 = INT32_MIN;
	uint64_t x775 = 5LLU;
	int32_t t106 = -10933;

    t106 = (x773==(x774/(x775<=x776)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x777 = INT16_MAX;
	int64_t x778 = INT64_MIN;
	int64_t x779 = INT64_MIN;
	int32_t x780 = 200735018;
	static volatile int32_t t107 = 34405290;

    t107 = (x777==(x778/(x779<=x780)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x781 = INT32_MAX;
	uint8_t x782 = 1U;
	int16_t x783 = INT16_MIN;
	int8_t x784 = -63;
	volatile int32_t t108 = -533;

    t108 = (x781==(x782/(x783<=x784)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x785 = 3946U;
	volatile int32_t x786 = INT32_MAX;
	int32_t x787 = INT32_MIN;
	int16_t x788 = INT16_MIN;
	int32_t t109 = 10;

    t109 = (x785==(x786/(x787<=x788)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x789 = -2;
	uint64_t x790 = UINT64_MAX;
	int32_t x791 = INT32_MIN;
	int32_t t110 = 268342776;

    t110 = (x789==(x790/(x791<=x792)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x794 = INT16_MIN;
	uint64_t x795 = 1LLU;
	uint32_t x796 = UINT32_MAX;
	volatile int32_t t111 = -40;

    t111 = (x793==(x794/(x795<=x796)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x825 = 58;
	int8_t x826 = INT8_MAX;
	int64_t x827 = INT64_MIN;
	int16_t x828 = INT16_MIN;
	volatile int32_t t112 = 26980885;

    t112 = (x825==(x826/(x827<=x828)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x845 = 2U;
	volatile int16_t x846 = INT16_MIN;
	volatile uint8_t x847 = 0U;
	uint16_t x848 = UINT16_MAX;
	int32_t t113 = 253970;

    t113 = (x845==(x846/(x847<=x848)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x849 = 683U;
	int32_t t114 = -530121802;

    t114 = (x849==(x850/(x851<=x852)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x865 = -1060479895LL;
	int16_t x866 = INT16_MAX;
	int64_t x867 = INT64_MIN;
	static volatile int8_t x868 = INT8_MIN;

    t115 = (x865==(x866/(x867<=x868)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x873 = UINT8_MAX;
	uint64_t x875 = UINT64_MAX;
	int64_t x876 = -1LL;
	static volatile int32_t t116 = 5949;

    t116 = (x873==(x874/(x875<=x876)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x877 = UINT16_MAX;
	static int64_t x879 = -3262479LL;
	int16_t x880 = INT16_MAX;
	int32_t t117 = 30;

    t117 = (x877==(x878/(x879<=x880)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x881 = 12913U;
	int8_t x882 = -1;
	volatile uint16_t x883 = 2165U;
	uint64_t x884 = 110956599800326LLU;
	volatile int32_t t118 = 4902;

    t118 = (x881==(x882/(x883<=x884)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x888 = 6U;
	volatile int32_t t119 = -2471538;

    t119 = (x885==(x886/(x887<=x888)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x893 = INT64_MAX;
	int16_t x895 = INT16_MIN;
	uint8_t x896 = 5U;
	volatile int32_t t120 = 0;

    t120 = (x893==(x894/(x895<=x896)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x899 = INT16_MIN;
	uint8_t x900 = 18U;
	volatile int32_t t121 = 111551;

    t121 = (x897==(x898/(x899<=x900)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x901 = -1LL;
	int64_t x902 = INT64_MIN;
	volatile uint64_t x903 = 26319248LLU;
	static int16_t x904 = INT16_MIN;
	int32_t t122 = 1;

    t122 = (x901==(x902/(x903<=x904)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x917 = UINT16_MAX;
	int8_t x918 = INT8_MAX;
	volatile int32_t x919 = INT32_MIN;
	volatile int32_t x920 = INT32_MIN;
	static volatile int32_t t123 = 1;

    t123 = (x917==(x918/(x919<=x920)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x921 = 2313265419LLU;
	int32_t x922 = -261453;
	int16_t x923 = -230;
	int16_t x924 = -1;
	static volatile int32_t t124 = 130567771;

    t124 = (x921==(x922/(x923<=x924)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x933 = INT64_MAX;
	volatile int8_t x936 = INT8_MAX;
	int32_t t125 = 394515;

    t125 = (x933==(x934/(x935<=x936)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x937 = INT16_MIN;
	uint8_t x938 = UINT8_MAX;
	int8_t x939 = INT8_MIN;

    t126 = (x937==(x938/(x939<=x940)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x941 = 1789;
	int32_t x942 = 22749080;
	int32_t x943 = INT32_MAX;
	static volatile int32_t t127 = 1158863;

    t127 = (x941==(x942/(x943<=x944)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x977 = UINT64_MAX;
	static uint8_t x978 = 4U;
	int64_t x979 = INT64_MIN;
	uint64_t x980 = UINT64_MAX;
	int32_t t128 = -60360;

    t128 = (x977==(x978/(x979<=x980)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x981 = INT16_MIN;
	uint32_t x982 = 47663335U;
	int16_t x983 = -17;
	volatile int32_t t129 = 898765;

    t129 = (x981==(x982/(x983<=x984)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x993 = 15193383;
	int64_t x994 = 622LL;
	static int32_t x995 = -3010;
	volatile uint8_t x996 = UINT8_MAX;

    t130 = (x993==(x994/(x995<=x996)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x997 = -1;
	int32_t x998 = INT32_MIN;
	static int8_t x999 = INT8_MIN;
	static int8_t x1000 = -1;

    t131 = (x997==(x998/(x999<=x1000)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x1005 = 9086854264034LLU;
	int32_t x1006 = INT32_MIN;
	uint32_t x1008 = UINT32_MAX;

    t132 = (x1005==(x1006/(x1007<=x1008)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1017 = -1339;
	volatile uint16_t x1019 = 200U;
	volatile int32_t t133 = -86363148;

    t133 = (x1017==(x1018/(x1019<=x1020)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1021 = 953U;
	int32_t x1023 = 18;
	uint64_t x1024 = 417103575443755632LLU;

    t134 = (x1021==(x1022/(x1023<=x1024)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x1025 = 160U;
	static int32_t x1026 = 11;
	uint16_t x1027 = 1U;
	volatile uint16_t x1028 = UINT16_MAX;
	static int32_t t135 = 1;

    t135 = (x1025==(x1026/(x1027<=x1028)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1037 = -1;
	volatile int8_t x1038 = INT8_MAX;
	int8_t x1039 = 42;
	static volatile uint32_t x1040 = 16116001U;
	volatile int32_t t136 = -774418970;

    t136 = (x1037==(x1038/(x1039<=x1040)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x1041 = 18656514272713LLU;
	static int32_t x1042 = INT32_MAX;
	int8_t x1043 = -1;
	int8_t x1044 = -1;
	int32_t t137 = 1;

    t137 = (x1041==(x1042/(x1043<=x1044)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x1045 = -1;
	uint32_t x1047 = 418U;
	static int8_t x1048 = -30;
	volatile int32_t t138 = 113117568;

    t138 = (x1045==(x1046/(x1047<=x1048)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x1050 = INT16_MIN;
	static int16_t x1051 = -1;
	int8_t x1052 = INT8_MAX;
	volatile int32_t t139 = 4;

    t139 = (x1049==(x1050/(x1051<=x1052)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x1065 = 648304773863808254LLU;
	volatile int32_t x1066 = INT32_MIN;
	int32_t x1067 = -1;
	volatile int64_t x1068 = INT64_MAX;
	volatile int32_t t140 = -8038;

    t140 = (x1065==(x1066/(x1067<=x1068)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1069 = 26LL;
	volatile int64_t x1071 = INT64_MIN;
	uint16_t x1072 = UINT16_MAX;
	int32_t t141 = 31470705;

    t141 = (x1069==(x1070/(x1071<=x1072)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1077 = -2;
	uint8_t x1078 = 127U;
	volatile int32_t t142 = -4947637;

    t142 = (x1077==(x1078/(x1079<=x1080)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1082 = -346;
	uint32_t x1083 = 12U;
	static uint32_t x1084 = 124429261U;
	static int32_t t143 = 0;

    t143 = (x1081==(x1082/(x1083<=x1084)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1089 = UINT8_MAX;
	int64_t x1090 = -2069944LL;
	int16_t x1091 = INT16_MIN;
	int8_t x1092 = INT8_MIN;

    t144 = (x1089==(x1090/(x1091<=x1092)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1093 = UINT32_MAX;
	int64_t x1094 = 918LL;
	static volatile int64_t x1095 = INT64_MIN;
	volatile int64_t x1096 = INT64_MIN;
	int32_t t145 = -20;

    t145 = (x1093==(x1094/(x1095<=x1096)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1105 = 288U;
	int8_t x1106 = INT8_MAX;
	volatile int64_t x1107 = INT64_MIN;
	int16_t x1108 = -1;
	volatile int32_t t146 = -341448;

    t146 = (x1105==(x1106/(x1107<=x1108)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x1113 = INT16_MIN;
	int32_t x1114 = INT32_MAX;
	int32_t t147 = -1337;

    t147 = (x1113==(x1114/(x1115<=x1116)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1122 = 152LL;
	uint64_t x1123 = 2662329622223LLU;
	int8_t x1124 = -1;
	volatile int32_t t148 = 102100309;

    t148 = (x1121==(x1122/(x1123<=x1124)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1129 = INT32_MIN;
	int16_t x1130 = -1;
	volatile int64_t x1131 = -1LL;
	volatile int8_t x1132 = -1;

    t149 = (x1129==(x1130/(x1131<=x1132)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x1145 = INT64_MIN;
	int8_t x1146 = 11;
	static int64_t x1147 = -1LL;
	int32_t t150 = -4852044;

    t150 = (x1145==(x1146/(x1147<=x1148)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1153 = INT16_MIN;
	static uint64_t x1154 = 22LLU;
	volatile int8_t x1155 = 3;
	static int32_t t151 = -4;

    t151 = (x1153==(x1154/(x1155<=x1156)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x1173 = INT8_MIN;
	int64_t x1174 = -1LL;
	uint8_t x1175 = UINT8_MAX;

    t152 = (x1173==(x1174/(x1175<=x1176)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1177 = INT64_MIN;
	volatile int16_t x1179 = INT16_MIN;
	static volatile int32_t t153 = 76912295;

    t153 = (x1177==(x1178/(x1179<=x1180)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1190 = INT16_MAX;
	int32_t x1191 = INT32_MIN;
	static uint16_t x1192 = 560U;

    t154 = (x1189==(x1190/(x1191<=x1192)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1193 = 327782U;
	uint64_t x1194 = UINT64_MAX;
	int8_t x1196 = -1;
	int32_t t155 = 229768403;

    t155 = (x1193==(x1194/(x1195<=x1196)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1209 = 7U;
	int8_t x1210 = INT8_MIN;
	int8_t x1212 = INT8_MIN;

    t156 = (x1209==(x1210/(x1211<=x1212)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x1213 = 25U;
	static volatile int16_t x1214 = -1;
	volatile uint8_t x1216 = 1U;
	volatile int32_t t157 = 3296358;

    t157 = (x1213==(x1214/(x1215<=x1216)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1217 = INT16_MAX;
	int32_t x1218 = -417464990;
	int16_t x1219 = -1;
	volatile int32_t t158 = 56739;

    t158 = (x1217==(x1218/(x1219<=x1220)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1229 = 96U;
	int8_t x1230 = INT8_MIN;
	uint64_t x1231 = 1LLU;
	volatile int16_t x1232 = 7;
	volatile int32_t t159 = 239879;

    t159 = (x1229==(x1230/(x1231<=x1232)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1233 = 1719234384LLU;
	int32_t x1234 = 4;
	volatile uint16_t x1236 = 1U;
	int32_t t160 = -2;

    t160 = (x1233==(x1234/(x1235<=x1236)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1237 = 56U;
	int8_t x1238 = INT8_MAX;
	int64_t x1239 = -10862257579LL;
	volatile int32_t t161 = 633261791;

    t161 = (x1237==(x1238/(x1239<=x1240)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1245 = -1922LL;
	uint8_t x1246 = 61U;
	static int64_t x1247 = INT64_MIN;

    t162 = (x1245==(x1246/(x1247<=x1248)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1249 = UINT8_MAX;
	volatile uint64_t x1250 = 35257554597299176LLU;
	int8_t x1251 = -1;
	uint32_t x1252 = UINT32_MAX;

    t163 = (x1249==(x1250/(x1251<=x1252)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1253 = -1;
	int64_t x1254 = INT64_MIN;
	int8_t x1255 = INT8_MAX;
	int32_t t164 = 24;

    t164 = (x1253==(x1254/(x1255<=x1256)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1257 = INT32_MIN;
	int8_t x1258 = -1;
	static uint16_t x1259 = 23U;
	volatile uint8_t x1260 = 112U;
	static volatile int32_t t165 = -61;

    t165 = (x1257==(x1258/(x1259<=x1260)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x1265 = 9U;
	uint8_t x1266 = 0U;
	uint32_t x1267 = 676100925U;
	static int32_t x1268 = INT32_MAX;
	int32_t t166 = 5;

    t166 = (x1265==(x1266/(x1267<=x1268)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1281 = 9;
	volatile int64_t x1282 = INT64_MIN;
	volatile uint8_t x1284 = 0U;
	static volatile int32_t t167 = -53;

    t167 = (x1281==(x1282/(x1283<=x1284)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1306 = INT32_MAX;
	volatile int8_t x1307 = INT8_MAX;
	uint64_t x1308 = UINT64_MAX;

    t168 = (x1305==(x1306/(x1307<=x1308)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x1313 = 71U;
	static uint16_t x1314 = 7827U;
	int8_t x1315 = 4;
	int16_t x1316 = 67;

    t169 = (x1313==(x1314/(x1315<=x1316)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1317 = 117U;
	int16_t x1318 = INT16_MAX;
	int16_t x1320 = INT16_MIN;

    t170 = (x1317==(x1318/(x1319<=x1320)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1333 = 3U;
	int64_t x1334 = INT64_MIN;
	int64_t x1335 = -2227377766LL;
	static int16_t x1336 = -503;
	int32_t t171 = 7777;

    t171 = (x1333==(x1334/(x1335<=x1336)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1337 = INT64_MIN;
	int64_t x1339 = -13207349583856LL;
	uint8_t x1340 = UINT8_MAX;
	volatile int32_t t172 = -5;

    t172 = (x1337==(x1338/(x1339<=x1340)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1353 = 2544U;
	uint8_t x1356 = UINT8_MAX;
	static int32_t t173 = 6;

    t173 = (x1353==(x1354/(x1355<=x1356)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1369 = INT16_MAX;
	uint32_t x1370 = UINT32_MAX;
	static int8_t x1372 = INT8_MIN;

    t174 = (x1369==(x1370/(x1371<=x1372)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1373 = INT64_MAX;
	static volatile uint64_t x1374 = UINT64_MAX;
	uint64_t x1375 = 18655318LLU;
	int64_t x1376 = 127230191LL;
	volatile int32_t t175 = -56982;

    t175 = (x1373==(x1374/(x1375<=x1376)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1394 = UINT64_MAX;
	uint32_t x1396 = 256734767U;

    t176 = (x1393==(x1394/(x1395<=x1396)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1397 = INT64_MAX;
	volatile int32_t x1399 = INT32_MIN;
	int8_t x1400 = INT8_MIN;
	int32_t t177 = -1;

    t177 = (x1397==(x1398/(x1399<=x1400)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x1429 = UINT32_MAX;
	volatile int64_t x1430 = 3122LL;
	int8_t x1431 = INT8_MIN;
	volatile int64_t x1432 = -15LL;
	int32_t t178 = -2040258;

    t178 = (x1429==(x1430/(x1431<=x1432)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1441 = INT16_MIN;
	volatile uint32_t x1442 = UINT32_MAX;
	volatile int32_t x1443 = 5272273;
	int32_t x1444 = 9692941;
	static volatile int32_t t179 = -1085373;

    t179 = (x1441==(x1442/(x1443<=x1444)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1453 = INT64_MIN;
	uint32_t x1454 = 28118U;
	int32_t t180 = 74;

    t180 = (x1453==(x1454/(x1455<=x1456)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1461 = 1;
	uint32_t x1463 = 498U;
	int8_t x1464 = -1;

    t181 = (x1461==(x1462/(x1463<=x1464)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1481 = -6;
	int32_t x1483 = INT32_MIN;
	int16_t x1484 = -1;

    t182 = (x1481==(x1482/(x1483<=x1484)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x1489 = INT16_MAX;
	uint64_t x1490 = 34196442122139LLU;
	int32_t x1491 = -217;
	static int8_t x1492 = INT8_MIN;
	static volatile int32_t t183 = 3180010;

    t183 = (x1489==(x1490/(x1491<=x1492)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1493 = 7642;
	int64_t x1494 = -50331561502LL;
	volatile int64_t x1495 = INT64_MIN;
	int32_t x1496 = 286719177;
	static volatile int32_t t184 = 16;

    t184 = (x1493==(x1494/(x1495<=x1496)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1497 = -1LL;
	int16_t x1498 = INT16_MIN;
	int64_t x1499 = 3508LL;
	uint64_t x1500 = 698825402LLU;
	int32_t t185 = -10;

    t185 = (x1497==(x1498/(x1499<=x1500)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1507 = 14U;
	static uint16_t x1508 = UINT16_MAX;
	volatile int32_t t186 = -8790;

    t186 = (x1505==(x1506/(x1507<=x1508)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1509 = 16542621LL;
	int64_t x1510 = INT64_MIN;
	int64_t x1511 = -1LL;
	uint32_t x1512 = 3U;
	int32_t t187 = 308182;

    t187 = (x1509==(x1510/(x1511<=x1512)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1514 = UINT16_MAX;
	int64_t x1515 = 102LL;
	uint16_t x1516 = UINT16_MAX;
	static int32_t t188 = 4;

    t188 = (x1513==(x1514/(x1515<=x1516)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x1518 = INT64_MIN;
	int8_t x1519 = INT8_MAX;
	uint8_t x1520 = UINT8_MAX;
	volatile int32_t t189 = 1488;

    t189 = (x1517==(x1518/(x1519<=x1520)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1525 = INT32_MAX;
	uint16_t x1528 = UINT16_MAX;
	int32_t t190 = -8;

    t190 = (x1525==(x1526/(x1527<=x1528)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1529 = 1;
	uint16_t x1530 = 0U;
	int16_t x1531 = -1;
	volatile int32_t t191 = 3023569;

    t191 = (x1529==(x1530/(x1531<=x1532)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1538 = INT8_MIN;
	int32_t x1539 = INT32_MIN;
	static volatile int32_t t192 = 984888;

    t192 = (x1537==(x1538/(x1539<=x1540)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1545 = -803321777;
	int64_t x1547 = INT64_MIN;
	static int8_t x1548 = -1;
	int32_t t193 = -5705;

    t193 = (x1545==(x1546/(x1547<=x1548)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x1571 = INT32_MIN;
	uint8_t x1572 = 0U;
	static volatile int32_t t194 = 79;

    t194 = (x1569==(x1570/(x1571<=x1572)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1573 = -43;
	uint16_t x1574 = UINT16_MAX;
	uint32_t x1575 = 1683U;
	int8_t x1576 = -36;

    t195 = (x1573==(x1574/(x1575<=x1576)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1583 = -1;

    t196 = (x1581==(x1582/(x1583<=x1584)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1585 = -57;
	int64_t x1586 = INT64_MIN;
	uint16_t x1587 = 8953U;
	int32_t t197 = -2165;

    t197 = (x1585==(x1586/(x1587<=x1588)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1597 = 43U;
	static uint16_t x1598 = UINT16_MAX;
	volatile int64_t x1599 = INT64_MIN;
	volatile int8_t x1600 = -1;
	static volatile int32_t t198 = -1;

    t198 = (x1597==(x1598/(x1599<=x1600)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1601 = INT32_MIN;
	volatile uint8_t x1602 = UINT8_MAX;
	static uint64_t x1603 = 794500973984LLU;
	int16_t x1604 = -1;
	int32_t t199 = 94410076;

    t199 = (x1601==(x1602/(x1603<=x1604)));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

