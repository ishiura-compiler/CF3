#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = -1LL;
int32_t x16 = -94861873;
int64_t x21 = 943103440729LL;
int32_t x24 = INT32_MIN;
int16_t x26 = 6506;
static int16_t x29 = -861;
int64_t x52 = 864175444286LL;
int32_t t12 = 175754720;
volatile uint64_t x61 = 832471323779LLU;
static int8_t x68 = INT8_MAX;
int8_t x71 = INT8_MIN;
volatile int8_t x81 = INT8_MIN;
static int32_t x97 = -1;
uint16_t x100 = UINT16_MAX;
int16_t x102 = INT16_MIN;
static int64_t x105 = -1LL;
int32_t x106 = -60;
volatile int32_t t26 = 0;
static int16_t x122 = -15258;
int32_t t30 = -27268064;
volatile int64_t x127 = 72LL;
int32_t x128 = INT32_MIN;
int8_t x131 = 0;
volatile uint8_t x147 = 6U;
static uint32_t x154 = UINT32_MAX;
uint16_t x155 = 20U;
static int64_t x159 = -1LL;
static volatile int32_t t39 = -19987777;
uint32_t x162 = 25936543U;
uint64_t x168 = UINT64_MAX;
volatile uint64_t x171 = 1019LLU;
volatile int32_t t42 = -1413483;
static int64_t x173 = -1297951321894449LL;
int8_t x174 = 0;
int32_t x176 = INT32_MIN;
static int32_t t43 = 149861;
volatile int16_t x185 = -1;
int8_t x190 = INT8_MIN;
uint32_t x192 = 1U;
int32_t t48 = 50069;
uint64_t x198 = 1LLU;
volatile int32_t t49 = 8887;
int32_t x203 = 780;
int64_t x208 = INT64_MAX;
volatile int32_t t51 = 111;
static volatile int32_t t52 = -17361218;
static int8_t x216 = 6;
int16_t x223 = INT16_MIN;
uint16_t x227 = UINT16_MAX;
uint16_t x230 = 15037U;
static volatile uint8_t x233 = 1U;
int32_t t60 = -352;
int32_t x250 = INT32_MIN;
uint32_t x259 = 9590602U;
uint8_t x262 = 1U;
int64_t x263 = -1LL;
uint16_t x269 = 50U;
volatile int32_t t67 = -40895874;
int8_t x273 = INT8_MIN;
uint8_t x274 = UINT8_MAX;
int8_t x278 = INT8_MIN;
int8_t x280 = 4;
volatile int64_t x287 = -386503LL;
static int16_t x296 = -1;
uint32_t x298 = 669U;
uint8_t x299 = 18U;
static int32_t x301 = INT32_MIN;
uint8_t x302 = 14U;
static uint16_t x303 = 14656U;
int16_t x307 = 9;
uint16_t x311 = 26U;
volatile int32_t t77 = 112347784;
int8_t x314 = INT8_MIN;
int8_t x322 = 13;
uint64_t x323 = 18LLU;
int8_t x337 = -15;
static int32_t x340 = 11594;
uint8_t x341 = 85U;
uint16_t x343 = 147U;
int16_t x344 = 1;
static int32_t x349 = INT32_MIN;
int64_t x362 = -61LL;
static uint32_t x366 = UINT32_MAX;
uint64_t x367 = UINT64_MAX;
int64_t x369 = 90LL;
int32_t x372 = INT32_MIN;
int32_t x389 = INT32_MIN;
volatile int16_t x394 = -1;
uint64_t x396 = 105107979149LLU;
static uint64_t x398 = UINT64_MAX;


void f0(void) {
	static volatile int32_t x1 = -79;
	static int64_t x2 = 19851393912135LL;
	uint8_t x3 = 5U;
	volatile int32_t t0 = 0;

	t0 = ((x1<x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 191;
	int8_t x6 = -1;
	int16_t x7 = -1;
	int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = -103493327;

	t1 = ((x5<x6)==(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 4U;
	static int8_t x10 = -1;
	volatile int32_t x11 = 30;
	static uint32_t x12 = 7720442U;
	int32_t t2 = -47793;

	t2 = ((x9<x10)==(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	static uint32_t x14 = 399579038U;
	int32_t x15 = 2;
	volatile int32_t t3 = 34;

	t3 = ((x13<x14)==(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	int64_t x19 = -474956568LL;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -6925010;

	t4 = ((x17<x18)==(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 2U;
	int16_t x23 = INT16_MIN;
	volatile int32_t t5 = -7205994;

	t5 = ((x21<x22)==(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 1U;
	uint16_t x27 = UINT16_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -3;

	t6 = ((x25<x26)==(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MAX;
	uint8_t x31 = 42U;
	int32_t x32 = INT32_MAX;
	static volatile int32_t t7 = -2494913;

	t7 = ((x29<x30)==(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 27318385U;
	int32_t x34 = INT32_MIN;
	volatile uint16_t x35 = 9389U;
	int16_t x36 = 1;
	int32_t t8 = 57066;

	t8 = ((x33<x34)==(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 549218718LL;
	int64_t x38 = -1LL;
	volatile uint8_t x39 = 7U;
	volatile int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 0;

	t9 = ((x37<x38)==(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 290667480604075LLU;
	uint64_t x43 = 1506650575LLU;
	int64_t x44 = INT64_MAX;
	int32_t t10 = 124;

	t10 = ((x41<x42)==(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 17LLU;
	uint32_t x46 = 606892240U;
	static int32_t x47 = INT32_MIN;
	volatile int8_t x48 = INT8_MIN;
	static volatile int32_t t11 = 0;

	t11 = ((x45<x46)==(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = UINT8_MAX;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;

	t12 = ((x49<x50)==(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 1;
	volatile int32_t x54 = -1;
	int16_t x55 = 52;
	int32_t x56 = 215702450;
	volatile int32_t t13 = -532859343;

	t13 = ((x53<x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	static int8_t x58 = -1;
	static int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	int32_t t14 = 24;

	t14 = ((x57<x58)==(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = UINT64_MAX;
	int32_t x63 = INT32_MIN;
	int16_t x64 = INT16_MIN;
	static volatile int32_t t15 = -255981398;

	t15 = ((x61<x62)==(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	int16_t x66 = -1;
	uint16_t x67 = UINT16_MAX;
	int32_t t16 = 194200;

	t16 = ((x65<x66)==(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -445897;

	t17 = ((x69<x70)==(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 6311804U;
	int64_t x74 = INT64_MIN;
	int16_t x75 = -30;
	int64_t x76 = 27715LL;
	static volatile int32_t t18 = -1754889;

	t18 = ((x73<x74)==(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MAX;
	static int8_t x79 = INT8_MIN;
	int8_t x80 = -1;
	volatile int32_t t19 = -1;

	t19 = ((x77<x78)==(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 708449994U;
	static int16_t x83 = INT16_MIN;
	static volatile int16_t x84 = INT16_MIN;
	int32_t t20 = 0;

	t20 = ((x81<x82)==(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MAX;
	int32_t x86 = -777370644;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 19844689;

	t21 = ((x85<x86)==(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 0U;
	int64_t x90 = INT64_MAX;
	int16_t x91 = -11916;
	volatile uint32_t x92 = 4U;
	volatile int32_t t22 = 96181692;

	t22 = ((x89<x90)==(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int8_t x94 = -1;
	volatile int8_t x95 = -31;
	uint64_t x96 = 12172LLU;
	volatile int32_t t23 = -133;

	t23 = ((x93<x94)==(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 435U;
	uint32_t x99 = UINT32_MAX;
	int32_t t24 = 363117179;

	t24 = ((x97<x98)==(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x103 = 6359631676LL;
	int16_t x104 = INT16_MAX;
	int32_t t25 = -38262;

	t25 = ((x101<x102)==(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = INT32_MAX;
	uint32_t x108 = 1215320296U;

	t26 = ((x105<x106)==(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -45314697786770880LL;
	uint8_t x110 = 0U;
	int64_t x111 = 837514271918525LL;
	static uint64_t x112 = 62LLU;
	volatile int32_t t27 = 11;

	t27 = ((x109<x110)==(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = UINT16_MAX;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	int32_t t28 = 1;

	t28 = ((x113<x114)==(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 37301460;
	volatile int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	int32_t x120 = -1;
	volatile int32_t t29 = 5;

	t29 = ((x117<x118)==(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -4;
	volatile int64_t x123 = 0LL;
	int32_t x124 = 690806084;

	t30 = ((x121<x122)==(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	uint32_t x126 = 6U;
	int32_t t31 = -4737;

	t31 = ((x125<x126)==(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 1550U;
	static uint8_t x130 = 30U;
	static int32_t x132 = -2460;
	int32_t t32 = -359003850;

	t32 = ((x129<x130)==(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int16_t x134 = 14702;
	volatile int32_t x135 = INT32_MAX;
	volatile int8_t x136 = -1;
	int32_t t33 = 234581;

	t33 = ((x133<x134)==(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = -60;
	static volatile uint8_t x138 = 3U;
	int16_t x139 = 6943;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 3675;

	t34 = ((x137<x138)==(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = 928772294LL;
	int16_t x142 = 0;
	int64_t x143 = -1LL;
	int16_t x144 = 567;
	static volatile int32_t t35 = 0;

	t35 = ((x141<x142)==(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -3;
	uint16_t x146 = 6198U;
	int32_t x148 = -60758730;
	int32_t t36 = -977354447;

	t36 = ((x145<x146)==(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	volatile int32_t x150 = INT32_MAX;
	volatile int8_t x151 = 1;
	int64_t x152 = INT64_MAX;
	volatile int32_t t37 = 1;

	t37 = ((x149<x150)==(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	uint32_t x156 = 0U;
	volatile int32_t t38 = 12841227;

	t38 = ((x153<x154)==(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = 8338413;
	static int8_t x160 = -24;

	t39 = ((x157<x158)==(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 83789078;
	int16_t x163 = -910;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = -1549;

	t40 = ((x161<x162)==(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 11183325455791LLU;
	int64_t x166 = 406899373008LL;
	int32_t x167 = INT32_MAX;
	static int32_t t41 = 918665900;

	t41 = ((x165<x166)==(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 0U;
	volatile uint8_t x170 = 12U;
	uint64_t x172 = UINT64_MAX;

	t42 = ((x169<x170)==(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x175 = 9833U;

	t43 = ((x173<x174)==(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -3;
	int64_t x178 = INT64_MIN;
	int64_t x179 = -1LL;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -1536711;

	t44 = ((x177<x178)==(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	static volatile uint64_t x183 = 882LLU;
	int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 474;

	t45 = ((x181<x182)==(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = 1;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -276;

	t46 = ((x185<x186)==(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -34975977262099LL;
	uint32_t x191 = 15506687U;
	int32_t t47 = -55717344;

	t47 = ((x189<x190)==(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int32_t x194 = -1;
	static volatile int8_t x195 = -1;
	static volatile int32_t x196 = -4246;

	t48 = ((x193<x194)==(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	int64_t x199 = INT64_MIN;
	static uint64_t x200 = 1364LLU;

	t49 = ((x197<x198)==(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 2U;
	volatile uint64_t x202 = 273774656602LLU;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -42390;

	t50 = ((x201<x202)==(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 647U;
	int8_t x206 = 21;
	uint16_t x207 = 1416U;

	t51 = ((x205<x206)==(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x209 = 561479183083596849LLU;
	int32_t x210 = 1365175;
	volatile int16_t x211 = INT16_MAX;
	int64_t x212 = INT64_MAX;

	t52 = ((x209<x210)==(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 60433852LL;
	int32_t x214 = INT32_MIN;
	int16_t x215 = -310;
	int32_t t53 = -252353;

	t53 = ((x213<x214)==(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MIN;
	volatile int32_t x219 = -31565936;
	int8_t x220 = -5;
	volatile int32_t t54 = 3597040;

	t54 = ((x217<x218)==(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	static volatile int16_t x222 = INT16_MIN;
	int8_t x224 = INT8_MAX;
	int32_t t55 = 3251298;

	t55 = ((x221<x222)==(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	static int64_t x226 = -8073082580363216LL;
	int32_t x228 = 61;
	volatile int32_t t56 = -1886514;

	t56 = ((x225<x226)==(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	uint32_t x231 = 683673U;
	static int8_t x232 = INT8_MIN;
	static volatile int32_t t57 = -393150;

	t57 = ((x229<x230)==(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = -16644216747LL;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	int32_t t58 = -3474;

	t58 = ((x233<x234)==(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	uint32_t x238 = 279U;
	uint64_t x239 = 172890317149892220LLU;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t59 = -43;

	t59 = ((x237<x238)==(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int64_t x242 = INT64_MAX;
	int64_t x243 = -1LL;
	int16_t x244 = INT16_MIN;

	t60 = ((x241<x242)==(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 307789LLU;
	static uint16_t x246 = 2421U;
	static volatile int32_t x247 = INT32_MAX;
	int64_t x248 = 11192969585980LL;
	static volatile int32_t t61 = -64632;

	t61 = ((x245<x246)==(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int32_t x251 = 0;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = 1;

	t62 = ((x249<x250)==(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	volatile int8_t x254 = 2;
	uint16_t x255 = 18U;
	int8_t x256 = -1;
	int32_t t63 = -1814721;

	t63 = ((x253<x254)==(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 1;
	volatile int8_t x258 = INT8_MIN;
	static volatile int32_t x260 = 2;
	int32_t t64 = 42;

	t64 = ((x257<x258)==(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = 26U;
	volatile int16_t x264 = 184;
	int32_t t65 = -26;

	t65 = ((x261<x262)==(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = 2;
	volatile int8_t x267 = -4;
	static int16_t x268 = INT16_MIN;
	static volatile int32_t t66 = 24;

	t66 = ((x265<x266)==(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -44282242;
	int64_t x271 = INT64_MIN;
	static volatile uint64_t x272 = 745154148719837249LLU;

	t67 = ((x269<x270)==(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x275 = -697;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -3;

	t68 = ((x273<x274)==(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	uint64_t x279 = 180997LLU;
	int32_t t69 = -8348482;

	t69 = ((x277<x278)==(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	volatile int8_t x282 = 2;
	int64_t x283 = -1LL;
	static volatile int16_t x284 = INT16_MAX;
	volatile int32_t t70 = -5871;

	t70 = ((x281<x282)==(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MAX;
	uint32_t x288 = UINT32_MAX;
	int32_t t71 = 222554;

	t71 = ((x285<x286)==(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = 3;
	volatile int32_t x291 = INT32_MAX;
	int32_t x292 = 31571756;
	volatile int32_t t72 = 29643;

	t72 = ((x289<x290)==(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t x294 = -98;
	int32_t x295 = INT32_MAX;
	volatile int32_t t73 = 20592;

	t73 = ((x293<x294)==(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 12U;
	int64_t x300 = -32148898LL;
	int32_t t74 = -868122;

	t74 = ((x297<x298)==(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x304 = -1LL;
	static volatile int32_t t75 = 2436792;

	t75 = ((x301<x302)==(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MAX;
	static int32_t x306 = -631746;
	volatile uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -149;

	t76 = ((x305<x306)==(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	volatile uint8_t x310 = UINT8_MAX;
	static int64_t x312 = INT64_MIN;

	t77 = ((x309<x310)==(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	int16_t x315 = -10;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t78 = -5285;

	t78 = ((x313<x314)==(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	volatile int32_t x318 = INT32_MIN;
	static uint32_t x319 = 226227908U;
	static volatile int64_t x320 = INT64_MIN;
	int32_t t79 = 3338693;

	t79 = ((x317<x318)==(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t80 = 7253247;

	t80 = ((x321<x322)==(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = 8049381034LLU;
	int8_t x326 = 3;
	int8_t x327 = 4;
	volatile int8_t x328 = -1;
	volatile int32_t t81 = 0;

	t81 = ((x325<x326)==(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 6U;
	volatile int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MIN;
	static int16_t x332 = -1;
	static int32_t t82 = -129803;

	t82 = ((x329<x330)==(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = -3973905404193928LL;
	static uint64_t x334 = 234070560571LLU;
	uint16_t x335 = 149U;
	volatile int16_t x336 = INT16_MIN;
	static volatile int32_t t83 = 28505212;

	t83 = ((x333<x334)==(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MAX;
	volatile uint32_t x339 = 62393U;
	int32_t t84 = 205025;

	t84 = ((x337<x338)==(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MIN;
	volatile int32_t t85 = 29;

	t85 = ((x341<x342)==(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 0;
	volatile int64_t x346 = INT64_MIN;
	int8_t x347 = 3;
	volatile uint32_t x348 = UINT32_MAX;
	int32_t t86 = 188;

	t86 = ((x345<x346)==(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MIN;
	int32_t x351 = -1577;
	static int32_t x352 = INT32_MIN;
	int32_t t87 = -43;

	t87 = ((x349<x350)==(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	uint16_t x354 = 1U;
	volatile uint64_t x355 = 7695414215994877LLU;
	int16_t x356 = 28;
	int32_t t88 = -740055116;

	t88 = ((x353<x354)==(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = UINT32_MAX;
	int8_t x358 = -1;
	int32_t x359 = INT32_MIN;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 0;

	t89 = ((x357<x358)==(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = 18U;
	static int8_t x363 = INT8_MAX;
	int32_t x364 = -1;
	volatile int32_t t90 = -491089;

	t90 = ((x361<x362)==(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int16_t x368 = 58;
	volatile int32_t t91 = 806136;

	t91 = ((x365<x366)==(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	static int64_t x371 = -1047693553138LL;
	volatile int32_t t92 = -1045;

	t92 = ((x369<x370)==(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int8_t x374 = -50;
	static uint16_t x375 = 223U;
	int32_t x376 = 5021509;
	int32_t t93 = -452534;

	t93 = ((x373<x374)==(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = 1523U;
	int8_t x378 = 0;
	static int64_t x379 = -1LL;
	int32_t x380 = -1;
	volatile int32_t t94 = -907;

	t94 = ((x377<x378)==(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	static volatile int16_t x382 = -1;
	uint32_t x383 = 180392161U;
	volatile uint8_t x384 = 26U;
	static volatile int32_t t95 = 101242928;

	t95 = ((x381<x382)==(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MIN;
	volatile uint8_t x386 = 3U;
	static int16_t x387 = INT16_MAX;
	int64_t x388 = INT64_MAX;
	volatile int32_t t96 = 94782205;

	t96 = ((x385<x386)==(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = 7U;
	int8_t x391 = -6;
	volatile uint16_t x392 = 1U;
	int32_t t97 = 12;

	t97 = ((x389<x390)==(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = 22168504276074256LL;
	int32_t x395 = INT32_MAX;
	static volatile int32_t t98 = -6107;

	t98 = ((x393<x394)==(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	int8_t x399 = INT8_MAX;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = 8086;

	t99 = ((x397<x398)==(x399<=x400));

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

