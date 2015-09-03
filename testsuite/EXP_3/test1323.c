#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -79500;
int8_t x5 = INT8_MAX;
uint64_t x8 = 6690787591738LLU;
volatile int64_t x11 = INT64_MAX;
static int8_t x17 = -48;
static volatile uint8_t x22 = 8U;
uint64_t x25 = 184586251654288535LLU;
uint8_t x26 = UINT8_MAX;
int32_t x29 = INT32_MAX;
int32_t x30 = INT32_MAX;
volatile int32_t t7 = 2210779;
int16_t x34 = -27;
int64_t x39 = 18387921891058879LL;
int64_t x40 = INT64_MAX;
int64_t x45 = INT64_MIN;
uint16_t x49 = UINT16_MAX;
int16_t x51 = INT16_MAX;
static uint64_t x53 = UINT64_MAX;
static int64_t x54 = INT64_MIN;
uint16_t x60 = UINT16_MAX;
static volatile int16_t x67 = -1144;
uint8_t x71 = 0U;
int32_t t18 = -342327;
uint8_t x81 = UINT8_MAX;
int32_t x103 = 326;
static int32_t t25 = -1;
int64_t x106 = -1LL;
volatile uint64_t x108 = 2725LLU;
volatile int32_t t26 = 3354;
volatile int16_t x125 = -3;
int32_t x129 = -129602824;
int8_t x134 = -1;
static int16_t x135 = INT16_MAX;
int32_t t33 = 32449;
int32_t x152 = 1493456;
uint8_t x154 = 2U;
volatile int32_t x164 = INT32_MIN;
uint8_t x169 = UINT8_MAX;
volatile int64_t x172 = INT64_MIN;
volatile int32_t t46 = 3682;
uint32_t x192 = 471001548U;
int32_t t47 = 295;
static int64_t x193 = INT64_MIN;
volatile int32_t t48 = -311;
int64_t x199 = INT64_MAX;
int16_t x200 = 6;
volatile int32_t t51 = 40734872;
volatile int16_t x211 = -13142;
int32_t x216 = INT32_MIN;
volatile int32_t t53 = 0;
int8_t x224 = -15;
int64_t x231 = -1LL;
int32_t t57 = -84857372;
int32_t t58 = -14477;
uint8_t x241 = UINT8_MAX;
int32_t x243 = 1;
int32_t t60 = 221209607;
volatile int16_t x249 = -2;
int8_t x259 = INT8_MIN;
int8_t x264 = 23;
uint32_t x268 = 156385071U;
volatile int32_t t66 = 973571;
int16_t x272 = INT16_MAX;
static volatile int64_t x273 = -1LL;
int8_t x281 = INT8_MIN;
int32_t t71 = 325433;
int32_t t72 = 36;
int8_t x293 = INT8_MIN;
volatile int32_t t74 = -53494603;
int16_t x302 = INT16_MIN;
static int32_t x304 = 811754302;
int32_t t75 = -2298124;
uint8_t x305 = UINT8_MAX;
static int32_t x307 = -1;
int32_t x317 = -1;
int32_t t80 = 5007;
static volatile int32_t t82 = -525592258;
int8_t x342 = INT8_MIN;
static uint64_t x359 = 182LLU;
uint32_t x361 = 684U;
int32_t x363 = -1;
uint16_t x366 = 0U;
volatile int32_t t92 = -67416;
static volatile int64_t x374 = INT64_MAX;
int8_t x383 = INT8_MAX;
volatile uint16_t x387 = 5U;
static int64_t x392 = -1LL;
uint16_t x397 = 835U;
int8_t x400 = INT8_MIN;


void f0(void) {
	int32_t x1 = -1;
	static uint16_t x2 = UINT16_MAX;
	int32_t x3 = INT32_MIN;
	volatile int64_t x4 = -570046651076024977LL;

	t0 = ((x1&x2)<=(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	int8_t x7 = INT8_MAX;
	int32_t t1 = 28588;

	t1 = ((x5&x6)<=(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = INT16_MIN;
	static int64_t x12 = -511LL;
	int32_t t2 = 118113189;

	t2 = ((x9&x10)<=(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 3U;
	uint32_t x14 = 26U;
	int64_t x15 = INT64_MIN;
	static uint8_t x16 = 43U;
	volatile int32_t t3 = 365466017;

	t3 = ((x13&x14)<=(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MAX;
	volatile uint16_t x19 = 12562U;
	uint32_t x20 = 827U;
	int32_t t4 = -208049;

	t4 = ((x17&x18)<=(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 1;
	volatile int8_t x23 = INT8_MAX;
	volatile int64_t x24 = INT64_MAX;
	volatile int32_t t5 = -11755;

	t5 = ((x21&x22)<=(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x27 = INT32_MIN;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 527512059;

	t6 = ((x25&x26)<=(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = -27;
	uint32_t x32 = UINT32_MAX;

	t7 = ((x29&x30)<=(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int8_t x35 = -1;
	int8_t x36 = -21;
	volatile int32_t t8 = 5;

	t8 = ((x33&x34)<=(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MIN;
	volatile int32_t t9 = -42161;

	t9 = ((x37&x38)<=(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 370445489LLU;
	uint32_t x42 = UINT32_MAX;
	int32_t x43 = -1337;
	static uint32_t x44 = 48165870U;
	volatile int32_t t10 = 114000163;

	t10 = ((x41&x42)<=(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -1LL;
	int32_t x47 = -1;
	volatile int32_t x48 = INT32_MAX;
	volatile int32_t t11 = 381337410;

	t11 = ((x45&x46)<=(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x50 = 248U;
	static uint16_t x52 = 130U;
	int32_t t12 = 13;

	t12 = ((x49&x50)<=(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = INT16_MAX;
	uint16_t x56 = 3830U;
	volatile int32_t t13 = 297609;

	t13 = ((x53&x54)<=(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 1;
	static int64_t x58 = INT64_MAX;
	static int64_t x59 = -1LL;
	int32_t t14 = 12;

	t14 = ((x57&x58)<=(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1LLU;
	uint8_t x62 = 4U;
	int8_t x63 = INT8_MIN;
	int64_t x64 = -1LL;
	int32_t t15 = -14;

	t15 = ((x61&x62)<=(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static uint64_t x66 = 84LLU;
	volatile int32_t x68 = INT32_MIN;
	int32_t t16 = -2665790;

	t16 = ((x65&x66)<=(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 211U;
	int32_t x70 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 128149;

	t17 = ((x69&x70)<=(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 0;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 60U;
	uint32_t x76 = 104108596U;

	t18 = ((x73&x74)<=(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 7U;
	int16_t x78 = 100;
	volatile uint16_t x79 = UINT16_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = -8883731;

	t19 = ((x77&x78)<=(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = INT16_MIN;
	uint16_t x83 = 61U;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t20 = 450991;

	t20 = ((x81&x82)<=(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 17;
	int16_t x86 = INT16_MIN;
	int64_t x87 = -1LL;
	static int64_t x88 = INT64_MAX;
	volatile int32_t t21 = 0;

	t21 = ((x85&x86)<=(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = -1LL;
	int32_t x90 = INT32_MAX;
	int32_t x91 = INT32_MAX;
	static uint64_t x92 = 0LLU;
	int32_t t22 = -3381;

	t22 = ((x89&x90)<=(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = 3612U;
	int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = -1;
	volatile int32_t t23 = 7990863;

	t23 = ((x93&x94)<=(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 2U;
	int16_t x98 = INT16_MAX;
	uint8_t x99 = 2U;
	volatile int32_t x100 = -1;
	int32_t t24 = -29378;

	t24 = ((x97&x98)<=(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 16U;
	static uint32_t x102 = UINT32_MAX;
	int16_t x104 = -126;

	t25 = ((x101&x102)<=(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1303649104663LL;
	int16_t x107 = 209;

	t26 = ((x105&x106)<=(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 2131273683LLU;
	int32_t x110 = -1;
	volatile int32_t x111 = -1;
	static int8_t x112 = INT8_MIN;
	int32_t t27 = 0;

	t27 = ((x109&x110)<=(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	volatile int8_t x114 = 41;
	uint8_t x115 = 1U;
	static int16_t x116 = INT16_MAX;
	volatile int32_t t28 = 20940099;

	t28 = ((x113&x114)<=(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -1602490926LL;
	int8_t x118 = INT8_MIN;
	volatile int16_t x119 = -20;
	int64_t x120 = INT64_MIN;
	int32_t t29 = 13;

	t29 = ((x117&x118)<=(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 3713859LLU;
	uint8_t x122 = 1U;
	int64_t x123 = -1589420867400700LL;
	int32_t x124 = 103;
	static volatile int32_t t30 = 852601319;

	t30 = ((x121&x122)<=(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	int32_t x127 = -29166;
	int8_t x128 = -4;
	int32_t t31 = -4055720;

	t31 = ((x125&x126)<=(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = 19;
	uint16_t x131 = UINT16_MAX;
	static uint16_t x132 = UINT16_MAX;
	static volatile int32_t t32 = 245;

	t32 = ((x129&x130)<=(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	uint8_t x136 = 12U;

	t33 = ((x133&x134)<=(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	uint32_t x138 = 200264804U;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 728U;
	volatile int32_t t34 = 81;

	t34 = ((x137&x138)<=(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -222;
	int16_t x142 = INT16_MAX;
	int16_t x143 = INT16_MAX;
	uint8_t x144 = 27U;
	volatile int32_t t35 = -6;

	t35 = ((x141&x142)<=(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MIN;
	int32_t x147 = 667;
	int8_t x148 = -59;
	static volatile int32_t t36 = -27;

	t36 = ((x145&x146)<=(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	uint64_t x150 = 2LLU;
	int8_t x151 = INT8_MAX;
	int32_t t37 = -89091375;

	t37 = ((x149&x150)<=(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static int32_t x155 = INT32_MIN;
	int64_t x156 = 151LL;
	volatile int32_t t38 = 123;

	t38 = ((x153&x154)<=(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 693LL;
	int64_t x158 = INT64_MAX;
	int8_t x159 = 5;
	int8_t x160 = INT8_MIN;
	static int32_t t39 = -19360765;

	t39 = ((x157&x158)<=(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int16_t x162 = -1;
	int16_t x163 = INT16_MAX;
	int32_t t40 = -58734;

	t40 = ((x161&x162)<=(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 20;
	static uint64_t x166 = UINT64_MAX;
	int32_t x167 = 48938;
	int32_t x168 = INT32_MIN;
	int32_t t41 = 286182;

	t41 = ((x165&x166)<=(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -1;
	uint8_t x171 = 67U;
	int32_t t42 = 154;

	t42 = ((x169&x170)<=(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 951722478LLU;
	static uint32_t x174 = UINT32_MAX;
	int32_t x175 = -1;
	static volatile int16_t x176 = -1;
	static int32_t t43 = -552;

	t43 = ((x173&x174)<=(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 24U;
	static uint16_t x178 = 111U;
	int8_t x179 = INT8_MIN;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -601722090;

	t44 = ((x177&x178)<=(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -8308;
	volatile uint16_t x182 = UINT16_MAX;
	volatile uint64_t x183 = 44295174114LLU;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = -63;

	t45 = ((x181&x182)<=(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	static uint16_t x186 = 0U;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;

	t46 = ((x185&x186)<=(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -2;
	static uint8_t x190 = UINT8_MAX;
	int8_t x191 = 4;

	t47 = ((x189&x190)<=(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -1LL;
	uint16_t x195 = UINT16_MAX;
	int32_t x196 = -1;

	t48 = ((x193&x194)<=(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MAX;
	volatile int64_t x198 = -1LL;
	int32_t t49 = 1777;

	t49 = ((x197&x198)<=(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 90U;
	int64_t x202 = -1LL;
	int16_t x203 = -2;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 866661;

	t50 = ((x201&x202)<=(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MAX;
	volatile int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	int64_t x208 = 92LL;

	t51 = ((x205&x206)<=(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = 1;
	static int16_t x210 = INT16_MAX;
	int64_t x212 = INT64_MAX;
	int32_t t52 = 1072616173;

	t52 = ((x209&x210)<=(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	uint64_t x214 = UINT64_MAX;
	int64_t x215 = -14743LL;

	t53 = ((x213&x214)<=(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	uint16_t x218 = 69U;
	int16_t x219 = -1;
	static volatile int32_t x220 = -2;
	volatile int32_t t54 = 41038;

	t54 = ((x217&x218)<=(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = -12199;
	int8_t x222 = -1;
	int64_t x223 = -57LL;
	volatile int32_t t55 = -715927882;

	t55 = ((x221&x222)<=(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = -1LL;
	int16_t x226 = -1;
	int8_t x227 = INT8_MIN;
	int16_t x228 = 350;
	volatile int32_t t56 = 59;

	t56 = ((x225&x226)<=(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x229 = INT8_MIN;
	int16_t x230 = INT16_MAX;
	uint16_t x232 = 256U;

	t57 = ((x229&x230)<=(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 1;
	uint32_t x234 = 4U;
	volatile int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MAX;

	t58 = ((x233&x234)<=(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	int64_t x238 = -2935859LL;
	static int8_t x239 = -43;
	static int16_t x240 = -1;
	int32_t t59 = 12;

	t59 = ((x237&x238)<=(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	static int32_t x244 = -1;

	t60 = ((x241&x242)<=(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 292093885792961595LL;
	int16_t x246 = -1;
	static int8_t x247 = -1;
	volatile int32_t x248 = -2;
	volatile int32_t t61 = 282135;

	t61 = ((x245&x246)<=(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	int32_t x251 = -1;
	volatile int64_t x252 = -1LL;
	int32_t t62 = -101718668;

	t62 = ((x249&x250)<=(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	static uint64_t x254 = 7995203441348976558LLU;
	static int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t63 = 177155;

	t63 = ((x253&x254)<=(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	volatile uint32_t x258 = UINT32_MAX;
	uint16_t x260 = 1U;
	int32_t t64 = 3491452;

	t64 = ((x257&x258)<=(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 0;
	uint32_t x262 = UINT32_MAX;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t t65 = 229;

	t65 = ((x261&x262)<=(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = -2465672054237132587LL;
	static uint64_t x267 = UINT64_MAX;

	t66 = ((x265&x266)<=(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -6;
	static volatile uint16_t x270 = 3U;
	int32_t x271 = 1278;
	volatile int32_t t67 = -1;

	t67 = ((x269&x270)<=(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x274 = 57LLU;
	uint32_t x275 = UINT32_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t68 = 4;

	t68 = ((x273&x274)<=(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 3307LLU;
	int64_t x278 = INT64_MIN;
	int8_t x279 = -10;
	volatile int8_t x280 = -14;
	int32_t t69 = 8;

	t69 = ((x277&x278)<=(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = INT16_MAX;
	uint8_t x283 = 0U;
	int16_t x284 = INT16_MIN;
	int32_t t70 = 2795;

	t70 = ((x281&x282)<=(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 1U;
	int16_t x286 = -1;
	int8_t x287 = 2;
	static volatile uint32_t x288 = UINT32_MAX;

	t71 = ((x285&x286)<=(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -3;
	int8_t x290 = INT8_MAX;
	static int16_t x291 = INT16_MIN;
	static int8_t x292 = INT8_MIN;

	t72 = ((x289&x290)<=(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x294 = 1U;
	uint32_t x295 = 1994122U;
	int32_t x296 = INT32_MAX;
	static volatile int32_t t73 = -180566;

	t73 = ((x293&x294)<=(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	volatile int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MAX;

	t74 = ((x297&x298)<=(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	int8_t x303 = -1;

	t75 = ((x301&x302)<=(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = UINT8_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 1;

	t76 = ((x305&x306)<=(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = 2;
	int8_t x310 = -1;
	uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 170019716920268927LLU;
	int32_t t77 = -26;

	t77 = ((x309&x310)<=(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	int32_t x314 = -57385;
	static uint32_t x315 = 7486U;
	int64_t x316 = 7294567555LL;
	volatile int32_t t78 = 963;

	t78 = ((x313&x314)<=(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = -1;
	uint8_t x319 = 76U;
	int16_t x320 = 8;
	int32_t t79 = 762;

	t79 = ((x317&x318)<=(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	uint32_t x322 = 102903769U;
	volatile int16_t x323 = -1;
	uint64_t x324 = UINT64_MAX;

	t80 = ((x321&x322)<=(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	static int32_t x326 = INT32_MIN;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t81 = -17520;

	t81 = ((x325&x326)<=(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = -395468724316284LL;
	int8_t x331 = 1;
	int64_t x332 = INT64_MIN;

	t82 = ((x329&x330)<=(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 26;
	volatile int32_t x334 = -1;
	static int32_t x335 = INT32_MAX;
	static int32_t x336 = INT32_MIN;
	int32_t t83 = -11618857;

	t83 = ((x333&x334)<=(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = 121U;
	volatile int32_t t84 = 0;

	t84 = ((x337&x338)<=(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = 64U;
	volatile uint64_t x343 = 8757197977020996717LLU;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 125;

	t85 = ((x341&x342)<=(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 184416586U;
	volatile uint64_t x346 = UINT64_MAX;
	int8_t x347 = -1;
	int64_t x348 = -6647LL;
	volatile int32_t t86 = -185;

	t86 = ((x345&x346)<=(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 55;
	volatile int16_t x350 = INT16_MIN;
	static uint8_t x351 = 7U;
	int64_t x352 = 1379161607849365LL;
	volatile int32_t t87 = 32473275;

	t87 = ((x349&x350)<=(x351==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = UINT64_MAX;
	int16_t x354 = INT16_MAX;
	static uint32_t x355 = UINT32_MAX;
	static uint16_t x356 = 453U;
	volatile int32_t t88 = 76;

	t88 = ((x353&x354)<=(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x358 = -5;
	int64_t x360 = -9729913LL;
	volatile int32_t t89 = -28076;

	t89 = ((x357&x358)<=(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MAX;
	int64_t x364 = INT64_MIN;
	static volatile int32_t t90 = -13;

	t90 = ((x361&x362)<=(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	static uint64_t x367 = 2578650901975981LLU;
	static volatile int32_t x368 = INT32_MAX;
	int32_t t91 = 3198;

	t91 = ((x365&x366)<=(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 24931U;
	uint8_t x370 = 3U;
	uint64_t x371 = UINT64_MAX;
	volatile uint32_t x372 = UINT32_MAX;

	t92 = ((x369&x370)<=(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	int16_t x375 = INT16_MIN;
	static volatile int8_t x376 = -10;
	int32_t t93 = 26798686;

	t93 = ((x373&x374)<=(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 3;
	int32_t x378 = 76187713;
	volatile uint8_t x379 = 3U;
	volatile int32_t x380 = -21383214;
	int32_t t94 = -180965;

	t94 = ((x377&x378)<=(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 7U;
	static int32_t x382 = INT32_MIN;
	static int16_t x384 = INT16_MIN;
	static volatile int32_t t95 = -149;

	t95 = ((x381&x382)<=(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MIN;
	static int16_t x386 = -16;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 6947797;

	t96 = ((x385&x386)<=(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -97LL;
	volatile int64_t x390 = INT64_MIN;
	int16_t x391 = 1;
	static volatile int32_t t97 = 1;

	t97 = ((x389&x390)<=(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x393 = INT32_MIN;
	uint16_t x394 = UINT16_MAX;
	int16_t x395 = -10;
	static int32_t x396 = -1;
	volatile int32_t t98 = 4235510;

	t98 = ((x393&x394)<=(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MIN;
	int8_t x399 = -1;
	volatile int32_t t99 = -14;

	t99 = ((x397&x398)<=(x399==x400));

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

