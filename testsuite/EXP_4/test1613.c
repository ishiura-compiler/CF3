#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x18 = -1;
static volatile int8_t x20 = INT8_MIN;
volatile int32_t t4 = -156102647;
volatile int64_t x25 = -1LL;
static uint8_t x36 = UINT8_MAX;
volatile int32_t t8 = 910404417;
static uint16_t x47 = UINT16_MAX;
int64_t x53 = 8292111410LL;
uint16_t x55 = UINT16_MAX;
int16_t x57 = -1;
static uint32_t x59 = UINT32_MAX;
int8_t x64 = 1;
int64_t x71 = INT64_MAX;
int32_t x72 = -135;
int64_t x80 = INT64_MIN;
volatile uint32_t x91 = UINT32_MAX;
static int16_t x99 = 756;
static volatile int32_t t24 = 507939440;
uint32_t t25 = 961U;
static uint16_t x108 = 0U;
int8_t x116 = -25;
uint8_t x123 = 109U;
int64_t t30 = INT64_MIN;
int64_t x125 = 4720398LL;
int8_t x126 = INT8_MAX;
static int8_t x127 = INT8_MIN;
static volatile int32_t x129 = -1;
static uint32_t x147 = UINT32_MAX;
static int32_t t36 = INT32_MIN;
int64_t x151 = INT64_MIN;
uint64_t x153 = 2219LLU;
volatile uint16_t x155 = 5436U;
static int16_t x158 = -1;
volatile int32_t t39 = -1;
int64_t x164 = 1855146715534LL;
volatile int32_t x171 = 1948;
static int32_t x174 = INT32_MAX;
int8_t x182 = -1;
int8_t x185 = -5;
volatile uint32_t x190 = UINT32_MAX;
int16_t x192 = 34;
int16_t x201 = 15;
uint8_t x206 = 38U;
volatile int32_t x213 = INT32_MIN;
int32_t t53 = INT32_MIN;
int32_t x221 = -1;
int32_t t56 = 1;
int32_t x229 = INT32_MIN;
int32_t x232 = INT32_MAX;
volatile uint16_t x236 = 0U;
int16_t x243 = INT16_MIN;
int16_t x246 = INT16_MAX;
volatile int32_t t61 = 14297894;
int32_t x249 = 125;
int32_t x251 = INT32_MIN;
volatile int64_t x259 = 35004LL;
int64_t x261 = INT64_MAX;
int64_t x267 = 787631LL;
int32_t t67 = -2252774;
uint16_t x280 = UINT16_MAX;
volatile int32_t t69 = -1;
uint32_t x289 = 78700U;
int8_t x292 = -4;
volatile int16_t x295 = 7626;
static int64_t x296 = INT64_MAX;
int64_t x297 = -1LL;
volatile int16_t x299 = INT16_MIN;
uint16_t x306 = UINT16_MAX;
uint32_t x315 = UINT32_MAX;
uint16_t x319 = 45U;
volatile int32_t t80 = -879717;
uint8_t x325 = 1U;
int16_t x330 = INT16_MIN;
int8_t x333 = INT8_MAX;
int64_t x334 = 820109113445314LL;
volatile int8_t x342 = -1;
volatile int32_t x343 = INT32_MIN;
static int16_t x348 = INT16_MIN;
int16_t x350 = INT16_MAX;
int16_t x356 = -727;
volatile int32_t t89 = INT32_MIN;
uint64_t x362 = UINT64_MAX;
static int64_t x363 = -1LL;
int32_t x377 = -18080419;
int32_t x379 = INT32_MIN;
int64_t x381 = INT64_MIN;
static uint64_t x387 = UINT64_MAX;
int8_t x389 = -1;
int8_t x395 = INT8_MIN;
int16_t x399 = INT16_MIN;


void f0(void) {
	volatile uint16_t x1 = 59U;
	volatile int16_t x2 = -18;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = 8;
	volatile int32_t t0 = -879053;

	t0 = (x1+(x2==(x3<=x4)));

	if (t0 != 59) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 4LLU;
	uint64_t x7 = 415562935827LLU;
	volatile uint64_t x8 = UINT64_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5+(x6==(x7<=x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint64_t x10 = 675LLU;
	static int64_t x11 = 7LL;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = INT32_MIN;

	t2 = (x9+(x10==(x11<=x12)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int16_t x14 = 0;
	int64_t x15 = INT64_MAX;
	uint16_t x16 = 361U;
	uint32_t t3 = 2741U;

	t3 = (x13+(x14==(x15<=x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 2;
	int32_t x19 = INT32_MIN;

	t4 = (x17+(x18==(x19<=x20)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	int16_t x22 = INT16_MAX;
	static int8_t x23 = INT8_MAX;
	int8_t x24 = 60;
	static uint32_t t5 = UINT32_MAX;

	t5 = (x21+(x22==(x23<=x24)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = UINT8_MAX;
	int16_t x27 = -2;
	uint32_t x28 = 2U;
	int64_t t6 = 773174972726LL;

	t6 = (x25+(x26==(x27<=x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	volatile int8_t x30 = -1;
	int64_t x31 = -58161548013949LL;
	uint16_t x32 = 2U;
	uint32_t t7 = UINT32_MAX;

	t7 = (x29+(x30==(x31<=x32)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 33U;
	static int8_t x34 = 1;
	uint8_t x35 = 76U;

	t8 = (x33+(x34==(x35<=x36)));

	if (t8 != 34) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	uint64_t x38 = 1571570032LLU;
	int8_t x39 = -1;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -589279;

	t9 = (x37+(x38==(x39<=x40)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 3565U;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = 72;

	t10 = (x41+(x42==(x43<=x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static uint32_t x46 = 1308U;
	int8_t x48 = -1;
	volatile int32_t t11 = 177;

	t11 = (x45+(x46==(x47<=x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	int64_t x51 = 75544066LL;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 120156;

	t12 = (x49+(x50==(x51<=x52)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 117801530580050LLU;
	int16_t x56 = INT16_MIN;
	volatile int64_t t13 = -436164955443LL;

	t13 = (x53+(x54==(x55<=x56)));

	if (t13 != 8292111410LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -1;

	t14 = (x57+(x58==(x59<=x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	volatile uint16_t x63 = 341U;
	int32_t t15 = INT32_MIN;

	t15 = (x61+(x62==(x63<=x64)));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x66 = -43;
	static int8_t x67 = -1;
	volatile int64_t x68 = -92135126201LL;
	uint64_t t16 = UINT64_MAX;

	t16 = (x65+(x66==(x67<=x68)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile int16_t x70 = INT16_MIN;
	volatile int32_t t17 = -3079629;

	t17 = (x69+(x70==(x71<=x72)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	static int8_t x74 = -1;
	int32_t x75 = INT32_MAX;
	volatile uint16_t x76 = UINT16_MAX;
	int64_t t18 = -8102LL;

	t18 = (x73+(x74==(x75<=x76)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1U;
	int8_t x78 = -1;
	int8_t x79 = -1;
	int32_t t19 = 11798056;

	t19 = (x77+(x78==(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = INT64_MIN;
	static uint8_t x84 = UINT8_MAX;
	static int32_t t20 = -10;

	t20 = (x81+(x82==(x83<=x84)));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	uint64_t x86 = 12004819LLU;
	int16_t x87 = INT16_MAX;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = -2794825;

	t21 = (x85+(x86==(x87<=x88)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -3939449;
	static int32_t x90 = -1;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -4974;

	t22 = (x89+(x90==(x91<=x92)));

	if (t22 != -3939449) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 0;
	int32_t x94 = 3421773;
	uint8_t x95 = 4U;
	volatile int32_t x96 = -1;
	int32_t t23 = -209;

	t23 = (x93+(x94==(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 7U;
	int16_t x98 = INT16_MIN;
	volatile int16_t x100 = INT16_MAX;

	t24 = (x97+(x98==(x99<=x100)));

	if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 430517685U;
	uint32_t x102 = 1019U;
	uint32_t x103 = 14085U;
	uint32_t x104 = 6268U;

	t25 = (x101+(x102==(x103<=x104)));

	if (t25 != 430517685U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 687;
	uint16_t x106 = UINT16_MAX;
	volatile int64_t x107 = INT64_MIN;
	volatile int32_t t26 = -851901;

	t26 = (x105+(x106==(x107<=x108)));

	if (t26 != 687) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 25980748LLU;
	volatile uint16_t x110 = 6219U;
	uint64_t x111 = 313832LLU;
	int64_t x112 = INT64_MAX;
	uint64_t t27 = 47096770LLU;

	t27 = (x109+(x110==(x111<=x112)));

	if (t27 != 25980748LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 1554475U;
	static int16_t x114 = INT16_MIN;
	int64_t x115 = 6362897612800LL;
	volatile uint32_t t28 = 376U;

	t28 = (x113+(x114==(x115<=x116)));

	if (t28 != 1554475U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x118 = 1;
	int64_t x119 = INT64_MAX;
	static int64_t x120 = -1LL;
	uint32_t t29 = UINT32_MAX;

	t29 = (x117+(x118==(x119<=x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static uint64_t x122 = 596532698LLU;
	volatile uint16_t x124 = UINT16_MAX;

	t30 = (x121+(x122==(x123<=x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x128 = 3574U;
	volatile int64_t t31 = -9931050292LL;

	t31 = (x125+(x126==(x127<=x128)));

	if (t31 != 4720398LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	static uint32_t x131 = 3506928U;
	uint8_t x132 = 1U;
	int32_t t32 = 38;

	t32 = (x129+(x130==(x131<=x132)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static uint64_t x134 = 51000223397629736LLU;
	static uint32_t x135 = 556U;
	int64_t x136 = INT64_MAX;
	volatile int32_t t33 = INT32_MIN;

	t33 = (x133+(x134==(x135<=x136)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint16_t x138 = 2564U;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 8458U;
	static int32_t t34 = 4505;

	t34 = (x137+(x138==(x139<=x140)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 0;
	int32_t x142 = 2;
	int8_t x143 = -1;
	int16_t x144 = -1;
	static int32_t t35 = -2902;

	t35 = (x141+(x142==(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = -25;
	static int64_t x148 = INT64_MIN;

	t36 = (x145+(x146==(x147<=x148)));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x149 = 24U;
	int8_t x150 = INT8_MAX;
	static volatile int64_t x152 = 0LL;
	static volatile int32_t t37 = -3928620;

	t37 = (x149+(x150==(x151<=x152)));

	if (t37 != 24) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x154 = 6U;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = 7LLU;

	t38 = (x153+(x154==(x155<=x156)));

	if (t38 != 2219LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MIN;

	t39 = (x157+(x158==(x159<=x160)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = 10;
	static int8_t x162 = 1;
	int8_t x163 = 0;
	volatile int32_t t40 = -215774;

	t40 = (x161+(x162==(x163<=x164)));

	if (t40 != 11) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint16_t x166 = 23517U;
	uint64_t x167 = 226804LLU;
	uint8_t x168 = UINT8_MAX;
	static volatile int32_t t41 = 29590;

	t41 = (x165+(x166==(x167<=x168)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = INT16_MIN;
	uint8_t x172 = 7U;
	uint64_t t42 = UINT64_MAX;

	t42 = (x169+(x170==(x171<=x172)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	uint8_t x175 = 15U;
	volatile uint32_t x176 = UINT32_MAX;
	volatile int32_t t43 = -3813850;

	t43 = (x173+(x174==(x175<=x176)));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	int32_t x178 = -1;
	static int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	uint32_t t44 = UINT32_MAX;

	t44 = (x177+(x178==(x179<=x180)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -3;
	int16_t x183 = INT16_MIN;
	int64_t x184 = -1LL;
	static int32_t t45 = -2;

	t45 = (x181+(x182==(x183<=x184)));

	if (t45 != -3) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x186 = INT64_MIN;
	int16_t x187 = -20;
	int32_t x188 = -836755;
	int32_t t46 = 340241;

	t46 = (x185+(x186==(x187<=x188)));

	if (t46 != -5) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 663113U;
	static int32_t x191 = -1;
	volatile uint32_t t47 = 24U;

	t47 = (x189+(x190==(x191<=x192)));

	if (t47 != 663113U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -4;
	uint32_t x194 = UINT32_MAX;
	uint32_t x195 = 47627091U;
	static int32_t x196 = -1;
	int32_t t48 = 442;

	t48 = (x193+(x194==(x195<=x196)));

	if (t48 != -4) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	int8_t x198 = INT8_MIN;
	uint64_t x199 = 28730804707LLU;
	volatile uint8_t x200 = 5U;
	int32_t t49 = -10497;

	t49 = (x197+(x198==(x199<=x200)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x202 = 3921707752LLU;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -2051094;

	t50 = (x201+(x202==(x203<=x204)));

	if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	int16_t x207 = 1000;
	int32_t x208 = 196;
	static int32_t t51 = INT32_MAX;

	t51 = (x205+(x206==(x207<=x208)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	int64_t x210 = INT64_MIN;
	static int32_t x211 = -1;
	int8_t x212 = 0;
	int64_t t52 = -122532LL;

	t52 = (x209+(x210==(x211<=x212)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MAX;
	uint16_t x216 = 32425U;

	t53 = (x213+(x214==(x215<=x216)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 1980554U;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	int8_t x220 = -18;
	uint32_t t54 = 2U;

	t54 = (x217+(x218==(x219<=x220)));

	if (t54 != 1980554U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x222 = 124U;
	int64_t x223 = INT64_MIN;
	static int16_t x224 = -1;
	int32_t t55 = -1203;

	t55 = (x221+(x222==(x223<=x224)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -1;
	uint8_t x226 = 0U;
	int8_t x227 = INT8_MIN;
	int8_t x228 = -1;

	t56 = (x225+(x226==(x227<=x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 3U;
	uint32_t x231 = 2001388572U;
	int32_t t57 = INT32_MIN;

	t57 = (x229+(x230==(x231<=x232)));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 56481LLU;
	uint8_t x234 = 1U;
	static int64_t x235 = -1LL;
	uint64_t t58 = 183601429360875620LLU;

	t58 = (x233+(x234==(x235<=x236)));

	if (t58 != 56482LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	volatile int64_t x238 = -11407175751686LL;
	int16_t x239 = -1;
	int64_t x240 = 83165LL;
	static int64_t t59 = INT64_MAX;

	t59 = (x237+(x238==(x239<=x240)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = -113359;
	int64_t x244 = -113LL;
	int32_t t60 = 1438849;

	t60 = (x241+(x242==(x243<=x244)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	int8_t x247 = -1;
	uint32_t x248 = UINT32_MAX;

	t61 = (x245+(x246==(x247<=x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x250 = UINT64_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t62 = 7989;

	t62 = (x249+(x250==(x251<=x252)));

	if (t62 != 125) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	uint64_t x254 = UINT64_MAX;
	int32_t x255 = -2468606;
	uint8_t x256 = 40U;
	volatile int32_t t63 = -90;

	t63 = (x253+(x254==(x255<=x256)));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 65U;
	int64_t x258 = -1LL;
	uint16_t x260 = 795U;
	int32_t t64 = -32750;

	t64 = (x257+(x258==(x259<=x260)));

	if (t64 != 65) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 7959777249498278912LLU;
	uint16_t x263 = UINT16_MAX;
	static uint8_t x264 = UINT8_MAX;
	volatile int64_t t65 = INT64_MAX;

	t65 = (x261+(x262==(x263<=x264)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	volatile int16_t x266 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x265+(x266==(x267<=x268)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 0U;
	int8_t x270 = INT8_MIN;
	static int8_t x271 = -1;
	int64_t x272 = -1LL;

	t67 = (x269+(x270==(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 12U;
	volatile uint64_t x274 = UINT64_MAX;
	uint64_t x275 = UINT64_MAX;
	uint16_t x276 = 0U;
	int32_t t68 = -3;

	t68 = (x273+(x274==(x275<=x276)));

	if (t68 != 12) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -239;
	uint8_t x278 = 1U;
	int64_t x279 = 1LL;

	t69 = (x277+(x278==(x279<=x280)));

	if (t69 != -238) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1019;
	int8_t x282 = INT8_MAX;
	volatile int16_t x283 = -8527;
	uint8_t x284 = UINT8_MAX;
	int32_t t70 = 383;

	t70 = (x281+(x282==(x283<=x284)));

	if (t70 != -1019) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = -1;
	int32_t x286 = -1;
	int8_t x287 = 17;
	static int64_t x288 = -989768LL;
	volatile int32_t t71 = -908767;

	t71 = (x285+(x286==(x287<=x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = UINT16_MAX;
	uint8_t x291 = UINT8_MAX;
	uint32_t t72 = 4893U;

	t72 = (x289+(x290==(x291<=x292)));

	if (t72 != 78700U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	static int32_t x294 = INT32_MAX;
	static volatile int32_t t73 = INT32_MIN;

	t73 = (x293+(x294==(x295<=x296)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MAX;
	int32_t x300 = INT32_MIN;
	static volatile int64_t t74 = -164794572274LL;

	t74 = (x297+(x298==(x299<=x300)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 52U;
	uint32_t x302 = 76994566U;
	static int32_t x303 = INT32_MIN;
	int8_t x304 = 17;
	int32_t t75 = 24;

	t75 = (x301+(x302==(x303<=x304)));

	if (t75 != 52) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 25;
	int64_t x307 = INT64_MIN;
	int32_t x308 = 1907758;
	int32_t t76 = 1043234462;

	t76 = (x305+(x306==(x307<=x308)));

	if (t76 != 25) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 12;
	int16_t x310 = 1;
	static int16_t x311 = INT16_MAX;
	volatile int8_t x312 = -1;
	volatile int32_t t77 = -483475481;

	t77 = (x309+(x310==(x311<=x312)));

	if (t77 != 12) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	uint32_t x314 = 26703991U;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = 11796;

	t78 = (x313+(x314==(x315<=x316)));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 58483640570730LLU;
	volatile uint64_t x318 = 65212LLU;
	uint8_t x320 = 1U;
	uint64_t t79 = 556345773996872101LLU;

	t79 = (x317+(x318==(x319<=x320)));

	if (t79 != 58483640570730LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 24814U;
	int8_t x322 = -1;
	static uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MAX;

	t80 = (x321+(x322==(x323<=x324)));

	if (t80 != 24814) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = -1LL;
	static int16_t x327 = INT16_MAX;
	int16_t x328 = 49;
	volatile int32_t t81 = -1643;

	t81 = (x325+(x326==(x327<=x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 322464U;
	int8_t x331 = 1;
	uint32_t x332 = UINT32_MAX;
	uint32_t t82 = 98702340U;

	t82 = (x329+(x330==(x331<=x332)));

	if (t82 != 322464U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = -1;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -1617;

	t83 = (x333+(x334==(x335<=x336)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = 32U;
	static int32_t x338 = -1;
	int16_t x339 = -1;
	static int64_t x340 = INT64_MAX;
	int32_t t84 = -133748;

	t84 = (x337+(x338==(x339<=x340)));

	if (t84 != 32) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 446074LL;
	volatile int8_t x344 = -1;
	static int64_t t85 = -87625808147LL;

	t85 = (x341+(x342==(x343<=x344)));

	if (t85 != 446074LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile int32_t x346 = 1491132;
	static int16_t x347 = -370;
	int32_t t86 = 0;

	t86 = (x345+(x346==(x347<=x348)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 21U;
	int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 15;

	t87 = (x349+(x350==(x351<=x352)));

	if (t87 != 21) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	static int64_t x354 = -1LL;
	int16_t x355 = INT16_MIN;
	volatile int32_t t88 = -233893;

	t88 = (x353+(x354==(x355<=x356)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = -1;
	int32_t x359 = -10562494;
	uint16_t x360 = 1U;

	t89 = (x357+(x358==(x359<=x360)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 396U;
	int32_t x364 = INT32_MAX;
	static int32_t t90 = -24146697;

	t90 = (x361+(x362==(x363<=x364)));

	if (t90 != 396) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = UINT16_MAX;
	uint32_t x366 = UINT32_MAX;
	int16_t x367 = 2723;
	int32_t x368 = -115579;
	volatile int32_t t91 = 55120741;

	t91 = (x365+(x366==(x367<=x368)));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 770U;
	int32_t x370 = INT32_MAX;
	int64_t x371 = INT64_MAX;
	int16_t x372 = -11;
	static volatile uint32_t t92 = 20U;

	t92 = (x369+(x370==(x371<=x372)));

	if (t92 != 770U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 1130252LLU;
	int64_t x374 = 652923220534183LL;
	static int32_t x375 = -3;
	int32_t x376 = INT32_MIN;
	uint64_t t93 = 10214LLU;

	t93 = (x373+(x374==(x375<=x376)));

	if (t93 != 1130252LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = 48U;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = 14;

	t94 = (x377+(x378==(x379<=x380)));

	if (t94 != -18080419) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x382 = INT32_MIN;
	volatile uint64_t x383 = 291038716775408LLU;
	uint16_t x384 = 14U;
	int64_t t95 = INT64_MIN;

	t95 = (x381+(x382==(x383<=x384)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 139782;
	volatile int64_t x386 = INT64_MAX;
	static int16_t x388 = INT16_MAX;
	volatile int32_t t96 = 105730739;

	t96 = (x385+(x386==(x387<=x388)));

	if (t96 != 139782) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -2;
	int64_t x391 = -1LL;
	int16_t x392 = -1;
	volatile int32_t t97 = 14;

	t97 = (x389+(x390==(x391<=x392)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 1074LLU;
	int32_t x394 = INT32_MAX;
	int16_t x396 = INT16_MAX;
	uint64_t t98 = 0LLU;

	t98 = (x393+(x394==(x395<=x396)));

	if (t98 != 1074LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 1798250818U;
	int8_t x398 = INT8_MIN;
	static uint16_t x400 = 646U;
	uint32_t t99 = 65806659U;

	t99 = (x397+(x398==(x399<=x400)));

	if (t99 != 1798250818U) { NG(); } else { ; }
	
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

