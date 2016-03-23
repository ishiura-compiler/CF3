
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

int32_t x2 = 92;
int32_t x4 = INT32_MIN;
int16_t x10 = INT16_MIN;
static uint16_t x11 = 213U;
uint16_t x33 = 366U;
int16_t x34 = 23;
int32_t t3 = 425098944;
int32_t x38 = INT32_MIN;
int8_t x42 = INT8_MIN;
int16_t x45 = INT16_MAX;
static int8_t x47 = INT8_MIN;
int64_t x48 = -1LL;
int32_t x50 = INT32_MAX;
int32_t x65 = 149;
int32_t x96 = -7;
volatile int8_t x103 = -1;
volatile int16_t x104 = 6;
int16_t x122 = INT16_MIN;
int64_t t17 = INT64_MAX;
uint16_t x141 = 225U;
uint16_t x144 = UINT16_MAX;
int64_t x158 = INT64_MIN;
uint64_t t20 = UINT64_MAX;
static int64_t x172 = 41LL;
int64_t x173 = INT64_MAX;
static int64_t x205 = 56LL;
int8_t x206 = -34;
int32_t x210 = INT32_MAX;
volatile int32_t x226 = INT32_MIN;
volatile uint16_t x231 = UINT16_MAX;
int16_t x240 = INT16_MAX;
volatile int8_t x252 = INT8_MIN;
int8_t x253 = INT8_MAX;
int8_t x254 = -1;
int32_t x259 = INT32_MIN;
static uint32_t x264 = 48152U;
int32_t t35 = 79;
int8_t x270 = -1;
int16_t x285 = INT16_MAX;
int16_t x296 = INT16_MAX;
int64_t x302 = -188058699912LL;
int32_t x304 = INT32_MIN;
int32_t x313 = INT32_MAX;
int8_t x316 = -1;
volatile uint32_t t43 = UINT32_MAX;
volatile uint64_t t44 = UINT64_MAX;
uint32_t x325 = 3498U;
volatile uint32_t t45 = 1914050U;
volatile uint64_t x340 = 7392802LLU;
volatile uint64_t t47 = 2LLU;
volatile int32_t t50 = 24531;
int8_t x356 = INT8_MIN;
int32_t x380 = INT32_MAX;
int64_t x394 = 8450446993855LL;
static uint32_t x410 = UINT32_MAX;
static int64_t x417 = 2048353384211679LL;
uint16_t x418 = UINT16_MAX;
static int64_t x419 = INT64_MAX;
int32_t x420 = -9626775;
static volatile int64_t t59 = 2000197999715LL;
uint64_t x438 = UINT64_MAX;
int32_t x473 = 0;
int8_t x488 = INT8_MAX;
static uint32_t x497 = 2U;
static int64_t x499 = -1LL;
uint32_t t67 = 2U;
uint64_t x510 = 707445707308473908LLU;
int8_t x511 = INT8_MIN;
uint8_t x530 = UINT8_MAX;
int32_t x531 = INT32_MIN;
int64_t t71 = -4576923LL;
int32_t t72 = INT32_MAX;
int32_t x538 = -2423;
uint8_t x539 = 7U;
uint32_t x552 = 187467U;
static volatile uint64_t t75 = 1578822409162419LLU;
int16_t x566 = INT16_MIN;
volatile uint16_t x572 = 3U;
volatile int64_t x609 = INT64_MAX;
int8_t x619 = -1;
int16_t x625 = 4;
int64_t x627 = 855348LL;
int32_t x645 = 1859;
uint64_t x646 = UINT64_MAX;
uint32_t x653 = 1U;
volatile uint32_t t86 = 7602U;
int32_t t88 = 3;
int16_t x669 = 1;
static uint64_t x672 = 15422124LLU;
volatile int32_t t89 = -186083;
int32_t x677 = INT32_MAX;
volatile int16_t x689 = 708;
volatile int32_t x704 = INT32_MIN;
int8_t x715 = INT8_MAX;
int32_t t98 = -173;
int32_t x731 = -1082;
volatile uint8_t x733 = 14U;
volatile uint64_t x736 = 291675LLU;
static int32_t x743 = 1;
uint32_t x746 = 59494081U;
int16_t x747 = -1;
uint64_t x762 = 26404936942748LLU;
static uint32_t x765 = 707353U;
uint64_t x795 = 5077990LLU;
int32_t x811 = -140816;
int64_t x812 = INT64_MIN;
static int64_t x818 = -223500849LL;
static volatile int32_t t112 = -2;
static int64_t x836 = 1234LL;
int16_t x840 = INT16_MAX;
static uint32_t x841 = 199518U;
static volatile int32_t x851 = INT32_MIN;
static uint32_t t117 = 12098821U;
volatile uint32_t x865 = 3174881U;
int8_t x867 = 52;
uint32_t x869 = UINT32_MAX;
int32_t x870 = 2;
uint64_t x873 = 18087177051LLU;
static uint64_t x881 = 11588439512LLU;
volatile uint16_t x887 = UINT16_MAX;
uint64_t x889 = 550932366LLU;
int64_t x890 = INT64_MIN;
volatile uint16_t x904 = UINT16_MAX;
static volatile int32_t t128 = 110;
uint16_t x917 = 56U;
volatile int8_t x918 = INT8_MIN;
uint64_t x919 = UINT64_MAX;
volatile uint32_t x934 = 11U;
static int32_t x935 = INT32_MIN;
volatile uint8_t x943 = 68U;
volatile int64_t t133 = 0LL;
volatile int64_t t134 = INT64_MAX;
uint16_t x953 = 2848U;
volatile int32_t t135 = 1883086;
int16_t x965 = INT16_MAX;
int16_t x974 = -1;
int32_t t140 = 896245356;
int64_t x990 = -235553001LL;
uint16_t x994 = 14415U;
int64_t x995 = INT64_MIN;
int8_t x996 = -1;
volatile int32_t x1002 = 452581;
static int32_t t143 = 1727;
int16_t x1005 = 23;
int32_t t144 = -165;
static volatile int8_t x1027 = 22;
volatile uint64_t t145 = UINT64_MAX;
static int64_t x1040 = -1LL;
volatile int32_t t146 = 94370;
uint32_t x1041 = UINT32_MAX;
int32_t x1044 = -1;
int16_t x1058 = INT16_MIN;
volatile uint64_t x1059 = 363572LLU;
uint32_t x1064 = UINT32_MAX;
static int32_t x1072 = INT32_MIN;
uint32_t x1079 = 2831828U;
uint64_t x1084 = UINT64_MAX;
int64_t x1105 = INT64_MAX;
uint32_t t156 = UINT32_MAX;
volatile uint32_t t157 = 1074044662U;
volatile uint64_t t158 = UINT64_MAX;
int8_t x1125 = 0;
int32_t x1127 = INT32_MIN;
volatile int32_t t159 = 253;
uint32_t t161 = 187792828U;
static uint64_t x1151 = UINT64_MAX;
uint32_t x1154 = 1200857U;
uint8_t x1155 = 115U;
int32_t x1157 = 74249514;
uint32_t x1160 = 54483U;
volatile uint32_t x1169 = 4609865U;
uint32_t x1182 = UINT32_MAX;
int8_t x1183 = -13;
volatile int32_t t171 = -1642;
static volatile int64_t x1212 = INT64_MIN;
volatile int32_t t176 = -25;
volatile int64_t x1213 = 25690789LL;
int64_t t177 = -1095716107228426LL;
static uint8_t x1222 = 84U;
static uint64_t t179 = 1211360610883374LLU;
volatile uint8_t x1233 = UINT8_MAX;
uint8_t x1234 = UINT8_MAX;
int16_t x1246 = -1;
volatile uint8_t x1254 = UINT8_MAX;
uint32_t t183 = 21U;
static int8_t x1260 = -1;
uint64_t x1261 = UINT64_MAX;
static int64_t x1276 = INT64_MIN;
int64_t x1279 = -15563638208565LL;
int32_t x1280 = -1;
static volatile int64_t x1282 = -3775626LL;
static int64_t x1291 = INT64_MAX;
int16_t x1292 = -1;
static uint16_t x1299 = UINT16_MAX;
int32_t x1302 = INT32_MAX;
int8_t x1306 = INT8_MIN;
int64_t x1308 = INT64_MIN;
int8_t x1312 = INT8_MIN;
int32_t x1320 = -1;


void f0(void) {
    	int8_t x1 = 59;
	int8_t x3 = INT8_MIN;
	int32_t t0 = 293067394;

    t0 = (x1<<(x2==(x3<=x4)));

    if (t0 != 59) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 439670LLU;
	volatile int16_t x6 = -1;
	int32_t x7 = -16693044;
	volatile int8_t x8 = INT8_MAX;
	volatile uint64_t t1 = 854240LLU;

    t1 = (x5<<(x6==(x7<=x8)));

    if (t1 != 439670LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 1460;

    t2 = (x9<<(x10==(x11<=x12)));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x35 = -1LL;
	uint8_t x36 = 11U;

    t3 = (x33<<(x34==(x35<=x36)));

    if (t3 != 366) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x37 = 2U;
	static int16_t x39 = INT16_MIN;
	int8_t x40 = -1;
	volatile uint32_t t4 = 30565U;

    t4 = (x37<<(x38==(x39<=x40)));

    if (t4 != 2U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x41 = 645358809LL;
	static volatile int16_t x43 = INT16_MIN;
	uint64_t x44 = 12086251537422313LLU;
	volatile int64_t t5 = 0LL;

    t5 = (x41<<(x42==(x43<=x44)));

    if (t5 != 645358809LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x46 = 55;
	volatile int32_t t6 = -807;

    t6 = (x45<<(x46==(x47<=x48)));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x49 = 9966U;
	uint8_t x51 = UINT8_MAX;
	int32_t x52 = -1;
	volatile int32_t t7 = -1917;

    t7 = (x49<<(x50==(x51<=x52)));

    if (t7 != 9966) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x53 = 1;
	int16_t x54 = INT16_MIN;
	static volatile int8_t x55 = INT8_MAX;
	int64_t x56 = -1LL;
	volatile int32_t t8 = -1;

    t8 = (x53<<(x54==(x55<=x56)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x57 = 285844240U;
	uint32_t x58 = 19841U;
	int8_t x59 = -1;
	volatile int64_t x60 = -1LL;
	uint32_t t9 = 78230U;

    t9 = (x57<<(x58==(x59<=x60)));

    if (t9 != 285844240U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x66 = UINT8_MAX;
	uint64_t x67 = 13916147353494LLU;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t10 = -4;

    t10 = (x65<<(x66==(x67<=x68)));

    if (t10 != 149) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x77 = UINT8_MAX;
	int64_t x78 = -1LL;
	uint16_t x79 = 13U;
	int16_t x80 = -291;
	volatile int32_t t11 = -22200;

    t11 = (x77<<(x78==(x79<=x80)));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x85 = 66U;
	static uint32_t x86 = 3U;
	uint32_t x87 = 53U;
	uint32_t x88 = 534881U;
	volatile int32_t t12 = 5;

    t12 = (x85<<(x86==(x87<=x88)));

    if (t12 != 66) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x93 = UINT64_MAX;
	static uint64_t x94 = 22448LLU;
	static int16_t x95 = -1;
	uint64_t t13 = UINT64_MAX;

    t13 = (x93<<(x94==(x95<=x96)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x101 = 158U;
	int8_t x102 = INT8_MIN;
	volatile int32_t t14 = 78;

    t14 = (x101<<(x102==(x103<=x104)));

    if (t14 != 158) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x105 = 4U;
	static uint32_t x106 = 54U;
	static int16_t x107 = 3;
	int32_t x108 = INT32_MAX;
	volatile int32_t t15 = 58778;

    t15 = (x105<<(x106==(x107<=x108)));

    if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x121 = 9291988U;
	int16_t x123 = INT16_MAX;
	volatile int8_t x124 = -1;
	uint32_t t16 = 122U;

    t16 = (x121<<(x122==(x123<=x124)));

    if (t16 != 9291988U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x125 = INT64_MAX;
	static volatile int16_t x126 = INT16_MAX;
	uint64_t x127 = 61561LLU;
	int16_t x128 = -1;

    t17 = (x125<<(x126==(x127<=x128)));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x133 = 21U;
	int32_t x134 = -409;
	int32_t x135 = INT32_MIN;
	int32_t x136 = 0;
	int32_t t18 = 0;

    t18 = (x133<<(x134==(x135<=x136)));

    if (t18 != 21) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MIN;
	static volatile int32_t t19 = -296233;

    t19 = (x141<<(x142==(x143<=x144)));

    if (t19 != 225) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x157 = UINT64_MAX;
	uint8_t x159 = 6U;
	int8_t x160 = INT8_MIN;

    t20 = (x157<<(x158==(x159<=x160)));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x165 = 0;
	uint64_t x166 = 86890181LLU;
	int32_t x167 = INT32_MAX;
	volatile int8_t x168 = -1;
	int32_t t21 = 12534;

    t21 = (x165<<(x166==(x167<=x168)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x169 = 3627277U;
	int16_t x170 = INT16_MAX;
	static volatile int16_t x171 = INT16_MAX;
	volatile uint32_t t22 = 293933U;

    t22 = (x169<<(x170==(x171<=x172)));

    if (t22 != 3627277U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x174 = 4LLU;
	uint8_t x175 = 1U;
	volatile uint64_t x176 = 81280553573441LLU;
	int64_t t23 = INT64_MAX;

    t23 = (x173<<(x174==(x175<=x176)));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x201 = 85;
	uint16_t x202 = 4833U;
	uint64_t x203 = 179167821111621041LLU;
	static uint32_t x204 = 3805U;
	int32_t t24 = -258467;

    t24 = (x201<<(x202==(x203<=x204)));

    if (t24 != 85) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x207 = -173;
	int16_t x208 = INT16_MIN;
	volatile int64_t t25 = -154098998669205690LL;

    t25 = (x205<<(x206==(x207<=x208)));

    if (t25 != 56LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x209 = 483U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t26 = -64332287;

    t26 = (x209<<(x210==(x211<=x212)));

    if (t26 != 483) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x217 = 1960201151LLU;
	static int32_t x218 = -3792;
	static int16_t x219 = INT16_MIN;
	volatile uint16_t x220 = UINT16_MAX;
	static volatile uint64_t t27 = 778526066LLU;

    t27 = (x217<<(x218==(x219<=x220)));

    if (t27 != 1960201151LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x225 = 2712;
	int64_t x227 = INT64_MAX;
	int8_t x228 = INT8_MIN;
	static int32_t t28 = -676;

    t28 = (x225<<(x226==(x227<=x228)));

    if (t28 != 2712) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x229 = 6545;
	static int64_t x230 = -1LL;
	static uint32_t x232 = UINT32_MAX;
	int32_t t29 = 848;

    t29 = (x229<<(x230==(x231<=x232)));

    if (t29 != 6545) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x237 = 326U;
	uint8_t x238 = UINT8_MAX;
	static int8_t x239 = 0;
	int32_t t30 = -2838;

    t30 = (x237<<(x238==(x239<=x240)));

    if (t30 != 326) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x245 = 75089419119LLU;
	int8_t x246 = INT8_MAX;
	volatile int16_t x247 = -11908;
	static uint64_t x248 = 184350073160LLU;
	volatile uint64_t t31 = 1276893899222277LLU;

    t31 = (x245<<(x246==(x247<=x248)));

    if (t31 != 75089419119LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x249 = INT64_MAX;
	volatile int32_t x250 = -18626;
	int16_t x251 = -3756;
	static volatile int64_t t32 = INT64_MAX;

    t32 = (x249<<(x250==(x251<=x252)));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x255 = INT16_MIN;
	volatile int32_t x256 = 81827517;
	static volatile int32_t t33 = 95;

    t33 = (x253<<(x254==(x255<=x256)));

    if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x257 = INT32_MAX;
	int64_t x258 = 3587330LL;
	int64_t x260 = -47189873065074458LL;
	volatile int32_t t34 = INT32_MAX;

    t34 = (x257<<(x258==(x259<=x260)));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x261 = 2;
	uint8_t x262 = 30U;
	uint32_t x263 = UINT32_MAX;

    t35 = (x261<<(x262==(x263<=x264)));

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x269 = 125U;
	static uint32_t x271 = 63U;
	static uint8_t x272 = 23U;
	volatile int32_t t36 = 26;

    t36 = (x269<<(x270==(x271<=x272)));

    if (t36 != 125) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x281 = 697480523573280LLU;
	int16_t x282 = -5681;
	uint64_t x283 = 509LLU;
	static int64_t x284 = INT64_MAX;
	uint64_t t37 = 4263947167248390849LLU;

    t37 = (x281<<(x282==(x283<=x284)));

    if (t37 != 697480523573280LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x286 = 0;
	uint16_t x287 = 0U;
	int8_t x288 = 18;
	int32_t t38 = 27030814;

    t38 = (x285<<(x286==(x287<=x288)));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x289 = 1672449078U;
	uint16_t x290 = 164U;
	static volatile int8_t x291 = 0;
	uint8_t x292 = 5U;
	uint32_t t39 = 4720386U;

    t39 = (x289<<(x290==(x291<=x292)));

    if (t39 != 1672449078U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x293 = 11LLU;
	int64_t x294 = -469LL;
	int32_t x295 = 2919;
	static volatile uint64_t t40 = 1977367969831764082LLU;

    t40 = (x293<<(x294==(x295<=x296)));

    if (t40 != 11LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x301 = INT64_MAX;
	static int16_t x303 = INT16_MAX;
	int64_t t41 = INT64_MAX;

    t41 = (x301<<(x302==(x303<=x304)));

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x314 = INT32_MIN;
	int32_t x315 = INT32_MAX;
	int32_t t42 = INT32_MAX;

    t42 = (x313<<(x314==(x315<=x316)));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x317 = UINT32_MAX;
	static int64_t x318 = 164561945590505LL;
	static int64_t x319 = -1LL;
	volatile int8_t x320 = -1;

    t43 = (x317<<(x318==(x319<=x320)));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x321 = UINT64_MAX;
	uint16_t x322 = 232U;
	int16_t x323 = INT16_MIN;
	volatile uint32_t x324 = 752523478U;

    t44 = (x321<<(x322==(x323<=x324)));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x326 = -1;
	static uint64_t x327 = UINT64_MAX;
	int32_t x328 = -1;

    t45 = (x325<<(x326==(x327<=x328)));

    if (t45 != 3498U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x329 = 4971893037886259LLU;
	int16_t x330 = INT16_MAX;
	static int64_t x331 = INT64_MIN;
	uint32_t x332 = UINT32_MAX;
	uint64_t t46 = 367450728554LLU;

    t46 = (x329<<(x330==(x331<=x332)));

    if (t46 != 4971893037886259LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x337 = 86700LLU;
	uint8_t x338 = 3U;
	volatile int16_t x339 = -1;

    t47 = (x337<<(x338==(x339<=x340)));

    if (t47 != 86700LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x341 = UINT64_MAX;
	volatile int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	volatile int64_t x344 = INT64_MIN;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = (x341<<(x342==(x343<=x344)));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x345 = 92LL;
	uint8_t x346 = 28U;
	volatile int32_t x347 = -1;
	int32_t x348 = INT32_MIN;
	static volatile int64_t t49 = 6LL;

    t49 = (x345<<(x346==(x347<=x348)));

    if (t49 != 92LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x349 = INT8_MAX;
	uint8_t x350 = 30U;
	int16_t x351 = 3;
	uint32_t x352 = 32002U;

    t50 = (x349<<(x350==(x351<=x352)));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x353 = 2;
	volatile uint64_t x354 = UINT64_MAX;
	uint8_t x355 = UINT8_MAX;
	volatile int32_t t51 = -86;

    t51 = (x353<<(x354==(x355<=x356)));

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x357 = 18765LLU;
	volatile int64_t x358 = 2858LL;
	volatile uint8_t x359 = 11U;
	static uint32_t x360 = UINT32_MAX;
	volatile uint64_t t52 = 97483723663LLU;

    t52 = (x357<<(x358==(x359<=x360)));

    if (t52 != 18765LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x361 = 545938211LLU;
	int8_t x362 = INT8_MIN;
	static uint64_t x363 = 1LLU;
	uint32_t x364 = 0U;
	uint64_t t53 = 45157900498LLU;

    t53 = (x361<<(x362==(x363<=x364)));

    if (t53 != 545938211LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x373 = UINT8_MAX;
	int32_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	uint32_t x376 = UINT32_MAX;
	int32_t t54 = -3;

    t54 = (x373<<(x374==(x375<=x376)));

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x377 = UINT8_MAX;
	static int64_t x378 = INT64_MIN;
	int8_t x379 = -13;
	int32_t t55 = 10468;

    t55 = (x377<<(x378==(x379<=x380)));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x389 = 4212674U;
	int8_t x390 = -6;
	int16_t x391 = INT16_MAX;
	uint64_t x392 = 435110231835LLU;
	volatile uint32_t t56 = 0U;

    t56 = (x389<<(x390==(x391<=x392)));

    if (t56 != 4212674U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x393 = INT8_MAX;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = 15248U;
	volatile int32_t t57 = -5721544;

    t57 = (x393<<(x394==(x395<=x396)));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	uint16_t x411 = UINT16_MAX;
	static int8_t x412 = INT8_MIN;
	int32_t t58 = 13152385;

    t58 = (x409<<(x410==(x411<=x412)));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    

    t59 = (x417<<(x418==(x419<=x420)));

    if (t59 != 2048353384211679LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x421 = 578U;
	uint64_t x422 = 43361279594648794LLU;
	uint8_t x423 = UINT8_MAX;
	static int16_t x424 = INT16_MIN;
	uint32_t t60 = 6442U;

    t60 = (x421<<(x422==(x423<=x424)));

    if (t60 != 578U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x425 = UINT16_MAX;
	uint32_t x426 = 5U;
	int32_t x427 = -54720212;
	int8_t x428 = INT8_MAX;
	int32_t t61 = -11076272;

    t61 = (x425<<(x426==(x427<=x428)));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x437 = 52084186U;
	int64_t x439 = INT64_MIN;
	volatile int16_t x440 = -1508;
	volatile uint32_t t62 = 1U;

    t62 = (x437<<(x438==(x439<=x440)));

    if (t62 != 52084186U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x449 = 1890871U;
	static int8_t x450 = 3;
	uint16_t x451 = 9649U;
	volatile int64_t x452 = INT64_MIN;
	volatile uint32_t t63 = 59U;

    t63 = (x449<<(x450==(x451<=x452)));

    if (t63 != 1890871U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x453 = 36066U;
	volatile int32_t x454 = -12;
	int8_t x455 = 21;
	static int32_t x456 = INT32_MIN;
	static uint32_t t64 = 3U;

    t64 = (x453<<(x454==(x455<=x456)));

    if (t64 != 36066U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x474 = INT32_MIN;
	int16_t x475 = INT16_MIN;
	int8_t x476 = INT8_MIN;
	static int32_t t65 = -179076;

    t65 = (x473<<(x474==(x475<=x476)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint16_t x485 = UINT16_MAX;
	uint8_t x486 = 7U;
	uint32_t x487 = 93932484U;
	int32_t t66 = 318923;

    t66 = (x485<<(x486==(x487<=x488)));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x498 = INT64_MIN;
	static uint8_t x500 = UINT8_MAX;

    t67 = (x497<<(x498==(x499<=x500)));

    if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x509 = 8944U;
	int32_t x512 = INT32_MIN;
	int32_t t68 = 451067313;

    t68 = (x509<<(x510==(x511<=x512)));

    if (t68 != 8944) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x513 = 143;
	int64_t x514 = INT64_MIN;
	static uint64_t x515 = 187LLU;
	int8_t x516 = INT8_MIN;
	volatile int32_t t69 = -127192554;

    t69 = (x513<<(x514==(x515<=x516)));

    if (t69 != 143) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	int32_t x518 = -1;
	int8_t x519 = INT8_MIN;
	uint64_t x520 = 3985245931LLU;
	static volatile int32_t t70 = 1;

    t70 = (x517<<(x518==(x519<=x520)));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x529 = 3495608LL;
	static int32_t x532 = -113176081;

    t71 = (x529<<(x530==(x531<=x532)));

    if (t71 != 3495608LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x533 = INT32_MAX;
	int16_t x534 = INT16_MIN;
	volatile uint16_t x535 = 391U;
	int16_t x536 = INT16_MAX;

    t72 = (x533<<(x534==(x535<=x536)));

    if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x537 = 13;
	uint64_t x540 = UINT64_MAX;
	static int32_t t73 = 6483263;

    t73 = (x537<<(x538==(x539<=x540)));

    if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x541 = 13380947U;
	int64_t x542 = -1LL;
	static uint32_t x543 = 11420281U;
	static uint32_t x544 = 44969U;
	uint32_t t74 = 305854995U;

    t74 = (x541<<(x542==(x543<=x544)));

    if (t74 != 13380947U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x549 = 481LLU;
	int32_t x550 = INT32_MAX;
	static int8_t x551 = -8;

    t75 = (x549<<(x550==(x551<=x552)));

    if (t75 != 481LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x557 = UINT64_MAX;
	uint8_t x558 = 5U;
	int16_t x559 = 3;
	uint8_t x560 = UINT8_MAX;
	uint64_t t76 = UINT64_MAX;

    t76 = (x557<<(x558==(x559<=x560)));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x561 = 0U;
	int32_t x562 = -8251;
	int16_t x563 = 1;
	uint64_t x564 = 416LLU;
	uint32_t t77 = 898547678U;

    t77 = (x561<<(x562==(x563<=x564)));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x565 = 31U;
	int64_t x567 = 891487123492411LL;
	int16_t x568 = -1;
	uint32_t t78 = 111971U;

    t78 = (x565<<(x566==(x567<=x568)));

    if (t78 != 31U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x569 = UINT8_MAX;
	int64_t x570 = 2LL;
	uint32_t x571 = 362U;
	volatile int32_t t79 = 7;

    t79 = (x569<<(x570==(x571<=x572)));

    if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x593 = INT64_MAX;
	uint16_t x594 = UINT16_MAX;
	static uint32_t x595 = 274404U;
	int16_t x596 = -1;
	volatile int64_t t80 = INT64_MAX;

    t80 = (x593<<(x594==(x595<=x596)));

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x610 = -1;
	uint32_t x611 = 8352U;
	int16_t x612 = INT16_MAX;
	volatile int64_t t81 = INT64_MAX;

    t81 = (x609<<(x610==(x611<=x612)));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x617 = INT8_MAX;
	int32_t x618 = -1;
	int16_t x620 = -1;
	volatile int32_t t82 = 3;

    t82 = (x617<<(x618==(x619<=x620)));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x621 = 1U;
	volatile int64_t x622 = INT64_MIN;
	uint16_t x623 = 8U;
	int8_t x624 = INT8_MIN;
	int32_t t83 = 1;

    t83 = (x621<<(x622==(x623<=x624)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x626 = INT8_MAX;
	volatile int32_t x628 = -1;
	volatile int32_t t84 = -50171964;

    t84 = (x625<<(x626==(x627<=x628)));

    if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x647 = INT8_MIN;
	static volatile int32_t x648 = INT32_MIN;
	int32_t t85 = 5958889;

    t85 = (x645<<(x646==(x647<=x648)));

    if (t85 != 1859) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x654 = 2;
	uint8_t x655 = 63U;
	static int16_t x656 = 3;

    t86 = (x653<<(x654==(x655<=x656)));

    if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x657 = 1346U;
	static uint32_t x658 = UINT32_MAX;
	static uint32_t x659 = UINT32_MAX;
	int8_t x660 = INT8_MAX;
	uint32_t t87 = 31354617U;

    t87 = (x657<<(x658==(x659<=x660)));

    if (t87 != 1346U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x661 = 6U;
	int64_t x662 = -1LL;
	int16_t x663 = INT16_MAX;
	volatile int32_t x664 = -67733;

    t88 = (x661<<(x662==(x663<=x664)));

    if (t88 != 6) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x670 = 2070LL;
	static volatile uint32_t x671 = UINT32_MAX;

    t89 = (x669<<(x670==(x671<=x672)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x678 = -1;
	static int32_t x679 = -1525476;
	int8_t x680 = -11;
	int32_t t90 = INT32_MAX;

    t90 = (x677<<(x678==(x679<=x680)));

    if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x681 = 1;
	int64_t x682 = INT64_MIN;
	static int8_t x683 = INT8_MAX;
	static int32_t x684 = INT32_MIN;
	int32_t t91 = -15;

    t91 = (x681<<(x682==(x683<=x684)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x690 = 0;
	static volatile int32_t x691 = -12;
	int64_t x692 = -54505168023367LL;
	volatile int32_t t92 = 310;

    t92 = (x689<<(x690==(x691<=x692)));

    if (t92 != 1416) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x693 = UINT8_MAX;
	int8_t x694 = INT8_MIN;
	int64_t x695 = 30516999308LL;
	int16_t x696 = INT16_MAX;
	static int32_t t93 = -8729;

    t93 = (x693<<(x694==(x695<=x696)));

    if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x701 = 11U;
	uint8_t x702 = 3U;
	uint16_t x703 = 10U;
	int32_t t94 = 8317555;

    t94 = (x701<<(x702==(x703<=x704)));

    if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x705 = 0U;
	volatile uint8_t x706 = 3U;
	int32_t x707 = INT32_MIN;
	int32_t x708 = -1;
	int32_t t95 = 6289528;

    t95 = (x705<<(x706==(x707<=x708)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x709 = INT32_MAX;
	static int8_t x710 = -1;
	uint8_t x711 = UINT8_MAX;
	volatile uint8_t x712 = UINT8_MAX;
	int32_t t96 = INT32_MAX;

    t96 = (x709<<(x710==(x711<=x712)));

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x713 = 13;
	static uint32_t x714 = 259647U;
	int32_t x716 = -63;
	volatile int32_t t97 = -6165;

    t97 = (x713<<(x714==(x715<=x716)));

    if (t97 != 13) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x721 = 43U;
	uint16_t x722 = 192U;
	int8_t x723 = INT8_MIN;
	uint16_t x724 = UINT16_MAX;

    t98 = (x721<<(x722==(x723<=x724)));

    if (t98 != 43) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x729 = UINT64_MAX;
	static int64_t x730 = -1LL;
	int64_t x732 = INT64_MAX;
	uint64_t t99 = UINT64_MAX;

    t99 = (x729<<(x730==(x731<=x732)));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x734 = 241U;
	volatile uint32_t x735 = UINT32_MAX;
	static volatile int32_t t100 = -18;

    t100 = (x733<<(x734==(x735<=x736)));

    if (t100 != 14) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x741 = UINT8_MAX;
	int64_t x742 = -29408825422077LL;
	uint32_t x744 = 2080733U;
	volatile int32_t t101 = -1755;

    t101 = (x741<<(x742==(x743<=x744)));

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x745 = 28U;
	int16_t x748 = INT16_MIN;
	volatile int32_t t102 = -24;

    t102 = (x745<<(x746==(x747<=x748)));

    if (t102 != 28) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x749 = UINT32_MAX;
	uint8_t x750 = 1U;
	static int8_t x751 = 3;
	static uint16_t x752 = 1U;
	uint32_t t103 = UINT32_MAX;

    t103 = (x749<<(x750==(x751<=x752)));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x757 = 154U;
	static int64_t x758 = INT64_MIN;
	int64_t x759 = 229733923LL;
	uint8_t x760 = 10U;
	int32_t t104 = -266587;

    t104 = (x757<<(x758==(x759<=x760)));

    if (t104 != 154) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x761 = 1685U;
	volatile int16_t x763 = INT16_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t105 = -15639170;

    t105 = (x761<<(x762==(x763<=x764)));

    if (t105 != 1685) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x766 = INT16_MIN;
	int64_t x767 = -28614556358782659LL;
	int8_t x768 = INT8_MIN;
	uint32_t t106 = 4250255U;

    t106 = (x765<<(x766==(x767<=x768)));

    if (t106 != 707353U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x769 = 1U;
	uint32_t x770 = 1U;
	volatile int8_t x771 = INT8_MAX;
	int64_t x772 = -104LL;
	volatile int32_t t107 = 0;

    t107 = (x769<<(x770==(x771<=x772)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x777 = 1997861993U;
	uint16_t x778 = 6U;
	int64_t x779 = -10801088518940LL;
	int16_t x780 = INT16_MIN;
	uint32_t t108 = 1568575140U;

    t108 = (x777<<(x778==(x779<=x780)));

    if (t108 != 1997861993U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x793 = 4U;
	int8_t x794 = INT8_MIN;
	int16_t x796 = INT16_MAX;
	volatile int32_t t109 = -49;

    t109 = (x793<<(x794==(x795<=x796)));

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x809 = 17141001668462878LLU;
	uint16_t x810 = UINT16_MAX;
	uint64_t t110 = 589548040384607688LLU;

    t110 = (x809<<(x810==(x811<=x812)));

    if (t110 != 17141001668462878LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x817 = UINT16_MAX;
	uint16_t x819 = UINT16_MAX;
	static volatile int64_t x820 = -21679845553638LL;
	static int32_t t111 = -52048;

    t111 = (x817<<(x818==(x819<=x820)));

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x821 = 3U;
	volatile uint8_t x822 = UINT8_MAX;
	volatile int64_t x823 = INT64_MAX;
	uint16_t x824 = 1736U;

    t112 = (x821<<(x822==(x823<=x824)));

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x829 = INT32_MAX;
	static int8_t x830 = INT8_MAX;
	int64_t x831 = -92029301LL;
	int32_t x832 = INT32_MIN;
	volatile int32_t t113 = INT32_MAX;

    t113 = (x829<<(x830==(x831<=x832)));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x833 = UINT8_MAX;
	static int32_t x834 = INT32_MAX;
	int8_t x835 = INT8_MIN;
	int32_t t114 = -9091;

    t114 = (x833<<(x834==(x835<=x836)));

    if (t114 != 255) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x837 = 1162;
	static int64_t x838 = -1LL;
	volatile int64_t x839 = 13656LL;
	volatile int32_t t115 = 28;

    t115 = (x837<<(x838==(x839<=x840)));

    if (t115 != 1162) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x842 = 0LL;
	int64_t x843 = INT64_MIN;
	static int8_t x844 = INT8_MIN;
	uint32_t t116 = 98680U;

    t116 = (x841<<(x842==(x843<=x844)));

    if (t116 != 199518U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x849 = 524101551U;
	uint64_t x850 = UINT64_MAX;
	volatile int16_t x852 = INT16_MIN;

    t117 = (x849<<(x850==(x851<=x852)));

    if (t117 != 524101551U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x853 = 17472275078551LLU;
	volatile int32_t x854 = -1;
	int8_t x855 = 0;
	volatile uint32_t x856 = 910U;
	uint64_t t118 = 1244060LLU;

    t118 = (x853<<(x854==(x855<=x856)));

    if (t118 != 17472275078551LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x861 = UINT16_MAX;
	static uint8_t x862 = UINT8_MAX;
	uint32_t x863 = UINT32_MAX;
	static int32_t x864 = 246081501;
	int32_t t119 = -546;

    t119 = (x861<<(x862==(x863<=x864)));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x866 = UINT64_MAX;
	int8_t x868 = -3;
	uint32_t t120 = 1674673289U;

    t120 = (x865<<(x866==(x867<=x868)));

    if (t120 != 3174881U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x871 = -1LL;
	uint16_t x872 = 447U;
	volatile uint32_t t121 = UINT32_MAX;

    t121 = (x869<<(x870==(x871<=x872)));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x874 = 5LLU;
	int16_t x875 = INT16_MIN;
	static int64_t x876 = INT64_MAX;
	static uint64_t t122 = 130325LLU;

    t122 = (x873<<(x874==(x875<=x876)));

    if (t122 != 18087177051LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x882 = INT32_MIN;
	static int32_t x883 = INT32_MIN;
	volatile int16_t x884 = INT16_MIN;
	uint64_t t123 = 28578LLU;

    t123 = (x881<<(x882==(x883<=x884)));

    if (t123 != 11588439512LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x885 = 56U;
	int32_t x886 = -2537076;
	volatile int8_t x888 = 15;
	volatile int32_t t124 = -547;

    t124 = (x885<<(x886==(x887<=x888)));

    if (t124 != 56) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x891 = 1U;
	volatile uint32_t x892 = UINT32_MAX;
	static volatile uint64_t t125 = 18532LLU;

    t125 = (x889<<(x890==(x891<=x892)));

    if (t125 != 550932366LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x901 = 244922599009875587LL;
	volatile int32_t x902 = INT32_MIN;
	int32_t x903 = -1;
	volatile int64_t t126 = 2LL;

    t126 = (x901<<(x902==(x903<=x904)));

    if (t126 != 244922599009875587LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x905 = UINT16_MAX;
	static int32_t x906 = INT32_MIN;
	int8_t x907 = -60;
	int64_t x908 = -1LL;
	int32_t t127 = 7;

    t127 = (x905<<(x906==(x907<=x908)));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x909 = INT16_MAX;
	uint16_t x910 = UINT16_MAX;
	int8_t x911 = INT8_MAX;
	volatile int16_t x912 = -1864;

    t128 = (x909<<(x910==(x911<=x912)));

    if (t128 != 32767) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x913 = 51U;
	static int16_t x914 = -13222;
	int8_t x915 = -31;
	static volatile uint16_t x916 = 6507U;
	static int32_t t129 = 7;

    t129 = (x913<<(x914==(x915<=x916)));

    if (t129 != 51) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x920 = INT16_MIN;
	volatile int32_t t130 = -161;

    t130 = (x917<<(x918==(x919<=x920)));

    if (t130 != 56) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x925 = 13;
	uint8_t x926 = UINT8_MAX;
	static int64_t x927 = -4LL;
	int32_t x928 = INT32_MAX;
	volatile int32_t t131 = 113536459;

    t131 = (x925<<(x926==(x927<=x928)));

    if (t131 != 13) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x933 = UINT32_MAX;
	int32_t x936 = 6;
	static volatile uint32_t t132 = UINT32_MAX;

    t132 = (x933<<(x934==(x935<=x936)));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x941 = 4451223645LL;
	static volatile int64_t x942 = INT64_MIN;
	int8_t x944 = INT8_MIN;

    t133 = (x941<<(x942==(x943<=x944)));

    if (t133 != 4451223645LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x945 = INT64_MAX;
	volatile uint32_t x946 = 12U;
	uint64_t x947 = 89117143LLU;
	static uint16_t x948 = UINT16_MAX;

    t134 = (x945<<(x946==(x947<=x948)));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x954 = INT16_MIN;
	static volatile uint64_t x955 = 16924497102508LLU;
	volatile int16_t x956 = INT16_MIN;

    t135 = (x953<<(x954==(x955<=x956)));

    if (t135 != 2848) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x957 = 116499415149LLU;
	volatile uint64_t x958 = 2LLU;
	int32_t x959 = -230153;
	int16_t x960 = INT16_MIN;
	static uint64_t t136 = 2021413LLU;

    t136 = (x957<<(x958==(x959<=x960)));

    if (t136 != 116499415149LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x966 = 5857599LL;
	int32_t x967 = INT32_MAX;
	int8_t x968 = 6;
	static volatile int32_t t137 = 12710733;

    t137 = (x965<<(x966==(x967<=x968)));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x973 = 413806170018233347LLU;
	int16_t x975 = -1;
	uint32_t x976 = 1806740354U;
	static uint64_t t138 = 20655LLU;

    t138 = (x973<<(x974==(x975<=x976)));

    if (t138 != 413806170018233347LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x977 = 1;
	int16_t x978 = -1;
	int64_t x979 = INT64_MAX;
	uint8_t x980 = 0U;
	int32_t t139 = -2695273;

    t139 = (x977<<(x978==(x979<=x980)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x985 = 0U;
	volatile uint64_t x986 = 131977611LLU;
	static uint32_t x987 = UINT32_MAX;
	volatile int32_t x988 = -1;

    t140 = (x985<<(x986==(x987<=x988)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x989 = 25LLU;
	uint8_t x991 = 1U;
	volatile uint32_t x992 = 150788U;
	static uint64_t t141 = 1731LLU;

    t141 = (x989<<(x990==(x991<=x992)));

    if (t141 != 25LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x993 = UINT64_MAX;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = (x993<<(x994==(x995<=x996)));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x1001 = 14456;
	int16_t x1003 = INT16_MIN;
	int8_t x1004 = INT8_MAX;

    t143 = (x1001<<(x1002==(x1003<=x1004)));

    if (t143 != 14456) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1006 = -8661;
	static int8_t x1007 = 6;
	uint64_t x1008 = 55802120LLU;

    t144 = (x1005<<(x1006==(x1007<=x1008)));

    if (t144 != 23) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1025 = UINT64_MAX;
	int64_t x1026 = INT64_MIN;
	volatile int64_t x1028 = INT64_MAX;

    t145 = (x1025<<(x1026==(x1027<=x1028)));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1037 = INT8_MAX;
	volatile int64_t x1038 = INT64_MAX;
	int16_t x1039 = INT16_MIN;

    t146 = (x1037<<(x1038==(x1039<=x1040)));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1042 = 15094U;
	volatile int8_t x1043 = INT8_MIN;
	static uint32_t t147 = UINT32_MAX;

    t147 = (x1041<<(x1042==(x1043<=x1044)));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x1057 = INT32_MAX;
	static volatile int16_t x1060 = -9;
	int32_t t148 = INT32_MAX;

    t148 = (x1057<<(x1058==(x1059<=x1060)));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x1061 = UINT8_MAX;
	static uint32_t x1062 = UINT32_MAX;
	int16_t x1063 = INT16_MIN;
	volatile int32_t t149 = -50767809;

    t149 = (x1061<<(x1062==(x1063<=x1064)));

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1069 = 78022865481044LLU;
	int32_t x1070 = 0;
	int8_t x1071 = -30;
	volatile uint64_t t150 = 19240674914282859LLU;

    t150 = (x1069<<(x1070==(x1071<=x1072)));

    if (t150 != 156045730962088LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x1077 = 7;
	int16_t x1078 = -101;
	volatile int8_t x1080 = -1;
	volatile int32_t t151 = -29;

    t151 = (x1077<<(x1078==(x1079<=x1080)));

    if (t151 != 7) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1081 = UINT64_MAX;
	uint16_t x1082 = UINT16_MAX;
	volatile int64_t x1083 = INT64_MIN;
	static volatile uint64_t t152 = UINT64_MAX;

    t152 = (x1081<<(x1082==(x1083<=x1084)));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1089 = 12186;
	int16_t x1090 = 465;
	int32_t x1091 = INT32_MAX;
	int64_t x1092 = INT64_MIN;
	int32_t t153 = -12848886;

    t153 = (x1089<<(x1090==(x1091<=x1092)));

    if (t153 != 12186) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1101 = UINT32_MAX;
	uint64_t x1102 = 27221970569LLU;
	static uint64_t x1103 = 40562451493371LLU;
	int16_t x1104 = INT16_MIN;
	volatile uint32_t t154 = UINT32_MAX;

    t154 = (x1101<<(x1102==(x1103<=x1104)));

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1106 = 27U;
	int8_t x1107 = -1;
	static int8_t x1108 = -1;
	int64_t t155 = INT64_MAX;

    t155 = (x1105<<(x1106==(x1107<=x1108)));

    if (t155 != INT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1109 = UINT32_MAX;
	volatile int32_t x1110 = INT32_MIN;
	int8_t x1111 = INT8_MIN;
	int64_t x1112 = -1LL;

    t156 = (x1109<<(x1110==(x1111<=x1112)));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1113 = 907U;
	static volatile int8_t x1114 = -9;
	int64_t x1115 = -1LL;
	int16_t x1116 = INT16_MIN;

    t157 = (x1113<<(x1114==(x1115<=x1116)));

    if (t157 != 907U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x1117 = UINT64_MAX;
	static uint64_t x1118 = 39LLU;
	int64_t x1119 = -1LL;
	int32_t x1120 = -1;

    t158 = (x1117<<(x1118==(x1119<=x1120)));

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1126 = 12276193U;
	uint16_t x1128 = UINT16_MAX;

    t159 = (x1125<<(x1126==(x1127<=x1128)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1129 = 2U;
	static uint32_t x1130 = UINT32_MAX;
	static uint64_t x1131 = UINT64_MAX;
	int32_t x1132 = -56;
	int32_t t160 = -493;

    t160 = (x1129<<(x1130==(x1131<=x1132)));

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1133 = 1740U;
	volatile int64_t x1134 = INT64_MIN;
	volatile uint16_t x1135 = UINT16_MAX;
	int8_t x1136 = INT8_MIN;

    t161 = (x1133<<(x1134==(x1135<=x1136)));

    if (t161 != 1740U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1141 = 9789170674847LL;
	uint16_t x1142 = 884U;
	int32_t x1143 = -2;
	volatile int8_t x1144 = INT8_MIN;
	static volatile int64_t t162 = -3794674335029656058LL;

    t162 = (x1141<<(x1142==(x1143<=x1144)));

    if (t162 != 9789170674847LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x1149 = 1652U;
	uint16_t x1150 = 0U;
	int32_t x1152 = INT32_MIN;
	int32_t t163 = 3436;

    t163 = (x1149<<(x1150==(x1151<=x1152)));

    if (t163 != 3304) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1153 = 0;
	int64_t x1156 = 2570551754LL;
	volatile int32_t t164 = 109392;

    t164 = (x1153<<(x1154==(x1155<=x1156)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x1158 = 6U;
	uint8_t x1159 = UINT8_MAX;
	static volatile int32_t t165 = 1773;

    t165 = (x1157<<(x1158==(x1159<=x1160)));

    if (t165 != 74249514) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1170 = INT64_MAX;
	uint16_t x1171 = 99U;
	int64_t x1172 = 67472203LL;
	volatile uint32_t t166 = 608U;

    t166 = (x1169<<(x1170==(x1171<=x1172)));

    if (t166 != 4609865U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1173 = 463816899338LLU;
	int64_t x1174 = -17581606208301681LL;
	volatile uint16_t x1175 = UINT16_MAX;
	static int64_t x1176 = INT64_MIN;
	static volatile uint64_t t167 = 1114LLU;

    t167 = (x1173<<(x1174==(x1175<=x1176)));

    if (t167 != 463816899338LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1177 = 4;
	int64_t x1178 = 187489838316421471LL;
	static int32_t x1179 = -1;
	int32_t x1180 = INT32_MIN;
	int32_t t168 = -59457815;

    t168 = (x1177<<(x1178==(x1179<=x1180)));

    if (t168 != 4) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1181 = 3051;
	volatile uint32_t x1184 = UINT32_MAX;
	int32_t t169 = -4354;

    t169 = (x1181<<(x1182==(x1183<=x1184)));

    if (t169 != 3051) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1185 = 18U;
	int64_t x1186 = INT64_MIN;
	static uint16_t x1187 = 2139U;
	uint64_t x1188 = UINT64_MAX;
	int32_t t170 = 67;

    t170 = (x1185<<(x1186==(x1187<=x1188)));

    if (t170 != 18) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1189 = 9U;
	int16_t x1190 = INT16_MIN;
	uint16_t x1191 = 165U;
	volatile int64_t x1192 = INT64_MAX;

    t171 = (x1189<<(x1190==(x1191<=x1192)));

    if (t171 != 9) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1193 = 17LLU;
	static int8_t x1194 = -1;
	int8_t x1195 = INT8_MIN;
	int32_t x1196 = -1;
	static uint64_t t172 = 1LLU;

    t172 = (x1193<<(x1194==(x1195<=x1196)));

    if (t172 != 17LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1197 = 219828U;
	uint32_t x1198 = 840871942U;
	volatile uint64_t x1199 = 64LLU;
	uint16_t x1200 = UINT16_MAX;
	volatile uint32_t t173 = 3U;

    t173 = (x1197<<(x1198==(x1199<=x1200)));

    if (t173 != 219828U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1201 = UINT8_MAX;
	int16_t x1202 = INT16_MIN;
	int64_t x1203 = -1LL;
	int32_t x1204 = -1878;
	volatile int32_t t174 = -1375162;

    t174 = (x1201<<(x1202==(x1203<=x1204)));

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1205 = 2921341U;
	int16_t x1206 = INT16_MAX;
	int64_t x1207 = INT64_MAX;
	int64_t x1208 = -1LL;
	uint32_t t175 = 7557U;

    t175 = (x1205<<(x1206==(x1207<=x1208)));

    if (t175 != 2921341U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1209 = 385;
	volatile uint8_t x1210 = 13U;
	uint16_t x1211 = 20U;

    t176 = (x1209<<(x1210==(x1211<=x1212)));

    if (t176 != 385) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1214 = 4148U;
	volatile int16_t x1215 = -141;
	int8_t x1216 = INT8_MAX;

    t177 = (x1213<<(x1214==(x1215<=x1216)));

    if (t177 != 25690789LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1217 = 2078LLU;
	int64_t x1218 = 40LL;
	static volatile int64_t x1219 = INT64_MIN;
	int64_t x1220 = INT64_MIN;
	volatile uint64_t t178 = 0LLU;

    t178 = (x1217<<(x1218==(x1219<=x1220)));

    if (t178 != 2078LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1221 = 304406278417305LLU;
	volatile int32_t x1223 = -1;
	uint16_t x1224 = UINT16_MAX;

    t179 = (x1221<<(x1222==(x1223<=x1224)));

    if (t179 != 304406278417305LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1225 = 45;
	volatile int8_t x1226 = INT8_MAX;
	int32_t x1227 = INT32_MIN;
	static volatile uint64_t x1228 = UINT64_MAX;
	int32_t t180 = 32472864;

    t180 = (x1225<<(x1226==(x1227<=x1228)));

    if (t180 != 45) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1235 = 2U;
	volatile int16_t x1236 = 3;
	volatile int32_t t181 = -943264561;

    t181 = (x1233<<(x1234==(x1235<=x1236)));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1245 = 4U;
	uint8_t x1247 = UINT8_MAX;
	static int64_t x1248 = 1384328889707506LL;
	volatile int32_t t182 = 29;

    t182 = (x1245<<(x1246==(x1247<=x1248)));

    if (t182 != 4) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x1253 = 19672U;
	volatile int32_t x1255 = -464859;
	int8_t x1256 = -1;

    t183 = (x1253<<(x1254==(x1255<=x1256)));

    if (t183 != 19672U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1257 = 529412U;
	static uint64_t x1258 = 349708597337363LLU;
	int64_t x1259 = INT64_MIN;
	volatile uint32_t t184 = 20018U;

    t184 = (x1257<<(x1258==(x1259<=x1260)));

    if (t184 != 529412U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1262 = INT16_MAX;
	uint16_t x1263 = 0U;
	static uint64_t x1264 = 7LLU;
	volatile uint64_t t185 = UINT64_MAX;

    t185 = (x1261<<(x1262==(x1263<=x1264)));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1269 = 0;
	int16_t x1270 = -4;
	int16_t x1271 = INT16_MIN;
	int16_t x1272 = INT16_MIN;
	volatile int32_t t186 = -27549;

    t186 = (x1269<<(x1270==(x1271<=x1272)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1273 = 25U;
	static uint64_t x1274 = 19968793215608LLU;
	int8_t x1275 = -1;
	static int32_t t187 = -376;

    t187 = (x1273<<(x1274==(x1275<=x1276)));

    if (t187 != 25) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1277 = 16U;
	int8_t x1278 = INT8_MAX;
	volatile int32_t t188 = 30;

    t188 = (x1277<<(x1278==(x1279<=x1280)));

    if (t188 != 16) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1281 = 107U;
	static int16_t x1283 = INT16_MIN;
	int32_t x1284 = INT32_MAX;
	volatile int32_t t189 = -429574;

    t189 = (x1281<<(x1282==(x1283<=x1284)));

    if (t189 != 107) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1285 = 2U;
	static int32_t x1286 = 448;
	int8_t x1287 = INT8_MIN;
	uint64_t x1288 = UINT64_MAX;
	int32_t t190 = 1100;

    t190 = (x1285<<(x1286==(x1287<=x1288)));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1289 = INT8_MAX;
	volatile int8_t x1290 = INT8_MIN;
	volatile int32_t t191 = 167003;

    t191 = (x1289<<(x1290==(x1291<=x1292)));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1293 = UINT8_MAX;
	int32_t x1294 = INT32_MAX;
	int32_t x1295 = INT32_MIN;
	static uint8_t x1296 = UINT8_MAX;
	static int32_t t192 = -271;

    t192 = (x1293<<(x1294==(x1295<=x1296)));

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1297 = 10;
	static int8_t x1298 = -1;
	static uint32_t x1300 = 557909U;
	static int32_t t193 = -624;

    t193 = (x1297<<(x1298==(x1299<=x1300)));

    if (t193 != 10) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1301 = UINT8_MAX;
	volatile int8_t x1303 = INT8_MAX;
	static uint16_t x1304 = UINT16_MAX;
	volatile int32_t t194 = -29013281;

    t194 = (x1301<<(x1302==(x1303<=x1304)));

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1305 = 22;
	int16_t x1307 = INT16_MIN;
	int32_t t195 = -44456;

    t195 = (x1305<<(x1306==(x1307<=x1308)));

    if (t195 != 22) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1309 = 32491362LLU;
	int16_t x1310 = -1;
	volatile int8_t x1311 = -1;
	volatile uint64_t t196 = 1585LLU;

    t196 = (x1309<<(x1310==(x1311<=x1312)));

    if (t196 != 32491362LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1317 = 71528LLU;
	int64_t x1318 = -3844131858608533LL;
	volatile int32_t x1319 = INT32_MIN;
	volatile uint64_t t197 = 146063291231LLU;

    t197 = (x1317<<(x1318==(x1319<=x1320)));

    if (t197 != 71528LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1325 = 1376;
	static volatile uint32_t x1326 = 671530U;
	static int64_t x1327 = INT64_MIN;
	int64_t x1328 = INT64_MAX;
	int32_t t198 = 0;

    t198 = (x1325<<(x1326==(x1327<=x1328)));

    if (t198 != 1376) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1329 = UINT16_MAX;
	int64_t x1330 = -1LL;
	uint64_t x1331 = UINT64_MAX;
	uint32_t x1332 = 1030290966U;
	volatile int32_t t199 = 2;

    t199 = (x1329<<(x1330==(x1331<=x1332)));

    if (t199 != 65535) { NG(); } else { ; }
	
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

