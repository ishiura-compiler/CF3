#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x11 = 7217472813LLU;
uint16_t x14 = 111U;
int32_t t4 = 346;
volatile int32_t x27 = INT32_MIN;
uint16_t x28 = 4U;
volatile int32_t t6 = 29;
int32_t x34 = INT32_MAX;
volatile int64_t x36 = INT64_MIN;
volatile int32_t t8 = 99627799;
uint64_t x40 = 416854LLU;
static int64_t x41 = INT64_MIN;
static int16_t x49 = -457;
static volatile uint32_t x53 = UINT32_MAX;
volatile int16_t x55 = INT16_MIN;
volatile int32_t t13 = -192210543;
volatile int64_t x61 = -32650746569657LL;
uint16_t x70 = 81U;
int16_t x72 = -1;
uint64_t x77 = 98894393940LLU;
int16_t x79 = 692;
volatile int32_t t19 = -5359;
uint64_t x89 = 11847503698971481LLU;
int8_t x103 = INT8_MIN;
uint8_t x106 = UINT8_MAX;
volatile int32_t t26 = -535087980;
static volatile int32_t t28 = 0;
uint16_t x117 = 2873U;
int16_t x121 = INT16_MAX;
static volatile int32_t t30 = 1605;
int32_t x129 = INT32_MAX;
static int32_t x130 = 10746619;
int32_t x133 = -179;
int8_t x137 = -1;
static int32_t x140 = 769153512;
volatile int32_t t34 = 107758850;
uint64_t x153 = 1090458917438704341LLU;
int16_t x154 = -1;
static int16_t x155 = INT16_MIN;
static int32_t x160 = -1;
static int16_t x166 = -1;
int32_t t41 = -8172;
int32_t t42 = 102;
uint64_t x189 = 302LLU;
uint32_t x190 = UINT32_MAX;
int64_t x196 = -1LL;
int64_t x203 = 1LL;
int32_t t51 = -84;
int8_t x217 = -1;
int16_t x220 = INT16_MAX;
int32_t x223 = 3959;
volatile int32_t t55 = 59;
volatile int16_t x226 = INT16_MIN;
uint32_t x228 = 2471341U;
int64_t x231 = -513LL;
int16_t x233 = -1;
int64_t x234 = -2415154LL;
uint32_t x236 = 1871U;
int16_t x242 = INT16_MIN;
volatile int32_t t61 = -50500313;
uint64_t x252 = UINT64_MAX;
uint32_t x256 = 45856076U;
uint32_t x262 = UINT32_MAX;
int32_t t65 = 14975;
int64_t x266 = INT64_MIN;
int64_t x267 = INT64_MAX;
static int32_t t66 = 271497;
static int32_t t69 = 37114567;
int32_t x284 = 46;
int8_t x291 = -1;
int32_t t73 = 965364;
uint8_t x298 = 98U;
int16_t x302 = INT16_MAX;
int32_t x303 = -942839;
int64_t x309 = INT64_MIN;
int16_t x315 = INT16_MIN;
volatile int32_t t78 = 202513821;
uint8_t x317 = 28U;
static int16_t x322 = -365;
static int16_t x324 = -1;
static uint64_t x330 = UINT64_MAX;
volatile int32_t t82 = 3;
int64_t x333 = INT64_MIN;
static int32_t t83 = -528316;
int8_t x337 = INT8_MIN;
int64_t x339 = -1014029LL;
uint8_t x346 = 84U;
uint64_t x348 = 0LLU;
volatile int64_t x352 = -8560LL;
uint32_t x354 = 191425998U;
static volatile uint16_t x356 = 1603U;
static uint8_t x357 = 1U;
static volatile uint64_t x361 = 130863276985008827LLU;
uint32_t x362 = 64314U;
volatile int8_t x369 = 1;
uint64_t x370 = UINT64_MAX;
uint16_t x371 = 14U;
volatile int16_t x378 = 65;
int64_t x380 = INT64_MAX;
int8_t x384 = INT8_MAX;
int32_t x386 = INT32_MAX;
int32_t t96 = 12743;
static int8_t x389 = INT8_MIN;
volatile int32_t t97 = -246395988;
uint32_t x393 = 12765U;
int8_t x398 = INT8_MAX;
volatile int32_t x400 = 1;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x2 = 0LL;
	int64_t x3 = INT64_MIN;
	int64_t x4 = -1LL;
	int32_t t0 = -15012127;

	t0 = (x1<((x2&x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 3U;
	volatile int64_t x6 = -1LL;
	static int32_t x7 = INT32_MAX;
	static int8_t x8 = -1;
	volatile int32_t t1 = 151;

	t1 = (x5<((x6&x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MAX;
	uint8_t x10 = 121U;
	int8_t x12 = -1;
	volatile int32_t t2 = -997;

	t2 = (x9<((x10&x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 780;

	t3 = (x13<((x14&x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 12;
	uint64_t x18 = 688700601249921LLU;
	int8_t x19 = 14;
	int8_t x20 = -1;

	t4 = (x17<((x18&x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1301LLU;
	uint16_t x22 = 61U;
	int32_t x23 = 234802699;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -1;

	t5 = (x21<((x22&x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = -1;

	t6 = (x25<((x26&x27)==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int32_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -940;

	t7 = (x29<((x30&x31)==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	uint16_t x35 = 42U;

	t8 = (x33<((x34&x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 262;
	int64_t x38 = 7LL;
	uint16_t x39 = 15329U;
	volatile int32_t t9 = -2;

	t9 = (x37<((x38&x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	volatile int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t10 = -543228;

	t10 = (x41<((x42&x43)==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MIN;
	int8_t x47 = -1;
	int8_t x48 = INT8_MAX;
	int32_t t11 = -273524;

	t11 = (x45<((x46&x47)==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	volatile int8_t x51 = INT8_MIN;
	uint8_t x52 = 0U;
	int32_t t12 = 2;

	t12 = (x49<((x50&x51)==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x54 = INT64_MAX;
	uint8_t x56 = UINT8_MAX;

	t13 = (x53<((x54&x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 33U;
	int16_t x58 = -1;
	uint8_t x59 = 0U;
	static uint8_t x60 = 7U;
	volatile int32_t t14 = -594839726;

	t14 = (x57<((x58&x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MAX;
	static uint8_t x63 = 35U;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = 275750;

	t15 = (x61<((x62&x63)==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -43116496660734602LL;
	int16_t x66 = INT16_MIN;
	int8_t x67 = -4;
	uint16_t x68 = 1U;
	static int32_t t16 = -22199;

	t16 = (x65<((x66&x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 136917289951LLU;
	int32_t x71 = INT32_MIN;
	volatile int32_t t17 = 45332;

	t17 = (x69<((x70&x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1;
	static uint64_t x74 = UINT64_MAX;
	uint32_t x75 = 2133U;
	uint64_t x76 = 2598586253500392294LLU;
	int32_t t18 = 4;

	t18 = (x73<((x74&x75)==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	static volatile uint32_t x80 = 80U;

	t19 = (x77<((x78&x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	uint16_t x82 = 25U;
	uint32_t x83 = 279917U;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = -1405799;

	t20 = (x81<((x82&x83)==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	uint64_t x87 = UINT64_MAX;
	volatile int8_t x88 = -3;
	volatile int32_t t21 = 2;

	t21 = (x85<((x86&x87)==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MAX;
	volatile int64_t x91 = INT64_MIN;
	int8_t x92 = 0;
	int32_t t22 = -527471340;

	t22 = (x89<((x90&x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 440LL;
	volatile uint64_t x94 = UINT64_MAX;
	static volatile uint8_t x95 = 3U;
	uint16_t x96 = 14U;
	volatile int32_t t23 = 47795092;

	t23 = (x93<((x94&x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 12883431LLU;
	static volatile int32_t x98 = INT32_MIN;
	volatile uint16_t x99 = UINT16_MAX;
	uint32_t x100 = UINT32_MAX;
	int32_t t24 = -5480;

	t24 = (x97<((x98&x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	volatile int8_t x102 = -1;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = -89;

	t25 = (x101<((x102&x103)==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 50362;
	int16_t x107 = INT16_MAX;
	volatile uint16_t x108 = 19U;

	t26 = (x105<((x106&x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 1;
	static int64_t x110 = INT64_MIN;
	int8_t x111 = -3;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = 0;

	t27 = (x109<((x110&x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 89;
	static uint8_t x114 = 45U;
	int64_t x115 = 3136LL;
	volatile int16_t x116 = 2499;

	t28 = (x113<((x114&x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x118 = -1;
	static int8_t x119 = -1;
	static int16_t x120 = INT16_MAX;
	volatile int32_t t29 = 0;

	t29 = (x117<((x118&x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x122 = -1418;
	int8_t x123 = INT8_MIN;
	int16_t x124 = 1;

	t30 = (x121<((x122&x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = 499023939U;
	uint8_t x127 = UINT8_MAX;
	uint8_t x128 = 91U;
	volatile int32_t t31 = 1745201;

	t31 = (x125<((x126&x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x131 = UINT8_MAX;
	static uint64_t x132 = UINT64_MAX;
	volatile int32_t t32 = -6;

	t32 = (x129<((x130&x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x134 = INT8_MAX;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = 10390U;
	int32_t t33 = -98258056;

	t33 = (x133<((x134&x135)==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MIN;
	static int16_t x139 = 0;

	t34 = (x137<((x138&x139)==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = 25;
	volatile int32_t t35 = -14255;

	t35 = (x141<((x142&x143)==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 21580U;
	int16_t x146 = 866;
	int64_t x147 = -1LL;
	static uint8_t x148 = UINT8_MAX;
	int32_t t36 = -225;

	t36 = (x145<((x146&x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = 2743181625941LL;
	volatile int16_t x151 = 30;
	int8_t x152 = 1;
	volatile int32_t t37 = 139;

	t37 = (x149<((x150&x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x156 = 2U;
	volatile int32_t t38 = 3425;

	t38 = (x153<((x154&x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = UINT16_MAX;
	static int8_t x158 = 0;
	int32_t x159 = 20;
	static int32_t t39 = 66341969;

	t39 = (x157<((x158&x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x161 = INT16_MIN;
	static int64_t x162 = -1LL;
	volatile int16_t x163 = INT16_MIN;
	int8_t x164 = 2;
	volatile int32_t t40 = -173345648;

	t40 = (x161<((x162&x163)==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 1LL;
	uint8_t x167 = UINT8_MAX;
	volatile uint32_t x168 = 1407784299U;

	t41 = (x165<((x166&x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	uint8_t x172 = UINT8_MAX;

	t42 = (x169<((x170&x171)==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = UINT32_MAX;
	volatile uint64_t x174 = 46289690LLU;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MAX;
	volatile int32_t t43 = 30;

	t43 = (x173<((x174&x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 43741110337411647LL;
	int64_t x178 = INT64_MAX;
	static uint8_t x179 = UINT8_MAX;
	volatile int8_t x180 = -1;
	int32_t t44 = -109221100;

	t44 = (x177<((x178&x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MAX;
	int32_t x183 = INT32_MAX;
	int32_t x184 = -1;
	volatile int32_t t45 = 414410;

	t45 = (x181<((x182&x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	uint32_t x186 = 933359U;
	uint64_t x187 = 1108LLU;
	static int64_t x188 = 30542172453518LL;
	volatile int32_t t46 = -2053228;

	t46 = (x185<((x186&x187)==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x191 = 505376549LLU;
	static volatile uint64_t x192 = 5333400896949LLU;
	int32_t t47 = 211494861;

	t47 = (x189<((x190&x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	static int32_t x194 = INT32_MAX;
	int64_t x195 = 204232611775LL;
	volatile int32_t t48 = -3343229;

	t48 = (x193<((x194&x195)==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MAX;
	int16_t x198 = -1823;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = UINT32_MAX;
	int32_t t49 = 1;

	t49 = (x197<((x198&x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = -1LL;
	int16_t x204 = INT16_MIN;
	static int32_t t50 = 4769;

	t50 = (x201<((x202&x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	volatile int16_t x208 = 14867;

	t51 = (x205<((x206&x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -212;
	int64_t x210 = -1LL;
	static int64_t x211 = -33LL;
	static volatile int64_t x212 = INT64_MIN;
	int32_t t52 = -2752;

	t52 = (x209<((x210&x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	volatile uint64_t x214 = 625774009489287LLU;
	uint8_t x215 = UINT8_MAX;
	uint32_t x216 = 173492U;
	volatile int32_t t53 = 106;

	t53 = (x213<((x214&x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = -3;
	int16_t x219 = INT16_MIN;
	volatile int32_t t54 = -97558;

	t54 = (x217<((x218&x219)==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 2;
	volatile uint16_t x222 = 10U;
	volatile int64_t x224 = INT64_MIN;

	t55 = (x221<((x222&x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 16144U;
	int8_t x227 = -1;
	int32_t t56 = -9;

	t56 = (x225<((x226&x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MIN;
	uint32_t x230 = 6127U;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -522492287;

	t57 = (x229<((x230&x231)==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x235 = 33U;
	volatile int32_t t58 = 786374788;

	t58 = (x233<((x234&x235)==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = -1;
	int32_t x239 = 14694850;
	int32_t x240 = -1;
	int32_t t59 = -994;

	t59 = (x237<((x238&x239)==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x241 = 0U;
	uint32_t x243 = 40989787U;
	int32_t x244 = -1;
	static int32_t t60 = 1426930;

	t60 = (x241<((x242&x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MAX;
	static uint64_t x247 = 0LLU;
	static int16_t x248 = 81;

	t61 = (x245<((x246&x247)==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 87LLU;
	int64_t x250 = INT64_MIN;
	int64_t x251 = 24LL;
	int32_t t62 = -227;

	t62 = (x249<((x250&x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x253 = 0U;
	uint32_t x254 = 124U;
	static volatile int32_t x255 = INT32_MIN;
	int32_t t63 = 112;

	t63 = (x253<((x254&x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 3U;
	static uint64_t x258 = 61371142393LLU;
	uint16_t x259 = 155U;
	static int32_t x260 = -121824664;
	int32_t t64 = 360;

	t64 = (x257<((x258&x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	uint16_t x263 = 0U;
	volatile uint64_t x264 = 142399296530774251LLU;

	t65 = (x261<((x262&x263)==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int8_t x268 = INT8_MIN;

	t66 = (x265<((x266&x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = INT32_MAX;
	uint8_t x271 = 123U;
	int32_t x272 = 482;
	static int32_t t67 = -1;

	t67 = (x269<((x270&x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	static int8_t x274 = INT8_MAX;
	int32_t x275 = INT32_MAX;
	volatile uint32_t x276 = 5U;
	int32_t t68 = 57514;

	t68 = (x273<((x274&x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	volatile uint16_t x278 = 7U;
	uint16_t x279 = 198U;
	uint8_t x280 = UINT8_MAX;

	t69 = (x277<((x278&x279)==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	static volatile int32_t x282 = 32439;
	int32_t x283 = INT32_MIN;
	static int32_t t70 = 112312;

	t70 = (x281<((x282&x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MAX;
	uint32_t x287 = 28121U;
	volatile int16_t x288 = INT16_MIN;
	int32_t t71 = 45131534;

	t71 = (x285<((x286&x287)==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	volatile int32_t x290 = 10230;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 1;

	t72 = (x289<((x290&x291)==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	volatile uint8_t x294 = 7U;
	static int64_t x295 = INT64_MAX;
	static int8_t x296 = 5;

	t73 = (x293<((x294&x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 1637315023U;
	static int16_t x299 = 59;
	int8_t x300 = 58;
	volatile int32_t t74 = 79;

	t74 = (x297<((x298&x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 4;
	int64_t x304 = -1LL;
	volatile int32_t t75 = -95425776;

	t75 = (x301<((x302&x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 0;
	int32_t x306 = -1;
	uint64_t x307 = 20LLU;
	uint64_t x308 = 1900627757463797LLU;
	int32_t t76 = 78613;

	t76 = (x305<((x306&x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x310 = -1;
	int32_t x311 = INT32_MAX;
	int64_t x312 = INT64_MAX;
	volatile int32_t t77 = 163227;

	t77 = (x309<((x310&x311)==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = UINT32_MAX;
	int64_t x314 = INT64_MIN;
	static volatile uint16_t x316 = 282U;

	t78 = (x313<((x314&x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x318 = INT16_MIN;
	uint8_t x319 = UINT8_MAX;
	volatile uint16_t x320 = UINT16_MAX;
	int32_t t79 = -689320;

	t79 = (x317<((x318&x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	int64_t x323 = INT64_MAX;
	int32_t t80 = -6;

	t80 = (x321<((x322&x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 12U;
	int8_t x326 = -32;
	volatile int64_t x327 = -539246801701914LL;
	volatile int16_t x328 = -11705;
	static int32_t t81 = 63;

	t81 = (x325<((x326&x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	int16_t x331 = INT16_MIN;
	volatile int8_t x332 = 0;

	t82 = (x329<((x330&x331)==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -24;
	static uint16_t x335 = 1U;
	static int64_t x336 = -1LL;

	t83 = (x333<((x334&x335)==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = INT8_MIN;
	uint32_t x340 = 1739292333U;
	int32_t t84 = 24213;

	t84 = (x337<((x338&x339)==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 319U;
	int16_t x342 = 1;
	static int32_t x343 = INT32_MAX;
	static volatile int8_t x344 = INT8_MAX;
	volatile int32_t t85 = 573945;

	t85 = (x341<((x342&x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	volatile int8_t x347 = INT8_MAX;
	volatile int32_t t86 = 1579;

	t86 = (x345<((x346&x347)==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = 6U;
	int8_t x350 = INT8_MAX;
	uint32_t x351 = 53295803U;
	volatile int32_t t87 = -25080;

	t87 = (x349<((x350&x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 3U;
	volatile int32_t x355 = 0;
	int32_t t88 = 14968;

	t88 = (x353<((x354&x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = 287LL;
	uint64_t x359 = 108901LLU;
	uint16_t x360 = 34U;
	volatile int32_t t89 = 632;

	t89 = (x357<((x358&x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x363 = INT16_MAX;
	uint64_t x364 = 8692804422693065LLU;
	int32_t t90 = 552113850;

	t90 = (x361<((x362&x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 459726U;
	int64_t x366 = -38891LL;
	volatile uint16_t x367 = 7499U;
	static int32_t x368 = INT32_MAX;
	int32_t t91 = 1;

	t91 = (x365<((x366&x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x372 = INT32_MIN;
	int32_t t92 = -12;

	t92 = (x369<((x370&x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 125U;
	int32_t x374 = -3021206;
	int16_t x375 = INT16_MIN;
	uint8_t x376 = 3U;
	volatile int32_t t93 = 1;

	t93 = (x373<((x374&x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 6U;
	static volatile int16_t x379 = 121;
	static int32_t t94 = 395;

	t94 = (x377<((x378&x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	uint16_t x382 = 54U;
	uint32_t x383 = 5377575U;
	int32_t t95 = -7463;

	t95 = (x381<((x382&x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 13382U;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MIN;

	t96 = (x385<((x386&x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = INT32_MAX;
	int16_t x391 = 5;
	uint32_t x392 = 448241917U;

	t97 = (x389<((x390&x391)==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = -1;
	volatile int64_t x395 = -1LL;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -7927;

	t98 = (x393<((x394&x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x399 = -1;
	static volatile int32_t t99 = -24292130;

	t99 = (x397<((x398&x399)==x400));

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

