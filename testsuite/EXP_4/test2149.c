#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int8_t x2 = INT8_MIN;
int32_t x4 = -1;
volatile int32_t t0 = INT32_MAX;
uint8_t x17 = 2U;
int8_t x25 = INT8_MIN;
static int8_t x28 = INT8_MAX;
volatile int32_t t4 = -97910;
int64_t x79 = 613453248905LL;
int32_t t8 = -1;
int16_t x98 = 1622;
int64_t x108 = -1489660805808430LL;
static int32_t x117 = INT32_MIN;
int32_t t12 = INT32_MIN;
int64_t x130 = -1LL;
uint8_t x139 = 0U;
volatile uint64_t x141 = 16924472LLU;
int64_t x143 = INT64_MIN;
int32_t t17 = -51959;
int8_t x149 = -1;
uint8_t x153 = 2U;
int32_t t19 = -59;
static uint64_t x162 = 3LLU;
int64_t x164 = INT64_MIN;
static int32_t t21 = -117;
volatile int16_t x189 = 90;
volatile int32_t x200 = -61390;
uint32_t x225 = UINT32_MAX;
int64_t x226 = INT64_MIN;
int32_t t27 = -1;
int64_t x245 = INT64_MIN;
int32_t x250 = INT32_MIN;
static volatile uint32_t t30 = 36732832U;
int16_t x270 = INT16_MIN;
volatile uint32_t x271 = UINT32_MAX;
static int16_t x272 = 3;
static volatile int8_t x286 = -55;
int32_t x288 = -1;
volatile int32_t t34 = INT32_MIN;
uint8_t x293 = 1U;
volatile int32_t t35 = -71819;
int8_t x321 = INT8_MIN;
volatile int16_t x335 = -8417;
int16_t x345 = INT16_MIN;
int64_t x354 = 10390513LL;
uint8_t x366 = 37U;
uint16_t x368 = 1196U;
static uint16_t x382 = 3739U;
uint64_t x384 = UINT64_MAX;
uint32_t t47 = UINT32_MAX;
volatile int16_t x398 = -1;
volatile int16_t x402 = INT16_MAX;
int64_t x403 = INT64_MIN;
volatile int32_t t51 = 225813;
int8_t x421 = INT8_MAX;
uint8_t x422 = 0U;
uint64_t x436 = 206117204998475LLU;
int64_t x450 = -1LL;
int32_t t55 = 43;
static int64_t x500 = -441LL;
int32_t x505 = -1;
static int16_t x507 = INT16_MIN;
volatile int16_t x508 = 15;
static volatile int16_t x523 = INT16_MAX;
static uint16_t x526 = UINT16_MAX;
int32_t x527 = 96068;
volatile uint64_t x528 = 95348399672LLU;
volatile int32_t t63 = -3631;
int32_t x552 = 914;
volatile int32_t t68 = INT32_MIN;
int32_t t69 = 2;
volatile uint16_t x580 = 859U;
volatile int32_t t71 = -36370;
int8_t x598 = -2;
static int32_t t73 = 4;
volatile int32_t t74 = INT32_MAX;
static int16_t x607 = -1;
int64_t t75 = -52LL;
int8_t x613 = 2;
uint8_t x623 = 1U;
static int32_t t77 = INT32_MAX;
int8_t x627 = -1;
uint64_t x642 = 264LLU;
static int16_t x643 = -1;
uint8_t x658 = 2U;
volatile int8_t x660 = -5;
int8_t x665 = INT8_MIN;
uint32_t x666 = 1146403539U;
static uint8_t x675 = 0U;
int16_t x694 = INT16_MIN;
static volatile int32_t x706 = -593;
int8_t x721 = INT8_MIN;
int16_t x723 = INT16_MIN;
volatile int32_t t88 = 920;
int32_t x735 = INT32_MIN;
int64_t x736 = -473LL;
volatile uint32_t t91 = 8396U;


void f0(void) {
	int8_t x3 = -1;

	t0 = (x1/(x2<=(x3^x4)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x18 = 6619;
	static int8_t x19 = 30;
	static uint32_t x20 = 81805U;
	int32_t t1 = -761;

	t1 = (x17/(x18<=(x19^x20)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x26 = INT8_MAX;
	int64_t x27 = INT64_MAX;
	static volatile int32_t t2 = 258;

	t2 = (x25/(x26<=(x27^x28)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MIN;
	int32_t x35 = -1;
	int16_t x36 = 0;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x33/(x34<=(x35^x36)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x53 = -1;
	uint16_t x54 = 53U;
	uint64_t x55 = 1154LLU;
	static volatile uint8_t x56 = 7U;

	t4 = (x53/(x54<=(x55^x56)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x65 = 596489419U;
	static int64_t x66 = INT64_MIN;
	volatile uint8_t x67 = 1U;
	int32_t x68 = INT32_MIN;
	uint32_t t5 = 25U;

	t5 = (x65/(x66<=(x67^x68)));

	if (t5 != 596489419U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x69 = 26U;
	static uint16_t x70 = 13U;
	volatile uint16_t x71 = 33U;
	static int64_t x72 = 186261411723LL;
	static volatile int32_t t6 = -1;

	t6 = (x69/(x70<=(x71^x72)));

	if (t6 != 26) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x77 = 3;
	static int16_t x78 = -1;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t7 = -5394;

	t7 = (x77/(x78<=(x79^x80)));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x85 = INT8_MIN;
	uint32_t x86 = 6U;
	static uint32_t x87 = UINT32_MAX;
	int16_t x88 = INT16_MIN;

	t8 = (x85/(x86<=(x87^x88)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x97 = -506;
	uint16_t x99 = 44U;
	uint64_t x100 = 152764526119803871LLU;
	static volatile int32_t t9 = 31174;

	t9 = (x97/(x98<=(x99^x100)));

	if (t9 != -506) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x101 = INT32_MIN;
	uint32_t x102 = 1U;
	static int8_t x103 = 3;
	int8_t x104 = 0;
	int32_t t10 = INT32_MIN;

	t10 = (x101/(x102<=(x103^x104)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x105 = 19U;
	int32_t x106 = -1;
	int8_t x107 = -1;
	volatile uint32_t t11 = 1206568U;

	t11 = (x105/(x106<=(x107^x108)));

	if (t11 != 19U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x118 = 19U;
	int64_t x119 = INT64_MAX;
	int32_t x120 = 316;

	t12 = (x117/(x118<=(x119^x120)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x129 = INT64_MIN;
	uint16_t x131 = 24U;
	int32_t x132 = 116666117;
	int64_t t13 = INT64_MIN;

	t13 = (x129/(x130<=(x131^x132)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x134 = -9105;
	int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MIN;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x133/(x134<=(x135^x136)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x137 = INT64_MAX;
	static int32_t x138 = INT32_MIN;
	static volatile int64_t x140 = 43420607055566LL;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x137/(x138<=(x139^x140)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x142 = 1;
	volatile int8_t x144 = -1;
	uint64_t t16 = 1035601037707741152LLU;

	t16 = (x141/(x142<=(x143^x144)));

	if (t16 != 16924472LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x145 = -1158;
	int64_t x146 = INT64_MIN;
	static int32_t x147 = 687966735;
	int32_t x148 = INT32_MIN;

	t17 = (x145/(x146<=(x147^x148)));

	if (t17 != -1158) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x150 = 3001U;
	int16_t x151 = -1;
	static int16_t x152 = INT16_MIN;
	int32_t t18 = -11875277;

	t18 = (x149/(x150<=(x151^x152)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x154 = UINT32_MAX;
	int64_t x155 = -1605045434419LL;
	static int16_t x156 = INT16_MIN;

	t19 = (x153/(x154<=(x155^x156)));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x161 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x161/(x162<=(x163^x164)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x177 = -1;
	int32_t x178 = INT32_MAX;
	uint32_t x179 = 50018769U;
	int8_t x180 = -1;

	t21 = (x177/(x178<=(x179^x180)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x185 = 2358U;
	static volatile int64_t x186 = INT64_MIN;
	volatile int32_t x187 = INT32_MIN;
	uint8_t x188 = 7U;
	volatile int32_t t22 = 7979;

	t22 = (x185/(x186<=(x187^x188)));

	if (t22 != 2358) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x190 = 2;
	static int32_t x191 = INT32_MIN;
	uint32_t x192 = 7290U;
	int32_t t23 = -1948068;

	t23 = (x189/(x190<=(x191^x192)));

	if (t23 != 90) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x197 = INT32_MIN;
	int16_t x198 = 7;
	int16_t x199 = INT16_MIN;
	volatile int32_t t24 = INT32_MIN;

	t24 = (x197/(x198<=(x199^x200)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	static int16_t x219 = -1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t25 = -1;

	t25 = (x217/(x218<=(x219^x220)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x227 = 3965U;
	static volatile uint32_t x228 = UINT32_MAX;
	uint32_t t26 = UINT32_MAX;

	t26 = (x225/(x226<=(x227^x228)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x229 = 2U;
	int64_t x230 = -4240957056189655LL;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t x232 = INT32_MAX;

	t27 = (x229/(x230<=(x231^x232)));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x246 = 6;
	uint8_t x247 = UINT8_MAX;
	static int32_t x248 = INT32_MAX;
	int64_t t28 = INT64_MIN;

	t28 = (x245/(x246<=(x247^x248)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x249 = 21073U;
	static int64_t x251 = -1LL;
	uint8_t x252 = 1U;
	volatile uint32_t t29 = 482977121U;

	t29 = (x249/(x250<=(x251^x252)));

	if (t29 != 21073U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x257 = 90U;
	uint64_t x258 = 6178408764524185LLU;
	static int64_t x259 = INT64_MAX;
	static uint8_t x260 = UINT8_MAX;

	t30 = (x257/(x258<=(x259^x260)));

	if (t30 != 90U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x265 = -1;
	int16_t x266 = INT16_MIN;
	uint8_t x267 = 64U;
	volatile uint16_t x268 = 208U;
	int32_t t31 = -76;

	t31 = (x265/(x266<=(x267^x268)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x269 = INT32_MIN;
	int32_t t32 = INT32_MIN;

	t32 = (x269/(x270<=(x271^x272)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = 4958905LL;
	int8_t x275 = INT8_MIN;
	volatile uint32_t x276 = 6U;
	int32_t t33 = -1333;

	t33 = (x273/(x274<=(x275^x276)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x285 = INT32_MIN;
	int8_t x287 = INT8_MIN;

	t34 = (x285/(x286<=(x287^x288)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x294 = 845LL;
	int8_t x295 = INT8_MAX;
	uint64_t x296 = 23110373818503603LLU;

	t35 = (x293/(x294<=(x295^x296)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x301 = 0;
	int64_t x302 = INT64_MIN;
	int32_t x303 = -1;
	int64_t x304 = -64357806183835721LL;
	volatile int32_t t36 = -105;

	t36 = (x301/(x302<=(x303^x304)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int16_t x310 = INT16_MIN;
	static uint8_t x311 = UINT8_MAX;
	static uint8_t x312 = 15U;
	static int32_t t37 = 61557;

	t37 = (x309/(x310<=(x311^x312)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x317 = 1U;
	int8_t x318 = -25;
	int8_t x319 = 1;
	int16_t x320 = INT16_MAX;
	int32_t t38 = 9336;

	t38 = (x317/(x318<=(x319^x320)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x322 = 4608;
	int64_t x323 = INT64_MAX;
	uint32_t x324 = 15127U;
	volatile int32_t t39 = -1026700;

	t39 = (x321/(x322<=(x323^x324)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x333 = INT8_MIN;
	int32_t x334 = -4493888;
	uint16_t x336 = 12U;
	int32_t t40 = -1966726;

	t40 = (x333/(x334<=(x335^x336)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x346 = INT64_MIN;
	static int32_t x347 = INT32_MIN;
	int64_t x348 = 410946949840980LL;
	static volatile int32_t t41 = -33640;

	t41 = (x345/(x346<=(x347^x348)));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x353 = INT32_MIN;
	static int16_t x355 = INT16_MIN;
	volatile int64_t x356 = -235961625904933989LL;
	int32_t t42 = INT32_MIN;

	t42 = (x353/(x354<=(x355^x356)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	static int16_t x363 = INT16_MAX;
	volatile int16_t x364 = -1;
	int32_t t43 = 3;

	t43 = (x361/(x362<=(x363^x364)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x365 = 103363112LLU;
	static int32_t x367 = INT32_MAX;
	static uint64_t t44 = 110592088366LLU;

	t44 = (x365/(x366<=(x367^x368)));

	if (t44 != 103363112LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x369 = UINT8_MAX;
	static uint64_t x370 = 45LLU;
	volatile uint8_t x371 = 29U;
	int16_t x372 = 5926;
	static volatile int32_t t45 = -1;

	t45 = (x369/(x370<=(x371^x372)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x377 = INT64_MIN;
	volatile int32_t x378 = 103864;
	static int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MIN;
	int64_t t46 = INT64_MIN;

	t46 = (x377/(x378<=(x379^x380)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x381 = UINT32_MAX;
	int16_t x383 = INT16_MIN;

	t47 = (x381/(x382<=(x383^x384)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x389 = UINT16_MAX;
	int64_t x390 = INT64_MIN;
	static int16_t x391 = INT16_MAX;
	int64_t x392 = INT64_MAX;
	static volatile int32_t t48 = -2;

	t48 = (x389/(x390<=(x391^x392)));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x393 = 276221206882140454LLU;
	int64_t x394 = -29012LL;
	uint32_t x395 = 31U;
	volatile uint32_t x396 = UINT32_MAX;
	volatile uint64_t t49 = 140838LLU;

	t49 = (x393/(x394<=(x395^x396)));

	if (t49 != 276221206882140454LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int64_t x399 = -1LL;
	static int32_t x400 = -1;
	int32_t t50 = -4164;

	t50 = (x397/(x398<=(x399^x400)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x401 = UINT16_MAX;
	int16_t x404 = INT16_MIN;

	t51 = (x401/(x402<=(x403^x404)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x413 = INT16_MIN;
	static int16_t x414 = INT16_MIN;
	static uint64_t x415 = UINT64_MAX;
	volatile uint16_t x416 = 143U;
	static int32_t t52 = -3;

	t52 = (x413/(x414<=(x415^x416)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x423 = INT8_MAX;
	uint64_t x424 = 458315590904194906LLU;
	volatile int32_t t53 = 312910523;

	t53 = (x421/(x422<=(x423^x424)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x433 = UINT64_MAX;
	static volatile int64_t x434 = 355LL;
	int8_t x435 = 5;
	uint64_t t54 = UINT64_MAX;

	t54 = (x433/(x434<=(x435^x436)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x449 = 63U;
	int16_t x451 = -1;
	uint32_t x452 = UINT32_MAX;

	t55 = (x449/(x450<=(x451^x452)));

	if (t55 != 63) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x461 = 2;
	volatile int64_t x462 = INT64_MIN;
	static int16_t x463 = -1;
	volatile uint16_t x464 = UINT16_MAX;
	volatile int32_t t56 = 30550;

	t56 = (x461/(x462<=(x463^x464)));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x465 = 4U;
	uint32_t x466 = UINT32_MAX;
	volatile int32_t x467 = 22;
	int64_t x468 = INT64_MAX;
	volatile int32_t t57 = -783;

	t57 = (x465/(x466<=(x467^x468)));

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x497 = 14U;
	volatile int64_t x498 = -749199848554270LL;
	static int16_t x499 = INT16_MIN;
	volatile int32_t t58 = -76782385;

	t58 = (x497/(x498<=(x499^x500)));

	if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x501 = INT64_MIN;
	volatile int64_t x502 = INT64_MIN;
	uint16_t x503 = 6U;
	static int8_t x504 = INT8_MIN;
	volatile int64_t t59 = INT64_MIN;

	t59 = (x501/(x502<=(x503^x504)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x506 = -21370528;
	volatile int32_t t60 = -646337;

	t60 = (x505/(x506<=(x507^x508)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x521 = INT16_MIN;
	uint16_t x522 = 30U;
	volatile int16_t x524 = 245;
	int32_t t61 = -227;

	t61 = (x521/(x522<=(x523^x524)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x525 = 12196;
	int32_t t62 = 10569;

	t62 = (x525/(x526<=(x527^x528)));

	if (t62 != 12196) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x533 = 5;
	uint8_t x534 = 0U;
	volatile int16_t x535 = -2939;
	int32_t x536 = INT32_MIN;

	t63 = (x533/(x534<=(x535^x536)));

	if (t63 != 5) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x537 = 3202371U;
	uint64_t x538 = 1583LLU;
	int16_t x539 = INT16_MIN;
	volatile uint64_t x540 = 62816577552LLU;
	uint32_t t64 = 1636U;

	t64 = (x537/(x538<=(x539^x540)));

	if (t64 != 3202371U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x541 = 94772941;
	uint64_t x542 = 940827878500LLU;
	volatile int8_t x543 = INT8_MIN;
	static uint8_t x544 = UINT8_MAX;
	int32_t t65 = -42861071;

	t65 = (x541/(x542<=(x543^x544)));

	if (t65 != 94772941) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x545 = -9714;
	static volatile int8_t x546 = INT8_MIN;
	volatile int64_t x547 = INT64_MAX;
	uint8_t x548 = 60U;
	volatile int32_t t66 = 30894;

	t66 = (x545/(x546<=(x547^x548)));

	if (t66 != -9714) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x549 = INT64_MIN;
	uint16_t x550 = 32524U;
	volatile uint32_t x551 = 133724511U;
	int64_t t67 = INT64_MIN;

	t67 = (x549/(x550<=(x551^x552)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x561 = INT32_MIN;
	uint32_t x562 = 6U;
	int32_t x563 = -1;
	int16_t x564 = INT16_MAX;

	t68 = (x561/(x562<=(x563^x564)));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x573 = INT16_MIN;
	static int64_t x574 = INT64_MIN;
	int16_t x575 = -1;
	int16_t x576 = INT16_MAX;

	t69 = (x573/(x574<=(x575^x576)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x577 = -51;
	int64_t x578 = -1LL;
	uint8_t x579 = UINT8_MAX;
	int32_t t70 = 989407;

	t70 = (x577/(x578<=(x579^x580)));

	if (t70 != -51) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x581 = -1;
	uint16_t x582 = 27844U;
	int32_t x583 = 59273327;
	static uint32_t x584 = UINT32_MAX;

	t71 = (x581/(x582<=(x583^x584)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x585 = INT32_MAX;
	uint16_t x586 = 508U;
	uint16_t x587 = UINT16_MAX;
	uint64_t x588 = 6869979523LLU;
	volatile int32_t t72 = INT32_MAX;

	t72 = (x585/(x586<=(x587^x588)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x597 = -1;
	int16_t x599 = INT16_MAX;
	int32_t x600 = INT32_MAX;

	t73 = (x597/(x598<=(x599^x600)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x601 = INT32_MAX;
	static uint16_t x602 = UINT16_MAX;
	static int32_t x603 = -1;
	static int64_t x604 = -10132274179146LL;

	t74 = (x601/(x602<=(x603^x604)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x605 = 44513496921LL;
	int32_t x606 = -1;
	static int32_t x608 = INT32_MIN;

	t75 = (x605/(x606<=(x607^x608)));

	if (t75 != 44513496921LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x614 = -5279;
	static int64_t x615 = -1LL;
	uint32_t x616 = 14U;
	volatile int32_t t76 = -3285041;

	t76 = (x613/(x614<=(x615^x616)));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x621 = INT32_MAX;
	int64_t x622 = -270334651484836LL;
	volatile int16_t x624 = -14;

	t77 = (x621/(x622<=(x623^x624)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x625 = 10449LL;
	int16_t x626 = 0;
	int16_t x628 = -66;
	static volatile int64_t t78 = 7600905LL;

	t78 = (x625/(x626<=(x627^x628)));

	if (t78 != 10449LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x637 = 772LL;
	int16_t x638 = INT16_MIN;
	int8_t x639 = INT8_MIN;
	int64_t x640 = INT64_MIN;
	int64_t t79 = 309037221LL;

	t79 = (x637/(x638<=(x639^x640)));

	if (t79 != 772LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x641 = -1;
	int32_t x644 = 15594410;
	int32_t t80 = 23323158;

	t80 = (x641/(x642<=(x643^x644)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x657 = UINT8_MAX;
	int16_t x659 = INT16_MIN;
	volatile int32_t t81 = 14;

	t81 = (x657/(x658<=(x659^x660)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x667 = 64686711078602LLU;
	int8_t x668 = INT8_MAX;
	int32_t t82 = -75258396;

	t82 = (x665/(x666<=(x667^x668)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x673 = -1;
	uint64_t x674 = 781122551LLU;
	uint64_t x676 = 112675201245LLU;
	int32_t t83 = -1;

	t83 = (x673/(x674<=(x675^x676)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x693 = 509712750LLU;
	int16_t x695 = -1;
	static int8_t x696 = INT8_MIN;
	volatile uint64_t t84 = 5441344097003879133LLU;

	t84 = (x693/(x694<=(x695^x696)));

	if (t84 != 509712750LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x705 = 98U;
	static int64_t x707 = INT64_MIN;
	int64_t x708 = INT64_MIN;
	static int32_t t85 = -3791;

	t85 = (x705/(x706<=(x707^x708)));

	if (t85 != 98) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x709 = INT32_MAX;
	int8_t x710 = -1;
	int16_t x711 = INT16_MIN;
	int8_t x712 = INT8_MIN;
	volatile int32_t t86 = INT32_MAX;

	t86 = (x709/(x710<=(x711^x712)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x717 = 1912401215467LL;
	int64_t x718 = 915874662084580586LL;
	volatile uint64_t x719 = 4810619507763736398LLU;
	static uint32_t x720 = 3U;
	static int64_t t87 = 188024819180389617LL;

	t87 = (x717/(x718<=(x719^x720)));

	if (t87 != 1912401215467LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x722 = INT16_MAX;
	static int64_t x724 = INT64_MIN;

	t88 = (x721/(x722<=(x723^x724)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x725 = INT16_MIN;
	int32_t x726 = INT32_MIN;
	int32_t x727 = INT32_MIN;
	volatile int64_t x728 = -1LL;
	static int32_t t89 = 5118;

	t89 = (x725/(x726<=(x727^x728)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x729 = 912740LLU;
	volatile int32_t x730 = INT32_MIN;
	int32_t x731 = INT32_MIN;
	uint8_t x732 = 0U;
	static volatile uint64_t t90 = 1385LLU;

	t90 = (x729/(x730<=(x731^x732)));

	if (t90 != 912740LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x733 = 219U;
	int16_t x734 = INT16_MIN;

	t91 = (x733/(x734<=(x735^x736)));

	if (t91 != 219U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x749 = INT16_MAX;
	static int16_t x750 = INT16_MIN;
	int16_t x751 = INT16_MIN;
	uint8_t x752 = 11U;
	static volatile int32_t t92 = 4;

	t92 = (x749/(x750<=(x751^x752)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x761 = 1U;
	static uint16_t x762 = 18U;
	static int8_t x763 = INT8_MIN;
	volatile int32_t x764 = INT32_MIN;
	static volatile uint32_t t93 = 28750U;

	t93 = (x761/(x762<=(x763^x764)));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x773 = INT64_MAX;
	volatile uint32_t x774 = 8U;
	uint8_t x775 = 0U;
	int64_t x776 = INT64_MAX;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x773/(x774<=(x775^x776)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x781 = 18U;
	uint64_t x782 = 22414808739LLU;
	int8_t x783 = INT8_MAX;
	int32_t x784 = INT32_MIN;
	static volatile int32_t t95 = -402747274;

	t95 = (x781/(x782<=(x783^x784)));

	if (t95 != 18) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x789 = -1LL;
	static int64_t x790 = -1LL;
	static volatile int32_t x791 = -1;
	int64_t x792 = -1LL;
	int64_t t96 = 79385LL;

	t96 = (x789/(x790<=(x791^x792)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x797 = -1;
	uint32_t x798 = UINT32_MAX;
	static volatile int16_t x799 = INT16_MAX;
	int64_t x800 = INT64_MAX;
	static int32_t t97 = 1;

	t97 = (x797/(x798<=(x799^x800)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x805 = -1;
	static volatile int32_t x806 = INT32_MIN;
	int32_t x807 = INT32_MIN;
	static int8_t x808 = INT8_MIN;
	int32_t t98 = -770;

	t98 = (x805/(x806<=(x807^x808)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x817 = INT16_MIN;
	int8_t x818 = INT8_MIN;
	uint16_t x819 = UINT16_MAX;
	static int8_t x820 = INT8_MAX;
	int32_t t99 = -18;

	t99 = (x817/(x818<=(x819^x820)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

