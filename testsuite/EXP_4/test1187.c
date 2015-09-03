#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = 1;
int8_t x21 = 5;
static uint8_t x23 = 9U;
uint8_t x26 = UINT8_MAX;
volatile int16_t x27 = 6;
volatile int16_t x29 = -1;
static volatile int32_t x31 = -1259;
volatile int32_t t7 = 22216845;
int64_t x37 = INT64_MIN;
volatile int64_t x42 = -1LL;
static volatile uint64_t x44 = UINT64_MAX;
int64_t t10 = -205680LL;
int8_t x46 = INT8_MAX;
volatile int64_t x48 = 2255808LL;
uint32_t x50 = 1728U;
static int32_t x53 = INT32_MAX;
int64_t t14 = 142257892999128643LL;
uint8_t x70 = 2U;
volatile int8_t x72 = INT8_MIN;
volatile int16_t x75 = 1;
int64_t x78 = INT64_MAX;
int16_t x81 = 13452;
uint64_t x83 = 3823951911350717LLU;
static int64_t x84 = -1LL;
volatile int32_t x86 = INT32_MAX;
int32_t t20 = -11610;
int16_t x97 = -317;
static volatile int16_t x99 = INT16_MIN;
static int8_t x100 = INT8_MAX;
uint64_t x102 = 606LLU;
static uint64_t t24 = 244778LLU;
int16_t x106 = INT16_MAX;
volatile int32_t x112 = INT32_MIN;
static int8_t x114 = INT8_MIN;
int32_t x116 = 26605458;
volatile int32_t t27 = 362888064;
int64_t x118 = 1513130712833LL;
uint16_t x133 = 219U;
int64_t x136 = INT64_MIN;
uint8_t x139 = UINT8_MAX;
static uint32_t x140 = 0U;
static volatile int64_t x149 = -1LL;
uint32_t x161 = 273998U;
uint64_t t37 = 1122063980616128LLU;
int8_t x169 = INT8_MIN;
int32_t x174 = -1;
uint32_t x183 = UINT32_MAX;
volatile int32_t x190 = INT32_MIN;
uint16_t x195 = 13U;
int32_t t44 = 64;
volatile int8_t x204 = -1;
uint32_t t46 = 23U;
int64_t x210 = 6LL;
uint8_t x215 = UINT8_MAX;
volatile int8_t x216 = INT8_MIN;
volatile int32_t x220 = INT32_MIN;
int8_t x227 = INT8_MIN;
static uint16_t x229 = UINT16_MAX;
int8_t x233 = INT8_MAX;
uint16_t x234 = UINT16_MAX;
int64_t x236 = INT64_MIN;
volatile int32_t x237 = INT32_MIN;
int8_t x238 = INT8_MIN;
int8_t x239 = 1;
volatile int64_t t55 = 42403864409LL;
uint64_t x247 = 1143LLU;
uint32_t x249 = UINT32_MAX;
volatile int32_t x256 = 890920136;
int8_t x261 = -1;
int64_t x264 = INT64_MIN;
int32_t t59 = -251370963;
int64_t x268 = 911366342575270686LL;
int64_t x269 = INT64_MIN;
volatile int32_t t62 = 886860305;
int8_t x291 = -1;
static int16_t x299 = INT16_MIN;
static uint64_t x300 = 35231LLU;
int8_t x311 = 13;
volatile uint64_t t69 = 642564156236LLU;
static volatile int32_t t70 = -1423;
int16_t x319 = INT16_MIN;
uint8_t x323 = 3U;
volatile int64_t t72 = -593812LL;
int32_t t73 = -10;
int8_t x333 = 50;
int32_t x334 = INT32_MAX;
static uint16_t x339 = UINT16_MAX;
int32_t t76 = 0;
static int32_t x343 = INT32_MIN;
static volatile int32_t t78 = 13487015;
static uint64_t t79 = 10679LLU;
uint32_t x362 = 5U;
volatile int64_t x366 = -10594LL;
int32_t x373 = 0;
static volatile int8_t x379 = 32;
volatile uint8_t x383 = 112U;
int32_t t87 = -28;
static int32_t x385 = INT32_MIN;
int64_t x386 = -1LL;
int16_t x389 = INT16_MIN;
int8_t x396 = 2;
int16_t x419 = INT16_MAX;
volatile int64_t x426 = INT64_MIN;
static int64_t t97 = -5722261920454LL;
uint8_t x429 = UINT8_MAX;
volatile int8_t x430 = INT8_MAX;
volatile int32_t x434 = -1;


void f0(void) {
	volatile uint32_t x1 = 1368355U;
	uint8_t x2 = 14U;
	uint64_t x3 = UINT64_MAX;
	static volatile int32_t x4 = 2785;
	volatile uint32_t t0 = 686266159U;

	t0 = (x1/(x2+(x3==x4)));

	if (t0 != 97739U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int32_t x6 = INT32_MIN;
	volatile uint16_t x7 = 14U;
	volatile uint32_t x8 = 583U;
	static int32_t t1 = -531512563;

	t1 = (x5/(x6+(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	volatile int8_t x10 = -1;
	int64_t x11 = INT64_MIN;
	int32_t x12 = -1;

	t2 = (x9/(x10+(x11==x12)));

	if (t2 != -255) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint16_t x14 = UINT16_MAX;
	static uint8_t x15 = 1U;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 97853;

	t3 = (x13/(x14+(x15==x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile uint16_t x18 = 1282U;
	int8_t x19 = -1;
	static int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -4;

	t4 = (x17/(x18+(x19==x20)));

	if (t4 != -1675104) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MAX;
	int64_t x24 = INT64_MAX;
	static int32_t t5 = 1154;

	t5 = (x21/(x22+(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 55035069U;
	int32_t x28 = INT32_MAX;
	static uint32_t t6 = 28991560U;

	t6 = (x25/(x26+(x27==x28)));

	if (t6 != 215823U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	uint64_t x32 = 21764776804258LLU;

	t7 = (x29/(x30+(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 1355LL;
	volatile int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	static uint32_t x36 = 1564775U;
	volatile int64_t t8 = -1387LL;

	t8 = (x33/(x34+(x35==x36)));

	if (t8 != -10LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = INT8_MAX;
	int16_t x39 = INT16_MIN;
	static int16_t x40 = INT16_MIN;
	volatile int64_t t9 = 22LL;

	t9 = (x37/(x38+(x39==x40)));

	if (t9 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	static uint8_t x43 = UINT8_MAX;

	t10 = (x41/(x42+(x43==x44)));

	if (t10 != -255LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = 19;
	int64_t x47 = INT64_MIN;
	int32_t t11 = 26423;

	t11 = (x45/(x46+(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1894078;
	volatile int64_t x51 = INT64_MIN;
	int8_t x52 = 2;
	volatile uint32_t t12 = 1602080U;

	t12 = (x49/(x50+(x51==x52)));

	if (t12 != 2484417U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -1LL;
	int32_t x55 = 133780544;
	int32_t x56 = INT32_MIN;
	volatile int64_t t13 = 28LL;

	t13 = (x53/(x54+(x55==x56)));

	if (t13 != -2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = 1950764270077LL;
	static int16_t x63 = INT16_MAX;
	uint16_t x64 = UINT16_MAX;

	t14 = (x61/(x62+(x63==x64)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = UINT8_MAX;
	uint64_t x66 = 60528051770970LLU;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 329LLU;
	uint64_t t15 = 302048853889342561LLU;

	t15 = (x65/(x66+(x67==x68)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 1;
	uint32_t x71 = 3863574U;
	int32_t t16 = 405053;

	t16 = (x69/(x70+(x71==x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MAX;
	int8_t x74 = -6;
	int32_t x76 = INT32_MIN;
	volatile int32_t t17 = -64760470;

	t17 = (x73/(x74+(x75==x76)));

	if (t17 != -357913941) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MIN;
	int16_t x79 = -526;
	int8_t x80 = INT8_MIN;
	static volatile int64_t t18 = 1302636932LL;

	t18 = (x77/(x78+(x79==x80)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = -1LL;
	volatile int64_t t19 = -19881631LL;

	t19 = (x81/(x82+(x83==x84)));

	if (t19 != -13452LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = 0;
	uint64_t x87 = 27737LLU;
	int16_t x88 = 21;

	t20 = (x85/(x86+(x87==x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	volatile int32_t x90 = INT32_MIN;
	uint64_t x91 = 1030164328LLU;
	int8_t x92 = INT8_MIN;
	int32_t t21 = 636;

	t21 = (x89/(x90+(x91==x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	uint8_t x94 = 3U;
	int16_t x95 = INT16_MAX;
	int64_t x96 = 1936219LL;
	int32_t t22 = -125;

	t22 = (x93/(x94+(x95==x96)));

	if (t22 != -715827882) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = INT32_MAX;
	int32_t t23 = 72;

	t23 = (x97/(x98+(x99==x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = UINT64_MAX;
	uint16_t x103 = UINT16_MAX;
	static volatile int32_t x104 = 42256362;

	t24 = (x101/(x102+(x103==x104)));

	if (t24 != 30440171738794639LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = INT32_MIN;
	uint16_t x107 = 16763U;
	int32_t x108 = INT32_MIN;
	volatile int32_t t25 = 64128;

	t25 = (x105/(x106+(x107==x108)));

	if (t25 != -65538) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = UINT32_MAX;
	uint64_t x111 = 84117867430LLU;
	uint32_t t26 = 21976342U;

	t26 = (x109/(x110+(x111==x112)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 70U;
	int32_t x115 = INT32_MIN;

	t27 = (x113/(x114+(x115==x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	int16_t x119 = 861;
	volatile int32_t x120 = INT32_MAX;
	int64_t t28 = 1748285325288921668LL;

	t28 = (x117/(x118+(x119==x120)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x121 = 43U;
	int64_t x122 = INT64_MAX;
	int8_t x123 = INT8_MIN;
	volatile uint8_t x124 = 46U;
	int64_t t29 = 114112999LL;

	t29 = (x121/(x122+(x123==x124)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = INT64_MAX;
	int8_t x130 = 3;
	int32_t x131 = -1;
	static int32_t x132 = INT32_MIN;
	volatile int64_t t30 = -249405948077LL;

	t30 = (x129/(x130+(x131==x132)));

	if (t30 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x134 = -1261;
	int8_t x135 = -1;
	int32_t t31 = -26545937;

	t31 = (x133/(x134+(x135==x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -1;
	int64_t x138 = -15318342451392007LL;
	volatile int64_t t32 = 21116779732768LL;

	t32 = (x137/(x138+(x139==x140)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x145 = INT16_MIN;
	static int16_t x146 = 1;
	volatile uint8_t x147 = UINT8_MAX;
	int32_t x148 = 1143635;
	volatile int32_t t33 = 10098955;

	t33 = (x145/(x146+(x147==x148)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = INT8_MIN;
	static uint64_t x151 = 54248740863190LLU;
	volatile uint8_t x152 = 7U;
	int64_t t34 = -399447610405LL;

	t34 = (x149/(x150+(x151==x152)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x157 = UINT16_MAX;
	volatile uint16_t x158 = 1U;
	volatile int64_t x159 = -3LL;
	int32_t x160 = INT32_MIN;
	volatile int32_t t35 = 244855;

	t35 = (x157/(x158+(x159==x160)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = INT8_MIN;
	int8_t x163 = -1;
	uint64_t x164 = UINT64_MAX;
	volatile uint32_t t36 = 81U;

	t36 = (x161/(x162+(x163==x164)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MAX;
	int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MIN;

	t37 = (x165/(x166+(x167==x168)));

	if (t37 != 8589934596LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x170 = UINT16_MAX;
	static volatile int64_t x171 = INT64_MIN;
	int16_t x172 = 103;
	int32_t t38 = 2;

	t38 = (x169/(x170+(x171==x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -1;
	int64_t x175 = -1408LL;
	uint64_t x176 = 1806909019LLU;
	int32_t t39 = -1;

	t39 = (x173/(x174+(x175==x176)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MIN;
	static int32_t x178 = -28657;
	uint64_t x179 = 2807LLU;
	volatile uint16_t x180 = UINT16_MAX;
	volatile int64_t t40 = -917395724LL;

	t40 = (x177/(x178+(x179==x180)));

	if (t40 != 321854068355193LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 0U;
	static volatile int32_t x182 = -1;
	static int64_t x184 = -3544LL;
	int32_t t41 = -3605874;

	t41 = (x181/(x182+(x183==x184)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = 0;
	uint8_t x191 = UINT8_MAX;
	int8_t x192 = INT8_MIN;
	volatile int32_t t42 = -332;

	t42 = (x189/(x190+(x191==x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MIN;
	static uint32_t x194 = UINT32_MAX;
	int32_t x196 = -1039938;
	int64_t t43 = 667715394676581LL;

	t43 = (x193/(x194+(x195==x196)));

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -2787;
	int16_t x198 = -1;
	int32_t x199 = -127528;
	int8_t x200 = INT8_MIN;

	t44 = (x197/(x198+(x199==x200)));

	if (t44 != 2787) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MAX;
	static volatile int8_t x203 = -16;
	volatile int32_t t45 = -3520225;

	t45 = (x201/(x202+(x203==x204)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 0U;
	int16_t x206 = 75;
	static uint8_t x207 = UINT8_MAX;
	static int16_t x208 = 0;

	t46 = (x205/(x206+(x207==x208)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MAX;
	static int32_t x211 = -1;
	static volatile int8_t x212 = -10;
	volatile int64_t t47 = -384451821LL;

	t47 = (x209/(x210+(x211==x212)));

	if (t47 != 357913941LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x213 = -535906;
	volatile uint32_t x214 = 1U;
	uint32_t t48 = 2U;

	t48 = (x213/(x214+(x215==x216)));

	if (t48 != 4294431390U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x217 = 1U;
	static volatile int8_t x218 = -1;
	int16_t x219 = INT16_MIN;
	uint32_t t49 = 411U;

	t49 = (x217/(x218+(x219==x220)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 1349006LLU;
	static volatile int64_t x222 = -1928077LL;
	uint8_t x223 = 8U;
	int8_t x224 = -13;
	uint64_t t50 = 6416LLU;

	t50 = (x221/(x222+(x223==x224)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x226 = 15U;
	int64_t x228 = INT64_MIN;
	volatile int64_t t51 = -71873LL;

	t51 = (x225/(x226+(x227==x228)));

	if (t51 != -614891469123651720LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x230 = 29276984178071LLU;
	int32_t x231 = -740293;
	int8_t x232 = -1;
	volatile uint64_t t52 = 109531133132938LLU;

	t52 = (x229/(x230+(x231==x232)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x235 = UINT8_MAX;
	static int32_t t53 = 210318820;

	t53 = (x233/(x234+(x235==x236)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x240 = -1;
	volatile int32_t t54 = 802;

	t54 = (x237/(x238+(x239==x240)));

	if (t54 != 16777216) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = -3;
	int64_t x242 = -1LL;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = 407U;

	t55 = (x241/(x242+(x243==x244)));

	if (t55 != 3LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x245 = -57712;
	uint8_t x246 = 59U;
	int64_t x248 = 644549LL;
	int32_t t56 = -383797045;

	t56 = (x245/(x246+(x247==x248)));

	if (t56 != -978) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x250 = -9990LL;
	static uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = INT16_MIN;
	int64_t t57 = -172229145341LL;

	t57 = (x249/(x250+(x251==x252)));

	if (t57 != -429926LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MAX;
	uint64_t x254 = 3664792021855374LLU;
	int8_t x255 = 11;
	uint64_t t58 = 2920874818LLU;

	t58 = (x253/(x254+(x255==x256)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x262 = 1719U;
	int64_t x263 = INT64_MIN;

	t59 = (x261/(x262+(x263==x264)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = 5U;
	uint16_t x266 = 1474U;
	volatile int32_t x267 = 0;
	static int32_t t60 = -730;

	t60 = (x265/(x266+(x267==x268)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x270 = 634218975855LLU;
	static uint16_t x271 = 2382U;
	int32_t x272 = -2047003;
	static uint64_t t61 = 24460125236320135LLU;

	t61 = (x269/(x270+(x271==x272)));

	if (t61 != 14542882LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = 11591;
	uint8_t x274 = UINT8_MAX;
	volatile uint16_t x275 = 202U;
	uint64_t x276 = 15LLU;

	t62 = (x273/(x274+(x275==x276)));

	if (t62 != 45) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = -227;
	static int16_t x278 = INT16_MAX;
	volatile int32_t x279 = -1;
	uint32_t x280 = 1229U;
	int32_t t63 = 409;

	t63 = (x277/(x278+(x279==x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x281 = INT8_MIN;
	int8_t x282 = 2;
	static uint32_t x283 = UINT32_MAX;
	static uint64_t x284 = 339426234LLU;
	volatile int32_t t64 = 13907511;

	t64 = (x281/(x282+(x283==x284)));

	if (t64 != -64) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -1LL;
	int8_t x290 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	static volatile int64_t t65 = 28022662990678LL;

	t65 = (x289/(x290+(x291==x292)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = INT16_MIN;
	static volatile int32_t x294 = -1;
	uint8_t x295 = 109U;
	static int8_t x296 = INT8_MAX;
	int32_t t66 = -117245904;

	t66 = (x293/(x294+(x295==x296)));

	if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x297 = 7366078244LLU;
	int32_t x298 = INT32_MIN;
	uint64_t t67 = 339056834584LLU;

	t67 = (x297/(x298+(x299==x300)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x301 = 4556188416224LLU;
	int16_t x302 = -1;
	volatile uint64_t x303 = 777168068775LLU;
	uint8_t x304 = UINT8_MAX;
	uint64_t t68 = 12827LLU;

	t68 = (x301/(x302+(x303==x304)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = UINT64_MAX;
	volatile int64_t x310 = -35179520LL;
	static int16_t x312 = INT16_MIN;

	t69 = (x309/(x310+(x311==x312)));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -1;
	uint16_t x314 = 4U;
	int64_t x315 = INT64_MIN;
	uint64_t x316 = 4LLU;

	t70 = (x313/(x314+(x315==x316)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x317 = INT32_MAX;
	int16_t x318 = -1;
	int16_t x320 = 2;
	static int32_t t71 = 188;

	t71 = (x317/(x318+(x319==x320)));

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x321 = INT64_MIN;
	static int16_t x322 = INT16_MAX;
	int8_t x324 = INT8_MIN;

	t72 = (x321/(x322+(x323==x324)));

	if (t72 != -281483566907400LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x325 = UINT8_MAX;
	int8_t x326 = INT8_MIN;
	volatile uint8_t x327 = 7U;
	uint16_t x328 = 3158U;

	t73 = (x325/(x326+(x327==x328)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x329 = -1LL;
	static volatile uint64_t x330 = UINT64_MAX;
	static int8_t x331 = -1;
	int32_t x332 = INT32_MAX;
	volatile uint64_t t74 = 2610408126758408245LLU;

	t74 = (x329/(x330+(x331==x332)));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x335 = 5354U;
	volatile uint64_t x336 = UINT64_MAX;
	int32_t t75 = 15;

	t75 = (x333/(x334+(x335==x336)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = INT16_MIN;
	static uint16_t x338 = UINT16_MAX;
	uint64_t x340 = 8110472152297097862LLU;

	t76 = (x337/(x338+(x339==x340)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x341 = INT8_MAX;
	static int32_t x342 = INT32_MIN;
	int16_t x344 = INT16_MAX;
	static int32_t t77 = -233;

	t77 = (x341/(x342+(x343==x344)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 1U;
	uint16_t x346 = UINT16_MAX;
	uint32_t x347 = 123805U;
	uint32_t x348 = 57674659U;

	t78 = (x345/(x346+(x347==x348)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x349 = 62974074559LLU;
	int64_t x350 = 4007941641834LL;
	int64_t x351 = -938979299081485232LL;
	static volatile int32_t x352 = INT32_MIN;

	t79 = (x349/(x350+(x351==x352)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x353 = 803543564287LL;
	uint32_t x354 = 102598U;
	int16_t x355 = -1;
	int64_t x356 = INT64_MIN;
	int64_t t80 = 4552451878LL;

	t80 = (x353/(x354+(x355==x356)));

	if (t80 != 7831961LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x357 = -7;
	static int16_t x358 = -1;
	volatile int16_t x359 = INT16_MIN;
	int64_t x360 = -1LL;
	volatile int32_t t81 = 235446;

	t81 = (x357/(x358+(x359==x360)));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x361 = -1LL;
	static volatile int8_t x363 = -9;
	uint8_t x364 = UINT8_MAX;
	volatile int64_t t82 = -708688LL;

	t82 = (x361/(x362+(x363==x364)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = -1;
	int16_t x367 = -271;
	volatile int16_t x368 = INT16_MIN;
	int64_t t83 = 80681172550634LL;

	t83 = (x365/(x366+(x367==x368)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x369 = INT8_MAX;
	static volatile int8_t x370 = 2;
	uint32_t x371 = 149766U;
	int8_t x372 = 14;
	static volatile int32_t t84 = 416;

	t84 = (x369/(x370+(x371==x372)));

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x374 = -1;
	int64_t x375 = -1LL;
	static int64_t x376 = INT64_MIN;
	static volatile int32_t t85 = -8;

	t85 = (x373/(x374+(x375==x376)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = 1;
	uint8_t x378 = UINT8_MAX;
	int8_t x380 = INT8_MIN;
	volatile int32_t t86 = 93941;

	t86 = (x377/(x378+(x379==x380)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int16_t x382 = 367;
	int16_t x384 = -2084;

	t87 = (x381/(x382+(x383==x384)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x387 = 604738542093LLU;
	static int16_t x388 = 2;
	static volatile int64_t t88 = 127418LL;

	t88 = (x385/(x386+(x387==x388)));

	if (t88 != 2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x390 = INT64_MAX;
	int32_t x391 = INT32_MAX;
	uint8_t x392 = UINT8_MAX;
	static int64_t t89 = -214975350581338LL;

	t89 = (x389/(x390+(x391==x392)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x393 = 3U;
	static volatile int64_t x394 = INT64_MIN;
	static int64_t x395 = -1LL;
	volatile int64_t t90 = -2093790105300309LL;

	t90 = (x393/(x394+(x395==x396)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x397 = INT16_MAX;
	int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	int32_t x400 = -1;
	int32_t t91 = -323;

	t91 = (x397/(x398+(x399==x400)));

	if (t91 != -258) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x401 = 36U;
	int32_t x402 = -1;
	uint16_t x403 = 0U;
	uint64_t x404 = 751298242860286LLU;
	static int32_t t92 = 1;

	t92 = (x401/(x402+(x403==x404)));

	if (t92 != -36) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x405 = UINT16_MAX;
	int64_t x406 = -5438309457LL;
	int32_t x407 = 2;
	volatile int64_t x408 = INT64_MIN;
	int64_t t93 = 901LL;

	t93 = (x405/(x406+(x407==x408)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MAX;
	static int8_t x410 = INT8_MIN;
	uint32_t x411 = UINT32_MAX;
	uint16_t x412 = 55U;
	int64_t t94 = 561765299773479744LL;

	t94 = (x409/(x410+(x411==x412)));

	if (t94 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x413 = INT16_MIN;
	int16_t x414 = -1;
	static uint8_t x415 = UINT8_MAX;
	int8_t x416 = -10;
	volatile int32_t t95 = 506;

	t95 = (x413/(x414+(x415==x416)));

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = 23;
	volatile int8_t x418 = INT8_MAX;
	int64_t x420 = INT64_MIN;
	volatile int32_t t96 = 98;

	t96 = (x417/(x418+(x419==x420)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x425 = -490722;
	static volatile int16_t x427 = 20;
	uint64_t x428 = 147909223LLU;

	t97 = (x425/(x426+(x427==x428)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x431 = -1;
	volatile int16_t x432 = INT16_MAX;
	static int32_t t98 = 465637;

	t98 = (x429/(x430+(x431==x432)));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = -1;
	int16_t x435 = 22;
	static int64_t x436 = INT64_MIN;
	volatile int32_t t99 = -51153;

	t99 = (x433/(x434+(x435==x436)));

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

