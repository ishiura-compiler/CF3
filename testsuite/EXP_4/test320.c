#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = INT32_MIN;
int64_t x3 = -1LL;
int8_t x5 = INT8_MAX;
int32_t x8 = -875107729;
uint16_t x10 = UINT16_MAX;
int32_t t2 = 233251;
int32_t x15 = -1;
uint64_t x33 = UINT64_MAX;
uint8_t x43 = 1U;
int32_t t8 = -239388633;
uint16_t x45 = 4U;
uint8_t x46 = UINT8_MAX;
volatile int32_t t11 = -1646;
static int16_t x59 = INT16_MAX;
uint64_t x62 = 6984025589591665LLU;
uint32_t x63 = UINT32_MAX;
int64_t x69 = INT64_MIN;
uint16_t x70 = 0U;
static uint32_t x74 = UINT32_MAX;
int16_t x75 = -1;
int8_t x79 = INT8_MAX;
static uint64_t x85 = 432666187LLU;
static volatile uint16_t x87 = 953U;
static uint32_t x99 = UINT32_MAX;
uint64_t x102 = 475LLU;
int16_t x105 = INT16_MIN;
static int32_t t23 = 29768;
int16_t x115 = -1;
int32_t x116 = -10;
int16_t x117 = INT16_MAX;
static int64_t x119 = INT64_MIN;
uint64_t x139 = 1364542LLU;
int16_t x141 = INT16_MIN;
volatile int32_t x144 = INT32_MIN;
int64_t x149 = INT64_MAX;
static uint16_t x150 = 9U;
uint8_t x161 = UINT8_MAX;
int64_t x164 = -859689145190716825LL;
int16_t x168 = 0;
int32_t x170 = INT32_MIN;
int16_t x175 = INT16_MIN;
volatile int8_t x179 = 7;
uint32_t x188 = UINT32_MAX;
volatile int32_t t40 = 57;
static volatile int64_t x193 = -1LL;
uint64_t x205 = UINT64_MAX;
static volatile uint32_t x206 = 3641U;
int32_t x213 = 208482;
int64_t x215 = INT64_MAX;
volatile int16_t x217 = INT16_MAX;
int16_t x226 = -635;
volatile int16_t x227 = -1;
static int64_t x233 = -2369560281116773909LL;
static int64_t x235 = INT64_MIN;
uint64_t x236 = UINT64_MAX;
static uint16_t x240 = 5706U;
int32_t x252 = INT32_MAX;
static volatile int32_t t53 = 391176478;
uint8_t x260 = 3U;
int32_t t55 = 3757;
int64_t x265 = INT64_MIN;
uint8_t x274 = 1U;
volatile int32_t t58 = 42787;
uint8_t x283 = UINT8_MAX;
int32_t x285 = -2977419;
volatile int8_t x287 = -32;
static int32_t x293 = INT32_MAX;
uint8_t x302 = 3U;
uint8_t x303 = UINT8_MAX;
static int64_t x309 = -25LL;
static volatile uint8_t x310 = UINT8_MAX;
int16_t x311 = -1;
int16_t x321 = -1;
int32_t x325 = -1;
int8_t x327 = 0;
int16_t x330 = INT16_MIN;
static volatile int32_t x331 = -13;
int32_t x332 = INT32_MIN;
int32_t x333 = -7078;
int32_t t69 = -338546;
uint8_t x337 = 122U;
volatile uint16_t x338 = 29U;
int8_t x339 = -1;
static volatile int32_t t70 = -464;
static volatile int32_t x365 = INT32_MAX;
static uint64_t x366 = UINT64_MAX;
int16_t x370 = -761;
static int32_t x394 = -1;
volatile uint8_t x397 = UINT8_MAX;
int8_t x398 = INT8_MIN;
int16_t x400 = -1;
volatile uint64_t x403 = 486860122228868LLU;
uint8_t x411 = 63U;
uint8_t x412 = 62U;
uint64_t x413 = 658645LLU;
volatile int16_t x416 = INT16_MAX;
static int16_t x417 = INT16_MIN;
uint64_t x423 = 2726LLU;
static uint16_t x425 = 4081U;
uint32_t x428 = UINT32_MAX;
volatile uint32_t x433 = UINT32_MAX;
uint8_t x434 = 36U;
int32_t x437 = INT32_MAX;
volatile int16_t x438 = INT16_MIN;
static int32_t t93 = 105;
int64_t x450 = INT64_MAX;
static int16_t x451 = -1;
int32_t t95 = 441968;
int32_t x457 = 39;
int64_t x458 = -1LL;


void f0(void) {
	int8_t x1 = -1;
	uint64_t x4 = 3844499LLU;
	volatile int32_t t0 = -659970197;

	t0 = (x1==(x2|(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = UINT16_MAX;
	int32_t x7 = INT32_MIN;
	static volatile int32_t t1 = -25003;

	t1 = (x5==(x6|(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 0;
	int32_t x11 = 31;
	int16_t x12 = INT16_MAX;

	t2 = (x9==(x10|(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 12262;
	int32_t x14 = INT32_MIN;
	uint32_t x16 = 870U;
	int32_t t3 = 15493;

	t3 = (x13==(x14|(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	volatile int8_t x22 = INT8_MAX;
	uint16_t x23 = 464U;
	int8_t x24 = INT8_MAX;
	volatile int32_t t4 = -6290946;

	t4 = (x21==(x22|(x23-x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	uint16_t x26 = 168U;
	uint32_t x27 = UINT32_MAX;
	static int16_t x28 = INT16_MAX;
	static int32_t t5 = -59812;

	t5 = (x25==(x26|(x27-x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x34 = -230;
	int64_t x35 = -1LL;
	volatile int16_t x36 = INT16_MIN;
	static volatile int32_t t6 = -6728;

	t6 = (x33==(x34|(x35-x36)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	static int32_t x38 = 9;
	uint32_t x39 = 337123U;
	int64_t x40 = INT64_MAX;
	static int32_t t7 = 3495;

	t7 = (x37==(x38|(x39-x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	static uint32_t x42 = UINT32_MAX;
	int64_t x44 = -1LL;

	t8 = (x41==(x42|(x43-x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x47 = 33;
	int16_t x48 = INT16_MIN;
	int32_t t9 = -91;

	t9 = (x45==(x46|(x47-x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 48U;
	volatile int8_t x50 = -1;
	static int16_t x51 = 14324;
	int16_t x52 = -935;
	int32_t t10 = 271360;

	t10 = (x49==(x50|(x51-x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = INT8_MIN;
	static int16_t x54 = INT16_MIN;
	uint64_t x55 = 2742213261LLU;
	int32_t x56 = INT32_MIN;

	t11 = (x53==(x54|(x55-x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = 5U;
	static int8_t x58 = -1;
	uint16_t x60 = 468U;
	int32_t t12 = -525107986;

	t12 = (x57==(x58|(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = INT32_MIN;
	uint64_t x64 = 3323742130299882LLU;
	int32_t t13 = 1666;

	t13 = (x61==(x62|(x63-x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x71 = INT32_MAX;
	volatile int16_t x72 = INT16_MAX;
	volatile int32_t t14 = -8134;

	t14 = (x69==(x70|(x71-x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	static int8_t x76 = 43;
	volatile int32_t t15 = 49;

	t15 = (x73==(x74|(x75-x76)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x77 = 2368017987LLU;
	int32_t x78 = INT32_MIN;
	uint64_t x80 = 375987126953642406LLU;
	volatile int32_t t16 = -877765205;

	t16 = (x77==(x78|(x79-x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MIN;
	int32_t x83 = -1;
	static volatile int32_t x84 = INT32_MIN;
	static volatile int32_t t17 = -11;

	t17 = (x81==(x82|(x83-x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x86 = 10971;
	uint32_t x88 = UINT32_MAX;
	static volatile int32_t t18 = -1498749;

	t18 = (x85==(x86|(x87-x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x89 = 252175288005688054LL;
	uint64_t x90 = 134421395586616LLU;
	int16_t x91 = INT16_MAX;
	int8_t x92 = -1;
	static volatile int32_t t19 = -3238059;

	t19 = (x89==(x90|(x91-x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -401;
	uint32_t x94 = 8U;
	uint16_t x95 = UINT16_MAX;
	volatile uint8_t x96 = 1U;
	int32_t t20 = 84745;

	t20 = (x93==(x94|(x95-x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 4U;
	int32_t x98 = INT32_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t21 = 109;

	t21 = (x97==(x98|(x99-x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	volatile int32_t x103 = 1;
	int8_t x104 = INT8_MIN;
	volatile int32_t t22 = -1037376107;

	t22 = (x101==(x102|(x103-x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x106 = INT32_MAX;
	int64_t x107 = INT64_MIN;
	int64_t x108 = -1LL;

	t23 = (x105==(x106|(x107-x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x109 = INT16_MIN;
	static volatile int64_t x110 = -89074864286063473LL;
	uint64_t x111 = UINT64_MAX;
	volatile int64_t x112 = INT64_MAX;
	volatile int32_t t24 = 118;

	t24 = (x109==(x110|(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x113 = 4862U;
	static int64_t x114 = INT64_MAX;
	static volatile int32_t t25 = 29343290;

	t25 = (x113==(x114|(x115-x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x118 = -1;
	static uint64_t x120 = 1350LLU;
	volatile int32_t t26 = 11;

	t26 = (x117==(x118|(x119-x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 6U;
	volatile int8_t x122 = -1;
	int16_t x123 = -351;
	uint32_t x124 = 27934U;
	static volatile int32_t t27 = 2607;

	t27 = (x121==(x122|(x123-x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = UINT8_MAX;
	uint16_t x126 = 6002U;
	int16_t x127 = 2613;
	static uint64_t x128 = 16358173139411908LLU;
	volatile int32_t t28 = 314502571;

	t28 = (x125==(x126|(x127-x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = 1;
	static int16_t x130 = 12;
	static volatile int64_t x131 = -210317910LL;
	static uint32_t x132 = UINT32_MAX;
	int32_t t29 = -249;

	t29 = (x129==(x130|(x131-x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = 0;
	int64_t x134 = -1661863206LL;
	int16_t x135 = INT16_MIN;
	volatile int32_t x136 = INT32_MIN;
	int32_t t30 = -31011;

	t30 = (x133==(x134|(x135-x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 3U;
	uint64_t x138 = UINT64_MAX;
	int16_t x140 = -1;
	int32_t t31 = 232455;

	t31 = (x137==(x138|(x139-x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x142 = -29;
	static uint32_t x143 = UINT32_MAX;
	int32_t t32 = 1;

	t32 = (x141==(x142|(x143-x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t33 = 287;

	t33 = (x149==(x150|(x151-x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x162 = -15169475296818836LL;
	static int32_t x163 = -1;
	volatile int32_t t34 = 60;

	t34 = (x161==(x162|(x163-x164)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 333U;
	int8_t x166 = -1;
	int64_t x167 = INT64_MIN;
	volatile int32_t t35 = -1059;

	t35 = (x165==(x166|(x167-x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x169 = 17444U;
	volatile int32_t x171 = -1;
	static volatile int16_t x172 = -1;
	static volatile int32_t t36 = 86;

	t36 = (x169==(x170|(x171-x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = -3;
	int16_t x176 = 12;
	static int32_t t37 = 1;

	t37 = (x173==(x174|(x175-x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MAX;
	int16_t x178 = 7244;
	static volatile int32_t x180 = INT32_MAX;
	static volatile int32_t t38 = -42466;

	t38 = (x177==(x178|(x179-x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x181 = 55U;
	int32_t x182 = INT32_MIN;
	uint8_t x183 = 0U;
	int32_t x184 = -962;
	static volatile int32_t t39 = 4333663;

	t39 = (x181==(x182|(x183-x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = 33014574105367903LL;
	static volatile uint32_t x186 = 1921713870U;
	static uint32_t x187 = 244U;

	t40 = (x185==(x186|(x187-x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = 45280196206390872LL;
	volatile uint16_t x190 = 229U;
	int32_t x191 = -1;
	int64_t x192 = -1LL;
	static int32_t t41 = 14152;

	t41 = (x189==(x190|(x191-x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x194 = INT32_MIN;
	uint32_t x195 = 549889U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t42 = 48;

	t42 = (x193==(x194|(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x197 = UINT64_MAX;
	static uint16_t x198 = 7U;
	uint16_t x199 = UINT16_MAX;
	uint16_t x200 = 1013U;
	int32_t t43 = -3;

	t43 = (x197==(x198|(x199-x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t44 = 1194859;

	t44 = (x205==(x206|(x207-x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x214 = UINT16_MAX;
	volatile uint32_t x216 = UINT32_MAX;
	int32_t t45 = -3929402;

	t45 = (x213==(x214|(x215-x216)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x218 = -33434675;
	uint64_t x219 = 1217772346107LLU;
	volatile int16_t x220 = -9;
	int32_t t46 = -7375209;

	t46 = (x217==(x218|(x219-x220)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x221 = 247376500LLU;
	int16_t x222 = INT16_MAX;
	uint16_t x223 = 6U;
	int16_t x224 = INT16_MIN;
	int32_t t47 = 16028;

	t47 = (x221==(x222|(x223-x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = -1;
	uint32_t x228 = UINT32_MAX;
	int32_t t48 = 1;

	t48 = (x225==(x226|(x227-x228)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x229 = 11U;
	int16_t x230 = -399;
	uint16_t x231 = 3U;
	int16_t x232 = INT16_MIN;
	volatile int32_t t49 = 120;

	t49 = (x229==(x230|(x231-x232)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x234 = INT8_MIN;
	volatile int32_t t50 = 1;

	t50 = (x233==(x234|(x235-x236)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x237 = INT8_MIN;
	uint8_t x238 = 82U;
	static uint16_t x239 = 17239U;
	volatile int32_t t51 = 20855;

	t51 = (x237==(x238|(x239-x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int16_t x242 = -1;
	static volatile int8_t x243 = -1;
	int64_t x244 = 142716LL;
	int32_t t52 = 6165449;

	t52 = (x241==(x242|(x243-x244)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x249 = -54;
	int8_t x250 = INT8_MIN;
	int8_t x251 = -1;

	t53 = (x249==(x250|(x251-x252)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x253 = 887895;
	volatile uint32_t x254 = 13U;
	uint64_t x255 = UINT64_MAX;
	int8_t x256 = -1;
	volatile int32_t t54 = 388;

	t54 = (x253==(x254|(x255-x256)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x257 = 8595753394340983LLU;
	int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MAX;

	t55 = (x257==(x258|(x259-x260)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x266 = UINT8_MAX;
	uint64_t x267 = UINT64_MAX;
	uint32_t x268 = 3612U;
	volatile int32_t t56 = 300;

	t56 = (x265==(x266|(x267-x268)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x273 = INT64_MAX;
	uint32_t x275 = 568591U;
	uint8_t x276 = 0U;
	int32_t t57 = -110953;

	t57 = (x273==(x274|(x275-x276)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = INT64_MIN;
	uint32_t x278 = 96U;
	volatile uint16_t x279 = UINT16_MAX;
	int16_t x280 = 61;

	t58 = (x277==(x278|(x279-x280)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x281 = INT16_MIN;
	int64_t x282 = -1544038LL;
	volatile int64_t x284 = INT64_MAX;
	volatile int32_t t59 = -826680084;

	t59 = (x281==(x282|(x283-x284)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x286 = 3299005;
	static int8_t x288 = INT8_MAX;
	int32_t t60 = 1;

	t60 = (x285==(x286|(x287-x288)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x294 = -887954095LL;
	int16_t x295 = -9;
	int8_t x296 = -16;
	volatile int32_t t61 = 7;

	t61 = (x293==(x294|(x295-x296)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = -1;
	uint8_t x304 = 0U;
	volatile int32_t t62 = 251;

	t62 = (x301==(x302|(x303-x304)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x305 = 34U;
	uint32_t x306 = UINT32_MAX;
	uint64_t x307 = 23528085428094792LLU;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t63 = -5;

	t63 = (x305==(x306|(x307-x308)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t64 = 1;

	t64 = (x309==(x310|(x311-x312)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x313 = INT64_MAX;
	int8_t x314 = -23;
	int16_t x315 = INT16_MAX;
	int16_t x316 = 4216;
	static volatile int32_t t65 = 1599;

	t65 = (x313==(x314|(x315-x316)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x322 = -1;
	int16_t x323 = -1;
	int64_t x324 = -1LL;
	int32_t t66 = -147;

	t66 = (x321==(x322|(x323-x324)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x326 = 4015538U;
	static uint64_t x328 = UINT64_MAX;
	static int32_t t67 = 0;

	t67 = (x325==(x326|(x327-x328)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x329 = INT64_MIN;
	static int32_t t68 = -47426889;

	t68 = (x329==(x330|(x331-x332)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x334 = UINT8_MAX;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = INT8_MIN;

	t69 = (x333==(x334|(x335-x336)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x340 = 1U;

	t70 = (x337==(x338|(x339-x340)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x341 = INT64_MIN;
	int8_t x342 = 3;
	int16_t x343 = -5449;
	int64_t x344 = -46125056473792LL;
	int32_t t71 = -3315715;

	t71 = (x341==(x342|(x343-x344)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = 8789;
	int32_t x346 = -1;
	static int8_t x347 = INT8_MIN;
	static uint64_t x348 = 38486779364850488LLU;
	int32_t t72 = 14;

	t72 = (x345==(x346|(x347-x348)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = INT16_MAX;
	uint64_t x350 = 412530404248LLU;
	volatile int64_t x351 = INT64_MIN;
	int64_t x352 = -1LL;
	int32_t t73 = -67498;

	t73 = (x349==(x350|(x351-x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = -15326892LL;
	uint64_t x358 = 132910450531LLU;
	int32_t x359 = 122;
	uint64_t x360 = 2624997423420862699LLU;
	volatile int32_t t74 = 32277545;

	t74 = (x357==(x358|(x359-x360)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = -218;
	volatile int16_t x362 = 220;
	uint32_t x363 = 5U;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t75 = -38;

	t75 = (x361==(x362|(x363-x364)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x367 = INT16_MIN;
	uint32_t x368 = UINT32_MAX;
	int32_t t76 = 753605;

	t76 = (x365==(x366|(x367-x368)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x369 = -212393823032LL;
	static uint32_t x371 = UINT32_MAX;
	static uint8_t x372 = 0U;
	static volatile int32_t t77 = -848;

	t77 = (x369==(x370|(x371-x372)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x373 = 8U;
	int8_t x374 = INT8_MAX;
	int16_t x375 = INT16_MIN;
	uint16_t x376 = 0U;
	volatile int32_t t78 = 24081272;

	t78 = (x373==(x374|(x375-x376)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x377 = INT64_MIN;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = -1;
	uint64_t x380 = 842LLU;
	int32_t t79 = 0;

	t79 = (x377==(x378|(x379-x380)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x385 = 12;
	int32_t x386 = -73284;
	int8_t x387 = -1;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t80 = 181;

	t80 = (x385==(x386|(x387-x388)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x389 = -415889368LL;
	int16_t x390 = -1;
	volatile int16_t x391 = -1;
	int8_t x392 = INT8_MIN;
	volatile int32_t t81 = -6461;

	t81 = (x389==(x390|(x391-x392)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x393 = 53542082812LLU;
	uint32_t x395 = 407U;
	uint8_t x396 = 2U;
	int32_t t82 = 207936905;

	t82 = (x393==(x394|(x395-x396)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x399 = 1011U;
	volatile int32_t t83 = 17;

	t83 = (x397==(x398|(x399-x400)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x401 = 247U;
	static uint64_t x402 = 103248188180281146LLU;
	uint32_t x404 = 1751161903U;
	static int32_t t84 = -3577287;

	t84 = (x401==(x402|(x403-x404)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = INT8_MIN;
	static uint8_t x406 = UINT8_MAX;
	uint32_t x407 = 4714357U;
	int16_t x408 = -1;
	int32_t t85 = -21785921;

	t85 = (x405==(x406|(x407-x408)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x409 = 3615;
	uint64_t x410 = UINT64_MAX;
	int32_t t86 = 0;

	t86 = (x409==(x410|(x411-x412)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x414 = 234094LL;
	uint64_t x415 = 246480061LLU;
	volatile int32_t t87 = -1;

	t87 = (x413==(x414|(x415-x416)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x418 = 18U;
	static uint64_t x419 = 7776527LLU;
	uint32_t x420 = UINT32_MAX;
	static volatile int32_t t88 = 1699614;

	t88 = (x417==(x418|(x419-x420)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x421 = 18U;
	int8_t x422 = -1;
	int16_t x424 = -1;
	static volatile int32_t t89 = 9500492;

	t89 = (x421==(x422|(x423-x424)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x426 = -439944888;
	uint64_t x427 = 356LLU;
	volatile int32_t t90 = -7;

	t90 = (x425==(x426|(x427-x428)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x435 = UINT32_MAX;
	uint64_t x436 = 336729586849LLU;
	int32_t t91 = 132570;

	t91 = (x433==(x434|(x435-x436)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x439 = UINT32_MAX;
	volatile uint32_t x440 = UINT32_MAX;
	int32_t t92 = 117330754;

	t92 = (x437==(x438|(x439-x440)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x441 = UINT32_MAX;
	volatile int64_t x442 = INT64_MAX;
	volatile int8_t x443 = -60;
	volatile int8_t x444 = INT8_MAX;

	t93 = (x441==(x442|(x443-x444)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x449 = INT8_MAX;
	int16_t x452 = INT16_MAX;
	volatile int32_t t94 = 0;

	t94 = (x449==(x450|(x451-x452)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x453 = -1;
	uint32_t x454 = 7U;
	volatile int32_t x455 = -1;
	static int8_t x456 = INT8_MAX;

	t95 = (x453==(x454|(x455-x456)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x459 = 67U;
	int16_t x460 = INT16_MIN;
	int32_t t96 = 30878;

	t96 = (x457==(x458|(x459-x460)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x461 = -6;
	int16_t x462 = INT16_MAX;
	int16_t x463 = -1;
	uint16_t x464 = 13U;
	volatile int32_t t97 = -2025;

	t97 = (x461==(x462|(x463-x464)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x465 = 586U;
	volatile uint64_t x466 = UINT64_MAX;
	volatile int32_t x467 = -1;
	int32_t x468 = INT32_MIN;
	static int32_t t98 = -258;

	t98 = (x465==(x466|(x467-x468)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x469 = 2;
	volatile int8_t x470 = -1;
	static int32_t x471 = INT32_MIN;
	int64_t x472 = INT64_MIN;
	static int32_t t99 = -186335872;

	t99 = (x469==(x470|(x471-x472)));

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

