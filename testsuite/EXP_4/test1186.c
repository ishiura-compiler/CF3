#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 54;
int32_t x15 = INT32_MIN;
int16_t x16 = INT16_MIN;
int16_t x21 = 65;
uint8_t x25 = 0U;
static volatile int16_t x26 = INT16_MAX;
int8_t x30 = -10;
int32_t t4 = 8163115;
volatile int8_t x37 = -1;
static uint8_t x46 = UINT8_MAX;
int16_t x71 = INT16_MIN;
int16_t x73 = INT16_MIN;
uint8_t x78 = 114U;
int64_t x81 = INT64_MAX;
uint32_t x83 = UINT32_MAX;
uint8_t x85 = 0U;
int16_t x87 = INT16_MIN;
int64_t x93 = 328381LL;
uint64_t x96 = 10616737983758LLU;
static uint16_t x99 = 3U;
int32_t t20 = -48226;
uint16_t x131 = 41U;
uint32_t x135 = 1U;
uint8_t x147 = 62U;
int64_t x149 = -96072LL;
uint64_t x156 = 130887194LLU;
int32_t t28 = 944193829;
int8_t x175 = INT8_MIN;
int32_t x182 = INT32_MIN;
int16_t x184 = INT16_MAX;
volatile int64_t x193 = -479035LL;
volatile int16_t x197 = INT16_MIN;
volatile int32_t t34 = -77137;
uint8_t x211 = 13U;
volatile int64_t x223 = 277489158074749LL;
static int16_t x232 = INT16_MAX;
uint16_t x234 = UINT16_MAX;
volatile uint32_t t42 = 31U;
int8_t x248 = 3;
volatile int64_t t45 = -1776LL;
int32_t x255 = INT32_MIN;
int64_t t47 = -764LL;
int16_t x275 = -1;
int16_t x277 = -7754;
static uint32_t x279 = 12972465U;
uint64_t x280 = 18486LLU;
static uint16_t x284 = 3U;
volatile int32_t t51 = -50;
uint8_t x301 = UINT8_MAX;
uint64_t x305 = UINT64_MAX;
volatile int32_t t57 = 98465263;
uint32_t x329 = 5768477U;
int8_t x331 = INT8_MIN;
volatile uint16_t x332 = UINT16_MAX;
volatile uint16_t x335 = 2688U;
static int8_t x338 = -1;
static int8_t x343 = 0;
static volatile uint64_t t63 = 1225563094364LLU;
uint32_t x348 = 171659U;
int8_t x353 = INT8_MIN;
uint16_t x355 = 6802U;
int32_t x360 = INT32_MIN;
volatile uint64_t t67 = 48LLU;
static volatile uint64_t x367 = 11876098607LLU;
static int16_t x368 = INT16_MAX;
volatile int16_t x374 = INT16_MAX;
int32_t t70 = -3;
uint8_t x401 = 10U;
int8_t x403 = INT8_MIN;
volatile int64_t t74 = 1695LL;
int16_t x407 = -11878;
int32_t t75 = -207;
volatile int32_t t76 = -63;
int64_t t77 = 3773797188LL;
uint8_t x432 = UINT8_MAX;
static volatile int64_t t79 = 2191321905352LL;
uint16_t x433 = 4U;
int16_t x436 = -1;
uint64_t x438 = 379665541204158LLU;
uint32_t x450 = 4041U;
int8_t x453 = INT8_MIN;
int32_t t84 = 631282;
int64_t x462 = -1LL;
int64_t x464 = -1LL;
int8_t x466 = 27;
int16_t x469 = -1388;
uint64_t x474 = 4723897LLU;
static uint32_t x483 = 3U;
int16_t x506 = -1;
int8_t x511 = INT8_MIN;
uint32_t x512 = 675U;
volatile uint32_t t97 = 5235170U;
int64_t x519 = INT64_MIN;
int32_t x520 = -28;
volatile int64_t t98 = 3508356LL;
int64_t x521 = -1LL;


void f0(void) {
	int16_t x2 = INT16_MAX;
	int8_t x3 = 46;
	int64_t x4 = -115084550645476LL;
	volatile int32_t t0 = -811589540;

	t0 = (x1*(x2+(x3==x4)));

	if (t0 != 1769418) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = -1;
	static uint16_t x14 = 25375U;
	volatile int32_t t1 = -3946;

	t1 = (x13*(x14+(x15==x16)));

	if (t1 != -25375) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x22 = 4U;
	uint64_t x23 = 40131982094LLU;
	uint8_t x24 = 13U;
	volatile uint32_t t2 = 18901798U;

	t2 = (x21*(x22+(x23==x24)));

	if (t2 != 260U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x27 = INT64_MIN;
	int16_t x28 = -46;
	int32_t t3 = -2585597;

	t3 = (x25*(x26+(x27==x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x29 = INT16_MAX;
	int16_t x31 = 1;
	volatile int16_t x32 = INT16_MAX;

	t4 = (x29*(x30+(x31==x32)));

	if (t4 != -327670) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = 2932LLU;
	static volatile int64_t x34 = -25919LL;
	volatile int16_t x35 = -1;
	int8_t x36 = -4;
	uint64_t t5 = 2594333911510515LLU;

	t5 = (x33*(x34+(x35==x36)));

	if (t5 != 18446744073633557108LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x38 = 812LLU;
	volatile int64_t x39 = INT64_MIN;
	volatile int32_t x40 = -1;
	uint64_t t6 = 1752707746168357531LLU;

	t6 = (x37*(x38+(x39==x40)));

	if (t6 != 18446744073709550804LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 40U;
	volatile int32_t x42 = 27496;
	int32_t x43 = INT32_MIN;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t7 = 262080;

	t7 = (x41*(x42+(x43==x44)));

	if (t7 != 1099840) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	static volatile uint8_t x47 = UINT8_MAX;
	int32_t x48 = INT32_MAX;
	int32_t t8 = 3;

	t8 = (x45*(x46+(x47==x48)));

	if (t8 != 32385) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = -1;
	volatile int32_t x54 = -120230;
	uint64_t x55 = 94780634344962LLU;
	volatile int64_t x56 = INT64_MIN;
	static int32_t t9 = -244153;

	t9 = (x53*(x54+(x55==x56)));

	if (t9 != 120230) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x61 = INT8_MIN;
	int64_t x62 = -2889459062348891LL;
	int16_t x63 = INT16_MIN;
	volatile int8_t x64 = 0;
	static volatile int64_t t10 = -3LL;

	t10 = (x61*(x62+(x63==x64)));

	if (t10 != 369850759980658048LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x69 = 0U;
	static int64_t x70 = -2004339728LL;
	uint16_t x72 = 227U;
	int64_t t11 = 126170610216004487LL;

	t11 = (x69*(x70+(x71==x72)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = -6;
	volatile int32_t t12 = -2;

	t12 = (x73*(x74+(x75==x76)));

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = -3;
	static int16_t x79 = 1964;
	uint8_t x80 = 25U;
	int32_t t13 = 813004;

	t13 = (x77*(x78+(x79==x80)));

	if (t13 != -342) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x82 = -1;
	int32_t x84 = -2;
	int64_t t14 = 24913074LL;

	t14 = (x81*(x82+(x83==x84)));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x86 = UINT8_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t15 = -247;

	t15 = (x85*(x86+(x87==x88)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = UINT64_MAX;
	int16_t x90 = -15;
	int32_t x91 = -1;
	int16_t x92 = -1;
	static volatile uint64_t t16 = 61024LLU;

	t16 = (x89*(x90+(x91==x92)));

	if (t16 != 14LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x94 = -103;
	volatile int8_t x95 = INT8_MIN;
	volatile int64_t t17 = -121930LL;

	t17 = (x93*(x94+(x95==x96)));

	if (t17 != -33823243LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = 3529;
	volatile uint64_t x98 = 1767LLU;
	int32_t x100 = -1;
	volatile uint64_t t18 = 7777573561LLU;

	t18 = (x97*(x98+(x99==x100)));

	if (t18 != 6235743LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x101 = 3U;
	uint64_t x102 = 321264521277690LLU;
	uint8_t x103 = 44U;
	uint32_t x104 = 12939781U;
	static uint64_t t19 = 122945330982LLU;

	t19 = (x101*(x102+(x103==x104)));

	if (t19 != 963793563833070LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MAX;
	static int8_t x110 = -1;
	int32_t x111 = -1;
	volatile uint64_t x112 = 18LLU;

	t20 = (x109*(x110+(x111==x112)));

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x129 = -50;
	int16_t x130 = -2;
	static volatile int8_t x132 = INT8_MIN;
	int32_t t21 = 105088949;

	t21 = (x129*(x130+(x131==x132)));

	if (t21 != 100) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x133 = UINT16_MAX;
	uint64_t x134 = 199LLU;
	static int16_t x136 = -1;
	volatile uint64_t t22 = 1382340LLU;

	t22 = (x133*(x134+(x135==x136)));

	if (t22 != 13041465LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x137 = INT16_MIN;
	uint32_t x138 = UINT32_MAX;
	uint64_t x139 = 25LLU;
	int32_t x140 = -1;
	volatile uint32_t t23 = 29U;

	t23 = (x137*(x138+(x139==x140)));

	if (t23 != 32768U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x145 = 5579095236242858LL;
	uint16_t x146 = 225U;
	uint64_t x148 = 1328377355742091395LLU;
	static volatile int64_t t24 = 183438LL;

	t24 = (x145*(x146+(x147==x148)));

	if (t24 != 1255296428154643050LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x150 = INT32_MIN;
	volatile int64_t x151 = -1LL;
	uint64_t x152 = 220442301043509LLU;
	volatile int64_t t25 = 760LL;

	t25 = (x149*(x150+(x151==x152)));

	if (t25 != 206313049030656LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x153 = -1;
	volatile int16_t x154 = INT16_MIN;
	int8_t x155 = -1;
	static int32_t t26 = 59357;

	t26 = (x153*(x154+(x155==x156)));

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x161 = 13U;
	uint32_t x162 = 1985618501U;
	int64_t x163 = 2185532LL;
	int64_t x164 = INT64_MIN;
	static volatile uint32_t t27 = 3019U;

	t27 = (x161*(x162+(x163==x164)));

	if (t27 != 43236737U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x165 = 11;
	int32_t x166 = -2035539;
	static int32_t x167 = -628000;
	static volatile int8_t x168 = 0;

	t28 = (x165*(x166+(x167==x168)));

	if (t28 != -22390929) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x173 = 14;
	volatile int32_t x174 = -53;
	static uint64_t x176 = UINT64_MAX;
	volatile int32_t t29 = -84985;

	t29 = (x173*(x174+(x175==x176)));

	if (t29 != -742) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x177 = 10;
	static volatile int64_t x178 = -1LL;
	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = -8236135;
	int64_t t30 = 228242103783LL;

	t30 = (x177*(x178+(x179==x180)));

	if (t30 != -10LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x181 = 38966U;
	int16_t x183 = INT16_MIN;
	static uint32_t t31 = 221050557U;

	t31 = (x181*(x182+(x183==x184)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = -1;
	uint64_t x186 = 4026611129LLU;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = 7965885U;
	uint64_t t32 = 47073LLU;

	t32 = (x185*(x186+(x187==x188)));

	if (t32 != 18446744069682940487LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 1263049068592760000LLU;
	int16_t x196 = INT16_MAX;
	volatile int64_t t33 = 724520367316528055LL;

	t33 = (x193*(x194+(x195==x196)));

	if (t33 != -31393558725LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x198 = -11336;
	int32_t x199 = -1;
	int16_t x200 = INT16_MIN;

	t34 = (x197*(x198+(x199==x200)));

	if (t34 != 371458048) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -1LL;
	uint8_t x207 = 1U;
	volatile uint16_t x208 = 14U;
	static volatile int64_t t35 = -90398705LL;

	t35 = (x205*(x206+(x207==x208)));

	if (t35 != 2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x209 = INT64_MIN;
	volatile uint64_t x210 = 1820424292981LLU;
	uint8_t x212 = UINT8_MAX;
	uint64_t t36 = 1403753804788LLU;

	t36 = (x209*(x210+(x211==x212)));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x213 = INT32_MAX;
	volatile uint64_t x214 = 6518607915535206941LLU;
	int16_t x215 = -1;
	uint32_t x216 = UINT32_MAX;
	uint64_t t37 = 13705LLU;

	t37 = (x213*(x214+(x215==x216)));

	if (t37 != 18396225578735334882LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x221 = 92U;
	volatile int16_t x222 = -1;
	int8_t x224 = 0;
	volatile int32_t t38 = 828;

	t38 = (x221*(x222+(x223==x224)));

	if (t38 != -92) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x225 = -1;
	static uint16_t x226 = UINT16_MAX;
	uint64_t x227 = 8618929904866549672LLU;
	int8_t x228 = -3;
	volatile int32_t t39 = -956531;

	t39 = (x225*(x226+(x227==x228)));

	if (t39 != -65535) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x229 = INT8_MAX;
	static uint32_t x230 = UINT32_MAX;
	int64_t x231 = INT64_MIN;
	volatile uint32_t t40 = 177587U;

	t40 = (x229*(x230+(x231==x232)));

	if (t40 != 4294967169U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x233 = 51U;
	static uint32_t x235 = UINT32_MAX;
	uint32_t x236 = 6610982U;
	volatile int32_t t41 = -540171;

	t41 = (x233*(x234+(x235==x236)));

	if (t41 != 3342285) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = INT16_MIN;
	static uint32_t x238 = 790U;
	int8_t x239 = -8;
	static int64_t x240 = -1LL;

	t42 = (x237*(x238+(x239==x240)));

	if (t42 != 4269080576U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MAX;
	int8_t x243 = 14;
	volatile int8_t x244 = 3;
	volatile int32_t t43 = -10;

	t43 = (x241*(x242+(x243==x244)));

	if (t43 != 16129) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	volatile uint64_t x247 = UINT64_MAX;
	volatile int32_t t44 = -5279191;

	t44 = (x245*(x246+(x247==x248)));

	if (t44 != 4194304) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x249 = 5677290421LL;
	int8_t x250 = INT8_MAX;
	uint8_t x251 = 5U;
	int16_t x252 = 214;

	t45 = (x249*(x250+(x251==x252)));

	if (t45 != 721015883467LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x253 = -1;
	int8_t x254 = -1;
	uint16_t x256 = 3U;
	int32_t t46 = 2;

	t46 = (x253*(x254+(x255==x256)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x265 = INT64_MAX;
	static int64_t x266 = -1LL;
	volatile int32_t x267 = INT32_MIN;
	static uint64_t x268 = UINT64_MAX;

	t47 = (x265*(x266+(x267==x268)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x273 = -1;
	int16_t x274 = INT16_MIN;
	static volatile int32_t x276 = INT32_MAX;
	int32_t t48 = 175;

	t48 = (x273*(x274+(x275==x276)));

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x278 = UINT16_MAX;
	volatile int32_t t49 = 15477770;

	t49 = (x277*(x278+(x279==x280)));

	if (t49 != -508158390) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x281 = 21U;
	int64_t x282 = -1LL;
	static volatile int8_t x283 = INT8_MAX;
	int64_t t50 = -66165LL;

	t50 = (x281*(x282+(x283==x284)));

	if (t50 != -21LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x289 = INT8_MIN;
	uint8_t x290 = 0U;
	int64_t x291 = INT64_MAX;
	volatile int64_t x292 = -1LL;

	t51 = (x289*(x290+(x291==x292)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x293 = -406083360LL;
	int32_t x294 = INT32_MAX;
	int16_t x295 = -1;
	int16_t x296 = INT16_MIN;
	static volatile int64_t t52 = 3LL;

	t52 = (x293*(x294+(x295==x296)));

	if (t52 != -872057374918813920LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x297 = UINT64_MAX;
	uint16_t x298 = 161U;
	int8_t x299 = 3;
	int8_t x300 = INT8_MIN;
	volatile uint64_t t53 = 8691LLU;

	t53 = (x297*(x298+(x299==x300)));

	if (t53 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x302 = -1LL;
	int8_t x303 = 0;
	int8_t x304 = INT8_MAX;
	int64_t t54 = -137677957750474LL;

	t54 = (x301*(x302+(x303==x304)));

	if (t54 != -255LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x306 = UINT32_MAX;
	uint8_t x307 = 1U;
	int64_t x308 = -6670LL;
	static volatile uint64_t t55 = 1845765508114844503LLU;

	t55 = (x305*(x306+(x307==x308)));

	if (t55 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x309 = -249LL;
	int32_t x310 = INT32_MAX;
	uint8_t x311 = 32U;
	static uint32_t x312 = UINT32_MAX;
	int64_t t56 = -16455205770467LL;

	t56 = (x309*(x310+(x311==x312)));

	if (t56 != -534723428103LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x313 = UINT16_MAX;
	uint16_t x314 = 12U;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = UINT64_MAX;

	t57 = (x313*(x314+(x315==x316)));

	if (t57 != 786420) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x321 = INT8_MIN;
	int32_t x322 = -1;
	volatile int32_t x323 = -188749;
	int32_t x324 = INT32_MAX;
	int32_t t58 = 0;

	t58 = (x321*(x322+(x323==x324)));

	if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x325 = 0U;
	volatile uint32_t x326 = 24U;
	volatile uint16_t x327 = UINT16_MAX;
	volatile uint64_t x328 = UINT64_MAX;
	static volatile uint32_t t59 = 1289U;

	t59 = (x325*(x326+(x327==x328)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x330 = UINT16_MAX;
	static volatile uint32_t t60 = 123225430U;

	t60 = (x329*(x330+(x331==x332)));

	if (t60 != 80018147U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x333 = -1;
	int8_t x334 = -1;
	int16_t x336 = -1;
	static int32_t t61 = -53389;

	t61 = (x333*(x334+(x335==x336)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x337 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 11004U;
	volatile int32_t t62 = 319077788;

	t62 = (x337*(x338+(x339==x340)));

	if (t62 != 32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x341 = 676LLU;
	uint8_t x342 = 0U;
	uint16_t x344 = 73U;

	t63 = (x341*(x342+(x343==x344)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	volatile int64_t x347 = INT64_MAX;
	volatile int32_t t64 = 252602205;

	t64 = (x345*(x346+(x347==x348)));

	if (t64 != 4194304) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x349 = -32764157;
	uint32_t x350 = 2667909U;
	uint32_t x351 = 89337U;
	int64_t x352 = -1159LL;
	static volatile uint32_t t65 = 428561480U;

	t65 = (x349*(x350+(x351==x352)));

	if (t65 != 3680037775U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x354 = -29;
	int64_t x356 = INT64_MAX;
	volatile int32_t t66 = 409518673;

	t66 = (x353*(x354+(x355==x356)));

	if (t66 != 3712) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x357 = 581811900326553373LLU;
	uint64_t x358 = 7114285095142530150LLU;
	uint8_t x359 = 61U;

	t67 = (x357*(x358+(x359==x360)));

	if (t67 != 8690290849558708622LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x365 = -632;
	volatile int16_t x366 = INT16_MIN;
	int32_t t68 = -1853;

	t68 = (x365*(x366+(x367==x368)));

	if (t68 != 20709376) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x373 = INT16_MIN;
	static volatile int64_t x375 = 39669LL;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t69 = 2167;

	t69 = (x373*(x374+(x375==x376)));

	if (t69 != -1073709056) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x377 = -1;
	static uint16_t x378 = UINT16_MAX;
	static int32_t x379 = INT32_MIN;
	uint32_t x380 = UINT32_MAX;

	t70 = (x377*(x378+(x379==x380)));

	if (t70 != -65535) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x381 = 0;
	uint16_t x382 = 588U;
	uint8_t x383 = 59U;
	static int8_t x384 = -1;
	int32_t t71 = -1233203;

	t71 = (x381*(x382+(x383==x384)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x389 = 3416U;
	static int16_t x390 = 398;
	volatile int8_t x391 = INT8_MAX;
	static volatile int32_t x392 = INT32_MIN;
	static volatile int32_t t72 = 2;

	t72 = (x389*(x390+(x391==x392)));

	if (t72 != 1359568) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = -1;
	static int8_t x398 = INT8_MIN;
	volatile uint64_t x399 = 4690434572058215LLU;
	int64_t x400 = INT64_MIN;
	volatile int32_t t73 = -4;

	t73 = (x397*(x398+(x399==x400)));

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x402 = -1LL;
	static volatile int8_t x404 = -1;

	t74 = (x401*(x402+(x403==x404)));

	if (t74 != -10LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x405 = INT8_MIN;
	uint8_t x406 = UINT8_MAX;
	int64_t x408 = INT64_MIN;

	t75 = (x405*(x406+(x407==x408)));

	if (t75 != -32640) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x409 = -1;
	volatile int32_t x410 = -1;
	int16_t x411 = INT16_MIN;
	int8_t x412 = -1;

	t76 = (x409*(x410+(x411==x412)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x413 = 42305LL;
	uint16_t x414 = 9U;
	int8_t x415 = INT8_MIN;
	uint64_t x416 = 7195619038354874LLU;

	t77 = (x413*(x414+(x415==x416)));

	if (t77 != 380745LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x425 = 13081224;
	static volatile uint64_t x426 = UINT64_MAX;
	uint64_t x427 = 115026LLU;
	int32_t x428 = 12;
	volatile uint64_t t78 = 0LLU;

	t78 = (x425*(x426+(x427==x428)));

	if (t78 != 18446744073696470392LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x429 = INT64_MAX;
	int64_t x430 = -1LL;
	int64_t x431 = 57191006471779LL;

	t79 = (x429*(x430+(x431==x432)));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x434 = UINT16_MAX;
	int64_t x435 = INT64_MIN;
	static volatile int32_t t80 = 3760;

	t80 = (x433*(x434+(x435==x436)));

	if (t80 != 262140) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x437 = INT16_MAX;
	uint8_t x439 = 14U;
	int8_t x440 = -1;
	volatile uint64_t t81 = 3172989LLU;

	t81 = (x437*(x438+(x439==x440)));

	if (t81 != 12440500788636645186LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x445 = UINT16_MAX;
	static volatile int16_t x446 = 271;
	int16_t x447 = INT16_MIN;
	int32_t x448 = 277545;
	static volatile int32_t t82 = -7;

	t82 = (x445*(x446+(x447==x448)));

	if (t82 != 17759985) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x449 = 1489U;
	volatile int64_t x451 = -6470452921008LL;
	uint8_t x452 = UINT8_MAX;
	static volatile uint32_t t83 = 504233293U;

	t83 = (x449*(x450+(x451==x452)));

	if (t83 != 6017049U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x454 = INT8_MAX;
	uint8_t x455 = 0U;
	uint64_t x456 = 41364742959LLU;

	t84 = (x453*(x454+(x455==x456)));

	if (t84 != -16256) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x457 = 2757013LLU;
	uint32_t x458 = UINT32_MAX;
	uint16_t x459 = 28737U;
	static int64_t x460 = INT64_MIN;
	static uint64_t t85 = 85438427LLU;

	t85 = (x457*(x458+(x459==x460)));

	if (t85 != 11841280666889835LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x461 = -55007514141LL;
	uint8_t x463 = 21U;
	volatile int64_t t86 = 2638882LL;

	t86 = (x461*(x462+(x463==x464)));

	if (t86 != 55007514141LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x465 = -1;
	int32_t x467 = -1;
	uint32_t x468 = UINT32_MAX;
	int32_t t87 = 892254175;

	t87 = (x465*(x466+(x467==x468)));

	if (t87 != -28) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x470 = 85U;
	int8_t x471 = 4;
	static int32_t x472 = -366063444;
	volatile int32_t t88 = -847549210;

	t88 = (x469*(x470+(x471==x472)));

	if (t88 != -117980) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x473 = INT16_MIN;
	volatile uint32_t x475 = 16291268U;
	int8_t x476 = 4;
	volatile uint64_t t89 = 8004475450380178220LLU;

	t89 = (x473*(x474+(x475==x476)));

	if (t89 != 18446743918916894720LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x477 = -6599746;
	static uint16_t x478 = 7U;
	uint64_t x479 = 526979634781564402LLU;
	volatile int16_t x480 = INT16_MIN;
	int32_t t90 = -28;

	t90 = (x477*(x478+(x479==x480)));

	if (t90 != -46198222) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x481 = INT64_MAX;
	volatile uint64_t x482 = 48007LLU;
	static int8_t x484 = INT8_MIN;
	static uint64_t t91 = 11214738LLU;

	t91 = (x481*(x482+(x483==x484)));

	if (t91 != 9223372036854727801LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x485 = UINT64_MAX;
	static volatile int32_t x486 = -1;
	volatile int8_t x487 = INT8_MAX;
	int16_t x488 = INT16_MIN;
	uint64_t t92 = 598714252LLU;

	t92 = (x485*(x486+(x487==x488)));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x493 = UINT16_MAX;
	int8_t x494 = -1;
	int16_t x495 = INT16_MIN;
	static int64_t x496 = -1LL;
	int32_t t93 = 178823971;

	t93 = (x493*(x494+(x495==x496)));

	if (t93 != -65535) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x497 = -1;
	uint16_t x498 = UINT16_MAX;
	static int64_t x499 = INT64_MIN;
	int64_t x500 = INT64_MAX;
	volatile int32_t t94 = 4248;

	t94 = (x497*(x498+(x499==x500)));

	if (t94 != -65535) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x501 = INT8_MIN;
	uint64_t x502 = 16241LLU;
	int32_t x503 = INT32_MAX;
	int32_t x504 = 112644921;
	volatile uint64_t t95 = 2199154527156147582LLU;

	t95 = (x501*(x502+(x503==x504)));

	if (t95 != 18446744073707472768LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x505 = 7;
	uint32_t x507 = 5796478U;
	int64_t x508 = INT64_MIN;
	volatile int32_t t96 = 14481;

	t96 = (x505*(x506+(x507==x508)));

	if (t96 != -7) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x509 = 4492U;
	uint8_t x510 = UINT8_MAX;

	t97 = (x509*(x510+(x511==x512)));

	if (t97 != 1145460U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = -1LL;
	static volatile int8_t x518 = -1;

	t98 = (x517*(x518+(x519==x520)));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x522 = -56;
	volatile int32_t x523 = INT32_MIN;
	volatile int32_t x524 = 363;
	int64_t t99 = -172669828537LL;

	t99 = (x521*(x522+(x523==x524)));

	if (t99 != 56LL) { NG(); } else { ; }
	
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

