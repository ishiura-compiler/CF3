#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MIN;
int16_t x11 = 0;
uint64_t x12 = 95389570LLU;
int32_t t2 = 43548282;
uint8_t x13 = 123U;
int8_t x18 = INT8_MIN;
int32_t x19 = 41051474;
uint32_t x29 = 1594U;
static int64_t x31 = INT64_MIN;
volatile int32_t x34 = INT32_MAX;
volatile int64_t x35 = INT64_MIN;
int32_t x36 = INT32_MIN;
int64_t x38 = INT64_MAX;
static int8_t x51 = -1;
uint8_t x59 = 119U;
volatile int32_t t17 = -106997;
int16_t x82 = INT16_MIN;
int64_t x83 = 212648308326936LL;
int64_t x84 = INT64_MIN;
uint8_t x90 = UINT8_MAX;
volatile int64_t x91 = -1LL;
uint32_t x98 = 1U;
volatile int32_t t24 = 2330596;
static int8_t x101 = -1;
volatile int8_t x103 = -16;
int32_t x104 = -18386001;
uint32_t x105 = 810U;
int32_t t26 = -328114771;
int64_t x109 = -9924LL;
volatile int16_t x114 = INT16_MAX;
static volatile int8_t x116 = INT8_MIN;
uint16_t x122 = 1016U;
int8_t x125 = INT8_MAX;
volatile uint64_t x130 = 336373520743827LLU;
uint32_t x134 = UINT32_MAX;
static int16_t x140 = 5476;
volatile int32_t t34 = -10;
static int64_t x142 = INT64_MAX;
uint8_t x152 = UINT8_MAX;
uint64_t x153 = 5001770694530362252LLU;
int32_t t38 = -354;
uint32_t x161 = 8U;
int32_t x164 = INT32_MAX;
volatile int16_t x166 = INT16_MAX;
int16_t x175 = 9748;
static int8_t x176 = INT8_MIN;
int8_t x179 = INT8_MIN;
int16_t x180 = INT16_MAX;
uint16_t x188 = 7754U;
volatile int8_t x194 = INT8_MIN;
uint64_t x200 = 20150358190316583LLU;
volatile int32_t t49 = -298;
static int16_t x203 = 21;
int32_t t50 = -7710074;
static int8_t x212 = 5;
static int64_t x222 = INT64_MAX;
int16_t x223 = INT16_MIN;
int32_t x224 = INT32_MAX;
uint8_t x226 = 93U;
int8_t x230 = INT8_MAX;
static uint32_t x231 = 39U;
int32_t x233 = 1;
uint32_t x234 = 19517591U;
int64_t x237 = -1LL;
static volatile int32_t x243 = -17;
volatile int16_t x252 = INT16_MAX;
uint32_t x256 = 6829320U;
volatile int32_t t66 = 1;
volatile uint16_t x272 = UINT16_MAX;
static volatile int32_t t67 = 21;
int32_t t69 = 0;
static volatile int32_t t70 = -26219487;
int32_t x285 = INT32_MIN;
int32_t t71 = -270;
int8_t x292 = INT8_MIN;
int32_t t72 = 708;
static int8_t x295 = 34;
volatile int8_t x298 = INT8_MIN;
volatile int16_t x299 = 4;
uint16_t x302 = 730U;
static volatile int32_t x308 = INT32_MIN;
static int16_t x316 = INT16_MIN;
static volatile int32_t x318 = INT32_MIN;
int64_t x325 = -1LL;
volatile uint32_t x326 = UINT32_MAX;
uint64_t x328 = 4766718216637755302LLU;
volatile int32_t t81 = -32;
int16_t x330 = 178;
int64_t x331 = -16145364LL;
static volatile int32_t t83 = -1;
int32_t x340 = INT32_MIN;
uint32_t x342 = 721U;
uint64_t x352 = 35799449067LLU;
uint64_t x355 = 13529LLU;
static volatile uint32_t x357 = 397174U;
uint16_t x359 = 30762U;
volatile int32_t x362 = -13812;
uint8_t x374 = 28U;
int16_t x383 = INT16_MIN;
int8_t x384 = INT8_MIN;
int32_t t95 = -3108;
volatile int64_t x386 = INT64_MAX;
uint32_t x388 = 83U;
int32_t x390 = 0;
int8_t x393 = -1;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = INT16_MAX;
	uint32_t x3 = UINT32_MAX;
	static volatile int8_t x4 = INT8_MIN;
	static int32_t t0 = -3896;

	t0 = ((x1<=x2)*(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 1;
	int16_t x6 = 8187;
	int8_t x7 = -1;
	volatile int8_t x8 = -1;
	static int32_t t1 = -871746;

	t1 = ((x5<=x6)*(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 389738018;

	t2 = ((x9<=x10)*(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = 15;

	t3 = ((x13<=x14)*(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x20 = -9032892;
	int32_t t4 = 2;

	t4 = ((x17<=x18)*(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 1U;
	uint16_t x22 = 7594U;
	static uint16_t x23 = 1U;
	uint16_t x24 = 19249U;
	static volatile int32_t t5 = -13;

	t5 = ((x21<=x22)*(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = -1;
	int8_t x27 = INT8_MAX;
	uint64_t x28 = UINT64_MAX;
	static volatile int32_t t6 = 15630;

	t6 = ((x25<=x26)*(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = 5U;
	static int16_t x32 = 208;
	static volatile int32_t t7 = -719178;

	t7 = ((x29<=x30)*(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 5522732;
	int32_t t8 = -241701;

	t8 = ((x33<=x34)*(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 1;
	volatile int16_t x39 = 94;
	volatile int16_t x40 = INT16_MIN;
	int32_t t9 = -75;

	t9 = ((x37<=x38)*(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile uint32_t x42 = 1412793746U;
	uint8_t x43 = 18U;
	static uint64_t x44 = UINT64_MAX;
	volatile int32_t t10 = 1;

	t10 = ((x41<=x42)*(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile int16_t x46 = INT16_MIN;
	uint64_t x47 = 38LLU;
	static uint8_t x48 = 5U;
	int32_t t11 = -842;

	t11 = ((x45<=x46)*(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -393750;
	int16_t x50 = -1;
	uint64_t x52 = 265741115582613LLU;
	volatile int32_t t12 = -105;

	t12 = ((x49<=x50)*(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	int64_t x54 = 12LL;
	uint64_t x55 = 33593407539LLU;
	int8_t x56 = -6;
	static volatile int32_t t13 = 715;

	t13 = ((x53<=x54)*(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 7935338451457LLU;
	volatile uint16_t x58 = 407U;
	int16_t x60 = INT16_MIN;
	static int32_t t14 = -5;

	t14 = ((x57<=x58)*(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	static int16_t x62 = INT16_MAX;
	static int16_t x63 = INT16_MIN;
	static int16_t x64 = INT16_MIN;
	static volatile int32_t t15 = -74770673;

	t15 = ((x61<=x62)*(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 5U;
	volatile int16_t x66 = INT16_MAX;
	int64_t x67 = INT64_MAX;
	static uint16_t x68 = 164U;
	volatile int32_t t16 = -13480;

	t16 = ((x65<=x66)*(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = 465321;
	static int32_t x71 = -12060;
	static uint16_t x72 = UINT16_MAX;

	t17 = ((x69<=x70)*(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 740U;
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = -13847359;
	static volatile int32_t x76 = 15304265;
	static int32_t t18 = 14;

	t18 = ((x73<=x74)*(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 197121106U;
	int64_t x78 = INT64_MAX;
	static int32_t x79 = 15540;
	uint64_t x80 = UINT64_MAX;
	static int32_t t19 = -123583509;

	t19 = ((x77<=x78)*(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int32_t t20 = -2175898;

	t20 = ((x81<=x82)*(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 20U;
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = -939312;
	uint16_t x88 = 28U;
	static int32_t t21 = -47065;

	t21 = ((x85<=x86)*(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile uint64_t x92 = 8100724LLU;
	volatile int32_t t22 = -208220571;

	t22 = ((x89<=x90)*(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	static int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -22;

	t23 = ((x93<=x94)*(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;

	t24 = ((x97<=x98)*(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MAX;
	int32_t t25 = -398418;

	t25 = ((x101<=x102)*(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	int16_t x107 = -1;
	int16_t x108 = 9;

	t26 = ((x105<=x106)*(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 4834317LLU;
	static int16_t x111 = -1;
	int16_t x112 = -20;
	int32_t t27 = -497701;

	t27 = ((x109<=x110)*(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	static uint8_t x115 = UINT8_MAX;
	volatile int32_t t28 = -1027;

	t28 = ((x113<=x114)*(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	static volatile int16_t x118 = 6;
	volatile int8_t x119 = INT8_MAX;
	volatile int8_t x120 = INT8_MIN;
	int32_t t29 = -228;

	t29 = ((x117<=x118)*(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 392U;
	volatile int16_t x123 = INT16_MIN;
	static uint32_t x124 = UINT32_MAX;
	volatile int32_t t30 = -268577;

	t30 = ((x121<=x122)*(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x126 = UINT64_MAX;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 744195;

	t31 = ((x125<=x126)*(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static int64_t x131 = 1608948589132LL;
	static uint64_t x132 = UINT64_MAX;
	volatile int32_t t32 = -1;

	t32 = ((x129<=x130)*(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MAX;
	int16_t x135 = -2600;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t33 = 197;

	t33 = ((x133<=x134)*(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	static uint16_t x138 = UINT16_MAX;
	uint32_t x139 = 0U;

	t34 = ((x137<=x138)*(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -76915655;

	t35 = ((x141<=x142)*(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = 14;
	int64_t x147 = -1LL;
	int16_t x148 = 428;
	volatile int32_t t36 = 52999428;

	t36 = ((x145<=x146)*(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	static volatile int64_t x150 = INT64_MIN;
	volatile int64_t x151 = INT64_MIN;
	volatile int32_t t37 = 6600720;

	t37 = ((x149<=x150)*(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x154 = 21;
	volatile uint16_t x155 = 523U;
	volatile uint32_t x156 = UINT32_MAX;

	t38 = ((x153<=x154)*(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 7491U;
	int64_t x158 = -1LL;
	static uint8_t x159 = UINT8_MAX;
	int16_t x160 = 1616;
	volatile int32_t t39 = 13;

	t39 = ((x157<=x158)*(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = INT32_MIN;
	int64_t x163 = INT64_MAX;
	int32_t t40 = 609023;

	t40 = ((x161<=x162)*(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int8_t x167 = 58;
	int8_t x168 = 1;
	volatile int32_t t41 = 30245323;

	t41 = ((x165<=x166)*(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 5425368;
	uint64_t x170 = 35019458398LLU;
	volatile uint8_t x171 = 53U;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t42 = -27;

	t42 = ((x169<=x170)*(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint8_t x174 = 4U;
	volatile int32_t t43 = 24152;

	t43 = ((x173<=x174)*(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = 0U;
	int64_t x178 = 44LL;
	int32_t t44 = 103;

	t44 = ((x177<=x178)*(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = 22U;
	uint8_t x183 = 17U;
	static volatile int32_t x184 = 470873630;
	int32_t t45 = 7458792;

	t45 = ((x181<=x182)*(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	volatile uint8_t x186 = 1U;
	static volatile int16_t x187 = INT16_MAX;
	static int32_t t46 = -51;

	t46 = ((x185<=x186)*(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -2712;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MIN;
	int16_t x192 = -1;
	volatile int32_t t47 = -46736581;

	t47 = ((x189<=x190)*(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = 86;
	int16_t x195 = INT16_MAX;
	int16_t x196 = 4;
	static volatile int32_t t48 = -1349;

	t48 = ((x193<=x194)*(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 5LLU;
	static int64_t x198 = INT64_MIN;
	static volatile int8_t x199 = INT8_MIN;

	t49 = ((x197<=x198)*(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	volatile uint64_t x202 = 175308277117285LLU;
	volatile uint8_t x204 = 3U;

	t50 = ((x201<=x202)*(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MIN;
	static int64_t x206 = -1LL;
	int32_t x207 = 9057;
	int16_t x208 = 1;
	static volatile int32_t t51 = 2452678;

	t51 = ((x205<=x206)*(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MIN;
	int32_t x211 = -1;
	volatile int32_t t52 = 16285;

	t52 = ((x209<=x210)*(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	static int64_t x214 = INT64_MAX;
	uint64_t x215 = 295327555LLU;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t53 = 3427191;

	t53 = ((x213<=x214)*(x215<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 2U;
	int64_t x218 = INT64_MIN;
	int32_t x219 = -250740;
	uint64_t x220 = UINT64_MAX;
	int32_t t54 = 3;

	t54 = ((x217<=x218)*(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -10;
	int32_t t55 = 0;

	t55 = ((x221<=x222)*(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MAX;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -8194905;

	t56 = ((x225<=x226)*(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int16_t x232 = INT16_MAX;
	volatile int32_t t57 = 4735987;

	t57 = ((x229<=x230)*(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x235 = 28493U;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 12;

	t58 = ((x233<=x234)*(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MAX;
	uint8_t x239 = 45U;
	int8_t x240 = 1;
	int32_t t59 = -1;

	t59 = ((x237<=x238)*(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	static uint32_t x242 = UINT32_MAX;
	uint32_t x244 = 652U;
	int32_t t60 = 3462848;

	t60 = ((x241<=x242)*(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	static uint8_t x246 = 1U;
	int32_t x247 = -38409;
	volatile uint32_t x248 = 123973309U;
	int32_t t61 = 9590;

	t61 = ((x245<=x246)*(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	static uint32_t x250 = 1032489728U;
	uint32_t x251 = UINT32_MAX;
	int32_t t62 = -74150886;

	t62 = ((x249<=x250)*(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int16_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t t63 = 7;

	t63 = ((x253<=x254)*(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 936U;
	static uint16_t x258 = 5128U;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 2238385LLU;
	volatile int32_t t64 = -236599;

	t64 = ((x257<=x258)*(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	volatile uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	volatile int16_t x264 = -1;
	static volatile int32_t t65 = -2795;

	t65 = ((x261<=x262)*(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	uint8_t x266 = UINT8_MAX;
	uint16_t x267 = 107U;
	volatile int8_t x268 = INT8_MAX;

	t66 = ((x265<=x266)*(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	uint8_t x270 = 57U;
	static int16_t x271 = 0;

	t67 = ((x269<=x270)*(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 41U;
	int8_t x274 = INT8_MIN;
	int64_t x275 = INT64_MIN;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 765589259;

	t68 = ((x273<=x274)*(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -8078;
	static int16_t x278 = -1;
	volatile int16_t x279 = 6;
	uint8_t x280 = UINT8_MAX;

	t69 = ((x277<=x278)*(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	uint8_t x282 = 16U;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = INT64_MIN;

	t70 = ((x281<=x282)*(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 0U;
	int64_t x288 = 0LL;

	t71 = ((x285<=x286)*(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MIN;
	int8_t x291 = -1;

	t72 = ((x289<=x290)*(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 90U;
	int8_t x294 = -17;
	uint64_t x296 = 37588574804LLU;
	volatile int32_t t73 = 822513975;

	t73 = ((x293<=x294)*(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = 1;
	uint16_t x300 = 249U;
	volatile int32_t t74 = 0;

	t74 = ((x297<=x298)*(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int32_t x303 = 83952;
	uint8_t x304 = UINT8_MAX;
	static int32_t t75 = -1;

	t75 = ((x301<=x302)*(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 10U;
	static uint8_t x306 = 26U;
	volatile int16_t x307 = INT16_MIN;
	int32_t t76 = -8215752;

	t76 = ((x305<=x306)*(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	static int64_t x310 = INT64_MAX;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 3;

	t77 = ((x309<=x310)*(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = UINT64_MAX;
	uint8_t x314 = 9U;
	static volatile uint16_t x315 = 3U;
	int32_t t78 = 0;

	t78 = ((x313<=x314)*(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 5LLU;
	volatile int32_t x319 = INT32_MIN;
	static int16_t x320 = INT16_MIN;
	int32_t t79 = -714719443;

	t79 = ((x317<=x318)*(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static uint64_t x322 = UINT64_MAX;
	static int64_t x323 = INT64_MAX;
	int8_t x324 = -7;
	static int32_t t80 = 19;

	t80 = ((x321<=x322)*(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x327 = -1LL;

	t81 = ((x325<=x326)*(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;
	int32_t t82 = 53522;

	t82 = ((x329<=x330)*(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	int16_t x335 = -1;
	int16_t x336 = INT16_MIN;

	t83 = ((x333<=x334)*(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x337 = UINT32_MAX;
	static volatile int16_t x338 = 58;
	volatile int8_t x339 = -1;
	static volatile int32_t t84 = 0;

	t84 = ((x337<=x338)*(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int16_t x343 = INT16_MAX;
	int64_t x344 = -1LL;
	volatile int32_t t85 = -34;

	t85 = ((x341<=x342)*(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 33186185U;
	int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MAX;
	uint64_t x348 = 12171920765048638LLU;
	volatile int32_t t86 = -42297618;

	t86 = ((x345<=x346)*(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MIN;
	volatile int32_t x350 = 3;
	uint16_t x351 = 69U;
	volatile int32_t t87 = -6;

	t87 = ((x349<=x350)*(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MIN;
	static uint8_t x356 = UINT8_MAX;
	int32_t t88 = 37;

	t88 = ((x353<=x354)*(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MAX;
	int16_t x360 = INT16_MAX;
	volatile int32_t t89 = -167401676;

	t89 = ((x357<=x358)*(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	int32_t x363 = -212945;
	volatile int32_t x364 = INT32_MAX;
	int32_t t90 = -1;

	t90 = ((x361<=x362)*(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 774U;
	volatile int64_t x366 = INT64_MIN;
	static int64_t x367 = INT64_MIN;
	uint32_t x368 = 231U;
	volatile int32_t t91 = 780088908;

	t91 = ((x365<=x366)*(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	volatile int64_t x370 = 4468924412693272LL;
	int16_t x371 = 3;
	int64_t x372 = -1LL;
	static int32_t t92 = 2575179;

	t92 = ((x369<=x370)*(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int16_t x375 = INT16_MIN;
	int64_t x376 = 27079LL;
	volatile int32_t t93 = 10758179;

	t93 = ((x373<=x374)*(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = 55869;
	volatile int32_t t94 = 509;

	t94 = ((x377<=x378)*(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MIN;
	static uint32_t x382 = UINT32_MAX;

	t95 = ((x381<=x382)*(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -9457;
	uint16_t x387 = 0U;
	static int32_t t96 = -127067;

	t96 = ((x385<=x386)*(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = UINT64_MAX;
	int64_t x391 = INT64_MIN;
	volatile uint32_t x392 = UINT32_MAX;
	int32_t t97 = 755;

	t97 = ((x389<=x390)*(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	static int32_t x395 = -1;
	static uint32_t x396 = 2002583U;
	volatile int32_t t98 = -106571;

	t98 = ((x393<=x394)*(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 16654113538786745LL;
	static int8_t x398 = INT8_MAX;
	uint32_t x399 = 262U;
	uint32_t x400 = 61334U;
	volatile int32_t t99 = -115;

	t99 = ((x397<=x398)*(x399<x400));

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

