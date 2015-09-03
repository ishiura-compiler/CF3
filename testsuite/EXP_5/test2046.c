#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -16934;
volatile int8_t x4 = INT8_MAX;
static int8_t x9 = -1;
static int32_t x10 = -1;
static uint16_t x14 = 30U;
int16_t x27 = INT16_MIN;
static uint64_t x32 = UINT64_MAX;
int8_t x34 = INT8_MIN;
int64_t x37 = INT64_MAX;
int16_t x39 = INT16_MIN;
int64_t t9 = -143073825189799LL;
static uint32_t x42 = 9U;
volatile uint16_t x43 = UINT16_MAX;
int64_t x56 = INT64_MIN;
int32_t x57 = -31;
static uint64_t x61 = 5677497609LLU;
volatile int32_t x63 = INT32_MIN;
volatile uint64_t t14 = 48197874LLU;
static uint8_t x65 = 2U;
uint8_t x72 = 13U;
int64_t t18 = 5LL;
uint8_t x85 = 9U;
int16_t x91 = INT16_MIN;
volatile uint32_t t20 = 41U;
uint64_t x95 = 1824960587963LLU;
int8_t x97 = -1;
int16_t x109 = -1;
static volatile uint64_t t24 = 343773333LLU;
int8_t x116 = -54;
int64_t t25 = 121690293253913LL;
volatile int32_t x119 = INT32_MIN;
int8_t x125 = -1;
uint8_t x126 = 0U;
volatile int32_t x131 = INT32_MAX;
int64_t x133 = -46977LL;
int8_t x136 = -1;
volatile int64_t t30 = 360LL;
static volatile int8_t x138 = -1;
uint8_t x141 = 84U;
uint64_t t32 = 10276LLU;
int16_t x147 = -1;
int16_t x152 = INT16_MIN;
static volatile int64_t x154 = 14327677631975LL;
int32_t x160 = -2572959;
int32_t x166 = INT32_MIN;
int16_t x167 = -1;
uint64_t x170 = 7032409987606703LLU;
uint64_t x184 = UINT64_MAX;
volatile uint64_t t41 = 7856022485LLU;
uint64_t x188 = 2960065607740225LLU;
uint16_t x194 = 1617U;
uint8_t x200 = 10U;
int8_t x213 = -1;
int8_t x230 = INT8_MIN;
int16_t x240 = INT16_MAX;
volatile int64_t t54 = 4260578068234LL;
uint32_t x248 = UINT32_MAX;
volatile uint64_t t55 = 24LLU;
volatile uint32_t x251 = UINT32_MAX;
int64_t x262 = INT64_MIN;
volatile int8_t x269 = -1;
int16_t x270 = INT16_MIN;
int8_t x273 = INT8_MIN;
volatile uint16_t x279 = UINT16_MAX;
int64_t x286 = -5161342497037LL;
static volatile int64_t t65 = -18LL;
int64_t x289 = INT64_MIN;
volatile uint64_t t68 = 11876134325996LLU;
uint64_t x303 = UINT64_MAX;
uint32_t x310 = 2812478U;
volatile int16_t x311 = 3967;
uint16_t x312 = 27U;
volatile int64_t x313 = INT64_MIN;
uint64_t x315 = 3035528LLU;
static volatile int32_t x317 = 124750;
int32_t x325 = INT32_MAX;
int64_t x326 = 0LL;
volatile int8_t x328 = INT8_MIN;
int64_t t75 = -58475LL;
int64_t x329 = 73312340310765LL;
volatile int16_t x331 = -6410;
int16_t x332 = INT16_MIN;
volatile int64_t t76 = 4317682232934128226LL;
uint32_t t77 = 1244U;
int16_t x348 = INT16_MAX;
int32_t t79 = 15922;
uint64_t t80 = 3207083773042127LLU;
static volatile int32_t x354 = -83;
uint32_t x372 = 170U;
volatile uint32_t x373 = 2881U;
static int32_t x374 = INT32_MIN;
int8_t x385 = -2;
int64_t x395 = -1LL;
volatile uint64_t t88 = 5911LLU;
int64_t x399 = -1LL;
uint16_t x400 = 2075U;
uint16_t x402 = UINT16_MAX;
static int16_t x404 = INT16_MIN;
uint64_t t91 = 7162760205462595382LLU;
int32_t x414 = 2;
uint32_t x426 = 1611482713U;
uint32_t x428 = UINT32_MAX;
static uint32_t t96 = 753442U;
int8_t x436 = 21;
static uint8_t x438 = 7U;


void f0(void) {
	uint16_t x2 = 2712U;
	uint8_t x3 = UINT8_MAX;
	volatile int32_t t0 = 348;

	t0 = (x1%((x2^x3)-x4));

	if (t0 != -1718) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static volatile int8_t x6 = -3;
	int16_t x7 = 2;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -238975;

	t1 = (x5%((x6^x7)-x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x11 = 1LLU;
	int64_t x12 = 96399821LL;
	volatile uint64_t t2 = 17206994420LLU;

	t2 = (x9%((x10^x11)-x12));

	if (t2 != 96399822LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x15 = -1LL;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = 4712225LL;

	t3 = (x13%((x14^x15)-x16));

	if (t3 != -31LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int16_t x18 = 63;
	uint8_t x19 = 11U;
	volatile int64_t x20 = 5606466761741113LL;
	int64_t t4 = -123097506851143LL;

	t4 = (x17%((x18^x19)-x20));

	if (t4 != 734213790730462LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 102U;
	volatile int16_t x22 = 2;
	uint64_t x23 = UINT64_MAX;
	static uint16_t x24 = 2U;
	uint64_t t5 = 42651385886680804LLU;

	t5 = (x21%((x22^x23)-x24));

	if (t5 != 102LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int64_t x26 = -1LL;
	static int8_t x28 = -1;
	int64_t t6 = 1555LL;

	t6 = (x25%((x26^x27)-x28));

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 6U;
	int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	uint64_t t7 = 211053LLU;

	t7 = (x29%((x30^x31)-x32));

	if (t7 != 6LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 140U;
	int64_t x35 = INT64_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 28354854029LLU;

	t8 = (x33%((x34^x35)-x36));

	if (t8 != 140LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x38 = INT16_MIN;
	int64_t x40 = INT64_MAX;

	t9 = (x37%((x38^x39)-x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int16_t x44 = INT16_MIN;
	volatile uint32_t t10 = 15414U;

	t10 = (x41%((x42^x43)-x44));

	if (t10 != 255U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MAX;
	int32_t x46 = -1;
	static uint64_t x47 = 71013844LLU;
	volatile int8_t x48 = -1;
	uint64_t t11 = 1296910411LLU;

	t11 = (x45%((x46^x47)-x48));

	if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	uint64_t x54 = 4LLU;
	uint64_t x55 = 162LLU;
	volatile uint64_t t12 = 8376765557327020587LLU;

	t12 = (x53%((x54^x55)-x56));

	if (t12 != 9223372036854775514LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = INT32_MAX;
	static uint64_t x59 = UINT64_MAX;
	uint32_t x60 = UINT32_MAX;
	uint64_t t13 = 69167120256LLU;

	t13 = (x57%((x58^x59)-x60));

	if (t13 != 6442450912LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x62 = INT16_MAX;
	static int16_t x64 = INT16_MIN;

	t14 = (x61%((x62^x63)-x64));

	if (t14 != 5677497609LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x66 = 3;
	uint64_t x67 = 169730LLU;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t15 = 6535LLU;

	t15 = (x65%((x66^x67)-x68));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 1;
	int8_t x70 = 1;
	int16_t x71 = INT16_MAX;
	volatile int32_t t16 = 4154876;

	t16 = (x69%((x70^x71)-x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 1U;
	int32_t x74 = INT32_MIN;
	static volatile int16_t x75 = INT16_MIN;
	volatile int64_t x76 = -1LL;
	static int64_t t17 = -2989215447224328453LL;

	t17 = (x73%((x74^x75)-x76));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = 3730074366862933674LL;
	uint16_t x78 = 244U;
	volatile int8_t x79 = -1;
	int8_t x80 = INT8_MAX;

	t18 = (x77%((x78^x79)-x80));

	if (t18 != 90LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x86 = UINT32_MAX;
	volatile int16_t x87 = -7494;
	uint32_t x88 = UINT32_MAX;
	uint32_t t19 = 1165700U;

	t19 = (x85%((x86^x87)-x88));

	if (t19 != 9U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 29U;
	uint32_t x90 = 60255379U;
	volatile uint8_t x92 = UINT8_MAX;

	t20 = (x89%((x90^x91)-x92));

	if (t20 != 29U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = -1;
	int32_t x94 = 929;
	static int8_t x96 = INT8_MAX;
	volatile uint64_t t21 = 3700LLU;

	t21 = (x93%((x94^x95)-x96));

	if (t21 != 471634173426LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MAX;
	volatile int64_t t22 = 15LL;

	t22 = (x97%((x98^x99)-x100));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -1;
	static volatile int16_t x102 = INT16_MIN;
	volatile uint32_t x103 = 46767U;
	uint16_t x104 = 4150U;
	volatile uint32_t t23 = 951563U;

	t23 = (x101%((x102^x103)-x104));

	if (t23 != 55686U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x110 = 15U;
	uint64_t x111 = UINT64_MAX;
	volatile uint64_t x112 = 43109077LLU;

	t24 = (x109%((x110^x111)-x112));

	if (t24 != 43109092LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 16372680U;
	int8_t x114 = INT8_MAX;
	volatile int64_t x115 = -1LL;

	t25 = (x113%((x114^x115)-x116));

	if (t25 != 32LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 58U;
	int8_t x118 = -1;
	uint32_t x120 = 1029082U;
	volatile uint32_t t26 = 17U;

	t26 = (x117%((x118^x119)-x120));

	if (t26 != 58U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = 104LLU;
	int16_t x123 = -3;
	uint8_t x124 = 1U;
	static uint64_t t27 = 304LLU;

	t27 = (x121%((x122^x123)-x124));

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 9U;
	int32_t t28 = -75;

	t28 = (x125%((x126^x127)-x128));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -1LL;
	volatile int8_t x130 = INT8_MIN;
	static int64_t x132 = INT64_MIN;
	int64_t t29 = -221791510638608120LL;

	t29 = (x129%((x130^x131)-x132));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x134 = 143694759LL;
	uint16_t x135 = UINT16_MAX;

	t30 = (x133%((x134^x135)-x136));

	if (t30 != -46977LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 4160749LLU;
	int64_t x139 = -1LL;
	uint64_t x140 = 176093087243LLU;
	static volatile uint64_t t31 = 7331566212046345LLU;

	t31 = (x137%((x138^x139)-x140));

	if (t31 != 4160749LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x142 = INT8_MIN;
	volatile uint64_t x143 = 9LLU;
	int8_t x144 = INT8_MIN;

	t32 = (x141%((x142^x143)-x144));

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = 12484175LL;
	uint16_t x146 = UINT16_MAX;
	int32_t x148 = -342;
	volatile int64_t t33 = 415LL;

	t33 = (x145%((x146^x147)-x148));

	if (t33 != 32121LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = -1;
	static uint16_t x150 = UINT16_MAX;
	uint32_t x151 = 1059567U;
	static uint32_t t34 = 1868356924U;

	t34 = (x149%((x150^x151)-x152));

	if (t34 != 174767U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x153 = INT32_MIN;
	uint16_t x155 = 57U;
	uint8_t x156 = UINT8_MAX;
	int64_t t35 = -1129367953884LL;

	t35 = (x153%((x154^x155)-x156));

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x157 = 12U;
	static uint16_t x158 = 1419U;
	volatile uint32_t x159 = 128290U;
	uint32_t t36 = 15439712U;

	t36 = (x157%((x158^x159)-x160));

	if (t36 != 12U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = 1;
	uint16_t x164 = UINT16_MAX;
	uint64_t t37 = 20272969527057488LLU;

	t37 = (x161%((x162^x163)-x164));

	if (t37 != 65536LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 5182162425LLU;
	int64_t x168 = INT64_MAX;
	static volatile uint64_t t38 = 31124LLU;

	t38 = (x165%((x166^x167)-x168));

	if (t38 != 5182162425LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -1;
	int16_t x171 = INT16_MIN;
	uint8_t x172 = 18U;
	uint64_t t39 = 10LLU;

	t39 = (x169%((x170^x171)-x172));

	if (t39 != 7032409987585890LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	static int32_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	static int64_t x176 = INT64_MIN;
	int64_t t40 = 1367695183LL;

	t40 = (x173%((x174^x175)-x176));

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = -1;
	int16_t x182 = INT16_MIN;
	uint32_t x183 = 440378U;

	t41 = (x181%((x182^x183)-x184));

	if (t41 != 4199611193LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x185 = -1;
	int16_t x186 = INT16_MAX;
	int16_t x187 = -3950;
	static uint64_t t42 = 9235251682349LLU;

	t42 = (x185%((x186^x187)-x188));

	if (t42 != 2960065607769043LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = -1;
	int32_t x190 = -74314;
	int32_t x191 = 500828581;
	int16_t x192 = INT16_MIN;
	static int32_t t43 = -457;

	t43 = (x189%((x190^x191)-x192));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x193 = 78669;
	uint16_t x195 = UINT16_MAX;
	volatile int8_t x196 = INT8_MIN;
	int32_t t44 = 9;

	t44 = (x193%((x194^x195)-x196));

	if (t44 != 14623) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -6633LL;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = INT8_MIN;
	static volatile uint64_t t45 = 12552065411914990LLU;

	t45 = (x197%((x198^x199)-x200));

	if (t45 != 52LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x201 = INT64_MIN;
	static volatile int64_t x202 = -1LL;
	int16_t x203 = -1;
	static volatile int16_t x204 = INT16_MAX;
	volatile int64_t t46 = -927838410406LL;

	t46 = (x201%((x202^x203)-x204));

	if (t46 != -8LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	int32_t x207 = -1;
	volatile int32_t x208 = 879;
	int32_t t47 = -1;

	t47 = (x205%((x206^x207)-x208));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x209 = -7;
	volatile uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MIN;
	volatile uint64_t t48 = 1772707190534247832LLU;

	t48 = (x209%((x210^x211)-x212));

	if (t48 != 249LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x214 = INT64_MAX;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	int64_t t49 = -1898753357LL;

	t49 = (x213%((x214^x215)-x216));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x217 = 5234;
	int8_t x218 = 41;
	int32_t x219 = 393836;
	int16_t x220 = -92;
	int32_t t50 = 2025072;

	t50 = (x217%((x218^x219)-x220));

	if (t50 != 5234) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = -1;
	int8_t x222 = 0;
	int8_t x223 = INT8_MAX;
	uint16_t x224 = 1U;
	static int32_t t51 = 56134618;

	t51 = (x221%((x222^x223)-x224));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = 1;
	static volatile int8_t x231 = INT8_MIN;
	static volatile int16_t x232 = INT16_MIN;
	volatile int32_t t52 = -153420237;

	t52 = (x229%((x230^x231)-x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x237 = UINT8_MAX;
	volatile int16_t x238 = 1;
	int16_t x239 = INT16_MIN;
	int32_t t53 = 33;

	t53 = (x237%((x238^x239)-x240));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MIN;
	static int64_t x242 = INT64_MIN;
	uint32_t x243 = 706245U;
	int8_t x244 = 4;

	t54 = (x241%((x242^x243)-x244));

	if (t54 != -706241LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = UINT16_MAX;
	uint64_t x246 = 17LLU;
	static int8_t x247 = 1;

	t55 = (x245%((x246^x247)-x248));

	if (t55 != 65535LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x249 = 72894100510LLU;
	int16_t x250 = INT16_MAX;
	volatile uint32_t x252 = 3U;
	uint64_t t56 = 1827453LLU;

	t56 = (x249%((x250^x251)-x252));

	if (t56 != 4175148110LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = 320;
	int16_t x254 = -6035;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t57 = 5;

	t57 = (x253%((x254^x255)-x256));

	if (t57 != 320) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x257 = 184381U;
	int16_t x258 = -1;
	uint16_t x259 = 2169U;
	volatile int64_t x260 = 18015LL;
	int64_t t58 = 1114LL;

	t58 = (x257%((x258^x259)-x260));

	if (t58 != 2716LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = UINT32_MAX;
	uint64_t x263 = UINT64_MAX;
	static int64_t x264 = INT64_MIN;
	static uint64_t t59 = 23613498244580955LLU;

	t59 = (x261%((x262^x263)-x264));

	if (t59 != 4294967295LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 1174020048LLU;
	static int8_t x267 = INT8_MAX;
	uint8_t x268 = 5U;
	uint64_t t60 = 1539242023192LLU;

	t60 = (x265%((x266^x267)-x268));

	if (t60 != 65535LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x271 = INT8_MIN;
	static uint32_t x272 = 6401729U;
	volatile uint32_t t61 = 65U;

	t61 = (x269%((x270^x271)-x272));

	if (t61 != 6369088U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x274 = 5394U;
	uint8_t x275 = 0U;
	int64_t x276 = INT64_MAX;
	int64_t t62 = 11620316850352559LL;

	t62 = (x273%((x274^x275)-x276));

	if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x277 = INT8_MAX;
	uint32_t x278 = 1498907077U;
	uint32_t x280 = 292960313U;
	volatile uint32_t t63 = 116U;

	t63 = (x277%((x278^x279)-x280));

	if (t63 != 127U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x281 = -1;
	uint64_t x282 = UINT64_MAX;
	int64_t x283 = -1LL;
	uint64_t x284 = 585LLU;
	uint64_t t64 = 71332518133027098LLU;

	t64 = (x281%((x282^x283)-x284));

	if (t64 != 584LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = INT8_MIN;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;

	t65 = (x285%((x286^x287)-x288));

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x290 = 20U;
	static int32_t x291 = -74885;
	uint64_t x292 = 8420743396286LLU;
	volatile uint64_t t66 = 402139451LLU;

	t66 = (x289%((x290^x291)-x292));

	if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = UINT8_MAX;
	int32_t x294 = INT32_MIN;
	int64_t x295 = -1LL;
	static uint32_t x296 = 75082296U;
	int64_t t67 = 0LL;

	t67 = (x293%((x294^x295)-x296));

	if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = 1846474874U;
	uint64_t x298 = 12079894161871876LLU;
	uint64_t x299 = UINT64_MAX;
	uint64_t x300 = 2292999931552979LLU;

	t68 = (x297%((x298^x299)-x300));

	if (t68 != 1846474874LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MAX;
	int32_t x304 = INT32_MAX;
	uint64_t t69 = 1788399583LLU;

	t69 = (x301%((x302^x303)-x304));

	if (t69 != 4294967167LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x305 = INT64_MIN;
	uint16_t x306 = 18314U;
	volatile int32_t x307 = INT32_MIN;
	uint32_t x308 = UINT32_MAX;
	int64_t t70 = -8128334LL;

	t70 = (x305%((x306^x307)-x308));

	if (t70 != -670878450LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MIN;
	int64_t t71 = 2064826578656124159LL;

	t71 = (x309%((x310^x311)-x312));

	if (t71 != -2018180LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x314 = UINT16_MAX;
	static uint64_t x316 = 2192240169228314693LLU;
	volatile uint64_t t72 = 146851LLU;

	t72 = (x313%((x314^x315)-x316));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x318 = 2538;
	static int8_t x319 = -42;
	uint16_t x320 = 6U;
	volatile int32_t t73 = -3481;

	t73 = (x317%((x318^x319)-x320));

	if (t73 != 1956) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x321 = 3418U;
	static volatile int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MAX;
	static volatile int16_t x324 = 1;
	uint32_t t74 = 125316449U;

	t74 = (x321%((x322^x323)-x324));

	if (t74 != 3418U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x327 = 101U;

	t75 = (x325%((x326^x327)-x328));

	if (t75 != 194LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x330 = 172U;

	t76 = (x329%((x330^x331)-x332));

	if (t76 != 15681LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x333 = INT8_MIN;
	uint32_t x334 = UINT32_MAX;
	uint16_t x335 = 2908U;
	int32_t x336 = INT32_MIN;

	t77 = (x333%((x334^x335)-x336));

	if (t77 != 5690U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x337 = UINT64_MAX;
	int16_t x338 = -1;
	int8_t x339 = 0;
	static int16_t x340 = INT16_MIN;
	volatile uint64_t t78 = 3267395574209095LLU;

	t78 = (x337%((x338^x339)-x340));

	if (t78 != 15LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x345 = 0;
	int8_t x346 = INT8_MIN;
	int8_t x347 = -1;

	t79 = (x345%((x346^x347)-x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x349 = 3U;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MIN;
	int64_t x352 = -233136764LL;

	t80 = (x349%((x350^x351)-x352));

	if (t80 != 3LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x353 = INT16_MAX;
	static int16_t x355 = -5689;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t81 = 3160604;

	t81 = (x353%((x354^x355)-x356));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = -1;
	uint32_t x367 = 11U;
	int8_t x368 = -1;
	volatile uint32_t t82 = 233292U;

	t82 = (x365%((x366^x367)-x368));

	if (t82 != 65535U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x369 = UINT16_MAX;
	static volatile int64_t x370 = -63309905LL;
	static volatile uint64_t x371 = 4200997762LLU;
	uint64_t t83 = 1028508LLU;

	t83 = (x369%((x370^x371)-x372));

	if (t83 != 65535LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x375 = INT32_MAX;
	int64_t x376 = INT64_MIN;
	volatile int64_t t84 = -11879LL;

	t84 = (x373%((x374^x375)-x376));

	if (t84 != 2881LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MAX;
	uint16_t x383 = 222U;
	volatile int16_t x384 = INT16_MIN;
	volatile uint64_t t85 = 1375LLU;

	t85 = (x381%((x382^x383)-x384));

	if (t85 != 27321LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x386 = -1;
	int64_t x387 = INT64_MIN;
	volatile uint16_t x388 = UINT16_MAX;
	static int64_t t86 = -42LL;

	t86 = (x385%((x386^x387)-x388));

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x389 = 103U;
	int16_t x390 = INT16_MAX;
	volatile int32_t x391 = INT32_MAX;
	int32_t x392 = 1;
	volatile int32_t t87 = 421134;

	t87 = (x389%((x390^x391)-x392));

	if (t87 != 103) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = 267949311801740LL;
	int16_t x394 = -1;
	uint64_t x396 = 2020245LLU;

	t88 = (x393%((x394^x395)-x396));

	if (t88 != 267949311801740LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MIN;
	volatile int64_t t89 = -4501LL;

	t89 = (x397%((x398^x399)-x400));

	if (t89 != 2075LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x401 = INT64_MIN;
	int8_t x403 = -1;
	int64_t t90 = -10376LL;

	t90 = (x401%((x402^x403)-x404));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x405 = -1;
	volatile uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MAX;
	volatile uint8_t x408 = 9U;

	t91 = (x405%((x406^x407)-x408));

	if (t91 != 136LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x409 = UINT16_MAX;
	uint8_t x410 = 4U;
	uint32_t x411 = UINT32_MAX;
	static int8_t x412 = INT8_MIN;
	static uint32_t t92 = 337589U;

	t92 = (x409%((x410^x411)-x412));

	if (t92 != 99U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x413 = 77901848701369153LL;
	int32_t x415 = -1;
	int8_t x416 = 13;
	int64_t t93 = -53743036290917LL;

	t93 = (x413%((x414^x415)-x416));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x417 = 15;
	uint64_t x418 = 441676728LLU;
	static int8_t x419 = 62;
	int32_t x420 = 75488;
	static uint64_t t94 = 610LLU;

	t94 = (x417%((x418^x419)-x420));

	if (t94 != 15LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MIN;
	volatile int16_t x423 = INT16_MAX;
	static int64_t x424 = -1LL;
	static int64_t t95 = -1931726LL;

	t95 = (x421%((x422^x423)-x424));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x425 = 2U;
	int16_t x427 = INT16_MIN;

	t96 = (x425%((x426^x427)-x428));

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x429 = 56U;
	static int8_t x430 = -1;
	volatile uint8_t x431 = 3U;
	volatile int32_t x432 = INT32_MIN;
	volatile int32_t t97 = 3974;

	t97 = (x429%((x430^x431)-x432));

	if (t97 != 56) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x433 = INT16_MIN;
	uint64_t x434 = 11407282802120LLU;
	int32_t x435 = INT32_MAX;
	uint64_t t98 = 2929748751225LLU;

	t98 = (x433%((x434^x435)-x436));

	if (t98 != 2498270200280LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = INT8_MIN;
	int32_t x439 = -8049;
	volatile int32_t x440 = 124868;
	volatile int32_t t99 = 116466;

	t99 = (x437%((x438^x439)-x440));

	if (t99 != -128) { NG(); } else { ; }
	
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

