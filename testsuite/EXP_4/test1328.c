#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
static int64_t x16 = -9120367060042173LL;
uint8_t x27 = 42U;
static int64_t x33 = -1LL;
volatile int64_t t7 = 51182722LL;
int16_t x39 = -15;
int32_t x46 = INT32_MIN;
uint64_t x55 = UINT64_MAX;
int32_t x56 = INT32_MAX;
int64_t x57 = INT64_MAX;
uint64_t x58 = UINT64_MAX;
int64_t x60 = -1LL;
uint16_t x62 = UINT16_MAX;
volatile int32_t t13 = 1782246;
static int16_t x72 = -1;
int8_t x73 = INT8_MIN;
static volatile int8_t x78 = -1;
volatile uint32_t t16 = 588715958U;
static volatile int64_t t17 = INT64_MAX;
int8_t x86 = INT8_MIN;
volatile int32_t x87 = -1;
uint32_t t18 = 2460U;
int32_t x93 = 5;
volatile int32_t x98 = -1;
volatile int32_t t22 = 30551990;
int16_t x110 = INT16_MAX;
uint64_t t24 = 22277068995034LLU;
uint64_t x117 = 1072007LLU;
int16_t x118 = INT16_MAX;
uint64_t t26 = 346393399801744LLU;
static uint64_t t27 = 1035608574LLU;
uint8_t x131 = 2U;
int64_t x136 = 543777707461486560LL;
static int64_t t31 = 31LL;
static uint32_t x146 = UINT32_MAX;
volatile uint16_t x147 = UINT16_MAX;
volatile uint64_t x153 = 3312109098LLU;
volatile int16_t x158 = INT16_MIN;
int64_t x163 = -1LL;
static int32_t x164 = INT32_MIN;
static int8_t x174 = INT8_MIN;
int32_t x175 = -12;
uint32_t x179 = UINT32_MAX;
int32_t t42 = 128;
int32_t x189 = 1144826;
int8_t x192 = 1;
int32_t x196 = -3;
int64_t t44 = -1096274374937829803LL;
static int32_t x204 = INT32_MIN;
static uint16_t x209 = 4042U;
uint8_t x212 = 9U;
volatile int32_t x223 = -1;
int64_t x224 = INT64_MIN;
int64_t t50 = -26706168977917LL;
volatile uint32_t x228 = 191U;
int32_t t51 = 325772;
int64_t t52 = INT64_MAX;
int8_t x235 = INT8_MAX;
volatile int32_t x241 = -1;
volatile int64_t t57 = -98751460918LL;
int32_t x255 = INT32_MAX;
uint16_t x265 = UINT16_MAX;
static volatile uint8_t x268 = UINT8_MAX;
int32_t t61 = -5449843;
static int8_t x284 = INT8_MIN;
int16_t x285 = -1;
int32_t x292 = -4795;
int16_t x297 = -1;
int16_t x302 = -1511;
int64_t t70 = 65759270890LL;
int16_t x318 = -31;
uint64_t t72 = 27424761224LLU;
volatile int64_t x329 = -1LL;
uint64_t x332 = UINT64_MAX;
volatile int8_t x336 = INT8_MAX;
int16_t x339 = INT16_MAX;
volatile int16_t x349 = INT16_MAX;
static int32_t x352 = 729498154;
int64_t t79 = -115731162LL;
volatile uint16_t x365 = 1135U;
int32_t x370 = -1;
volatile uint32_t t82 = 41U;
static int16_t x375 = 137;
uint16_t x376 = UINT16_MAX;
int64_t x383 = INT64_MAX;
volatile int32_t t84 = 8230795;
uint64_t x386 = UINT64_MAX;
int8_t x388 = 42;
int8_t x390 = -15;
int32_t x398 = INT32_MIN;
volatile int32_t t88 = -4028946;
uint64_t x401 = 14704LLU;
static volatile int32_t x402 = 1;
int16_t x405 = INT16_MIN;
int16_t x406 = INT16_MAX;
volatile int32_t t90 = 16672364;
uint8_t x411 = 3U;
static int16_t x414 = 0;
uint8_t x417 = UINT8_MAX;
uint64_t x419 = UINT64_MAX;
uint32_t x421 = 1025841633U;
int64_t x422 = -40631901989553LL;
volatile int8_t x423 = INT8_MIN;
volatile int64_t t94 = -1993969869513LL;
int16_t x434 = -43;
static volatile int16_t x445 = INT16_MIN;


void f0(void) {
	int32_t x1 = -1;
	static uint64_t x2 = UINT64_MAX;
	uint8_t x3 = UINT8_MAX;
	uint64_t t0 = 43777LLU;

	t0 = (x1-(x2|(x3==x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 5U;
	static volatile int64_t x6 = -303106167270LL;
	static int64_t x7 = -12LL;
	int8_t x8 = -1;
	int64_t t1 = -9649451644401LL;

	t1 = (x5-(x6|(x7==x8)));

	if (t1 != 303106167275LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 73;
	volatile uint8_t x10 = UINT8_MAX;
	volatile int16_t x11 = -14;
	uint16_t x12 = 8U;
	volatile int32_t t2 = 1609;

	t2 = (x9-(x10|(x11==x12)));

	if (t2 != -182) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 61U;
	int64_t x14 = -1LL;
	int16_t x15 = -1;
	volatile int64_t t3 = -94888918440LL;

	t3 = (x13-(x14|(x15==x16)));

	if (t3 != 62LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x21 = UINT8_MAX;
	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = -5;
	int64_t x24 = 466LL;
	int32_t t4 = 0;

	t4 = (x21-(x22|(x23==x24)));

	if (t4 != 33023) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x25 = 2352746U;
	int8_t x26 = INT8_MIN;
	int64_t x28 = -16015973900868LL;
	uint32_t t5 = 10689355U;

	t5 = (x25-(x26|(x27==x28)));

	if (t5 != 2352874U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 31LLU;
	int8_t x30 = -1;
	int8_t x31 = -11;
	int32_t x32 = -12162064;
	static uint64_t t6 = 3104439075352373LLU;

	t6 = (x29-(x30|(x31==x32)));

	if (t6 != 32LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	static uint64_t x35 = 422LLU;
	int16_t x36 = 10;

	t7 = (x33-(x34|(x35==x36)));

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	int8_t x38 = -1;
	volatile int32_t x40 = -73872901;
	int32_t t8 = -1;

	t8 = (x37-(x38|(x39==x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x41 = INT32_MAX;
	uint8_t x42 = 1U;
	int32_t x43 = -5376;
	static int64_t x44 = INT64_MIN;
	volatile int32_t t9 = -191358;

	t9 = (x41-(x42|(x43==x44)));

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	volatile int64_t x47 = 60564648379263167LL;
	int64_t x48 = 183LL;
	int32_t t10 = 12;

	t10 = (x45-(x46|(x47==x48)));

	if (t10 != 2147450880) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MIN;
	volatile uint32_t t11 = 13531U;

	t11 = (x53-(x54|(x55==x56)));

	if (t11 != 127U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x59 = 3;
	volatile uint64_t t12 = 11099186136187961LLU;

	t12 = (x57-(x58|(x59==x60)));

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	static volatile int8_t x63 = INT8_MIN;
	uint16_t x64 = 82U;

	t13 = (x61-(x62|(x63==x64)));

	if (t13 != -98303) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int8_t x70 = 2;
	static volatile uint16_t x71 = 0U;
	uint32_t t14 = 1722638U;

	t14 = (x69-(x70|(x71==x72)));

	if (t14 != 4294967293U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MAX;
	static int32_t x76 = INT32_MIN;
	volatile int64_t t15 = 1726645LL;

	t15 = (x73-(x74|(x75==x76)));

	if (t15 != -127LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 506969U;
	uint64_t x79 = UINT64_MAX;
	int16_t x80 = INT16_MIN;

	t16 = (x77-(x78|(x79==x80)));

	if (t16 != 506970U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	int64_t x82 = INT64_MIN;
	volatile uint8_t x83 = 1U;
	static int16_t x84 = -1;

	t17 = (x81-(x82|(x83==x84)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	static int32_t x88 = 8;

	t18 = (x85-(x86|(x87==x88)));

	if (t18 != 127U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = -407269977906963LL;
	int8_t x90 = INT8_MIN;
	int64_t x91 = -174047773LL;
	int8_t x92 = -28;
	volatile int64_t t19 = -144600845279LL;

	t19 = (x89-(x90|(x91==x92)));

	if (t19 != -407269977906835LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x94 = 470048863U;
	volatile uint16_t x95 = 1U;
	int64_t x96 = -1LL;
	uint32_t t20 = 161088U;

	t20 = (x93-(x94|(x95==x96)));

	if (t20 != 3824918438U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = INT16_MIN;
	uint16_t x99 = UINT16_MAX;
	int64_t x100 = INT64_MIN;
	int32_t t21 = 2749;

	t21 = (x97-(x98|(x99==x100)));

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	volatile int8_t x102 = -1;
	uint32_t x103 = 28103U;
	static int32_t x104 = INT32_MAX;

	t22 = (x101-(x102|(x103==x104)));

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x105 = 109264LLU;
	static volatile int64_t x106 = INT64_MIN;
	uint64_t x107 = 13370LLU;
	static int64_t x108 = INT64_MIN;
	volatile uint64_t t23 = 165849321470622718LLU;

	t23 = (x105-(x106|(x107==x108)));

	if (t23 != 9223372036854885072LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x109 = 1952631067105174LLU;
	static uint8_t x111 = UINT8_MAX;
	uint64_t x112 = 65023682520707LLU;

	t24 = (x109-(x110|(x111==x112)));

	if (t24 != 1952631067072407LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = -16;
	int8_t x115 = 0;
	volatile int64_t x116 = -1977700LL;
	volatile int32_t t25 = 474409;

	t25 = (x113-(x114|(x115==x116)));

	if (t25 != 65551) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x119 = -1;
	volatile uint16_t x120 = UINT16_MAX;

	t26 = (x117-(x118|(x119==x120)));

	if (t26 != 1039240LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MIN;
	uint32_t x127 = UINT32_MAX;
	uint64_t x128 = 65886589LLU;

	t27 = (x125-(x126|(x127==x128)));

	if (t27 != 32767LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x129 = 1297464001292767143LLU;
	int16_t x130 = INT16_MIN;
	int64_t x132 = 744755519LL;
	uint64_t t28 = 1513LLU;

	t28 = (x129-(x130|(x131==x132)));

	if (t28 != 1297464001292799911LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 173U;
	uint16_t x134 = 15U;
	int32_t x135 = INT32_MIN;
	static int32_t t29 = -1;

	t29 = (x133-(x134|(x135==x136)));

	if (t29 != 158) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = INT16_MIN;
	static uint32_t x138 = 0U;
	volatile uint16_t x139 = UINT16_MAX;
	int64_t x140 = INT64_MIN;
	uint32_t t30 = 96781U;

	t30 = (x137-(x138|(x139==x140)));

	if (t30 != 4294934528U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = 4887U;
	int64_t x142 = -1LL;
	static uint32_t x143 = 99U;
	int8_t x144 = INT8_MAX;

	t31 = (x141-(x142|(x143==x144)));

	if (t31 != 4888LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int32_t x148 = INT32_MIN;
	uint32_t t32 = 244946U;

	t32 = (x145-(x146|(x147==x148)));

	if (t32 != 256U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = UINT32_MAX;
	uint32_t x150 = 53908U;
	static uint8_t x151 = 113U;
	uint16_t x152 = 1482U;
	volatile uint32_t t33 = 10540U;

	t33 = (x149-(x150|(x151==x152)));

	if (t33 != 4294913387U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x154 = -2;
	int64_t x155 = INT64_MAX;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t34 = 14207058LLU;

	t34 = (x153-(x154|(x155==x156)));

	if (t34 != 3312109100LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	static int32_t x159 = INT32_MIN;
	int64_t x160 = -109898444956770LL;
	volatile int32_t t35 = 77;

	t35 = (x157-(x158|(x159==x160)));

	if (t35 != 32640) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x161 = 480053853001052737LLU;
	int32_t x162 = INT32_MIN;
	uint64_t t36 = 15946568653587LLU;

	t36 = (x161-(x162|(x163==x164)));

	if (t36 != 480053855148536385LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x165 = 5988U;
	uint8_t x166 = UINT8_MAX;
	uint64_t x167 = UINT64_MAX;
	static int16_t x168 = INT16_MAX;
	volatile uint32_t t37 = 7380U;

	t37 = (x165-(x166|(x167==x168)));

	if (t37 != 5733U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x169 = 5195U;
	int32_t x170 = -1;
	int8_t x171 = -1;
	static uint8_t x172 = 2U;
	uint32_t t38 = 194U;

	t38 = (x169-(x170|(x171==x172)));

	if (t38 != 5196U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = INT32_MIN;
	uint16_t x176 = 674U;
	volatile int32_t t39 = -182791;

	t39 = (x173-(x174|(x175==x176)));

	if (t39 != -2147483520) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -294;
	int64_t x178 = INT64_MIN;
	int32_t x180 = -6365224;
	int64_t t40 = -193110866LL;

	t40 = (x177-(x178|(x179==x180)));

	if (t40 != 9223372036854775514LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = UINT32_MAX;
	volatile uint32_t x182 = 462029770U;
	static uint8_t x183 = 21U;
	int8_t x184 = INT8_MAX;
	volatile uint32_t t41 = 995776U;

	t41 = (x181-(x182|(x183==x184)));

	if (t41 != 3832937525U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -3;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = UINT16_MAX;
	static uint16_t x188 = UINT16_MAX;

	t42 = (x185-(x186|(x187==x188)));

	if (t42 != 32764) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x190 = INT8_MIN;
	int8_t x191 = -1;
	static volatile int32_t t43 = 1;

	t43 = (x189-(x190|(x191==x192)));

	if (t43 != 1144954) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;

	t44 = (x193-(x194|(x195==x196)));

	if (t44 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x197 = 790040371LL;
	int64_t x198 = -1LL;
	int8_t x199 = INT8_MIN;
	int16_t x200 = -1730;
	int64_t t45 = 33825LL;

	t45 = (x197-(x198|(x199==x200)));

	if (t45 != 790040372LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = 1LL;
	uint8_t x202 = UINT8_MAX;
	uint32_t x203 = UINT32_MAX;
	int64_t t46 = -49331478LL;

	t46 = (x201-(x202|(x203==x204)));

	if (t46 != -254LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = UINT16_MAX;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t47 = 0;

	t47 = (x205-(x206|(x207==x208)));

	if (t47 != 65662) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x210 = INT8_MIN;
	int32_t x211 = 3237;
	static int32_t t48 = 331584422;

	t48 = (x209-(x210|(x211==x212)));

	if (t48 != 4170) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x217 = 4897U;
	volatile uint32_t x218 = 8U;
	volatile int64_t x219 = INT64_MAX;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t49 = 702772U;

	t49 = (x217-(x218|(x219==x220)));

	if (t49 != 4889U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = -51511LL;
	int8_t x222 = -1;

	t50 = (x221-(x222|(x223==x224)));

	if (t50 != -51510LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = UINT8_MAX;
	uint64_t x227 = UINT64_MAX;

	t51 = (x225-(x226|(x227==x228)));

	if (t51 != -33023) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = 0;
	volatile int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	volatile int32_t x232 = INT32_MIN;

	t52 = (x229-(x230|(x231==x232)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = 49672478;
	uint8_t x234 = UINT8_MAX;
	uint64_t x236 = 3672896949421512252LLU;
	volatile int32_t t53 = -14973;

	t53 = (x233-(x234|(x235==x236)));

	if (t53 != 49672223) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -597738720LL;
	uint32_t x238 = 1086U;
	int64_t x239 = INT64_MIN;
	static int8_t x240 = 4;
	volatile int64_t t54 = 1LL;

	t54 = (x237-(x238|(x239==x240)));

	if (t54 != -597739806LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x242 = INT64_MAX;
	int32_t x243 = -1;
	int32_t x244 = 3944;
	volatile int64_t t55 = INT64_MIN;

	t55 = (x241-(x242|(x243==x244)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	volatile uint16_t x246 = 29364U;
	volatile uint16_t x247 = 11U;
	uint64_t x248 = 3045LLU;
	static int32_t t56 = 56549;

	t56 = (x245-(x246|(x247==x248)));

	if (t56 != -62132) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -6LL;
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = 769745711022LL;
	int64_t x252 = 7747745LL;

	t57 = (x249-(x250|(x251==x252)));

	if (t57 != -65541LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = UINT32_MAX;
	int16_t x254 = -1;
	static int16_t x256 = INT16_MIN;
	uint32_t t58 = 17672U;

	t58 = (x253-(x254|(x255==x256)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = 92;
	static uint32_t x262 = 601928U;
	volatile int16_t x263 = INT16_MIN;
	uint8_t x264 = UINT8_MAX;
	static volatile uint32_t t59 = 289330513U;

	t59 = (x261-(x262|(x263==x264)));

	if (t59 != 4294365460U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x266 = 7U;
	volatile uint64_t x267 = UINT64_MAX;
	volatile int32_t t60 = -2899561;

	t60 = (x265-(x266|(x267==x268)));

	if (t60 != 65528) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x269 = UINT8_MAX;
	int8_t x270 = INT8_MIN;
	uint8_t x271 = 0U;
	int64_t x272 = -490LL;

	t61 = (x269-(x270|(x271==x272)));

	if (t61 != 383) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x274 = INT8_MAX;
	static volatile uint16_t x275 = 1U;
	volatile int64_t x276 = -30075113312346347LL;
	uint64_t t62 = 1169921090530154299LLU;

	t62 = (x273-(x274|(x275==x276)));

	if (t62 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = -1LL;
	int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MAX;
	volatile int64_t t63 = 179898809880353LL;

	t63 = (x277-(x278|(x279==x280)));

	if (t63 != -32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x281 = INT32_MIN;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = 4;
	uint32_t t64 = 45402U;

	t64 = (x281-(x282|(x283==x284)));

	if (t64 != 2147483649U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x286 = 1U;
	volatile int8_t x287 = INT8_MIN;
	static int8_t x288 = INT8_MAX;
	static volatile int32_t t65 = -12883;

	t65 = (x285-(x286|(x287==x288)));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = UINT16_MAX;
	uint64_t x290 = 259LLU;
	int8_t x291 = INT8_MIN;
	uint64_t t66 = 37032621562LLU;

	t66 = (x289-(x290|(x291==x292)));

	if (t66 != 65276LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = 202;
	int8_t x294 = 1;
	static int8_t x295 = -8;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int32_t t67 = -939;

	t67 = (x293-(x294|(x295==x296)));

	if (t67 != 201) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x298 = INT64_MIN;
	static int64_t x299 = INT64_MIN;
	static int16_t x300 = INT16_MIN;
	volatile int64_t t68 = INT64_MAX;

	t68 = (x297-(x298|(x299==x300)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = -1;
	volatile uint8_t x303 = UINT8_MAX;
	volatile int8_t x304 = -1;
	volatile int32_t t69 = -25612334;

	t69 = (x301-(x302|(x303==x304)));

	if (t69 != 1510) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x313 = 16U;
	static volatile int64_t x314 = 7271842LL;
	volatile uint64_t x315 = 1297LLU;
	uint64_t x316 = 6138062708694LLU;

	t70 = (x313-(x314|(x315==x316)));

	if (t70 != -7271826LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x317 = UINT8_MAX;
	static int32_t x319 = 20;
	int64_t x320 = INT64_MIN;
	volatile int32_t t71 = 5620;

	t71 = (x317-(x318|(x319==x320)));

	if (t71 != 286) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = 1LL;
	uint64_t x326 = UINT64_MAX;
	uint32_t x327 = 4704U;
	static uint32_t x328 = UINT32_MAX;

	t72 = (x325-(x326|(x327==x328)));

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x330 = 2380;
	int8_t x331 = INT8_MAX;
	volatile int64_t t73 = -1LL;

	t73 = (x329-(x330|(x331==x332)));

	if (t73 != -2381LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x333 = INT8_MIN;
	int8_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int32_t t74 = -3;

	t74 = (x333-(x334|(x335==x336)));

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = INT16_MIN;
	volatile uint16_t x338 = 366U;
	int64_t x340 = 47LL;
	static int32_t t75 = -1;

	t75 = (x337-(x338|(x339==x340)));

	if (t75 != -33134) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = -14;
	int16_t x346 = -1;
	int64_t x347 = -1LL;
	volatile int8_t x348 = -1;
	int32_t t76 = -95227378;

	t76 = (x345-(x346|(x347==x348)));

	if (t76 != -13) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x350 = INT32_MAX;
	int64_t x351 = INT64_MIN;
	int32_t t77 = -11;

	t77 = (x349-(x350|(x351==x352)));

	if (t77 != -2147450880) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = -706;
	volatile int8_t x354 = -9;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = INT8_MAX;
	volatile int32_t t78 = -3;

	t78 = (x353-(x354|(x355==x356)));

	if (t78 != -697) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = -9;
	uint64_t x359 = 516911965LLU;
	uint16_t x360 = 511U;

	t79 = (x357-(x358|(x359==x360)));

	if (t79 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = 885329178121LL;
	static uint8_t x362 = UINT8_MAX;
	int32_t x363 = 815288;
	volatile int64_t x364 = -1LL;
	static int64_t t80 = -3762666079041LL;

	t80 = (x361-(x362|(x363==x364)));

	if (t80 != 885329177866LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x366 = INT8_MAX;
	uint32_t x367 = 110028U;
	uint16_t x368 = 2U;
	static int32_t t81 = -110633738;

	t81 = (x365-(x366|(x367==x368)));

	if (t81 != 1008) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x369 = UINT32_MAX;
	uint32_t x371 = 8223792U;
	static uint64_t x372 = UINT64_MAX;

	t82 = (x369-(x370|(x371==x372)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x373 = 1256475882848336LLU;
	int8_t x374 = -1;
	uint64_t t83 = 33368435726LLU;

	t83 = (x373-(x374|(x375==x376)));

	if (t83 != 1256475882848337LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x381 = 607U;
	uint8_t x382 = UINT8_MAX;
	uint16_t x384 = UINT16_MAX;

	t84 = (x381-(x382|(x383==x384)));

	if (t84 != 352) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x385 = 5563;
	static int16_t x387 = 137;
	uint64_t t85 = 984540592423LLU;

	t85 = (x385-(x386|(x387==x388)));

	if (t85 != 5564LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = INT8_MIN;
	volatile uint16_t x391 = 9U;
	int16_t x392 = INT16_MIN;
	int32_t t86 = -947;

	t86 = (x389-(x390|(x391==x392)));

	if (t86 != -113) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = 69056;
	int64_t x394 = -790LL;
	volatile uint8_t x395 = 1U;
	int64_t x396 = -1LL;
	int64_t t87 = 0LL;

	t87 = (x393-(x394|(x395==x396)));

	if (t87 != 69846LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = -52098347;
	int16_t x399 = -1;
	volatile uint8_t x400 = UINT8_MAX;

	t88 = (x397-(x398|(x399==x400)));

	if (t88 != 2095385301) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x403 = -1;
	static uint16_t x404 = 0U;
	uint64_t t89 = 1217021LLU;

	t89 = (x401-(x402|(x403==x404)));

	if (t89 != 14703LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MAX;

	t90 = (x405-(x406|(x407==x408)));

	if (t90 != -65535) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x409 = INT16_MIN;
	volatile int16_t x410 = INT16_MAX;
	int64_t x412 = INT64_MAX;
	int32_t t91 = -15582;

	t91 = (x409-(x410|(x411==x412)));

	if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x413 = INT64_MIN;
	volatile int32_t x415 = INT32_MIN;
	int32_t x416 = 1;
	volatile int64_t t92 = INT64_MIN;

	t92 = (x413-(x414|(x415==x416)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x418 = 1255306102717597LL;
	int16_t x420 = INT16_MAX;
	volatile int64_t t93 = 3692LL;

	t93 = (x417-(x418|(x419==x420)));

	if (t93 != -1255306102717342LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x424 = INT64_MAX;

	t94 = (x421-(x422|(x423==x424)));

	if (t94 != 40632927831186LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = UINT64_MAX;
	volatile int16_t x430 = INT16_MIN;
	static int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MIN;
	uint64_t t95 = 1117736381512LLU;

	t95 = (x429-(x430|(x431==x432)));

	if (t95 != 32767LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x433 = 1U;
	static uint32_t x435 = 1916368U;
	int16_t x436 = -1;
	volatile int32_t t96 = -4;

	t96 = (x433-(x434|(x435==x436)));

	if (t96 != 44) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x437 = UINT8_MAX;
	int32_t x438 = 283;
	volatile int64_t x439 = -5034358900043803LL;
	volatile int32_t x440 = -1;
	volatile int32_t t97 = -1419;

	t97 = (x437-(x438|(x439==x440)));

	if (t97 != -28) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x441 = INT16_MAX;
	volatile uint8_t x442 = UINT8_MAX;
	int8_t x443 = INT8_MIN;
	int32_t x444 = -3;
	int32_t t98 = 261874;

	t98 = (x441-(x442|(x443==x444)));

	if (t98 != 32512) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x446 = 4U;
	volatile int64_t x447 = INT64_MIN;
	int16_t x448 = -1;
	volatile int32_t t99 = 23;

	t99 = (x445-(x446|(x447==x448)));

	if (t99 != -32772) { NG(); } else { ; }
	
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

