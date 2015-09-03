#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x8 = UINT8_MAX;
uint8_t x11 = UINT8_MAX;
volatile uint16_t x15 = 336U;
static int32_t t4 = -132145;
int8_t x22 = -1;
static int8_t x24 = 14;
volatile uint32_t x29 = 490702862U;
int8_t x30 = INT8_MAX;
static uint8_t x34 = 2U;
int8_t x45 = INT8_MIN;
int8_t x51 = INT8_MIN;
uint16_t x53 = 4091U;
uint64_t x54 = 267632336703LLU;
volatile uint8_t x57 = UINT8_MAX;
volatile int16_t x63 = INT16_MIN;
static int16_t x64 = INT16_MAX;
int16_t x67 = INT16_MAX;
static uint64_t x68 = 83336330922LLU;
static volatile int64_t x69 = INT64_MIN;
uint8_t x73 = 34U;
volatile uint32_t x78 = 500730U;
int16_t x86 = -1;
int16_t x91 = INT16_MAX;
int64_t x98 = -16247216212646859LL;
static volatile int32_t t26 = 277597;
uint16_t x121 = 20U;
int16_t x129 = 1;
static int8_t x133 = INT8_MIN;
volatile int32_t x134 = INT32_MIN;
static int64_t x140 = 360743000484147LL;
int64_t x142 = 186458960293LL;
int16_t x151 = 824;
int32_t t37 = 59854;
uint8_t x156 = UINT8_MAX;
static uint32_t x163 = UINT32_MAX;
int32_t t40 = -48;
int64_t x168 = -1LL;
uint8_t x180 = UINT8_MAX;
volatile uint8_t x185 = 1U;
int64_t x200 = INT64_MIN;
static int16_t x201 = INT16_MIN;
volatile int32_t x203 = INT32_MAX;
uint8_t x204 = UINT8_MAX;
static int32_t t50 = -29;
volatile uint16_t x220 = UINT16_MAX;
uint16_t x223 = 486U;
int32_t t55 = -376990;
int32_t t56 = -29902336;
int8_t x244 = -10;
uint32_t x246 = 91U;
volatile int32_t t61 = -51139;
uint8_t x252 = UINT8_MAX;
int64_t x255 = INT64_MIN;
static int32_t x259 = -1187;
int32_t t64 = -15945;
uint32_t x263 = UINT32_MAX;
uint32_t x264 = UINT32_MAX;
volatile int32_t x266 = INT32_MIN;
volatile int32_t t66 = -10874989;
volatile uint16_t x271 = UINT16_MAX;
volatile int32_t t67 = 597511;
volatile int8_t x273 = INT8_MIN;
static volatile int16_t x274 = INT16_MIN;
int32_t t68 = -1979;
int64_t x279 = INT64_MIN;
int32_t t70 = 420;
uint16_t x285 = 0U;
int32_t t71 = 105;
int32_t t73 = -819;
int16_t x303 = 1;
static int16_t x305 = 2692;
volatile int16_t x308 = 1;
int32_t t76 = 32735791;
static int16_t x320 = INT16_MAX;
int32_t x325 = INT32_MIN;
volatile int32_t t81 = 82;
uint32_t x331 = UINT32_MAX;
int8_t x333 = INT8_MIN;
volatile uint16_t x340 = 7982U;
uint8_t x343 = 13U;
static int8_t x349 = -1;
int32_t x355 = INT32_MAX;
volatile int32_t t88 = -41761;
int8_t x357 = -1;
int64_t x360 = -1LL;
static int8_t x366 = 0;
volatile uint32_t x370 = 98645U;
uint8_t x371 = UINT8_MAX;
int32_t x373 = INT32_MAX;
int64_t x381 = 71LL;
volatile uint8_t x382 = 12U;
volatile uint64_t x386 = 4149933LLU;
static int16_t x389 = INT16_MIN;
volatile int64_t x392 = 334584811LL;
volatile uint8_t x396 = 50U;
int8_t x397 = -6;
uint64_t x398 = 7720011LLU;


void f0(void) {
	int32_t x1 = 210129260;
	volatile int16_t x2 = -1;
	uint16_t x3 = 925U;
	static volatile int32_t x4 = -85;
	int32_t t0 = -10;

	t0 = (x1<=(x2|(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 8776523864027LL;
	int64_t x6 = INT64_MAX;
	static volatile uint8_t x7 = UINT8_MAX;
	int32_t t1 = -5514;

	t1 = (x5<=(x6|(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 14U;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 2;

	t2 = (x9<=(x10|(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	static int16_t x14 = INT16_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -7;

	t3 = (x13<=(x14|(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	static uint8_t x18 = 3U;
	uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MIN;

	t4 = (x17<=(x18|(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -2;
	static uint64_t x23 = 2246LLU;
	static int32_t t5 = -499018894;

	t5 = (x21<=(x22|(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	volatile int8_t x26 = 17;
	int64_t x27 = INT64_MIN;
	int16_t x28 = 187;
	int32_t t6 = -725311;

	t6 = (x25<=(x26|(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = -41665995;

	t7 = (x29<=(x30|(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	int32_t x35 = 54;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = -33434988;

	t8 = (x33<=(x34|(x35|x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 57U;
	int8_t x38 = INT8_MIN;
	int64_t x39 = 595283927081888LL;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 56;

	t9 = (x37<=(x38|(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 98U;
	int8_t x42 = -63;
	static int8_t x43 = -45;
	uint16_t x44 = UINT16_MAX;
	static int32_t t10 = 1;

	t10 = (x41<=(x42|(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 40;
	volatile int8_t x47 = INT8_MIN;
	static uint16_t x48 = 171U;
	static volatile int32_t t11 = -802514;

	t11 = (x45<=(x46|(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	volatile int16_t x50 = INT16_MIN;
	int64_t x52 = INT64_MIN;
	int32_t t12 = 0;

	t12 = (x49<=(x50|(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x55 = UINT32_MAX;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t13 = 4014848;

	t13 = (x53<=(x54|(x55|x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = 7268987080159914740LLU;
	volatile uint32_t x59 = 37168U;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -25;

	t14 = (x57<=(x58|(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int16_t x62 = -1;
	volatile int32_t t15 = -66671613;

	t15 = (x61<=(x62|(x63|x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = 3206879LLU;
	int32_t t16 = -18228;

	t16 = (x65<=(x66|(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x70 = UINT64_MAX;
	uint64_t x71 = 29797566812301870LLU;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -392600209;

	t17 = (x69<=(x70|(x71|x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = 0;
	uint32_t x75 = 9083U;
	volatile int8_t x76 = -62;
	int32_t t18 = -123;

	t18 = (x73<=(x74|(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	int64_t x79 = INT64_MIN;
	volatile uint8_t x80 = 42U;
	int32_t t19 = -853;

	t19 = (x77<=(x78|(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 268LLU;
	static uint64_t x82 = UINT64_MAX;
	uint8_t x83 = 39U;
	uint8_t x84 = 45U;
	volatile int32_t t20 = 4;

	t20 = (x81<=(x82|(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	int64_t x87 = -1LL;
	static int16_t x88 = INT16_MIN;
	static volatile int32_t t21 = 12775301;

	t21 = (x85<=(x86|(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -4;
	static int32_t x90 = 883;
	int8_t x92 = -1;
	volatile int32_t t22 = 1;

	t22 = (x89<=(x90|(x91|x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 22675035LLU;
	static uint64_t x94 = 3207LLU;
	static int64_t x95 = -1LL;
	uint32_t x96 = 5660U;
	volatile int32_t t23 = -5;

	t23 = (x93<=(x94|(x95|x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	uint32_t x99 = 13055312U;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = 51411327;

	t24 = (x97<=(x98|(x99|x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int64_t x102 = -11653909515953248LL;
	int16_t x103 = INT16_MAX;
	int64_t x104 = -1LL;
	volatile int32_t t25 = 140;

	t25 = (x101<=(x102|(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x106 = 94U;
	int32_t x107 = INT32_MIN;
	int32_t x108 = 26;

	t26 = (x105<=(x106|(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static uint8_t x110 = 2U;
	volatile int64_t x111 = INT64_MAX;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = -276142;

	t27 = (x109<=(x110|(x111|x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = -1;
	int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MAX;
	int32_t t28 = 2781;

	t28 = (x113<=(x114|(x115|x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = 240918;
	static uint32_t x119 = UINT32_MAX;
	uint64_t x120 = 1216620225051457LLU;
	volatile int32_t t29 = -189586;

	t29 = (x117<=(x118|(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = UINT64_MAX;
	volatile int16_t x123 = -7070;
	volatile uint8_t x124 = 7U;
	volatile int32_t t30 = -7;

	t30 = (x121<=(x122|(x123|x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -84839LL;
	static int64_t x126 = INT64_MIN;
	static int32_t x127 = -1;
	volatile uint32_t x128 = 137110U;
	int32_t t31 = 40;

	t31 = (x125<=(x126|(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = 0;
	uint16_t x131 = 31U;
	int32_t x132 = -1;
	static volatile int32_t t32 = 8821;

	t32 = (x129<=(x130|(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x135 = 61893U;
	int8_t x136 = INT8_MIN;
	static int32_t t33 = 338;

	t33 = (x133<=(x134|(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	static int64_t x139 = 0LL;
	static volatile int32_t t34 = -2;

	t34 = (x137<=(x138|(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int32_t x143 = -498;
	static int16_t x144 = 6996;
	int32_t t35 = 0;

	t35 = (x141<=(x142|(x143|x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 0LL;
	int8_t x146 = INT8_MIN;
	static uint64_t x147 = 175LLU;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 0;

	t36 = (x145<=(x146|(x147|x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	volatile int16_t x150 = INT16_MAX;
	static volatile int32_t x152 = -113028471;

	t37 = (x149<=(x150|(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	int64_t x154 = 4052521420520308009LL;
	uint16_t x155 = UINT16_MAX;
	int32_t t38 = 32063;

	t38 = (x153<=(x154|(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 78U;
	static uint16_t x158 = 14233U;
	int16_t x159 = -1;
	int8_t x160 = INT8_MAX;
	static int32_t t39 = -14153539;

	t39 = (x157<=(x158|(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = UINT8_MAX;
	volatile int32_t x162 = -1;
	int64_t x164 = -5796246596236LL;

	t40 = (x161<=(x162|(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = 15U;
	volatile uint64_t x166 = UINT64_MAX;
	int64_t x167 = -1LL;
	volatile int32_t t41 = -715670773;

	t41 = (x165<=(x166|(x167|x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	volatile int16_t x170 = INT16_MIN;
	int64_t x171 = -2179424936455133LL;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 290;

	t42 = (x169<=(x170|(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = -1;
	int64_t x174 = INT64_MIN;
	int64_t x175 = -94026LL;
	static int16_t x176 = INT16_MIN;
	int32_t t43 = 104480321;

	t43 = (x173<=(x174|(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = -1;
	int64_t x179 = 47LL;
	volatile int32_t t44 = -24;

	t44 = (x177<=(x178|(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = -1;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 176230;

	t45 = (x181<=(x182|(x183|x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x186 = -1;
	int16_t x187 = INT16_MAX;
	static int32_t x188 = 18;
	volatile int32_t t46 = 356497;

	t46 = (x185<=(x186|(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = UINT16_MAX;
	static volatile int64_t x190 = INT64_MIN;
	volatile int64_t x191 = INT64_MIN;
	uint8_t x192 = 50U;
	int32_t t47 = -567;

	t47 = (x189<=(x190|(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	static int8_t x194 = INT8_MAX;
	int16_t x195 = INT16_MAX;
	int32_t x196 = INT32_MAX;
	static volatile int32_t t48 = 11983;

	t48 = (x193<=(x194|(x195|x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	int64_t x198 = -1LL;
	int16_t x199 = INT16_MIN;
	volatile int32_t t49 = 2;

	t49 = (x197<=(x198|(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;

	t50 = (x201<=(x202|(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x205 = 0;
	uint16_t x206 = 157U;
	int8_t x207 = -1;
	uint64_t x208 = UINT64_MAX;
	int32_t t51 = -15988;

	t51 = (x205<=(x206|(x207|x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -4;
	int16_t x210 = -1;
	static uint32_t x211 = 1740U;
	int64_t x212 = -1LL;
	int32_t t52 = -8;

	t52 = (x209<=(x210|(x211|x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = -334;
	volatile uint8_t x215 = 30U;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t53 = 7;

	t53 = (x213<=(x214|(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int64_t x218 = 4395326LL;
	int32_t x219 = -1;
	int32_t t54 = 24626;

	t54 = (x217<=(x218|(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -941;
	static int8_t x224 = INT8_MIN;

	t55 = (x221<=(x222|(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x226 = 5687LLU;
	int32_t x227 = INT32_MIN;
	uint8_t x228 = UINT8_MAX;

	t56 = (x225<=(x226|(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 19826578685LLU;
	uint64_t x230 = 16120321567LLU;
	int16_t x231 = 992;
	int16_t x232 = INT16_MIN;
	static int32_t t57 = -3978556;

	t57 = (x229<=(x230|(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MAX;
	uint64_t x236 = UINT64_MAX;
	static volatile int32_t t58 = 51256130;

	t58 = (x233<=(x234|(x235|x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 17021685U;
	int16_t x238 = -1;
	int16_t x239 = INT16_MAX;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t59 = 1;

	t59 = (x237<=(x238|(x239|x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int16_t x242 = 540;
	uint8_t x243 = 1U;
	volatile int32_t t60 = 69329;

	t60 = (x241<=(x242|(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	uint32_t x247 = 0U;
	int64_t x248 = 166781146126367LL;

	t61 = (x245<=(x246|(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int64_t x250 = INT64_MAX;
	uint64_t x251 = 15051LLU;
	volatile int32_t t62 = -1;

	t62 = (x249<=(x250|(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = -231256;
	int32_t x254 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -121;

	t63 = (x253<=(x254|(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 5U;
	static int16_t x258 = -126;
	int32_t x260 = INT32_MIN;

	t64 = (x257<=(x258|(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MAX;
	static int32_t t65 = -773159315;

	t65 = (x261<=(x262|(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int32_t x267 = INT32_MAX;
	int16_t x268 = -1;

	t66 = (x265<=(x266|(x267|x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	volatile int64_t x270 = INT64_MIN;
	volatile int32_t x272 = -471193791;

	t67 = (x269<=(x270|(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x275 = 0U;
	int64_t x276 = INT64_MIN;

	t68 = (x273<=(x274|(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 1270106036554LLU;
	uint8_t x278 = UINT8_MAX;
	static int64_t x280 = -2273LL;
	volatile int32_t t69 = 11739346;

	t69 = (x277<=(x278|(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -30602LL;
	int8_t x282 = -1;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = -1LL;

	t70 = (x281<=(x282|(x283|x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x286 = -147500262;
	int8_t x287 = INT8_MIN;
	int8_t x288 = -1;

	t71 = (x285<=(x286|(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = 18691507400LL;
	int16_t x290 = INT16_MIN;
	volatile uint64_t x291 = UINT64_MAX;
	static int64_t x292 = INT64_MIN;
	static volatile int32_t t72 = -491657773;

	t72 = (x289<=(x290|(x291|x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = 41316LL;
	volatile uint32_t x294 = 488298U;
	uint8_t x295 = UINT8_MAX;
	static uint64_t x296 = 142747904360LLU;

	t73 = (x293<=(x294|(x295|x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	static uint16_t x298 = UINT16_MAX;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = 6;
	int32_t t74 = -5;

	t74 = (x297<=(x298|(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = UINT16_MAX;
	int16_t x302 = -1;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 22;

	t75 = (x301<=(x302|(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x306 = 32241787U;
	int32_t x307 = -1;

	t76 = (x305<=(x306|(x307|x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 12U;
	int8_t x310 = -5;
	volatile uint16_t x311 = UINT16_MAX;
	uint64_t x312 = 39LLU;
	volatile int32_t t77 = 14856074;

	t77 = (x309<=(x310|(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	volatile int8_t x314 = 14;
	uint16_t x315 = 12856U;
	uint8_t x316 = UINT8_MAX;
	int32_t t78 = -5092093;

	t78 = (x313<=(x314|(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	uint16_t x318 = UINT16_MAX;
	uint64_t x319 = 2220482617652152LLU;
	int32_t t79 = -2956;

	t79 = (x317<=(x318|(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	int8_t x322 = -17;
	uint8_t x323 = 84U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -311353044;

	t80 = (x321<=(x322|(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x326 = -1;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MAX;

	t81 = (x325<=(x326|(x327|x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 19734348308915452LLU;
	volatile int32_t x330 = INT32_MAX;
	static int8_t x332 = -3;
	int32_t t82 = 31996;

	t82 = (x329<=(x330|(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = -3;
	uint64_t x335 = 7807864838289470352LLU;
	int16_t x336 = -583;
	int32_t t83 = 986766;

	t83 = (x333<=(x334|(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	int64_t x338 = -1047982906LL;
	int16_t x339 = 1348;
	volatile int32_t t84 = 111;

	t84 = (x337<=(x338|(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	int64_t x342 = 3LL;
	int32_t x344 = 13611804;
	int32_t t85 = -45;

	t85 = (x341<=(x342|(x343|x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 4LL;
	int32_t x346 = -8930;
	volatile int8_t x347 = INT8_MIN;
	int16_t x348 = 807;
	int32_t t86 = 134050123;

	t86 = (x345<=(x346|(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = UINT16_MAX;
	static volatile int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 289465;

	t87 = (x349<=(x350|(x351|x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	static int64_t x354 = INT64_MAX;
	int8_t x356 = INT8_MIN;

	t88 = (x353<=(x354|(x355|x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -6013LL;
	int64_t x359 = -1LL;
	volatile int32_t t89 = 2210;

	t89 = (x357<=(x358|(x359|x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	volatile uint32_t x363 = 18U;
	static uint16_t x364 = 764U;
	static volatile int32_t t90 = 2;

	t90 = (x361<=(x362|(x363|x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MAX;
	static uint64_t x367 = 15561306639466460LLU;
	int32_t x368 = 345;
	volatile int32_t t91 = 12204;

	t91 = (x365<=(x366|(x367|x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MAX;
	int16_t x372 = 1;
	volatile int32_t t92 = 103;

	t92 = (x369<=(x370|(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = UINT32_MAX;
	static uint64_t x375 = 1656917LLU;
	int16_t x376 = 32;
	static volatile int32_t t93 = 0;

	t93 = (x373<=(x374|(x375|x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 1;
	int8_t x378 = -1;
	volatile int16_t x379 = -1;
	uint8_t x380 = 1U;
	volatile int32_t t94 = -76029;

	t94 = (x377<=(x378|(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x383 = -1;
	int16_t x384 = 0;
	int32_t t95 = -3398;

	t95 = (x381<=(x382|(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	static int32_t x387 = -55506;
	uint8_t x388 = 4U;
	int32_t t96 = -640557794;

	t96 = (x385<=(x386|(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x390 = 3U;
	int8_t x391 = INT8_MIN;
	int32_t t97 = 74434;

	t97 = (x389<=(x390|(x391|x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MIN;
	static volatile int16_t x395 = -1;
	static int32_t t98 = 839726247;

	t98 = (x393<=(x394|(x395|x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x399 = INT64_MAX;
	uint8_t x400 = 89U;
	volatile int32_t t99 = 1362;

	t99 = (x397<=(x398|(x399|x400)));

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

