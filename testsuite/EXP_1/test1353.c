#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -1LL;
volatile int32_t x7 = -1;
int8_t x8 = 34;
uint16_t x15 = 20141U;
static volatile int64_t t3 = -376101685445965LL;
int64_t x18 = INT64_MIN;
int8_t x20 = INT8_MIN;
volatile int32_t t4 = 5492;
static uint32_t x24 = UINT32_MAX;
int8_t x25 = -20;
volatile int8_t x29 = INT8_MIN;
static volatile uint16_t x35 = 3453U;
int64_t x42 = INT64_MIN;
static volatile int64_t x48 = -1LL;
uint8_t x52 = 68U;
int32_t t14 = 15946998;
volatile uint64_t t15 = 53645731481293LLU;
int8_t x71 = 59;
volatile int32_t x76 = INT32_MIN;
uint64_t t17 = 2297575034484287420LLU;
uint64_t x93 = 1551476296960094911LLU;
int32_t x95 = -58;
int8_t x111 = 0;
int8_t x113 = 1;
int8_t x116 = INT8_MIN;
int8_t x121 = 2;
volatile int8_t x125 = 59;
static uint8_t x142 = 60U;
static int32_t x149 = 246;
static volatile uint8_t x159 = 41U;
static uint16_t x162 = 3U;
uint8_t x169 = 5U;
int8_t x171 = INT8_MAX;
int16_t x176 = INT16_MAX;
static volatile uint64_t x177 = 2022568902953LLU;
uint64_t x183 = 7169814109041204741LLU;
static uint64_t x185 = 121353696944864LLU;
int16_t x186 = INT16_MAX;
int32_t x190 = -4583726;
static volatile int8_t x191 = 0;
static int16_t x198 = 3;
int32_t x200 = INT32_MIN;
volatile int32_t t43 = -1;
volatile int16_t x202 = 818;
int64_t x204 = 45LL;
uint16_t x214 = 14U;
uint64_t x217 = UINT64_MAX;
static int64_t x225 = 1625556019551660270LL;
int32_t t48 = 16455462;
volatile int32_t x229 = INT32_MAX;
int8_t x231 = INT8_MAX;
static int16_t x237 = -1;
uint32_t t51 = 107963872U;
static uint32_t x241 = UINT32_MAX;
static uint32_t x248 = 0U;
uint8_t x250 = 19U;
int16_t x255 = INT16_MIN;
int8_t x270 = 0;
int16_t x271 = -1;
static int64_t t59 = -2344076793010162LL;
volatile uint32_t x281 = UINT32_MAX;
static int32_t t61 = 22;
int16_t x291 = INT16_MIN;
uint8_t x298 = 1U;
uint8_t x299 = UINT8_MAX;
uint8_t x312 = 90U;
uint64_t x313 = 172279760405207932LLU;
int16_t x320 = INT16_MIN;
int8_t x329 = -1;
uint16_t x330 = 3U;
static uint16_t x337 = 263U;
int32_t t72 = 367;
int32_t x345 = INT32_MAX;
volatile int16_t x346 = INT16_MAX;
static int8_t x348 = -1;
volatile int32_t t73 = 3635;
uint32_t x350 = 15U;
volatile int32_t t74 = -87384358;
uint32_t x357 = 4031U;
int32_t x365 = -1;
uint8_t x370 = UINT8_MAX;
static uint32_t x376 = 1U;
volatile uint8_t x382 = 8U;
volatile uint64_t t80 = 129167361053197LLU;
int32_t x385 = -138697366;
volatile int64_t x386 = -6910041178LL;
int64_t x402 = INT64_MIN;
volatile uint64_t t84 = 118475092LLU;
int16_t x418 = -1;
int16_t x421 = INT16_MAX;
int64_t x427 = INT64_MIN;
uint64_t x428 = 6133368LLU;
int64_t x431 = -1LL;
static int64_t x433 = INT64_MAX;
static volatile int64_t t91 = -138860887429LL;
int8_t x437 = -1;
uint16_t x458 = 7U;
static uint16_t x459 = 5893U;
int64_t x464 = INT64_MIN;
uint32_t x469 = 1U;
uint16_t x476 = UINT16_MAX;
int64_t x484 = INT64_MIN;


void f0(void) {
	int8_t x1 = -1;
	static uint64_t x3 = 1256350286463005LLU;
	static uint16_t x4 = 124U;
	static uint64_t t0 = 13074841443LLU;

	t0 = (((x1<x2)+x3)+x4);

	if (t0 != 1256350286463129LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	uint32_t x6 = 0U;
	int32_t t1 = 1;

	t1 = (((x5<x6)+x7)+x8);

	if (t1 != 33) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile int32_t x10 = INT32_MIN;
	static int16_t x11 = 7498;
	uint8_t x12 = 3U;
	int32_t t2 = -124;

	t2 = (((x9<x10)+x11)+x12);

	if (t2 != 7501) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 5369;
	int64_t x14 = -1LL;
	static int64_t x16 = INT64_MIN;

	t3 = (((x13<x14)+x15)+x16);

	if (t3 != -9223372036854755667LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	uint16_t x19 = 45U;

	t4 = (((x17<x18)+x19)+x20);

	if (t4 != -83) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = -1;
	int64_t x22 = INT64_MIN;
	int64_t x23 = -286869024LL;
	volatile int64_t t5 = 3720817444297103966LL;

	t5 = (((x21<x22)+x23)+x24);

	if (t5 != 4008098271LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = -1LL;
	int64_t t6 = 19058LL;

	t6 = (((x25<x26)+x27)+x28);

	if (t6 != 255LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = 6U;
	int8_t x31 = -1;
	volatile int32_t x32 = 155;
	int32_t t7 = 791;

	t7 = (((x29<x30)+x31)+x32);

	if (t7 != 155) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int16_t x34 = INT16_MIN;
	int8_t x36 = -1;
	volatile int32_t t8 = 0;

	t8 = (((x33<x34)+x35)+x36);

	if (t8 != 3452) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 19;
	int32_t x38 = 94;
	static int64_t x39 = 78082263810LL;
	int64_t x40 = INT64_MIN;
	int64_t t9 = 1687517156265946095LL;

	t9 = (((x37<x38)+x39)+x40);

	if (t9 != -9223371958772511997LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int16_t x43 = INT16_MAX;
	uint64_t x44 = 364717064596086230LLU;
	volatile uint64_t t10 = 26876655771338548LLU;

	t10 = (((x41<x42)+x43)+x44);

	if (t10 != 364717064596118997LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 30U;
	static volatile uint64_t x46 = 13806712920LLU;
	uint16_t x47 = UINT16_MAX;
	volatile int64_t t11 = -484518951872LL;

	t11 = (((x45<x46)+x47)+x48);

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint8_t x50 = UINT8_MAX;
	uint32_t x51 = 111369992U;
	volatile uint32_t t12 = 84432666U;

	t12 = (((x49<x50)+x51)+x52);

	if (t12 != 111370061U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x54 = 1;
	volatile uint64_t x55 = 19730301372681LLU;
	int64_t x56 = 277LL;
	volatile uint64_t t13 = 36225716559LLU;

	t13 = (((x53<x54)+x55)+x56);

	if (t13 != 19730301372958LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 3U;
	volatile int16_t x58 = INT16_MIN;
	volatile int16_t x59 = -1;
	int32_t x60 = 413;

	t14 = (((x57<x58)+x59)+x60);

	if (t14 != 412) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = 20;
	static uint32_t x66 = 280335554U;
	static volatile int8_t x67 = 1;
	volatile uint64_t x68 = 25238LLU;

	t15 = (((x65<x66)+x67)+x68);

	if (t15 != 25240LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = INT8_MIN;
	uint64_t x72 = 253978637764LLU;
	uint64_t t16 = 12362683485853LLU;

	t16 = (((x69<x70)+x71)+x72);

	if (t16 != 253978637823LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	static uint64_t x74 = 1708472073107259LLU;
	static volatile uint64_t x75 = 520062230115075053LLU;

	t17 = (((x73<x74)+x75)+x76);

	if (t17 != 520062227967591406LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -345961355664LL;
	int8_t x78 = 37;
	int8_t x79 = INT8_MIN;
	int16_t x80 = 2600;
	int32_t t18 = -801953;

	t18 = (((x77<x78)+x79)+x80);

	if (t18 != 2473) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = INT64_MIN;
	int32_t x82 = -1;
	int16_t x83 = -7657;
	int8_t x84 = 3;
	volatile int32_t t19 = 1568163;

	t19 = (((x81<x82)+x83)+x84);

	if (t19 != -7653) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = INT32_MIN;
	uint8_t x90 = 0U;
	volatile int8_t x91 = INT8_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t20 = -78412841;

	t20 = (((x89<x90)+x91)+x92);

	if (t20 != 383) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = INT8_MAX;
	int8_t x96 = -1;
	static int32_t t21 = -1353;

	t21 = (((x93<x94)+x95)+x96);

	if (t21 != -59) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 11017278423465927LLU;
	static int64_t x98 = INT64_MIN;
	uint8_t x99 = 87U;
	volatile uint64_t x100 = 57296625164012221LLU;
	static uint64_t t22 = 13553156LLU;

	t22 = (((x97<x98)+x99)+x100);

	if (t22 != 57296625164012309LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x101 = 0U;
	static int8_t x102 = INT8_MIN;
	uint8_t x103 = UINT8_MAX;
	volatile uint16_t x104 = 4U;
	volatile int32_t t23 = -3;

	t23 = (((x101<x102)+x103)+x104);

	if (t23 != 259) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int64_t x106 = -12LL;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MIN;
	int64_t t24 = 10LL;

	t24 = (((x105<x106)+x107)+x108);

	if (t24 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = 7542U;
	static int8_t x112 = -2;
	volatile int32_t t25 = 4123749;

	t25 = (((x109<x110)+x111)+x112);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = -1;
	uint32_t x115 = 12U;
	volatile uint32_t t26 = 113341516U;

	t26 = (((x113<x114)+x115)+x116);

	if (t26 != 4294967180U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -1;
	int64_t x118 = -1LL;
	volatile uint32_t x119 = 5983U;
	uint8_t x120 = 47U;
	uint32_t t27 = 432947675U;

	t27 = (((x117<x118)+x119)+x120);

	if (t27 != 6030U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	volatile uint64_t x124 = 252LLU;
	uint64_t t28 = 81619683272LLU;

	t28 = (((x121<x122)+x123)+x124);

	if (t28 != 124LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x126 = 1U;
	int32_t x127 = 1207;
	int32_t x128 = INT32_MIN;
	volatile int32_t t29 = 16865;

	t29 = (((x125<x126)+x127)+x128);

	if (t29 != -2147482441) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = 246;
	uint8_t x138 = UINT8_MAX;
	static int16_t x139 = -6062;
	int16_t x140 = INT16_MAX;
	int32_t t30 = -179;

	t30 = (((x137<x138)+x139)+x140);

	if (t30 != 26706) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x141 = 11U;
	uint8_t x143 = 2U;
	uint32_t x144 = 3U;
	uint32_t t31 = 1674637302U;

	t31 = (((x141<x142)+x143)+x144);

	if (t31 != 6U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x145 = INT32_MAX;
	volatile int32_t x146 = INT32_MAX;
	static int16_t x147 = -1;
	int8_t x148 = -1;
	int32_t t32 = 1;

	t32 = (((x145<x146)+x147)+x148);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x150 = -186292077LL;
	int64_t x151 = INT64_MIN;
	static int8_t x152 = INT8_MAX;
	volatile int64_t t33 = 1LL;

	t33 = (((x149<x150)+x151)+x152);

	if (t33 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 25482LLU;
	int32_t x158 = 5744;
	volatile uint8_t x160 = 124U;
	volatile int32_t t34 = 38965;

	t34 = (((x157<x158)+x159)+x160);

	if (t34 != 165) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = -98;
	static uint16_t x163 = 57U;
	int32_t x164 = 1;
	volatile int32_t t35 = -51;

	t35 = (((x161<x162)+x163)+x164);

	if (t35 != 59) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 652U;
	volatile int32_t x166 = 0;
	uint64_t x167 = 1613566861658342649LLU;
	int16_t x168 = INT16_MIN;
	volatile uint64_t t36 = 16LLU;

	t36 = (((x165<x166)+x167)+x168);

	if (t36 != 1613566861658309881LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x170 = UINT32_MAX;
	uint8_t x172 = 0U;
	volatile int32_t t37 = -43947;

	t37 = (((x169<x170)+x171)+x172);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 5U;
	volatile uint32_t x174 = 96396U;
	static volatile uint16_t x175 = 12U;
	int32_t t38 = 3161922;

	t38 = (((x173<x174)+x175)+x176);

	if (t38 != 32780) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x178 = -36516LL;
	static int64_t x179 = -1LL;
	uint8_t x180 = 62U;
	static int64_t t39 = 97016476955076063LL;

	t39 = (((x177<x178)+x179)+x180);

	if (t39 != 62LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = 89U;
	volatile uint16_t x182 = 98U;
	int64_t x184 = INT64_MIN;
	uint64_t t40 = 7399LLU;

	t40 = (((x181<x182)+x183)+x184);

	if (t40 != 16393186145895980550LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x187 = INT16_MIN;
	static int32_t x188 = INT32_MAX;
	int32_t t41 = 140483;

	t41 = (((x185<x186)+x187)+x188);

	if (t41 != 2147450879) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 296092518LLU;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t42 = 20;

	t42 = (((x189<x190)+x191)+x192);

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 35012651354114596LLU;
	int8_t x199 = 1;

	t43 = (((x197<x198)+x199)+x200);

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x201 = -1;
	static int32_t x203 = 126786;
	volatile int64_t t44 = -1588790LL;

	t44 = (((x201<x202)+x203)+x204);

	if (t44 != 126832LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x213 = 2U;
	uint8_t x215 = 0U;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t45 = -10491;

	t45 = (((x213<x214)+x215)+x216);

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x218 = 410922858LL;
	volatile int8_t x219 = INT8_MIN;
	static uint16_t x220 = 14074U;
	static int32_t t46 = 341;

	t46 = (((x217<x218)+x219)+x220);

	if (t46 != 13946) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = 6;
	uint8_t x223 = 0U;
	int8_t x224 = INT8_MIN;
	volatile int32_t t47 = 93252604;

	t47 = (((x221<x222)+x223)+x224);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x226 = -1;
	static int32_t x227 = INT32_MIN;
	uint16_t x228 = 227U;

	t48 = (((x225<x226)+x227)+x228);

	if (t48 != -2147483421) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x230 = 1;
	static int8_t x232 = -1;
	int32_t t49 = -31316503;

	t49 = (((x229<x230)+x231)+x232);

	if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = INT64_MAX;
	static uint8_t x234 = UINT8_MAX;
	static int64_t x235 = INT64_MIN;
	static int32_t x236 = 3;
	int64_t t50 = 10217176686821LL;

	t50 = (((x233<x234)+x235)+x236);

	if (t50 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x238 = 46;
	uint32_t x239 = 679U;
	int8_t x240 = -1;

	t51 = (((x237<x238)+x239)+x240);

	if (t51 != 679U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x242 = 4606U;
	int16_t x243 = INT16_MIN;
	int64_t x244 = 1314659LL;
	static int64_t t52 = -6574794697382LL;

	t52 = (((x241<x242)+x243)+x244);

	if (t52 != 1281891LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MIN;
	int32_t x246 = 0;
	int64_t x247 = -493529777717122393LL;
	volatile int64_t t53 = -20711228041569169LL;

	t53 = (((x245<x246)+x247)+x248);

	if (t53 != -493529777717122392LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = INT16_MAX;
	int16_t x251 = 13874;
	static int64_t x252 = -1LL;
	volatile int64_t t54 = -9605066707290085LL;

	t54 = (((x249<x250)+x251)+x252);

	if (t54 != 13873LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -6645285LL;
	int64_t x254 = 36953786164LL;
	uint64_t x256 = 41962272870046LLU;
	volatile uint64_t t55 = 1LLU;

	t55 = (((x253<x254)+x255)+x256);

	if (t55 != 41962272837279LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x261 = 2000910602U;
	uint8_t x262 = 56U;
	int32_t x263 = INT32_MIN;
	static int16_t x264 = 33;
	volatile int32_t t56 = 531559715;

	t56 = (((x261<x262)+x263)+x264);

	if (t56 != -2147483615) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x269 = INT8_MIN;
	int8_t x272 = -30;
	static volatile int32_t t57 = 4461267;

	t57 = (((x269<x270)+x271)+x272);

	if (t57 != -30) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MAX;
	static int64_t x275 = -1LL;
	uint16_t x276 = 5U;
	int64_t t58 = 0LL;

	t58 = (((x273<x274)+x275)+x276);

	if (t58 != 5LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x277 = -22;
	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MAX;
	volatile int64_t x280 = -961675749164969710LL;

	t59 = (((x277<x278)+x279)+x280);

	if (t59 != 8261696287689806097LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x282 = 499126674LLU;
	static uint16_t x283 = 3704U;
	uint64_t x284 = 3111882837867956407LLU;
	static volatile uint64_t t60 = 19143045006LLU;

	t60 = (((x281<x282)+x283)+x284);

	if (t60 != 3111882837867960111LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x285 = -381LL;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MIN;
	volatile uint8_t x288 = 37U;

	t61 = (((x285<x286)+x287)+x288);

	if (t61 != -2147483610) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x289 = 28502U;
	volatile int64_t x290 = -1LL;
	int16_t x292 = INT16_MIN;
	volatile int32_t t62 = -1;

	t62 = (((x289<x290)+x291)+x292);

	if (t62 != -65536) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x297 = 55U;
	uint8_t x300 = 9U;
	int32_t t63 = 380233;

	t63 = (((x297<x298)+x299)+x300);

	if (t63 != 264) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MAX;
	int64_t x303 = INT64_MIN;
	uint32_t x304 = 31U;
	int64_t t64 = 56094LL;

	t64 = (((x301<x302)+x303)+x304);

	if (t64 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -1LL;
	uint32_t x306 = 228045U;
	uint8_t x307 = 0U;
	uint64_t x308 = 2LLU;
	uint64_t t65 = 10572163940235503LLU;

	t65 = (((x305<x306)+x307)+x308);

	if (t65 != 3LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x309 = INT16_MAX;
	int16_t x310 = -2258;
	static volatile int16_t x311 = 2;
	int32_t t66 = -777704870;

	t66 = (((x309<x310)+x311)+x312);

	if (t66 != 92) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x314 = 1LLU;
	static int8_t x315 = INT8_MAX;
	static volatile int32_t x316 = INT32_MIN;
	int32_t t67 = -2225238;

	t67 = (((x313<x314)+x315)+x316);

	if (t67 != -2147483521) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MIN;
	static uint64_t x318 = 527375109LLU;
	int64_t x319 = 41616LL;
	volatile int64_t t68 = -213154338536718LL;

	t68 = (((x317<x318)+x319)+x320);

	if (t68 != 8848LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x321 = 1959268199192031498LLU;
	volatile int16_t x322 = -6291;
	volatile uint8_t x323 = 3U;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t69 = -29926;

	t69 = (((x321<x322)+x323)+x324);

	if (t69 != -2147483644) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = 38;
	int8_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = -1;
	volatile int32_t t70 = 538;

	t70 = (((x325<x326)+x327)+x328);

	if (t70 != 65534) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x331 = 6LLU;
	volatile uint32_t x332 = UINT32_MAX;
	volatile uint64_t t71 = 8747955043511764044LLU;

	t71 = (((x329<x330)+x331)+x332);

	if (t71 != 4294967302LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x338 = INT32_MIN;
	int8_t x339 = 4;
	uint8_t x340 = 5U;

	t72 = (((x337<x338)+x339)+x340);

	if (t72 != 9) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x347 = INT16_MIN;

	t73 = (((x345<x346)+x347)+x348);

	if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x349 = 18144428U;
	int8_t x351 = -1;
	static int16_t x352 = INT16_MIN;

	t74 = (((x349<x350)+x351)+x352);

	if (t74 != -32769) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = -1;
	volatile int32_t x354 = INT32_MIN;
	uint16_t x355 = 16576U;
	volatile int16_t x356 = -1;
	static int32_t t75 = 1617408;

	t75 = (((x353<x354)+x355)+x356);

	if (t75 != 16575) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x358 = INT8_MIN;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t x360 = 638;
	int32_t t76 = 167220;

	t76 = (((x357<x358)+x359)+x360);

	if (t76 != 894) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x366 = UINT64_MAX;
	int64_t x367 = INT64_MIN;
	static volatile uint8_t x368 = 25U;
	volatile int64_t t77 = 43106407LL;

	t77 = (((x365<x366)+x367)+x368);

	if (t77 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x369 = -11;
	int8_t x371 = INT8_MAX;
	uint64_t x372 = 6920949454559LLU;
	static volatile uint64_t t78 = 10565LLU;

	t78 = (((x369<x370)+x371)+x372);

	if (t78 != 6920949454687LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x373 = 41;
	volatile int32_t x374 = 0;
	int8_t x375 = -1;
	volatile uint32_t t79 = 514676753U;

	t79 = (((x373<x374)+x375)+x376);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x381 = INT16_MIN;
	uint32_t x383 = 1U;
	uint64_t x384 = 5LLU;

	t80 = (((x381<x382)+x383)+x384);

	if (t80 != 7LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x387 = -13562;
	int64_t x388 = 64783037229985334LL;
	volatile int64_t t81 = 7099949715LL;

	t81 = (((x385<x386)+x387)+x388);

	if (t81 != 64783037229971772LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x389 = -246214;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -1LL;
	int64_t x392 = -1LL;
	volatile int64_t t82 = -4539LL;

	t82 = (((x389<x390)+x391)+x392);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x393 = -8685;
	int32_t x394 = -1;
	volatile int64_t x395 = -1LL;
	int8_t x396 = INT8_MIN;
	volatile int64_t t83 = 55LL;

	t83 = (((x393<x394)+x395)+x396);

	if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x401 = INT16_MIN;
	int64_t x403 = INT64_MAX;
	uint64_t x404 = UINT64_MAX;

	t84 = (((x401<x402)+x403)+x404);

	if (t84 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 2168U;
	static int64_t x410 = 50LL;
	volatile int64_t x411 = -1LL;
	int16_t x412 = -1;
	volatile int64_t t85 = 1365753896LL;

	t85 = (((x409<x410)+x411)+x412);

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = 1;
	static int8_t x414 = INT8_MAX;
	int16_t x415 = 31;
	uint32_t x416 = 1019U;
	volatile uint32_t t86 = 58787U;

	t86 = (((x413<x414)+x415)+x416);

	if (t86 != 1051U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x417 = -1;
	static uint32_t x419 = UINT32_MAX;
	uint8_t x420 = 21U;
	volatile uint32_t t87 = 41955833U;

	t87 = (((x417<x418)+x419)+x420);

	if (t87 != 20U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x422 = -3;
	uint32_t x423 = 1U;
	int32_t x424 = INT32_MAX;
	uint32_t t88 = 3U;

	t88 = (((x421<x422)+x423)+x424);

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x425 = 831896834LL;
	int32_t x426 = INT32_MAX;
	uint64_t t89 = 115949316LLU;

	t89 = (((x425<x426)+x427)+x428);

	if (t89 != 9223372036860909177LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x429 = 56396856U;
	static int8_t x430 = 4;
	int16_t x432 = -13973;
	volatile int64_t t90 = 1014315LL;

	t90 = (((x429<x430)+x431)+x432);

	if (t90 != -13974LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = 10;
	int64_t x436 = INT64_MIN;

	t91 = (((x433<x434)+x435)+x436);

	if (t91 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x438 = 166332139832LLU;
	volatile uint16_t x439 = 7U;
	static volatile int16_t x440 = INT16_MIN;
	volatile int32_t t92 = -86935927;

	t92 = (((x437<x438)+x439)+x440);

	if (t92 != -32761) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x457 = INT32_MAX;
	volatile uint16_t x460 = 244U;
	volatile int32_t t93 = -26;

	t93 = (((x457<x458)+x459)+x460);

	if (t93 != 6137) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x461 = 16681;
	uint8_t x462 = 1U;
	uint8_t x463 = UINT8_MAX;
	volatile int64_t t94 = -1431737563LL;

	t94 = (((x461<x462)+x463)+x464);

	if (t94 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x465 = -1LL;
	static int32_t x466 = 0;
	int64_t x467 = -167383887651510415LL;
	int16_t x468 = -1;
	volatile int64_t t95 = -728066593608507LL;

	t95 = (((x465<x466)+x467)+x468);

	if (t95 != -167383887651510415LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x470 = INT32_MIN;
	uint32_t x471 = UINT32_MAX;
	volatile int16_t x472 = INT16_MIN;
	uint32_t t96 = 184U;

	t96 = (((x469<x470)+x471)+x472);

	if (t96 != 4294934528U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x473 = INT32_MIN;
	static int16_t x474 = INT16_MAX;
	int8_t x475 = INT8_MAX;
	static volatile int32_t t97 = -104084;

	t97 = (((x473<x474)+x475)+x476);

	if (t97 != 65663) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = 61;
	int32_t x478 = INT32_MAX;
	int32_t x479 = 1108;
	int64_t x480 = -1LL;
	volatile int64_t t98 = 43181630245961538LL;

	t98 = (((x477<x478)+x479)+x480);

	if (t98 != 1108LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x481 = 32LLU;
	static volatile int64_t x482 = INT64_MIN;
	static int64_t x483 = 6276LL;
	static int64_t t99 = -454976910057487727LL;

	t99 = (((x481<x482)+x483)+x484);

	if (t99 != -9223372036854769531LL) { NG(); } else { ; }
	
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

