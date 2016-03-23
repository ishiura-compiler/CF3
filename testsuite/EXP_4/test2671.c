
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

static int8_t x11 = 0;
volatile int32_t t2 = -115;
int32_t x22 = -615;
int64_t x24 = -1LL;
volatile uint64_t t3 = UINT64_MAX;
static volatile int16_t x25 = INT16_MAX;
uint16_t x26 = UINT16_MAX;
int8_t x27 = INT8_MAX;
static volatile int32_t t4 = -37;
uint64_t t5 = UINT64_MAX;
volatile uint32_t x37 = 26306U;
static uint16_t x40 = UINT16_MAX;
int32_t x54 = 12138207;
uint64_t x56 = 2222956961081LLU;
static uint64_t t10 = 1311570LLU;
static uint8_t x65 = 0U;
int32_t x67 = INT32_MIN;
int64_t x76 = 378802373483172477LL;
int16_t x84 = 5;
int16_t x85 = 20;
uint32_t x87 = 20894109U;
int16_t x92 = INT16_MIN;
int32_t x106 = 1;
int16_t x107 = 11;
int8_t x108 = INT8_MIN;
uint32_t t19 = 179171U;
volatile int64_t x113 = INT64_MAX;
int64_t x114 = INT64_MIN;
uint16_t x115 = 1U;
uint64_t x127 = UINT64_MAX;
volatile uint64_t x153 = 138975163482718756LLU;
int8_t x158 = INT8_MAX;
int64_t x173 = INT64_MAX;
volatile int64_t t27 = INT64_MAX;
int16_t x189 = 35;
uint64_t x201 = 1987393386426LLU;
static uint64_t x221 = 89321054086354LLU;
uint64_t x225 = 15755652777437509LLU;
volatile int16_t x229 = 0;
int32_t t36 = -506141;
uint16_t x239 = UINT16_MAX;
uint64_t x241 = 10543353177997394LLU;
int8_t x243 = -31;
int16_t x253 = 1737;
static int8_t x256 = -11;
static uint64_t x260 = UINT64_MAX;
uint32_t x269 = UINT32_MAX;
volatile uint64_t x287 = UINT64_MAX;
int8_t x293 = INT8_MAX;
volatile int32_t x295 = INT32_MAX;
volatile int32_t x296 = -1;
int32_t t45 = 10;
int32_t t47 = 1689;
int64_t x306 = INT64_MIN;
uint16_t x307 = UINT16_MAX;
uint32_t x309 = UINT32_MAX;
static int16_t x334 = INT16_MAX;
int8_t x339 = INT8_MIN;
static volatile int32_t t55 = 0;
int32_t t57 = -128;
static int8_t x361 = INT8_MAX;
uint8_t x362 = 64U;
static volatile uint16_t x373 = UINT16_MAX;
uint32_t x384 = UINT32_MAX;
volatile uint16_t x399 = 1674U;
int16_t x417 = 28;
int32_t x418 = INT32_MIN;
int64_t x419 = INT64_MIN;
int16_t x423 = INT16_MIN;
volatile uint32_t t65 = 241U;
int64_t x462 = -1LL;
int32_t x467 = -11;
static int16_t x470 = -1;
int16_t x488 = -1899;
int8_t x520 = -1;
static volatile int64_t t80 = -17995427584063202LL;
int8_t x548 = INT8_MAX;
uint8_t x556 = 3U;
volatile int16_t x566 = INT16_MIN;
uint8_t x568 = 7U;
int8_t x575 = INT8_MIN;
int16_t x576 = INT16_MIN;
int32_t x577 = 0;
uint64_t x578 = 3LLU;
static uint8_t x587 = 14U;
static int8_t x588 = INT8_MAX;
int32_t x590 = 1;
volatile int16_t x603 = 372;
volatile uint8_t x610 = 17U;
volatile int64_t x616 = INT64_MIN;
int8_t x630 = 6;
int16_t x632 = 19;
uint64_t t96 = 1338096815217437LLU;
static uint16_t x660 = 780U;
volatile uint8_t x678 = UINT8_MAX;
static int32_t x686 = -81;
volatile int32_t t101 = 38718619;
static volatile int32_t t103 = -39;
int64_t x701 = 533121910622975287LL;
uint8_t x708 = 4U;
int64_t x711 = -1LL;
int32_t t108 = 63;
uint16_t x725 = UINT16_MAX;
int8_t x728 = INT8_MIN;
int32_t t109 = 46388;
int8_t x754 = INT8_MIN;
volatile uint32_t t115 = 83411174U;
volatile int8_t x790 = -25;
int32_t t116 = -30292;
static uint16_t x796 = 12077U;
volatile uint64_t t117 = 2LLU;
static int8_t x797 = INT8_MAX;
int32_t x798 = INT32_MAX;
int8_t x807 = INT8_MIN;
volatile int32_t t119 = INT32_MAX;
int32_t x849 = INT32_MAX;
int64_t x850 = 48LL;
int8_t x851 = INT8_MAX;
static uint8_t x857 = 10U;
int64_t t128 = INT64_MAX;
static volatile uint64_t x888 = 16249338726LLU;
int16_t x891 = 3;
volatile int32_t t130 = 34;
int32_t x894 = INT32_MAX;
int32_t t131 = 19062;
static int32_t t132 = 154858467;
static int32_t x903 = 32544317;
uint8_t x917 = 83U;
static int8_t x919 = INT8_MIN;
static volatile int32_t t134 = -882;
int16_t x923 = -520;
volatile int32_t x926 = INT32_MIN;
static int16_t x929 = INT16_MAX;
uint64_t t138 = 180651654959811511LLU;
int16_t x971 = INT16_MAX;
uint16_t x981 = 1U;
volatile int64_t x987 = -61LL;
int64_t x992 = 167406940LL;
uint32_t x997 = 8240216U;
int8_t x999 = -1;
volatile uint32_t t148 = 1089630054U;
int16_t x1017 = INT16_MAX;
int8_t x1018 = INT8_MIN;
volatile int32_t t151 = INT32_MAX;
uint16_t x1026 = 7U;
uint32_t x1029 = 3772U;
int16_t x1030 = -1;
int32_t x1049 = 1;
int32_t t155 = -1;
int64_t x1060 = INT64_MIN;
uint64_t x1069 = 31LLU;
volatile int8_t x1072 = -1;
volatile int32_t t160 = -131076;
volatile uint8_t x1100 = 15U;
static volatile int32_t t162 = 369;
int64_t x1112 = -28519677555LL;
int64_t x1118 = INT64_MAX;
static uint8_t x1119 = UINT8_MAX;
int32_t x1125 = INT32_MAX;
uint64_t x1126 = UINT64_MAX;
uint16_t x1127 = UINT16_MAX;
int64_t x1154 = -1LL;
volatile uint32_t t170 = 5598415U;
uint32_t x1161 = 132745260U;
volatile uint16_t x1176 = 27U;
volatile int64_t x1178 = -7649LL;
static int8_t x1180 = INT8_MIN;
volatile int32_t t173 = -3917;
int16_t x1183 = INT16_MIN;
uint64_t x1184 = 1698LLU;
uint16_t x1186 = UINT16_MAX;
volatile int32_t x1188 = 19186;
int32_t x1190 = -1;
int8_t x1192 = -56;
static int64_t x1201 = INT64_MAX;
volatile int8_t x1203 = -1;
volatile uint16_t x1209 = 1691U;
volatile int16_t x1212 = INT16_MIN;
uint16_t x1233 = 61U;
static int32_t x1238 = INT32_MAX;
static int64_t x1242 = -8LL;
int32_t x1244 = INT32_MIN;
static volatile uint8_t x1251 = UINT8_MAX;
volatile int16_t x1262 = INT16_MAX;
volatile uint32_t x1264 = UINT32_MAX;
int32_t x1270 = INT32_MAX;
static int32_t x1275 = INT32_MAX;
int8_t x1279 = -1;
static uint64_t t190 = 6LLU;
uint8_t x1293 = 0U;
int32_t t192 = -35864809;
uint8_t x1308 = 8U;
uint32_t x1333 = 298U;
uint8_t x1349 = 39U;
uint16_t x1350 = 5739U;


void f0(void) {
    	volatile uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MAX;
	volatile int16_t x3 = 0;
	static uint32_t x4 = 180088U;
	volatile int32_t t0 = 82153;

    t0 = (x1>>(x2>(x3^x4)));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 159113U;
	int32_t x6 = 1;
	uint16_t x7 = UINT16_MAX;
	static int64_t x8 = INT64_MAX;
	uint32_t t1 = 4572U;

    t1 = (x5>>(x6>(x7^x8)));

    if (t1 != 159113U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = UINT16_MAX;
	uint32_t x10 = UINT32_MAX;
	uint8_t x12 = 29U;

    t2 = (x9>>(x10>(x11^x12)));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x21 = UINT64_MAX;
	static int16_t x23 = INT16_MIN;

    t3 = (x21>>(x22>(x23^x24)));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x28 = INT8_MAX;

    t4 = (x25>>(x26>(x27^x28)));

    if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = UINT64_MAX;
	int64_t x30 = -6881965290316LL;
	int8_t x31 = INT8_MAX;
	static uint16_t x32 = UINT16_MAX;

    t5 = (x29>>(x30>(x31^x32)));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x38 = -1LL;
	uint64_t x39 = 6229955523LLU;
	static volatile uint32_t t6 = 29U;

    t6 = (x37>>(x38>(x39^x40)));

    if (t6 != 13153U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x41 = 3U;
	int32_t x42 = -1;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t7 = -25145;

    t7 = (x41>>(x42>(x43^x44)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = 499868490390LLU;
	int16_t x46 = INT16_MAX;
	static int64_t x47 = 7995549346652713LL;
	volatile int32_t x48 = INT32_MIN;
	uint64_t t8 = 11042458951LLU;

    t8 = (x45>>(x46>(x47^x48)));

    if (t8 != 249934245195LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = UINT8_MAX;
	int64_t x50 = 80003025455476LL;
	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t9 = -34;

    t9 = (x49>>(x50>(x51^x52)));

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x53 = 275LLU;
	volatile int32_t x55 = INT32_MIN;

    t10 = (x53>>(x54>(x55^x56)));

    if (t10 != 275LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x66 = -1;
	uint16_t x68 = 6549U;
	volatile int32_t t11 = -452142248;

    t11 = (x65>>(x66>(x67^x68)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MIN;
	uint32_t x75 = 60U;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = (x73>>(x74>(x75^x76)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x77 = 16379029LL;
	uint16_t x78 = 1089U;
	uint32_t x79 = 3543439U;
	static int32_t x80 = INT32_MIN;
	volatile int64_t t13 = 4195548079903882LL;

    t13 = (x77>>(x78>(x79^x80)));

    if (t13 != 16379029LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x81 = 84235;
	uint8_t x82 = 42U;
	volatile int16_t x83 = INT16_MAX;
	int32_t t14 = -148;

    t14 = (x81>>(x82>(x83^x84)));

    if (t14 != 84235) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x86 = -1LL;
	static int8_t x88 = -1;
	int32_t t15 = 0;

    t15 = (x85>>(x86>(x87^x88)));

    if (t15 != 20) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x89 = 45405LLU;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = 3216U;
	volatile uint64_t t16 = 5574838011603LLU;

    t16 = (x89>>(x90>(x91^x92)));

    if (t16 != 45405LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x93 = 10U;
	static int16_t x94 = INT16_MIN;
	volatile uint64_t x95 = 36LLU;
	int64_t x96 = -1LL;
	volatile int32_t t17 = -3661;

    t17 = (x93>>(x94>(x95^x96)));

    if (t17 != 10) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x97 = 1U;
	uint16_t x98 = 2017U;
	int64_t x99 = 105597813748705LL;
	int8_t x100 = INT8_MAX;
	volatile int32_t t18 = -52;

    t18 = (x97>>(x98>(x99^x100)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x105 = 16U;

    t19 = (x105>>(x106>(x107^x108)));

    if (t19 != 8U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x116 = -1LL;
	int64_t t20 = INT64_MAX;

    t20 = (x113>>(x114>(x115^x116)));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x121 = 109U;
	static int64_t x122 = -1LL;
	static int16_t x123 = -482;
	uint32_t x124 = 130289847U;
	volatile int32_t t21 = -425;

    t21 = (x121>>(x122>(x123^x124)));

    if (t21 != 109) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x125 = UINT8_MAX;
	static int64_t x126 = INT64_MAX;
	static int8_t x128 = 0;
	volatile int32_t t22 = -14818868;

    t22 = (x125>>(x126>(x127^x128)));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x129 = 360986788749353710LLU;
	int8_t x130 = 50;
	uint8_t x131 = UINT8_MAX;
	static uint64_t x132 = 3639244213754LLU;
	uint64_t t23 = 6994LLU;

    t23 = (x129>>(x130>(x131^x132)));

    if (t23 != 360986788749353710LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x154 = INT32_MIN;
	int8_t x155 = 1;
	int16_t x156 = -18;
	volatile uint64_t t24 = 944929726169782LLU;

    t24 = (x153>>(x154>(x155^x156)));

    if (t24 != 138975163482718756LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x157 = UINT64_MAX;
	volatile int32_t x159 = INT32_MIN;
	static int16_t x160 = -1;
	volatile uint64_t t25 = UINT64_MAX;

    t25 = (x157>>(x158>(x159^x160)));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x169 = 25093262LLU;
	int16_t x170 = 14957;
	uint16_t x171 = UINT16_MAX;
	volatile int64_t x172 = INT64_MIN;
	volatile uint64_t t26 = 317738219543033898LLU;

    t26 = (x169>>(x170>(x171^x172)));

    if (t26 != 12546631LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x174 = INT8_MAX;
	int16_t x175 = -2;
	uint32_t x176 = 50820768U;

    t27 = (x173>>(x174>(x175^x176)));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x177 = 2;
	int64_t x178 = -1LL;
	int32_t x179 = INT32_MIN;
	int32_t x180 = -1;
	int32_t t28 = -1751470;

    t28 = (x177>>(x178>(x179^x180)));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x190 = INT16_MAX;
	int16_t x191 = -1;
	volatile uint16_t x192 = 189U;
	int32_t t29 = -325639;

    t29 = (x189>>(x190>(x191^x192)));

    if (t29 != 17) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x202 = 1212723LLU;
	uint32_t x203 = 18U;
	int8_t x204 = -1;
	uint64_t t30 = 538175LLU;

    t30 = (x201>>(x202>(x203^x204)));

    if (t30 != 1987393386426LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x205 = UINT16_MAX;
	volatile uint8_t x206 = 2U;
	static int32_t x207 = INT32_MAX;
	volatile int16_t x208 = INT16_MAX;
	int32_t t31 = -25;

    t31 = (x205>>(x206>(x207^x208)));

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = UINT64_MAX;
	uint16_t x216 = 908U;
	volatile int32_t t32 = 178220910;

    t32 = (x213>>(x214>(x215^x216)));

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x217 = 58U;
	int8_t x218 = -1;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = 1575U;
	int32_t t33 = -130838979;

    t33 = (x217>>(x218>(x219^x220)));

    if (t33 != 29) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x222 = 102208U;
	int64_t x223 = INT64_MAX;
	uint8_t x224 = 2U;
	uint64_t t34 = 4717080264465063405LLU;

    t34 = (x221>>(x222>(x223^x224)));

    if (t34 != 89321054086354LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x226 = 3410799;
	int16_t x227 = -345;
	uint8_t x228 = UINT8_MAX;
	uint64_t t35 = 52LLU;

    t35 = (x225>>(x226>(x227^x228)));

    if (t35 != 7877826388718754LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x230 = INT64_MIN;
	uint32_t x231 = 31096U;
	int16_t x232 = 2;

    t36 = (x229>>(x230>(x231^x232)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x237 = UINT16_MAX;
	volatile int32_t x238 = 152;
	int16_t x240 = INT16_MIN;
	static int32_t t37 = 300;

    t37 = (x237>>(x238>(x239^x240)));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x242 = INT32_MIN;
	volatile uint64_t x244 = 226133614LLU;
	uint64_t t38 = 168613LLU;

    t38 = (x241>>(x242>(x243^x244)));

    if (t38 != 10543353177997394LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x254 = UINT8_MAX;
	static uint64_t x255 = 393410LLU;
	static volatile int32_t t39 = -8627871;

    t39 = (x253>>(x254>(x255^x256)));

    if (t39 != 1737) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x257 = UINT8_MAX;
	uint32_t x258 = 4607U;
	volatile int64_t x259 = -1LL;
	int32_t t40 = -1046684557;

    t40 = (x257>>(x258>(x259^x260)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x261 = INT32_MAX;
	volatile int16_t x262 = -1843;
	int32_t x263 = 651430;
	static volatile uint32_t x264 = UINT32_MAX;
	static volatile int32_t t41 = 203;

    t41 = (x261>>(x262>(x263^x264)));

    if (t41 != 1073741823) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x270 = UINT32_MAX;
	uint16_t x271 = 824U;
	int32_t x272 = -1;
	volatile uint32_t t42 = 873686U;

    t42 = (x269>>(x270>(x271^x272)));

    if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x285 = 0;
	uint32_t x286 = 50381988U;
	uint64_t x288 = UINT64_MAX;
	int32_t t43 = 113;

    t43 = (x285>>(x286>(x287^x288)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x289 = 0U;
	int32_t x290 = -1;
	static int32_t x291 = -1;
	static int32_t x292 = -1;
	int32_t t44 = 4363;

    t44 = (x289>>(x290>(x291^x292)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x294 = INT16_MAX;

    t45 = (x293>>(x294>(x295^x296)));

    if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x297 = 154;
	int64_t x298 = INT64_MIN;
	int8_t x299 = -38;
	int16_t x300 = INT16_MAX;
	int32_t t46 = 323355585;

    t46 = (x297>>(x298>(x299^x300)));

    if (t46 != 154) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x301 = INT8_MAX;
	volatile uint8_t x302 = 8U;
	uint8_t x303 = 3U;
	static uint32_t x304 = UINT32_MAX;

    t47 = (x301>>(x302>(x303^x304)));

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x305 = INT8_MAX;
	volatile int16_t x308 = 94;
	static int32_t t48 = 5168407;

    t48 = (x305>>(x306>(x307^x308)));

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x310 = 0U;
	volatile int64_t x311 = -730184954158323342LL;
	volatile int8_t x312 = INT8_MIN;
	static uint32_t t49 = UINT32_MAX;

    t49 = (x309>>(x310>(x311^x312)));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x321 = 3U;
	int16_t x322 = -1;
	volatile int16_t x323 = -1;
	volatile int8_t x324 = 57;
	volatile uint32_t t50 = 50429U;

    t50 = (x321>>(x322>(x323^x324)));

    if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x325 = UINT32_MAX;
	volatile int32_t x326 = INT32_MIN;
	static int32_t x327 = -1;
	volatile int64_t x328 = INT64_MIN;
	uint32_t t51 = UINT32_MAX;

    t51 = (x325>>(x326>(x327^x328)));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x329 = 30U;
	volatile int16_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	int64_t x332 = -5468142625968889LL;
	int32_t t52 = 72330357;

    t52 = (x329>>(x330>(x331^x332)));

    if (t52 != 15) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x333 = UINT16_MAX;
	int16_t x335 = INT16_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	int32_t t53 = 360337958;

    t53 = (x333>>(x334>(x335^x336)));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x337 = 0;
	uint8_t x338 = UINT8_MAX;
	uint8_t x340 = UINT8_MAX;
	int32_t t54 = -629;

    t54 = (x337>>(x338>(x339^x340)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x341 = UINT8_MAX;
	uint32_t x342 = 7U;
	uint8_t x343 = 40U;
	int64_t x344 = -1LL;

    t55 = (x341>>(x342>(x343^x344)));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x345 = UINT32_MAX;
	uint8_t x346 = 26U;
	uint8_t x347 = UINT8_MAX;
	static uint32_t x348 = 42837U;
	uint32_t t56 = UINT32_MAX;

    t56 = (x345>>(x346>(x347^x348)));

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x349 = 3853U;
	static int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MAX;
	uint8_t x352 = 76U;

    t57 = (x349>>(x350>(x351^x352)));

    if (t57 != 3853) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x363 = INT16_MAX;
	int16_t x364 = -1;
	int32_t t58 = -1509995;

    t58 = (x361>>(x362>(x363^x364)));

    if (t58 != 63) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x374 = 0LLU;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t59 = 2384971;

    t59 = (x373>>(x374>(x375^x376)));

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x381 = 261705633U;
	int32_t x382 = INT32_MAX;
	int32_t x383 = INT32_MIN;
	volatile uint32_t t60 = 130854U;

    t60 = (x381>>(x382>(x383^x384)));

    if (t60 != 261705633U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x385 = UINT32_MAX;
	volatile int8_t x386 = INT8_MAX;
	static int8_t x387 = INT8_MIN;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t61 = UINT32_MAX;

    t61 = (x385>>(x386>(x387^x388)));

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x397 = UINT8_MAX;
	uint32_t x398 = UINT32_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t62 = 3188;

    t62 = (x397>>(x398>(x399^x400)));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x413 = 2624575U;
	volatile int64_t x414 = INT64_MAX;
	static int64_t x415 = INT64_MAX;
	static volatile int64_t x416 = -1LL;
	volatile uint32_t t63 = 6565U;

    t63 = (x413>>(x414>(x415^x416)));

    if (t63 != 1312287U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x420 = INT8_MIN;
	int32_t t64 = -808;

    t64 = (x417>>(x418>(x419^x420)));

    if (t64 != 28) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x421 = 2517310U;
	volatile uint64_t x422 = 16695564967966998LLU;
	int64_t x424 = INT64_MAX;

    t65 = (x421>>(x422>(x423^x424)));

    if (t65 != 2517310U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x437 = 18;
	int64_t x438 = -1LL;
	static uint16_t x439 = 4119U;
	int8_t x440 = 1;
	volatile int32_t t66 = 49849;

    t66 = (x437>>(x438>(x439^x440)));

    if (t66 != 18) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x445 = 753;
	static uint64_t x446 = UINT64_MAX;
	int8_t x447 = INT8_MAX;
	int8_t x448 = 60;
	int32_t t67 = 3853631;

    t67 = (x445>>(x446>(x447^x448)));

    if (t67 != 376) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x449 = UINT32_MAX;
	volatile int64_t x450 = INT64_MIN;
	uint16_t x451 = 13U;
	int64_t x452 = INT64_MAX;
	uint32_t t68 = UINT32_MAX;

    t68 = (x449>>(x450>(x451^x452)));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x457 = UINT64_MAX;
	int8_t x458 = INT8_MIN;
	static int32_t x459 = -1;
	int64_t x460 = INT64_MAX;
	uint64_t t69 = 2672LLU;

    t69 = (x457>>(x458>(x459^x460)));

    if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x461 = UINT8_MAX;
	volatile uint32_t x463 = 60U;
	static volatile uint8_t x464 = UINT8_MAX;
	volatile int32_t t70 = 381;

    t70 = (x461>>(x462>(x463^x464)));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x465 = 4379273080907LL;
	uint32_t x466 = 2716714U;
	uint32_t x468 = 1U;
	int64_t t71 = -234LL;

    t71 = (x465>>(x466>(x467^x468)));

    if (t71 != 4379273080907LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x469 = UINT16_MAX;
	static volatile uint64_t x471 = 96213LLU;
	static uint16_t x472 = UINT16_MAX;
	volatile int32_t t72 = -75;

    t72 = (x469>>(x470>(x471^x472)));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x473 = UINT32_MAX;
	uint8_t x474 = UINT8_MAX;
	volatile uint32_t x475 = 0U;
	int32_t x476 = -1;
	static volatile uint32_t t73 = UINT32_MAX;

    t73 = (x473>>(x474>(x475^x476)));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x485 = INT8_MAX;
	static int8_t x486 = INT8_MIN;
	int64_t x487 = 2590126104LL;
	volatile int32_t t74 = 4975;

    t74 = (x485>>(x486>(x487^x488)));

    if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x493 = 7010609U;
	volatile int8_t x494 = -1;
	uint64_t x495 = 58LLU;
	int16_t x496 = 14928;
	volatile uint32_t t75 = 714U;

    t75 = (x493>>(x494>(x495^x496)));

    if (t75 != 3505304U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x497 = UINT32_MAX;
	static int8_t x498 = INT8_MIN;
	static int32_t x499 = INT32_MIN;
	int8_t x500 = -36;
	volatile uint32_t t76 = UINT32_MAX;

    t76 = (x497>>(x498>(x499^x500)));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x501 = INT16_MAX;
	int64_t x502 = -1LL;
	int64_t x503 = INT64_MIN;
	volatile uint64_t x504 = 971LLU;
	static int32_t t77 = 95;

    t77 = (x501>>(x502>(x503^x504)));

    if (t77 != 16383) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x513 = 682U;
	uint64_t x514 = 150626283298LLU;
	static int32_t x515 = INT32_MIN;
	volatile int16_t x516 = -1;
	int32_t t78 = 621669;

    t78 = (x513>>(x514>(x515^x516)));

    if (t78 != 341) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x517 = INT64_MAX;
	int32_t x518 = INT32_MIN;
	static int8_t x519 = INT8_MAX;
	static int64_t t79 = INT64_MAX;

    t79 = (x517>>(x518>(x519^x520)));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x533 = 3LL;
	static uint32_t x534 = UINT32_MAX;
	int32_t x535 = INT32_MAX;
	int8_t x536 = INT8_MIN;

    t80 = (x533>>(x534>(x535^x536)));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x537 = 5853;
	int16_t x538 = -15;
	volatile int8_t x539 = INT8_MIN;
	static volatile uint64_t x540 = UINT64_MAX;
	int32_t t81 = -1;

    t81 = (x537>>(x538>(x539^x540)));

    if (t81 != 2926) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x545 = INT32_MAX;
	volatile int32_t x546 = INT32_MAX;
	int8_t x547 = 28;
	int32_t t82 = -74261533;

    t82 = (x545>>(x546>(x547^x548)));

    if (t82 != 1073741823) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x553 = 52U;
	int32_t x554 = INT32_MIN;
	int16_t x555 = INT16_MAX;
	static volatile int32_t t83 = -93;

    t83 = (x553>>(x554>(x555^x556)));

    if (t83 != 52) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x565 = 407430178U;
	int8_t x567 = INT8_MIN;
	volatile uint32_t t84 = 91U;

    t84 = (x565>>(x566>(x567^x568)));

    if (t84 != 407430178U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x569 = INT8_MAX;
	uint16_t x570 = 30006U;
	int32_t x571 = -841930;
	volatile int8_t x572 = 13;
	volatile int32_t t85 = 0;

    t85 = (x569>>(x570>(x571^x572)));

    if (t85 != 63) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x573 = UINT32_MAX;
	uint64_t x574 = 5391289LLU;
	volatile uint32_t t86 = 4U;

    t86 = (x573>>(x574>(x575^x576)));

    if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x579 = UINT32_MAX;
	int16_t x580 = -1;
	volatile int32_t t87 = 43313;

    t87 = (x577>>(x578>(x579^x580)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x585 = UINT32_MAX;
	volatile uint16_t x586 = 5U;
	volatile uint32_t t88 = UINT32_MAX;

    t88 = (x585>>(x586>(x587^x588)));

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x589 = 0LLU;
	int32_t x591 = 1;
	volatile int8_t x592 = INT8_MIN;
	static uint64_t t89 = 3053170972412751LLU;

    t89 = (x589>>(x590>(x591^x592)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x601 = 6U;
	static uint16_t x602 = 110U;
	static uint64_t x604 = UINT64_MAX;
	int32_t t90 = -1;

    t90 = (x601>>(x602>(x603^x604)));

    if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x605 = INT16_MAX;
	int8_t x606 = 1;
	int64_t x607 = 6658243725606634LL;
	int32_t x608 = -319943;
	int32_t t91 = -2;

    t91 = (x605>>(x606>(x607^x608)));

    if (t91 != 16383) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x609 = INT64_MAX;
	static int16_t x611 = INT16_MIN;
	volatile uint16_t x612 = 980U;
	int64_t t92 = -23711LL;

    t92 = (x609>>(x610>(x611^x612)));

    if (t92 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x613 = 505;
	uint32_t x614 = 265029U;
	volatile int32_t x615 = -1;
	int32_t t93 = 351;

    t93 = (x613>>(x614>(x615^x616)));

    if (t93 != 505) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x629 = UINT8_MAX;
	int32_t x631 = -1;
	volatile int32_t t94 = -411293;

    t94 = (x629>>(x630>(x631^x632)));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x633 = 6695U;
	int8_t x634 = -1;
	uint16_t x635 = 2131U;
	static int64_t x636 = INT64_MAX;
	int32_t t95 = 1;

    t95 = (x633>>(x634>(x635^x636)));

    if (t95 != 6695) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x645 = 10671387148464230LLU;
	int64_t x646 = 77210805874548LL;
	uint16_t x647 = 8708U;
	volatile int32_t x648 = INT32_MIN;

    t96 = (x645>>(x646>(x647^x648)));

    if (t96 != 5335693574232115LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x657 = 1472;
	int8_t x658 = INT8_MIN;
	int16_t x659 = INT16_MAX;
	static volatile int32_t t97 = -29890625;

    t97 = (x657>>(x658>(x659^x660)));

    if (t97 != 1472) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x665 = 1;
	int8_t x666 = 0;
	int64_t x667 = -33179253944LL;
	int8_t x668 = -1;
	volatile int32_t t98 = 52883926;

    t98 = (x665>>(x666>(x667^x668)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x673 = 120;
	int64_t x674 = INT64_MIN;
	static int32_t x675 = 58;
	int64_t x676 = 2914093LL;
	int32_t t99 = -12048;

    t99 = (x673>>(x674>(x675^x676)));

    if (t99 != 120) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x677 = 100029446LLU;
	static uint32_t x679 = UINT32_MAX;
	int32_t x680 = INT32_MIN;
	uint64_t t100 = 726173684598LLU;

    t100 = (x677>>(x678>(x679^x680)));

    if (t100 != 100029446LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x685 = 328U;
	static uint16_t x687 = 3219U;
	uint64_t x688 = 699633LLU;

    t101 = (x685>>(x686>(x687^x688)));

    if (t101 != 164) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x689 = 1U;
	uint64_t x690 = 132761574927043862LLU;
	int32_t x691 = 27;
	int64_t x692 = -1LL;
	int32_t t102 = -148791172;

    t102 = (x689>>(x690>(x691^x692)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x693 = 1;
	volatile int32_t x694 = INT32_MAX;
	int8_t x695 = INT8_MAX;
	int64_t x696 = 30146183LL;

    t103 = (x693>>(x694>(x695^x696)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x697 = 5U;
	int64_t x698 = INT64_MIN;
	static int32_t x699 = INT32_MIN;
	uint32_t x700 = 14454U;
	uint32_t t104 = 42U;

    t104 = (x697>>(x698>(x699^x700)));

    if (t104 != 5U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x702 = -1LL;
	int8_t x703 = INT8_MIN;
	volatile uint8_t x704 = 30U;
	volatile int64_t t105 = 558773599783LL;

    t105 = (x701>>(x702>(x703^x704)));

    if (t105 != 266560955311487643LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x705 = 0;
	volatile int8_t x706 = INT8_MIN;
	int64_t x707 = -71585264LL;
	static int32_t t106 = -57;

    t106 = (x705>>(x706>(x707^x708)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x709 = INT8_MAX;
	int8_t x710 = INT8_MIN;
	static volatile int16_t x712 = -1;
	static volatile int32_t t107 = -49910;

    t107 = (x709>>(x710>(x711^x712)));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x713 = 2973U;
	static uint32_t x714 = 978U;
	static volatile int64_t x715 = 220673592066111LL;
	volatile int8_t x716 = 34;

    t108 = (x713>>(x714>(x715^x716)));

    if (t108 != 2973) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x726 = INT64_MAX;
	int16_t x727 = 2;

    t109 = (x725>>(x726>(x727^x728)));

    if (t109 != 32767) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x729 = 3;
	int8_t x730 = -1;
	volatile uint64_t x731 = UINT64_MAX;
	int32_t x732 = -1;
	int32_t t110 = -7;

    t110 = (x729>>(x730>(x731^x732)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x733 = UINT8_MAX;
	uint32_t x734 = UINT32_MAX;
	uint16_t x735 = 41U;
	uint8_t x736 = UINT8_MAX;
	int32_t t111 = 883;

    t111 = (x733>>(x734>(x735^x736)));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x753 = 49U;
	volatile uint16_t x755 = 13U;
	int32_t x756 = -375084;
	volatile int32_t t112 = -11;

    t112 = (x753>>(x754>(x755^x756)));

    if (t112 != 24) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x757 = UINT32_MAX;
	volatile int64_t x758 = INT64_MAX;
	uint64_t x759 = UINT64_MAX;
	volatile int16_t x760 = INT16_MIN;
	volatile uint32_t t113 = 2U;

    t113 = (x757>>(x758>(x759^x760)));

    if (t113 != 2147483647U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x761 = 72259LL;
	volatile int16_t x762 = -298;
	volatile uint64_t x763 = UINT64_MAX;
	uint32_t x764 = 59985U;
	static int64_t t114 = 8660265954389438LL;

    t114 = (x761>>(x762>(x763^x764)));

    if (t114 != 36129LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x785 = UINT32_MAX;
	uint64_t x786 = 9271927717746LLU;
	static volatile int8_t x787 = INT8_MIN;
	int8_t x788 = -56;

    t115 = (x785>>(x786>(x787^x788)));

    if (t115 != 2147483647U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x789 = 49;
	int16_t x791 = 2;
	uint32_t x792 = 121015U;

    t116 = (x789>>(x790>(x791^x792)));

    if (t116 != 24) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x793 = UINT64_MAX;
	volatile uint64_t x794 = UINT64_MAX;
	uint32_t x795 = UINT32_MAX;

    t117 = (x793>>(x794>(x795^x796)));

    if (t117 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x799 = UINT8_MAX;
	volatile int32_t x800 = INT32_MIN;
	int32_t t118 = -19;

    t118 = (x797>>(x798>(x799^x800)));

    if (t118 != 63) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x805 = INT32_MAX;
	uint16_t x806 = 5U;
	static uint64_t x808 = 103676236472LLU;

    t119 = (x805>>(x806>(x807^x808)));

    if (t119 != INT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x813 = 105470269LLU;
	int8_t x814 = INT8_MAX;
	volatile int8_t x815 = -35;
	uint8_t x816 = 1U;
	uint64_t t120 = 65226518202291479LLU;

    t120 = (x813>>(x814>(x815^x816)));

    if (t120 != 52735134LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x817 = 13370487759LLU;
	int16_t x818 = INT16_MAX;
	int16_t x819 = INT16_MAX;
	int64_t x820 = -553400981984794845LL;
	static uint64_t t121 = 276871906339021341LLU;

    t121 = (x817>>(x818>(x819^x820)));

    if (t121 != 6685243879LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x841 = 43;
	int64_t x842 = -1387560925043621041LL;
	int8_t x843 = INT8_MAX;
	int32_t x844 = INT32_MIN;
	volatile int32_t t122 = -1885;

    t122 = (x841>>(x842>(x843^x844)));

    if (t122 != 43) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x845 = 5467;
	int16_t x846 = INT16_MIN;
	uint64_t x847 = 13LLU;
	int16_t x848 = -1;
	volatile int32_t t123 = 1283;

    t123 = (x845>>(x846>(x847^x848)));

    if (t123 != 5467) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x852 = INT64_MAX;
	volatile int32_t t124 = INT32_MAX;

    t124 = (x849>>(x850>(x851^x852)));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x858 = INT32_MIN;
	uint32_t x859 = 60533U;
	int64_t x860 = -1382983139982LL;
	volatile int32_t t125 = 1059966095;

    t125 = (x857>>(x858>(x859^x860)));

    if (t125 != 5) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x861 = 1731U;
	int8_t x862 = INT8_MIN;
	int16_t x863 = -25;
	int64_t x864 = INT64_MIN;
	static volatile int32_t t126 = -32741855;

    t126 = (x861>>(x862>(x863^x864)));

    if (t126 != 1731) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x877 = UINT8_MAX;
	uint16_t x878 = UINT16_MAX;
	static uint32_t x879 = 43577702U;
	int8_t x880 = INT8_MIN;
	static int32_t t127 = -5;

    t127 = (x877>>(x878>(x879^x880)));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x881 = INT64_MAX;
	volatile int16_t x882 = -2;
	volatile int32_t x883 = -485;
	int8_t x884 = INT8_MIN;

    t128 = (x881>>(x882>(x883^x884)));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x885 = UINT8_MAX;
	int64_t x886 = 0LL;
	int32_t x887 = 1328;
	volatile int32_t t129 = 162;

    t129 = (x885>>(x886>(x887^x888)));

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x889 = UINT16_MAX;
	int32_t x890 = 0;
	volatile uint64_t x892 = 1397641237743473569LLU;

    t130 = (x889>>(x890>(x891^x892)));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x893 = 5;
	int16_t x895 = INT16_MIN;
	int64_t x896 = INT64_MIN;

    t131 = (x893>>(x894>(x895^x896)));

    if (t131 != 5) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x897 = 1;
	int32_t x898 = INT32_MAX;
	int64_t x899 = INT64_MIN;
	uint16_t x900 = 429U;

    t132 = (x897>>(x898>(x899^x900)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x901 = UINT8_MAX;
	volatile int8_t x902 = INT8_MAX;
	uint64_t x904 = UINT64_MAX;
	volatile int32_t t133 = -1286736;

    t133 = (x901>>(x902>(x903^x904)));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x918 = 143U;
	int64_t x920 = -1749240LL;

    t134 = (x917>>(x918>(x919^x920)));

    if (t134 != 83) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x921 = UINT32_MAX;
	int32_t x922 = 51;
	int8_t x924 = INT8_MIN;
	volatile uint32_t t135 = UINT32_MAX;

    t135 = (x921>>(x922>(x923^x924)));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x925 = INT64_MAX;
	static int64_t x927 = INT64_MAX;
	uint8_t x928 = UINT8_MAX;
	volatile int64_t t136 = INT64_MAX;

    t136 = (x925>>(x926>(x927^x928)));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x930 = 14U;
	int64_t x931 = -1LL;
	static int64_t x932 = -102LL;
	volatile int32_t t137 = -1;

    t137 = (x929>>(x930>(x931^x932)));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x933 = 435206519LLU;
	uint16_t x934 = UINT16_MAX;
	int16_t x935 = INT16_MIN;
	int64_t x936 = INT64_MAX;

    t138 = (x933>>(x934>(x935^x936)));

    if (t138 != 217603259LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x949 = 3U;
	uint64_t x950 = 128005467LLU;
	int64_t x951 = INT64_MIN;
	int16_t x952 = -26;
	volatile uint32_t t139 = 1613393U;

    t139 = (x949>>(x950>(x951^x952)));

    if (t139 != 3U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x957 = 7;
	static uint64_t x958 = 7284205LLU;
	volatile int32_t x959 = INT32_MAX;
	int16_t x960 = INT16_MAX;
	volatile int32_t t140 = 2603;

    t140 = (x957>>(x958>(x959^x960)));

    if (t140 != 7) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x965 = 1U;
	int64_t x966 = -1LL;
	int8_t x967 = -1;
	int64_t x968 = INT64_MIN;
	volatile int32_t t141 = 29;

    t141 = (x965>>(x966>(x967^x968)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x969 = 30U;
	int8_t x970 = INT8_MIN;
	volatile int32_t x972 = INT32_MIN;
	static int32_t t142 = 13;

    t142 = (x969>>(x970>(x971^x972)));

    if (t142 != 15) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x973 = UINT16_MAX;
	int32_t x974 = -1;
	static int8_t x975 = 1;
	uint64_t x976 = 2132958LLU;
	int32_t t143 = -265576;

    t143 = (x973>>(x974>(x975^x976)));

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x977 = INT64_MAX;
	int32_t x978 = INT32_MAX;
	int8_t x979 = INT8_MAX;
	int64_t x980 = INT64_MAX;
	int64_t t144 = INT64_MAX;

    t144 = (x977>>(x978>(x979^x980)));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x982 = -11;
	uint8_t x983 = UINT8_MAX;
	uint32_t x984 = 524500974U;
	volatile int32_t t145 = -114908530;

    t145 = (x981>>(x982>(x983^x984)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x985 = 1;
	int16_t x986 = INT16_MAX;
	int8_t x988 = 3;
	static volatile int32_t t146 = -697753941;

    t146 = (x985>>(x986>(x987^x988)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x989 = 30646124220LL;
	volatile uint32_t x990 = 26368504U;
	int8_t x991 = -1;
	volatile int64_t t147 = -53025849771239252LL;

    t147 = (x989>>(x990>(x991^x992)));

    if (t147 != 15323062110LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x998 = -4729965021LL;
	static volatile int16_t x1000 = INT16_MIN;

    t148 = (x997>>(x998>(x999^x1000)));

    if (t148 != 8240216U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1001 = INT16_MAX;
	uint64_t x1002 = UINT64_MAX;
	int32_t x1003 = INT32_MIN;
	static uint8_t x1004 = 73U;
	int32_t t149 = 8418;

    t149 = (x1001>>(x1002>(x1003^x1004)));

    if (t149 != 16383) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1019 = INT16_MIN;
	volatile int8_t x1020 = INT8_MIN;
	volatile int32_t t150 = -84502;

    t150 = (x1017>>(x1018>(x1019^x1020)));

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1021 = INT32_MAX;
	static int64_t x1022 = INT64_MIN;
	uint32_t x1023 = 79760525U;
	volatile uint32_t x1024 = 11U;

    t151 = (x1021>>(x1022>(x1023^x1024)));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x1025 = 9825180U;
	int32_t x1027 = INT32_MAX;
	volatile uint16_t x1028 = 69U;
	uint32_t t152 = 23752092U;

    t152 = (x1025>>(x1026>(x1027^x1028)));

    if (t152 != 9825180U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1031 = INT64_MIN;
	static volatile int64_t x1032 = INT64_MIN;
	uint32_t t153 = 712394714U;

    t153 = (x1029>>(x1030>(x1031^x1032)));

    if (t153 != 3772U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1041 = INT16_MAX;
	int8_t x1042 = INT8_MIN;
	int32_t x1043 = INT32_MAX;
	uint64_t x1044 = UINT64_MAX;
	static volatile int32_t t154 = -289;

    t154 = (x1041>>(x1042>(x1043^x1044)));

    if (t154 != 16383) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1050 = -1;
	int8_t x1051 = -15;
	volatile int32_t x1052 = 1892;

    t155 = (x1049>>(x1050>(x1051^x1052)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1057 = UINT32_MAX;
	uint32_t x1058 = 2781977U;
	uint16_t x1059 = 396U;
	volatile uint32_t t156 = 1081685U;

    t156 = (x1057>>(x1058>(x1059^x1060)));

    if (t156 != 2147483647U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1065 = 1;
	int64_t x1066 = -1LL;
	volatile int16_t x1067 = INT16_MIN;
	uint16_t x1068 = UINT16_MAX;
	volatile int32_t t157 = 2405026;

    t157 = (x1065>>(x1066>(x1067^x1068)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x1070 = -1LL;
	int16_t x1071 = -1;
	uint64_t t158 = 1LLU;

    t158 = (x1069>>(x1070>(x1071^x1072)));

    if (t158 != 31LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x1073 = INT32_MAX;
	static uint64_t x1074 = UINT64_MAX;
	volatile int32_t x1075 = INT32_MIN;
	volatile int32_t x1076 = -974;
	static volatile int32_t t159 = 5;

    t159 = (x1073>>(x1074>(x1075^x1076)));

    if (t159 != 1073741823) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1085 = 1;
	uint8_t x1086 = UINT8_MAX;
	int32_t x1087 = -1;
	int16_t x1088 = -1;

    t160 = (x1085>>(x1086>(x1087^x1088)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1089 = UINT32_MAX;
	int8_t x1090 = INT8_MIN;
	int16_t x1091 = -3473;
	int16_t x1092 = -102;
	uint32_t t161 = UINT32_MAX;

    t161 = (x1089>>(x1090>(x1091^x1092)));

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1097 = UINT8_MAX;
	int8_t x1098 = INT8_MIN;
	static int64_t x1099 = 185546LL;

    t162 = (x1097>>(x1098>(x1099^x1100)));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1109 = INT32_MAX;
	uint32_t x1110 = UINT32_MAX;
	uint32_t x1111 = 198932U;
	static int32_t t163 = 277;

    t163 = (x1109>>(x1110>(x1111^x1112)));

    if (t163 != 1073741823) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1113 = 432067;
	int16_t x1114 = -1;
	uint32_t x1115 = UINT32_MAX;
	static int64_t x1116 = -1LL;
	int32_t t164 = -55;

    t164 = (x1113>>(x1114>(x1115^x1116)));

    if (t164 != 216033) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1117 = 6U;
	uint16_t x1120 = 283U;
	int32_t t165 = 0;

    t165 = (x1117>>(x1118>(x1119^x1120)));

    if (t165 != 3) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1128 = INT16_MIN;
	static volatile int32_t t166 = 0;

    t166 = (x1125>>(x1126>(x1127^x1128)));

    if (t166 != 1073741823) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1133 = UINT64_MAX;
	int64_t x1134 = 97072324LL;
	int8_t x1135 = INT8_MIN;
	int64_t x1136 = INT64_MAX;
	uint64_t t167 = 1954502492909398LLU;

    t167 = (x1133>>(x1134>(x1135^x1136)));

    if (t167 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x1137 = UINT16_MAX;
	int16_t x1138 = -1473;
	uint16_t x1139 = 842U;
	uint64_t x1140 = 269962331729504LLU;
	volatile int32_t t168 = 1;

    t168 = (x1137>>(x1138>(x1139^x1140)));

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x1149 = UINT64_MAX;
	uint32_t x1150 = 241U;
	static int8_t x1151 = INT8_MIN;
	int32_t x1152 = INT32_MIN;
	uint64_t t169 = UINT64_MAX;

    t169 = (x1149>>(x1150>(x1151^x1152)));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1153 = UINT32_MAX;
	uint8_t x1155 = 93U;
	int32_t x1156 = -451523;

    t170 = (x1153>>(x1154>(x1155^x1156)));

    if (t170 != 2147483647U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1162 = INT16_MIN;
	static uint64_t x1163 = UINT64_MAX;
	int8_t x1164 = -1;
	static volatile uint32_t t171 = 2745U;

    t171 = (x1161>>(x1162>(x1163^x1164)));

    if (t171 != 66372630U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1173 = INT16_MAX;
	int64_t x1174 = -131LL;
	static uint64_t x1175 = 114262LLU;
	volatile int32_t t172 = 3491;

    t172 = (x1173>>(x1174>(x1175^x1176)));

    if (t172 != 16383) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x1177 = INT8_MAX;
	int16_t x1179 = INT16_MIN;

    t173 = (x1177>>(x1178>(x1179^x1180)));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1181 = UINT8_MAX;
	int32_t x1182 = INT32_MIN;
	int32_t t174 = 29966292;

    t174 = (x1181>>(x1182>(x1183^x1184)));

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x1185 = 981910024U;
	int16_t x1187 = -1;
	uint32_t t175 = 1395912280U;

    t175 = (x1185>>(x1186>(x1187^x1188)));

    if (t175 != 490955012U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1189 = 0U;
	volatile uint32_t x1191 = UINT32_MAX;
	uint32_t t176 = 14782354U;

    t176 = (x1189>>(x1190>(x1191^x1192)));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1202 = INT32_MIN;
	volatile uint64_t x1204 = 104LLU;
	int64_t t177 = INT64_MAX;

    t177 = (x1201>>(x1202>(x1203^x1204)));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1210 = 2;
	static int64_t x1211 = 432535LL;
	static volatile int32_t t178 = 345339;

    t178 = (x1209>>(x1210>(x1211^x1212)));

    if (t178 != 845) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1225 = INT32_MAX;
	static volatile int32_t x1226 = INT32_MIN;
	uint16_t x1227 = 3U;
	uint32_t x1228 = UINT32_MAX;
	int32_t t179 = INT32_MAX;

    t179 = (x1225>>(x1226>(x1227^x1228)));

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint16_t x1234 = UINT16_MAX;
	uint32_t x1235 = UINT32_MAX;
	static int64_t x1236 = 136LL;
	static int32_t t180 = -34;

    t180 = (x1233>>(x1234>(x1235^x1236)));

    if (t180 != 61) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x1237 = 495538974U;
	uint8_t x1239 = UINT8_MAX;
	int64_t x1240 = -1LL;
	uint32_t t181 = 491U;

    t181 = (x1237>>(x1238>(x1239^x1240)));

    if (t181 != 247769487U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1241 = 3849907U;
	volatile int32_t x1243 = INT32_MIN;
	volatile uint32_t t182 = 52989U;

    t182 = (x1241>>(x1242>(x1243^x1244)));

    if (t182 != 3849907U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1245 = UINT8_MAX;
	int16_t x1246 = INT16_MIN;
	int64_t x1247 = INT64_MIN;
	int8_t x1248 = -1;
	volatile int32_t t183 = 181;

    t183 = (x1245>>(x1246>(x1247^x1248)));

    if (t183 != 255) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1249 = 8013614899864LL;
	uint32_t x1250 = 525821358U;
	volatile int64_t x1252 = -388744201908581LL;
	int64_t t184 = 1938443728273LL;

    t184 = (x1249>>(x1250>(x1251^x1252)));

    if (t184 != 4006807449932LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1253 = 22443440U;
	static int32_t x1254 = -5;
	volatile int32_t x1255 = -461684;
	int8_t x1256 = INT8_MAX;
	static uint32_t t185 = 841U;

    t185 = (x1253>>(x1254>(x1255^x1256)));

    if (t185 != 11221720U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1257 = INT64_MAX;
	volatile int16_t x1258 = 1666;
	uint64_t x1259 = 894496795LLU;
	uint8_t x1260 = UINT8_MAX;
	static volatile int64_t t186 = INT64_MAX;

    t186 = (x1257>>(x1258>(x1259^x1260)));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1261 = 147365891046LLU;
	uint8_t x1263 = 47U;
	uint64_t t187 = 890LLU;

    t187 = (x1261>>(x1262>(x1263^x1264)));

    if (t187 != 147365891046LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1269 = UINT8_MAX;
	int32_t x1271 = INT32_MIN;
	int64_t x1272 = INT64_MIN;
	volatile int32_t t188 = 2;

    t188 = (x1269>>(x1270>(x1271^x1272)));

    if (t188 != 255) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1273 = 86485352U;
	volatile uint16_t x1274 = UINT16_MAX;
	int8_t x1276 = -3;
	volatile uint32_t t189 = 437704U;

    t189 = (x1273>>(x1274>(x1275^x1276)));

    if (t189 != 43242676U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1277 = 180088306LLU;
	static volatile uint8_t x1278 = UINT8_MAX;
	uint32_t x1280 = 10233U;

    t190 = (x1277>>(x1278>(x1279^x1280)));

    if (t190 != 180088306LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1281 = UINT16_MAX;
	volatile int8_t x1282 = INT8_MIN;
	volatile int64_t x1283 = INT64_MAX;
	uint16_t x1284 = 15197U;
	static int32_t t191 = 36994832;

    t191 = (x1281>>(x1282>(x1283^x1284)));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1294 = INT8_MAX;
	int64_t x1295 = INT64_MIN;
	int8_t x1296 = 0;

    t192 = (x1293>>(x1294>(x1295^x1296)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1297 = 5743;
	int32_t x1298 = 254579;
	int64_t x1299 = 2926603544LL;
	int8_t x1300 = INT8_MIN;
	int32_t t193 = 391269;

    t193 = (x1297>>(x1298>(x1299^x1300)));

    if (t193 != 2871) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1305 = INT16_MAX;
	volatile int64_t x1306 = 45472411LL;
	volatile int16_t x1307 = INT16_MAX;
	volatile int32_t t194 = 31;

    t194 = (x1305>>(x1306>(x1307^x1308)));

    if (t194 != 16383) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1321 = INT16_MAX;
	static int16_t x1322 = INT16_MAX;
	uint16_t x1323 = UINT16_MAX;
	uint16_t x1324 = UINT16_MAX;
	static int32_t t195 = 101263173;

    t195 = (x1321>>(x1322>(x1323^x1324)));

    if (t195 != 16383) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1334 = 253154948272933390LLU;
	volatile uint64_t x1335 = UINT64_MAX;
	int64_t x1336 = INT64_MIN;
	volatile uint32_t t196 = 6581657U;

    t196 = (x1333>>(x1334>(x1335^x1336)));

    if (t196 != 298U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1337 = 54U;
	int32_t x1338 = 2436675;
	volatile uint64_t x1339 = UINT64_MAX;
	static uint16_t x1340 = UINT16_MAX;
	static int32_t t197 = -16996893;

    t197 = (x1337>>(x1338>(x1339^x1340)));

    if (t197 != 54) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1345 = 1U;
	volatile uint64_t x1346 = 118847917113588LLU;
	int8_t x1347 = -1;
	static uint64_t x1348 = UINT64_MAX;
	int32_t t198 = -47957233;

    t198 = (x1345>>(x1346>(x1347^x1348)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1351 = 1U;
	static int32_t x1352 = INT32_MIN;
	volatile int32_t t199 = -844;

    t199 = (x1349>>(x1350>(x1351^x1352)));

    if (t199 != 39) { NG(); } else { ; }
	
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

