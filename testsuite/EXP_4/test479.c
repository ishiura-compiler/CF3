#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
int16_t x2 = INT16_MIN;
static uint64_t x3 = 2243067796833850LLU;
static uint64_t x4 = 2233LLU;
uint64_t t1 = 9572063959556309LLU;
int64_t x13 = INT64_MIN;
uint64_t x15 = 31007388405039512LLU;
uint64_t x38 = 206341571957LLU;
uint64_t t6 = 324LLU;
uint16_t x52 = 1U;
static int8_t x58 = INT8_MIN;
int16_t x60 = -1;
uint32_t t11 = 154346454U;
uint16_t x83 = 1U;
int8_t x84 = 27;
uint64_t t12 = 23LLU;
int8_t x87 = INT8_MIN;
int64_t x90 = INT64_MIN;
volatile uint16_t x92 = 55U;
volatile int16_t x98 = -62;
volatile int8_t x113 = -1;
uint8_t x116 = UINT8_MAX;
int16_t x118 = 5;
static int8_t x133 = 37;
uint16_t x139 = 9441U;
static int32_t x142 = INT32_MIN;
uint64_t x144 = 258559LLU;
uint32_t t27 = 6U;
int16_t x176 = 0;
int8_t x185 = -1;
uint32_t x186 = 103U;
int16_t x188 = INT16_MAX;
static uint32_t t32 = 2U;
uint8_t x189 = UINT8_MAX;
static volatile int8_t x192 = INT8_MAX;
static volatile int32_t t33 = 25420482;
int16_t x198 = 1436;
int16_t x199 = -1;
static uint64_t x201 = 2039032491LLU;
volatile uint64_t t35 = 3698951692LLU;
int64_t x218 = 17LL;
int32_t x221 = -1;
int16_t x223 = -2;
uint32_t x224 = UINT32_MAX;
volatile int8_t x225 = INT8_MIN;
uint64_t t38 = 260818770563472040LLU;
uint8_t x232 = 28U;
static volatile int8_t x236 = INT8_MAX;
volatile int32_t t40 = 41276;
int32_t x251 = 32666;
int16_t x256 = 3;
static volatile int32_t x260 = INT32_MIN;
volatile int16_t x261 = -1;
uint8_t x267 = UINT8_MAX;
int16_t x275 = INT16_MIN;
static volatile uint8_t x284 = 8U;
uint32_t x286 = UINT32_MAX;
volatile uint8_t x287 = 1U;
volatile int64_t t53 = -4235014428769634LL;
int8_t x300 = -1;
int16_t x305 = INT16_MIN;
uint8_t x306 = 2U;
static volatile int64_t t57 = 24400LL;
volatile int16_t x316 = INT16_MAX;
volatile uint32_t t59 = 253492U;
int16_t x321 = INT16_MAX;
int8_t x333 = INT8_MIN;
int8_t x343 = INT8_MIN;
int16_t x353 = -1;
int32_t x354 = 26;
int64_t x359 = 9546412140112LL;
uint64_t t67 = 482045514914076LLU;
int64_t x361 = INT64_MIN;
int64_t t68 = -5158002999149415LL;
int16_t x368 = -1;
volatile int64_t x373 = INT64_MAX;
static int64_t x374 = -1LL;
uint64_t x383 = UINT64_MAX;
static int16_t x384 = -1;
uint64_t t73 = 1871LLU;
uint16_t x393 = 5122U;
uint32_t x396 = 6467695U;
volatile int16_t x397 = INT16_MIN;
volatile int64_t x405 = -1LL;
int8_t x406 = -1;
volatile int8_t x408 = INT8_MIN;
uint8_t x413 = 35U;
int64_t x415 = INT64_MIN;
volatile int64_t t77 = -34149113425LL;
volatile int32_t t79 = -17143445;
volatile int32_t x445 = 2224039;
static int32_t x466 = -12515799;
int32_t t84 = 40409;
uint8_t x494 = UINT8_MAX;
int32_t x496 = INT32_MAX;
uint64_t x499 = UINT64_MAX;
static volatile int32_t x500 = -1;
static uint64_t x502 = UINT64_MAX;
uint64_t x503 = UINT64_MAX;
uint16_t x506 = 13U;
int8_t x514 = INT8_MIN;
static uint32_t x535 = 336515644U;
static uint32_t x536 = UINT32_MAX;
int16_t x537 = -1;
static int64_t x539 = -6LL;
volatile int16_t x544 = -5718;
static uint64_t t99 = 188305109006753LLU;


void f0(void) {
	volatile uint64_t t0 = 810004360273349LLU;

	t0 = (x1&(x2&(x3*x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	static volatile int32_t x10 = -17;
	uint32_t x11 = UINT32_MAX;
	uint64_t x12 = 18317037LLU;

	t1 = (x9&(x10&(x11*x12)));

	if (t1 != 78671074856304899LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x14 = -44;
	static int32_t x16 = INT32_MAX;
	volatile uint64_t t2 = 426732LLU;

	t2 = (x13&(x14&(x15*x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MIN;
	uint32_t x18 = 266819866U;
	int16_t x19 = INT16_MIN;
	int64_t x20 = -1LL;
	volatile int64_t t3 = 415486831067LL;

	t3 = (x17&(x18&(x19*x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MAX;
	int16_t x31 = INT16_MIN;
	static uint16_t x32 = 34U;
	int64_t t4 = -519977764322LL;

	t4 = (x29&(x30&(x31*x32)));

	if (t4 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -103;
	uint32_t x34 = 25U;
	uint64_t x35 = 30107533LLU;
	int16_t x36 = INT16_MIN;
	uint64_t t5 = 35565177LLU;

	t5 = (x33&(x34&(x35*x36)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = 35484270;
	volatile int8_t x39 = INT8_MIN;
	uint8_t x40 = UINT8_MAX;

	t6 = (x37&(x38&(x39*x40)));

	if (t6 != 34078720LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x49 = UINT64_MAX;
	static volatile int32_t x50 = INT32_MIN;
	int64_t x51 = 10705845206714080LL;
	uint64_t t7 = 16144908488541260LLU;

	t7 = (x49&(x50&(x51*x52)));

	if (t7 != 10705843787923456LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x57 = 144U;
	int32_t x59 = -1;
	volatile int32_t t8 = 463;

	t8 = (x57&(x58&(x59*x60)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = 61U;
	int64_t x67 = -7800211794983LL;
	int8_t x68 = INT8_MAX;
	static volatile int64_t t9 = -1LL;

	t9 = (x65&(x66&(x67*x68)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x73 = 1U;
	uint8_t x74 = 104U;
	uint8_t x75 = UINT8_MAX;
	uint64_t x76 = 193113745284LLU;
	static uint64_t t10 = 9062323LLU;

	t10 = (x73&(x74&(x75*x76)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x77 = 17237;
	int32_t x78 = 959233589;
	volatile uint32_t x79 = 1830662945U;
	volatile uint8_t x80 = 71U;

	t11 = (x77&(x78&(x79*x80)));

	if (t11 != 517U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x81 = 493428166986016LLU;
	uint8_t x82 = 49U;

	t12 = (x81&(x82&(x83*x84)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MAX;
	int32_t x88 = -563;
	volatile int64_t t13 = 26869681LL;

	t13 = (x85&(x86&(x87*x88)));

	if (t13 != 65536LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x89 = 225U;
	volatile int64_t x91 = -1LL;
	int64_t t14 = -1059LL;

	t14 = (x89&(x90&(x91*x92)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x93 = INT64_MIN;
	static uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MIN;
	volatile int16_t x96 = INT16_MIN;
	static uint64_t t15 = 3068926LLU;

	t15 = (x93&(x94&(x95*x96)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = INT16_MIN;
	volatile uint64_t x99 = 10820755831565038LLU;
	uint8_t x100 = 85U;
	volatile uint64_t t16 = 2061570465128246LLU;

	t16 = (x97&(x98&(x99*x100)));

	if (t16 != 919764245683011584LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = -1674;
	int64_t x102 = 1079650826406312LL;
	int32_t x103 = 1;
	uint64_t x104 = UINT64_MAX;
	uint64_t t17 = 1317502543489836928LLU;

	t17 = (x101&(x102&(x103*x104)));

	if (t17 != 1079650826406176LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = -1;
	volatile int8_t x106 = INT8_MAX;
	static int64_t x107 = -89411850473975LL;
	int8_t x108 = -1;
	int64_t t18 = -87416229841383LL;

	t18 = (x105&(x106&(x107*x108)));

	if (t18 != 119LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x114 = 26U;
	int64_t x115 = -8082730LL;
	static volatile int64_t t19 = 0LL;

	t19 = (x113&(x114&(x115*x116)));

	if (t19 != 10LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x117 = -1;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = -13LL;
	int64_t t20 = 1LL;

	t20 = (x117&(x118&(x119*x120)));

	if (t20 != 5LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x129 = -20;
	volatile int32_t x130 = 58909164;
	int8_t x131 = 1;
	int16_t x132 = -1;
	static volatile int32_t t21 = -1889;

	t21 = (x129&(x130&(x131*x132)));

	if (t21 != 58909164) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x134 = INT64_MIN;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = 5;
	volatile uint64_t t22 = 671522LLU;

	t22 = (x133&(x134&(x135*x136)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x137 = 428846LLU;
	uint64_t x138 = 1LLU;
	uint64_t x140 = 1329153884509LLU;
	uint64_t t23 = 85187LLU;

	t23 = (x137&(x138&(x139*x140)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = -1;
	volatile int8_t x143 = INT8_MIN;
	uint64_t t24 = 8195789275526LLU;

	t24 = (x141&(x142&(x143*x144)));

	if (t24 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x149 = 14176567U;
	volatile int8_t x150 = 0;
	uint32_t x151 = 116084858U;
	int16_t x152 = INT16_MAX;
	static uint32_t t25 = 2U;

	t25 = (x149&(x150&(x151*x152)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x153 = -218610914LL;
	uint8_t x154 = 1U;
	int8_t x155 = 0;
	volatile int64_t x156 = INT64_MIN;
	int64_t t26 = 65380836548442LL;

	t26 = (x153&(x154&(x155*x156)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x157 = 2576U;
	volatile uint16_t x158 = 3U;
	volatile int16_t x159 = -13915;
	volatile int8_t x160 = INT8_MIN;

	t27 = (x157&(x158&(x159*x160)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x161 = 0;
	volatile int64_t x162 = INT64_MAX;
	uint16_t x163 = 9U;
	static uint16_t x164 = UINT16_MAX;
	volatile int64_t t28 = 6LL;

	t28 = (x161&(x162&(x163*x164)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x173 = 0;
	uint8_t x174 = UINT8_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	uint32_t t29 = 52822U;

	t29 = (x173&(x174&(x175*x176)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x177 = 23146759962978LLU;
	static uint16_t x178 = UINT16_MAX;
	static int16_t x179 = INT16_MIN;
	static int8_t x180 = -1;
	uint64_t t30 = 10293937479926441LLU;

	t30 = (x177&(x178&(x179*x180)));

	if (t30 != 32768LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	static uint64_t x184 = UINT64_MAX;
	uint64_t t31 = 1672273996075LLU;

	t31 = (x181&(x182&(x183*x184)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x187 = UINT32_MAX;

	t32 = (x185&(x186&(x187*x188)));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x190 = INT16_MIN;
	int16_t x191 = -3;

	t33 = (x189&(x190&(x191*x192)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x197 = INT16_MAX;
	uint64_t x200 = UINT64_MAX;
	uint64_t t34 = 1831036600832LLU;

	t34 = (x197&(x198&(x199*x200)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x202 = INT16_MIN;
	volatile int8_t x203 = INT8_MIN;
	int16_t x204 = -1;

	t35 = (x201&(x202&(x203*x204)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x217 = 212598U;
	uint8_t x219 = 1U;
	static int16_t x220 = 1;
	int64_t t36 = 20804775LL;

	t36 = (x217&(x218&(x219*x220)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x222 = -24;
	uint32_t t37 = 6177U;

	t37 = (x221&(x222&(x223*x224)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x226 = INT64_MIN;
	static uint64_t x227 = UINT64_MAX;
	int16_t x228 = INT16_MIN;

	t38 = (x225&(x226&(x227*x228)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = UINT16_MAX;
	static int8_t x231 = -1;
	volatile int32_t t39 = 3;

	t39 = (x229&(x230&(x231*x232)));

	if (t39 != 65408) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x233 = INT32_MAX;
	int16_t x234 = 7;
	static int8_t x235 = -1;

	t40 = (x233&(x234&(x235*x236)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x237 = 39;
	static int8_t x238 = -1;
	volatile uint32_t x239 = UINT32_MAX;
	volatile int32_t x240 = 5391;
	uint32_t t41 = 1U;

	t41 = (x237&(x238&(x239*x240)));

	if (t41 != 33U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x241 = 81565835U;
	uint32_t x242 = UINT32_MAX;
	volatile int32_t x243 = -7431;
	uint32_t x244 = UINT32_MAX;
	uint32_t t42 = 381305554U;

	t42 = (x241&(x242&(x243*x244)));

	if (t42 != 6147U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x245 = 716848LLU;
	int32_t x246 = 1738836;
	int64_t x247 = 2079LL;
	int8_t x248 = INT8_MIN;
	volatile uint64_t t43 = 106LLU;

	t43 = (x245&(x246&(x247*x248)));

	if (t43 != 688128LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int8_t x250 = INT8_MIN;
	volatile uint16_t x252 = UINT16_MAX;
	volatile uint64_t t44 = 104919LLU;

	t44 = (x249&(x250&(x251*x252)));

	if (t44 != 2140766208LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x253 = 9160223LL;
	int16_t x254 = -1069;
	uint64_t x255 = 5405240LLU;
	static volatile uint64_t t45 = 179295262788186LLU;

	t45 = (x253&(x254&(x255*x256)));

	if (t45 != 8602112LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x257 = INT64_MAX;
	static uint16_t x258 = 14990U;
	uint32_t x259 = 776188505U;
	volatile int64_t t46 = 18536096753LL;

	t46 = (x257&(x258&(x259*x260)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x262 = -1650;
	volatile uint64_t x263 = 46994792255LLU;
	uint64_t x264 = 1670181216407368537LLU;
	uint64_t t47 = 8945LLU;

	t47 = (x261&(x262&(x263*x264)));

	if (t47 != 14531666221695658374LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x265 = 318965329LLU;
	volatile uint8_t x266 = UINT8_MAX;
	int8_t x268 = -1;
	uint64_t t48 = 49704LLU;

	t48 = (x265&(x266&(x267*x268)));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x269 = UINT16_MAX;
	int32_t x270 = INT32_MIN;
	uint16_t x271 = 7U;
	int8_t x272 = -9;
	static int32_t t49 = -222712185;

	t49 = (x269&(x270&(x271*x272)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x273 = -1;
	volatile int32_t x274 = -1;
	int8_t x276 = INT8_MIN;
	int32_t t50 = 1508;

	t50 = (x273&(x274&(x275*x276)));

	if (t50 != 4194304) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x281 = UINT64_MAX;
	int32_t x282 = 4768;
	int8_t x283 = 4;
	volatile uint64_t t51 = 52372LLU;

	t51 = (x281&(x282&(x283*x284)));

	if (t51 != 32LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x285 = 203921U;
	uint64_t x288 = UINT64_MAX;
	static uint64_t t52 = 253742497LLU;

	t52 = (x285&(x286&(x287*x288)));

	if (t52 != 203921LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x289 = 3040864LL;
	uint32_t x290 = 3U;
	int8_t x291 = 36;
	volatile int16_t x292 = -1;

	t53 = (x289&(x290&(x291*x292)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MAX;
	static volatile int8_t x296 = -5;
	static int64_t t54 = INT64_MIN;

	t54 = (x293&(x294&(x295*x296)));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int64_t x298 = 1LL;
	int32_t x299 = -1;
	static int64_t t55 = -130538LL;

	t55 = (x297&(x298&(x299*x300)));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x307 = 0;
	int32_t x308 = -291;
	volatile int32_t t56 = -13;

	t56 = (x305&(x306&(x307*x308)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x309 = INT16_MIN;
	int16_t x310 = -3638;
	int64_t x311 = 1568LL;
	int16_t x312 = INT16_MIN;

	t57 = (x309&(x310&(x311*x312)));

	if (t57 != -51380224LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x313 = 572U;
	uint64_t x314 = 9321613079LLU;
	uint8_t x315 = UINT8_MAX;
	volatile uint64_t t58 = 8929248946866496LLU;

	t58 = (x313&(x314&(x315*x316)));

	if (t58 != 512LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x317 = 7;
	int8_t x318 = INT8_MAX;
	volatile uint32_t x319 = UINT32_MAX;
	volatile int16_t x320 = INT16_MAX;

	t59 = (x317&(x318&(x319*x320)));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x322 = 24500U;
	int8_t x323 = INT8_MIN;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t60 = 2166296;

	t60 = (x321&(x322&(x323*x324)));

	if (t60 != 16384) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = 1218LL;
	int8_t x326 = INT8_MIN;
	static int64_t x327 = 7775994614149546LL;
	static uint8_t x328 = 70U;
	int64_t t61 = 199LL;

	t61 = (x325&(x326&(x327*x328)));

	if (t61 != 1024LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x329 = 9133U;
	volatile int16_t x330 = -1;
	volatile uint8_t x331 = UINT8_MAX;
	int8_t x332 = -1;
	volatile int32_t t62 = -153;

	t62 = (x329&(x330&(x331*x332)));

	if (t62 != 8961) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x334 = INT16_MAX;
	int8_t x335 = INT8_MAX;
	uint32_t x336 = UINT32_MAX;
	uint32_t t63 = 13309526U;

	t63 = (x333&(x334&(x335*x336)));

	if (t63 != 32640U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x341 = -481658690LL;
	int8_t x342 = -1;
	int16_t x344 = INT16_MIN;
	int64_t t64 = 614999494LL;

	t64 = (x341&(x342&(x343*x344)));

	if (t64 != 4194304LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x349 = 6287318415LLU;
	volatile uint8_t x350 = 6U;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -1;
	volatile uint64_t t65 = 1887754LLU;

	t65 = (x349&(x350&(x351*x352)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x355 = INT64_MIN;
	uint64_t x356 = 1823947692LLU;
	uint64_t t66 = 1252LLU;

	t66 = (x353&(x354&(x355*x356)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x357 = 69U;
	static uint64_t x358 = 21LLU;
	int16_t x360 = 105;

	t67 = (x357&(x358&(x359*x360)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x362 = INT16_MIN;
	int32_t x363 = -65646763;
	static uint32_t x364 = 4445U;

	t68 = (x361&(x362&(x363*x364)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x365 = INT64_MIN;
	static int64_t x366 = -1LL;
	int8_t x367 = INT8_MIN;
	int64_t t69 = -15306750409746253LL;

	t69 = (x365&(x366&(x367*x368)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x375 = INT8_MAX;
	static uint16_t x376 = 1940U;
	int64_t t70 = -3LL;

	t70 = (x373&(x374&(x375*x376)));

	if (t70 != 246380LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x377 = 28U;
	uint16_t x378 = 8U;
	uint64_t x379 = UINT64_MAX;
	static int16_t x380 = INT16_MIN;
	static uint64_t t71 = 292012LLU;

	t71 = (x377&(x378&(x379*x380)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x381 = 732U;
	volatile uint8_t x382 = 2U;
	volatile uint64_t t72 = 11063576756132LLU;

	t72 = (x381&(x382&(x383*x384)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x389 = 1455392U;
	volatile uint64_t x390 = 177142LLU;
	static int32_t x391 = -1;
	int32_t x392 = INT32_MAX;

	t73 = (x389&(x390&(x391*x392)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x394 = 165;
	int32_t x395 = INT32_MIN;
	volatile uint32_t t74 = 30833920U;

	t74 = (x393&(x394&(x395*x396)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x398 = INT64_MIN;
	uint32_t x399 = 651U;
	uint32_t x400 = 4428714U;
	static int64_t t75 = -39169248172471LL;

	t75 = (x397&(x398&(x399*x400)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x407 = 377602812LLU;
	static volatile uint64_t t76 = 7844449LLU;

	t76 = (x405&(x406&(x407*x408)));

	if (t76 != 18446744025376391680LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x414 = -1;
	static int32_t x416 = 0;

	t77 = (x413&(x414&(x415*x416)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x417 = INT32_MIN;
	volatile int8_t x418 = INT8_MIN;
	uint8_t x419 = UINT8_MAX;
	uint8_t x420 = UINT8_MAX;
	static int32_t t78 = -75620;

	t78 = (x417&(x418&(x419*x420)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x425 = INT16_MIN;
	int32_t x426 = INT32_MIN;
	static volatile uint8_t x427 = 0U;
	int16_t x428 = -2527;

	t79 = (x425&(x426&(x427*x428)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MIN;
	int64_t x435 = 25850004LL;
	int64_t x436 = 57563188LL;
	int64_t t80 = 3623256LL;

	t80 = (x433&(x434&(x435*x436)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	volatile int8_t x448 = 29;
	volatile int32_t t81 = 16066633;

	t81 = (x445&(x446&(x447*x448)));

	if (t81 != 2195456) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x453 = 39700U;
	int8_t x454 = 0;
	volatile uint32_t x455 = 568U;
	volatile int64_t x456 = 32025051LL;
	volatile int64_t t82 = -2101LL;

	t82 = (x453&(x454&(x455*x456)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x457 = INT32_MIN;
	int16_t x458 = 280;
	uint8_t x459 = 1U;
	int16_t x460 = INT16_MIN;
	int32_t t83 = 55354277;

	t83 = (x457&(x458&(x459*x460)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x465 = -33267274;
	int8_t x467 = -1;
	uint8_t x468 = 14U;

	t84 = (x465&(x466&(x467*x468)));

	if (t84 != -33554400) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x469 = 2U;
	volatile int32_t x470 = -1;
	static int16_t x471 = -11;
	volatile int8_t x472 = -1;
	volatile int32_t t85 = 101;

	t85 = (x469&(x470&(x471*x472)));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x473 = 59;
	volatile int64_t x474 = INT64_MAX;
	int64_t x475 = -1LL;
	volatile uint8_t x476 = 95U;
	int64_t t86 = 107237LL;

	t86 = (x473&(x474&(x475*x476)));

	if (t86 != 33LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x477 = UINT8_MAX;
	static int16_t x478 = 4;
	uint16_t x479 = 0U;
	int64_t x480 = INT64_MIN;
	volatile int64_t t87 = 30311544269523701LL;

	t87 = (x477&(x478&(x479*x480)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x481 = 1U;
	uint8_t x482 = 105U;
	int8_t x483 = INT8_MIN;
	static uint32_t x484 = 5852U;
	volatile uint32_t t88 = 215356U;

	t88 = (x481&(x482&(x483*x484)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x489 = INT16_MAX;
	int64_t x490 = INT64_MIN;
	uint64_t x491 = UINT64_MAX;
	volatile int8_t x492 = -1;
	static volatile uint64_t t89 = 3973877931024LLU;

	t89 = (x489&(x490&(x491*x492)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x493 = 232;
	uint64_t x495 = UINT64_MAX;
	static volatile uint64_t t90 = 95968LLU;

	t90 = (x493&(x494&(x495*x496)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x497 = 1978327U;
	static uint16_t x498 = 34U;
	volatile uint64_t t91 = 1268621328610242489LLU;

	t91 = (x497&(x498&(x499*x500)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x501 = 448735U;
	int8_t x504 = INT8_MIN;
	uint64_t t92 = 269343015401472105LLU;

	t92 = (x501&(x502&(x503*x504)));

	if (t92 != 128LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x505 = 2347U;
	int32_t x507 = 1;
	volatile int16_t x508 = INT16_MAX;
	uint32_t t93 = 497U;

	t93 = (x505&(x506&(x507*x508)));

	if (t93 != 9U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x513 = 1U;
	int16_t x515 = -710;
	static int8_t x516 = INT8_MIN;
	int32_t t94 = 52050089;

	t94 = (x513&(x514&(x515*x516)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x517 = 234U;
	int32_t x518 = INT32_MIN;
	static int32_t x519 = -1;
	int16_t x520 = -1;
	uint32_t t95 = 756418460U;

	t95 = (x517&(x518&(x519*x520)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x525 = INT8_MAX;
	uint8_t x526 = 14U;
	uint64_t x527 = 2999257939391498LLU;
	static volatile int32_t x528 = INT32_MAX;
	static volatile uint64_t t96 = 133LLU;

	t96 = (x525&(x526&(x527*x528)));

	if (t96 != 6LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x533 = 2LLU;
	static uint64_t x534 = 241379002LLU;
	uint64_t t97 = 17297526147415LLU;

	t97 = (x533&(x534&(x535*x536)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x538 = INT32_MIN;
	uint32_t x540 = 38U;
	int64_t t98 = -862861234408LL;

	t98 = (x537&(x538&(x539*x540)));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x541 = INT64_MIN;
	uint64_t x542 = UINT64_MAX;
	uint16_t x543 = 59U;

	t99 = (x541&(x542&(x543*x544)));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

