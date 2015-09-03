#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile uint16_t x33 = 123U;
int8_t x35 = 1;
int32_t x52 = INT32_MAX;
uint32_t x65 = 11U;
int64_t x78 = 4958LL;
volatile uint64_t t8 = 456LLU;
volatile int16_t x86 = INT16_MAX;
int64_t t10 = 1921739788012LL;
static uint64_t x117 = UINT64_MAX;
static volatile int32_t x123 = INT32_MIN;
int32_t t13 = -743927;
int16_t x130 = -1;
int32_t x131 = INT32_MIN;
int64_t x161 = -1LL;
uint8_t x164 = 13U;
int32_t t20 = -41192704;
int64_t t21 = -1951152144088LL;
volatile uint64_t t23 = 2126LLU;
volatile uint32_t x223 = 15339U;
int64_t t26 = -863715LL;
uint16_t x236 = UINT16_MAX;
int16_t x237 = INT16_MIN;
static int16_t x239 = INT16_MIN;
static volatile int8_t x241 = -1;
volatile int8_t x245 = INT8_MIN;
int64_t x247 = -2781584686LL;
volatile int32_t t30 = 30254;
int64_t t32 = -223620133LL;
int32_t x284 = INT32_MAX;
uint64_t x308 = 274593539396526LLU;
int16_t x315 = INT16_MIN;
int64_t x327 = -1LL;
static int32_t t38 = 27;
int64_t x337 = INT64_MIN;
int64_t x349 = -2120923LL;
int8_t x350 = INT8_MIN;
int64_t x351 = -54455512969286258LL;
int8_t x353 = INT8_MIN;
int16_t x354 = INT16_MAX;
volatile int32_t t43 = -2;
uint64_t x376 = UINT64_MAX;
uint64_t x394 = 1010392925259552LLU;
static int64_t x407 = INT64_MIN;
uint32_t x408 = UINT32_MAX;
volatile uint16_t x416 = UINT16_MAX;
uint64_t t47 = 29372604LLU;
volatile int32_t t48 = -50688530;
int32_t x421 = -14636830;
int32_t x424 = INT32_MIN;
int64_t x447 = INT64_MIN;
static uint64_t x450 = UINT64_MAX;
int8_t x457 = INT8_MIN;
volatile int32_t t52 = 250668;
int32_t t53 = -114461138;
int64_t x512 = INT64_MAX;
volatile uint64_t t58 = 149085894425LLU;
volatile int16_t x527 = INT16_MIN;
int64_t t59 = 12LL;
int16_t x540 = -1;
int32_t t61 = 404;
static volatile uint32_t x546 = 974715047U;
int64_t x550 = 57513392LL;
int64_t x552 = 6LL;
static volatile int16_t x583 = 2144;
int32_t x585 = 4;
uint16_t x614 = 72U;
int32_t t70 = 7716;
uint64_t x628 = UINT64_MAX;
static int16_t x639 = INT16_MIN;
static int8_t x640 = INT8_MIN;
int64_t x644 = INT64_MAX;
volatile uint8_t x655 = 117U;
int16_t x665 = -1;
int16_t x669 = INT16_MIN;
uint64_t x672 = 69822102631080081LLU;
uint16_t x681 = 251U;
int32_t x683 = -572369515;
volatile int16_t x684 = 12773;
static int16_t x687 = INT16_MIN;
int16_t x690 = -185;
static volatile uint8_t x703 = UINT8_MAX;
uint32_t x704 = UINT32_MAX;
int8_t x708 = INT8_MIN;
int16_t x732 = -1;
int16_t x765 = INT16_MIN;
static uint64_t x766 = 16LLU;
int32_t x768 = -1;
int16_t x777 = -1;
volatile int8_t x793 = INT8_MIN;
volatile int32_t t90 = -13;
int8_t x816 = INT8_MAX;
static volatile uint32_t t91 = 243818010U;
volatile int64_t t93 = -2156911589516LL;
int16_t x919 = 0;
volatile uint8_t x929 = 0U;
int16_t x930 = 1883;
int8_t x962 = INT8_MIN;


void f0(void) {
	uint32_t x1 = 147127364U;
	uint16_t x2 = 23U;
	static int16_t x4 = -860;
	volatile uint32_t t0 = 60849U;

	t0 = ((x1/x2)%(x3<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -296344;
	int8_t x10 = -1;
	uint64_t x11 = 19738885LLU;
	static int64_t x12 = INT64_MAX;
	volatile int32_t t1 = -46;

	t1 = ((x9/x10)%(x11<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x29 = 94866;
	static volatile uint8_t x30 = 8U;
	uint8_t x31 = 1U;
	int8_t x32 = 20;
	static int32_t t2 = -30131930;

	t2 = ((x29/x30)%(x31<x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x34 = INT8_MAX;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t3 = -6457114;

	t3 = ((x33/x34)%(x35<x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x45 = INT16_MIN;
	uint32_t x46 = 7329U;
	int16_t x47 = INT16_MAX;
	uint64_t x48 = UINT64_MAX;
	volatile uint32_t t4 = 66U;

	t4 = ((x45/x46)%(x47<x48));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x49 = -1;
	volatile int64_t x50 = -1424350765622744LL;
	static int64_t x51 = -705652730LL;
	volatile int64_t t5 = -2334656393603400LL;

	t5 = ((x49/x50)%(x51<x52));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x61 = 88490LLU;
	volatile uint8_t x62 = 1U;
	static volatile int32_t x63 = INT32_MIN;
	int64_t x64 = 3689430457431911LL;
	static uint64_t t6 = 466632552274759281LLU;

	t6 = ((x61/x62)%(x63<x64));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x66 = UINT32_MAX;
	int64_t x67 = -3LL;
	volatile int8_t x68 = -1;
	volatile uint32_t t7 = 38U;

	t7 = ((x65/x66)%(x67<x68));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x77 = UINT64_MAX;
	volatile int64_t x79 = INT64_MIN;
	uint32_t x80 = 255306286U;

	t8 = ((x77/x78)%(x79<x80));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x85 = 15;
	volatile int64_t x87 = INT64_MIN;
	int32_t x88 = -127110;
	static int32_t t9 = -40833836;

	t9 = ((x85/x86)%(x87<x88));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = 1;
	int16_t x92 = 90;

	t10 = ((x89/x90)%(x91<x92));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MIN;
	int8_t x103 = -24;
	volatile int8_t x104 = INT8_MAX;
	volatile int64_t t11 = 10014778080105LL;

	t11 = ((x101/x102)%(x103<x104));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 6U;
	volatile int64_t x120 = 3470620LL;
	volatile uint64_t t12 = 257897LLU;

	t12 = ((x117/x118)%(x119<x120));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x121 = -1;
	int8_t x122 = INT8_MAX;
	int32_t x124 = INT32_MAX;

	t13 = ((x121/x122)%(x123<x124));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x129 = INT32_MAX;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t14 = 93358715;

	t14 = ((x129/x130)%(x131<x132));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x137 = INT64_MIN;
	static int32_t x138 = INT32_MIN;
	int64_t x139 = 0LL;
	int32_t x140 = 29185;
	int64_t t15 = 28742290LL;

	t15 = ((x137/x138)%(x139<x140));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x153 = UINT16_MAX;
	uint64_t x154 = 1024539476772646429LLU;
	uint32_t x155 = UINT32_MAX;
	static uint64_t x156 = 5463581663774215352LLU;
	static uint64_t t16 = 52345957941405579LLU;

	t16 = ((x153/x154)%(x155<x156));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x157 = 1;
	static int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MAX;
	int32_t t17 = 690791921;

	t17 = ((x157/x158)%(x159<x160));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x162 = INT8_MAX;
	int16_t x163 = -1;
	volatile int64_t t18 = 707445LL;

	t18 = ((x161/x162)%(x163<x164));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x170 = 1;
	int16_t x171 = INT16_MIN;
	int64_t x172 = -1LL;
	volatile int32_t t19 = -1669;

	t19 = ((x169/x170)%(x171<x172));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x173 = UINT8_MAX;
	volatile int32_t x174 = INT32_MAX;
	int64_t x175 = -48446949LL;
	static uint32_t x176 = UINT32_MAX;

	t20 = ((x173/x174)%(x175<x176));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x177 = -1LL;
	int64_t x178 = 5098682269877LL;
	int32_t x179 = -1;
	volatile int8_t x180 = INT8_MAX;

	t21 = ((x177/x178)%(x179<x180));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x185 = INT32_MAX;
	uint8_t x186 = 100U;
	volatile int32_t x187 = -420091;
	int8_t x188 = 34;
	volatile int32_t t22 = 30548642;

	t22 = ((x185/x186)%(x187<x188));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x201 = -68295;
	uint64_t x202 = UINT64_MAX;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MAX;

	t23 = ((x201/x202)%(x203<x204));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x205 = 21;
	static int16_t x206 = 4;
	static volatile int32_t x207 = -1;
	volatile uint8_t x208 = 3U;
	int32_t t24 = 31403;

	t24 = ((x205/x206)%(x207<x208));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x221 = 7U;
	int32_t x222 = INT32_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t25 = 4086;

	t25 = ((x221/x222)%(x223<x224));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = 531693113;
	volatile int32_t x227 = 75012090;
	volatile int64_t x228 = INT64_MAX;

	t26 = ((x225/x226)%(x227<x228));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x233 = INT8_MAX;
	volatile int8_t x234 = INT8_MIN;
	uint8_t x235 = 47U;
	int32_t t27 = 7;

	t27 = ((x233/x234)%(x235<x236));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x238 = INT16_MIN;
	int16_t x240 = -3;
	static int32_t t28 = 13;

	t28 = ((x237/x238)%(x239<x240));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x242 = 151152955090888LLU;
	static int16_t x243 = -1;
	int16_t x244 = 13626;
	uint64_t t29 = 988152089LLU;

	t29 = ((x241/x242)%(x243<x244));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x246 = INT32_MIN;
	int8_t x248 = -1;

	t30 = ((x245/x246)%(x247<x248));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x249 = 24979002757LLU;
	uint32_t x250 = 11993U;
	static int32_t x251 = INT32_MIN;
	volatile int8_t x252 = -1;
	volatile uint64_t t31 = 11519538048820LLU;

	t31 = ((x249/x250)%(x251<x252));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x265 = 19;
	int64_t x266 = 309155571870007989LL;
	int8_t x267 = 1;
	int32_t x268 = 198857766;

	t32 = ((x265/x266)%(x267<x268));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x281 = 14U;
	int16_t x282 = INT16_MAX;
	uint16_t x283 = UINT16_MAX;
	volatile int32_t t33 = 1;

	t33 = ((x281/x282)%(x283<x284));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	volatile int8_t x295 = INT8_MAX;
	volatile uint8_t x296 = UINT8_MAX;
	volatile int32_t t34 = -6645;

	t34 = ((x293/x294)%(x295<x296));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x305 = 14631407664348LLU;
	static uint8_t x306 = 29U;
	static uint8_t x307 = 23U;
	volatile uint64_t t35 = 24514014184637LLU;

	t35 = ((x305/x306)%(x307<x308));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x309 = INT16_MIN;
	volatile uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MIN;
	int8_t x312 = 2;
	volatile uint64_t t36 = 2806240648924238LLU;

	t36 = ((x309/x310)%(x311<x312));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x313 = INT64_MIN;
	volatile uint16_t x314 = 1351U;
	int32_t x316 = INT32_MAX;
	static volatile int64_t t37 = 150946LL;

	t37 = ((x313/x314)%(x315<x316));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x325 = UINT16_MAX;
	static volatile int8_t x326 = INT8_MIN;
	int8_t x328 = 1;

	t38 = ((x325/x326)%(x327<x328));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x333 = 222601618344LLU;
	int32_t x334 = -6323083;
	int32_t x335 = INT32_MIN;
	static int64_t x336 = INT64_MAX;
	uint64_t t39 = 40725LLU;

	t39 = ((x333/x334)%(x335<x336));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x338 = -3963;
	uint64_t x339 = 69464624611004226LLU;
	volatile int8_t x340 = INT8_MIN;
	int64_t t40 = 678893563541843474LL;

	t40 = ((x337/x338)%(x339<x340));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x341 = INT32_MIN;
	static int64_t x342 = 136LL;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 1U;
	volatile int64_t t41 = -225448935295LL;

	t41 = ((x341/x342)%(x343<x344));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x352 = INT16_MIN;
	int64_t t42 = 43508004104934103LL;

	t42 = ((x349/x350)%(x351<x352));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x355 = 30867716469578LLU;
	int16_t x356 = -1;

	t43 = ((x353/x354)%(x355<x356));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x373 = 4U;
	static uint64_t x374 = UINT64_MAX;
	int64_t x375 = 4915LL;
	volatile uint64_t t44 = 41481533LLU;

	t44 = ((x373/x374)%(x375<x376));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x393 = INT16_MAX;
	uint16_t x395 = 73U;
	uint8_t x396 = UINT8_MAX;
	volatile uint64_t t45 = 23786899579567LLU;

	t45 = ((x393/x394)%(x395<x396));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x405 = -57;
	uint64_t x406 = UINT64_MAX;
	static uint64_t t46 = 398004679432845034LLU;

	t46 = ((x405/x406)%(x407<x408));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x413 = -9189771;
	volatile uint64_t x414 = UINT64_MAX;
	int16_t x415 = 1;

	t47 = ((x413/x414)%(x415<x416));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x417 = INT32_MIN;
	static int32_t x418 = 8447;
	uint32_t x419 = 150U;
	static int16_t x420 = -5910;

	t48 = ((x417/x418)%(x419<x420));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x422 = UINT16_MAX;
	uint64_t x423 = 139838601088194LLU;
	volatile int32_t t49 = 2;

	t49 = ((x421/x422)%(x423<x424));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x445 = INT8_MIN;
	int64_t x446 = -1LL;
	int16_t x448 = INT16_MAX;
	int64_t t50 = 46451785103553816LL;

	t50 = ((x445/x446)%(x447<x448));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x449 = 219878572U;
	int8_t x451 = INT8_MIN;
	int32_t x452 = 9347524;
	uint64_t t51 = 2LLU;

	t51 = ((x449/x450)%(x451<x452));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MIN;
	uint16_t x460 = 22U;

	t52 = ((x457/x458)%(x459<x460));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x469 = INT16_MIN;
	volatile int16_t x470 = 9483;
	uint16_t x471 = 12U;
	static uint32_t x472 = 63628U;

	t53 = ((x469/x470)%(x471<x472));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x477 = -1;
	int32_t x478 = -406086574;
	static int32_t x479 = -1167896;
	volatile int32_t x480 = INT32_MAX;
	volatile int32_t t54 = -486350;

	t54 = ((x477/x478)%(x479<x480));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x481 = INT16_MAX;
	static int64_t x482 = INT64_MIN;
	volatile uint32_t x483 = 1937673U;
	int64_t x484 = INT64_MAX;
	int64_t t55 = -521404LL;

	t55 = ((x481/x482)%(x483<x484));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x485 = 4063009389525382LL;
	uint16_t x486 = UINT16_MAX;
	int64_t x487 = INT64_MIN;
	volatile int16_t x488 = INT16_MIN;
	static int64_t t56 = -8136898324LL;

	t56 = ((x485/x486)%(x487<x488));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x509 = -1LL;
	volatile uint16_t x510 = 17U;
	static volatile uint32_t x511 = 7U;
	int64_t t57 = 631LL;

	t57 = ((x509/x510)%(x511<x512));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x521 = UINT8_MAX;
	uint64_t x522 = UINT64_MAX;
	volatile int8_t x523 = -1;
	int16_t x524 = 10125;

	t58 = ((x521/x522)%(x523<x524));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x525 = INT64_MIN;
	int16_t x526 = INT16_MIN;
	uint8_t x528 = 0U;

	t59 = ((x525/x526)%(x527<x528));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x529 = 741591948246LLU;
	int32_t x530 = INT32_MAX;
	int8_t x531 = 9;
	int64_t x532 = 2047995LL;
	uint64_t t60 = 1653951246LLU;

	t60 = ((x529/x530)%(x531<x532));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x537 = 120U;
	uint16_t x538 = 540U;
	int16_t x539 = -6;

	t61 = ((x537/x538)%(x539<x540));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x545 = INT64_MAX;
	int16_t x547 = INT16_MIN;
	int64_t x548 = INT64_MAX;
	int64_t t62 = -2186136646732871673LL;

	t62 = ((x545/x546)%(x547<x548));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x549 = 2127798492710LLU;
	int8_t x551 = INT8_MIN;
	volatile uint64_t t63 = 415415954989LLU;

	t63 = ((x549/x550)%(x551<x552));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x565 = 3;
	static int64_t x566 = -1357372930223446LL;
	int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MIN;
	int64_t t64 = 1079289533812LL;

	t64 = ((x565/x566)%(x567<x568));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x581 = 0U;
	int8_t x582 = 62;
	int64_t x584 = INT64_MAX;
	static int32_t t65 = 343;

	t65 = ((x581/x582)%(x583<x584));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x586 = 35LLU;
	int16_t x587 = -1;
	int32_t x588 = INT32_MAX;
	volatile uint64_t t66 = 17977LLU;

	t66 = ((x585/x586)%(x587<x588));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x609 = INT8_MAX;
	int16_t x610 = -1;
	int8_t x611 = 1;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t67 = 79272;

	t67 = ((x609/x610)%(x611<x612));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x613 = 31;
	int8_t x615 = INT8_MAX;
	uint16_t x616 = UINT16_MAX;
	static volatile int32_t t68 = 2239096;

	t68 = ((x613/x614)%(x615<x616));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x617 = 131886100U;
	static volatile int8_t x618 = INT8_MIN;
	volatile int16_t x619 = INT16_MIN;
	int8_t x620 = INT8_MIN;
	volatile uint32_t t69 = 306487U;

	t69 = ((x617/x618)%(x619<x620));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x621 = 18U;
	int32_t x622 = 30;
	int8_t x623 = INT8_MIN;
	uint16_t x624 = 1U;

	t70 = ((x621/x622)%(x623<x624));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x625 = INT32_MIN;
	int32_t x626 = 455;
	uint32_t x627 = 30U;
	int32_t t71 = 38;

	t71 = ((x625/x626)%(x627<x628));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x629 = 300;
	static int32_t x630 = -32870;
	static int16_t x631 = -1;
	int16_t x632 = INT16_MAX;
	int32_t t72 = -872;

	t72 = ((x629/x630)%(x631<x632));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x637 = 3991U;
	int64_t x638 = 2526LL;
	int64_t t73 = 216339180148618LL;

	t73 = ((x637/x638)%(x639<x640));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x641 = -1LL;
	int32_t x642 = -116;
	int8_t x643 = -31;
	int64_t t74 = 5185190975547LL;

	t74 = ((x641/x642)%(x643<x644));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x653 = INT16_MAX;
	int32_t x654 = INT32_MIN;
	uint64_t x656 = UINT64_MAX;
	static int32_t t75 = -122;

	t75 = ((x653/x654)%(x655<x656));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x666 = INT16_MAX;
	static int8_t x667 = -40;
	volatile int16_t x668 = 19;
	int32_t t76 = -2354;

	t76 = ((x665/x666)%(x667<x668));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x670 = 57LLU;
	int8_t x671 = 2;
	uint64_t t77 = 317512394LLU;

	t77 = ((x669/x670)%(x671<x672));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x682 = -15;
	static volatile int32_t t78 = 44;

	t78 = ((x681/x682)%(x683<x684));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x685 = INT32_MAX;
	static int8_t x686 = -1;
	uint8_t x688 = 0U;
	int32_t t79 = -4;

	t79 = ((x685/x686)%(x687<x688));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x689 = UINT64_MAX;
	volatile int8_t x691 = INT8_MAX;
	uint32_t x692 = UINT32_MAX;
	volatile uint64_t t80 = 7394334LLU;

	t80 = ((x689/x690)%(x691<x692));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x701 = 59;
	volatile int32_t x702 = -71636;
	static int32_t t81 = 149039;

	t81 = ((x701/x702)%(x703<x704));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x705 = 2421U;
	int64_t x706 = 2065671131666LL;
	uint32_t x707 = 97969052U;
	static volatile int64_t t82 = 6088015426035LL;

	t82 = ((x705/x706)%(x707<x708));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x729 = -156069749LL;
	volatile int16_t x730 = INT16_MIN;
	int16_t x731 = -1030;
	volatile int64_t t83 = -96260972646016240LL;

	t83 = ((x729/x730)%(x731<x732));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x749 = INT64_MIN;
	uint16_t x750 = 5992U;
	volatile uint32_t x751 = 150U;
	int16_t x752 = INT16_MIN;
	int64_t t84 = -912LL;

	t84 = ((x749/x750)%(x751<x752));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x767 = INT8_MIN;
	static volatile uint64_t t85 = 248193005411973679LLU;

	t85 = ((x765/x766)%(x767<x768));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x773 = -1;
	uint16_t x774 = 4196U;
	uint64_t x775 = 8942716531368169LLU;
	int32_t x776 = INT32_MIN;
	volatile int32_t t86 = -104;

	t86 = ((x773/x774)%(x775<x776));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x778 = 1U;
	uint64_t x779 = 58LLU;
	int16_t x780 = INT16_MIN;
	static int32_t t87 = -92906;

	t87 = ((x777/x778)%(x779<x780));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x781 = INT32_MAX;
	int32_t x782 = INT32_MIN;
	uint64_t x783 = 5084LLU;
	uint32_t x784 = 464184337U;
	int32_t t88 = 1;

	t88 = ((x781/x782)%(x783<x784));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x785 = INT16_MAX;
	static int16_t x786 = -1;
	int8_t x787 = 1;
	volatile uint32_t x788 = 3162780U;
	volatile int32_t t89 = 1900720;

	t89 = ((x785/x786)%(x787<x788));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x794 = INT32_MAX;
	uint64_t x795 = 1LLU;
	int32_t x796 = INT32_MIN;

	t90 = ((x793/x794)%(x795<x796));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x813 = INT16_MAX;
	uint32_t x814 = 596079U;
	int8_t x815 = -13;

	t91 = ((x813/x814)%(x815<x816));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x841 = 30LL;
	int32_t x842 = 1381;
	int16_t x843 = INT16_MIN;
	int32_t x844 = INT32_MAX;
	static int64_t t92 = 30054184LL;

	t92 = ((x841/x842)%(x843<x844));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x881 = INT64_MAX;
	uint32_t x882 = 6026U;
	volatile int32_t x883 = 1;
	static volatile int8_t x884 = INT8_MAX;

	t93 = ((x881/x882)%(x883<x884));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x905 = 53U;
	int8_t x906 = INT8_MIN;
	int8_t x907 = INT8_MAX;
	uint64_t x908 = 6997199123665LLU;
	int32_t t94 = 2;

	t94 = ((x905/x906)%(x907<x908));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x917 = -1;
	uint64_t x918 = UINT64_MAX;
	int64_t x920 = INT64_MAX;
	uint64_t t95 = 8688974499895615LLU;

	t95 = ((x917/x918)%(x919<x920));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x931 = INT64_MIN;
	int16_t x932 = INT16_MIN;
	int32_t t96 = 5631644;

	t96 = ((x929/x930)%(x931<x932));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x933 = INT64_MIN;
	volatile uint16_t x934 = 3U;
	uint32_t x935 = 4U;
	uint64_t x936 = 38346462LLU;
	volatile int64_t t97 = -66LL;

	t97 = ((x933/x934)%(x935<x936));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x945 = INT32_MIN;
	int16_t x946 = 1;
	int64_t x947 = INT64_MIN;
	volatile uint8_t x948 = 0U;
	int32_t t98 = 4158798;

	t98 = ((x945/x946)%(x947<x948));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x961 = UINT16_MAX;
	uint32_t x963 = UINT32_MAX;
	volatile int64_t x964 = 42515876753LL;
	volatile int32_t t99 = 8127;

	t99 = ((x961/x962)%(x963<x964));

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

