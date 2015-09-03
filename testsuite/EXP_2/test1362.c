#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
static int32_t t2 = 8125;
static int64_t x15 = INT64_MIN;
static int64_t x17 = 1961040LL;
int64_t x19 = -649500535786414597LL;
static volatile uint64_t x20 = UINT64_MAX;
int8_t x21 = 0;
int8_t x33 = -15;
uint64_t x35 = 2972264LLU;
volatile uint16_t x36 = 103U;
int8_t x37 = -1;
int64_t x38 = INT64_MIN;
int32_t x41 = INT32_MIN;
int32_t t10 = 31282;
volatile int32_t t13 = -1;
int8_t x64 = INT8_MAX;
volatile int32_t t17 = 15451;
int32_t x79 = 118;
volatile int32_t t18 = -144857540;
int64_t x81 = -34069774212LL;
volatile uint8_t x82 = UINT8_MAX;
int32_t t19 = -576446;
static volatile int32_t t21 = 29461;
uint32_t x96 = 96U;
int64_t x97 = 4LL;
volatile int32_t t23 = 16772533;
uint8_t x101 = 37U;
int32_t x112 = INT32_MAX;
int32_t t28 = 356601;
volatile int16_t x123 = INT16_MIN;
static uint64_t x124 = 367267767445LLU;
static volatile int32_t t29 = -327052166;
int32_t x125 = INT32_MIN;
int16_t x128 = -5646;
int8_t x129 = INT8_MAX;
int32_t t31 = 32727225;
int64_t x136 = 1992640835611LL;
static volatile int32_t t32 = 643;
int16_t x149 = INT16_MIN;
volatile int64_t x163 = 3684639564LL;
int64_t x166 = -124401082455LL;
volatile uint32_t x173 = 3606918U;
uint16_t x174 = 29880U;
volatile int32_t t44 = -41;
int32_t x198 = INT32_MIN;
int16_t x200 = 33;
uint8_t x216 = 1U;
uint64_t x221 = 480710795808356601LLU;
int8_t x223 = 2;
int8_t x227 = -1;
int8_t x229 = -1;
uint64_t x236 = 89993078568LLU;
static int16_t x237 = INT16_MAX;
static int32_t t58 = 426;
int32_t x243 = 262287;
static volatile int32_t t59 = -4556;
int64_t x252 = -28984827275LL;
uint32_t x255 = 670610U;
volatile int32_t t62 = 74048;
int32_t x265 = INT32_MIN;
int32_t x266 = -16;
int32_t t66 = -1;
int64_t x289 = INT64_MIN;
int32_t x291 = INT32_MIN;
int64_t x296 = -1LL;
uint32_t x297 = 337U;
int32_t x304 = INT32_MAX;
volatile int16_t x306 = INT16_MIN;
static int16_t x307 = -179;
int32_t t74 = 24;
int32_t t76 = 63533761;
int8_t x318 = 15;
int32_t x325 = 1300608;
volatile int16_t x334 = INT16_MIN;
int32_t x335 = INT32_MIN;
uint32_t x336 = 16215U;
volatile int32_t t81 = 6946961;
static int16_t x343 = -1651;
int32_t t85 = 1;
int32_t t86 = 28361644;
int32_t x362 = -17234;
int8_t x363 = -40;
int64_t x364 = INT64_MAX;
int32_t x366 = -562;
int32_t t89 = -337541;
static int8_t x371 = -58;
int8_t x379 = INT8_MIN;
int16_t x383 = -34;
static uint8_t x388 = 15U;
int8_t x398 = -1;
int8_t x400 = 1;
int64_t x405 = INT64_MIN;
static uint16_t x409 = 2836U;
volatile int32_t x410 = -1;


void f0(void) {
	uint16_t x1 = 13259U;
	uint32_t x3 = UINT32_MAX;
	int16_t x4 = -1;
	volatile int32_t t0 = -102200;

	t0 = ((x1+(x2<x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	int8_t x6 = 0;
	uint64_t x7 = UINT64_MAX;
	static uint16_t x8 = UINT16_MAX;
	int32_t t1 = 15154321;

	t1 = ((x5+(x6<x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	int16_t x10 = INT16_MIN;
	volatile int8_t x11 = 55;
	int16_t x12 = INT16_MIN;

	t2 = ((x9+(x10<x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 3;
	static uint64_t x14 = 522203091721974893LLU;
	uint8_t x16 = 2U;
	volatile int32_t t3 = 110941;

	t3 = ((x13+(x14<x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = INT64_MAX;
	volatile int32_t t4 = 56850;

	t4 = ((x17+(x18<x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	volatile int8_t x23 = 0;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -36171415;

	t5 = ((x21+(x22<x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int64_t x26 = -2693LL;
	static int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -3;

	t6 = ((x25+(x26<x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 15914416U;
	int16_t x30 = INT16_MIN;
	volatile int64_t x31 = INT64_MIN;
	volatile int64_t x32 = 1LL;
	int32_t t7 = -138800;

	t7 = ((x29+(x30<x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x34 = UINT8_MAX;
	volatile int32_t t8 = -96373243;

	t8 = ((x33+(x34<x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x39 = 24U;
	static volatile int64_t x40 = 0LL;
	int32_t t9 = -255;

	t9 = ((x37+(x38<x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	uint8_t x43 = UINT8_MAX;
	static int32_t x44 = -1;

	t10 = ((x41+(x42<x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MIN;
	int16_t x48 = -1;
	static int32_t t11 = 1629497;

	t11 = ((x45+(x46<x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 303832LLU;
	uint16_t x50 = 24822U;
	uint32_t x51 = 239U;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -2356;

	t12 = ((x49+(x50<x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 274470224835451LLU;
	static volatile int32_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static uint64_t x56 = 5652180857765839LLU;

	t13 = ((x53+(x54<x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	int32_t x62 = -1;
	volatile uint8_t x63 = 48U;
	int32_t t14 = 55661;

	t14 = ((x61+(x62<x63))<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	static int64_t x66 = INT64_MIN;
	uint8_t x67 = 1U;
	uint64_t x68 = 3897319772434757081LLU;
	int32_t t15 = 41306;

	t15 = ((x65+(x66<x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = UINT64_MAX;
	volatile int16_t x72 = -1;
	int32_t t16 = 851256;

	t16 = ((x69+(x70<x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = -1;
	int32_t x74 = 154;
	int32_t x75 = -1;
	static volatile int64_t x76 = INT64_MAX;

	t17 = ((x73+(x74<x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 6;
	uint16_t x78 = 0U;
	uint16_t x80 = 1U;

	t18 = ((x77+(x78<x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MIN;

	t19 = ((x81+(x82<x83))<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MIN;
	static volatile int64_t x87 = INT64_MAX;
	static uint8_t x88 = UINT8_MAX;
	static volatile int32_t t20 = 102;

	t20 = ((x85+(x86<x87))<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int64_t x90 = -1LL;
	static int32_t x91 = INT32_MAX;
	int16_t x92 = -1;

	t21 = ((x89+(x90<x91))<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = -1;
	int32_t x94 = -1;
	static uint16_t x95 = UINT16_MAX;
	int32_t t22 = 4161665;

	t22 = ((x93+(x94<x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x98 = -1LL;
	int32_t x99 = 4504996;
	static int64_t x100 = INT64_MIN;

	t23 = ((x97+(x98<x99))<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x102 = INT8_MIN;
	int16_t x103 = -1;
	static volatile uint32_t x104 = 29069287U;
	volatile int32_t t24 = 0;

	t24 = ((x101+(x102<x103))<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = UINT8_MAX;
	static int16_t x106 = INT16_MIN;
	int16_t x107 = -1;
	uint8_t x108 = 1U;
	int32_t t25 = 241;

	t25 = ((x105+(x106<x107))<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	volatile uint8_t x111 = 7U;
	static int32_t t26 = 11415;

	t26 = ((x109+(x110<x111))<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = -33540;
	int64_t x114 = INT64_MAX;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;
	volatile int32_t t27 = 27434;

	t27 = ((x113+(x114<x115))<=x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = 24;
	uint16_t x118 = 6025U;
	volatile int32_t x119 = INT32_MIN;
	static int16_t x120 = INT16_MAX;

	t28 = ((x117+(x118<x119))<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 3624901513474179858LLU;
	volatile int64_t x122 = -1006917784854329LL;

	t29 = ((x121+(x122<x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = INT64_MIN;
	int64_t x127 = 368634641459408LL;
	static volatile int32_t t30 = -18755;

	t30 = ((x125+(x126<x127))<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = INT8_MIN;
	volatile int64_t x131 = -1LL;
	static uint16_t x132 = 24013U;

	t31 = ((x129+(x130<x131))<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = -1;
	uint8_t x134 = 11U;
	volatile int64_t x135 = INT64_MAX;

	t32 = ((x133+(x134<x135))<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = 120;
	int8_t x138 = INT8_MIN;
	static int8_t x139 = INT8_MAX;
	static int8_t x140 = -8;
	volatile int32_t t33 = 58092097;

	t33 = ((x137+(x138<x139))<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x141 = UINT8_MAX;
	static int16_t x142 = -6;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t34 = -701766844;

	t34 = ((x141+(x142<x143))<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x145 = 94U;
	int8_t x146 = -9;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 0U;
	volatile int32_t t35 = 30;

	t35 = ((x145+(x146<x147))<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x150 = -1;
	static volatile int8_t x151 = INT8_MIN;
	static int8_t x152 = INT8_MIN;
	int32_t t36 = 596221517;

	t36 = ((x149+(x150<x151))<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = 170LL;
	static int8_t x154 = -10;
	volatile int64_t x155 = 247551279137LL;
	static uint64_t x156 = 1LLU;
	static volatile int32_t t37 = -7160;

	t37 = ((x153+(x154<x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 0;
	int8_t x158 = 52;
	static int8_t x159 = -1;
	uint64_t x160 = 4365331498LLU;
	int32_t t38 = 290055;

	t38 = ((x157+(x158<x159))<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = 43;
	static volatile uint32_t x162 = 14073U;
	static int16_t x164 = -2118;
	int32_t t39 = 241;

	t39 = ((x161+(x162<x163))<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = -1;
	uint32_t x167 = 10U;
	int16_t x168 = 1918;
	static int32_t t40 = -25967152;

	t40 = ((x165+(x166<x167))<=x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 838737LLU;
	int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -1;
	static int32_t t41 = -7;

	t41 = ((x169+(x170<x171))<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x175 = INT16_MIN;
	uint8_t x176 = 0U;
	volatile int32_t t42 = 251145926;

	t42 = ((x173+(x174<x175))<=x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = -18;
	int64_t x178 = -1LL;
	uint8_t x179 = 62U;
	static int8_t x180 = -7;
	volatile int32_t t43 = 13550;

	t43 = ((x177+(x178<x179))<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 44;
	uint32_t x182 = 2106416U;
	volatile int32_t x183 = 1;
	static volatile int32_t x184 = INT32_MIN;

	t44 = ((x181+(x182<x183))<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;
	static volatile int8_t x186 = 12;
	int8_t x187 = 1;
	int16_t x188 = 463;
	int32_t t45 = 4172739;

	t45 = ((x185+(x186<x187))<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	static uint16_t x190 = 5U;
	int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MAX;
	volatile int32_t t46 = 1;

	t46 = ((x189+(x190<x191))<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = 480;
	int64_t x195 = -1LL;
	int32_t x196 = -1;
	int32_t t47 = 34;

	t47 = ((x193+(x194<x195))<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 4228U;
	static uint32_t x199 = UINT32_MAX;
	volatile int32_t t48 = -5033;

	t48 = ((x197+(x198<x199))<=x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = 27;
	uint8_t x202 = 13U;
	int32_t x203 = INT32_MIN;
	int32_t x204 = -1;
	int32_t t49 = 208;

	t49 = ((x201+(x202<x203))<=x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -1;
	static uint32_t x206 = 617659675U;
	static volatile int64_t x207 = INT64_MIN;
	static uint32_t x208 = UINT32_MAX;
	int32_t t50 = -12532134;

	t50 = ((x205+(x206<x207))<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x209 = 189U;
	int8_t x210 = INT8_MAX;
	uint8_t x211 = 15U;
	int32_t x212 = INT32_MIN;
	int32_t t51 = -21016007;

	t51 = ((x209+(x210<x211))<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x213 = INT8_MIN;
	uint8_t x214 = 17U;
	volatile int8_t x215 = INT8_MIN;
	volatile int32_t t52 = -10;

	t52 = ((x213+(x214<x215))<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x217 = 95279U;
	uint32_t x218 = 336U;
	int16_t x219 = INT16_MIN;
	volatile int32_t x220 = -78637671;
	int32_t t53 = -6845;

	t53 = ((x217+(x218<x219))<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x222 = -1;
	int16_t x224 = INT16_MIN;
	int32_t t54 = 437;

	t54 = ((x221+(x222<x223))<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	uint16_t x226 = 14326U;
	int16_t x228 = -1;
	static volatile int32_t t55 = -50186;

	t55 = ((x225+(x226<x227))<=x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = 1;
	static volatile uint64_t x231 = 0LLU;
	static int64_t x232 = INT64_MIN;
	int32_t t56 = 4;

	t56 = ((x229+(x230<x231))<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 971690590U;
	int64_t x234 = 262LL;
	uint64_t x235 = 8614950947676LLU;
	volatile int32_t t57 = 21006559;

	t57 = ((x233+(x234<x235))<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x238 = UINT64_MAX;
	static uint64_t x239 = UINT64_MAX;
	int32_t x240 = -1;

	t58 = ((x237+(x238<x239))<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -1;
	volatile uint16_t x242 = 8U;
	uint64_t x244 = 4207101343LLU;

	t59 = ((x241+(x242<x243))<=x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -49348;
	static int64_t x250 = INT64_MAX;
	int16_t x251 = -1;
	static volatile int32_t t60 = 3180;

	t60 = ((x249+(x250<x251))<=x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 8U;
	int16_t x254 = 827;
	int32_t x256 = -57;
	int32_t t61 = 209;

	t61 = ((x253+(x254<x255))<=x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	uint16_t x259 = 187U;
	static int32_t x260 = 35;

	t62 = ((x257+(x258<x259))<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	uint16_t x262 = UINT16_MAX;
	static int32_t x263 = 587877;
	int32_t x264 = -645946;
	int32_t t63 = 22991828;

	t63 = ((x261+(x262<x263))<=x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x267 = 425U;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t64 = -3;

	t64 = ((x265+(x266<x267))<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x269 = INT64_MIN;
	static uint32_t x270 = UINT32_MAX;
	int32_t x271 = -1;
	int16_t x272 = -12093;
	volatile int32_t t65 = 5;

	t65 = ((x269+(x270<x271))<=x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1;
	static volatile uint16_t x274 = 1U;
	int16_t x275 = -31;
	volatile int8_t x276 = -1;

	t66 = ((x273+(x274<x275))<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = INT8_MAX;
	int64_t x278 = -888LL;
	int32_t x279 = -253;
	int16_t x280 = -1;
	static int32_t t67 = 119046;

	t67 = ((x277+(x278<x279))<=x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x281 = INT16_MAX;
	int16_t x282 = INT16_MIN;
	volatile int64_t x283 = 3LL;
	volatile int8_t x284 = 2;
	int32_t t68 = -5;

	t68 = ((x281+(x282<x283))<=x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = 5;
	uint32_t x286 = 170963261U;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = 1027U;
	int32_t t69 = 2043986;

	t69 = ((x285+(x286<x287))<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x290 = INT32_MAX;
	int8_t x292 = INT8_MAX;
	static int32_t t70 = -170094;

	t70 = ((x289+(x290<x291))<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = 280U;
	volatile uint8_t x294 = UINT8_MAX;
	int32_t x295 = 422;
	volatile int32_t t71 = -1040095;

	t71 = ((x293+(x294<x295))<=x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x298 = INT16_MAX;
	int32_t x299 = INT32_MIN;
	static int8_t x300 = INT8_MIN;
	static int32_t t72 = 468;

	t72 = ((x297+(x298<x299))<=x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -20196LL;
	static int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MIN;
	volatile int32_t t73 = 15897625;

	t73 = ((x301+(x302<x303))<=x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = UINT8_MAX;
	static int32_t x308 = INT32_MIN;

	t74 = ((x305+(x306<x307))<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x309 = 0U;
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MAX;
	volatile uint64_t x312 = 626525128LLU;
	int32_t t75 = 7953;

	t75 = ((x309+(x310<x311))<=x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x313 = 6U;
	volatile uint16_t x314 = UINT16_MAX;
	volatile int16_t x315 = INT16_MIN;
	static uint16_t x316 = UINT16_MAX;

	t76 = ((x313+(x314<x315))<=x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x317 = UINT16_MAX;
	uint32_t x319 = UINT32_MAX;
	static uint8_t x320 = 1U;
	volatile int32_t t77 = -55403247;

	t77 = ((x317+(x318<x319))<=x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = 4161;
	volatile int8_t x322 = INT8_MIN;
	int32_t x323 = 15618329;
	int32_t x324 = -15571593;
	static int32_t t78 = -28645732;

	t78 = ((x321+(x322<x323))<=x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x326 = INT16_MAX;
	uint8_t x327 = UINT8_MAX;
	uint32_t x328 = UINT32_MAX;
	int32_t t79 = 1;

	t79 = ((x325+(x326<x327))<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x329 = UINT8_MAX;
	static int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MAX;
	int8_t x332 = -1;
	int32_t t80 = 494;

	t80 = ((x329+(x330<x331))<=x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x333 = 3;

	t81 = ((x333+(x334<x335))<=x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x337 = -1;
	static volatile int8_t x338 = 20;
	uint16_t x339 = 12U;
	static volatile int32_t x340 = INT32_MIN;
	volatile int32_t t82 = 11261252;

	t82 = ((x337+(x338<x339))<=x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = UINT16_MAX;
	volatile int32_t x342 = -2093;
	uint64_t x344 = 2863431395430480LLU;
	int32_t t83 = 6390388;

	t83 = ((x341+(x342<x343))<=x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x345 = UINT64_MAX;
	uint8_t x346 = UINT8_MAX;
	int8_t x347 = INT8_MAX;
	uint32_t x348 = 499749685U;
	int32_t t84 = 3650436;

	t84 = ((x345+(x346<x347))<=x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -1LL;
	int32_t x350 = INT32_MIN;
	static volatile uint64_t x351 = UINT64_MAX;
	volatile int32_t x352 = INT32_MAX;

	t85 = ((x349+(x350<x351))<=x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x353 = -1LL;
	int32_t x354 = INT32_MIN;
	static volatile int8_t x355 = INT8_MIN;
	int16_t x356 = -1;

	t86 = ((x353+(x354<x355))<=x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -1LL;
	volatile int64_t x358 = INT64_MIN;
	uint32_t x359 = 110U;
	int16_t x360 = -15841;
	int32_t t87 = 1050381086;

	t87 = ((x357+(x358<x359))<=x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = -1LL;
	static volatile int32_t t88 = -1363;

	t88 = ((x361+(x362<x363))<=x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x365 = UINT16_MAX;
	static uint8_t x367 = UINT8_MAX;
	volatile int32_t x368 = INT32_MIN;

	t89 = ((x365+(x366<x367))<=x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x369 = INT64_MIN;
	volatile int8_t x370 = 12;
	int32_t x372 = -1;
	volatile int32_t t90 = -141766684;

	t90 = ((x369+(x370<x371))<=x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = 115005763U;
	static uint64_t x378 = 84741LLU;
	int16_t x380 = 21;
	static int32_t t91 = 2909;

	t91 = ((x377+(x378<x379))<=x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = 773LLU;
	uint32_t x382 = 425U;
	volatile int64_t x384 = 129664LL;
	int32_t t92 = 21;

	t92 = ((x381+(x382<x383))<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x385 = 20;
	volatile uint64_t x386 = 10787567900986LLU;
	int16_t x387 = INT16_MIN;
	int32_t t93 = -279301843;

	t93 = ((x385+(x386<x387))<=x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x389 = UINT16_MAX;
	static int16_t x390 = INT16_MAX;
	static uint8_t x391 = 4U;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t94 = -1350340;

	t94 = ((x389+(x390<x391))<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x393 = 127U;
	uint8_t x394 = 99U;
	static int32_t x395 = INT32_MIN;
	static uint64_t x396 = 32330716218602082LLU;
	static int32_t t95 = -2;

	t95 = ((x393+(x394<x395))<=x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x399 = INT16_MAX;
	int32_t t96 = 1;

	t96 = ((x397+(x398<x399))<=x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x401 = INT32_MIN;
	volatile int8_t x402 = INT8_MIN;
	uint16_t x403 = 1534U;
	int8_t x404 = -28;
	static volatile int32_t t97 = 15;

	t97 = ((x401+(x402<x403))<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MAX;
	int8_t x408 = 6;
	int32_t t98 = 2800709;

	t98 = ((x405+(x406<x407))<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x411 = 3985;
	static volatile int64_t x412 = 3985354245221520748LL;
	int32_t t99 = -6;

	t99 = ((x409+(x410<x411))<=x412);

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

