#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
int64_t t0 = -279470281566550875LL;
volatile int8_t x5 = -1;
volatile uint8_t x6 = UINT8_MAX;
uint64_t x17 = UINT64_MAX;
static int64_t x20 = -1LL;
int64_t t4 = 95LL;
static volatile int32_t t5 = -105;
uint32_t x34 = 32966567U;
volatile uint32_t t8 = 244U;
uint8_t x37 = 6U;
uint64_t t9 = 82158151392LLU;
static int8_t x41 = INT8_MAX;
uint32_t x51 = UINT32_MAX;
int64_t x56 = 107824544573LL;
uint8_t x58 = UINT8_MAX;
uint16_t x60 = UINT16_MAX;
int32_t t14 = 86309;
volatile uint16_t x65 = UINT16_MAX;
int32_t t15 = 573581218;
int64_t x69 = -41511206217183295LL;
static int8_t x83 = -1;
int16_t x84 = -138;
int32_t x85 = INT32_MIN;
static int32_t x91 = 96;
int32_t t21 = 874;
int32_t x96 = INT32_MIN;
int32_t x99 = -1;
volatile int32_t x100 = INT32_MAX;
int64_t t25 = 4576LL;
int32_t x118 = -5;
int32_t t27 = 968051663;
volatile int16_t x121 = INT16_MIN;
uint8_t x127 = 3U;
int64_t x130 = INT64_MIN;
static int64_t x133 = INT64_MIN;
uint32_t t31 = 7497U;
int32_t x140 = INT32_MIN;
uint8_t x144 = UINT8_MAX;
int32_t x147 = 1553;
int32_t x149 = INT32_MIN;
uint32_t x151 = UINT32_MAX;
int32_t x158 = INT32_MAX;
uint32_t x159 = UINT32_MAX;
int64_t x169 = INT64_MIN;
static uint64_t x171 = UINT64_MAX;
static int32_t t41 = 3187;
uint16_t x183 = UINT16_MAX;
uint64_t x189 = 3617852933997063306LLU;
int64_t t44 = -11744LL;
int32_t t45 = 22;
uint16_t x206 = UINT16_MAX;
static int64_t x210 = INT64_MIN;
int64_t t49 = 24657835LL;
static int16_t x217 = INT16_MAX;
volatile int16_t x226 = INT16_MIN;
int64_t x227 = INT64_MIN;
volatile uint64_t t52 = 10LLU;
volatile uint32_t x229 = UINT32_MAX;
uint8_t x230 = 97U;
uint32_t x235 = UINT32_MAX;
volatile int32_t x246 = INT32_MAX;
int16_t x248 = INT16_MIN;
int32_t t57 = 81;
uint64_t x253 = 399409182LLU;
int32_t t59 = -157421798;
int8_t x257 = INT8_MIN;
static int64_t x263 = -10LL;
static int64_t x267 = -1LL;
int64_t t63 = -18495060165LL;
static uint32_t x275 = 316292U;
uint16_t x279 = 11U;
volatile uint64_t x280 = UINT64_MAX;
volatile uint8_t x288 = UINT8_MAX;
static volatile uint64_t x291 = 2LLU;
int16_t x292 = INT16_MIN;
int16_t x299 = -358;
int32_t t70 = 1576857;
volatile int32_t x310 = 10;
static int32_t x314 = INT32_MAX;
static uint64_t x315 = 64899540LLU;
int16_t x316 = 1;
volatile uint64_t t73 = 53212LLU;
int32_t x324 = 40393434;
int8_t x331 = 2;
int8_t x332 = -1;
static volatile int64_t x334 = INT64_MIN;
volatile int64_t t78 = 346940LL;
uint64_t x346 = 563LLU;
int16_t x348 = -1;
volatile int64_t t80 = -2526LL;
static int16_t x353 = INT16_MAX;
uint16_t x362 = 15U;
int32_t x378 = 42410;
static int8_t x382 = 3;
int8_t x384 = INT8_MIN;
static volatile int64_t x389 = -1LL;
static volatile uint32_t x393 = 643724627U;
volatile int32_t x395 = INT32_MAX;
volatile int64_t x399 = -1LL;
volatile uint32_t x402 = UINT32_MAX;
int32_t x403 = -26058615;
uint64_t t93 = 500LLU;
volatile int32_t t95 = -2729;
int8_t x417 = 0;
int64_t t96 = -27648156376LL;
uint64_t x428 = UINT64_MAX;
static uint16_t x430 = 392U;
volatile int8_t x431 = -1;
int16_t x438 = -258;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int64_t x3 = 462494LL;
	int8_t x4 = INT8_MAX;

	t0 = (((x1<=x2)%x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = -1;
	static uint32_t x8 = 5077312U;
	uint32_t t1 = 396440449U;

	t1 = (((x5<=x6)%x7)/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 39U;
	volatile uint8_t x10 = 74U;
	uint32_t x11 = 18259U;
	static volatile int16_t x12 = INT16_MIN;
	volatile uint32_t t2 = 414U;

	t2 = (((x9<=x10)%x11)/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -100;
	int64_t x14 = -1LL;
	uint32_t x15 = 12206960U;
	int64_t x16 = -1LL;
	static int64_t t3 = 128721356LL;

	t3 = (((x13<=x14)%x15)/x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;

	t4 = (((x17<=x18)%x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 11U;
	uint8_t x22 = UINT8_MAX;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;

	t5 = (((x21<=x22)%x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -344319;
	volatile uint32_t x26 = 0U;
	static int8_t x27 = INT8_MIN;
	int16_t x28 = 5137;
	int32_t t6 = 1232751;

	t6 = (((x25<=x26)%x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static int8_t x30 = INT8_MAX;
	int16_t x31 = -149;
	int32_t x32 = INT32_MAX;
	int32_t t7 = -1;

	t7 = (((x29<=x30)%x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 333U;
	uint32_t x35 = 124219U;
	int32_t x36 = INT32_MAX;

	t8 = (((x33<=x34)%x35)/x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MAX;
	uint64_t x40 = 2607003009LLU;

	t9 = (((x37<=x38)%x39)/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = INT8_MIN;
	volatile int8_t x43 = INT8_MAX;
	static uint64_t x44 = 42093405543660LLU;
	uint64_t t10 = 5236180635908040LLU;

	t10 = (((x41<=x42)%x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	uint16_t x50 = UINT16_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	static uint32_t t11 = 14275U;

	t11 = (((x49<=x50)%x51)/x52);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int32_t x54 = INT32_MIN;
	static int32_t x55 = INT32_MIN;
	int64_t t12 = 31219923LL;

	t12 = (((x53<=x54)%x55)/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	volatile uint32_t x59 = 128533372U;
	volatile uint32_t t13 = 1U;

	t13 = (((x57<=x58)%x59)/x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = -1418479617LL;
	volatile int64_t x62 = -1LL;
	volatile int8_t x63 = INT8_MAX;
	int16_t x64 = -1;

	t14 = (((x61<=x62)%x63)/x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = INT32_MAX;
	static int16_t x67 = 168;
	int16_t x68 = -1;

	t15 = (((x65<=x66)%x67)/x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = -15385598LL;
	uint64_t x71 = 84610LLU;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t16 = 41228LLU;

	t16 = (((x69<=x70)%x71)/x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MAX;
	uint8_t x74 = 11U;
	int64_t x75 = INT64_MIN;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int64_t t17 = 2LL;

	t17 = (((x73<=x74)%x75)/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	static int16_t x78 = -149;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = -51;
	volatile uint32_t t18 = 7682U;

	t18 = (((x77<=x78)%x79)/x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	volatile int32_t x82 = 13163717;
	int32_t t19 = 757040;

	t19 = (((x81<=x82)%x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x86 = UINT8_MAX;
	int8_t x87 = 1;
	static uint32_t x88 = 539145877U;
	static uint32_t t20 = 8U;

	t20 = (((x85<=x86)%x87)/x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 78U;
	int16_t x92 = INT16_MIN;

	t21 = (((x89<=x90)%x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 15;
	volatile uint32_t x94 = 10U;
	volatile int32_t x95 = INT32_MIN;
	int32_t t22 = 126547989;

	t22 = (((x93<=x94)%x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MAX;
	int16_t x98 = -2506;
	static volatile int32_t t23 = 934;

	t23 = (((x97<=x98)%x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	int16_t x102 = 2642;
	uint8_t x103 = UINT8_MAX;
	static volatile int32_t x104 = INT32_MIN;
	volatile int32_t t24 = -72359793;

	t24 = (((x101<=x102)%x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 0;
	static uint16_t x110 = 1U;
	volatile int64_t x111 = INT64_MAX;
	static volatile int64_t x112 = -110900905716LL;

	t25 = (((x109<=x110)%x111)/x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 277132030209896LLU;
	int16_t x115 = INT16_MIN;
	int8_t x116 = -1;
	volatile int32_t t26 = -46;

	t26 = (((x113<=x114)%x115)/x116);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	static int8_t x119 = -1;
	static uint16_t x120 = UINT16_MAX;

	t27 = (((x117<=x118)%x119)/x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = INT16_MIN;
	uint8_t x123 = UINT8_MAX;
	uint16_t x124 = 31U;
	int32_t t28 = 11427209;

	t28 = (((x121<=x122)%x123)/x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	static volatile int8_t x126 = -1;
	int8_t x128 = -1;
	int32_t t29 = -13570861;

	t29 = (((x125<=x126)%x127)/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	volatile uint16_t x131 = 2U;
	int64_t x132 = -41154LL;
	int64_t t30 = -7971361170137952LL;

	t30 = (((x129<=x130)%x131)/x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x134 = UINT8_MAX;
	static uint32_t x135 = UINT32_MAX;
	uint32_t x136 = 21085U;

	t31 = (((x133<=x134)%x135)/x136);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = -1;
	static int32_t x138 = INT32_MIN;
	int32_t x139 = -1000;
	int32_t t32 = -58485902;

	t32 = (((x137<=x138)%x139)/x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x141 = INT16_MAX;
	int16_t x142 = 1106;
	volatile uint64_t x143 = UINT64_MAX;
	uint64_t t33 = 2269454LLU;

	t33 = (((x141<=x142)%x143)/x144);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -1;
	static int32_t x146 = -1;
	int32_t x148 = INT32_MAX;
	int32_t t34 = 1512;

	t34 = (((x145<=x146)%x147)/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x150 = 44;
	volatile uint8_t x152 = UINT8_MAX;
	uint32_t t35 = 15U;

	t35 = (((x149<=x150)%x151)/x152);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = 416810;
	uint32_t x155 = 83809U;
	int16_t x156 = INT16_MAX;
	static volatile uint32_t t36 = 164766U;

	t36 = (((x153<=x154)%x155)/x156);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x157 = -1;
	volatile int16_t x160 = -1;
	volatile uint32_t t37 = 5640201U;

	t37 = (((x157<=x158)%x159)/x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = 883804373;
	uint32_t x166 = 280U;
	int64_t x167 = -1LL;
	volatile uint16_t x168 = 592U;
	static volatile int64_t t38 = -8570224598627LL;

	t38 = (((x165<=x166)%x167)/x168);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x170 = -8LL;
	static int8_t x172 = 33;
	static uint64_t t39 = 159LLU;

	t39 = (((x169<=x170)%x171)/x172);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x173 = INT8_MAX;
	int16_t x174 = -1;
	uint8_t x175 = UINT8_MAX;
	int16_t x176 = -1;
	int32_t t40 = 20305578;

	t40 = (((x173<=x174)%x175)/x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 110U;
	uint8_t x179 = 25U;
	volatile int16_t x180 = -1;

	t41 = (((x177<=x178)%x179)/x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = INT32_MIN;
	int8_t x182 = -1;
	int64_t x184 = INT64_MAX;
	int64_t t42 = 419711394171LL;

	t42 = (((x181<=x182)%x183)/x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -1LL;
	static volatile uint32_t x186 = 5U;
	int16_t x187 = INT16_MAX;
	uint16_t x188 = 25U;
	volatile int32_t t43 = -58876418;

	t43 = (((x185<=x186)%x187)/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = -27LL;

	t44 = (((x189<=x190)%x191)/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = 1;
	uint16_t x198 = 125U;
	static int8_t x199 = INT8_MAX;
	int8_t x200 = -58;

	t45 = (((x197<=x198)%x199)/x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = 906LL;
	int8_t x202 = INT8_MAX;
	static uint32_t x203 = 93048824U;
	int8_t x204 = -19;
	static uint32_t t46 = 18962263U;

	t46 = (((x201<=x202)%x203)/x204);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x207 = INT32_MIN;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t47 = -93;

	t47 = (((x205<=x206)%x207)/x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 7U;
	uint16_t x211 = UINT16_MAX;
	int64_t x212 = -1979963112276LL;
	volatile int64_t t48 = -54976371LL;

	t48 = (((x209<=x210)%x211)/x212);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MAX;
	static volatile int32_t x214 = -1;
	static int64_t x215 = INT64_MAX;
	uint32_t x216 = UINT32_MAX;

	t49 = (((x213<=x214)%x215)/x216);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x218 = 287;
	volatile uint16_t x219 = 4U;
	uint8_t x220 = UINT8_MAX;
	int32_t t50 = -101000718;

	t50 = (((x217<=x218)%x219)/x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 27467U;
	volatile int32_t x222 = -827;
	int64_t x223 = 1814431839248043LL;
	uint32_t x224 = UINT32_MAX;
	int64_t t51 = -64893995797LL;

	t51 = (((x221<=x222)%x223)/x224);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x228 = 804693716419720438LLU;

	t52 = (((x225<=x226)%x227)/x228);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x231 = 2LLU;
	volatile int32_t x232 = -2;
	uint64_t t53 = 19LLU;

	t53 = (((x229<=x230)%x231)/x232);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x233 = INT8_MIN;
	uint32_t x234 = 1357430614U;
	int32_t x236 = INT32_MIN;
	volatile uint32_t t54 = 617987U;

	t54 = (((x233<=x234)%x235)/x236);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x237 = 25101094U;
	volatile int64_t x238 = INT64_MIN;
	int8_t x239 = -11;
	volatile uint64_t x240 = UINT64_MAX;
	volatile uint64_t t55 = 18297356769123LLU;

	t55 = (((x237<=x238)%x239)/x240);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = -1;
	static volatile int64_t x243 = INT64_MIN;
	uint16_t x244 = 373U;
	static int64_t t56 = 2LL;

	t56 = (((x241<=x242)%x243)/x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = INT32_MAX;
	uint16_t x247 = 7525U;

	t57 = (((x245<=x246)%x247)/x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x249 = -1;
	volatile uint64_t x250 = 7053644361922655745LLU;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t58 = -12536316;

	t58 = (((x249<=x250)%x251)/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MAX;

	t59 = (((x253<=x254)%x255)/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x258 = UINT64_MAX;
	int64_t x259 = -199335472LL;
	uint64_t x260 = 432LLU;
	static uint64_t t60 = 13317019938LLU;

	t60 = (((x257<=x258)%x259)/x260);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MAX;
	int64_t x262 = INT64_MAX;
	int8_t x264 = 1;
	volatile int64_t t61 = -78023339911LL;

	t61 = (((x261<=x262)%x263)/x264);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x265 = -1LL;
	int16_t x266 = INT16_MIN;
	static uint8_t x268 = 1U;
	volatile int64_t t62 = -1905LL;

	t62 = (((x265<=x266)%x267)/x268);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x269 = 13304U;
	uint16_t x270 = UINT16_MAX;
	int64_t x271 = INT64_MAX;
	int16_t x272 = 1;

	t63 = (((x269<=x270)%x271)/x272);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x274 = 891984U;
	volatile int32_t x276 = -1;
	uint32_t t64 = 58U;

	t64 = (((x273<=x274)%x275)/x276);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = -50;
	static volatile int32_t x278 = INT32_MAX;
	uint64_t t65 = 11195375209LLU;

	t65 = (((x277<=x278)%x279)/x280);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	volatile int32_t t66 = 0;

	t66 = (((x285<=x286)%x287)/x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = -1801;
	int16_t x290 = INT16_MIN;
	uint64_t t67 = 18960047198699LLU;

	t67 = (((x289<=x290)%x291)/x292);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	uint32_t x294 = UINT32_MAX;
	uint32_t x295 = 1U;
	static int32_t x296 = -13;
	static uint32_t t68 = 239537U;

	t68 = (((x293<=x294)%x295)/x296);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = 14;
	volatile int16_t x298 = 0;
	volatile int64_t x300 = 123751LL;
	int64_t t69 = 1778419960795LL;

	t69 = (((x297<=x298)%x299)/x300);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = 6148LL;
	volatile int16_t x302 = INT16_MIN;
	int32_t x303 = -683115;
	static volatile int32_t x304 = -1;

	t70 = (((x301<=x302)%x303)/x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x305 = 3934;
	int64_t x306 = 74174100LL;
	int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t71 = -5;

	t71 = (((x305<=x306)%x307)/x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x311 = 4770678U;
	uint64_t x312 = 66904810264LLU;
	static volatile uint64_t t72 = 4313675104564LLU;

	t72 = (((x309<=x310)%x311)/x312);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x313 = UINT8_MAX;

	t73 = (((x313<=x314)%x315)/x316);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x321 = -176990LL;
	uint8_t x322 = 0U;
	uint32_t x323 = 23235955U;
	volatile uint32_t t74 = 0U;

	t74 = (((x321<=x322)%x323)/x324);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MAX;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	static int32_t t75 = 1484895;

	t75 = (((x325<=x326)%x327)/x328);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x330 = UINT64_MAX;
	volatile int32_t t76 = 26074;

	t76 = (((x329<=x330)%x331)/x332);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = 13054;
	static volatile int8_t x335 = -2;
	static uint8_t x336 = 100U;
	static volatile int32_t t77 = -271572086;

	t77 = (((x333<=x334)%x335)/x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = -1;
	volatile uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MIN;

	t78 = (((x337<=x338)%x339)/x340);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = -1LL;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t79 = -9268;

	t79 = (((x341<=x342)%x343)/x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x345 = 262688553781LLU;
	static volatile int64_t x347 = INT64_MAX;

	t80 = (((x345<=x346)%x347)/x348);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x354 = 212700U;
	static volatile uint64_t x355 = 228622032507554892LLU;
	volatile uint32_t x356 = 338883U;
	uint64_t t81 = 1142LLU;

	t81 = (((x353<=x354)%x355)/x356);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = -8327LL;
	volatile uint64_t x359 = 57894956408544LLU;
	static uint64_t x360 = UINT64_MAX;
	static volatile uint64_t t82 = 1653158890LLU;

	t82 = (((x357<=x358)%x359)/x360);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x361 = 1U;
	int16_t x363 = INT16_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t83 = -965;

	t83 = (((x361<=x362)%x363)/x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x365 = INT16_MIN;
	int16_t x366 = -1;
	int32_t x367 = INT32_MIN;
	int64_t x368 = -1826645LL;
	volatile int64_t t84 = -273681007LL;

	t84 = (((x365<=x366)%x367)/x368);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x373 = UINT64_MAX;
	static uint32_t x374 = 724160954U;
	static int64_t x375 = 8735518LL;
	volatile uint64_t x376 = UINT64_MAX;
	uint64_t t85 = 6570505012337477LLU;

	t85 = (((x373<=x374)%x375)/x376);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x377 = -1;
	int8_t x379 = -10;
	int64_t x380 = INT64_MIN;
	volatile int64_t t86 = -5178916634LL;

	t86 = (((x377<=x378)%x379)/x380);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = -1LL;
	uint64_t x383 = 7995962738003LLU;
	static volatile uint64_t t87 = 473818747LLU;

	t87 = (((x381<=x382)%x383)/x384);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x385 = INT64_MIN;
	int16_t x386 = 0;
	volatile uint32_t x387 = 227709U;
	volatile int32_t x388 = 93984578;
	uint32_t t88 = 2283U;

	t88 = (((x385<=x386)%x387)/x388);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x390 = -7173736290224LL;
	uint16_t x391 = UINT16_MAX;
	volatile int32_t x392 = 29925491;
	int32_t t89 = 10;

	t89 = (((x389<=x390)%x391)/x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x394 = INT32_MIN;
	int16_t x396 = INT16_MAX;
	static int32_t t90 = 149855867;

	t90 = (((x393<=x394)%x395)/x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 2LLU;
	uint16_t x398 = 0U;
	int16_t x400 = INT16_MIN;
	int64_t t91 = -5855868006179LL;

	t91 = (((x397<=x398)%x399)/x400);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 378959045311468794LLU;
	int16_t x404 = INT16_MIN;
	static int32_t t92 = 4;

	t92 = (((x401<=x402)%x403)/x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = -105;
	int64_t x407 = 2001749368LL;
	static uint64_t x408 = 861LLU;

	t93 = (((x405<=x406)%x407)/x408);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x409 = 138839590047745LLU;
	int64_t x410 = INT64_MIN;
	static int16_t x411 = -1;
	uint16_t x412 = 2U;
	volatile int32_t t94 = 1178;

	t94 = (((x409<=x410)%x411)/x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = INT32_MIN;
	uint8_t x414 = 62U;
	int16_t x415 = -1;
	int16_t x416 = INT16_MIN;

	t95 = (((x413<=x414)%x415)/x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x418 = -46;
	int64_t x419 = -4551245LL;
	int16_t x420 = INT16_MIN;

	t96 = (((x417<=x418)%x419)/x420);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = INT16_MIN;
	static int64_t x426 = INT64_MIN;
	volatile int64_t x427 = -1LL;
	volatile uint64_t t97 = 51239184929LLU;

	t97 = (((x425<=x426)%x427)/x428);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x429 = -6;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t98 = 1;

	t98 = (((x429<=x430)%x431)/x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = 0;
	uint64_t x439 = 1503469108270215LLU;
	int32_t x440 = INT32_MIN;
	volatile uint64_t t99 = 9983170665297694LLU;

	t99 = (((x437<=x438)%x439)/x440);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

