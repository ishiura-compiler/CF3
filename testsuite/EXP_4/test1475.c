#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x9 = 10184;
uint16_t x11 = 10U;
static uint64_t x17 = 13LLU;
int64_t x24 = INT64_MAX;
uint32_t t3 = 8108502U;
uint32_t x30 = 12555185U;
int32_t x52 = -4582084;
int8_t x67 = INT8_MIN;
static volatile int32_t x92 = 872;
uint16_t x103 = UINT16_MAX;
volatile int64_t x110 = INT64_MIN;
static uint64_t t12 = 12768561516552239LLU;
uint8_t x125 = 3U;
int32_t x126 = INT32_MIN;
volatile int32_t x130 = INT32_MAX;
volatile int32_t t16 = 1288;
uint64_t x133 = 17LLU;
volatile uint64_t t17 = 336807865136305433LLU;
static int8_t x155 = INT8_MAX;
int32_t x162 = -9;
static int8_t x171 = INT8_MAX;
static int32_t x172 = INT32_MIN;
uint64_t t23 = UINT64_MAX;
int16_t x181 = 53;
static int16_t x187 = INT16_MIN;
volatile uint32_t t25 = 43315286U;
int32_t x190 = -1;
uint16_t x197 = 129U;
static int64_t x208 = -1LL;
uint8_t x225 = 0U;
int32_t x226 = -583510;
static volatile int32_t x227 = INT32_MAX;
int32_t t31 = 197;
uint16_t x234 = 29532U;
volatile int8_t x236 = 3;
int32_t x241 = 26122;
uint64_t x250 = 21562335LLU;
static volatile uint16_t x274 = 9U;
volatile int32_t t45 = -159786441;
int16_t x353 = 7;
uint64_t x362 = 558052848927888LLU;
int32_t t50 = -7;
static int16_t x380 = INT16_MIN;
int8_t x397 = INT8_MAX;
uint8_t x432 = 0U;
volatile uint32_t t57 = UINT32_MAX;
int32_t x434 = -1;
uint8_t x483 = 16U;
int32_t t65 = -890836;
volatile int64_t x485 = 85876688509LL;
static uint16_t x487 = 60U;
static volatile int64_t t66 = -81967846LL;
uint64_t x493 = UINT64_MAX;
int64_t x496 = -1LL;
int16_t x504 = INT16_MAX;
int16_t x509 = INT16_MAX;
int16_t x512 = INT16_MIN;
static int64_t x522 = INT64_MIN;
int32_t x523 = -53363;
int64_t x527 = -57LL;
int16_t x528 = 93;
int64_t t72 = 47310165088303LL;
static volatile int32_t t73 = -1433737;
volatile int32_t x551 = INT32_MAX;
int8_t x572 = 1;
static uint64_t t78 = 62074LLU;
int64_t x591 = -1LL;
int16_t x604 = INT16_MAX;
int8_t x610 = INT8_MIN;
uint32_t t82 = 170303U;
int32_t x616 = 6039;
volatile int32_t x637 = INT32_MAX;
uint8_t x648 = UINT8_MAX;
int32_t t87 = -1;
static volatile int8_t x663 = INT8_MAX;
int16_t x667 = -1;
int16_t x673 = INT16_MAX;
volatile uint32_t x675 = UINT32_MAX;
int32_t t90 = 22026390;
static int32_t x718 = 7904046;
int32_t x720 = 251631311;
uint8_t x721 = 55U;
uint64_t x722 = 2254409507260271LLU;
int32_t x732 = INT32_MAX;
int8_t x737 = INT8_MAX;
static int64_t x738 = -296369197LL;
volatile uint16_t x753 = 1102U;
int16_t x755 = -1;
int16_t x760 = INT16_MIN;


void f0(void) {
	int64_t x10 = INT64_MIN;
	static int64_t x12 = 1249829LL;
	int32_t t0 = 434;

	t0 = (x9<<(x10<=(x11<x12)));

	if (t0 != 20368) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 4109813LLU;
	uint8_t x14 = UINT8_MAX;
	volatile uint32_t x15 = 369U;
	int8_t x16 = INT8_MIN;
	volatile uint64_t t1 = 1LLU;

	t1 = (x13<<(x14<=(x15<x16)));

	if (t1 != 4109813LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x18 = 5U;
	int8_t x19 = INT8_MIN;
	uint16_t x20 = UINT16_MAX;
	volatile uint64_t t2 = 14281759LLU;

	t2 = (x17<<(x18<=(x19<x20)));

	if (t2 != 13LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = -2376076606637792LL;
	int16_t x23 = -1;

	t3 = (x21<<(x22<=(x23<x24)));

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = 30U;
	int32_t x31 = 367733502;
	int64_t x32 = -1LL;
	volatile int32_t t4 = 63;

	t4 = (x29<<(x30<=(x31<x32)));

	if (t4 != 30) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 2980685U;
	int32_t x34 = 6819;
	static int16_t x35 = INT16_MIN;
	static int32_t x36 = INT32_MIN;
	uint32_t t5 = 244812957U;

	t5 = (x33<<(x34<=(x35<x36)));

	if (t5 != 2980685U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x37 = 1989885067482091LLU;
	int32_t x38 = INT32_MIN;
	uint32_t x39 = UINT32_MAX;
	uint16_t x40 = 2U;
	volatile uint64_t t6 = 14LLU;

	t6 = (x37<<(x38<=(x39<x40)));

	if (t6 != 3979770134964182LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = 5;
	uint16_t x50 = 837U;
	uint16_t x51 = 19899U;
	volatile int32_t t7 = 213256539;

	t7 = (x49<<(x50<=(x51<x52)));

	if (t7 != 5) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x65 = 15U;
	int8_t x66 = -16;
	static uint64_t x68 = UINT64_MAX;
	volatile int32_t t8 = 103437;

	t8 = (x65<<(x66<=(x67<x68)));

	if (t8 != 30) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x89 = 0;
	int64_t x90 = INT64_MAX;
	volatile uint32_t x91 = UINT32_MAX;
	int32_t t9 = -2484;

	t9 = (x89<<(x90<=(x91<x92)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x97 = 31U;
	int32_t x98 = INT32_MIN;
	volatile int64_t x99 = INT64_MIN;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t10 = 8778441;

	t10 = (x97<<(x98<=(x99<x100)));

	if (t10 != 62) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x101 = 657506470679231879LLU;
	uint16_t x102 = 588U;
	uint32_t x104 = 4576U;
	volatile uint64_t t11 = 107132LLU;

	t11 = (x101<<(x102<=(x103<x104)));

	if (t11 != 657506470679231879LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x109 = 11195558399LLU;
	int8_t x111 = INT8_MAX;
	volatile int16_t x112 = INT16_MAX;

	t12 = (x109<<(x110<=(x111<x112)));

	if (t12 != 22391116798LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x117 = 875U;
	uint8_t x118 = 0U;
	static volatile int16_t x119 = -1;
	int32_t x120 = -184743;
	static volatile int32_t t13 = 484738661;

	t13 = (x117<<(x118<=(x119<x120)));

	if (t13 != 1750) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x121 = 42;
	static int16_t x122 = INT16_MIN;
	int32_t x123 = -1;
	int64_t x124 = INT64_MAX;
	int32_t t14 = -730594;

	t14 = (x121<<(x122<=(x123<x124)));

	if (t14 != 84) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x127 = 23;
	uint32_t x128 = 6U;
	volatile int32_t t15 = 400482454;

	t15 = (x125<<(x126<=(x127<x128)));

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x129 = INT16_MAX;
	uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 249566727U;

	t16 = (x129<<(x130<=(x131<x132)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;

	t17 = (x133<<(x134<=(x135<x136)));

	if (t17 != 17LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x145 = INT8_MAX;
	uint64_t x146 = UINT64_MAX;
	static uint64_t x147 = 64964600116554LLU;
	int32_t x148 = 1001650;
	volatile int32_t t18 = -9686344;

	t18 = (x145<<(x146<=(x147<x148)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x149 = UINT32_MAX;
	int8_t x150 = INT8_MIN;
	uint16_t x151 = 1U;
	int8_t x152 = INT8_MIN;
	static uint32_t t19 = 3U;

	t19 = (x149<<(x150<=(x151<x152)));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x153 = 18067U;
	static uint64_t x154 = 4LLU;
	uint8_t x156 = 25U;
	uint32_t t20 = 102U;

	t20 = (x153<<(x154<=(x155<x156)));

	if (t20 != 18067U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int32_t x163 = 4;
	int32_t x164 = 118800964;
	int32_t t21 = -14;

	t21 = (x161<<(x162<=(x163<x164)));

	if (t21 != 510) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x169 = UINT16_MAX;
	volatile int32_t x170 = -894987;
	int32_t t22 = -49891996;

	t22 = (x169<<(x170<=(x171<x172)));

	if (t22 != 131070) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x173 = UINT64_MAX;
	uint64_t x174 = 38196632997478204LLU;
	int16_t x175 = INT16_MIN;
	int8_t x176 = 0;

	t23 = (x173<<(x174<=(x175<x176)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x182 = 40242107LLU;
	static int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t24 = -14;

	t24 = (x181<<(x182<=(x183<x184)));

	if (t24 != 53) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	int32_t x188 = 3252559;

	t25 = (x185<<(x186<=(x187<x188)));

	if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t26 = -14616;

	t26 = (x189<<(x190<=(x191<x192)));

	if (t26 != 510) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x198 = -1LL;
	volatile int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MAX;
	volatile int32_t t27 = 4;

	t27 = (x197<<(x198<=(x199<x200)));

	if (t27 != 258) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x205 = UINT32_MAX;
	int16_t x206 = INT16_MAX;
	volatile int32_t x207 = 360;
	uint32_t t28 = UINT32_MAX;

	t28 = (x205<<(x206<=(x207<x208)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x217 = 2892U;
	int16_t x218 = INT16_MIN;
	static int16_t x219 = -1;
	int64_t x220 = 2043067LL;
	int32_t t29 = -93622;

	t29 = (x217<<(x218<=(x219<x220)));

	if (t29 != 5784) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x221 = 807696775LLU;
	static int8_t x222 = -39;
	uint16_t x223 = 14659U;
	static int8_t x224 = -1;
	volatile uint64_t t30 = 4075981685LLU;

	t30 = (x221<<(x222<=(x223<x224)));

	if (t30 != 1615393550LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x228 = 94968419U;

	t31 = (x225<<(x226<=(x227<x228)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x233 = 1996596U;
	volatile uint32_t x235 = UINT32_MAX;
	volatile uint32_t t32 = 1539043U;

	t32 = (x233<<(x234<=(x235<x236)));

	if (t32 != 1996596U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = INT16_MIN;
	static int8_t x239 = 0;
	volatile int64_t x240 = INT64_MAX;
	volatile int32_t t33 = 2046287;

	t33 = (x237<<(x238<=(x239<x240)));

	if (t33 != 131070) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x242 = INT16_MIN;
	int8_t x243 = -55;
	int16_t x244 = INT16_MAX;
	int32_t t34 = -94;

	t34 = (x241<<(x242<=(x243<x244)));

	if (t34 != 52244) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x245 = UINT32_MAX;
	static int64_t x246 = -1LL;
	uint8_t x247 = UINT8_MAX;
	volatile uint32_t x248 = UINT32_MAX;
	uint32_t t35 = 4U;

	t35 = (x245<<(x246<=(x247<x248)));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x249 = 95936902525LLU;
	int16_t x251 = -1;
	uint32_t x252 = UINT32_MAX;
	static uint64_t t36 = 7282068930659LLU;

	t36 = (x249<<(x250<=(x251<x252)));

	if (t36 != 95936902525LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x257 = 316;
	uint64_t x258 = 1342228LLU;
	static int16_t x259 = -162;
	int8_t x260 = 1;
	volatile int32_t t37 = 1167;

	t37 = (x257<<(x258<=(x259<x260)));

	if (t37 != 316) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x261 = 745280821414138459LLU;
	static int64_t x262 = -15371727047LL;
	int8_t x263 = INT8_MAX;
	static int32_t x264 = INT32_MIN;
	uint64_t t38 = 17LLU;

	t38 = (x261<<(x262<=(x263<x264)));

	if (t38 != 1490561642828276918LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x273 = INT32_MAX;
	int8_t x275 = -1;
	int8_t x276 = INT8_MIN;
	volatile int32_t t39 = INT32_MAX;

	t39 = (x273<<(x274<=(x275<x276)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x281 = 110791772U;
	uint64_t x282 = UINT64_MAX;
	uint8_t x283 = UINT8_MAX;
	static uint64_t x284 = 3318009781LLU;
	static uint32_t t40 = 1U;

	t40 = (x281<<(x282<=(x283<x284)));

	if (t40 != 110791772U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x293 = 1U;
	int8_t x294 = INT8_MAX;
	int32_t x295 = -523353;
	static volatile uint32_t x296 = UINT32_MAX;
	int32_t t41 = -5846044;

	t41 = (x293<<(x294<=(x295<x296)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x305 = INT8_MAX;
	uint8_t x306 = 6U;
	int64_t x307 = INT64_MIN;
	static volatile int8_t x308 = INT8_MAX;
	volatile int32_t t42 = 251642405;

	t42 = (x305<<(x306<=(x307<x308)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x321 = INT8_MAX;
	uint32_t x322 = 9677491U;
	int64_t x323 = -1LL;
	volatile uint32_t x324 = UINT32_MAX;
	volatile int32_t t43 = -5732117;

	t43 = (x321<<(x322<=(x323<x324)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x325 = 8U;
	int32_t x326 = -6850;
	volatile int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MAX;
	uint32_t t44 = 53U;

	t44 = (x325<<(x326<=(x327<x328)));

	if (t44 != 16U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x333 = 0U;
	int32_t x334 = INT32_MIN;
	volatile int64_t x335 = INT64_MAX;
	static int32_t x336 = INT32_MIN;

	t45 = (x333<<(x334<=(x335<x336)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x341 = 3493896005781091990LLU;
	volatile uint16_t x342 = 255U;
	int16_t x343 = -2;
	int32_t x344 = INT32_MIN;
	uint64_t t46 = 511233735LLU;

	t46 = (x341<<(x342<=(x343<x344)));

	if (t46 != 3493896005781091990LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x345 = 2533U;
	uint8_t x346 = 43U;
	static int64_t x347 = 46668829810938854LL;
	int8_t x348 = -1;
	volatile int32_t t47 = -30;

	t47 = (x345<<(x346<=(x347<x348)));

	if (t47 != 2533) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x354 = INT32_MIN;
	volatile int8_t x355 = -56;
	uint16_t x356 = 1U;
	volatile int32_t t48 = -6650;

	t48 = (x353<<(x354<=(x355<x356)));

	if (t48 != 14) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x361 = 14;
	uint32_t x363 = UINT32_MAX;
	int8_t x364 = -1;
	static int32_t t49 = -3;

	t49 = (x361<<(x362<=(x363<x364)));

	if (t49 != 14) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x365 = INT8_MAX;
	int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	static volatile int32_t x368 = -9648877;

	t50 = (x365<<(x366<=(x367<x368)));

	if (t50 != 254) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x373 = 773815U;
	uint32_t x374 = 20891U;
	int32_t x375 = INT32_MIN;
	static volatile uint64_t x376 = UINT64_MAX;
	volatile uint32_t t51 = 245957708U;

	t51 = (x373<<(x374<=(x375<x376)));

	if (t51 != 773815U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x377 = 729U;
	int8_t x378 = INT8_MIN;
	static int16_t x379 = INT16_MIN;
	volatile int32_t t52 = 261812510;

	t52 = (x377<<(x378<=(x379<x380)));

	if (t52 != 1458) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x385 = 1LL;
	volatile int64_t x386 = 6528263770908LL;
	volatile int16_t x387 = INT16_MAX;
	static int16_t x388 = INT16_MIN;
	volatile int64_t t53 = 3LL;

	t53 = (x385<<(x386<=(x387<x388)));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = 8005;
	int8_t x391 = -1;
	uint8_t x392 = 52U;
	int32_t t54 = -18775571;

	t54 = (x389<<(x390<=(x391<x392)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x398 = 1683LL;
	static uint16_t x399 = UINT16_MAX;
	static int64_t x400 = 168988293793152568LL;
	volatile int32_t t55 = 4683054;

	t55 = (x397<<(x398<=(x399<x400)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = INT64_MAX;
	static uint64_t x423 = 101876428257372277LLU;
	int32_t x424 = 576471;
	uint32_t t56 = UINT32_MAX;

	t56 = (x421<<(x422<=(x423<x424)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x429 = UINT32_MAX;
	volatile uint64_t x430 = 5LLU;
	uint64_t x431 = 23440393651815LLU;

	t57 = (x429<<(x430<=(x431<x432)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x433 = 1;
	static int8_t x435 = -1;
	uint64_t x436 = 185665039LLU;
	static int32_t t58 = -177;

	t58 = (x433<<(x434<=(x435<x436)));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x437 = 88U;
	int8_t x438 = 3;
	static int64_t x439 = -383838373977004887LL;
	uint32_t x440 = 26U;
	int32_t t59 = 369189661;

	t59 = (x437<<(x438<=(x439<x440)));

	if (t59 != 88) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x441 = 30194095LL;
	int64_t x442 = -1LL;
	static volatile int8_t x443 = -6;
	static uint16_t x444 = 86U;
	volatile int64_t t60 = 12889570480635670LL;

	t60 = (x441<<(x442<=(x443<x444)));

	if (t60 != 60388190LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x445 = 220779616761005LLU;
	uint64_t x446 = 550499832033309LLU;
	int16_t x447 = INT16_MIN;
	static int8_t x448 = -1;
	volatile uint64_t t61 = 3532900468259530LLU;

	t61 = (x445<<(x446<=(x447<x448)));

	if (t61 != 220779616761005LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x453 = 1U;
	static int8_t x454 = 4;
	int64_t x455 = -7696269591754808LL;
	int64_t x456 = INT64_MIN;
	int32_t t62 = 173155;

	t62 = (x453<<(x454<=(x455<x456)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x457 = INT16_MAX;
	int8_t x458 = 38;
	int32_t x459 = 855;
	int32_t x460 = 26002;
	volatile int32_t t63 = 1;

	t63 = (x457<<(x458<=(x459<x460)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x477 = 5;
	int8_t x478 = 4;
	int16_t x479 = -14500;
	int16_t x480 = INT16_MIN;
	volatile int32_t t64 = 0;

	t64 = (x477<<(x478<=(x479<x480)));

	if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x481 = 957;
	static volatile int64_t x482 = INT64_MIN;
	uint8_t x484 = 0U;

	t65 = (x481<<(x482<=(x483<x484)));

	if (t65 != 1914) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x486 = INT16_MAX;
	volatile uint64_t x488 = 656227LLU;

	t66 = (x485<<(x486<=(x487<x488)));

	if (t66 != 85876688509LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x494 = 59898168504LL;
	int16_t x495 = 129;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x493<<(x494<=(x495<x496)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x501 = 808LLU;
	volatile int64_t x502 = 16464365LL;
	int64_t x503 = -12486639LL;
	volatile uint64_t t68 = 109149280509519342LLU;

	t68 = (x501<<(x502<=(x503<x504)));

	if (t68 != 808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x510 = INT64_MAX;
	int16_t x511 = -130;
	volatile int32_t t69 = 5718345;

	t69 = (x509<<(x510<=(x511<x512)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x513 = 1816U;
	volatile int64_t x514 = INT64_MAX;
	int8_t x515 = INT8_MIN;
	int32_t x516 = INT32_MIN;
	static volatile uint32_t t70 = 12U;

	t70 = (x513<<(x514<=(x515<x516)));

	if (t70 != 1816U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x521 = UINT64_MAX;
	int16_t x524 = -27;
	uint64_t t71 = 6870454LLU;

	t71 = (x521<<(x522<=(x523<x524)));

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x525 = 74576965280245LL;
	int64_t x526 = INT64_MAX;

	t72 = (x525<<(x526<=(x527<x528)));

	if (t72 != 74576965280245LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x529 = 184U;
	static int32_t x530 = INT32_MIN;
	volatile int8_t x531 = INT8_MAX;
	static uint32_t x532 = 6702683U;

	t73 = (x529<<(x530<=(x531<x532)));

	if (t73 != 368) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x537 = 1629821658483LL;
	int32_t x538 = -1;
	int64_t x539 = -1LL;
	int64_t x540 = INT64_MAX;
	int64_t t74 = 103348LL;

	t74 = (x537<<(x538<=(x539<x540)));

	if (t74 != 3259643316966LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x549 = UINT32_MAX;
	uint64_t x550 = 12164160879310LLU;
	static uint16_t x552 = 1U;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x549<<(x550<=(x551<x552)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x569 = INT8_MAX;
	int32_t x570 = INT32_MIN;
	static int16_t x571 = INT16_MIN;
	volatile int32_t t76 = 1;

	t76 = (x569<<(x570<=(x571<x572)));

	if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x573 = UINT16_MAX;
	int32_t x574 = -1;
	volatile uint8_t x575 = UINT8_MAX;
	volatile int32_t x576 = -10884333;
	int32_t t77 = 2;

	t77 = (x573<<(x574<=(x575<x576)));

	if (t77 != 131070) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x577 = 4745LLU;
	int8_t x578 = INT8_MIN;
	static int16_t x579 = INT16_MIN;
	int64_t x580 = -226LL;

	t78 = (x577<<(x578<=(x579<x580)));

	if (t78 != 9490LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x589 = 154937768U;
	volatile int8_t x590 = INT8_MIN;
	int32_t x592 = INT32_MIN;
	uint32_t t79 = 994786U;

	t79 = (x589<<(x590<=(x591<x592)));

	if (t79 != 309875536U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x593 = 6;
	volatile int16_t x594 = -1;
	uint16_t x595 = 3U;
	int32_t x596 = INT32_MIN;
	int32_t t80 = -306861;

	t80 = (x593<<(x594<=(x595<x596)));

	if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x601 = UINT16_MAX;
	int32_t x602 = -194;
	int8_t x603 = INT8_MIN;
	int32_t t81 = -266128117;

	t81 = (x601<<(x602<=(x603<x604)));

	if (t81 != 131070) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x609 = UINT32_MAX;
	int8_t x611 = INT8_MIN;
	uint32_t x612 = 695589239U;

	t82 = (x609<<(x610<=(x611<x612)));

	if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x613 = INT16_MAX;
	static int64_t x614 = INT64_MIN;
	uint32_t x615 = 44122U;
	volatile int32_t t83 = 12;

	t83 = (x613<<(x614<=(x615<x616)));

	if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x629 = UINT32_MAX;
	int16_t x630 = INT16_MAX;
	int8_t x631 = INT8_MIN;
	static uint8_t x632 = 125U;
	uint32_t t84 = UINT32_MAX;

	t84 = (x629<<(x630<=(x631<x632)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x633 = UINT64_MAX;
	int16_t x634 = INT16_MAX;
	int32_t x635 = -1;
	int16_t x636 = -58;
	static uint64_t t85 = UINT64_MAX;

	t85 = (x633<<(x634<=(x635<x636)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x638 = 26U;
	int64_t x639 = -727204080962387207LL;
	volatile int16_t x640 = -1;
	static int32_t t86 = INT32_MAX;

	t86 = (x637<<(x638<=(x639<x640)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x645 = 17;
	int32_t x646 = -1;
	int32_t x647 = INT32_MIN;

	t87 = (x645<<(x646<=(x647<x648)));

	if (t87 != 34) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x661 = 797164U;
	volatile uint16_t x662 = 18058U;
	volatile int8_t x664 = INT8_MIN;
	static volatile uint32_t t88 = 1748U;

	t88 = (x661<<(x662<=(x663<x664)));

	if (t88 != 797164U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x665 = UINT8_MAX;
	static int64_t x666 = INT64_MIN;
	volatile int16_t x668 = INT16_MAX;
	int32_t t89 = -1842;

	t89 = (x665<<(x666<=(x667<x668)));

	if (t89 != 510) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x674 = 30879LLU;
	int32_t x676 = INT32_MAX;

	t90 = (x673<<(x674<=(x675<x676)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x681 = UINT8_MAX;
	volatile uint64_t x682 = UINT64_MAX;
	int8_t x683 = INT8_MIN;
	static int64_t x684 = INT64_MIN;
	volatile int32_t t91 = 960909;

	t91 = (x681<<(x682<=(x683<x684)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x685 = UINT32_MAX;
	int32_t x686 = -1;
	uint64_t x687 = 440243560910878LLU;
	static int8_t x688 = -1;
	uint32_t t92 = 8462284U;

	t92 = (x685<<(x686<=(x687<x688)));

	if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x717 = UINT8_MAX;
	int32_t x719 = INT32_MIN;
	static int32_t t93 = -82;

	t93 = (x717<<(x718<=(x719<x720)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x723 = -1;
	int64_t x724 = -2768673882734673LL;
	int32_t t94 = 14838;

	t94 = (x721<<(x722<=(x723<x724)));

	if (t94 != 55) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x729 = UINT8_MAX;
	static uint64_t x730 = UINT64_MAX;
	int64_t x731 = INT64_MIN;
	volatile int32_t t95 = -5596;

	t95 = (x729<<(x730<=(x731<x732)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x739 = 21536U;
	static uint16_t x740 = 41U;
	volatile int32_t t96 = 1;

	t96 = (x737<<(x738<=(x739<x740)));

	if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x745 = 2991U;
	static int64_t x746 = 11LL;
	uint8_t x747 = 36U;
	volatile int32_t x748 = 1925;
	static volatile int32_t t97 = 769267533;

	t97 = (x745<<(x746<=(x747<x748)));

	if (t97 != 2991) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x754 = INT64_MIN;
	int8_t x756 = INT8_MAX;
	static volatile int32_t t98 = 386646751;

	t98 = (x753<<(x754<=(x755<x756)));

	if (t98 != 2204) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x757 = 1;
	int32_t x758 = -82440;
	uint32_t x759 = UINT32_MAX;
	volatile int32_t t99 = -2163337;

	t99 = (x757<<(x758<=(x759<x760)));

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

