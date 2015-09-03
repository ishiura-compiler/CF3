#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 791U;
uint8_t x3 = UINT8_MAX;
uint64_t x12 = 59631430473581LLU;
uint64_t x13 = 7130LLU;
static volatile uint64_t t2 = UINT64_MAX;
int8_t x20 = -1;
int64_t x21 = INT64_MAX;
volatile int64_t x23 = -30057948LL;
int32_t x31 = 1;
uint32_t x32 = 9U;
int64_t x34 = INT64_MIN;
volatile int32_t x35 = 1;
uint64_t t8 = UINT64_MAX;
volatile int32_t x44 = INT32_MIN;
uint8_t x50 = UINT8_MAX;
int32_t x53 = INT32_MIN;
static uint64_t x55 = 50575250LLU;
int32_t x58 = INT32_MAX;
static int16_t x71 = INT16_MIN;
static uint64_t t16 = 421482177062710053LLU;
int64_t x73 = INT64_MAX;
int64_t x75 = 766895LL;
uint64_t x83 = 2LLU;
int8_t x87 = -1;
volatile uint64_t t21 = 6665014831LLU;
volatile uint8_t x93 = 1U;
static volatile uint64_t x103 = 2216LLU;
int8_t x112 = -34;
volatile int32_t x114 = INT32_MIN;
int32_t t28 = 861312369;
uint16_t x137 = 6415U;
int8_t x138 = -7;
volatile int64_t t32 = -227180389718LL;
volatile int64_t t33 = -65934004LL;
static int32_t x155 = INT32_MAX;
volatile int8_t x159 = 24;
int64_t x163 = INT64_MIN;
volatile int64_t x164 = -1LL;
volatile int16_t x185 = INT16_MAX;
int64_t x190 = -711LL;
static int64_t x195 = INT64_MIN;
uint64_t t46 = 14418LLU;
int32_t x209 = INT32_MAX;
uint32_t x214 = 99916U;
volatile uint32_t t48 = 20155776U;
int32_t x220 = -1;
static uint64_t t49 = UINT64_MAX;
int32_t x222 = 57185;
static uint64_t x223 = 1469050LLU;
static uint8_t x225 = 0U;
volatile uint64_t x230 = UINT64_MAX;
uint64_t x240 = UINT64_MAX;
static uint32_t t54 = 34940520U;
int8_t x249 = INT8_MIN;
int16_t x251 = 25;
int64_t x255 = INT64_MIN;
static volatile int16_t x265 = 6;
static volatile int16_t x279 = -86;
volatile uint32_t t62 = UINT32_MAX;
int64_t x283 = 9381778986LL;
volatile uint8_t x285 = UINT8_MAX;
int16_t x288 = INT16_MIN;
uint64_t x290 = 1108320014824924LLU;
static uint8_t x295 = UINT8_MAX;
uint64_t x296 = 9181173690941LLU;
int32_t x305 = 75;
static int16_t x308 = -1;
volatile uint32_t x309 = UINT32_MAX;
int8_t x310 = INT8_MIN;
static uint64_t x315 = UINT64_MAX;
int64_t t72 = -50778755287338387LL;
int32_t x323 = INT32_MIN;
volatile int16_t x327 = INT16_MIN;
static int16_t x328 = INT16_MIN;
static int32_t t74 = -51288188;
volatile uint16_t x334 = 702U;
volatile int32_t t78 = -205981043;
int16_t x346 = -1;
int16_t x349 = -1;
int16_t x351 = INT16_MIN;
volatile uint64_t t80 = UINT64_MAX;
int32_t x354 = -6256864;
int16_t x359 = -8;
volatile uint8_t x360 = UINT8_MAX;
volatile int64_t t83 = INT64_MAX;
uint8_t x369 = 15U;
uint16_t x379 = 12U;
int8_t x387 = 7;
static volatile uint64_t t87 = UINT64_MAX;
int32_t x389 = INT32_MAX;
static uint32_t t88 = 1596384U;
volatile uint8_t x395 = 94U;
uint64_t x405 = 502869787LLU;
uint64_t t93 = 2285604LLU;
int32_t t94 = -68;
int32_t x419 = INT32_MAX;
volatile int64_t t95 = -1343939522776045LL;
int16_t x424 = INT16_MIN;
uint8_t x431 = 3U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -7772733;

	t0 = (x1|(x2|(x3-x4)));

	if (t0 != 1023) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 7778791U;
	volatile uint64_t x10 = 517047LLU;
	int64_t x11 = INT64_MAX;
	uint64_t t1 = 19LLU;

	t1 = (x9|(x10|(x11-x12)));

	if (t1 != 9223312405427649527LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	volatile int64_t x15 = -1LL;
	uint32_t x16 = 724U;

	t2 = (x13|(x14|(x15-x16)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = UINT32_MAX;
	int8_t x18 = -1;
	static int8_t x19 = 7;
	uint32_t t3 = UINT32_MAX;

	t3 = (x17|(x18|(x19-x20)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = INT16_MIN;
	int8_t x24 = INT8_MIN;
	int64_t t4 = -208355591LL;

	t4 = (x21|(x22|(x23-x24)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 1239225;
	int16_t x26 = 6;
	uint8_t x27 = 52U;
	int16_t x28 = -1;
	volatile int32_t t5 = 5373441;

	t5 = (x25|(x26|(x27-x28)));

	if (t5 != 1239231) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	int8_t x30 = INT8_MIN;
	int64_t t6 = INT64_MAX;

	t6 = (x29|(x30|(x31-x32)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 0U;
	int64_t x36 = -140LL;
	int64_t t7 = 57650665764334739LL;

	t7 = (x33|(x34|(x35-x36)));

	if (t7 != -9223372036854775667LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x38 = UINT32_MAX;
	volatile int8_t x39 = -1;
	uint64_t x40 = 74424131LLU;

	t8 = (x37|(x38|(x39-x40)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	volatile uint8_t x42 = 3U;
	uint64_t x43 = 232LLU;
	volatile uint64_t t9 = 1141LLU;

	t9 = (x41|(x42|(x43-x44)));

	if (t9 != 18446744071562068203LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = UINT16_MAX;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = 27539813LL;
	static uint16_t x48 = 27U;
	uint64_t t10 = UINT64_MAX;

	t10 = (x45|(x46|(x47-x48)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -3;
	int16_t x51 = 25;
	uint16_t x52 = 0U;
	volatile int32_t t11 = 48902;

	t11 = (x49|(x50|(x51-x52)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -30810;
	int32_t x56 = INT32_MIN;
	static volatile uint64_t t12 = 72041002453608LLU;

	t12 = (x53|(x54|(x55-x56)));

	if (t12 != 18446744073709533110LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MIN;
	volatile uint16_t x59 = 3U;
	volatile uint64_t x60 = 245095183407233LLU;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x57|(x58|(x59-x60)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	volatile uint8_t x62 = 46U;
	uint8_t x63 = 12U;
	static int16_t x64 = -5547;
	volatile int32_t t14 = 6;

	t14 = (x61|(x62|(x63-x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x65 = 535558322663027LLU;
	uint16_t x66 = 87U;
	static volatile int64_t x67 = -151061515120280799LL;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t15 = 185728214523LLU;

	t15 = (x65|(x66|(x67-x68)));

	if (t15 != 18295863996321267575LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	static int64_t x70 = INT64_MIN;
	static volatile uint64_t x72 = UINT64_MAX;

	t16 = (x69|(x70|(x71-x72)));

	if (t16 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = 127;
	int8_t x76 = -2;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x73|(x74|(x75-x76)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	volatile int32_t x78 = INT32_MIN;
	int32_t x79 = 5816190;
	int32_t x80 = -1;
	static volatile int32_t t18 = -139;

	t18 = (x77|(x78|(x79-x80)));

	if (t18 != -2141667457) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 54848;
	static int16_t x82 = INT16_MAX;
	int16_t x84 = -1;
	volatile uint64_t t19 = 197054084LLU;

	t19 = (x81|(x82|(x83-x84)));

	if (t19 != 65535LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	uint8_t x86 = 107U;
	int32_t x88 = -1;
	uint32_t t20 = UINT32_MAX;

	t20 = (x85|(x86|(x87-x88)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 1U;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = 2LLU;
	static uint32_t x92 = UINT32_MAX;

	t21 = (x89|(x90|(x91-x92)));

	if (t21 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x94 = -596LL;
	int8_t x95 = 0;
	uint32_t x96 = 1049407794U;
	int64_t t22 = -553291948641834593LL;

	t22 = (x93|(x94|(x95-x96)));

	if (t22 != -17LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 7775;
	static uint32_t x98 = 328163U;
	static volatile int8_t x99 = INT8_MIN;
	int8_t x100 = -1;
	uint32_t t23 = UINT32_MAX;

	t23 = (x97|(x98|(x99-x100)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = INT8_MAX;
	volatile uint32_t x102 = 1U;
	volatile int64_t x104 = INT64_MAX;
	uint64_t t24 = 272928218573LLU;

	t24 = (x101|(x102|(x103-x104)));

	if (t24 != 9223372036854778111LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = -1;
	uint8_t x106 = 12U;
	static uint64_t x107 = 4265061105158LLU;
	int64_t x108 = INT64_MAX;
	static uint64_t t25 = UINT64_MAX;

	t25 = (x105|(x106|(x107-x108)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -71736;
	int32_t x110 = INT32_MIN;
	static int64_t x111 = -1LL;
	volatile int64_t t26 = 24095359722729LL;

	t26 = (x109|(x110|(x111-x112)));

	if (t26 != -71703LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = -1;
	volatile int8_t x115 = -3;
	volatile int16_t x116 = -3;
	int32_t t27 = 6195;

	t27 = (x113|(x114|(x115-x116)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x121 = 30688U;
	int16_t x122 = INT16_MAX;
	int16_t x123 = -51;
	volatile uint16_t x124 = 8U;

	t28 = (x121|(x122|(x123-x124)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 69095633269438394LLU;
	static uint64_t x126 = 367838LLU;
	int32_t x127 = INT32_MIN;
	static uint64_t x128 = UINT64_MAX;
	volatile uint64_t t29 = 2LLU;

	t29 = (x125|(x126|(x127-x128)));

	if (t29 != 18446744072712339455LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = 9;
	int16_t x130 = INT16_MIN;
	static uint8_t x131 = 21U;
	static uint32_t x132 = UINT32_MAX;
	uint32_t t30 = 493096U;

	t30 = (x129|(x130|(x131-x132)));

	if (t30 != 4294934559U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 345655U;
	static int8_t x134 = 18;
	int64_t x135 = 36578054873609LL;
	uint8_t x136 = UINT8_MAX;
	volatile int64_t t31 = 15193921994118060LL;

	t31 = (x133|(x134|(x135-x136)));

	if (t31 != 36578054891327LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x139 = 254696367575LL;
	static volatile int8_t x140 = INT8_MIN;

	t32 = (x137|(x138|(x139-x140)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	volatile int64_t x146 = INT64_MIN;
	int64_t x147 = -1LL;
	static volatile uint16_t x148 = 329U;

	t33 = (x145|(x146|(x147-x148)));

	if (t33 != -330LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x150 = 21U;
	uint64_t x151 = UINT64_MAX;
	volatile int64_t x152 = 30580882255989LL;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x149|(x150|(x151-x152)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 104U;
	volatile uint64_t x154 = 608LLU;
	volatile int32_t x156 = INT32_MAX;
	volatile uint64_t t35 = 14974320LLU;

	t35 = (x153|(x154|(x155-x156)));

	if (t35 != 616LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = 699;
	int16_t x160 = INT16_MIN;
	int32_t t36 = 3138673;

	t36 = (x157|(x158|(x159-x160)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = 214LL;
	int16_t x162 = -1;
	volatile int64_t t37 = -151707LL;

	t37 = (x161|(x162|(x163-x164)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 304U;
	uint16_t x166 = 12540U;
	static int16_t x167 = -91;
	int8_t x168 = -1;
	static volatile int32_t t38 = -230514981;

	t38 = (x165|(x166|(x167-x168)));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -1;
	int64_t x174 = INT64_MIN;
	int32_t x175 = 19;
	volatile uint16_t x176 = 30806U;
	int64_t t39 = 3842013LL;

	t39 = (x173|(x174|(x175-x176)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x177 = -257218592722LL;
	int8_t x178 = INT8_MAX;
	static int8_t x179 = INT8_MIN;
	volatile uint16_t x180 = 17512U;
	volatile int64_t t40 = -271813089720863963LL;

	t40 = (x177|(x178|(x179-x180)));

	if (t40 != -1153LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -1;
	static uint32_t x182 = 0U;
	int32_t x183 = -1;
	int64_t x184 = INT64_MIN;
	volatile int64_t t41 = 21085LL;

	t41 = (x181|(x182|(x183-x184)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x186 = -1;
	int8_t x187 = INT8_MAX;
	volatile uint8_t x188 = UINT8_MAX;
	static volatile int32_t t42 = 28408;

	t42 = (x185|(x186|(x187-x188)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = 116690609;
	uint8_t x191 = 23U;
	uint64_t x192 = 117866LLU;
	volatile uint64_t t43 = 3118LLU;

	t43 = (x189|(x190|(x191-x192)));

	if (t43 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = -1;
	static int8_t x194 = 17;
	volatile int64_t x196 = INT64_MIN;
	volatile int64_t t44 = -18093050LL;

	t44 = (x193|(x194|(x195-x196)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -1;
	int32_t x202 = -85720;
	int64_t x203 = 2LL;
	uint8_t x204 = 1U;
	int64_t t45 = -7LL;

	t45 = (x201|(x202|(x203-x204)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = 1U;
	int8_t x206 = 26;
	static volatile int16_t x207 = -5;
	volatile uint64_t x208 = 1722LLU;

	t46 = (x205|(x206|(x207-x208)));

	if (t46 != 18446744073709549915LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x210 = 43;
	static int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t47 = 376;

	t47 = (x209|(x210|(x211-x212)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x213 = INT16_MIN;
	int8_t x215 = -3;
	uint32_t x216 = 2909U;

	t48 = (x213|(x214|(x215-x216)));

	if (t48 != 4294964972U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 384938775LLU;
	uint32_t x219 = 6694U;

	t49 = (x217|(x218|(x219-x220)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = -33;
	static uint16_t x224 = 343U;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x221|(x222|(x223-x224)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x226 = 31U;
	static int16_t x227 = -3;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x225|(x226|(x227-x228)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	static int16_t x231 = -3;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x229|(x230|(x231-x232)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = 634194U;
	uint8_t x238 = 15U;
	int8_t x239 = 7;
	static uint64_t t53 = 1331956148454758392LLU;

	t53 = (x237|(x238|(x239-x240)));

	if (t53 != 634207LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	uint32_t x247 = 2U;
	uint8_t x248 = 5U;

	t54 = (x245|(x246|(x247-x248)));

	if (t54 != 4294967293U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x250 = -44;
	uint32_t x252 = 46501U;
	volatile uint32_t t55 = 1201362801U;

	t55 = (x249|(x250|(x251-x252)));

	if (t55 != 4294967284U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = -1;
	static uint64_t x254 = 7827307586LLU;
	static uint64_t x256 = 224LLU;
	uint64_t t56 = UINT64_MAX;

	t56 = (x253|(x254|(x255-x256)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x257 = 0;
	volatile uint16_t x258 = UINT16_MAX;
	int8_t x259 = -1;
	int8_t x260 = INT8_MIN;
	static int32_t t57 = 12531839;

	t57 = (x257|(x258|(x259-x260)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x261 = 1LLU;
	int16_t x262 = 1475;
	int64_t x263 = -145LL;
	int8_t x264 = -8;
	static uint64_t t58 = 4333263LLU;

	t58 = (x261|(x262|(x263-x264)));

	if (t58 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x266 = INT32_MIN;
	int8_t x267 = -1;
	int32_t x268 = 17;
	int32_t t59 = 123103;

	t59 = (x265|(x266|(x267-x268)));

	if (t59 != -18) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x269 = 1U;
	int64_t x270 = INT64_MIN;
	volatile uint8_t x271 = UINT8_MAX;
	uint16_t x272 = UINT16_MAX;
	volatile int64_t t60 = -3405966685549LL;

	t60 = (x269|(x270|(x271-x272)));

	if (t60 != -65279LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = -324504;
	volatile uint16_t x274 = UINT16_MAX;
	int32_t x275 = 0;
	static int64_t x276 = INT64_MAX;
	int64_t t61 = 874408LL;

	t61 = (x273|(x274|(x275-x276)));

	if (t61 != -262145LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = 5296U;
	uint32_t x278 = UINT32_MAX;
	static volatile int16_t x280 = 2011;

	t62 = (x277|(x278|(x279-x280)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = -1;
	uint64_t x282 = 2931824024LLU;
	static uint16_t x284 = 839U;
	uint64_t t63 = UINT64_MAX;

	t63 = (x281|(x282|(x283-x284)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x286 = 3U;
	uint32_t x287 = 3444U;
	uint32_t t64 = 13233U;

	t64 = (x285|(x286|(x287-x288)));

	if (t64 != 36351U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x289 = 1U;
	uint8_t x291 = 93U;
	volatile int8_t x292 = INT8_MAX;
	uint64_t t65 = 7019852246878426LLU;

	t65 = (x289|(x290|(x291-x292)));

	if (t65 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x293|(x294|(x295-x296)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = INT64_MAX;
	uint16_t x298 = 2U;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = UINT32_MAX;
	int64_t t67 = INT64_MAX;

	t67 = (x297|(x298|(x299-x300)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x301 = -1;
	uint64_t x302 = 44672098071LLU;
	int32_t x303 = INT32_MIN;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x301|(x302|(x303-x304)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x306 = INT32_MIN;
	volatile uint64_t x307 = 2918LLU;
	static volatile uint64_t t69 = 608308LLU;

	t69 = (x305|(x306|(x307-x308)));

	if (t69 != 18446744071562070895LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x311 = -1;
	uint16_t x312 = 272U;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x309|(x310|(x311-x312)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x313 = UINT64_MAX;
	volatile uint64_t x314 = UINT64_MAX;
	int16_t x316 = 2;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x313|(x314|(x315-x316)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x317 = 231U;
	static volatile int16_t x318 = INT16_MIN;
	volatile int8_t x319 = 1;
	volatile int64_t x320 = -1LL;

	t72 = (x317|(x318|(x319-x320)));

	if (t72 != -32537LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	volatile int32_t x322 = 3645;
	static volatile uint64_t x324 = 8396055567425LLU;
	uint64_t t73 = 11282LLU;

	t73 = (x321|(x322|(x323-x324)));

	if (t73 != 18446744073709531071LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;

	t74 = (x325|(x326|(x327-x328)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x329 = -1;
	uint16_t x330 = 14914U;
	static uint32_t x331 = UINT32_MAX;
	int16_t x332 = 9;
	static uint32_t t75 = UINT32_MAX;

	t75 = (x329|(x330|(x331-x332)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x335 = -1;
	int8_t x336 = INT8_MAX;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x333|(x334|(x335-x336)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MAX;
	uint32_t x339 = 5U;
	int64_t x340 = 6083710541LL;
	int64_t t77 = -71LL;

	t77 = (x337|(x338|(x339-x340)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x341 = 223761;
	int8_t x342 = -1;
	int16_t x343 = INT16_MIN;
	uint16_t x344 = 13U;

	t78 = (x341|(x342|(x343-x344)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = 110U;
	int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;
	volatile int64_t t79 = -4275135036110LL;

	t79 = (x345|(x346|(x347-x348)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x350 = -313;
	volatile uint64_t x352 = UINT64_MAX;

	t80 = (x349|(x350|(x351-x352)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = UINT64_MAX;
	volatile uint8_t x355 = UINT8_MAX;
	static int64_t x356 = -28311LL;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x353|(x354|(x355-x356)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x357 = 2438LLU;
	int32_t x358 = INT32_MIN;
	static uint64_t t82 = UINT64_MAX;

	t82 = (x357|(x358|(x359-x360)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = INT64_MAX;
	int16_t x362 = INT16_MAX;
	int32_t x363 = 6;
	int8_t x364 = INT8_MIN;

	t83 = (x361|(x362|(x363-x364)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x370 = -1;
	int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MAX;
	volatile int64_t t84 = -91834352LL;

	t84 = (x369|(x370|(x371-x372)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = -63;
	int32_t x374 = -1;
	int16_t x375 = -1;
	static int8_t x376 = -1;
	volatile int32_t t85 = -903;

	t85 = (x373|(x374|(x375-x376)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = INT64_MIN;
	static volatile int16_t x378 = INT16_MIN;
	volatile int32_t x380 = -4336472;
	static volatile int64_t t86 = -1760864203166693LL;

	t86 = (x377|(x378|(x379-x380)));

	if (t86 != -21660LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = -1;
	volatile uint64_t x386 = UINT64_MAX;
	int16_t x388 = INT16_MIN;

	t87 = (x385|(x386|(x387-x388)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x390 = 1U;
	volatile uint32_t x391 = 2U;
	int8_t x392 = -1;

	t88 = (x389|(x390|(x391-x392)));

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = INT64_MAX;
	int32_t x394 = -6828991;
	uint16_t x396 = UINT16_MAX;
	static int64_t t89 = 261LL;

	t89 = (x393|(x394|(x395-x396)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = -3;
	volatile uint64_t x399 = UINT64_MAX;
	int64_t x400 = -1LL;
	volatile uint64_t t90 = 425107849LLU;

	t90 = (x397|(x398|(x399-x400)));

	if (t90 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x401 = 1319698581581LLU;
	int32_t x402 = INT32_MIN;
	int64_t x403 = -1LL;
	volatile int64_t x404 = INT64_MIN;
	uint64_t t91 = UINT64_MAX;

	t91 = (x401|(x402|(x403-x404)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x406 = 82LLU;
	uint32_t x407 = 1706470638U;
	volatile int16_t x408 = 94;
	volatile uint64_t t92 = 6865LLU;

	t92 = (x405|(x406|(x407-x408)));

	if (t92 != 2113908699LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = -2;
	volatile uint64_t x410 = 777124423384LLU;
	static uint16_t x411 = UINT16_MAX;
	int64_t x412 = 14487LL;

	t93 = (x409|(x410|(x411-x412)));

	if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = INT16_MIN;
	volatile int16_t x414 = INT16_MIN;
	uint16_t x415 = UINT16_MAX;
	int8_t x416 = INT8_MIN;

	t94 = (x413|(x414|(x415-x416)));

	if (t94 != -32641) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x417 = 0U;
	int16_t x418 = INT16_MIN;
	static int64_t x420 = -1LL;

	t95 = (x417|(x418|(x419-x420)));

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = INT32_MAX;
	uint8_t x422 = UINT8_MAX;
	static int16_t x423 = 3;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x421|(x422|(x423-x424)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = -379202057;
	int32_t x430 = INT32_MAX;
	uint8_t x432 = 127U;
	int32_t t97 = -1;

	t97 = (x429|(x430|(x431-x432)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = -1;
	int8_t x434 = INT8_MAX;
	static volatile uint64_t x435 = 26220709248LLU;
	uint8_t x436 = UINT8_MAX;
	static uint64_t t98 = UINT64_MAX;

	t98 = (x433|(x434|(x435-x436)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x437 = INT16_MAX;
	int8_t x438 = 25;
	uint16_t x439 = UINT16_MAX;
	static int16_t x440 = INT16_MAX;
	volatile int32_t t99 = -67;

	t99 = (x437|(x438|(x439-x440)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

