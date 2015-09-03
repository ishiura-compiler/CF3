#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x5 = UINT32_MAX;
static int8_t x18 = 55;
int16_t x22 = -1;
uint32_t x28 = 16589U;
volatile uint32_t t3 = 2729610U;
volatile uint32_t x33 = 14151U;
static volatile uint64_t x36 = UINT64_MAX;
static uint32_t x40 = 321U;
volatile int32_t x45 = INT32_MAX;
volatile int32_t x46 = INT32_MAX;
uint32_t x66 = 150586167U;
uint32_t x68 = 232294U;
volatile uint16_t x85 = UINT16_MAX;
int32_t x86 = INT32_MAX;
int64_t x115 = -5716414803696LL;
volatile int64_t x126 = 3272131827841552051LL;
volatile int32_t x128 = -637;
int8_t x139 = 3;
static int64_t x140 = INT64_MAX;
int8_t x153 = INT8_MIN;
int16_t x154 = -544;
int16_t x155 = -2;
int32_t x170 = INT32_MAX;
int32_t x172 = INT32_MAX;
volatile int8_t x179 = -1;
volatile uint32_t t23 = 1079U;
volatile int16_t x190 = INT16_MIN;
int64_t x195 = -6838LL;
volatile uint32_t t25 = 6497U;
int32_t x206 = -10840063;
int32_t x221 = INT32_MIN;
int32_t x224 = INT32_MAX;
volatile int16_t x228 = 3051;
int32_t x229 = INT32_MIN;
volatile int32_t t33 = -1599299;
int32_t x266 = -235;
int32_t t35 = -25051;
int32_t x288 = INT32_MAX;
static int8_t x290 = INT8_MAX;
int64_t x295 = INT64_MIN;
int32_t x299 = INT32_MIN;
int64_t x300 = INT64_MAX;
int32_t t41 = 4518;
volatile uint64_t x322 = UINT64_MAX;
int8_t x323 = INT8_MIN;
static int64_t x339 = INT64_MIN;
static int16_t x340 = -1;
volatile uint32_t t44 = 484278U;
static volatile uint8_t x341 = UINT8_MAX;
int64_t x343 = -32357881LL;
int32_t t45 = -696491;
uint8_t x352 = UINT8_MAX;
volatile uint64_t t47 = 2288074LLU;
static int64_t x383 = INT64_MAX;
int64_t x387 = -4953603658LL;
volatile uint64_t x392 = 2512055286490LLU;
int16_t x412 = 13346;
static uint64_t x423 = 47280997LLU;
static uint16_t x426 = UINT16_MAX;
int64_t x427 = -1LL;
int32_t t58 = -21;
int8_t x437 = 1;
int64_t x452 = 43289644222LL;
uint64_t x470 = 1LLU;
int8_t x471 = -7;
int32_t x473 = -1;
volatile uint16_t x478 = UINT16_MAX;
static volatile int16_t x480 = 1;
volatile int8_t x486 = INT8_MAX;
int32_t x487 = INT32_MAX;
int8_t x491 = -1;
int16_t x495 = 1;
volatile uint8_t x496 = UINT8_MAX;
volatile uint64_t x498 = 542LLU;
static volatile uint64_t x499 = 260LLU;
int32_t x509 = INT32_MIN;
int64_t x511 = -1LL;
int64_t x531 = INT64_MIN;
volatile int32_t t70 = 11121;
static uint8_t x543 = 5U;
uint8_t x545 = 28U;
uint32_t x557 = 1212740U;
int64_t x558 = INT64_MAX;
int32_t x591 = 247366876;
int64_t x592 = 25055212185426LL;
uint64_t t76 = 40LLU;
static volatile int16_t x607 = 316;
int32_t t80 = 12680;
volatile uint32_t x628 = UINT32_MAX;
volatile uint64_t x634 = UINT64_MAX;
uint64_t x636 = UINT64_MAX;
uint64_t t82 = 48264658LLU;
int64_t x653 = INT64_MAX;
static uint16_t x654 = 6U;
static int8_t x659 = INT8_MIN;
int64_t x661 = INT64_MAX;
volatile int16_t x671 = -1;
int64_t x678 = 85521881208LL;
static int32_t x680 = INT32_MAX;
uint8_t x689 = 100U;
static int16_t x692 = INT16_MIN;
int64_t t92 = 4LL;
int64_t x701 = -1LL;
int8_t x702 = INT8_MAX;
static volatile int64_t t93 = 1527514280360LL;
uint64_t x725 = 416932LLU;
int64_t x727 = -1LL;
int16_t x734 = -1;
int64_t x741 = -16LL;
static int32_t x742 = INT32_MAX;
int64_t x762 = -6829117LL;
int8_t x763 = INT8_MIN;
int16_t x765 = INT16_MIN;
int8_t x767 = -24;


void f0(void) {
	volatile int16_t x6 = INT16_MAX;
	uint16_t x7 = 1U;
	uint8_t x8 = 51U;
	volatile uint32_t t0 = 2U;

	t0 = (x5/(x6/(x7<x8)));

	if (t0 != 131076U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x17 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MAX;
	static int32_t t1 = -238872563;

	t1 = (x17/(x18/(x19<x20)));

	if (t1 != -39045157) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = -1;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 44U;
	int32_t t2 = 45475250;

	t2 = (x21/(x22/(x23<x24)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = 5092424U;
	int16_t x26 = INT16_MAX;
	volatile int16_t x27 = 1;

	t3 = (x25/(x26/(x27<x28)));

	if (t3 != 155U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x29 = 24U;
	uint8_t x30 = UINT8_MAX;
	volatile int64_t x31 = INT64_MIN;
	uint64_t x32 = UINT64_MAX;
	static int32_t t4 = -6329;

	t4 = (x29/(x30/(x31<x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x34 = -1;
	volatile int16_t x35 = -880;
	volatile uint32_t t5 = 497U;

	t5 = (x33/(x34/(x35<x36)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x37 = INT16_MIN;
	volatile int32_t x38 = INT32_MIN;
	volatile int8_t x39 = 23;
	static int32_t t6 = 937760615;

	t6 = (x37/(x38/(x39<x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x47 = 211708LLU;
	int64_t x48 = 520244847393LL;
	volatile int32_t t7 = 20594144;

	t7 = (x45/(x46/(x47<x48)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = 9U;
	int8_t x50 = INT8_MIN;
	static int64_t x51 = -1214269LL;
	volatile uint16_t x52 = UINT16_MAX;
	volatile int32_t t8 = -3224;

	t8 = (x49/(x50/(x51<x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = 3256;
	uint8_t x62 = 15U;
	int32_t x63 = INT32_MIN;
	int16_t x64 = INT16_MIN;
	int32_t t9 = -7227018;

	t9 = (x61/(x62/(x63<x64)));

	if (t9 != 217) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x65 = INT8_MIN;
	int64_t x67 = -604064451691284LL;
	static volatile uint32_t t10 = 477806920U;

	t10 = (x65/(x66/(x67<x68)));

	if (t10 != 28U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x81 = 165032U;
	static int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MIN;
	int64_t x84 = INT64_MAX;
	int64_t t11 = 2LL;

	t11 = (x81/(x82/(x83<x84)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x87 = 42;
	uint32_t x88 = UINT32_MAX;
	static volatile int32_t t12 = 1713679;

	t12 = (x85/(x86/(x87<x88)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x105 = -200;
	volatile int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	int64_t x108 = -20461843LL;
	volatile int32_t t13 = -523333525;

	t13 = (x105/(x106/(x107<x108)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x113 = UINT32_MAX;
	int32_t x114 = -15593;
	int64_t x116 = 778270597256669550LL;
	uint32_t t14 = 5243U;

	t14 = (x113/(x114/(x115<x116)));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x125 = -1;
	volatile uint32_t x127 = 2U;
	int64_t t15 = 3752718794123LL;

	t15 = (x125/(x126/(x127<x128)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x133 = 1688098LL;
	static uint16_t x134 = 11176U;
	int16_t x135 = 3;
	static uint32_t x136 = 2889U;
	volatile int64_t t16 = 369008152LL;

	t16 = (x133/(x134/(x135<x136)));

	if (t16 != 151LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = 61;
	volatile int32_t t17 = 27482466;

	t17 = (x137/(x138/(x139<x140)));

	if (t17 != -35204649) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x145 = -1LL;
	int16_t x146 = INT16_MIN;
	volatile uint64_t x147 = 38442LLU;
	int64_t x148 = INT64_MAX;
	volatile int64_t t18 = -882395936978578LL;

	t18 = (x145/(x146/(x147<x148)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x156 = -1;
	volatile int32_t t19 = 521104;

	t19 = (x153/(x154/(x155<x156)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = 32472327785003LLU;
	uint32_t x159 = 1116175U;
	volatile uint64_t x160 = 1047031393790LLU;
	uint64_t t20 = 23016LLU;

	t20 = (x157/(x158/(x159<x160)));

	if (t20 != 568075LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x169 = 2497;
	uint16_t x171 = 93U;
	static int32_t t21 = -260039;

	t21 = (x169/(x170/(x171<x172)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x177 = -1;
	uint16_t x178 = UINT16_MAX;
	uint16_t x180 = 1224U;
	volatile int32_t t22 = -1906;

	t22 = (x177/(x178/(x179<x180)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x181 = 20036U;
	int16_t x182 = INT16_MIN;
	static uint64_t x183 = 3284LLU;
	volatile int8_t x184 = -1;

	t23 = (x181/(x182/(x183<x184)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x189 = -1;
	volatile int8_t x191 = 17;
	static int32_t x192 = 20171512;
	volatile int32_t t24 = 47;

	t24 = (x189/(x190/(x191<x192)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 371552U;
	uint32_t x196 = UINT32_MAX;

	t25 = (x193/(x194/(x195<x196)));

	if (t25 != 11559U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x201 = INT16_MAX;
	static uint8_t x202 = 2U;
	int8_t x203 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;
	int32_t t26 = 12993635;

	t26 = (x201/(x202/(x203<x204)));

	if (t26 != 16383) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x205 = UINT16_MAX;
	uint8_t x207 = 29U;
	static int8_t x208 = INT8_MAX;
	int32_t t27 = 554815699;

	t27 = (x205/(x206/(x207<x208)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x213 = INT8_MIN;
	int8_t x214 = 2;
	static int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MAX;
	volatile int32_t t28 = -1196686;

	t28 = (x213/(x214/(x215<x216)));

	if (t28 != -64) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x222 = INT64_MIN;
	static int16_t x223 = 14489;
	int64_t t29 = -68681783183LL;

	t29 = (x221/(x222/(x223<x224)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x225 = INT64_MIN;
	static volatile int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	int64_t t30 = -80108LL;

	t30 = (x225/(x226/(x227<x228)));

	if (t30 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x230 = 20U;
	static uint8_t x231 = UINT8_MAX;
	static uint64_t x232 = UINT64_MAX;
	uint32_t t31 = 337212266U;

	t31 = (x229/(x230/(x231<x232)));

	if (t31 != 107374182U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x237 = -1LL;
	volatile int8_t x238 = 2;
	int8_t x239 = INT8_MIN;
	static volatile int16_t x240 = -1;
	volatile int64_t t32 = 24559742963LL;

	t32 = (x237/(x238/(x239<x240)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x245 = -19;
	uint8_t x246 = UINT8_MAX;
	uint8_t x247 = UINT8_MAX;
	uint16_t x248 = 2692U;

	t33 = (x245/(x246/(x247<x248)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x267 = INT8_MAX;
	static uint8_t x268 = UINT8_MAX;
	uint64_t t34 = 7971037237899546765LLU;

	t34 = (x265/(x266/(x267<x268)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x269 = INT8_MAX;
	int16_t x270 = -4065;
	static int64_t x271 = INT64_MIN;
	static volatile uint16_t x272 = 2U;

	t35 = (x269/(x270/(x271<x272)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	volatile int32_t x279 = -796794;
	uint32_t x280 = UINT32_MAX;
	uint32_t t36 = 394U;

	t36 = (x277/(x278/(x279<x280)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x285 = INT16_MIN;
	volatile uint8_t x286 = UINT8_MAX;
	uint16_t x287 = 7U;
	int32_t t37 = -183;

	t37 = (x285/(x286/(x287<x288)));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x289 = 263306689078LL;
	int8_t x291 = -1;
	volatile uint8_t x292 = UINT8_MAX;
	volatile int64_t t38 = -28LL;

	t38 = (x289/(x290/(x291<x292)));

	if (t38 != 2073281016LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x293 = 2368713U;
	static int64_t x294 = INT64_MIN;
	volatile int16_t x296 = -1;
	int64_t t39 = 1096110563923LL;

	t39 = (x293/(x294/(x295<x296)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x297 = UINT64_MAX;
	static int32_t x298 = -1;
	volatile uint64_t t40 = 117672084LLU;

	t40 = (x297/(x298/(x299<x300)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x305 = 2U;
	static int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MIN;
	volatile int8_t x308 = INT8_MIN;

	t41 = (x305/(x306/(x307<x308)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x317 = 10165;
	int64_t x318 = -53753880038840855LL;
	static volatile int64_t x319 = INT64_MIN;
	static int64_t x320 = INT64_MAX;
	volatile int64_t t42 = 410039525606568692LL;

	t42 = (x317/(x318/(x319<x320)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x321 = INT16_MAX;
	uint8_t x324 = 1U;
	uint64_t t43 = 449636184749864LLU;

	t43 = (x321/(x322/(x323<x324)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x337 = UINT32_MAX;
	static uint8_t x338 = 14U;

	t44 = (x337/(x338/(x339<x340)));

	if (t44 != 306783378U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x342 = INT32_MAX;
	int64_t x344 = INT64_MAX;

	t45 = (x341/(x342/(x343<x344)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x345 = UINT16_MAX;
	static uint8_t x346 = 22U;
	int32_t x347 = 2;
	uint8_t x348 = UINT8_MAX;
	int32_t t46 = 91851687;

	t46 = (x345/(x346/(x347<x348)));

	if (t46 != 2978) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int8_t x350 = -4;
	volatile uint8_t x351 = 93U;

	t47 = (x349/(x350/(x351<x352)));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x361 = INT8_MAX;
	static volatile int8_t x362 = -1;
	volatile uint64_t x363 = 8LLU;
	static uint64_t x364 = 4398515680667LLU;
	static volatile int32_t t48 = -931625858;

	t48 = (x361/(x362/(x363<x364)));

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x381 = INT8_MAX;
	volatile int64_t x382 = INT64_MAX;
	static uint64_t x384 = UINT64_MAX;
	static volatile int64_t t49 = 20089459041LL;

	t49 = (x381/(x382/(x383<x384)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x385 = -1;
	uint16_t x386 = 217U;
	static uint16_t x388 = 2U;
	static int32_t t50 = -2896;

	t50 = (x385/(x386/(x387<x388)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x389 = 17109202LLU;
	volatile int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MAX;
	uint64_t t51 = 88957885LLU;

	t51 = (x389/(x390/(x391<x392)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x393 = -425LL;
	uint16_t x394 = 5705U;
	uint32_t x395 = 5U;
	static uint64_t x396 = 2704331096LLU;
	int64_t t52 = -1032LL;

	t52 = (x393/(x394/(x395<x396)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x409 = INT8_MIN;
	volatile uint32_t x410 = 27303355U;
	int32_t x411 = -1;
	static volatile uint32_t t53 = 28158U;

	t53 = (x409/(x410/(x411<x412)));

	if (t53 != 157U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x413 = 654515211;
	static int32_t x414 = INT32_MIN;
	int64_t x415 = -1LL;
	volatile int16_t x416 = 0;
	volatile int32_t t54 = -5325797;

	t54 = (x413/(x414/(x415<x416)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x417 = UINT16_MAX;
	uint16_t x418 = 2U;
	volatile int32_t x419 = INT32_MAX;
	int64_t x420 = INT64_MAX;
	static int32_t t55 = -354651570;

	t55 = (x417/(x418/(x419<x420)));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x421 = -89033660347LL;
	int16_t x422 = -1;
	int64_t x424 = -1LL;
	volatile int64_t t56 = -673LL;

	t56 = (x421/(x422/(x423<x424)));

	if (t56 != 89033660347LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x425 = INT8_MAX;
	int8_t x428 = INT8_MAX;
	int32_t t57 = 45;

	t57 = (x425/(x426/(x427<x428)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x433 = -2;
	int8_t x434 = -1;
	int32_t x435 = -1;
	uint16_t x436 = 375U;

	t58 = (x433/(x434/(x435<x436)));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x438 = UINT8_MAX;
	uint64_t x439 = 162831821591508LLU;
	int8_t x440 = -1;
	int32_t t59 = -290;

	t59 = (x437/(x438/(x439<x440)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x449 = UINT16_MAX;
	int16_t x450 = INT16_MAX;
	int8_t x451 = INT8_MIN;
	int32_t t60 = 3579;

	t60 = (x449/(x450/(x451<x452)));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x469 = INT16_MAX;
	uint8_t x472 = UINT8_MAX;
	static uint64_t t61 = 146LLU;

	t61 = (x469/(x470/(x471<x472)));

	if (t61 != 32767LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x474 = INT16_MAX;
	int32_t x475 = INT32_MIN;
	int32_t x476 = -1;
	volatile int32_t t62 = 0;

	t62 = (x473/(x474/(x475<x476)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x477 = INT8_MIN;
	int16_t x479 = INT16_MIN;
	static volatile int32_t t63 = -26397;

	t63 = (x477/(x478/(x479<x480)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x485 = -1;
	static int64_t x488 = INT64_MAX;
	volatile int32_t t64 = 56955849;

	t64 = (x485/(x486/(x487<x488)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x489 = INT16_MIN;
	int16_t x490 = -5876;
	static volatile int32_t x492 = 4250;
	int32_t t65 = -7205;

	t65 = (x489/(x490/(x491<x492)));

	if (t65 != 5) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x493 = UINT64_MAX;
	uint32_t x494 = 65621U;
	volatile uint64_t t66 = 1059167708685183LLU;

	t66 = (x493/(x494/(x495<x496)));

	if (t66 != 281110377374766LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x497 = INT16_MIN;
	int16_t x500 = -1;
	uint64_t t67 = 57302400LLU;

	t67 = (x497/(x498/(x499<x500)));

	if (t67 != 34034583161825680LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x510 = -9;
	int16_t x512 = 1;
	int32_t t68 = -126949;

	t68 = (x509/(x510/(x511<x512)));

	if (t68 != 238609294) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x529 = 28886U;
	int64_t x530 = -1LL;
	volatile int8_t x532 = INT8_MIN;
	int64_t t69 = 35491438LL;

	t69 = (x529/(x530/(x531<x532)));

	if (t69 != -28886LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x533 = INT32_MIN;
	int8_t x534 = INT8_MAX;
	int8_t x535 = 2;
	int64_t x536 = INT64_MAX;

	t70 = (x533/(x534/(x535<x536)));

	if (t70 != -16909320) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x541 = INT8_MIN;
	int32_t x542 = 3926756;
	int16_t x544 = INT16_MAX;
	volatile int32_t t71 = -2336094;

	t71 = (x541/(x542/(x543<x544)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x546 = -1;
	int8_t x547 = -1;
	int8_t x548 = 46;
	volatile int32_t t72 = 1662;

	t72 = (x545/(x546/(x547<x548)));

	if (t72 != -28) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x559 = UINT8_MAX;
	uint64_t x560 = UINT64_MAX;
	static int64_t t73 = -1037450589LL;

	t73 = (x557/(x558/(x559<x560)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x569 = INT32_MIN;
	uint16_t x570 = 28U;
	int16_t x571 = INT16_MAX;
	static uint64_t x572 = 5681245714012527LLU;
	volatile int32_t t74 = 95711;

	t74 = (x569/(x570/(x571<x572)));

	if (t74 != -76695844) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x577 = UINT32_MAX;
	static uint64_t x578 = UINT64_MAX;
	int64_t x579 = 52119430005679LL;
	uint64_t x580 = UINT64_MAX;
	static volatile uint64_t t75 = 13LLU;

	t75 = (x577/(x578/(x579<x580)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x589 = 1097U;
	uint64_t x590 = UINT64_MAX;

	t76 = (x589/(x590/(x591<x592)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x593 = INT8_MIN;
	int32_t x594 = -1;
	volatile int16_t x595 = 965;
	uint32_t x596 = UINT32_MAX;
	int32_t t77 = 0;

	t77 = (x593/(x594/(x595<x596)));

	if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x597 = UINT64_MAX;
	int8_t x598 = -12;
	int8_t x599 = INT8_MIN;
	volatile uint32_t x600 = UINT32_MAX;
	uint64_t t78 = 10457904750616811LLU;

	t78 = (x597/(x598/(x599<x600)));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x605 = 443;
	int16_t x606 = INT16_MIN;
	volatile uint32_t x608 = UINT32_MAX;
	int32_t t79 = -216;

	t79 = (x605/(x606/(x607<x608)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x609 = 4U;
	volatile int32_t x610 = -1;
	uint8_t x611 = 0U;
	uint32_t x612 = 751681992U;

	t80 = (x609/(x610/(x611<x612)));

	if (t80 != -4) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x625 = INT32_MIN;
	int16_t x626 = -5680;
	int32_t x627 = INT32_MIN;
	int32_t t81 = 109713;

	t81 = (x625/(x626/(x627<x628)));

	if (t81 != 378078) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x633 = INT16_MIN;
	static uint8_t x635 = 14U;

	t82 = (x633/(x634/(x635<x636)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x641 = INT64_MIN;
	static int16_t x642 = INT16_MIN;
	uint8_t x643 = 15U;
	volatile uint8_t x644 = UINT8_MAX;
	int64_t t83 = 1190400754557LL;

	t83 = (x641/(x642/(x643<x644)));

	if (t83 != 281474976710656LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x645 = INT8_MIN;
	static int64_t x646 = 40316975393681206LL;
	static volatile uint64_t x647 = 7296LLU;
	static uint32_t x648 = UINT32_MAX;
	int64_t t84 = 2821516487474046LL;

	t84 = (x645/(x646/(x647<x648)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x655 = 21;
	uint64_t x656 = 11539799330LLU;
	static int64_t t85 = -804575203LL;

	t85 = (x653/(x654/(x655<x656)));

	if (t85 != 1537228672809129301LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x657 = INT8_MIN;
	uint64_t x658 = 320795558LLU;
	uint8_t x660 = 114U;
	volatile uint64_t t86 = 101275010517159029LLU;

	t86 = (x657/(x658/(x659<x660)));

	if (t86 != 57503115656LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x662 = 1025003082U;
	uint8_t x663 = 36U;
	uint64_t x664 = 1075857489572853LLU;
	int64_t t87 = 9258517040LL;

	t87 = (x661/(x662/(x663<x664)));

	if (t87 != 8998384686LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x669 = -5744;
	uint16_t x670 = UINT16_MAX;
	int8_t x672 = INT8_MAX;
	int32_t t88 = 0;

	t88 = (x669/(x670/(x671<x672)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x677 = -1LL;
	int16_t x679 = -1;
	volatile int64_t t89 = -47736674520409916LL;

	t89 = (x677/(x678/(x679<x680)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x690 = 1U;
	int32_t x691 = INT32_MIN;
	static volatile uint32_t t90 = 44407409U;

	t90 = (x689/(x690/(x691<x692)));

	if (t90 != 100U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x693 = 0;
	volatile int8_t x694 = INT8_MIN;
	int16_t x695 = INT16_MIN;
	static int64_t x696 = INT64_MAX;
	int32_t t91 = -26;

	t91 = (x693/(x694/(x695<x696)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x697 = INT64_MAX;
	volatile int32_t x698 = -1;
	int32_t x699 = -304813;
	static uint8_t x700 = UINT8_MAX;

	t92 = (x697/(x698/(x699<x700)));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x703 = -1;
	volatile int8_t x704 = INT8_MAX;

	t93 = (x701/(x702/(x703<x704)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x713 = INT16_MAX;
	static int16_t x714 = 508;
	int64_t x715 = -1LL;
	int16_t x716 = 26;
	int32_t t94 = -14817513;

	t94 = (x713/(x714/(x715<x716)));

	if (t94 != 64) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x726 = 80U;
	volatile int8_t x728 = INT8_MAX;
	uint64_t t95 = 561711LLU;

	t95 = (x725/(x726/(x727<x728)));

	if (t95 != 5211LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x733 = 0LLU;
	int16_t x735 = -22;
	int64_t x736 = 26LL;
	uint64_t t96 = 129021785493667LLU;

	t96 = (x733/(x734/(x735<x736)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x743 = 0U;
	static volatile uint8_t x744 = 4U;
	volatile int64_t t97 = 42065LL;

	t97 = (x741/(x742/(x743<x744)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x761 = 484336114U;
	int64_t x764 = 546454621786410LL;
	int64_t t98 = 1LL;

	t98 = (x761/(x762/(x763<x764)));

	if (t98 != -70LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x766 = INT8_MAX;
	int16_t x768 = INT16_MAX;
	volatile int32_t t99 = 7011;

	t99 = (x765/(x766/(x767<x768)));

	if (t99 != -258) { NG(); } else { ; }
	
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

