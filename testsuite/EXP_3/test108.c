#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -130;
volatile int16_t x15 = -1;
int32_t x18 = -1;
int8_t x19 = INT8_MAX;
int8_t x21 = 9;
int32_t x23 = INT32_MIN;
int32_t x41 = INT32_MIN;
uint8_t x45 = UINT8_MAX;
static uint8_t x46 = 4U;
uint32_t x47 = UINT32_MAX;
int64_t t9 = 365448LL;
int64_t x53 = -67305357975081080LL;
static int64_t x55 = -35584715511880623LL;
uint32_t x62 = 5U;
static volatile int32_t t12 = 0;
int8_t x69 = INT8_MIN;
int32_t t13 = -1417;
static uint16_t x73 = 15743U;
int8_t x75 = INT8_MIN;
volatile int32_t t14 = 230782864;
uint8_t x77 = UINT8_MAX;
int64_t x80 = INT64_MAX;
int16_t x85 = 9583;
int16_t x90 = INT16_MIN;
static volatile uint8_t x96 = 26U;
int8_t x103 = INT8_MIN;
static uint64_t x107 = 12243003547LLU;
uint64_t x115 = 11391144130LLU;
int8_t x116 = 8;
int16_t x118 = -30;
volatile int8_t x120 = INT8_MIN;
static uint32_t x121 = 7190U;
static int32_t x126 = INT32_MIN;
static int16_t x129 = -1;
uint32_t x130 = UINT32_MAX;
int32_t x131 = INT32_MIN;
int8_t x135 = -1;
volatile int32_t t27 = 17;
volatile int8_t x140 = 0;
int64_t t28 = 1459674541198873117LL;
volatile int16_t x141 = -26;
int16_t x152 = INT16_MIN;
volatile int32_t x153 = INT32_MIN;
volatile uint32_t x159 = 337U;
uint16_t x174 = 2490U;
int64_t x186 = INT64_MAX;
static volatile uint64_t x190 = 93495134LLU;
int16_t x192 = INT16_MAX;
int8_t x193 = INT8_MIN;
uint16_t x197 = 1U;
static int64_t x202 = -31995673670416LL;
int32_t t42 = -9944;
int16_t x211 = INT16_MIN;
static int16_t x217 = 215;
int16_t x224 = 21;
static int32_t t47 = -2382;
volatile int32_t x233 = INT32_MIN;
uint64_t x239 = 4643681461230LLU;
uint64_t x241 = 57578279LLU;
int16_t x242 = -2054;
volatile int8_t x243 = INT8_MIN;
uint64_t x244 = 1928168185LLU;
int64_t x249 = INT64_MIN;
uint32_t x252 = 4U;
volatile uint32_t t52 = 50749U;
int32_t x256 = INT32_MIN;
int16_t x257 = INT16_MIN;
volatile int32_t t54 = 21600875;
static volatile uint32_t x266 = UINT32_MAX;
uint32_t x286 = 6889U;
uint16_t x288 = 1U;
int32_t t58 = -6;
static volatile int64_t x296 = 40198506LL;
uint8_t x297 = UINT8_MAX;
uint32_t x300 = 28784985U;
uint16_t x301 = 506U;
int32_t x305 = -1;
volatile int32_t x306 = -2;
static int32_t x318 = 2589;
uint8_t x322 = 3U;
int8_t x325 = INT8_MAX;
int8_t x326 = INT8_MIN;
uint16_t x335 = 6163U;
volatile int32_t t68 = 1;
int64_t x337 = INT64_MAX;
volatile int16_t x339 = INT16_MIN;
uint8_t x341 = 2U;
static uint32_t x343 = 382728323U;
volatile int16_t x344 = INT16_MIN;
int64_t x345 = INT64_MIN;
int8_t x355 = -1;
int32_t t72 = 1012;
int64_t x361 = INT64_MIN;
uint16_t x365 = 5969U;
int32_t x366 = -17;
static volatile uint16_t x368 = 4U;
volatile int8_t x386 = INT8_MIN;
volatile int32_t t79 = -20685518;
volatile uint16_t x393 = UINT16_MAX;
int32_t x400 = INT32_MAX;
int32_t x402 = INT32_MIN;
volatile int32_t t84 = 62371898;
volatile uint16_t x421 = 2337U;
int64_t t88 = -3469465311549026341LL;
uint16_t x433 = 6U;
uint16_t x434 = 3850U;
int64_t x454 = -286LL;
volatile int64_t t93 = -146913679268LL;
int16_t x472 = INT16_MAX;
uint64_t x474 = UINT64_MAX;
int16_t x475 = -1;
static int16_t x479 = INT16_MAX;
static int8_t x480 = INT8_MAX;
int32_t x481 = -1;
volatile int32_t x483 = INT32_MAX;
int32_t t99 = -889;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	volatile uint8_t x2 = 111U;
	uint64_t x3 = 108390787219859LLU;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 263519256740938434LLU;

	t0 = ((x1<x2)/(x3+x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 14LLU;
	int16_t x11 = INT16_MAX;
	uint64_t x12 = 113LLU;
	static uint64_t t1 = 697LLU;

	t1 = ((x9<x10)/(x11+x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 121082159LLU;
	int64_t x14 = 37569LL;
	volatile uint32_t x16 = 44U;
	static uint32_t t2 = 491U;

	t2 = ((x13<x14)/(x15+x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 1408712U;
	int16_t x20 = INT16_MAX;
	int32_t t3 = 6181243;

	t3 = ((x17<x18)/(x19+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = -1;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t4 = 11;

	t4 = ((x21<x22)/(x23+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MAX;
	int16_t x34 = -1;
	uint64_t x35 = 2430914392581LLU;
	int64_t x36 = INT64_MIN;
	uint64_t t5 = 2LLU;

	t5 = ((x33<x34)/(x35+x36));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = INT32_MAX;
	int32_t x38 = -1;
	int64_t x39 = 1099890666897651998LL;
	int32_t x40 = 4942;
	volatile int64_t t6 = 1106960012107LL;

	t6 = ((x37<x38)/(x39+x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x42 = 0U;
	volatile uint8_t x43 = 105U;
	static int16_t x44 = -1;
	volatile int32_t t7 = -394794;

	t7 = ((x41<x42)/(x43+x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x48 = 119879LL;
	volatile int64_t t8 = -439859887LL;

	t8 = ((x45<x46)/(x47+x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 25797U;
	int8_t x50 = -1;
	uint32_t x51 = 1727512U;
	int64_t x52 = -1LL;

	t9 = ((x49<x50)/(x51+x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x54 = INT32_MAX;
	int16_t x56 = -1;
	volatile int64_t t10 = 4052255650220LL;

	t10 = ((x53<x54)/(x55+x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = INT32_MIN;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = 205;
	int8_t x60 = INT8_MAX;
	volatile int32_t t11 = -16688172;

	t11 = ((x57<x58)/(x59+x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 890848U;
	static uint16_t x63 = UINT16_MAX;
	volatile int16_t x64 = INT16_MAX;

	t12 = ((x61<x62)/(x63+x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x70 = -1;
	static int32_t x71 = -568372;
	int16_t x72 = -1;

	t13 = ((x69<x70)/(x71+x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x74 = UINT64_MAX;
	static int32_t x76 = -1630785;

	t14 = ((x73<x74)/(x75+x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x78 = INT32_MIN;
	volatile int32_t x79 = INT32_MIN;
	volatile int64_t t15 = 89807LL;

	t15 = ((x77<x78)/(x79+x80));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x81 = 87473U;
	uint64_t x82 = 3782711984506769925LLU;
	int32_t x83 = INT32_MIN;
	int64_t x84 = -139505933273LL;
	volatile int64_t t16 = -73LL;

	t16 = ((x81<x82)/(x83+x84));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x86 = 513U;
	int8_t x87 = INT8_MAX;
	static uint8_t x88 = 4U;
	int32_t t17 = 50;

	t17 = ((x85<x86)/(x87+x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int8_t x91 = INT8_MIN;
	int32_t x92 = -51534517;
	int32_t t18 = -398;

	t18 = ((x89<x90)/(x91+x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x94 = 7U;
	volatile int32_t x95 = -1;
	int32_t t19 = 13943633;

	t19 = ((x93<x94)/(x95+x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x101 = -1;
	static int8_t x102 = -1;
	uint32_t x104 = 105U;
	volatile uint32_t t20 = 4U;

	t20 = ((x101<x102)/(x103+x104));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = 2156249445731689LL;
	int64_t x106 = -25554048LL;
	uint32_t x108 = UINT32_MAX;
	volatile uint64_t t21 = 5365534308LLU;

	t21 = ((x105<x106)/(x107+x108));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -11;
	int16_t x114 = -624;
	uint64_t t22 = 13597876257824LLU;

	t22 = ((x113<x114)/(x115+x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MIN;
	uint32_t x119 = UINT32_MAX;
	uint32_t t23 = 5U;

	t23 = ((x117<x118)/(x119+x120));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x122 = INT8_MAX;
	int64_t x123 = 2819425LL;
	uint16_t x124 = 1238U;
	int64_t t24 = 2LL;

	t24 = ((x121<x122)/(x123+x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x125 = INT64_MAX;
	uint16_t x127 = 3U;
	uint64_t x128 = 3901LLU;
	static volatile uint64_t t25 = 1619086757062359178LLU;

	t25 = ((x125<x126)/(x127+x128));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x132 = 9U;
	uint32_t t26 = 1U;

	t26 = ((x129<x130)/(x131+x132));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MIN;
	volatile int8_t x136 = INT8_MIN;

	t27 = ((x133<x134)/(x135+x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	int16_t x138 = 11;
	volatile int64_t x139 = INT64_MIN;

	t28 = ((x137<x138)/(x139+x140));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x142 = -1;
	int32_t x143 = -1;
	int64_t x144 = 1314402216674323LL;
	int64_t t29 = 133093148LL;

	t29 = ((x141<x142)/(x143+x144));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 25U;
	int16_t x146 = 10875;
	int16_t x147 = 4512;
	int32_t x148 = INT32_MIN;
	int32_t t30 = -2;

	t30 = ((x145<x146)/(x147+x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x149 = INT8_MIN;
	uint8_t x150 = 22U;
	static int16_t x151 = INT16_MIN;
	int32_t t31 = -135209;

	t31 = ((x149<x150)/(x151+x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = 12611318;
	volatile int16_t x156 = INT16_MIN;
	volatile int32_t t32 = 6856;

	t32 = ((x153<x154)/(x155+x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x157 = -1;
	int16_t x158 = INT16_MAX;
	uint8_t x160 = 40U;
	uint32_t t33 = 781915U;

	t33 = ((x157<x158)/(x159+x160));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = UINT16_MAX;
	volatile int64_t x162 = -17572183662288LL;
	volatile uint64_t x163 = UINT64_MAX;
	uint8_t x164 = 14U;
	volatile uint64_t t34 = 2683129017106885726LLU;

	t34 = ((x161<x162)/(x163+x164));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x165 = -1;
	volatile uint8_t x166 = UINT8_MAX;
	static int64_t x167 = 32762LL;
	int32_t x168 = -254478;
	volatile int64_t t35 = -1454093LL;

	t35 = ((x165<x166)/(x167+x168));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = -1;
	int8_t x175 = INT8_MIN;
	int64_t x176 = 164274938LL;
	volatile int64_t t36 = 7747LL;

	t36 = ((x173<x174)/(x175+x176));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x181 = -361;
	int8_t x182 = -29;
	static int16_t x183 = INT16_MAX;
	volatile int8_t x184 = -4;
	static volatile int32_t t37 = -4;

	t37 = ((x181<x182)/(x183+x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x185 = INT8_MIN;
	static int16_t x187 = -1;
	int16_t x188 = -1;
	volatile int32_t t38 = 6;

	t38 = ((x185<x186)/(x187+x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = -40;
	uint64_t x191 = 4177866356943089LLU;
	static volatile uint64_t t39 = 240544164196LLU;

	t39 = ((x189<x190)/(x191+x192));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x194 = INT32_MIN;
	volatile uint32_t x195 = 9943120U;
	int16_t x196 = INT16_MAX;
	volatile uint32_t t40 = 9833587U;

	t40 = ((x193<x194)/(x195+x196));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x198 = 56464041LLU;
	static int8_t x199 = 2;
	int32_t x200 = INT32_MIN;
	volatile int32_t t41 = 23;

	t41 = ((x197<x198)/(x199+x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x201 = 69U;
	volatile int16_t x203 = -60;
	static uint16_t x204 = UINT16_MAX;

	t42 = ((x201<x202)/(x203+x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = -1;
	static int16_t x210 = INT16_MIN;
	int16_t x212 = -61;
	volatile int32_t t43 = 76;

	t43 = ((x209<x210)/(x211+x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x213 = INT64_MAX;
	volatile int16_t x214 = -1;
	static int32_t x215 = -1;
	int8_t x216 = 53;
	volatile int32_t t44 = 188;

	t44 = ((x213<x214)/(x215+x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x218 = -1LL;
	int64_t x219 = 38621064523233LL;
	volatile uint64_t x220 = 6542715649LLU;
	uint64_t t45 = 1623480373068301506LLU;

	t45 = ((x217<x218)/(x219+x220));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = 7LL;
	uint64_t x222 = UINT64_MAX;
	volatile int8_t x223 = INT8_MAX;
	volatile int32_t t46 = -119431016;

	t46 = ((x221<x222)/(x223+x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int8_t x226 = -1;
	int8_t x227 = 0;
	int32_t x228 = INT32_MIN;

	t47 = ((x225<x226)/(x227+x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x234 = INT8_MIN;
	uint32_t x235 = 578218185U;
	uint32_t x236 = 1399496U;
	static volatile uint32_t t48 = 24988708U;

	t48 = ((x233<x234)/(x235+x236));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x237 = INT64_MIN;
	uint64_t x238 = 0LLU;
	int32_t x240 = INT32_MIN;
	volatile uint64_t t49 = 283744LLU;

	t49 = ((x237<x238)/(x239+x240));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t t50 = 3408090041639687146LLU;

	t50 = ((x241<x242)/(x243+x244));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x245 = UINT64_MAX;
	static uint16_t x246 = 9U;
	int64_t x247 = -1LL;
	int32_t x248 = INT32_MIN;
	volatile int64_t t51 = -261603LL;

	t51 = ((x245<x246)/(x247+x248));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x250 = 1839680781LLU;
	uint32_t x251 = UINT32_MAX;

	t52 = ((x249<x250)/(x251+x252));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = -1LL;
	uint32_t x254 = UINT32_MAX;
	static uint8_t x255 = 100U;
	volatile int32_t t53 = -1;

	t53 = ((x253<x254)/(x255+x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x258 = 69503486770LLU;
	int32_t x259 = -84308762;
	static int16_t x260 = -1;

	t54 = ((x257<x258)/(x259+x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MIN;
	static int64_t t55 = 409852906558031LL;

	t55 = ((x261<x262)/(x263+x264));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x265 = -1;
	volatile uint16_t x267 = 4069U;
	int16_t x268 = -9;
	volatile int32_t t56 = -3433036;

	t56 = ((x265<x266)/(x267+x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = INT64_MIN;
	uint64_t x278 = 58771050460462LLU;
	static int32_t x279 = INT32_MAX;
	volatile uint8_t x280 = 0U;
	volatile int32_t t57 = 0;

	t57 = ((x277<x278)/(x279+x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x285 = 189U;
	int32_t x287 = INT32_MIN;

	t58 = ((x285<x286)/(x287+x288));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x290 = UINT16_MAX;
	uint16_t x291 = 24304U;
	int32_t x292 = -61767331;
	volatile int32_t t59 = -860440027;

	t59 = ((x289<x290)/(x291+x292));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x293 = INT64_MAX;
	int8_t x294 = INT8_MIN;
	int16_t x295 = 1543;
	static volatile int64_t t60 = 4389339437046562191LL;

	t60 = ((x293<x294)/(x295+x296));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x298 = 7157011;
	int8_t x299 = INT8_MIN;
	uint32_t t61 = 25981713U;

	t61 = ((x297<x298)/(x299+x300));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x302 = 818453LLU;
	uint64_t x303 = UINT64_MAX;
	volatile int16_t x304 = INT16_MAX;
	uint64_t t62 = 166929354684LLU;

	t62 = ((x301<x302)/(x303+x304));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x307 = 9994LL;
	volatile int32_t x308 = INT32_MIN;
	int64_t t63 = 3516916468093LL;

	t63 = ((x305<x306)/(x307+x308));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = -109409145263LL;
	static int8_t x310 = 0;
	uint32_t x311 = 221U;
	uint8_t x312 = UINT8_MAX;
	uint32_t t64 = 12386969U;

	t64 = ((x309<x310)/(x311+x312));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x317 = INT64_MIN;
	int64_t x319 = INT64_MAX;
	static int16_t x320 = INT16_MIN;
	int64_t t65 = 153287LL;

	t65 = ((x317<x318)/(x319+x320));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = 5;
	static int8_t x323 = INT8_MAX;
	uint32_t x324 = 7347184U;
	static uint32_t t66 = 3U;

	t66 = ((x321<x322)/(x323+x324));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t67 = 0U;

	t67 = ((x325<x326)/(x327+x328));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x333 = -53;
	volatile uint32_t x334 = 519354U;
	int16_t x336 = -1;

	t68 = ((x333<x334)/(x335+x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x338 = INT8_MAX;
	volatile int64_t x340 = -1LL;
	static int64_t t69 = 1506LL;

	t69 = ((x337<x338)/(x339+x340));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x342 = UINT16_MAX;
	uint32_t t70 = 37969440U;

	t70 = ((x341<x342)/(x343+x344));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x346 = INT8_MIN;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = -373;
	volatile uint64_t t71 = 127941143928394LLU;

	t71 = ((x345<x346)/(x347+x348));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = INT8_MAX;
	int32_t x354 = -1;
	uint16_t x356 = 8904U;

	t72 = ((x353<x354)/(x355+x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x357 = INT64_MIN;
	int32_t x358 = 1;
	uint64_t x359 = 7966940087616LLU;
	int32_t x360 = -3068;
	volatile uint64_t t73 = 115889692563882487LLU;

	t73 = ((x357<x358)/(x359+x360));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x362 = 1118940217769955558LLU;
	int16_t x363 = -1;
	int64_t x364 = INT64_MAX;
	int64_t t74 = -327145LL;

	t74 = ((x361<x362)/(x363+x364));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x367 = INT32_MIN;
	int32_t t75 = -20315;

	t75 = ((x365<x366)/(x367+x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x369 = 36U;
	static uint32_t x370 = 2426U;
	static int16_t x371 = INT16_MIN;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t76 = 1;

	t76 = ((x369<x370)/(x371+x372));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x373 = 171606057LL;
	int8_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	uint8_t x376 = 0U;
	volatile int32_t t77 = 98521329;

	t77 = ((x373<x374)/(x375+x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MIN;
	int32_t x383 = 203;
	volatile int16_t x384 = INT16_MIN;
	int32_t t78 = -1527246;

	t78 = ((x381<x382)/(x383+x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x385 = 8345U;
	static volatile int8_t x387 = -29;
	int8_t x388 = INT8_MIN;

	t79 = ((x385<x386)/(x387+x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x389 = UINT32_MAX;
	uint32_t x390 = 39U;
	int16_t x391 = 1342;
	static int64_t x392 = INT64_MIN;
	int64_t t80 = -381086LL;

	t80 = ((x389<x390)/(x391+x392));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x394 = 22U;
	int64_t x395 = -1LL;
	static int16_t x396 = -2986;
	int64_t t81 = -54LL;

	t81 = ((x393<x394)/(x395+x396));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x397 = UINT64_MAX;
	static uint16_t x398 = 31873U;
	static int64_t x399 = -1LL;
	volatile int64_t t82 = -64555772471654230LL;

	t82 = ((x397<x398)/(x399+x400));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int64_t x403 = INT64_MIN;
	int64_t x404 = 24758116861421783LL;
	int64_t t83 = 108281148721226243LL;

	t83 = ((x401<x402)/(x403+x404));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = -6145;
	uint64_t x410 = 230917045241712LLU;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MIN;

	t84 = ((x409<x410)/(x411+x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x413 = -40LL;
	static int8_t x414 = INT8_MIN;
	static int32_t x415 = -1;
	int16_t x416 = -1;
	volatile int32_t t85 = 52628221;

	t85 = ((x413<x414)/(x415+x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = -1;
	int8_t x418 = INT8_MIN;
	int32_t x419 = -1;
	static int16_t x420 = -1;
	static int32_t t86 = -7466573;

	t86 = ((x417<x418)/(x419+x420));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x422 = -374330629;
	static int8_t x423 = -1;
	volatile uint64_t x424 = 104295262053049282LLU;
	uint64_t t87 = 19217LLU;

	t87 = ((x421<x422)/(x423+x424));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = 208377LL;
	volatile int16_t x426 = INT16_MIN;
	uint16_t x427 = UINT16_MAX;
	static volatile int64_t x428 = -1LL;

	t88 = ((x425<x426)/(x427+x428));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x435 = INT64_MIN;
	static uint32_t x436 = 18678U;
	volatile int64_t t89 = 0LL;

	t89 = ((x433<x434)/(x435+x436));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x437 = INT8_MIN;
	uint8_t x438 = 0U;
	volatile uint8_t x439 = 43U;
	uint64_t x440 = 15025LLU;
	static volatile uint64_t t90 = 19274LLU;

	t90 = ((x437<x438)/(x439+x440));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x445 = 1U;
	uint32_t x446 = 1777U;
	static uint16_t x447 = UINT16_MAX;
	volatile int64_t x448 = 150LL;
	int64_t t91 = 47575075359871842LL;

	t91 = ((x445<x446)/(x447+x448));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x453 = UINT32_MAX;
	int8_t x455 = 58;
	int8_t x456 = INT8_MAX;
	int32_t t92 = 39696691;

	t92 = ((x453<x454)/(x455+x456));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x457 = 27961;
	int16_t x458 = INT16_MIN;
	int64_t x459 = -8105062LL;
	static uint8_t x460 = 14U;

	t93 = ((x457<x458)/(x459+x460));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = INT64_MIN;
	int32_t x462 = -1;
	int32_t x463 = 143002770;
	static volatile int64_t x464 = 1358LL;
	int64_t t94 = 20243812641872442LL;

	t94 = ((x461<x462)/(x463+x464));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x465 = UINT32_MAX;
	int64_t x466 = INT64_MIN;
	volatile int16_t x467 = -1;
	int16_t x468 = INT16_MIN;
	static volatile int32_t t95 = 254;

	t95 = ((x465<x466)/(x467+x468));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x469 = 264108;
	static int64_t x470 = 102597LL;
	uint16_t x471 = UINT16_MAX;
	int32_t t96 = 6164;

	t96 = ((x469<x470)/(x471+x472));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x473 = INT8_MAX;
	volatile uint16_t x476 = 7091U;
	static volatile int32_t t97 = -64258271;

	t97 = ((x473<x474)/(x475+x476));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x477 = UINT8_MAX;
	static int64_t x478 = INT64_MIN;
	volatile int32_t t98 = -1358;

	t98 = ((x477<x478)/(x479+x480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x482 = -1103;
	int16_t x484 = INT16_MIN;

	t99 = ((x481<x482)/(x483+x484));

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

