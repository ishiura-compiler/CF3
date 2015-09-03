#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x9 = 5U;
int32_t x14 = 44;
int8_t x17 = -19;
volatile int16_t x19 = -939;
volatile int16_t x20 = 3089;
int32_t t5 = 229;
uint64_t x29 = UINT64_MAX;
uint32_t x36 = 287U;
static int8_t x43 = INT8_MAX;
volatile uint8_t x44 = 15U;
static int16_t x52 = INT16_MAX;
volatile uint32_t x53 = UINT32_MAX;
int16_t x55 = -93;
int32_t t13 = -1;
uint32_t x59 = UINT32_MAX;
volatile int8_t x67 = -5;
int32_t x71 = INT32_MIN;
volatile int8_t x72 = INT8_MIN;
static volatile int32_t t17 = -1;
uint16_t x75 = 756U;
uint8_t x77 = 2U;
int16_t x80 = -1;
static int32_t x87 = INT32_MIN;
static int32_t t22 = 5724;
static int16_t x93 = 2833;
static volatile int16_t x95 = -626;
uint64_t x96 = 112058592952LLU;
int8_t x99 = -1;
int32_t x102 = -32456486;
volatile int32_t t27 = 28;
volatile int8_t x114 = INT8_MAX;
int64_t x116 = INT64_MAX;
int32_t t29 = -1;
int64_t x124 = INT64_MIN;
static int8_t x127 = -1;
uint64_t x129 = UINT64_MAX;
uint16_t x131 = UINT16_MAX;
static int32_t x139 = -1;
volatile int32_t t36 = -54224;
volatile int64_t x150 = INT64_MIN;
int64_t x152 = INT64_MIN;
volatile int32_t t37 = -1;
int8_t x154 = 25;
int64_t x156 = INT64_MIN;
int32_t x160 = INT32_MIN;
uint16_t x169 = 13U;
int16_t x180 = INT16_MIN;
int64_t x181 = INT64_MIN;
int16_t x184 = 46;
int32_t x189 = INT32_MAX;
uint64_t x193 = 223515913159LLU;
int16_t x196 = INT16_MIN;
static volatile int8_t x198 = INT8_MAX;
int32_t x199 = INT32_MAX;
volatile uint64_t x208 = UINT64_MAX;
int64_t x212 = -1LL;
volatile int32_t t53 = 1567;
volatile int32_t t55 = 2298;
static int64_t x225 = INT64_MAX;
int32_t x229 = INT32_MIN;
uint16_t x231 = UINT16_MAX;
uint64_t x247 = 320LLU;
int32_t x251 = 0;
volatile int64_t x253 = -1LL;
uint32_t x265 = UINT32_MAX;
uint64_t x268 = UINT64_MAX;
int8_t x271 = INT8_MAX;
int8_t x273 = INT8_MIN;
uint16_t x282 = 5171U;
volatile int32_t t71 = -96069871;
static int32_t t73 = -6612843;
static int8_t x299 = -10;
int16_t x301 = INT16_MIN;
static int64_t x302 = INT64_MIN;
int16_t x305 = INT16_MAX;
uint8_t x307 = 5U;
static uint32_t x312 = 50775U;
volatile int32_t t77 = 0;
volatile int32_t t78 = -258487;
int64_t x323 = INT64_MIN;
int16_t x333 = -1022;
int8_t x334 = -1;
int64_t x337 = INT64_MIN;
int8_t x338 = 12;
static int32_t t86 = 362;
volatile int8_t x350 = INT8_MIN;
static int16_t x351 = INT16_MAX;
int32_t x352 = INT32_MIN;
uint64_t x356 = UINT64_MAX;
volatile int16_t x358 = INT16_MIN;
static int64_t x369 = 393026470486572814LL;
int16_t x377 = -1;
uint32_t x383 = UINT32_MAX;
static int8_t x384 = INT8_MAX;
volatile int16_t x388 = -22;
int32_t t97 = -8822830;
int64_t x395 = INT64_MIN;
static uint64_t x396 = 17105490206606316LLU;
int32_t t98 = 11235794;


void f0(void) {
	uint8_t x1 = 1U;
	volatile int64_t x2 = INT64_MIN;
	uint16_t x3 = 1U;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = 8028;

	t0 = ((x1<x2)<=(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 93U;
	int64_t x6 = INT64_MIN;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -84075;

	t1 = ((x5<x6)<=(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	uint8_t x11 = 2U;
	int32_t x12 = -130136;
	static volatile int32_t t2 = -989;

	t2 = ((x9<x10)<=(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int64_t x15 = INT64_MAX;
	static uint64_t x16 = 54LLU;
	static int32_t t3 = 0;

	t3 = ((x13<x14)<=(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = INT64_MIN;
	volatile int32_t t4 = -439903;

	t4 = ((x17<x18)<=(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -982;
	static int64_t x22 = INT64_MIN;
	int16_t x23 = -1;
	uint8_t x24 = 2U;

	t5 = ((x21<x22)<=(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int64_t x26 = 0LL;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = -289007;

	t6 = ((x25<x26)<=(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 457870001U;
	uint8_t x31 = 54U;
	volatile int16_t x32 = -1;
	volatile int32_t t7 = 16;

	t7 = ((x29<x30)<=(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	uint16_t x34 = 8U;
	uint8_t x35 = 2U;
	static volatile int32_t t8 = 993;

	t8 = ((x33<x34)<=(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	int32_t x39 = 681;
	volatile int16_t x40 = INT16_MIN;
	int32_t t9 = 2;

	t9 = ((x37<x38)<=(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint16_t x42 = 3116U;
	volatile int32_t t10 = 98;

	t10 = ((x41<x42)<=(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 2319U;
	int16_t x48 = 33;
	volatile int32_t t11 = 1995450;

	t11 = ((x45<x46)<=(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int32_t x50 = 37603708;
	uint16_t x51 = 9U;
	volatile int32_t t12 = -5021206;

	t12 = ((x49<x50)<=(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x54 = 14U;
	volatile int16_t x56 = INT16_MIN;

	t13 = ((x53<x54)<=(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	static int8_t x58 = 3;
	static int16_t x60 = INT16_MIN;
	int32_t t14 = 1754;

	t14 = ((x57<x58)<=(x59^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 48;

	t15 = ((x61<x62)<=(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 1;
	int64_t x66 = -1LL;
	volatile uint8_t x68 = 18U;
	volatile int32_t t16 = 117425043;

	t16 = ((x65<x66)<=(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 1U;
	int32_t x70 = INT32_MAX;

	t17 = ((x69<x70)<=(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	static uint64_t x74 = 645408266369529LLU;
	static int64_t x76 = INT64_MIN;
	static int32_t t18 = -13;

	t18 = ((x73<x74)<=(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x78 = 23308899148780549LLU;
	int64_t x79 = 164155LL;
	int32_t t19 = 9437;

	t19 = ((x77<x78)<=(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x81 = 711U;
	static int8_t x82 = 2;
	volatile uint32_t x83 = 6320U;
	static uint8_t x84 = UINT8_MAX;
	int32_t t20 = 0;

	t20 = ((x81<x82)<=(x83^x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	uint32_t x86 = UINT32_MAX;
	int16_t x88 = -282;
	volatile int32_t t21 = 251285204;

	t21 = ((x85<x86)<=(x87^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 4022U;
	int64_t x90 = -2475663495606532776LL;
	static int16_t x91 = -1;
	int16_t x92 = INT16_MAX;

	t22 = ((x89<x90)<=(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MAX;
	int32_t t23 = -933124248;

	t23 = ((x93<x94)<=(x95^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	int32_t x98 = 77405573;
	volatile int16_t x100 = INT16_MIN;
	int32_t t24 = 0;

	t24 = ((x97<x98)<=(x99^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int16_t x103 = INT16_MAX;
	static uint16_t x104 = 15U;
	int32_t t25 = -1;

	t25 = ((x101<x102)<=(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int16_t x106 = -1;
	static uint8_t x107 = UINT8_MAX;
	static volatile uint16_t x108 = 12U;
	static int32_t t26 = 633;

	t26 = ((x105<x106)<=(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 1U;
	int16_t x110 = -30;
	int8_t x111 = INT8_MAX;
	uint16_t x112 = 92U;

	t27 = ((x109<x110)<=(x111^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -4664;
	static int64_t x115 = -1LL;
	volatile int32_t t28 = -801;

	t28 = ((x113<x114)<=(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 104U;
	static int64_t x118 = INT64_MAX;
	volatile int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MIN;

	t29 = ((x117<x118)<=(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	int16_t x122 = 463;
	static int64_t x123 = 41444000049LL;
	static int32_t t30 = 227599999;

	t30 = ((x121<x122)<=(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -10;
	uint16_t x126 = UINT16_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t31 = 180;

	t31 = ((x125<x126)<=(x127^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x130 = -1;
	volatile uint64_t x132 = 3299212183LLU;
	int32_t t32 = 0;

	t32 = ((x129<x130)<=(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MAX;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t33 = 14561449;

	t33 = ((x133<x134)<=(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 0;
	int16_t x138 = -1;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t34 = -251899;

	t34 = ((x137<x138)<=(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = -6183395613526LL;
	static int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	int16_t x144 = 16;
	volatile int32_t t35 = 15626984;

	t35 = ((x141<x142)<=(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 5;
	static uint64_t x146 = UINT64_MAX;
	uint64_t x147 = 666LLU;
	uint8_t x148 = 25U;

	t36 = ((x145<x146)<=(x147^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 6;
	int16_t x151 = INT16_MAX;

	t37 = ((x149<x150)<=(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 788481U;
	uint16_t x155 = 503U;
	int32_t t38 = -1922;

	t38 = ((x153<x154)<=(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	static int16_t x158 = INT16_MIN;
	int16_t x159 = -7557;
	int32_t t39 = 68980129;

	t39 = ((x157<x158)<=(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile uint8_t x162 = 52U;
	int32_t x163 = -2476;
	static volatile uint64_t x164 = 316LLU;
	static int32_t t40 = -301;

	t40 = ((x161<x162)<=(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1197553853606899039LL;
	int32_t x166 = -1;
	static volatile uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 1U;
	volatile int32_t t41 = -25836819;

	t41 = ((x165<x166)<=(x167^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = 31;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 224U;
	static volatile int32_t t42 = -16;

	t42 = ((x169<x170)<=(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	uint8_t x174 = UINT8_MAX;
	static int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 8077069;

	t43 = ((x173<x174)<=(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	static volatile int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MIN;
	int32_t t44 = 467;

	t44 = ((x177<x178)<=(x179^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	volatile int32_t t45 = -14744895;

	t45 = ((x181<x182)<=(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint8_t x186 = 108U;
	uint16_t x187 = UINT16_MAX;
	int8_t x188 = -1;
	int32_t t46 = -176;

	t46 = ((x185<x186)<=(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 1185281505054LLU;
	static uint8_t x191 = 3U;
	int16_t x192 = -1;
	volatile int32_t t47 = 117;

	t47 = ((x189<x190)<=(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = 21U;
	volatile uint32_t x195 = UINT32_MAX;
	volatile int32_t t48 = 69054638;

	t48 = ((x193<x194)<=(x195^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	int8_t x200 = 3;
	volatile int32_t t49 = 1066;

	t49 = ((x197<x198)<=(x199^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = 213880784331LLU;
	int64_t x202 = INT64_MIN;
	int16_t x203 = 52;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t50 = 31;

	t50 = ((x201<x202)<=(x203^x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 240U;
	volatile uint16_t x206 = 3992U;
	int64_t x207 = INT64_MIN;
	volatile int32_t t51 = -1;

	t51 = ((x205<x206)<=(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = -28;
	int32_t t52 = 7380;

	t52 = ((x209<x210)<=(x211^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 0U;
	volatile uint16_t x214 = 881U;
	uint32_t x215 = UINT32_MAX;
	static uint8_t x216 = 0U;

	t53 = ((x213<x214)<=(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static volatile uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 13U;
	int64_t x220 = INT64_MIN;
	int32_t t54 = 1;

	t54 = ((x217<x218)<=(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = -1;
	volatile int8_t x222 = INT8_MIN;
	static int64_t x223 = INT64_MAX;
	int8_t x224 = -3;

	t55 = ((x221<x222)<=(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -429366;
	int32_t x227 = -1;
	int32_t x228 = 190;
	volatile int32_t t56 = 39202;

	t56 = ((x225<x226)<=(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = 29914175;

	t57 = ((x229<x230)<=(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	volatile int32_t x235 = 46051223;
	int16_t x236 = -1;
	volatile int32_t t58 = 443298561;

	t58 = ((x233<x234)<=(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	int16_t x238 = -5;
	int32_t x239 = -51;
	uint16_t x240 = 55U;
	volatile int32_t t59 = -1077;

	t59 = ((x237<x238)<=(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -1;
	volatile int16_t x244 = -231;
	volatile int32_t t60 = -23662;

	t60 = ((x241<x242)<=(x243^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = -1;
	int64_t x246 = INT64_MAX;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t61 = -819620275;

	t61 = ((x245<x246)<=(x247^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static int64_t x250 = 236860LL;
	uint64_t x252 = 61987775250LLU;
	int32_t t62 = 2919;

	t62 = ((x249<x250)<=(x251^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x254 = UINT16_MAX;
	int64_t x255 = -1LL;
	static int16_t x256 = INT16_MAX;
	static volatile int32_t t63 = 1;

	t63 = ((x253<x254)<=(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MAX;
	static volatile uint16_t x258 = 12684U;
	int8_t x259 = 1;
	int64_t x260 = 42506403LL;
	int32_t t64 = 2585;

	t64 = ((x257<x258)<=(x259^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = -1;
	uint32_t x262 = 208894U;
	static int32_t x263 = INT32_MIN;
	uint8_t x264 = 15U;
	volatile int32_t t65 = -59955360;

	t65 = ((x261<x262)<=(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x266 = 4U;
	int32_t x267 = 6193504;
	int32_t t66 = -1;

	t66 = ((x265<x266)<=(x267^x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = UINT32_MAX;
	int8_t x270 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t67 = -56092106;

	t67 = ((x269<x270)<=(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x274 = INT16_MIN;
	uint32_t x275 = UINT32_MAX;
	uint8_t x276 = 5U;
	volatile int32_t t68 = 951995;

	t68 = ((x273<x274)<=(x275^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -2LL;
	int16_t x278 = 240;
	uint16_t x279 = 9U;
	uint8_t x280 = 0U;
	volatile int32_t t69 = 1235;

	t69 = ((x277<x278)<=(x279^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	int64_t x283 = 1576828931LL;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -11323618;

	t70 = ((x281<x282)<=(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	uint8_t x286 = 40U;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -1LL;

	t71 = ((x285<x286)<=(x287^x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 4U;
	int64_t x290 = INT64_MAX;
	uint16_t x291 = 19794U;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 5058;

	t72 = ((x289<x290)<=(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x294 = -40;
	static int64_t x295 = INT64_MIN;
	volatile uint64_t x296 = UINT64_MAX;

	t73 = ((x293<x294)<=(x295^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = 10;
	static int32_t x298 = INT32_MAX;
	volatile int64_t x300 = INT64_MIN;
	int32_t t74 = -144485;

	t74 = ((x297<x298)<=(x299^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x303 = -879563032LL;
	uint16_t x304 = 1487U;
	static volatile int32_t t75 = 14688423;

	t75 = ((x301<x302)<=(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MAX;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -1;

	t76 = ((x305<x306)<=(x307^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 8;
	volatile int8_t x310 = INT8_MAX;
	uint64_t x311 = 102578023LLU;

	t77 = ((x309<x310)<=(x311^x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -124955096158LL;
	static int16_t x314 = INT16_MIN;
	static int32_t x315 = INT32_MAX;
	int32_t x316 = -3;

	t78 = ((x313<x314)<=(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MIN;
	uint8_t x318 = 1U;
	static uint16_t x319 = 1426U;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -3700886;

	t79 = ((x317<x318)<=(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -1;
	volatile int8_t x322 = 9;
	int32_t x324 = -27398592;
	int32_t t80 = -402409826;

	t80 = ((x321<x322)<=(x323^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int8_t x326 = -14;
	static uint32_t x327 = 98U;
	int32_t x328 = -4;
	static volatile int32_t t81 = -15841737;

	t81 = ((x325<x326)<=(x327^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MIN;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = -1LL;
	int32_t t82 = 4;

	t82 = ((x329<x330)<=(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x335 = 2891LLU;
	static int8_t x336 = -28;
	volatile int32_t t83 = -11680;

	t83 = ((x333<x334)<=(x335^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x339 = -1;
	int64_t x340 = -22828382550LL;
	static volatile int32_t t84 = 2091151;

	t84 = ((x337<x338)<=(x339^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int32_t x342 = INT32_MIN;
	int32_t x343 = 12275;
	int32_t x344 = INT32_MAX;
	static int32_t t85 = 99237254;

	t85 = ((x341<x342)<=(x343^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	int64_t x347 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;

	t86 = ((x345<x346)<=(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	volatile int32_t t87 = -28925;

	t87 = ((x349<x350)<=(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MIN;
	uint32_t x354 = 53U;
	static int8_t x355 = 11;
	volatile int32_t t88 = -179;

	t88 = ((x353<x354)<=(x355^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	int8_t x359 = -14;
	static int64_t x360 = INT64_MIN;
	int32_t t89 = 37;

	t89 = ((x357<x358)<=(x359^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -821;
	uint64_t x362 = 1225LLU;
	int16_t x363 = -314;
	int32_t x364 = -1;
	static volatile int32_t t90 = -1;

	t90 = ((x361<x362)<=(x363^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = 1;
	static int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MIN;
	int32_t t91 = -83;

	t91 = ((x365<x366)<=(x367^x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x370 = 42U;
	static uint64_t x371 = UINT64_MAX;
	uint64_t x372 = 6331444916984703436LLU;
	int32_t t92 = -6241;

	t92 = ((x369<x370)<=(x371^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 0U;
	int8_t x374 = -1;
	volatile uint8_t x375 = 55U;
	uint64_t x376 = 905822275103850LLU;
	int32_t t93 = 1463039;

	t93 = ((x373<x374)<=(x375^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x378 = 10;
	uint32_t x379 = 2U;
	int64_t x380 = INT64_MAX;
	int32_t t94 = 8621;

	t94 = ((x377<x378)<=(x379^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 11U;
	int16_t x382 = INT16_MIN;
	int32_t t95 = 55;

	t95 = ((x381<x382)<=(x383^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 247692158679872677LLU;
	volatile int16_t x386 = 18;
	int16_t x387 = INT16_MAX;
	volatile int32_t t96 = 133536;

	t96 = ((x385<x386)<=(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	static int64_t x390 = -1LL;
	int16_t x391 = INT16_MIN;
	volatile int8_t x392 = -1;

	t97 = ((x389<x390)<=(x391^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;

	t98 = ((x393<x394)<=(x395^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 3655018;
	static uint64_t x398 = UINT64_MAX;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 237593532U;
	static volatile int32_t t99 = -3;

	t99 = ((x397<x398)<=(x399^x400));

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

