#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x16 = INT32_MAX;
uint32_t x17 = 70014570U;
int8_t x22 = INT8_MIN;
uint32_t t4 = 133844870U;
static int32_t x26 = -1;
uint8_t x30 = 15U;
static uint64_t x31 = UINT64_MAX;
static int16_t x32 = 1291;
uint64_t x33 = UINT64_MAX;
int8_t x35 = 39;
int64_t x40 = INT64_MIN;
volatile int64_t x51 = INT64_MIN;
static int8_t x57 = 30;
int8_t x60 = INT8_MAX;
int64_t t13 = 32697359LL;
static int64_t x62 = 768419413160550LL;
int64_t x64 = -14206428LL;
uint16_t x65 = UINT16_MAX;
uint16_t x66 = 446U;
static uint16_t x67 = UINT16_MAX;
int32_t t15 = 149;
int16_t x70 = 2602;
static int32_t x71 = -180;
int64_t t17 = 3028927469696255LL;
volatile int32_t t20 = 34;
uint32_t x89 = 23456U;
volatile uint8_t x91 = UINT8_MAX;
int8_t x95 = 9;
volatile uint32_t t22 = 29037U;
uint32_t x97 = 222U;
static volatile uint8_t x98 = 36U;
int16_t x105 = 105;
int8_t x109 = INT8_MIN;
uint64_t x110 = 83398940028549510LLU;
int8_t x115 = -1;
int64_t x118 = -1LL;
volatile uint64_t x137 = 247786003LLU;
int16_t x138 = INT16_MAX;
uint32_t x144 = 21808U;
int32_t x148 = 30;
volatile int32_t x149 = 1;
static int32_t x167 = -1;
volatile int32_t x171 = -13190;
int32_t t38 = 80;
int8_t x178 = 0;
static int64_t x182 = INT64_MAX;
uint64_t x183 = UINT64_MAX;
volatile int8_t x185 = INT8_MIN;
int32_t t41 = 4949;
int8_t x199 = INT8_MIN;
int32_t x202 = INT32_MIN;
uint64_t x203 = 2138955765132118787LLU;
int32_t t44 = 62;
int64_t x205 = 641946613208734646LL;
int64_t t45 = -3603LL;
static int16_t x209 = INT16_MIN;
static int64_t x210 = 5699820381645LL;
int8_t x211 = INT8_MIN;
int32_t x212 = INT32_MIN;
static int64_t x213 = INT64_MIN;
int64_t x216 = -536893LL;
int8_t x218 = INT8_MIN;
static int64_t t49 = -1190866411637822LL;
uint8_t x230 = 2U;
int16_t x234 = INT16_MAX;
int32_t t51 = 102518;
int16_t x237 = INT16_MIN;
uint8_t x244 = UINT8_MAX;
int8_t x250 = 2;
uint8_t x252 = 5U;
int16_t x256 = INT16_MIN;
static volatile int8_t x258 = INT8_MIN;
uint64_t x260 = 415521019680236266LLU;
volatile uint64_t t57 = 2194813228033LLU;
int16_t x267 = 0;
uint32_t x270 = 5229U;
uint16_t x271 = 11660U;
uint32_t t60 = 4049876U;
static int64_t x273 = INT64_MAX;
static int8_t x274 = INT8_MIN;
int8_t x279 = -58;
int8_t x282 = INT8_MAX;
static uint16_t x284 = 3637U;
static int64_t x289 = -1LL;
volatile int64_t t64 = 264708947281LL;
int32_t x293 = -1;
uint32_t x294 = UINT32_MAX;
int16_t x295 = 41;
uint8_t x296 = UINT8_MAX;
static int64_t x299 = INT64_MIN;
uint8_t x300 = UINT8_MAX;
int8_t x303 = INT8_MAX;
volatile uint16_t x306 = UINT16_MAX;
volatile uint32_t x307 = UINT32_MAX;
static int16_t x314 = -1;
int64_t x318 = 1233317LL;
volatile uint16_t x323 = UINT16_MAX;
uint8_t x329 = 106U;
static uint8_t x331 = 0U;
int8_t x344 = INT8_MIN;
volatile int8_t x348 = INT8_MIN;
static int32_t x355 = INT32_MIN;
volatile int32_t t78 = 3;
int64_t x363 = INT64_MAX;
static uint32_t x366 = 3U;
volatile int16_t x374 = 6;
int64_t x375 = INT64_MIN;
int16_t x377 = INT16_MAX;
uint16_t x382 = UINT16_MAX;
int16_t x389 = -14020;
static volatile int32_t t86 = -872;
volatile uint32_t x400 = UINT32_MAX;
uint64_t t88 = 32058LLU;
int32_t x401 = -1;
uint64_t x404 = 45341LLU;
int64_t t89 = 0LL;
static int8_t x405 = 0;
volatile int16_t x406 = -1;
int16_t x408 = -15;
static uint64_t t91 = 819238407460854LLU;
volatile uint64_t x414 = UINT64_MAX;
static int16_t x422 = INT16_MIN;
uint64_t x423 = 285085525759LLU;
static int64_t t95 = INT64_MIN;
uint16_t x433 = 7549U;
static uint64_t x441 = UINT64_MAX;
volatile uint8_t x444 = 7U;
uint8_t x446 = UINT8_MAX;


void f0(void) {
	uint8_t x1 = 1U;
	int32_t x2 = -12;
	volatile uint16_t x3 = UINT16_MAX;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -5857;

	t0 = (x1+(x2|(x3==x4)));

	if (t0 != -11) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 109U;
	uint32_t x6 = UINT32_MAX;
	int64_t x7 = INT64_MIN;
	int16_t x8 = -1;
	uint32_t t1 = 506287597U;

	t1 = (x5+(x6|(x7==x8)));

	if (t1 != 108U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	int8_t x15 = -1;
	int32_t t2 = 3;

	t2 = (x13+(x14|(x15==x16)));

	if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = 4769718102203914323LLU;
	int32_t x19 = -1;
	volatile int32_t x20 = INT32_MAX;
	volatile uint64_t t3 = 1341795LLU;

	t3 = (x17+(x18|(x19==x20)));

	if (t3 != 4769718102273928893LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 29U;
	volatile uint8_t x23 = 1U;
	static int32_t x24 = 954;

	t4 = (x21+(x22|(x23==x24)));

	if (t4 != 4294967197U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	volatile int32_t x27 = INT32_MIN;
	uint32_t x28 = 598U;
	int32_t t5 = 7516398;

	t5 = (x25+(x26|(x27==x28)));

	if (t5 != -129) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int64_t t6 = -182903842LL;

	t6 = (x29+(x30|(x31==x32)));

	if (t6 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x34 = 1U;
	volatile int32_t x36 = -924483234;
	uint64_t t7 = 4440LLU;

	t7 = (x33+(x34|(x35==x36)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	volatile uint32_t x38 = 370251U;
	int64_t x39 = -1294173103170LL;
	static uint32_t t8 = 106724459U;

	t8 = (x37+(x38|(x39==x40)));

	if (t8 != 370250U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 13U;
	int64_t x42 = INT64_MIN;
	uint16_t x43 = 15U;
	int32_t x44 = INT32_MAX;
	volatile int64_t t9 = -94047455340LL;

	t9 = (x41+(x42|(x43==x44)));

	if (t9 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = 306LL;
	uint8_t x46 = 10U;
	volatile int8_t x47 = -45;
	int8_t x48 = -1;
	int64_t t10 = 30LL;

	t10 = (x45+(x46|(x47==x48)));

	if (t10 != 316LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x49 = 33420U;
	uint32_t x50 = UINT32_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	volatile uint32_t t11 = 591401U;

	t11 = (x49+(x50|(x51==x52)));

	if (t11 != 33419U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MAX;
	int8_t x55 = -3;
	uint32_t x56 = 40587U;
	static volatile int32_t t12 = 71076;

	t12 = (x53+(x54|(x55==x56)));

	if (t12 != 382) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MIN;

	t13 = (x57+(x58|(x59==x60)));

	if (t13 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 0;
	int32_t x63 = INT32_MIN;
	volatile int64_t t14 = 84178246262579299LL;

	t14 = (x61+(x62|(x63==x64)));

	if (t14 != 768419413160550LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x68 = INT32_MAX;

	t15 = (x65+(x66|(x67==x68)));

	if (t15 != 65981) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 176U;
	int8_t x72 = -5;
	uint32_t t16 = 719104U;

	t16 = (x69+(x70|(x71==x72)));

	if (t16 != 2778U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 48U;
	int64_t x74 = INT64_MIN;
	volatile int8_t x75 = INT8_MAX;
	int8_t x76 = 0;

	t17 = (x73+(x74|(x75==x76)));

	if (t17 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = 22502U;
	static int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	static int64_t x80 = 3299160LL;
	volatile int64_t t18 = 9723881432376LL;

	t18 = (x77+(x78|(x79==x80)));

	if (t18 != -9223372036854753306LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -49367438524418LL;
	int8_t x82 = 0;
	uint8_t x83 = 30U;
	static int8_t x84 = INT8_MAX;
	volatile int64_t t19 = -39LL;

	t19 = (x81+(x82|(x83==x84)));

	if (t19 != -49367438524418LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 905U;
	int16_t x86 = INT16_MIN;
	int8_t x87 = -1;
	volatile int8_t x88 = INT8_MIN;

	t20 = (x85+(x86|(x87==x88)));

	if (t20 != -31863) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x90 = 778;
	int64_t x92 = 36927LL;
	static volatile uint32_t t21 = 34U;

	t21 = (x89+(x90|(x91==x92)));

	if (t21 != 24234U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	static int8_t x94 = INT8_MIN;
	static int32_t x96 = -796;

	t22 = (x93+(x94|(x95==x96)));

	if (t22 != 4294967167U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x99 = INT16_MIN;
	int8_t x100 = -3;
	volatile uint32_t t23 = 425U;

	t23 = (x97+(x98|(x99==x100)));

	if (t23 != 258U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = 0U;
	static int64_t x102 = -26282140176204753LL;
	int32_t x103 = INT32_MIN;
	int16_t x104 = 122;
	int64_t t24 = -7168406LL;

	t24 = (x101+(x102|(x103==x104)));

	if (t24 != -26282140176204753LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = -176;
	int64_t x107 = 68184594817968LL;
	int8_t x108 = 2;
	volatile int32_t t25 = 14388;

	t25 = (x105+(x106|(x107==x108)));

	if (t25 != -71) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x111 = 1U;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t26 = 2543633966579549LLU;

	t26 = (x109+(x110|(x111==x112)));

	if (t26 != 83398940028549382LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = INT32_MIN;
	uint64_t x114 = UINT64_MAX;
	uint32_t x116 = 354U;
	uint64_t t27 = 10683347736LLU;

	t27 = (x113+(x114|(x115==x116)));

	if (t27 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	int32_t x119 = INT32_MAX;
	int32_t x120 = -1;
	int64_t t28 = -8860668622075435LL;

	t28 = (x117+(x118|(x119==x120)));

	if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x122 = 2027U;
	static int64_t x123 = INT64_MIN;
	uint32_t x124 = 1837161U;
	uint32_t t29 = 13U;

	t29 = (x121+(x122|(x123==x124)));

	if (t29 != 1899U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	int32_t x130 = INT32_MAX;
	int64_t x131 = INT64_MIN;
	int64_t x132 = -680505423260LL;
	static int32_t t30 = -3;

	t30 = (x129+(x130|(x131==x132)));

	if (t30 != 2147483646) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = 0;
	int8_t x134 = -3;
	volatile int32_t x135 = -1;
	uint16_t x136 = 2708U;
	volatile int32_t t31 = 17;

	t31 = (x133+(x134|(x135==x136)));

	if (t31 != -3) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x139 = INT8_MIN;
	uint16_t x140 = 24U;
	uint64_t t32 = 12LLU;

	t32 = (x137+(x138|(x139==x140)));

	if (t32 != 247818770LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	int32_t x142 = -1;
	static uint8_t x143 = 59U;
	volatile int64_t t33 = 2793779075203396LL;

	t33 = (x141+(x142|(x143==x144)));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -1;
	static int64_t x146 = 115955307254460922LL;
	static int64_t x147 = INT64_MIN;
	static int64_t t34 = -590953LL;

	t34 = (x145+(x146|(x147==x148)));

	if (t34 != 115955307254460921LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x150 = UINT8_MAX;
	static int8_t x151 = 1;
	int64_t x152 = 3LL;
	static volatile int32_t t35 = -3501;

	t35 = (x149+(x150|(x151==x152)));

	if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x157 = 133262;
	static volatile int8_t x158 = 13;
	static int32_t x159 = -1;
	uint16_t x160 = UINT16_MAX;
	int32_t t36 = -25145389;

	t36 = (x157+(x158|(x159==x160)));

	if (t36 != 133275) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x165 = UINT16_MAX;
	int16_t x166 = INT16_MIN;
	static int64_t x168 = INT64_MIN;
	int32_t t37 = -1;

	t37 = (x165+(x166|(x167==x168)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -2075;
	uint16_t x170 = UINT16_MAX;
	uint16_t x172 = UINT16_MAX;

	t38 = (x169+(x170|(x171==x172)));

	if (t38 != 63460) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x177 = 0U;
	int32_t x179 = -870938;
	uint64_t x180 = UINT64_MAX;
	int32_t t39 = 2432;

	t39 = (x177+(x178|(x179==x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -1;
	int64_t x184 = INT64_MIN;
	volatile int64_t t40 = 269445878752LL;

	t40 = (x181+(x182|(x183==x184)));

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x186 = INT32_MAX;
	volatile int32_t x187 = 28;
	int8_t x188 = -1;

	t41 = (x185+(x186|(x187==x188)));

	if (t41 != 2147483519) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = 53564;
	uint32_t x191 = 31298670U;
	static int32_t x192 = -63778;
	static uint32_t t42 = 7U;

	t42 = (x189+(x190|(x191==x192)));

	if (t42 != 53563U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 10751946LLU;
	int32_t x198 = INT32_MIN;
	volatile int64_t x200 = -17053036478310LL;
	volatile uint64_t t43 = 16512830LLU;

	t43 = (x197+(x198|(x199==x200)));

	if (t43 != 18446744071572819914LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MAX;
	volatile int32_t x204 = -63487;

	t44 = (x201+(x202|(x203==x204)));

	if (t44 != -2147483521) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x206 = 892U;
	volatile uint64_t x207 = 151639104LLU;
	int64_t x208 = INT64_MAX;

	t45 = (x205+(x206|(x207==x208)));

	if (t45 != 641946613208735538LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t t46 = 625396LL;

	t46 = (x209+(x210|(x211==x212)));

	if (t46 != 5699820348877LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = 6816;
	volatile int64_t t47 = -3241LL;

	t47 = (x213+(x214|(x215==x216)));

	if (t47 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = 7U;
	int8_t x219 = INT8_MIN;
	static volatile int8_t x220 = INT8_MAX;
	static volatile int32_t t48 = -469364;

	t48 = (x217+(x218|(x219==x220)));

	if (t48 != -121) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x225 = 23LL;
	int16_t x226 = -4;
	int16_t x227 = INT16_MAX;
	static int16_t x228 = INT16_MAX;

	t49 = (x225+(x226|(x227==x228)));

	if (t49 != 20LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = -1;
	int32_t x231 = INT32_MAX;
	static uint16_t x232 = UINT16_MAX;
	int32_t t50 = -65377;

	t50 = (x229+(x230|(x231==x232)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = 1U;
	volatile uint64_t x235 = 598545000LLU;
	static volatile int64_t x236 = INT64_MAX;

	t51 = (x233+(x234|(x235==x236)));

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x238 = 3U;
	volatile int64_t x239 = INT64_MAX;
	int32_t x240 = 40677828;
	int32_t t52 = 5451;

	t52 = (x237+(x238|(x239==x240)));

	if (t52 != -32765) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = INT16_MIN;
	int64_t x242 = INT64_MAX;
	uint64_t x243 = UINT64_MAX;
	volatile int64_t t53 = -505623876527LL;

	t53 = (x241+(x242|(x243==x244)));

	if (t53 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = 12022001456323499LL;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = 2151U;
	static int16_t x248 = 175;
	int64_t t54 = 11300202294LL;

	t54 = (x245+(x246|(x247==x248)));

	if (t54 != -9211350035398452309LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x249 = INT16_MAX;
	int32_t x251 = INT32_MIN;
	volatile int32_t t55 = 796;

	t55 = (x249+(x250|(x251==x252)));

	if (t55 != 32769) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = INT64_MAX;
	volatile int32_t t56 = 0;

	t56 = (x253+(x254|(x255==x256)));

	if (t56 != 2147450879) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 256LLU;
	uint16_t x259 = 17014U;

	t57 = (x257+(x258|(x259==x260)));

	if (t57 != 128LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = 2150733437213189LL;
	static int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MIN;
	int64_t t58 = 12868836923597293LL;

	t58 = (x261+(x262|(x263==x264)));

	if (t58 != -9221221303417562618LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = INT8_MAX;
	volatile uint8_t x266 = 2U;
	int8_t x268 = INT8_MIN;
	volatile int32_t t59 = 1205402;

	t59 = (x265+(x266|(x267==x268)));

	if (t59 != 129) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MAX;
	volatile int16_t x272 = INT16_MAX;

	t60 = (x269+(x270|(x271==x272)));

	if (t60 != 5356U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x275 = 3689U;
	volatile int64_t x276 = INT64_MIN;
	static int64_t t61 = 10884925894727525LL;

	t61 = (x273+(x274|(x275==x276)));

	if (t61 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MIN;
	volatile int8_t x278 = INT8_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t62 = -6205;

	t62 = (x277+(x278|(x279==x280)));

	if (t62 != -32896) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MAX;
	volatile uint64_t x283 = 356480LLU;
	static volatile int32_t t63 = -109819;

	t63 = (x281+(x282|(x283==x284)));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x290 = 33;
	volatile int8_t x291 = 0;
	static volatile int8_t x292 = -1;

	t64 = (x289+(x290|(x291==x292)));

	if (t64 != 32LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t t65 = 1590U;

	t65 = (x293+(x294|(x295==x296)));

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = -1;
	int32_t x298 = -1;
	int32_t t66 = 469207;

	t66 = (x297+(x298|(x299==x300)));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x301 = INT32_MIN;
	static uint64_t x302 = UINT64_MAX;
	int32_t x304 = INT32_MIN;
	uint64_t t67 = 93LLU;

	t67 = (x301+(x302|(x303==x304)));

	if (t67 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x305 = 390U;
	volatile uint8_t x308 = 11U;
	int32_t t68 = 50822960;

	t68 = (x305+(x306|(x307==x308)));

	if (t68 != 65925) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = 16285U;
	uint8_t x310 = 75U;
	uint32_t x311 = 142U;
	int32_t x312 = 20;
	volatile uint32_t t69 = 212U;

	t69 = (x309+(x310|(x311==x312)));

	if (t69 != 16360U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x313 = 3815U;
	uint16_t x315 = UINT16_MAX;
	uint16_t x316 = 2U;
	volatile uint32_t t70 = 273786964U;

	t70 = (x313+(x314|(x315==x316)));

	if (t70 != 3814U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = 1LL;
	int8_t x319 = -1;
	int8_t x320 = -1;
	int64_t t71 = 13565819116722LL;

	t71 = (x317+(x318|(x319==x320)));

	if (t71 != 1233318LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x321 = 5863871LLU;
	static int32_t x322 = -1;
	int32_t x324 = -16;
	uint64_t t72 = 151175248781LLU;

	t72 = (x321+(x322|(x323==x324)));

	if (t72 != 5863870LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x330 = 0U;
	int64_t x332 = 1LL;
	int32_t t73 = 2075583;

	t73 = (x329+(x330|(x331==x332)));

	if (t73 != 106) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	int64_t x334 = 410162102135315LL;
	static uint64_t x335 = UINT64_MAX;
	static int64_t x336 = INT64_MIN;
	volatile int64_t t74 = 836722411813LL;

	t74 = (x333+(x334|(x335==x336)));

	if (t74 != 410162102135570LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x337 = 453366340923LLU;
	uint16_t x338 = 0U;
	uint32_t x339 = 26124608U;
	int64_t x340 = -1LL;
	static uint64_t t75 = 11428773149837209LLU;

	t75 = (x337+(x338|(x339==x340)));

	if (t75 != 453366340923LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = 635;
	uint64_t x342 = 32207541163LLU;
	static volatile uint32_t x343 = 27343212U;
	uint64_t t76 = 310070275174470559LLU;

	t76 = (x341+(x342|(x343==x344)));

	if (t76 != 32207541798LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = -1;
	static int64_t x346 = INT64_MAX;
	static int16_t x347 = INT16_MAX;
	int64_t t77 = 49651427264LL;

	t77 = (x345+(x346|(x347==x348)));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = -1;
	int8_t x354 = -17;
	int64_t x356 = -127656585067872277LL;

	t78 = (x353+(x354|(x355==x356)));

	if (t78 != -18) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x357 = UINT16_MAX;
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MAX;
	uint32_t x360 = 9978109U;
	static volatile int32_t t79 = 497620501;

	t79 = (x357+(x358|(x359==x360)));

	if (t79 != 131070) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x362 = 17U;
	volatile uint16_t x364 = 62U;
	int32_t t80 = 95;

	t80 = (x361+(x362|(x363==x364)));

	if (t80 != 144) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = INT32_MIN;
	static int8_t x367 = 3;
	uint16_t x368 = UINT16_MAX;
	volatile uint32_t t81 = 56197782U;

	t81 = (x365+(x366|(x367==x368)));

	if (t81 != 2147483651U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x373 = -1LL;
	static int64_t x376 = -1LL;
	static int64_t t82 = -174434468849101LL;

	t82 = (x373+(x374|(x375==x376)));

	if (t82 != 5LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x378 = -1LL;
	uint32_t x379 = 2U;
	int64_t x380 = INT64_MIN;
	volatile int64_t t83 = -2641749579130729LL;

	t83 = (x377+(x378|(x379==x380)));

	if (t83 != 32766LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = INT16_MAX;
	static volatile int32_t t84 = -182148;

	t84 = (x381+(x382|(x383==x384)));

	if (t84 != -2147418113) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = -1;
	static uint32_t x386 = 2035U;
	int32_t x387 = INT32_MIN;
	int32_t x388 = -1;
	static uint32_t t85 = 1788664U;

	t85 = (x385+(x386|(x387==x388)));

	if (t85 != 2034U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x390 = INT32_MAX;
	static int64_t x391 = INT64_MIN;
	static uint8_t x392 = 9U;

	t86 = (x389+(x390|(x391==x392)));

	if (t86 != 2147469627) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = 0;
	static int64_t x395 = 2973281246004763LL;
	static int64_t x396 = INT64_MIN;
	uint32_t t87 = UINT32_MAX;

	t87 = (x393+(x394|(x395==x396)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x397 = 4U;
	static uint64_t x398 = 1419LLU;
	static volatile int8_t x399 = INT8_MIN;

	t88 = (x397+(x398|(x399==x400)));

	if (t88 != 1423LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x402 = INT64_MAX;
	int32_t x403 = -789;

	t89 = (x401+(x402|(x403==x404)));

	if (t89 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x407 = 2U;
	int32_t t90 = -11;

	t90 = (x405+(x406|(x407==x408)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = -1LL;
	uint64_t x410 = UINT64_MAX;
	volatile uint64_t x411 = 0LLU;
	int8_t x412 = INT8_MIN;

	t91 = (x409+(x410|(x411==x412)));

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = -16;
	int16_t x415 = INT16_MIN;
	volatile uint64_t x416 = 6LLU;
	volatile uint64_t t92 = 4059757LLU;

	t92 = (x413+(x414|(x415==x416)));

	if (t92 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x417 = INT16_MIN;
	uint64_t x418 = UINT64_MAX;
	volatile int16_t x419 = -1;
	int64_t x420 = INT64_MAX;
	volatile uint64_t t93 = 3298955333605200LLU;

	t93 = (x417+(x418|(x419==x420)));

	if (t93 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x421 = INT16_MAX;
	static volatile int16_t x424 = INT16_MIN;
	volatile int32_t t94 = -1;

	t94 = (x421+(x422|(x423==x424)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = INT64_MIN;
	volatile uint8_t x430 = 0U;
	uint32_t x431 = 240U;
	volatile uint8_t x432 = 44U;

	t95 = (x429+(x430|(x431==x432)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x434 = INT16_MAX;
	int32_t x435 = INT32_MAX;
	volatile uint16_t x436 = UINT16_MAX;
	volatile int32_t t96 = 1;

	t96 = (x433+(x434|(x435==x436)));

	if (t96 != 40316) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = INT16_MIN;
	volatile int32_t x438 = INT32_MAX;
	volatile int64_t x439 = -964300218LL;
	uint64_t x440 = 529122223LLU;
	int32_t t97 = 397;

	t97 = (x437+(x438|(x439==x440)));

	if (t97 != 2147450879) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x442 = -978;
	static int8_t x443 = 1;
	uint64_t t98 = 14345411394LLU;

	t98 = (x441+(x442|(x443==x444)));

	if (t98 != 18446744073709550637LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = -604354;
	int64_t x447 = 1059LL;
	uint32_t x448 = 1851U;
	int32_t t99 = -148900;

	t99 = (x445+(x446|(x447==x448)));

	if (t99 != -604099) { NG(); } else { ; }
	
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

