#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = -1449200195540710642LL;
int8_t x7 = 0;
uint8_t x13 = 1U;
int64_t t5 = 14LL;
uint64_t x28 = 62376625566LLU;
int32_t x29 = 6;
int8_t x31 = -1;
int16_t x33 = INT16_MIN;
int32_t t9 = -7201856;
static int32_t x42 = INT32_MIN;
volatile int32_t t10 = 39415117;
volatile int64_t x60 = INT64_MIN;
uint64_t x61 = 812583893449054LLU;
int16_t x66 = 1;
volatile int64_t x71 = INT64_MIN;
int8_t x76 = INT8_MIN;
volatile int32_t t18 = 7843799;
static int8_t x89 = -1;
volatile int64_t x91 = -1LL;
int8_t x96 = INT8_MAX;
volatile uint16_t x97 = UINT16_MAX;
int64_t x102 = INT64_MIN;
static volatile uint8_t x103 = UINT8_MAX;
volatile uint16_t x105 = 32489U;
static int32_t t26 = -7660349;
int32_t x111 = INT32_MAX;
int32_t x113 = -1;
static uint64_t x116 = 250523151340379222LLU;
static int8_t x129 = -1;
int32_t x143 = -1008;
volatile uint64_t t37 = 543LLU;
int64_t x159 = -1LL;
uint32_t t41 = 64258U;
uint8_t x171 = 1U;
int8_t x172 = INT8_MIN;
volatile int64_t x173 = INT64_MIN;
int64_t x177 = INT64_MIN;
static volatile int64_t x189 = INT64_MIN;
uint16_t x190 = UINT16_MAX;
int32_t x191 = 3548;
int8_t x193 = INT8_MAX;
int32_t x199 = INT32_MAX;
volatile uint32_t x206 = UINT32_MAX;
static int32_t x208 = INT32_MIN;
uint8_t x212 = UINT8_MAX;
static int32_t t52 = -43976;
int32_t t53 = -31598;
volatile int64_t x219 = INT64_MIN;
int8_t x224 = 13;
int32_t t55 = -1;
int16_t x225 = 3;
int32_t x232 = INT32_MIN;
uint32_t x233 = UINT32_MAX;
static int64_t x237 = INT64_MAX;
int8_t x243 = INT8_MIN;
volatile uint64_t t60 = 168937LLU;
uint8_t x247 = UINT8_MAX;
int16_t x248 = 2;
static volatile int32_t t61 = 739290;
uint8_t x249 = UINT8_MAX;
uint32_t x252 = 62U;
uint32_t x253 = 747437910U;
int32_t x260 = 7700185;
int32_t t64 = 115;
int16_t x267 = 3481;
static int64_t x268 = -2LL;
int32_t x271 = INT32_MIN;
uint8_t x273 = 20U;
uint64_t x279 = 0LLU;
static int64_t t70 = -337886LL;
int32_t x287 = -1;
uint16_t x289 = 3U;
int16_t x312 = -106;
int16_t x320 = -5;
volatile int32_t t79 = 172;
static uint8_t x321 = UINT8_MAX;
static int8_t x322 = INT8_MIN;
uint32_t x324 = UINT32_MAX;
static int8_t x329 = -1;
volatile uint32_t t82 = 161053468U;
uint16_t x338 = 22U;
int8_t x350 = INT8_MIN;
volatile int32_t t87 = 10357460;
int64_t x353 = -276258859395LL;
volatile int64_t x359 = INT64_MIN;
int64_t t89 = -5LL;
volatile int64_t x361 = INT64_MIN;
int16_t x363 = INT16_MAX;
volatile int8_t x364 = 23;
static int64_t x366 = 2803LL;
int64_t x368 = -1LL;
int8_t x370 = -1;
uint32_t x376 = 5U;
int64_t x383 = -1LL;
int8_t x388 = INT8_MIN;
int32_t x391 = INT32_MIN;
volatile int32_t t97 = -12354;
static int16_t x400 = 1;


void f0(void) {
	int16_t x1 = -1;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = INT64_MAX;
	int64_t x4 = -1LL;

	t0 = ((x1<(x2==x3))+x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 5U;
	static int16_t x6 = INT16_MIN;
	int8_t x8 = 0;
	int32_t t1 = -5639482;

	t1 = ((x5<(x6==x7))+x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	volatile int8_t x10 = 6;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -5;

	t2 = ((x9<(x10==x11))+x12);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = 22;
	uint16_t x15 = UINT16_MAX;
	static int16_t x16 = 1689;
	volatile int32_t t3 = 2913059;

	t3 = ((x13<(x14==x15))+x16);

	if (t3 != 1689) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 442446834U;
	uint16_t x18 = UINT16_MAX;
	uint64_t x19 = 847138943533LLU;
	uint8_t x20 = 2U;
	int32_t t4 = -82043;

	t4 = ((x17<(x18==x19))+x20);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MIN;
	volatile uint32_t x23 = 480082U;
	static int64_t x24 = 54316272LL;

	t5 = ((x21<(x22==x23))+x24);

	if (t5 != 54316272LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 431337462832LL;
	uint16_t x26 = UINT16_MAX;
	volatile uint64_t x27 = 120683343149LLU;
	uint64_t t6 = 4554472945LLU;

	t6 = ((x25<(x26==x27))+x28);

	if (t6 != 62376625566LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29<(x30==x31))+x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 268937LLU;
	volatile uint16_t x35 = 7U;
	volatile int8_t x36 = INT8_MIN;
	int32_t t8 = 7100515;

	t8 = ((x33<(x34==x35))+x36);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -146;
	uint16_t x38 = UINT16_MAX;
	uint16_t x39 = 1786U;
	int16_t x40 = 10494;

	t9 = ((x37<(x38==x39))+x40);

	if (t9 != 10495) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 7U;

	t10 = ((x41<(x42==x43))+x44);

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MIN;
	static int64_t x47 = -1LL;
	volatile uint64_t x48 = 1332LLU;
	uint64_t t11 = 394820LLU;

	t11 = ((x45<(x46==x47))+x48);

	if (t11 != 1333LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x50 = 6836U;
	int8_t x51 = INT8_MIN;
	volatile int16_t x52 = INT16_MAX;
	int32_t t12 = -61;

	t12 = ((x49<(x50==x51))+x52);

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 36;
	int32_t x54 = 3;
	static int8_t x55 = INT8_MIN;
	uint16_t x56 = 1U;
	volatile int32_t t13 = -54;

	t13 = ((x53<(x54==x55))+x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 63956U;
	int64_t x58 = INT64_MIN;
	static int16_t x59 = -1;
	int64_t t14 = INT64_MIN;

	t14 = ((x57<(x58==x59))+x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = 1;
	int16_t x63 = INT16_MIN;
	uint32_t x64 = 408887U;
	volatile uint32_t t15 = 549U;

	t15 = ((x61<(x62==x63))+x64);

	if (t15 != 408887U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 20;
	uint32_t x67 = 7724512U;
	int64_t x68 = INT64_MIN;
	int64_t t16 = INT64_MIN;

	t16 = ((x65<(x66==x67))+x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile int8_t x70 = INT8_MIN;
	static uint8_t x72 = 44U;
	int32_t t17 = -412826773;

	t17 = ((x69<(x70==x71))+x72);

	if (t17 != 45) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 20U;
	int64_t x74 = 102076557600397645LL;
	int16_t x75 = 0;

	t18 = ((x73<(x74==x75))+x76);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	static volatile int16_t x78 = -1;
	uint16_t x79 = 924U;
	uint16_t x80 = 1018U;
	volatile int32_t t19 = 1358;

	t19 = ((x77<(x78==x79))+x80);

	if (t19 != 1019) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = 8004463274941LLU;
	volatile int8_t x82 = -1;
	static int8_t x83 = INT8_MAX;
	static int32_t x84 = -3950502;
	int32_t t20 = -576462856;

	t20 = ((x81<(x82==x83))+x84);

	if (t20 != -3950502) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = -1;
	uint32_t x87 = UINT32_MAX;
	static volatile uint64_t x88 = 1684280LLU;
	uint64_t t21 = 7663977LLU;

	t21 = ((x85<(x86==x87))+x88);

	if (t21 != 1684281LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = 1334086U;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = -6739425;

	t22 = ((x89<(x90==x91))+x92);

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -31919114LL;
	volatile uint8_t x94 = 5U;
	uint32_t x95 = UINT32_MAX;
	int32_t t23 = 682;

	t23 = ((x93<(x94==x95))+x96);

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = INT16_MIN;
	uint64_t x99 = 6662924576303LLU;
	volatile int32_t x100 = 508897;
	volatile int32_t t24 = 5;

	t24 = ((x97<(x98==x99))+x100);

	if (t24 != 508897) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	static int32_t t25 = -1842161;

	t25 = ((x101<(x102==x103))+x104);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 231272497U;
	static uint64_t x107 = 4LLU;
	static volatile int8_t x108 = 1;

	t26 = ((x105<(x106==x107))+x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -3412;
	volatile uint32_t x110 = 3603536U;
	int64_t x112 = -1LL;
	static int64_t t27 = -773LL;

	t27 = ((x109<(x110==x111))+x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	uint64_t x115 = 8344LLU;
	volatile uint64_t t28 = 16292LLU;

	t28 = ((x113<(x114==x115))+x116);

	if (t28 != 250523151340379223LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	volatile int64_t x118 = INT64_MIN;
	static uint64_t x119 = 59729LLU;
	static uint32_t x120 = UINT32_MAX;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = ((x117<(x118==x119))+x120);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	uint16_t x122 = UINT16_MAX;
	static int32_t x123 = -67;
	int8_t x124 = INT8_MIN;
	static int32_t t30 = 935;

	t30 = ((x121<(x122==x123))+x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	uint64_t x128 = 20705257LLU;
	uint64_t t31 = 58319587311506634LLU;

	t31 = ((x125<(x126==x127))+x128);

	if (t31 != 20705257LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MAX;
	int64_t x131 = -116570573673LL;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t32 = 120568;

	t32 = ((x129<(x130==x131))+x132);

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	uint32_t x134 = 14U;
	int64_t x135 = INT64_MAX;
	static int16_t x136 = -361;
	int32_t t33 = 318531;

	t33 = ((x133<(x134==x135))+x136);

	if (t33 != -361) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	uint8_t x138 = UINT8_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -2217;

	t34 = ((x137<(x138==x139))+x140);

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	int16_t x142 = INT16_MIN;
	int16_t x144 = INT16_MAX;
	volatile int32_t t35 = 231786461;

	t35 = ((x141<(x142==x143))+x144);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 53U;
	int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MIN;
	int64_t x148 = -1LL;
	volatile int64_t t36 = -14113946LL;

	t36 = ((x145<(x146==x147))+x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 3526514813LLU;
	int32_t x150 = INT32_MIN;
	volatile int16_t x151 = INT16_MIN;
	uint64_t x152 = 121128389932LLU;

	t37 = ((x149<(x150==x151))+x152);

	if (t37 != 121128389932LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 3225245878LL;
	int32_t x154 = INT32_MIN;
	int16_t x155 = -1;
	int8_t x156 = -1;
	static int32_t t38 = 10472122;

	t38 = ((x153<(x154==x155))+x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -162403692450LL;
	int16_t x158 = INT16_MAX;
	int8_t x160 = -1;
	int32_t t39 = 2712763;

	t39 = ((x157<(x158==x159))+x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int64_t x162 = INT64_MAX;
	int64_t x163 = -1LL;
	uint16_t x164 = 1388U;
	volatile int32_t t40 = -3;

	t40 = ((x161<(x162==x163))+x164);

	if (t40 != 1388) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 118563;
	static uint8_t x166 = 8U;
	int64_t x167 = -482891584710283LL;
	volatile uint32_t x168 = 2237U;

	t41 = ((x165<(x166==x167))+x168);

	if (t41 != 2237U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int64_t x170 = INT64_MIN;
	int32_t t42 = -380292686;

	t42 = ((x169<(x170==x171))+x172);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -5;
	int64_t x175 = 50275984488LL;
	static int32_t x176 = -21434769;
	volatile int32_t t43 = 1;

	t43 = ((x173<(x174==x175))+x176);

	if (t43 != -21434768) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x178 = -730419196207LL;
	uint64_t x179 = UINT64_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = 56677U;

	t44 = ((x177<(x178==x179))+x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	volatile uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MAX;
	static uint32_t x184 = UINT32_MAX;
	volatile uint32_t t45 = 22535748U;

	t45 = ((x181<(x182==x183))+x184);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 506547397U;
	static int64_t x186 = INT64_MIN;
	volatile uint16_t x187 = 202U;
	int8_t x188 = 0;
	static volatile int32_t t46 = -1;

	t46 = ((x185<(x186==x187))+x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x192 = INT8_MIN;
	int32_t t47 = -7219152;

	t47 = ((x189<(x190==x191))+x192);

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MAX;
	int64_t x195 = -1LL;
	int64_t x196 = 835518LL;
	static int64_t t48 = -13113588461LL;

	t48 = ((x193<(x194==x195))+x196);

	if (t48 != 835518LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x197 = UINT16_MAX;
	int8_t x198 = INT8_MIN;
	uint32_t x200 = 146630473U;
	volatile uint32_t t49 = 1U;

	t49 = ((x197<(x198==x199))+x200);

	if (t49 != 146630473U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 37;
	static uint32_t x202 = 1286281U;
	uint64_t x203 = 63575296LLU;
	volatile uint64_t x204 = 13408463924288524LLU;
	uint64_t t50 = 225713576LLU;

	t50 = ((x201<(x202==x203))+x204);

	if (t50 != 13408463924288524LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	uint64_t x207 = 99119034LLU;
	int32_t t51 = INT32_MIN;

	t51 = ((x205<(x206==x207))+x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -1;
	static uint16_t x210 = UINT16_MAX;
	int64_t x211 = 6870350028LL;

	t52 = ((x209<(x210==x211))+x212);

	if (t52 != 256) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 7U;
	uint8_t x214 = 48U;
	uint8_t x215 = 1U;
	int8_t x216 = -27;

	t53 = ((x213<(x214==x215))+x216);

	if (t53 != -27) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 6U;
	int8_t x218 = 38;
	volatile int32_t x220 = -1;
	volatile int32_t t54 = 116;

	t54 = ((x217<(x218==x219))+x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 3472321754035972389LLU;
	int32_t x222 = INT32_MIN;
	volatile int32_t x223 = 60364074;

	t55 = ((x221<(x222==x223))+x224);

	if (t55 != 13) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x226 = 1U;
	int64_t x227 = INT64_MIN;
	int8_t x228 = -1;
	static volatile int32_t t56 = 1208;

	t56 = ((x225<(x226==x227))+x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	static int32_t x231 = INT32_MIN;
	static volatile int32_t t57 = INT32_MIN;

	t57 = ((x229<(x230==x231))+x232);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 1113527457LLU;
	int16_t x235 = INT16_MAX;
	uint16_t x236 = 121U;
	volatile int32_t t58 = -157824483;

	t58 = ((x233<(x234==x235))+x236);

	if (t58 != 121) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MIN;
	int8_t x239 = -29;
	uint32_t x240 = 3812538U;
	uint32_t t59 = 107161027U;

	t59 = ((x237<(x238==x239))+x240);

	if (t59 != 3812538U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -39;
	static volatile int64_t x242 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;

	t60 = ((x241<(x242==x243))+x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int64_t x246 = -1LL;

	t61 = ((x245<(x246==x247))+x248);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -33134LL;
	int16_t x251 = -1;
	volatile uint32_t t62 = 125534U;

	t62 = ((x249<(x250==x251))+x252);

	if (t62 != 62U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MAX;
	static uint16_t x255 = 467U;
	volatile int16_t x256 = INT16_MAX;
	int32_t t63 = 1366;

	t63 = ((x253<(x254==x255))+x256);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MAX;
	int32_t x259 = INT32_MIN;

	t64 = ((x257<(x258==x259))+x260);

	if (t64 != 7700186) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = -1LL;
	int32_t x262 = INT32_MAX;
	int64_t x263 = -74815962844779647LL;
	int32_t x264 = -1;
	int32_t t65 = -362;

	t65 = ((x261<(x262==x263))+x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int32_t x266 = -277383028;
	volatile int64_t t66 = -155078045109LL;

	t66 = ((x265<(x266==x267))+x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 19U;
	uint32_t x270 = 3U;
	int64_t x272 = -1LL;
	volatile int64_t t67 = 2LL;

	t67 = ((x269<(x270==x271))+x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 53531311;

	t68 = ((x273<(x274==x275))+x276);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t69 = 13151;

	t69 = ((x277<(x278==x279))+x280);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MIN;
	uint8_t x283 = 117U;
	int64_t x284 = INT64_MIN;

	t70 = ((x281<(x282==x283))+x284);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = 3787147611323LL;
	uint32_t x288 = 477U;
	uint32_t t71 = 21U;

	t71 = ((x285<(x286==x287))+x288);

	if (t71 != 478U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x290 = -103197LL;
	volatile uint16_t x291 = 844U;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t72 = INT32_MAX;

	t72 = ((x289<(x290==x291))+x292);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = UINT32_MAX;
	volatile uint64_t x294 = 21161899LLU;
	static int32_t x295 = INT32_MAX;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = -297;

	t73 = ((x293<(x294==x295))+x296);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	volatile int32_t x298 = -3;
	static int8_t x299 = -42;
	int16_t x300 = INT16_MAX;
	int32_t t74 = 56404;

	t74 = ((x297<(x298==x299))+x300);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MAX;
	uint8_t x303 = 1U;
	uint8_t x304 = 8U;
	volatile int32_t t75 = -47392;

	t75 = ((x301<(x302==x303))+x304);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int64_t x306 = INT64_MIN;
	static volatile int8_t x307 = 3;
	uint64_t x308 = 6325657LLU;
	volatile uint64_t t76 = 31338LLU;

	t76 = ((x305<(x306==x307))+x308);

	if (t76 != 6325657LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -4;
	uint32_t x310 = 118U;
	int64_t x311 = INT64_MAX;
	volatile int32_t t77 = 14989227;

	t77 = ((x309<(x310==x311))+x312);

	if (t77 != -105) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	uint8_t x314 = 18U;
	volatile uint16_t x315 = 18483U;
	static int32_t x316 = 10;
	int32_t t78 = 40076819;

	t78 = ((x313<(x314==x315))+x316);

	if (t78 != 10) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 48U;
	int32_t x318 = INT32_MAX;
	uint16_t x319 = 1842U;

	t79 = ((x317<(x318==x319))+x320);

	if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = -2;
	uint32_t t80 = UINT32_MAX;

	t80 = ((x321<(x322==x323))+x324);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = 3964769845102LLU;
	static uint8_t x326 = 7U;
	int8_t x327 = 3;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = INT32_MIN;

	t81 = ((x325<(x326==x327))+x328);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = UINT16_MAX;
	static uint64_t x331 = 1173865409564444576LLU;
	uint32_t x332 = UINT32_MAX;

	t82 = ((x329<(x330==x331))+x332);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	static uint32_t x334 = 21U;
	int64_t x335 = INT64_MIN;
	volatile uint32_t x336 = 41U;
	uint32_t t83 = 294U;

	t83 = ((x333<(x334==x335))+x336);

	if (t83 != 41U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 228224444360156LLU;
	volatile int16_t x339 = -1;
	int16_t x340 = -1;
	int32_t t84 = 1;

	t84 = ((x337<(x338==x339))+x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = -1;
	int32_t x343 = 31;
	volatile int16_t x344 = INT16_MIN;
	static int32_t t85 = -1996;

	t85 = ((x341<(x342==x343))+x344);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	uint64_t x346 = UINT64_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	int64_t x348 = 7583977207773LL;
	static volatile int64_t t86 = 872542294LL;

	t86 = ((x345<(x346==x347))+x348);

	if (t86 != 7583977207774LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 6U;
	static int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MIN;

	t87 = ((x349<(x350==x351))+x352);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x354 = 3U;
	static volatile uint64_t x355 = 7LLU;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -3348633;

	t88 = ((x353<(x354==x355))+x356);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	uint8_t x358 = 1U;
	int64_t x360 = INT64_MIN;

	t89 = ((x357<(x358==x359))+x360);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = -1;
	int32_t t90 = 188398;

	t90 = ((x361<(x362==x363))+x364);

	if (t90 != 24) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	static int64_t x367 = 12542153618045719LL;
	volatile int64_t t91 = -11LL;

	t91 = ((x365<(x366==x367))+x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t92 = -1090439224111620814LL;

	t92 = ((x369<(x370==x371))+x372);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = -41;
	volatile int64_t x374 = 0LL;
	uint32_t x375 = 28289U;
	uint32_t t93 = 0U;

	t93 = ((x373<(x374==x375))+x376);

	if (t93 != 6U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = 646619LLU;
	static uint8_t x378 = UINT8_MAX;
	uint32_t x379 = UINT32_MAX;
	uint8_t x380 = UINT8_MAX;
	int32_t t94 = -6325;

	t94 = ((x377<(x378==x379))+x380);

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -34;
	int16_t x382 = INT16_MAX;
	int8_t x384 = -40;
	volatile int32_t t95 = 13;

	t95 = ((x381<(x382==x383))+x384);

	if (t95 != -39) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = 3;
	int8_t x386 = INT8_MIN;
	volatile int8_t x387 = INT8_MIN;
	int32_t t96 = 497;

	t96 = ((x385<(x386==x387))+x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	volatile uint16_t x390 = 756U;
	int32_t x392 = 12;

	t97 = ((x389<(x390==x391))+x392);

	if (t97 != 12) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = 5;
	static volatile int16_t x394 = -421;
	int32_t x395 = -81;
	int64_t x396 = INT64_MAX;
	int64_t t98 = INT64_MAX;

	t98 = ((x393<(x394==x395))+x396);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -5815731119LL;
	volatile int64_t x398 = -8211395LL;
	int16_t x399 = INT16_MIN;
	int32_t t99 = -1;

	t99 = ((x397<(x398==x399))+x400);

	if (t99 != 2) { NG(); } else { ; }
	
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

