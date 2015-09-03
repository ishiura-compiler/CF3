#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
static int16_t x2 = INT16_MIN;
int64_t x5 = INT64_MIN;
volatile int32_t x6 = 497511272;
volatile uint64_t x8 = 45944178101LLU;
static volatile int64_t x11 = 4120376794LL;
int64_t x20 = -1LL;
int16_t x21 = INT16_MIN;
int16_t x22 = -89;
int64_t x25 = -5720722875LL;
uint16_t x26 = UINT16_MAX;
int16_t x28 = 1534;
volatile int32_t t7 = -407001;
uint64_t x34 = 54394781163468LLU;
volatile uint8_t x36 = 48U;
volatile int32_t t8 = 1;
volatile int8_t x37 = -1;
volatile int32_t t10 = -23908213;
static volatile int32_t t11 = -62;
int8_t x52 = INT8_MIN;
int64_t x53 = -63528153LL;
int32_t t14 = -125;
int32_t x67 = -827616;
int8_t x70 = INT8_MAX;
static uint16_t x75 = 19635U;
uint16_t x78 = 172U;
int32_t t19 = -6;
int8_t x82 = INT8_MAX;
int8_t x88 = INT8_MIN;
volatile int32_t t21 = -13694;
int64_t x90 = -1LL;
uint8_t x95 = 1U;
int64_t x96 = INT64_MAX;
int32_t x97 = INT32_MIN;
static int32_t x98 = 339438;
uint32_t x100 = UINT32_MAX;
volatile int32_t x114 = INT32_MAX;
int8_t x117 = INT8_MIN;
volatile int32_t x119 = -894;
int8_t x128 = 34;
int8_t x129 = 44;
int8_t x132 = INT8_MIN;
int32_t x134 = 14985986;
int16_t x135 = INT16_MAX;
int16_t x136 = -1;
volatile int32_t t33 = -2917274;
int32_t x138 = -1;
int32_t t34 = 118235;
int16_t x143 = -1;
static int32_t t35 = 1;
uint64_t x149 = 4787839157303082LLU;
int32_t t38 = -8;
uint32_t x163 = UINT32_MAX;
int32_t t40 = -250;
static int32_t t41 = 62;
static int32_t x175 = INT32_MAX;
volatile int32_t t45 = 636289837;
int32_t x186 = 11595653;
int32_t t46 = 2126130;
int16_t x189 = -1;
int32_t x194 = INT32_MIN;
int16_t x195 = INT16_MIN;
uint16_t x196 = 1188U;
int32_t t48 = 668;
int32_t x210 = 1;
int8_t x211 = INT8_MIN;
uint64_t x214 = UINT64_MAX;
int32_t t53 = 56124514;
static uint32_t x219 = UINT32_MAX;
int32_t x220 = INT32_MAX;
int16_t x224 = INT16_MIN;
uint8_t x237 = 1U;
static volatile uint32_t x238 = UINT32_MAX;
static int8_t x244 = INT8_MAX;
int16_t x248 = -1;
volatile int32_t t62 = -14820;
volatile int32_t t63 = -3102;
volatile int32_t t68 = -992798;
int32_t x278 = 2;
uint8_t x279 = 49U;
static uint16_t x288 = 35U;
int32_t t71 = 427980214;
int16_t x296 = INT16_MIN;
int32_t x300 = 1;
int32_t t75 = -586570;
volatile int16_t x307 = INT16_MIN;
uint64_t x309 = UINT64_MAX;
static volatile int64_t x310 = INT64_MIN;
int16_t x311 = -1;
uint64_t x317 = 1128620606386213030LLU;
uint32_t x320 = 20U;
int32_t x328 = -1;
volatile int32_t t82 = -186495980;
volatile int64_t x333 = 1634LL;
uint16_t x338 = 282U;
volatile uint8_t x341 = 2U;
volatile uint8_t x342 = 9U;
int64_t x352 = -424084476263LL;
int64_t x357 = -3158109264965689LL;
int8_t x362 = -1;
volatile int32_t t90 = -40724324;
static int16_t x368 = 1;
int8_t x369 = INT8_MIN;
int32_t t92 = 354228;
volatile int32_t x378 = INT32_MIN;
static int8_t x380 = INT8_MAX;
volatile int32_t x387 = INT32_MIN;
int64_t x392 = 145988868581475LL;


void f0(void) {
	int32_t x3 = INT32_MIN;
	volatile int32_t x4 = -1;
	int32_t t0 = 176699297;

	t0 = ((x1^(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = INT64_MIN;
	volatile int32_t t1 = -1;

	t1 = ((x5^(x6<x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 7U;
	int64_t x10 = INT64_MIN;
	volatile int8_t x12 = INT8_MIN;
	int32_t t2 = 5;

	t2 = ((x9^(x10<x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = -19;
	volatile int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 40577;

	t3 = ((x13^(x14<x15))==x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile int8_t x18 = -31;
	int32_t x19 = INT32_MAX;
	static int32_t t4 = -4;

	t4 = ((x17^(x18<x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x23 = INT8_MIN;
	volatile int64_t x24 = -307189884795257081LL;
	volatile int32_t t5 = -5;

	t5 = ((x21^(x22<x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x27 = -1LL;
	int32_t t6 = -6697;

	t6 = ((x25^(x26<x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 1;
	uint8_t x30 = 77U;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 29U;

	t7 = ((x29^(x30<x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -201798702372105994LL;
	int8_t x35 = -1;

	t8 = ((x33^(x34<x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x38 = 1U;
	uint64_t x39 = 128385101839881398LLU;
	uint32_t x40 = 4U;
	static int32_t t9 = -80;

	t9 = ((x37^(x38<x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = -199139430;
	int16_t x43 = 3801;
	int32_t x44 = INT32_MAX;

	t10 = ((x41^(x42<x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	int32_t x46 = INT32_MIN;
	int16_t x47 = -1;
	volatile int16_t x48 = 581;

	t11 = ((x45^(x46<x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1452LL;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MAX;
	volatile int32_t t12 = 2190;

	t12 = ((x49^(x50<x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	uint32_t x55 = UINT32_MAX;
	int8_t x56 = 1;
	int32_t t13 = -1;

	t13 = ((x53^(x54<x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int32_t x58 = -1;
	uint16_t x59 = 26021U;
	uint32_t x60 = 1845U;

	t14 = ((x57^(x58<x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 360U;
	int8_t x62 = 9;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = -9;
	volatile int32_t t15 = -27811;

	t15 = ((x61^(x62<x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static uint64_t x66 = UINT64_MAX;
	static int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 0;

	t16 = ((x65^(x66<x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 3247;
	int64_t x71 = INT64_MIN;
	int16_t x72 = -316;
	int32_t t17 = 8568;

	t17 = ((x69^(x70<x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	uint32_t x74 = UINT32_MAX;
	volatile int16_t x76 = -1;
	volatile int32_t t18 = -6;

	t18 = ((x73^(x74<x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x79 = -27;
	int8_t x80 = -1;

	t19 = ((x77^(x78<x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 142394586630LLU;
	int16_t x83 = INT16_MIN;
	static int8_t x84 = INT8_MIN;
	int32_t t20 = -1869;

	t20 = ((x81^(x82<x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 8;
	int64_t x86 = -4LL;
	volatile int8_t x87 = 3;

	t21 = ((x85^(x86<x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	uint8_t x91 = 109U;
	volatile int16_t x92 = 725;
	volatile int32_t t22 = 1900;

	t22 = ((x89^(x90<x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	int8_t x94 = INT8_MAX;
	volatile int32_t t23 = 115150;

	t23 = ((x93^(x94<x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x99 = 1U;
	volatile int32_t t24 = -72054;

	t24 = ((x97^(x98<x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int16_t x102 = -1;
	int32_t x103 = INT32_MIN;
	volatile int64_t x104 = -1LL;
	int32_t t25 = 238614163;

	t25 = ((x101^(x102<x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	volatile int8_t x108 = 1;
	volatile int32_t t26 = -30080;

	t26 = ((x105^(x106<x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint32_t x110 = 537334U;
	int64_t x111 = 63857LL;
	uint8_t x112 = 26U;
	int32_t t27 = 4;

	t27 = ((x109^(x110<x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int32_t x115 = INT32_MIN;
	int64_t x116 = 1160863057295LL;
	volatile int32_t t28 = -2160;

	t28 = ((x113^(x114<x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MAX;
	int64_t x120 = -1LL;
	int32_t t29 = 1;

	t29 = ((x117^(x118<x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int16_t x122 = INT16_MAX;
	static uint32_t x123 = 2089045383U;
	static int16_t x124 = -1;
	int32_t t30 = -14836810;

	t30 = ((x121^(x122<x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	int32_t x126 = -416;
	uint16_t x127 = 11U;
	int32_t t31 = -116795535;

	t31 = ((x125^(x126<x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = -1;
	uint32_t x131 = 4U;
	int32_t t32 = 12954;

	t32 = ((x129^(x130<x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = 3317;

	t33 = ((x133^(x134<x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 352U;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MAX;

	t34 = ((x137^(x138<x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = 299317;
	int32_t x142 = INT32_MIN;
	uint8_t x144 = 2U;

	t35 = ((x141^(x142<x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 90U;
	int16_t x146 = 1;
	volatile int8_t x147 = -1;
	static int8_t x148 = -1;
	volatile int32_t t36 = -1602;

	t36 = ((x145^(x146<x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	static int16_t x152 = 4077;
	int32_t t37 = 0;

	t37 = ((x149^(x150<x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 3U;
	static int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	static uint8_t x156 = UINT8_MAX;

	t38 = ((x153^(x154<x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 0U;
	static int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MIN;
	uint8_t x160 = 126U;
	int32_t t39 = -9613;

	t39 = ((x157^(x158<x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = INT8_MIN;
	volatile uint8_t x162 = 4U;
	static int64_t x164 = -8041530800LL;

	t40 = ((x161^(x162<x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	static uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MAX;
	static int8_t x168 = 6;

	t41 = ((x165^(x166<x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -26607661859LL;
	uint8_t x170 = 4U;
	int32_t x171 = INT32_MAX;
	static int16_t x172 = 3988;
	volatile int32_t t42 = 7447;

	t42 = ((x169^(x170<x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 3000966532503142536LL;
	static uint16_t x174 = UINT16_MAX;
	int32_t x176 = -1;
	int32_t t43 = -7782;

	t43 = ((x173^(x174<x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MIN;
	int64_t x179 = -1LL;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -1197879;

	t44 = ((x177^(x178<x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MIN;
	int32_t x183 = -1;
	static volatile uint8_t x184 = 1U;

	t45 = ((x181^(x182<x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile uint64_t x187 = 15464155LLU;
	int16_t x188 = 2149;

	t46 = ((x185^(x186<x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x190 = UINT32_MAX;
	static volatile uint8_t x191 = UINT8_MAX;
	static int32_t x192 = INT32_MIN;
	static volatile int32_t t47 = -1709356;

	t47 = ((x189^(x190<x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;

	t48 = ((x193^(x194<x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	int32_t x198 = -1;
	int64_t x199 = -1LL;
	int16_t x200 = -9;
	volatile int32_t t49 = -21979;

	t49 = ((x197^(x198<x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	int8_t x202 = -27;
	static int16_t x203 = INT16_MIN;
	volatile int64_t x204 = INT64_MIN;
	static volatile int32_t t50 = 11;

	t50 = ((x201^(x202<x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 18807U;
	int32_t x206 = INT32_MIN;
	int8_t x207 = 55;
	static volatile uint64_t x208 = 80641323245983457LLU;
	volatile int32_t t51 = -13;

	t51 = ((x205^(x206<x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = -1;
	static uint32_t x212 = 28620144U;
	int32_t t52 = 1160698;

	t52 = ((x209^(x210<x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = -1;
	volatile int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;

	t53 = ((x213^(x214<x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile int32_t x218 = INT32_MAX;
	volatile int32_t t54 = 3402758;

	t54 = ((x217^(x218<x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 27;
	volatile int16_t x222 = INT16_MIN;
	int32_t x223 = -1;
	volatile int32_t t55 = -858;

	t55 = ((x221^(x222<x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = INT32_MAX;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	int32_t x228 = -1;
	volatile int32_t t56 = -2;

	t56 = ((x225^(x226<x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int64_t x230 = INT64_MIN;
	uint8_t x231 = 0U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 149379273;

	t57 = ((x229^(x230<x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	volatile uint32_t x234 = 18U;
	int64_t x235 = 13870607844917LL;
	uint64_t x236 = 3405655121259342537LLU;
	int32_t t58 = 513696;

	t58 = ((x233^(x234<x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x239 = INT32_MIN;
	volatile int8_t x240 = INT8_MIN;
	int32_t t59 = 3070;

	t59 = ((x237^(x238<x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -1LL;
	int16_t x242 = INT16_MIN;
	uint32_t x243 = UINT32_MAX;
	int32_t t60 = 4065;

	t60 = ((x241^(x242<x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	uint32_t x246 = 1349174372U;
	int32_t x247 = -30431;
	int32_t t61 = 115192123;

	t61 = ((x245^(x246<x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	volatile uint8_t x250 = 14U;
	uint32_t x251 = 0U;
	int16_t x252 = INT16_MAX;

	t62 = ((x249^(x250<x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	int8_t x256 = 2;

	t63 = ((x253^(x254<x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	volatile uint16_t x258 = 248U;
	int32_t x259 = INT32_MIN;
	int32_t x260 = -1;
	volatile int32_t t64 = 3425;

	t64 = ((x257^(x258<x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	volatile uint8_t x262 = 0U;
	int64_t x263 = -1LL;
	volatile int16_t x264 = INT16_MIN;
	int32_t t65 = 285;

	t65 = ((x261^(x262<x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 141LLU;
	int8_t x266 = 3;
	uint32_t x267 = 0U;
	volatile uint16_t x268 = 233U;
	int32_t t66 = -9550841;

	t66 = ((x265^(x266<x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	uint8_t x270 = 1U;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 15U;
	int32_t t67 = -1480;

	t67 = ((x269^(x270<x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 663348U;
	int16_t x274 = INT16_MAX;
	uint32_t x275 = 5U;
	int8_t x276 = -1;

	t68 = ((x273^(x274<x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = 7;
	volatile uint64_t x280 = 17800LLU;
	int32_t t69 = 30;

	t69 = ((x277^(x278<x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 1U;
	static int8_t x282 = INT8_MIN;
	volatile uint8_t x283 = 4U;
	static int32_t x284 = 485297;
	volatile int32_t t70 = 528350414;

	t70 = ((x281^(x282<x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int64_t x286 = -1LL;
	int8_t x287 = -1;

	t71 = ((x285^(x286<x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 295868002973LL;
	static volatile int8_t x290 = -5;
	static uint8_t x291 = 105U;
	static volatile int8_t x292 = 5;
	volatile int32_t t72 = -4254;

	t72 = ((x289^(x290<x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static int64_t x294 = -13930LL;
	uint32_t x295 = 24946410U;
	int32_t t73 = 1615576;

	t73 = ((x293^(x294<x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 2962U;
	volatile int16_t x298 = INT16_MAX;
	uint16_t x299 = 1379U;
	int32_t t74 = 61858520;

	t74 = ((x297^(x298<x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -126;
	uint8_t x302 = UINT8_MAX;
	static int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;

	t75 = ((x301^(x302<x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	static uint16_t x306 = 11U;
	static int16_t x308 = -1;
	int32_t t76 = 424685;

	t76 = ((x305^(x306<x307))==x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x312 = INT16_MAX;
	volatile int32_t t77 = -604867;

	t77 = ((x309^(x310<x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	uint16_t x314 = 109U;
	int8_t x315 = -1;
	int8_t x316 = INT8_MIN;
	static int32_t t78 = -212055451;

	t78 = ((x313^(x314<x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = -44;
	uint64_t x319 = 37112LLU;
	int32_t t79 = -184;

	t79 = ((x317^(x318<x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 1;
	volatile uint16_t x322 = 9U;
	int16_t x323 = 21;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = -20689415;

	t80 = ((x321^(x322<x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 6;
	int32_t x326 = -30606;
	volatile int32_t x327 = -1;
	volatile int32_t t81 = -19;

	t81 = ((x325^(x326<x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	volatile int64_t x330 = 3LL;
	uint32_t x331 = 912U;
	int32_t x332 = INT32_MAX;

	t82 = ((x329^(x330<x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = 5;

	t83 = ((x333^(x334<x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MAX;
	volatile int32_t t84 = 1275;

	t84 = ((x337^(x338<x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x343 = 138126907LL;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 81414;

	t85 = ((x341^(x342<x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 2514U;
	static int64_t x346 = -1LL;
	volatile uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 5788254;

	t86 = ((x345^(x346<x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 5149U;
	volatile uint16_t x350 = 84U;
	uint8_t x351 = 92U;
	int32_t t87 = 23079;

	t87 = ((x349^(x350<x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MIN;
	uint64_t x355 = 4950LLU;
	int32_t x356 = INT32_MAX;
	static volatile int32_t t88 = -252;

	t88 = ((x353^(x354<x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = 55;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = 4386567277LLU;
	volatile int32_t t89 = -218;

	t89 = ((x357^(x358<x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	int64_t x363 = -1LL;
	int64_t x364 = -1LL;

	t90 = ((x361^(x362<x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MIN;
	volatile int8_t x367 = INT8_MAX;
	volatile int32_t t91 = 46;

	t91 = ((x365^(x366<x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = 37074U;
	int32_t x371 = 5520;
	int16_t x372 = INT16_MAX;

	t92 = ((x369^(x370<x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 6460;
	int8_t x374 = -1;
	uint32_t x375 = 1325964987U;
	static int32_t x376 = -1;
	int32_t t93 = 122;

	t93 = ((x373^(x374<x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 101U;
	int32_t x379 = 196;
	static int32_t t94 = -1670109;

	t94 = ((x377^(x378<x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 15U;
	uint8_t x382 = 13U;
	static int16_t x383 = INT16_MAX;
	static int32_t x384 = INT32_MIN;
	static int32_t t95 = 596839276;

	t95 = ((x381^(x382<x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	uint8_t x386 = 0U;
	int8_t x388 = -1;
	int32_t t96 = 1;

	t96 = ((x385^(x386<x387))==x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 193099723LLU;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = 67858067146294675LL;
	static int32_t t97 = -20948;

	t97 = ((x389^(x390<x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -631;
	int64_t x394 = -1LL;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t98 = -560;

	t98 = ((x393^(x394<x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -1;
	int8_t x398 = -1;
	int64_t x399 = -1LL;
	volatile int64_t x400 = 8572882179705605LL;
	static volatile int32_t t99 = 135971;

	t99 = ((x397^(x398<x399))==x400);

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

