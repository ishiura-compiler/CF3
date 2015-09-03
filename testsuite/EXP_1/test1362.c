#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x3 = -162;
int16_t x8 = -1;
volatile int8_t x17 = 16;
uint16_t x23 = 15809U;
uint32_t x27 = UINT32_MAX;
volatile int16_t x29 = -1;
int16_t x32 = -1;
static uint16_t x33 = 48U;
volatile int16_t x40 = INT16_MAX;
volatile int32_t x41 = INT32_MAX;
uint8_t x45 = 73U;
static volatile int64_t x46 = 1324341345LL;
static int8_t x50 = INT8_MIN;
int64_t x54 = INT64_MAX;
static uint16_t x55 = 30U;
volatile int32_t t12 = 178;
static int32_t t13 = -143966537;
static volatile uint16_t x61 = 18U;
int64_t x63 = 99LL;
volatile int32_t t15 = -234701524;
volatile int8_t x86 = INT8_MIN;
volatile int32_t t20 = 71;
volatile uint32_t x89 = 493109331U;
uint16_t x95 = UINT16_MAX;
int32_t x97 = 84977;
int32_t x100 = -370691678;
uint64_t x103 = 0LLU;
static int32_t x108 = INT32_MIN;
volatile int32_t x110 = INT32_MAX;
int8_t x111 = 1;
uint32_t x113 = 100774U;
volatile uint64_t x126 = 910021860362LLU;
static uint16_t x127 = 11541U;
int32_t t32 = 5491212;
uint16_t x145 = 0U;
int32_t x156 = -1;
volatile int32_t t37 = 747;
int16_t x162 = INT16_MIN;
uint64_t x164 = UINT64_MAX;
static volatile int64_t x170 = INT64_MIN;
int32_t t41 = -1933;
int32_t x173 = 29467722;
volatile int8_t x177 = 28;
static uint32_t x179 = 1555U;
uint16_t x180 = 1258U;
int32_t t45 = -16787;
int32_t t46 = 355903299;
volatile uint16_t x193 = 2U;
int64_t x198 = -13175619242LL;
volatile int32_t x200 = 24;
int16_t x202 = 88;
int64_t x203 = INT64_MIN;
volatile int32_t t49 = -244232582;
int64_t x212 = INT64_MAX;
int8_t x214 = 20;
static int32_t x216 = INT32_MIN;
volatile int32_t t52 = -8;
volatile int64_t x230 = INT64_MIN;
int32_t x238 = INT32_MIN;
int64_t x243 = INT64_MIN;
static volatile int64_t x245 = INT64_MAX;
uint8_t x247 = UINT8_MAX;
static int8_t x258 = 0;
int16_t x259 = -2;
int32_t t63 = 1068928;
int16_t x262 = 11;
volatile int64_t x265 = INT64_MAX;
volatile uint16_t x268 = UINT16_MAX;
int32_t x273 = -1;
static uint8_t x278 = 4U;
volatile int64_t x283 = 2LL;
int64_t x286 = 19LL;
uint64_t x289 = UINT64_MAX;
static volatile int64_t x293 = -1LL;
int8_t x296 = INT8_MAX;
int8_t x298 = INT8_MIN;
int16_t x301 = -1;
volatile uint8_t x303 = 69U;
int32_t t74 = -298634116;
int64_t x313 = INT64_MIN;
uint64_t x318 = UINT64_MAX;
int64_t x319 = INT64_MIN;
volatile int64_t x329 = -23LL;
int16_t x332 = -1;
int64_t x333 = -1LL;
int32_t x342 = 10543356;
volatile int64_t x344 = -1LL;
volatile int32_t t85 = -654024643;
volatile uint16_t x355 = UINT16_MAX;
int16_t x360 = -48;
int32_t t89 = 1;
volatile int32_t t90 = 101;
static int32_t x380 = INT32_MIN;
int32_t t92 = -16133;
int8_t x382 = -1;
int32_t x391 = -1;
volatile int64_t x392 = -282292739LL;
uint8_t x394 = 7U;
int32_t t96 = 3;
int32_t t99 = 487;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int8_t x2 = -44;
	int16_t x4 = -1;
	static int32_t t0 = -1;

	t0 = (((x1<x2)+x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = 9563588870261LLU;
	static int64_t x7 = INT64_MIN;
	int32_t t1 = -19378159;

	t1 = (((x5<x6)+x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 47;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = 1792819;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t2 = 1;

	t2 = (((x13<x14)+x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	volatile int8_t x19 = INT8_MIN;
	uint32_t x20 = UINT32_MAX;
	static int32_t t3 = 6196;

	t3 = (((x17<x18)+x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x21 = 9U;
	int16_t x22 = INT16_MIN;
	int64_t x24 = -1LL;
	static volatile int32_t t4 = 16604520;

	t4 = (((x21<x22)+x23)<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 15280434327219LLU;
	static int32_t x26 = -73822;
	static int16_t x28 = 1;
	int32_t t5 = -504;

	t5 = (((x25<x26)+x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = -51;
	int32_t x31 = -19817;
	volatile int32_t t6 = 479;

	t6 = (((x29<x30)+x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	static volatile int32_t x36 = 2751889;
	volatile int32_t t7 = 6845380;

	t7 = (((x33<x34)+x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 7U;
	int8_t x38 = 42;
	volatile int32_t x39 = -19877772;
	volatile int32_t t8 = 7141;

	t8 = (((x37<x38)+x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -1;
	static int8_t x43 = INT8_MIN;
	static int64_t x44 = INT64_MIN;
	int32_t t9 = -2;

	t9 = (((x41<x42)+x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x47 = UINT64_MAX;
	volatile int16_t x48 = INT16_MIN;
	static volatile int32_t t10 = 3368;

	t10 = (((x45<x46)+x47)<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -2299825;
	int32_t x51 = -2;
	volatile int8_t x52 = INT8_MIN;
	int32_t t11 = 73958138;

	t11 = (((x49<x50)+x51)<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 27352996611298LLU;
	int64_t x56 = INT64_MIN;

	t12 = (((x53<x54)+x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 930U;
	static int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = 115U;

	t13 = (((x57<x58)+x59)<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x62 = INT32_MIN;
	static uint16_t x64 = 8614U;
	int32_t t14 = -157;

	t14 = (((x61<x62)+x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint32_t x66 = 1U;
	int32_t x67 = INT32_MAX;
	uint64_t x68 = 189972679039817LLU;

	t15 = (((x65<x66)+x67)<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -5;
	int8_t x70 = -1;
	int32_t x71 = -1;
	volatile uint8_t x72 = 8U;
	volatile int32_t t16 = -980964;

	t16 = (((x69<x70)+x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	uint16_t x74 = UINT16_MAX;
	uint64_t x75 = UINT64_MAX;
	uint8_t x76 = 3U;
	int32_t t17 = -7885985;

	t17 = (((x73<x74)+x75)<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 84810708538LLU;
	int32_t x79 = INT32_MIN;
	static int64_t x80 = -1LL;
	static volatile int32_t t18 = -4925;

	t18 = (((x77<x78)+x79)<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = INT32_MAX;
	int64_t x82 = 5LL;
	uint64_t x83 = 769LLU;
	uint8_t x84 = 15U;
	volatile int32_t t19 = 966067;

	t19 = (((x81<x82)+x83)<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MIN;
	uint32_t x87 = 183587U;
	int64_t x88 = -1588533378636274LL;

	t20 = (((x85<x86)+x87)<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = 2268306708447268193LL;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = 13965527853495398LLU;
	volatile int32_t t21 = -22;

	t21 = (((x89<x90)+x91)<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	int64_t x96 = -1LL;
	int32_t t22 = 15722;

	t22 = (((x93<x94)+x95)<=x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x98 = 568715999LL;
	uint8_t x99 = UINT8_MAX;
	int32_t t23 = 119048;

	t23 = (((x97<x98)+x99)<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = INT8_MIN;
	int8_t x102 = -2;
	int8_t x104 = INT8_MAX;
	volatile int32_t t24 = -83;

	t24 = (((x101<x102)+x103)<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -285293825LL;
	int64_t x106 = 339011LL;
	int16_t x107 = 5258;
	static int32_t t25 = 0;

	t25 = (((x105<x106)+x107)<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = 16373630417066469LL;
	static uint16_t x112 = UINT16_MAX;
	static volatile int32_t t26 = -12574;

	t26 = (((x109<x110)+x111)<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x114 = UINT64_MAX;
	int16_t x115 = -7;
	static uint8_t x116 = 1U;
	int32_t t27 = -2;

	t27 = (((x113<x114)+x115)<=x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MIN;
	int8_t x119 = -1;
	uint32_t x120 = 133U;
	volatile int32_t t28 = -12;

	t28 = (((x117<x118)+x119)<=x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = -39495730700821653LL;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t29 = 9435616;

	t29 = (((x121<x122)+x123)<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = 69;
	uint16_t x128 = UINT16_MAX;
	int32_t t30 = -27071;

	t30 = (((x125<x126)+x127)<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x129 = 26782LLU;
	static uint16_t x130 = 90U;
	volatile int64_t x131 = -25296301161LL;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = 1;

	t31 = (((x129<x130)+x131)<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x134 = 435U;
	int32_t x135 = -696458237;
	int16_t x136 = 16231;

	t32 = (((x133<x134)+x135)<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	int16_t x138 = 4463;
	int32_t x139 = -14251217;
	int32_t x140 = -22084930;
	volatile int32_t t33 = -1808;

	t33 = (((x137<x138)+x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x141 = -445;
	uint32_t x142 = 535U;
	int16_t x143 = INT16_MIN;
	uint16_t x144 = 21U;
	static volatile int32_t t34 = 26962;

	t34 = (((x141<x142)+x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x146 = 1U;
	static volatile int32_t x147 = 34215;
	int8_t x148 = INT8_MIN;
	int32_t t35 = 1;

	t35 = (((x145<x146)+x147)<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = INT64_MIN;
	uint64_t x150 = 555693LLU;
	uint16_t x151 = 896U;
	int64_t x152 = -1LL;
	volatile int32_t t36 = -217;

	t36 = (((x149<x150)+x151)<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = INT16_MAX;
	volatile int64_t x154 = INT64_MIN;
	static uint16_t x155 = 12U;

	t37 = (((x153<x154)+x155)<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MAX;
	static volatile uint8_t x158 = UINT8_MAX;
	int32_t x159 = -1;
	int64_t x160 = INT64_MIN;
	int32_t t38 = 18171;

	t38 = (((x157<x158)+x159)<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	static int16_t x163 = INT16_MIN;
	int32_t t39 = 16417370;

	t39 = (((x161<x162)+x163)<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = UINT8_MAX;
	uint8_t x166 = UINT8_MAX;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t40 = 400246786;

	t40 = (((x165<x166)+x167)<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MAX;
	static int64_t x171 = -1LL;
	uint8_t x172 = 2U;

	t41 = (((x169<x170)+x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x174 = INT16_MIN;
	static uint32_t x175 = 103177602U;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t42 = 68343661;

	t42 = (((x173<x174)+x175)<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x178 = 14275628;
	volatile int32_t t43 = 339;

	t43 = (((x177<x178)+x179)<=x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = UINT64_MAX;
	int32_t x182 = 2;
	uint64_t x183 = 7926022327164793LLU;
	uint64_t x184 = 261406763145929LLU;
	static volatile int32_t t44 = -7758;

	t44 = (((x181<x182)+x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = -3;
	uint16_t x186 = 9004U;
	volatile int64_t x187 = INT64_MIN;
	volatile int32_t x188 = -1;

	t45 = (((x185<x186)+x187)<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x189 = INT8_MIN;
	static uint16_t x190 = 3U;
	volatile int32_t x191 = INT32_MIN;
	volatile int32_t x192 = INT32_MIN;

	t46 = (((x189<x190)+x191)<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x194 = INT16_MIN;
	volatile uint64_t x195 = 4516654684337500LLU;
	volatile int8_t x196 = -21;
	int32_t t47 = 1;

	t47 = (((x193<x194)+x195)<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -1;
	int8_t x199 = -41;
	int32_t t48 = 3;

	t48 = (((x197<x198)+x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -1LL;
	static uint16_t x204 = 4U;

	t49 = (((x201<x202)+x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x205 = 20U;
	static volatile uint32_t x206 = 7U;
	int8_t x207 = -1;
	static int64_t x208 = 1567024LL;
	static volatile int32_t t50 = -230;

	t50 = (((x205<x206)+x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -1LL;
	static int32_t x210 = -1;
	int8_t x211 = 59;
	int32_t t51 = 0;

	t51 = (((x209<x210)+x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MAX;
	uint16_t x215 = 23U;

	t52 = (((x213<x214)+x215)<=x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 63U;
	int16_t x218 = 0;
	volatile int16_t x219 = 1;
	static volatile int8_t x220 = -1;
	volatile int32_t t53 = 47403;

	t53 = (((x217<x218)+x219)<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = UINT8_MAX;
	volatile int8_t x222 = INT8_MAX;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = 757403LL;
	volatile int32_t t54 = 63;

	t54 = (((x221<x222)+x223)<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = 2658U;
	volatile int8_t x226 = INT8_MIN;
	uint8_t x227 = 37U;
	int8_t x228 = -2;
	static volatile int32_t t55 = 7;

	t55 = (((x225<x226)+x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x229 = -1;
	int32_t x231 = 1028122;
	static int64_t x232 = INT64_MAX;
	volatile int32_t t56 = -960597290;

	t56 = (((x229<x230)+x231)<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = 172;
	uint32_t x234 = 138364U;
	static volatile uint8_t x235 = 1U;
	int8_t x236 = -1;
	volatile int32_t t57 = 4;

	t57 = (((x233<x234)+x235)<=x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = -1;
	static volatile int32_t x239 = 29609;
	int32_t x240 = INT32_MIN;
	volatile int32_t t58 = 6641020;

	t58 = (((x237<x238)+x239)<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x241 = -7837883736568LL;
	int64_t x242 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t59 = 0;

	t59 = (((x241<x242)+x243)<=x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x246 = INT64_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t60 = -1365186;

	t60 = (((x245<x246)+x247)<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = 0;
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = -1;
	static int16_t x252 = -363;
	int32_t t61 = 77955;

	t61 = (((x249<x250)+x251)<=x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MIN;
	volatile uint32_t x256 = 993285100U;
	int32_t t62 = 2218;

	t62 = (((x253<x254)+x255)<=x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MAX;
	int64_t x260 = INT64_MIN;

	t63 = (((x257<x258)+x259)<=x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MIN;
	static int8_t x263 = INT8_MIN;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t64 = -27;

	t64 = (((x261<x262)+x263)<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x266 = INT16_MIN;
	int64_t x267 = 1030986101LL;
	int32_t t65 = -42597;

	t65 = (((x265<x266)+x267)<=x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = UINT8_MAX;
	uint32_t x270 = 1848286624U;
	int8_t x271 = INT8_MIN;
	int8_t x272 = -1;
	int32_t t66 = 492;

	t66 = (((x269<x270)+x271)<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x274 = -1LL;
	uint16_t x275 = 0U;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t67 = 4680337;

	t67 = (((x273<x274)+x275)<=x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t68 = -41914;

	t68 = (((x277<x278)+x279)<=x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = UINT32_MAX;
	int16_t x282 = -6079;
	static volatile int16_t x284 = -671;
	int32_t t69 = 484557060;

	t69 = (((x281<x282)+x283)<=x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = -1;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = UINT32_MAX;
	volatile int32_t t70 = 7;

	t70 = (((x285<x286)+x287)<=x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x290 = -921794;
	volatile int32_t x291 = INT32_MAX;
	int16_t x292 = INT16_MIN;
	volatile int32_t t71 = -13;

	t71 = (((x289<x290)+x291)<=x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = INT8_MAX;
	int64_t x295 = 6584LL;
	static volatile int32_t t72 = -2006;

	t72 = (((x293<x294)+x295)<=x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x297 = INT64_MAX;
	static int8_t x299 = 0;
	static uint8_t x300 = 113U;
	int32_t t73 = -10737871;

	t73 = (((x297<x298)+x299)<=x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x302 = -1;
	uint64_t x304 = 795020468097519072LLU;

	t74 = (((x301<x302)+x303)<=x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = -1;
	int32_t t75 = 797594023;

	t75 = (((x305<x306)+x307)<=x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x314 = UINT32_MAX;
	int64_t x315 = -1LL;
	int32_t x316 = INT32_MIN;
	int32_t t76 = 972656;

	t76 = (((x313<x314)+x315)<=x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x317 = 7533U;
	volatile int8_t x320 = -1;
	volatile int32_t t77 = -853743;

	t77 = (((x317<x318)+x319)<=x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x321 = 392U;
	int8_t x322 = INT8_MAX;
	static int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MAX;
	volatile int32_t t78 = -6;

	t78 = (((x321<x322)+x323)<=x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MAX;
	volatile int16_t x326 = INT16_MAX;
	static volatile int32_t x327 = INT32_MIN;
	int32_t x328 = 18523;
	static volatile int32_t t79 = 16675;

	t79 = (((x325<x326)+x327)<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x330 = 14U;
	uint16_t x331 = 4005U;
	int32_t t80 = -13639615;

	t80 = (((x329<x330)+x331)<=x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x334 = 12832945U;
	int16_t x335 = 74;
	int16_t x336 = INT16_MIN;
	volatile int32_t t81 = -44;

	t81 = (((x333<x334)+x335)<=x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -5638631;
	uint8_t x338 = 0U;
	uint16_t x339 = 3088U;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t82 = -289;

	t82 = (((x337<x338)+x339)<=x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = 8;
	uint32_t x343 = UINT32_MAX;
	volatile int32_t t83 = -995610;

	t83 = (((x341<x342)+x343)<=x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = UINT64_MAX;
	static int32_t x346 = INT32_MIN;
	volatile int8_t x347 = -1;
	static int16_t x348 = INT16_MIN;
	static volatile int32_t t84 = 8010;

	t84 = (((x345<x346)+x347)<=x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -4103086LL;
	static int32_t x350 = INT32_MAX;
	static int8_t x351 = -1;
	uint16_t x352 = UINT16_MAX;

	t85 = (((x349<x350)+x351)<=x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MAX;
	volatile uint32_t x356 = UINT32_MAX;
	static int32_t t86 = -231;

	t86 = (((x353<x354)+x355)<=x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x357 = 102U;
	int8_t x358 = -1;
	static volatile int16_t x359 = INT16_MIN;
	static int32_t t87 = -2658;

	t87 = (((x357<x358)+x359)<=x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 16359100U;
	uint64_t x362 = 1309254957187LLU;
	static uint64_t x363 = 987421644355LLU;
	uint8_t x364 = UINT8_MAX;
	int32_t t88 = 80;

	t88 = (((x361<x362)+x363)<=x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = 0;
	int8_t x367 = INT8_MIN;
	int32_t x368 = 2269;

	t89 = (((x365<x366)+x367)<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = -5;
	uint8_t x370 = 1U;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;

	t90 = (((x369<x370)+x371)<=x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x373 = -1;
	static volatile int16_t x374 = 14088;
	int16_t x375 = 0;
	int64_t x376 = -1LL;
	static volatile int32_t t91 = -130404;

	t91 = (((x373<x374)+x375)<=x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x377 = INT32_MAX;
	volatile uint64_t x378 = UINT64_MAX;
	int16_t x379 = INT16_MAX;

	t92 = (((x377<x378)+x379)<=x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x381 = 183U;
	uint8_t x383 = 114U;
	uint16_t x384 = UINT16_MAX;
	static int32_t t93 = -22;

	t93 = (((x381<x382)+x383)<=x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x385 = -30;
	uint32_t x386 = UINT32_MAX;
	uint32_t x387 = 44253U;
	int64_t x388 = INT64_MIN;
	int32_t t94 = 4077636;

	t94 = (((x385<x386)+x387)<=x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x389 = -1;
	static uint32_t x390 = 8U;
	static volatile int32_t t95 = -71965666;

	t95 = (((x389<x390)+x391)<=x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x393 = INT32_MIN;
	static int16_t x395 = INT16_MIN;
	static int64_t x396 = -506576LL;

	t96 = (((x393<x394)+x395)<=x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = -1;
	volatile uint16_t x398 = 0U;
	int64_t x399 = INT64_MIN;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t97 = 21;

	t97 = (((x397<x398)+x399)<=x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = 44038342087130LLU;
	uint64_t x402 = 10318791LLU;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t98 = 6768;

	t98 = (((x401<x402)+x403)<=x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x405 = 10U;
	volatile uint8_t x406 = UINT8_MAX;
	static volatile uint16_t x407 = 61U;
	int8_t x408 = INT8_MIN;

	t99 = (((x405<x406)+x407)<=x408);

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

