#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 12;
uint8_t x5 = 24U;
int32_t x8 = INT32_MIN;
int32_t t2 = 0;
static uint64_t x21 = UINT64_MAX;
int16_t x24 = -1;
volatile uint64_t x30 = 232087397494090LLU;
uint16_t x66 = UINT16_MAX;
int8_t x73 = 1;
int16_t x74 = -9;
volatile int32_t t6 = -197919;
static uint64_t x87 = 157418068LLU;
uint32_t x103 = UINT32_MAX;
int64_t x118 = -125771693467986LL;
int8_t x119 = INT8_MAX;
static volatile uint64_t t12 = UINT64_MAX;
static uint64_t x131 = UINT64_MAX;
uint32_t x133 = UINT32_MAX;
int8_t x135 = INT8_MIN;
uint64_t x173 = UINT64_MAX;
int8_t x175 = 1;
static int32_t x184 = -1;
volatile int8_t x192 = -1;
volatile int32_t t20 = 5;
int32_t x196 = INT32_MIN;
int32_t t21 = -359;
static int32_t x204 = -1;
static volatile uint32_t t22 = 186U;
static uint64_t t23 = 15919613LLU;
static int16_t x226 = 0;
int8_t x227 = INT8_MIN;
static int32_t x229 = INT32_MAX;
uint8_t x233 = 3U;
int32_t x234 = -389;
volatile int32_t t26 = -40346;
static uint8_t x241 = UINT8_MAX;
volatile int32_t t27 = -11;
static uint32_t x253 = 242U;
static int64_t x267 = INT64_MAX;
volatile int32_t t32 = 573058813;
static volatile int32_t t33 = 3;
uint32_t x312 = 223946132U;
uint64_t x327 = 210624LLU;
int32_t x331 = INT32_MAX;
int64_t x354 = INT64_MAX;
int16_t x362 = -1;
int16_t x373 = INT16_MAX;
uint32_t x386 = UINT32_MAX;
uint8_t x397 = 124U;
uint64_t x398 = 29856367147LLU;
int64_t x401 = 52410LL;
int64_t t47 = -1563123182527279224LL;
int8_t x408 = INT8_MAX;
static volatile uint8_t x409 = 22U;
int16_t x414 = INT16_MIN;
volatile uint32_t t50 = 12358U;
uint32_t x433 = 15832U;
int32_t x435 = INT32_MAX;
uint8_t x440 = UINT8_MAX;
volatile int32_t t52 = 72578;
int32_t x442 = INT32_MAX;
int64_t x447 = INT64_MIN;
int32_t t54 = -36266884;
volatile int16_t x449 = 89;
uint16_t x456 = 159U;
int32_t t59 = 102558;
int32_t x511 = 14881;
static volatile int32_t t63 = 21;
uint64_t x527 = 128LLU;
int64_t x530 = -5LL;
uint8_t x541 = 108U;
int64_t x542 = 63953LL;
static int16_t x544 = INT16_MIN;
static uint32_t x555 = 338U;
volatile int16_t x556 = INT16_MIN;
int64_t x558 = -17365333LL;
volatile int8_t x560 = 24;
volatile uint64_t t71 = 2654LLU;
int16_t x571 = INT16_MAX;
uint32_t x572 = UINT32_MAX;
volatile int64_t x575 = -5984352048352244LL;
volatile uint32_t x576 = UINT32_MAX;
int64_t x583 = -83069818LL;
static uint16_t x596 = 26787U;
volatile int32_t t78 = -113502;
uint32_t x628 = 2U;
int16_t x644 = -21;
volatile uint64_t t85 = UINT64_MAX;
int32_t x662 = INT32_MIN;
volatile int64_t x664 = 8890LL;
volatile int32_t t88 = -97543578;
uint64_t x666 = 31456771473040123LLU;
int32_t x668 = INT32_MAX;
int32_t t89 = 158430217;
uint64_t x669 = UINT64_MAX;
uint8_t x698 = 11U;
int16_t x705 = INT16_MAX;
int64_t x707 = INT64_MIN;
int32_t x708 = 28;
static volatile uint64_t x721 = UINT64_MAX;
int16_t x726 = -1;
int32_t x728 = INT32_MAX;
volatile int64_t x734 = -1LL;
volatile int64_t x741 = INT64_MAX;
volatile int64_t t97 = INT64_MAX;
uint64_t x754 = 1069022220513128622LLU;
uint8_t x755 = 0U;
static int16_t x758 = -3;


void f0(void) {
	static int8_t x2 = 6;
	volatile uint32_t x3 = UINT32_MAX;
	int32_t x4 = 159;
	volatile int32_t t0 = 4;

	t0 = (x1<<(x2<(x3<=x4)));

	if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int16_t x7 = 5;
	volatile int32_t t1 = -11;

	t1 = (x5<<(x6<(x7<=x8)));

	if (t1 != 48) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x17 = 652U;
	int64_t x18 = INT64_MAX;
	volatile int8_t x19 = -1;
	uint64_t x20 = 3616926LLU;

	t2 = (x17<<(x18<(x19<=x20)));

	if (t2 != 652) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x22 = -1;
	int64_t x23 = INT64_MIN;
	volatile uint64_t t3 = 2125192173584LLU;

	t3 = (x21<<(x22<(x23<=x24)));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = 96;
	uint32_t x31 = 1017797U;
	int32_t x32 = INT32_MIN;
	volatile int32_t t4 = 3054;

	t4 = (x29<<(x30<(x31<=x32)));

	if (t4 != 96) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x65 = 1U;
	static uint32_t x67 = UINT32_MAX;
	int16_t x68 = -1;
	volatile int32_t t5 = 1708387;

	t5 = (x65<<(x66<(x67<=x68)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x75 = 2136U;
	int16_t x76 = INT16_MAX;

	t6 = (x73<<(x74<(x75<=x76)));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x77 = 11U;
	uint32_t x78 = 836889U;
	static int16_t x79 = INT16_MAX;
	int32_t x80 = -1;
	static volatile int32_t t7 = -580130283;

	t7 = (x77<<(x78<(x79<=x80)));

	if (t7 != 11) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x85 = 28U;
	volatile uint64_t x86 = 25LLU;
	volatile uint16_t x88 = UINT16_MAX;
	int32_t t8 = 7386;

	t8 = (x85<<(x86<(x87<=x88)));

	if (t8 != 28) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x97 = 11741018U;
	uint32_t x98 = 0U;
	int32_t x99 = -1;
	int32_t x100 = INT32_MAX;
	volatile uint32_t t9 = 135700U;

	t9 = (x97<<(x98<(x99<=x100)));

	if (t9 != 23482036U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x101 = 26U;
	int8_t x102 = INT8_MIN;
	static int32_t x104 = INT32_MAX;
	static int32_t t10 = 692257614;

	t10 = (x101<<(x102<(x103<=x104)));

	if (t10 != 52) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x117 = 7;
	int8_t x120 = 0;
	int32_t t11 = 1;

	t11 = (x117<<(x118<(x119<=x120)));

	if (t11 != 14) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x122 = 2;
	static uint8_t x123 = UINT8_MAX;
	volatile int8_t x124 = INT8_MAX;

	t12 = (x121<<(x122<(x123<=x124)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x129 = 1655LLU;
	int64_t x130 = INT64_MIN;
	volatile uint8_t x132 = UINT8_MAX;
	uint64_t t13 = 2348283602209933991LLU;

	t13 = (x129<<(x130<(x131<=x132)));

	if (t13 != 3310LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x134 = UINT8_MAX;
	int64_t x136 = -1LL;
	static uint32_t t14 = UINT32_MAX;

	t14 = (x133<<(x134<(x135<=x136)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x157 = UINT8_MAX;
	static int64_t x158 = 41272556049992LL;
	int16_t x159 = INT16_MIN;
	int64_t x160 = INT64_MIN;
	static int32_t t15 = -579343;

	t15 = (x157<<(x158<(x159<=x160)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x161 = INT64_MAX;
	uint16_t x162 = 15888U;
	static uint16_t x163 = UINT16_MAX;
	int32_t x164 = -5;
	int64_t t16 = INT64_MAX;

	t16 = (x161<<(x162<(x163<=x164)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x165 = 2221236867016987LLU;
	int64_t x166 = 27LL;
	int32_t x167 = -179914866;
	static int32_t x168 = -8813;
	uint64_t t17 = 52788390251783966LLU;

	t17 = (x165<<(x166<(x167<=x168)));

	if (t17 != 2221236867016987LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x174 = INT64_MIN;
	static int8_t x176 = INT8_MIN;
	volatile uint64_t t18 = 10404962584LLU;

	t18 = (x173<<(x174<(x175<=x176)));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x181 = 21U;
	uint16_t x182 = 19U;
	volatile uint64_t x183 = 185320025483LLU;
	volatile int32_t t19 = 5110459;

	t19 = (x181<<(x182<(x183<=x184)));

	if (t19 != 21) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x189 = 352;
	volatile int32_t x190 = INT32_MIN;
	static uint8_t x191 = 0U;

	t20 = (x189<<(x190<(x191<=x192)));

	if (t20 != 704) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x193 = 95;
	uint64_t x194 = 1081792052696LLU;
	uint8_t x195 = UINT8_MAX;

	t21 = (x193<<(x194<(x195<=x196)));

	if (t21 != 95) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MIN;
	uint32_t x203 = UINT32_MAX;

	t22 = (x201<<(x202<(x203<=x204)));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x221 = 2170022LLU;
	int16_t x222 = -1;
	static uint64_t x223 = 2LLU;
	static volatile int64_t x224 = INT64_MIN;

	t23 = (x221<<(x222<(x223<=x224)));

	if (t23 != 4340044LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x225 = INT64_MAX;
	static int64_t x228 = INT64_MIN;
	int64_t t24 = INT64_MAX;

	t24 = (x225<<(x226<(x227<=x228)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MAX;
	int8_t x232 = 1;
	static volatile int32_t t25 = INT32_MAX;

	t25 = (x229<<(x230<(x231<=x232)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x235 = 259U;
	int16_t x236 = -1;

	t26 = (x233<<(x234<(x235<=x236)));

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x242 = 58U;
	int8_t x243 = INT8_MAX;
	int8_t x244 = INT8_MIN;

	t27 = (x241<<(x242<(x243<=x244)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x254 = INT64_MIN;
	static int32_t x255 = INT32_MIN;
	static int16_t x256 = -3;
	volatile uint32_t t28 = 488494U;

	t28 = (x253<<(x254<(x255<=x256)));

	if (t28 != 484U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x257 = 0U;
	uint16_t x258 = 0U;
	static int16_t x259 = -1;
	int32_t x260 = INT32_MIN;
	int32_t t29 = -96;

	t29 = (x257<<(x258<(x259<=x260)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x265 = UINT64_MAX;
	uint32_t x266 = 666280064U;
	volatile int64_t x268 = INT64_MAX;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x265<<(x266<(x267<=x268)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x269 = 13813047LLU;
	static volatile int32_t x270 = 3;
	int32_t x271 = -11197039;
	static volatile int16_t x272 = INT16_MAX;
	volatile uint64_t t31 = 600583361LLU;

	t31 = (x269<<(x270<(x271<=x272)));

	if (t31 != 13813047LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x297 = 367;
	volatile int64_t x298 = 20922LL;
	volatile uint16_t x299 = 219U;
	static uint64_t x300 = 18640654LLU;

	t32 = (x297<<(x298<(x299<=x300)));

	if (t32 != 367) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x301 = 47;
	int64_t x302 = -3895396571834LL;
	uint64_t x303 = UINT64_MAX;
	volatile int64_t x304 = 48363241LL;

	t33 = (x301<<(x302<(x303<=x304)));

	if (t33 != 94) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x309 = 4U;
	uint8_t x310 = UINT8_MAX;
	static uint64_t x311 = 19LLU;
	static int32_t t34 = 424;

	t34 = (x309<<(x310<(x311<=x312)));

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x317 = 4808888482752435717LLU;
	uint32_t x318 = 58U;
	static volatile uint32_t x319 = UINT32_MAX;
	uint8_t x320 = 1U;
	uint64_t t35 = 280793711LLU;

	t35 = (x317<<(x318<(x319<=x320)));

	if (t35 != 4808888482752435717LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x325 = UINT32_MAX;
	static volatile int8_t x326 = INT8_MAX;
	volatile int64_t x328 = INT64_MIN;
	uint32_t t36 = UINT32_MAX;

	t36 = (x325<<(x326<(x327<=x328)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x329 = 3U;
	int16_t x330 = 22;
	volatile uint16_t x332 = 52U;
	volatile int32_t t37 = 5459;

	t37 = (x329<<(x330<(x331<=x332)));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x341 = 4061123520463LLU;
	uint8_t x342 = 57U;
	int16_t x343 = INT16_MAX;
	int64_t x344 = -3264LL;
	uint64_t t38 = 865793727LLU;

	t38 = (x341<<(x342<(x343<=x344)));

	if (t38 != 4061123520463LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x353 = 1;
	int16_t x355 = -1;
	static uint64_t x356 = UINT64_MAX;
	static volatile int32_t t39 = 7;

	t39 = (x353<<(x354<(x355<=x356)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x357 = 61639550LLU;
	uint16_t x358 = 167U;
	uint64_t x359 = 174081539113746LLU;
	uint8_t x360 = 3U;
	static uint64_t t40 = 8LLU;

	t40 = (x357<<(x358<(x359<=x360)));

	if (t40 != 61639550LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x363 = INT16_MIN;
	int16_t x364 = -1;
	volatile uint64_t t41 = 1017893249741367599LLU;

	t41 = (x361<<(x362<(x363<=x364)));

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x374 = INT32_MIN;
	int16_t x375 = 1;
	volatile int8_t x376 = 0;
	int32_t t42 = -18517;

	t42 = (x373<<(x374<(x375<=x376)));

	if (t42 != 65534) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x381 = 1;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = 4315864U;
	uint16_t x384 = 27U;
	int32_t t43 = 3820;

	t43 = (x381<<(x382<(x383<=x384)));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x385 = UINT16_MAX;
	static volatile int64_t x387 = -1LL;
	volatile int8_t x388 = -1;
	volatile int32_t t44 = -12981;

	t44 = (x385<<(x386<(x387<=x388)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x393 = 1708U;
	int64_t x394 = -213802LL;
	int16_t x395 = -45;
	volatile int64_t x396 = INT64_MAX;
	volatile int32_t t45 = -2140225;

	t45 = (x393<<(x394<(x395<=x396)));

	if (t45 != 3416) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x399 = 10U;
	static uint32_t x400 = 16767363U;
	int32_t t46 = -24331857;

	t46 = (x397<<(x398<(x399<=x400)));

	if (t46 != 124) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x402 = 20U;
	volatile int8_t x403 = -1;
	int8_t x404 = -1;

	t47 = (x401<<(x402<(x403<=x404)));

	if (t47 != 52410LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x405 = 38U;
	static int8_t x406 = 3;
	static int32_t x407 = -1;
	int32_t t48 = 1322;

	t48 = (x405<<(x406<(x407<=x408)));

	if (t48 != 38) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x410 = -1521228;
	volatile int16_t x411 = 3;
	static int32_t x412 = 3;
	int32_t t49 = -2;

	t49 = (x409<<(x410<(x411<=x412)));

	if (t49 != 44) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x413 = 124404880U;
	int32_t x415 = -1;
	uint16_t x416 = 11149U;

	t50 = (x413<<(x414<(x415<=x416)));

	if (t50 != 248809760U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x434 = UINT8_MAX;
	static uint16_t x436 = UINT16_MAX;
	uint32_t t51 = 72316U;

	t51 = (x433<<(x434<(x435<=x436)));

	if (t51 != 15832U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x437 = UINT8_MAX;
	int8_t x438 = -1;
	volatile int16_t x439 = -459;

	t52 = (x437<<(x438<(x439<=x440)));

	if (t52 != 510) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x441 = UINT32_MAX;
	uint16_t x443 = 2U;
	int8_t x444 = -36;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = (x441<<(x442<(x443<=x444)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x445 = 3383U;
	volatile int8_t x446 = INT8_MIN;
	int8_t x448 = 3;

	t54 = (x445<<(x446<(x447<=x448)));

	if (t54 != 6766) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x450 = INT64_MIN;
	static int16_t x451 = -108;
	uint8_t x452 = UINT8_MAX;
	int32_t t55 = -31883;

	t55 = (x449<<(x450<(x451<=x452)));

	if (t55 != 178) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x453 = INT16_MAX;
	int64_t x454 = INT64_MAX;
	int64_t x455 = INT64_MIN;
	static volatile int32_t t56 = 25762776;

	t56 = (x453<<(x454<(x455<=x456)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x473 = UINT16_MAX;
	int64_t x474 = -1744119494LL;
	int32_t x475 = -561908929;
	int64_t x476 = INT64_MIN;
	volatile int32_t t57 = -718597;

	t57 = (x473<<(x474<(x475<=x476)));

	if (t57 != 131070) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x489 = INT64_MAX;
	int32_t x490 = 1;
	uint32_t x491 = 21813178U;
	volatile uint8_t x492 = 4U;
	int64_t t58 = INT64_MAX;

	t58 = (x489<<(x490<(x491<=x492)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x493 = 416U;
	int16_t x494 = INT16_MIN;
	int32_t x495 = INT32_MIN;
	int16_t x496 = 23;

	t59 = (x493<<(x494<(x495<=x496)));

	if (t59 != 832) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x501 = 2;
	int8_t x502 = -1;
	uint32_t x503 = 6U;
	volatile uint64_t x504 = 664LLU;
	int32_t t60 = 370892585;

	t60 = (x501<<(x502<(x503<=x504)));

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x509 = 7948U;
	int64_t x510 = INT64_MIN;
	int32_t x512 = INT32_MAX;
	volatile int32_t t61 = -51;

	t61 = (x509<<(x510<(x511<=x512)));

	if (t61 != 15896) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x517 = 34;
	uint64_t x518 = 88349LLU;
	int8_t x519 = 0;
	int16_t x520 = 804;
	static int32_t t62 = -1;

	t62 = (x517<<(x518<(x519<=x520)));

	if (t62 != 34) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x521 = 0U;
	int16_t x522 = INT16_MIN;
	uint16_t x523 = 4241U;
	static int64_t x524 = INT64_MAX;

	t63 = (x521<<(x522<(x523<=x524)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x525 = 21;
	int64_t x526 = INT64_MIN;
	volatile int8_t x528 = INT8_MIN;
	static int32_t t64 = 388404806;

	t64 = (x525<<(x526<(x527<=x528)));

	if (t64 != 42) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x529 = 85U;
	int64_t x531 = -1LL;
	static uint64_t x532 = 32LLU;
	int32_t t65 = -387808;

	t65 = (x529<<(x530<(x531<=x532)));

	if (t65 != 170) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x537 = 1;
	volatile int32_t x538 = INT32_MIN;
	static uint32_t x539 = 1U;
	int8_t x540 = -1;
	volatile int32_t t66 = 532040914;

	t66 = (x537<<(x538<(x539<=x540)));

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x543 = UINT64_MAX;
	int32_t t67 = -155760980;

	t67 = (x541<<(x542<(x543<=x544)));

	if (t67 != 108) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x545 = 186928165U;
	volatile int64_t x546 = INT64_MIN;
	static int16_t x547 = -1;
	volatile int32_t x548 = 50508;
	volatile uint32_t t68 = 831314U;

	t68 = (x545<<(x546<(x547<=x548)));

	if (t68 != 373856330U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x549 = 3259;
	volatile int8_t x550 = INT8_MIN;
	uint16_t x551 = 298U;
	static uint64_t x552 = 3424600670744LLU;
	volatile int32_t t69 = -1;

	t69 = (x549<<(x550<(x551<=x552)));

	if (t69 != 6518) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x553 = 3;
	int8_t x554 = INT8_MIN;
	int32_t t70 = -6143044;

	t70 = (x553<<(x554<(x555<=x556)));

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x557 = 41210876490LLU;
	int16_t x559 = -990;

	t71 = (x557<<(x558<(x559<=x560)));

	if (t71 != 82421752980LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x565 = 4U;
	int32_t x566 = -1;
	int64_t x567 = 1793618641723235LL;
	volatile int8_t x568 = INT8_MIN;
	volatile int32_t t72 = -28048720;

	t72 = (x565<<(x566<(x567<=x568)));

	if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x569 = 23U;
	static uint8_t x570 = 123U;
	int32_t t73 = 33850176;

	t73 = (x569<<(x570<(x571<=x572)));

	if (t73 != 23) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x573 = UINT32_MAX;
	static uint16_t x574 = 1U;
	static uint32_t t74 = UINT32_MAX;

	t74 = (x573<<(x574<(x575<=x576)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x581 = 2558510;
	int16_t x582 = INT16_MAX;
	uint16_t x584 = UINT16_MAX;
	int32_t t75 = 9692207;

	t75 = (x581<<(x582<(x583<=x584)));

	if (t75 != 2558510) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x585 = 58;
	volatile int16_t x586 = INT16_MIN;
	uint32_t x587 = UINT32_MAX;
	int64_t x588 = -1LL;
	int32_t t76 = 11556;

	t76 = (x585<<(x586<(x587<=x588)));

	if (t76 != 116) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x593 = 0U;
	volatile int64_t x594 = INT64_MAX;
	int8_t x595 = INT8_MIN;
	volatile int32_t t77 = -13001;

	t77 = (x593<<(x594<(x595<=x596)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x597 = INT8_MAX;
	volatile int8_t x598 = INT8_MIN;
	int64_t x599 = -1LL;
	int8_t x600 = 12;

	t78 = (x597<<(x598<(x599<=x600)));

	if (t78 != 254) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x601 = UINT64_MAX;
	uint32_t x602 = 2U;
	int64_t x603 = INT64_MIN;
	int64_t x604 = -2LL;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x601<<(x602<(x603<=x604)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x609 = 55;
	int16_t x610 = -1;
	uint32_t x611 = 73526U;
	volatile int64_t x612 = INT64_MIN;
	static int32_t t80 = -30698693;

	t80 = (x609<<(x610<(x611<=x612)));

	if (t80 != 110) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x621 = 100U;
	int32_t x622 = -1;
	int64_t x623 = INT64_MIN;
	int8_t x624 = INT8_MIN;
	static uint32_t t81 = 1970U;

	t81 = (x621<<(x622<(x623<=x624)));

	if (t81 != 200U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x625 = INT16_MAX;
	static volatile int64_t x626 = -1LL;
	static volatile int64_t x627 = INT64_MIN;
	volatile int32_t t82 = 498822522;

	t82 = (x625<<(x626<(x627<=x628)));

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x633 = 370001603966672LLU;
	uint16_t x634 = 12U;
	uint8_t x635 = 127U;
	int64_t x636 = 1729704560579262164LL;
	volatile uint64_t t83 = 158232046LLU;

	t83 = (x633<<(x634<(x635<=x636)));

	if (t83 != 370001603966672LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x641 = 117U;
	uint32_t x642 = 546506564U;
	int8_t x643 = INT8_MAX;
	int32_t t84 = 10;

	t84 = (x641<<(x642<(x643<=x644)));

	if (t84 != 117) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x645 = UINT64_MAX;
	int32_t x646 = 174731685;
	int64_t x647 = INT64_MIN;
	uint8_t x648 = UINT8_MAX;

	t85 = (x645<<(x646<(x647<=x648)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x649 = UINT32_MAX;
	int32_t x650 = INT32_MAX;
	uint32_t x651 = UINT32_MAX;
	uint8_t x652 = 126U;
	uint32_t t86 = UINT32_MAX;

	t86 = (x649<<(x650<(x651<=x652)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x657 = 279U;
	static volatile int8_t x658 = -1;
	uint32_t x659 = 3U;
	static uint8_t x660 = UINT8_MAX;
	static volatile int32_t t87 = -32422;

	t87 = (x657<<(x658<(x659<=x660)));

	if (t87 != 558) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x661 = 2601;
	int8_t x663 = INT8_MIN;

	t88 = (x661<<(x662<(x663<=x664)));

	if (t88 != 5202) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x665 = 1U;
	static uint64_t x667 = 18142LLU;

	t89 = (x665<<(x666<(x667<=x668)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x670 = 2895U;
	int64_t x671 = 11132706447363LL;
	int8_t x672 = -1;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x669<<(x670<(x671<=x672)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x697 = UINT64_MAX;
	static int8_t x699 = INT8_MIN;
	int16_t x700 = INT16_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = (x697<<(x698<(x699<=x700)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x706 = UINT32_MAX;
	int32_t t92 = 506197321;

	t92 = (x705<<(x706<(x707<=x708)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x722 = INT8_MAX;
	static int32_t x723 = -350628;
	uint32_t x724 = 2388329U;
	uint64_t t93 = UINT64_MAX;

	t93 = (x721<<(x722<(x723<=x724)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x725 = UINT32_MAX;
	uint16_t x727 = UINT16_MAX;
	volatile uint32_t t94 = 15246U;

	t94 = (x725<<(x726<(x727<=x728)));

	if (t94 != 4294967294U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x729 = 2164627714651917697LL;
	int16_t x730 = INT16_MAX;
	int16_t x731 = -1;
	int64_t x732 = INT64_MIN;
	static volatile int64_t t95 = -15390402649350512LL;

	t95 = (x729<<(x730<(x731<=x732)));

	if (t95 != 2164627714651917697LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x733 = 1U;
	volatile int16_t x735 = -220;
	int32_t x736 = INT32_MIN;
	int32_t t96 = -1465577;

	t96 = (x733<<(x734<(x735<=x736)));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x742 = 15860123;
	static volatile int64_t x743 = INT64_MIN;
	volatile int64_t x744 = INT64_MAX;

	t97 = (x741<<(x742<(x743<=x744)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x753 = 412905785U;
	uint16_t x756 = 5598U;
	volatile uint32_t t98 = 5245U;

	t98 = (x753<<(x754<(x755<=x756)));

	if (t98 != 412905785U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x757 = 15U;
	int16_t x759 = 17;
	volatile int16_t x760 = INT16_MIN;
	int32_t t99 = -284654;

	t99 = (x757<<(x758<(x759<=x760)));

	if (t99 != 30) { NG(); } else { ; }
	
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

