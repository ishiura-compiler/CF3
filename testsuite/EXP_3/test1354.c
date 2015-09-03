#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x7 = INT8_MIN;
int8_t x14 = INT8_MAX;
volatile int8_t x26 = INT8_MIN;
uint64_t x32 = 5070710LLU;
volatile uint64_t x34 = 6979427921LLU;
int8_t x35 = INT8_MIN;
uint8_t x38 = UINT8_MAX;
int8_t x53 = INT8_MIN;
int32_t x59 = -1;
volatile int32_t t10 = -59011;
int32_t x68 = 649140;
uint8_t x70 = 89U;
static uint32_t x71 = 54955U;
int32_t t13 = 5135;
uint16_t x84 = 1U;
int16_t x100 = -254;
int16_t x105 = -1;
int32_t x107 = -1529;
volatile int8_t x108 = INT8_MAX;
int64_t x119 = -609774202827LL;
static volatile uint64_t t22 = 7450855LLU;
int16_t x132 = INT16_MAX;
uint8_t x133 = UINT8_MAX;
static int8_t x134 = INT8_MAX;
int8_t x137 = -1;
int8_t x142 = INT8_MAX;
static volatile int16_t x149 = INT16_MAX;
volatile int32_t x150 = INT32_MIN;
int32_t x163 = -1;
int64_t x164 = INT64_MAX;
static volatile int16_t x176 = INT16_MAX;
int32_t x178 = 849;
static int32_t t36 = -39;
int8_t x189 = -1;
int64_t x197 = -1LL;
volatile uint8_t x200 = 1U;
uint64_t x214 = 516467LLU;
static int32_t x216 = INT32_MIN;
static uint64_t t42 = 1034LLU;
int8_t x221 = 0;
static int8_t x230 = INT8_MIN;
static int8_t x233 = 4;
static int16_t x234 = INT16_MAX;
volatile int32_t t46 = 176;
int16_t x239 = -1;
int32_t x250 = INT32_MIN;
int16_t x263 = INT16_MIN;
int32_t t53 = -24;
uint8_t x266 = 5U;
volatile int32_t x267 = 3120700;
int64_t x268 = INT64_MIN;
int16_t x275 = INT16_MIN;
uint8_t x277 = UINT8_MAX;
static uint16_t x278 = UINT16_MAX;
static int8_t x280 = INT8_MIN;
volatile int8_t x288 = 0;
int16_t x301 = INT16_MIN;
static volatile int8_t x303 = -62;
int32_t t61 = -1;
int16_t x305 = INT16_MAX;
int32_t x306 = 94573;
int32_t x309 = INT32_MIN;
uint64_t t66 = 39LLU;
uint64_t x327 = 65441482LLU;
int8_t x330 = -1;
uint16_t x331 = 120U;
uint64_t x334 = UINT64_MAX;
uint64_t t69 = 6561329989935LLU;
int32_t t70 = 0;
uint32_t x341 = UINT32_MAX;
volatile int32_t t72 = -13;
int32_t t73 = 2586764;
static uint64_t x353 = UINT64_MAX;
uint32_t x355 = UINT32_MAX;
static uint8_t x360 = 0U;
int64_t t75 = 4245LL;
uint32_t x364 = 20300703U;
uint32_t x368 = 29U;
int8_t x371 = -1;
volatile int32_t x376 = -38;
int16_t x377 = INT16_MIN;
volatile int16_t x379 = -1;
int8_t x380 = INT8_MIN;
static int8_t x384 = -60;
int16_t x385 = 1;
int64_t x387 = 134235020712LL;
volatile int32_t t82 = -8;
int64_t t83 = -372421326560722LL;
int64_t t84 = -213497835207052412LL;
static volatile int16_t x405 = -1;
volatile uint64_t x408 = UINT64_MAX;
static uint8_t x409 = UINT8_MAX;
uint8_t x413 = 6U;
static int32_t t89 = 442;
static int64_t x422 = INT64_MAX;
int8_t x428 = INT8_MIN;
static int64_t x433 = INT64_MIN;
volatile int16_t x446 = INT16_MIN;
int16_t x447 = INT16_MAX;
static uint32_t x450 = UINT32_MAX;
static uint64_t x456 = 146560LLU;
int64_t x457 = -1004047260044157LL;
int16_t x458 = -5;
int8_t x464 = -1;
uint16_t x470 = 125U;
volatile int32_t t99 = -2578;


void f0(void) {
	uint16_t x5 = 29U;
	int8_t x6 = -2;
	uint16_t x8 = UINT16_MAX;
	static volatile int32_t t0 = -102366417;

	t0 = ((x5+x6)-(x7<x8));

	if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x13 = -1;
	int32_t x15 = INT32_MAX;
	int16_t x16 = 8;
	volatile int32_t t1 = 251;

	t1 = ((x13+x14)-(x15<x16));

	if (t1 != 126) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -1LL;
	uint8_t x18 = UINT8_MAX;
	int8_t x19 = -1;
	int32_t x20 = INT32_MAX;
	int64_t t2 = -1831304735LL;

	t2 = ((x17+x18)-(x19<x20));

	if (t2 != 253LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = -1;
	volatile int32_t x27 = INT32_MAX;
	uint32_t x28 = 365U;
	volatile int32_t t3 = -239;

	t3 = ((x25+x26)-(x27<x28));

	if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x29 = UINT8_MAX;
	volatile uint8_t x30 = 15U;
	int8_t x31 = INT8_MIN;
	int32_t t4 = 256725;

	t4 = ((x29+x30)-(x31<x32));

	if (t4 != 270) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = 197LLU;
	static volatile int32_t x36 = INT32_MIN;
	uint64_t t5 = 0LLU;

	t5 = ((x33+x34)-(x35<x36));

	if (t5 != 6979428118LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x37 = INT64_MIN;
	uint8_t x39 = 2U;
	static uint64_t x40 = 8434420564379158931LLU;
	int64_t t6 = 22707947087502149LL;

	t6 = ((x37+x38)-(x39<x40));

	if (t6 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x45 = -1;
	volatile uint8_t x46 = UINT8_MAX;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t7 = -1158;

	t7 = ((x45+x46)-(x47<x48));

	if (t7 != 253) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x49 = 15;
	int8_t x50 = -50;
	int32_t x51 = -30685178;
	int8_t x52 = -1;
	volatile int32_t t8 = 753006;

	t8 = ((x49+x50)-(x51<x52));

	if (t8 != -36) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x54 = INT16_MAX;
	uint64_t x55 = 1LLU;
	uint32_t x56 = 2372U;
	int32_t t9 = -129628;

	t9 = ((x53+x54)-(x55<x56));

	if (t9 != 32638) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MAX;
	int8_t x58 = 37;
	int64_t x60 = -3008335LL;

	t10 = ((x57+x58)-(x59<x60));

	if (t10 != 164) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x61 = 386942283LLU;
	uint16_t x62 = 25115U;
	int64_t x63 = 1668988601005222073LL;
	int8_t x64 = INT8_MIN;
	static volatile uint64_t t11 = 915893LLU;

	t11 = ((x61+x62)-(x63<x64));

	if (t11 != 386967398LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x65 = -1;
	static uint16_t x66 = 13U;
	uint16_t x67 = 2023U;
	static volatile int32_t t12 = -17;

	t12 = ((x65+x66)-(x67<x68));

	if (t12 != 11) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = 43;
	int16_t x72 = -1;

	t13 = ((x69+x70)-(x71<x72));

	if (t13 != 131) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x81 = INT32_MAX;
	static volatile uint32_t x82 = 13U;
	int8_t x83 = 1;
	volatile uint32_t t14 = 0U;

	t14 = ((x81+x82)-(x83<x84));

	if (t14 != 2147483660U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = INT16_MIN;
	uint16_t x90 = 15U;
	static int32_t x91 = -1835570;
	int32_t x92 = -279242162;
	int32_t t15 = 167312481;

	t15 = ((x89+x90)-(x91<x92));

	if (t15 != -32753) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x93 = UINT8_MAX;
	static uint64_t x94 = UINT64_MAX;
	volatile int8_t x95 = INT8_MIN;
	static int64_t x96 = -1997883788673344LL;
	static uint64_t t16 = 125000LLU;

	t16 = ((x93+x94)-(x95<x96));

	if (t16 != 254LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x97 = -1;
	volatile uint64_t x98 = 26665LLU;
	int16_t x99 = -1;
	uint64_t t17 = 722325618394LLU;

	t17 = ((x97+x98)-(x99<x100));

	if (t17 != 26664LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	int8_t x104 = 0;
	volatile int32_t t18 = 2;

	t18 = ((x101+x102)-(x103<x104));

	if (t18 != -32642) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x106 = 1694LLU;
	volatile uint64_t t19 = 77LLU;

	t19 = ((x105+x106)-(x107<x108));

	if (t19 != 1692LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x109 = 89LLU;
	static int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	static int64_t x112 = 968LL;
	volatile uint64_t t20 = 234915921869LLU;

	t20 = ((x109+x110)-(x111<x112));

	if (t20 != 18446744071562068056LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MIN;
	static uint16_t x114 = UINT16_MAX;
	uint32_t x115 = 47118400U;
	uint64_t x116 = 1851069004293100LLU;
	volatile int32_t t21 = -2473;

	t21 = ((x113+x114)-(x115<x116));

	if (t21 != 32766) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x117 = 3358976175376420350LLU;
	int32_t x118 = 24681;
	static int64_t x120 = -1LL;

	t22 = ((x117+x118)-(x119<x120));

	if (t22 != 3358976175376445030LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = -1LL;
	int16_t x126 = INT16_MAX;
	static uint64_t x127 = 546LLU;
	volatile uint8_t x128 = 4U;
	static int64_t t23 = -260393096360973510LL;

	t23 = ((x125+x126)-(x127<x128));

	if (t23 != 32766LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = INT8_MAX;
	uint64_t x130 = 55388323LLU;
	int16_t x131 = INT16_MIN;
	static volatile uint64_t t24 = 3278538596529223237LLU;

	t24 = ((x129+x130)-(x131<x132));

	if (t24 != 55388449LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x135 = 7;
	uint8_t x136 = 53U;
	volatile int32_t t25 = -5329116;

	t25 = ((x133+x134)-(x135<x136));

	if (t25 != 381) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x138 = 1746400LL;
	static volatile int16_t x139 = INT16_MIN;
	volatile uint32_t x140 = 93732768U;
	volatile int64_t t26 = -30950309290295LL;

	t26 = ((x137+x138)-(x139<x140));

	if (t26 != 1746399LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x141 = 64056931;
	int8_t x143 = -1;
	volatile int16_t x144 = INT16_MAX;
	int32_t t27 = -6395498;

	t27 = ((x141+x142)-(x143<x144));

	if (t27 != 64057057) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x146 = -1;
	int32_t x147 = 1376869;
	static volatile int8_t x148 = 2;
	volatile int32_t t28 = 61614980;

	t28 = ((x145+x146)-(x147<x148));

	if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x151 = INT32_MAX;
	static int8_t x152 = INT8_MAX;
	volatile int32_t t29 = -6931;

	t29 = ((x149+x150)-(x151<x152));

	if (t29 != -2147450881) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = -1;
	int16_t x154 = INT16_MIN;
	uint8_t x155 = 1U;
	volatile uint32_t x156 = 3464260U;
	int32_t t30 = 48;

	t30 = ((x153+x154)-(x155<x156));

	if (t30 != -32770) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = INT64_MIN;
	uint64_t x158 = 182329548335607LLU;
	int16_t x159 = -1;
	int8_t x160 = INT8_MIN;
	uint64_t t31 = 75778464780LLU;

	t31 = ((x157+x158)-(x159<x160));

	if (t31 != 9223554366403111415LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = -8490084838489261LL;
	int64_t x162 = INT64_MAX;
	static volatile int64_t t32 = 1LL;

	t32 = ((x161+x162)-(x163<x164));

	if (t32 != 9214881952016286545LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x169 = 0U;
	int8_t x170 = -21;
	volatile uint32_t x171 = 1005563171U;
	int64_t x172 = -224LL;
	volatile int32_t t33 = 67285617;

	t33 = ((x169+x170)-(x171<x172));

	if (t33 != -21) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = 3LLU;
	int16_t x175 = INT16_MAX;
	uint64_t t34 = 7429510753410LLU;

	t34 = ((x173+x174)-(x175<x176));

	if (t34 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x177 = 23U;
	uint8_t x179 = 74U;
	static int16_t x180 = -9120;
	int32_t t35 = -1;

	t35 = ((x177+x178)-(x179<x180));

	if (t35 != 872) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = -346;
	int64_t x183 = INT64_MIN;
	volatile int64_t x184 = INT64_MIN;

	t36 = ((x181+x182)-(x183<x184));

	if (t36 != -474) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x190 = 29;
	static int64_t x191 = -1LL;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t37 = -798;

	t37 = ((x189+x190)-(x191<x192));

	if (t37 != 28) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x198 = INT32_MAX;
	static int32_t x199 = INT32_MAX;
	volatile int64_t t38 = -108532763008889LL;

	t38 = ((x197+x198)-(x199<x200));

	if (t38 != 2147483646LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x201 = UINT32_MAX;
	uint32_t x202 = 19U;
	int64_t x203 = 26712156036214LL;
	int8_t x204 = 37;
	uint32_t t39 = 308083U;

	t39 = ((x201+x202)-(x203<x204));

	if (t39 != 18U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = 1U;
	volatile int64_t x206 = 3844525LL;
	static uint16_t x207 = 7U;
	int64_t x208 = INT64_MAX;
	int64_t t40 = -3050LL;

	t40 = ((x205+x206)-(x207<x208));

	if (t40 != 3844525LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x209 = 18U;
	int8_t x210 = -1;
	int64_t x211 = INT64_MAX;
	int16_t x212 = INT16_MIN;
	volatile int32_t t41 = 6;

	t41 = ((x209+x210)-(x211<x212));

	if (t41 != 17) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x213 = UINT16_MAX;
	int8_t x215 = INT8_MIN;

	t42 = ((x213+x214)-(x215<x216));

	if (t42 != 582002LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x222 = INT32_MIN;
	volatile uint16_t x223 = 221U;
	int8_t x224 = -2;
	volatile int32_t t43 = INT32_MIN;

	t43 = ((x221+x222)-(x223<x224));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = -34741710;
	int8_t x227 = INT8_MAX;
	uint8_t x228 = UINT8_MAX;
	static int32_t t44 = 0;

	t44 = ((x225+x226)-(x227<x228));

	if (t44 != -34741584) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x229 = -49;
	static int8_t x231 = INT8_MIN;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t45 = 2;

	t45 = ((x229+x230)-(x231<x232));

	if (t45 != -178) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = INT32_MIN;

	t46 = ((x233+x234)-(x235<x236));

	if (t46 != 32771) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x237 = 600471LLU;
	uint8_t x238 = 3U;
	int32_t x240 = 96;
	uint64_t t47 = 647545607LLU;

	t47 = ((x237+x238)-(x239<x240));

	if (t47 != 600473LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = 1274210192288238LL;
	volatile int8_t x242 = INT8_MAX;
	static volatile uint64_t x243 = 3362029956269LLU;
	uint8_t x244 = 2U;
	volatile int64_t t48 = 1410653310967LL;

	t48 = ((x241+x242)-(x243<x244));

	if (t48 != 1274210192288365LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = 29;
	uint32_t x246 = 1321U;
	int64_t x247 = INT64_MIN;
	uint16_t x248 = 949U;
	volatile uint32_t t49 = 384207116U;

	t49 = ((x245+x246)-(x247<x248));

	if (t49 != 1349U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x249 = 793U;
	volatile int16_t x251 = INT16_MIN;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t50 = 3337677;

	t50 = ((x249+x250)-(x251<x252));

	if (t50 != -2147482856) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x253 = UINT32_MAX;
	volatile uint64_t x254 = 112285907888377LLU;
	int32_t x255 = -160;
	int16_t x256 = 0;
	uint64_t t51 = 1124199799099247LLU;

	t51 = ((x253+x254)-(x255<x256));

	if (t51 != 112290202855671LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x257 = -1;
	int32_t x258 = -1;
	static int8_t x259 = -8;
	int8_t x260 = INT8_MIN;
	int32_t t52 = 58212984;

	t52 = ((x257+x258)-(x259<x260));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = -2002;
	int16_t x262 = 1000;
	static uint64_t x264 = 12229388LLU;

	t53 = ((x261+x262)-(x263<x264));

	if (t53 != -1002) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x265 = -310126328;
	static int32_t t54 = 4092010;

	t54 = ((x265+x266)-(x267<x268));

	if (t54 != -310126323) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = -22479335893LL;
	volatile int16_t x276 = INT16_MIN;
	volatile int64_t t55 = -1LL;

	t55 = ((x273+x274)-(x275<x276));

	if (t55 != -22479270358LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x279 = 8169;
	int32_t t56 = -971484;

	t56 = ((x277+x278)-(x279<x280));

	if (t56 != 65790) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = INT16_MAX;
	static uint32_t x286 = 3U;
	uint16_t x287 = UINT16_MAX;
	uint32_t t57 = 13284U;

	t57 = ((x285+x286)-(x287<x288));

	if (t57 != 32770U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x289 = UINT8_MAX;
	uint32_t x290 = 2042197U;
	int32_t x291 = INT32_MIN;
	static uint64_t x292 = UINT64_MAX;
	volatile uint32_t t58 = 404522U;

	t58 = ((x289+x290)-(x291<x292));

	if (t58 != 2042451U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x293 = -1LL;
	int32_t x294 = -1;
	int16_t x295 = INT16_MAX;
	static int8_t x296 = INT8_MIN;
	static volatile int64_t t59 = 725142LL;

	t59 = ((x293+x294)-(x295<x296));

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = 3794399814LL;
	uint16_t x298 = 16U;
	int16_t x299 = INT16_MIN;
	uint8_t x300 = 3U;
	int64_t t60 = -7649634959332LL;

	t60 = ((x297+x298)-(x299<x300));

	if (t60 != 3794399829LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x302 = -29;
	uint8_t x304 = 11U;

	t61 = ((x301+x302)-(x303<x304));

	if (t61 != -32798) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x307 = INT16_MIN;
	static int8_t x308 = -1;
	volatile int32_t t62 = -52;

	t62 = ((x305+x306)-(x307<x308));

	if (t62 != 127339) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x310 = INT64_MAX;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = INT64_MIN;
	static int64_t t63 = -129237967459686LL;

	t63 = ((x309+x310)-(x311<x312));

	if (t63 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x313 = 5615U;
	volatile uint64_t x314 = 5LLU;
	int16_t x315 = -1;
	int64_t x316 = INT64_MIN;
	uint64_t t64 = 125932443914174957LLU;

	t64 = ((x313+x314)-(x315<x316));

	if (t64 != 5620LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = 2;
	int16_t x319 = -335;
	int8_t x320 = INT8_MIN;
	volatile uint64_t t65 = 67218243LLU;

	t65 = ((x317+x318)-(x319<x320));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x321 = INT16_MAX;
	volatile uint64_t x322 = 2473076436395LLU;
	uint64_t x323 = 70LLU;
	int8_t x324 = -1;

	t66 = ((x321+x322)-(x323<x324));

	if (t66 != 2473076469161LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x325 = INT16_MIN;
	volatile int16_t x326 = 15994;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t67 = 3;

	t67 = ((x325+x326)-(x327<x328));

	if (t67 != -16775) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x329 = INT32_MAX;
	uint64_t x332 = 4152745247999LLU;
	static int32_t t68 = 2768;

	t68 = ((x329+x330)-(x331<x332));

	if (t68 != 2147483645) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x333 = 22U;
	static int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MIN;

	t69 = ((x333+x334)-(x335<x336));

	if (t69 != 21LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x337 = 6688;
	volatile int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MAX;
	volatile int32_t x340 = INT32_MAX;

	t70 = ((x337+x338)-(x339<x340));

	if (t70 != 6559) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;
	volatile uint32_t t71 = 0U;

	t71 = ((x341+x342)-(x343<x344));

	if (t71 != 65533U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x345 = -45621;
	volatile int8_t x346 = 51;
	static volatile int16_t x347 = -7197;
	uint8_t x348 = 3U;

	t72 = ((x345+x346)-(x347<x348));

	if (t72 != -45571) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x349 = 1445U;
	int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	int16_t x352 = -1;

	t73 = ((x349+x350)-(x351<x352));

	if (t73 != -31324) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x354 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	uint64_t t74 = 471433LLU;

	t74 = ((x353+x354)-(x355<x356));

	if (t74 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = INT64_MIN;
	uint8_t x359 = UINT8_MAX;

	t75 = ((x357+x358)-(x359<x360));

	if (t75 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x361 = INT8_MIN;
	uint8_t x362 = UINT8_MAX;
	static uint32_t x363 = 222U;
	static volatile int32_t t76 = 13394;

	t76 = ((x361+x362)-(x363<x364));

	if (t76 != 126) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x365 = 147;
	uint16_t x366 = 300U;
	volatile int32_t x367 = 352;
	static int32_t t77 = -3959;

	t77 = ((x365+x366)-(x367<x368));

	if (t77 != 447) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = INT8_MIN;
	volatile int16_t x372 = -1;
	volatile int32_t t78 = -978334019;

	t78 = ((x369+x370)-(x371<x372));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = INT32_MIN;
	volatile int64_t x374 = 84897937LL;
	int32_t x375 = -1;
	int64_t t79 = -34LL;

	t79 = ((x373+x374)-(x375<x376));

	if (t79 != -2062585711LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x378 = 781;
	volatile int32_t t80 = -3;

	t80 = ((x377+x378)-(x379<x380));

	if (t80 != -31987) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x381 = -49;
	uint8_t x382 = 9U;
	static volatile int16_t x383 = INT16_MIN;
	static volatile int32_t t81 = 553;

	t81 = ((x381+x382)-(x383<x384));

	if (t81 != -41) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x386 = -1;
	static int8_t x388 = INT8_MAX;

	t82 = ((x385+x386)-(x387<x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = -1LL;
	volatile int8_t x390 = INT8_MIN;
	int16_t x391 = 207;
	volatile int32_t x392 = -1645;

	t83 = ((x389+x390)-(x391<x392));

	if (t83 != -129LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x393 = 9730298744705272LL;
	int64_t x394 = INT64_MIN;
	static int32_t x395 = -900833939;
	uint64_t x396 = UINT64_MAX;

	t84 = ((x393+x394)-(x395<x396));

	if (t84 != -9213641738110070537LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x397 = INT16_MIN;
	uint8_t x398 = 91U;
	static int16_t x399 = INT16_MIN;
	int8_t x400 = -1;
	int32_t t85 = -1893;

	t85 = ((x397+x398)-(x399<x400));

	if (t85 != -32678) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x406 = INT8_MIN;
	uint16_t x407 = UINT16_MAX;
	volatile int32_t t86 = -771;

	t86 = ((x405+x406)-(x407<x408));

	if (t86 != -130) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MAX;
	volatile int64_t t87 = 71754001005628122LL;

	t87 = ((x409+x410)-(x411<x412));

	if (t87 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x414 = INT64_MIN;
	static int64_t x415 = INT64_MAX;
	uint32_t x416 = UINT32_MAX;
	int64_t t88 = -768913327863649LL;

	t88 = ((x413+x414)-(x415<x416));

	if (t88 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = 658400;
	int8_t x418 = INT8_MIN;
	uint8_t x419 = UINT8_MAX;
	static int16_t x420 = INT16_MAX;

	t89 = ((x417+x418)-(x419<x420));

	if (t89 != 658271) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = INT32_MIN;
	static volatile int64_t x423 = INT64_MAX;
	uint16_t x424 = 16U;
	int64_t t90 = 3248279LL;

	t90 = ((x421+x422)-(x423<x424));

	if (t90 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x425 = INT8_MAX;
	uint16_t x426 = 0U;
	uint32_t x427 = 215632829U;
	volatile int32_t t91 = -106;

	t91 = ((x425+x426)-(x427<x428));

	if (t91 != 126) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x434 = INT64_MAX;
	int8_t x435 = INT8_MIN;
	uint16_t x436 = UINT16_MAX;
	volatile int64_t t92 = 2224633751792475LL;

	t92 = ((x433+x434)-(x435<x436));

	if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x437 = 643361206064LLU;
	int64_t x438 = INT64_MAX;
	volatile uint16_t x439 = 10U;
	int8_t x440 = -1;
	uint64_t t93 = 124633259151959469LLU;

	t93 = ((x437+x438)-(x439<x440));

	if (t93 != 9223372680215981871LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = -1LL;
	uint32_t x448 = 375053U;
	int64_t t94 = -131291692747843LL;

	t94 = ((x445+x446)-(x447<x448));

	if (t94 != -32770LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = -8854;
	volatile int32_t x451 = 7560519;
	volatile uint8_t x452 = 1U;
	uint32_t t95 = 6U;

	t95 = ((x449+x450)-(x451<x452));

	if (t95 != 4294958441U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x453 = 90U;
	uint16_t x454 = UINT16_MAX;
	int32_t x455 = -1;
	static volatile uint32_t t96 = 634U;

	t96 = ((x453+x454)-(x455<x456));

	if (t96 != 65625U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x459 = INT8_MIN;
	uint64_t x460 = 76681LLU;
	volatile int64_t t97 = -456581118877LL;

	t97 = ((x457+x458)-(x459<x460));

	if (t97 != -1004047260044162LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x461 = UINT8_MAX;
	uint64_t x462 = 3082LLU;
	uint8_t x463 = 15U;
	uint64_t t98 = 422422085058LLU;

	t98 = ((x461+x462)-(x463<x464));

	if (t98 != 3337LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x469 = UINT16_MAX;
	uint32_t x471 = 2616704U;
	uint32_t x472 = 8076526U;

	t99 = ((x469+x470)-(x471<x472));

	if (t99 != 65659) { NG(); } else { ; }
	
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

