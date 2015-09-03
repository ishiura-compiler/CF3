#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 876U;
volatile int32_t x7 = INT32_MAX;
int32_t t2 = -23;
uint16_t x69 = UINT16_MAX;
volatile int64_t x74 = -476LL;
int8_t x75 = INT8_MIN;
volatile uint8_t x77 = 27U;
uint32_t x105 = 5U;
uint64_t x108 = 327974LLU;
uint32_t x123 = 53576430U;
int32_t x124 = 462350;
static volatile uint16_t x137 = UINT16_MAX;
uint16_t x140 = UINT16_MAX;
uint32_t t12 = 40368U;
int8_t x157 = 42;
int16_t x159 = INT16_MAX;
static uint8_t x161 = UINT8_MAX;
volatile int8_t x164 = 1;
int32_t x198 = INT32_MAX;
int32_t x200 = INT32_MAX;
int32_t x201 = 1295;
uint32_t x204 = UINT32_MAX;
int16_t x222 = 7;
static uint64_t x236 = 10930LLU;
uint64_t x237 = 770157573850904LLU;
static uint32_t x240 = 2667251U;
uint64_t t26 = 76LLU;
int16_t x258 = -3241;
volatile uint32_t t27 = UINT32_MAX;
int8_t x264 = INT8_MIN;
volatile int16_t x270 = INT16_MAX;
uint32_t x281 = UINT32_MAX;
int32_t t32 = -286403;
volatile uint64_t x292 = 2LLU;
uint8_t x318 = UINT8_MAX;
uint8_t x319 = 45U;
volatile int32_t t36 = -13956;
static volatile uint32_t t39 = 30930851U;
uint64_t x365 = UINT64_MAX;
int32_t x383 = INT32_MAX;
static volatile int32_t t43 = -89435;
int64_t x388 = INT64_MAX;
static volatile uint16_t x402 = 5656U;
int16_t x421 = INT16_MAX;
static int8_t x429 = INT8_MAX;
int8_t x430 = INT8_MAX;
int8_t x432 = -1;
static int32_t t49 = -566;
int64_t x437 = INT64_MAX;
uint64_t x439 = UINT64_MAX;
int64_t x440 = INT64_MIN;
volatile int32_t t52 = -10;
static volatile int8_t x449 = INT8_MAX;
int32_t x469 = 1367;
static int64_t x470 = -79445463LL;
static uint32_t x472 = 52678U;
int64_t x477 = INT64_MAX;
static int8_t x501 = INT8_MAX;
volatile uint64_t x502 = 124451442198013LLU;
uint16_t x504 = UINT16_MAX;
static int64_t x521 = 239683331664LL;
volatile uint32_t x522 = 519090U;
volatile int16_t x533 = 197;
int32_t t63 = -1092;
volatile uint8_t x572 = 5U;
static int32_t t66 = 7674876;
uint16_t x624 = 1015U;
static int16_t x635 = -456;
volatile int32_t x636 = -11925433;
int32_t t70 = 299249;
int8_t x638 = 2;
volatile int64_t x639 = INT64_MIN;
int16_t x661 = INT16_MAX;
int8_t x664 = INT8_MAX;
static volatile uint8_t x669 = 0U;
int32_t t74 = -162899;
int64_t x726 = INT64_MIN;
int64_t x727 = 1007462214116205508LL;
volatile uint16_t x739 = 3U;
uint64_t x742 = 46638349137LLU;
static volatile uint8_t x744 = UINT8_MAX;
uint8_t x761 = 74U;
volatile uint32_t x786 = UINT32_MAX;
uint64_t t84 = UINT64_MAX;
int32_t t86 = -3952496;
static volatile int64_t t87 = 1555190029559LL;
uint32_t t90 = 1492U;
uint8_t x830 = 94U;
int8_t x832 = INT8_MIN;
int16_t x839 = -1;
uint8_t x840 = 0U;
static int16_t x848 = 704;
int32_t x859 = INT32_MIN;
static int32_t x894 = -1;
static uint8_t x895 = UINT8_MAX;
static uint32_t x896 = 2U;


void f0(void) {
	int64_t x6 = INT64_MAX;
	volatile int16_t x8 = -3;
	int32_t t0 = 928239;

	t0 = (x5<<(x6<(x7+x8)));

	if (t0 != 876) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 13U;
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MAX;
	int32_t t1 = -2046788;

	t1 = (x9<<(x10<(x11+x12)));

	if (t1 != 26) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = UINT16_MAX;
	int16_t x18 = INT16_MIN;
	int64_t x19 = 104098953115392LL;
	int32_t x20 = INT32_MIN;

	t2 = (x17<<(x18<(x19+x20)));

	if (t2 != 131070) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = -1;
	volatile int16_t x72 = INT16_MIN;
	static int32_t t3 = -38359194;

	t3 = (x69<<(x70<(x71+x72)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x73 = 43LLU;
	uint8_t x76 = UINT8_MAX;
	uint64_t t4 = 969278842LLU;

	t4 = (x73<<(x74<(x75+x76)));

	if (t4 != 86LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x78 = INT32_MIN;
	static uint8_t x79 = 10U;
	volatile int16_t x80 = INT16_MIN;
	int32_t t5 = 112;

	t5 = (x77<<(x78<(x79+x80)));

	if (t5 != 54) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x85 = INT64_MAX;
	int8_t x86 = 0;
	int16_t x87 = INT16_MAX;
	volatile int32_t x88 = -867576843;
	static volatile int64_t t6 = INT64_MAX;

	t6 = (x85<<(x86<(x87+x88)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x89 = 1812063228200240011LLU;
	volatile int64_t x90 = INT64_MAX;
	int8_t x91 = INT8_MIN;
	static uint8_t x92 = 1U;
	static volatile uint64_t t7 = 89349228377402LLU;

	t7 = (x89<<(x90<(x91+x92)));

	if (t7 != 1812063228200240011LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x97 = 21090862LLU;
	int8_t x98 = -1;
	int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MAX;
	uint64_t t8 = 24653LLU;

	t8 = (x97<<(x98<(x99+x100)));

	if (t8 != 21090862LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	uint32_t t9 = 28722320U;

	t9 = (x105<<(x106<(x107+x108)));

	if (t9 != 5U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x121 = 21589767LL;
	volatile int64_t x122 = INT64_MIN;
	int64_t t10 = 1704788LL;

	t10 = (x121<<(x122<(x123+x124)));

	if (t10 != 43179534LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x138 = 1U;
	int32_t x139 = INT32_MIN;
	int32_t t11 = -77929769;

	t11 = (x137<<(x138<(x139+x140)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x149 = 40U;
	uint8_t x150 = 1U;
	int8_t x151 = 3;
	uint32_t x152 = 544678751U;

	t12 = (x149<<(x150<(x151+x152)));

	if (t12 != 80U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x153 = 0;
	int16_t x154 = -1;
	static int64_t x155 = 11247LL;
	static int64_t x156 = 10995700295LL;
	static volatile int32_t t13 = 82935327;

	t13 = (x153<<(x154<(x155+x156)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x158 = 1927;
	uint64_t x160 = UINT64_MAX;
	int32_t t14 = -192554;

	t14 = (x157<<(x158<(x159+x160)));

	if (t14 != 84) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x162 = -1;
	int32_t x163 = -1;
	volatile int32_t t15 = 0;

	t15 = (x161<<(x162<(x163+x164)));

	if (t15 != 510) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x165 = INT16_MAX;
	volatile uint32_t x166 = UINT32_MAX;
	int16_t x167 = -8006;
	uint64_t x168 = 16601310282759594LLU;
	volatile int32_t t16 = -155875378;

	t16 = (x165<<(x166<(x167+x168)));

	if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = INT32_MAX;
	uint32_t x175 = UINT32_MAX;
	uint8_t x176 = 5U;
	volatile int32_t t17 = INT32_MAX;

	t17 = (x173<<(x174<(x175+x176)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x181 = 235437783557311397LL;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = -1;
	volatile int64_t t18 = -10LL;

	t18 = (x181<<(x182<(x183+x184)));

	if (t18 != 470875567114622794LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x197 = UINT32_MAX;
	volatile int16_t x199 = INT16_MIN;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (x197<<(x198<(x199+x200)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x202 = 11U;
	static uint8_t x203 = 3U;
	volatile int32_t t20 = 1766;

	t20 = (x201<<(x202<(x203+x204)));

	if (t20 != 1295) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x205 = 2U;
	int32_t x206 = INT32_MIN;
	static uint64_t x207 = 176LLU;
	int32_t x208 = 2;
	int32_t t21 = 392;

	t21 = (x205<<(x206<(x207+x208)));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x221 = UINT32_MAX;
	static uint8_t x223 = UINT8_MAX;
	int64_t x224 = 1913901540249521339LL;
	static uint32_t t22 = 1620U;

	t22 = (x221<<(x222<(x223+x224)));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x225 = 4U;
	int8_t x226 = INT8_MAX;
	int8_t x227 = -12;
	uint8_t x228 = 56U;
	static volatile uint32_t t23 = 50869U;

	t23 = (x225<<(x226<(x227+x228)));

	if (t23 != 4U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x233 = 4895;
	int64_t x234 = 92867107224778078LL;
	int16_t x235 = -37;
	static volatile int32_t t24 = -20420;

	t24 = (x233<<(x234<(x235+x236)));

	if (t24 != 4895) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x238 = 196062046774342523LLU;
	int16_t x239 = -1;
	static volatile uint64_t t25 = 1045LLU;

	t25 = (x237<<(x238<(x239+x240)));

	if (t25 != 770157573850904LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x249 = 50388598949LLU;
	volatile uint16_t x250 = 14156U;
	int8_t x251 = INT8_MAX;
	int32_t x252 = -19576633;

	t26 = (x249<<(x250<(x251+x252)));

	if (t26 != 50388598949LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x257 = UINT32_MAX;
	static int64_t x259 = INT64_MIN;
	uint32_t x260 = UINT32_MAX;

	t27 = (x257<<(x258<(x259+x260)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x261 = INT8_MAX;
	int8_t x262 = INT8_MAX;
	uint8_t x263 = 4U;
	volatile int32_t t28 = 11724;

	t28 = (x261<<(x262<(x263+x264)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x265 = UINT8_MAX;
	static int32_t x266 = INT32_MAX;
	int8_t x267 = -1;
	static volatile int8_t x268 = 0;
	static volatile int32_t t29 = 12048;

	t29 = (x265<<(x266<(x267+x268)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x271 = INT64_MIN;
	static int16_t x272 = INT16_MAX;
	int32_t t30 = 26;

	t30 = (x269<<(x270<(x271+x272)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x282 = 120U;
	uint16_t x283 = UINT16_MAX;
	static uint8_t x284 = 0U;
	static volatile uint32_t t31 = 4U;

	t31 = (x281<<(x282<(x283+x284)));

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x285 = INT8_MAX;
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = INT64_MIN;
	uint64_t x288 = UINT64_MAX;

	t32 = (x285<<(x286<(x287+x288)));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x289 = 1501;
	int8_t x290 = INT8_MAX;
	static uint8_t x291 = 73U;
	int32_t t33 = -235376547;

	t33 = (x289<<(x290<(x291+x292)));

	if (t33 != 1501) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x301 = 118968726364LLU;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	static volatile uint8_t x304 = 70U;
	volatile uint64_t t34 = 249436LLU;

	t34 = (x301<<(x302<(x303+x304)));

	if (t34 != 118968726364LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x313 = INT8_MAX;
	int16_t x314 = -107;
	int64_t x315 = 1817LL;
	uint64_t x316 = 14406117071326LLU;
	int32_t t35 = 1;

	t35 = (x313<<(x314<(x315+x316)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x317 = UINT8_MAX;
	uint64_t x320 = UINT64_MAX;

	t36 = (x317<<(x318<(x319+x320)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x325 = 569008205819424222LLU;
	int32_t x326 = -264098333;
	volatile int16_t x327 = -50;
	volatile uint8_t x328 = 4U;
	static uint64_t t37 = 4920LLU;

	t37 = (x325<<(x326<(x327+x328)));

	if (t37 != 1138016411638848444LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x341 = 372464U;
	int16_t x342 = 249;
	int64_t x343 = -1LL;
	int8_t x344 = INT8_MAX;
	uint32_t t38 = 868U;

	t38 = (x341<<(x342<(x343+x344)));

	if (t38 != 372464U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x345 = 26U;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	uint64_t x348 = 8745618987726LLU;

	t39 = (x345<<(x346<(x347+x348)));

	if (t39 != 26U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x361 = 18678328298LLU;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = 3U;
	static int64_t x364 = INT64_MIN;
	uint64_t t40 = 13954923LLU;

	t40 = (x361<<(x362<(x363+x364)));

	if (t40 != 18678328298LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x366 = UINT32_MAX;
	volatile uint64_t x367 = 3034628806LLU;
	uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = (x365<<(x366<(x367+x368)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x377 = 0;
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = -1;
	int8_t x380 = INT8_MAX;
	int32_t t42 = -29;

	t42 = (x377<<(x378<(x379+x380)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x381 = 1164;
	int8_t x382 = -1;
	int8_t x384 = -1;

	t43 = (x381<<(x382<(x383+x384)));

	if (t43 != 2328) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x385 = UINT64_MAX;
	static int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MIN;
	static uint64_t t44 = 9102616LLU;

	t44 = (x385<<(x386<(x387+x388)));

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x401 = INT8_MAX;
	volatile uint32_t x403 = 397U;
	static uint64_t x404 = 2724LLU;
	static volatile int32_t t45 = 85;

	t45 = (x401<<(x402<(x403+x404)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x422 = INT8_MAX;
	uint8_t x423 = 5U;
	volatile uint32_t x424 = UINT32_MAX;
	int32_t t46 = 2220;

	t46 = (x421<<(x422<(x423+x424)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x425 = 818;
	uint32_t x426 = 195573U;
	uint8_t x427 = 10U;
	static volatile uint8_t x428 = UINT8_MAX;
	static int32_t t47 = 10869525;

	t47 = (x425<<(x426<(x427+x428)));

	if (t47 != 818) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x431 = -208;
	int32_t t48 = 10;

	t48 = (x429<<(x430<(x431+x432)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x433 = 3U;
	int8_t x434 = INT8_MIN;
	static volatile uint16_t x435 = UINT16_MAX;
	volatile int16_t x436 = INT16_MIN;

	t49 = (x433<<(x434<(x435+x436)));

	if (t49 != 6) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x438 = -1;
	int64_t t50 = INT64_MAX;

	t50 = (x437<<(x438<(x439+x440)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x441 = 4U;
	uint64_t x442 = 64685804361005363LLU;
	uint16_t x443 = UINT16_MAX;
	volatile int64_t x444 = INT64_MIN;
	static int32_t t51 = -37636;

	t51 = (x441<<(x442<(x443+x444)));

	if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x445 = 43U;
	int16_t x446 = -1;
	static volatile int8_t x447 = 0;
	uint32_t x448 = 7739868U;

	t52 = (x445<<(x446<(x447+x448)));

	if (t52 != 43) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x450 = -418;
	uint16_t x451 = UINT16_MAX;
	volatile int16_t x452 = INT16_MIN;
	int32_t t53 = 108999;

	t53 = (x449<<(x450<(x451+x452)));

	if (t53 != 254) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x471 = INT32_MIN;
	volatile int32_t t54 = -1501923;

	t54 = (x469<<(x470<(x471+x472)));

	if (t54 != 2734) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x478 = UINT64_MAX;
	volatile int32_t x479 = INT32_MIN;
	volatile uint64_t x480 = 1392471345765930LLU;
	int64_t t55 = INT64_MAX;

	t55 = (x477<<(x478<(x479+x480)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x503 = INT16_MIN;
	int32_t t56 = -1;

	t56 = (x501<<(x502<(x503+x504)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x505 = 1;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = 0LLU;
	static int8_t x508 = INT8_MIN;
	volatile int32_t t57 = 0;

	t57 = (x505<<(x506<(x507+x508)));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x513 = UINT64_MAX;
	volatile uint8_t x514 = 0U;
	volatile uint16_t x515 = 6U;
	int16_t x516 = -1;
	uint64_t t58 = 3LLU;

	t58 = (x513<<(x514<(x515+x516)));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x523 = INT64_MIN;
	uint32_t x524 = 67U;
	int64_t t59 = 13635LL;

	t59 = (x521<<(x522<(x523+x524)));

	if (t59 != 239683331664LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x525 = UINT32_MAX;
	int16_t x526 = -1;
	int8_t x527 = INT8_MIN;
	int32_t x528 = INT32_MAX;
	uint32_t t60 = 4183396U;

	t60 = (x525<<(x526<(x527+x528)));

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x534 = INT16_MAX;
	int8_t x535 = -61;
	volatile int8_t x536 = -1;
	int32_t t61 = 50526062;

	t61 = (x533<<(x534<(x535+x536)));

	if (t61 != 197) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x553 = INT8_MAX;
	int16_t x554 = -1;
	int16_t x555 = INT16_MIN;
	static uint16_t x556 = 2057U;
	static int32_t t62 = 2039;

	t62 = (x553<<(x554<(x555+x556)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x565 = 30;
	int32_t x566 = -1;
	static int16_t x567 = 0;
	static int64_t x568 = -2033434LL;

	t63 = (x565<<(x566<(x567+x568)));

	if (t63 != 30) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x569 = 111U;
	uint32_t x570 = UINT32_MAX;
	int8_t x571 = INT8_MIN;
	int32_t t64 = -6;

	t64 = (x569<<(x570<(x571+x572)));

	if (t64 != 111) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x585 = UINT32_MAX;
	static volatile int64_t x586 = -1LL;
	int16_t x587 = INT16_MAX;
	volatile uint8_t x588 = 1U;
	uint32_t t65 = 44U;

	t65 = (x585<<(x586<(x587+x588)));

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x593 = UINT8_MAX;
	int32_t x594 = 608156846;
	volatile int16_t x595 = 2949;
	static volatile int16_t x596 = -1;

	t66 = (x593<<(x594<(x595+x596)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x605 = 523658LL;
	int32_t x606 = INT32_MIN;
	uint8_t x607 = 9U;
	uint32_t x608 = 45U;
	static volatile int64_t t67 = 849LL;

	t67 = (x605<<(x606<(x607+x608)));

	if (t67 != 523658LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x609 = UINT32_MAX;
	int16_t x610 = 39;
	int64_t x611 = -1LL;
	uint16_t x612 = 75U;
	volatile uint32_t t68 = 1877681U;

	t68 = (x609<<(x610<(x611+x612)));

	if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x621 = 1U;
	int16_t x622 = INT16_MIN;
	static int16_t x623 = INT16_MIN;
	static int32_t t69 = 5889;

	t69 = (x621<<(x622<(x623+x624)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x633 = 58U;
	static int8_t x634 = INT8_MIN;

	t70 = (x633<<(x634<(x635+x636)));

	if (t70 != 58) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x637 = INT8_MAX;
	int16_t x640 = 0;
	volatile int32_t t71 = 3785;

	t71 = (x637<<(x638<(x639+x640)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x657 = 16447;
	static int16_t x658 = -65;
	volatile int32_t x659 = -1;
	uint16_t x660 = 149U;
	int32_t t72 = -522683953;

	t72 = (x657<<(x658<(x659+x660)));

	if (t72 != 32894) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x662 = 17771374296837905LLU;
	int64_t x663 = -1LL;
	int32_t t73 = 949;

	t73 = (x661<<(x662<(x663+x664)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x670 = 16416364U;
	volatile int16_t x671 = INT16_MIN;
	static volatile uint16_t x672 = 8138U;

	t74 = (x669<<(x670<(x671+x672)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x685 = INT16_MAX;
	int32_t x686 = -148648159;
	static int64_t x687 = -104430721LL;
	volatile uint64_t x688 = 5658748007347LLU;
	volatile int32_t t75 = -9929;

	t75 = (x685<<(x686<(x687+x688)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x689 = 4U;
	uint16_t x690 = 28484U;
	uint8_t x691 = 11U;
	volatile int8_t x692 = 18;
	int32_t t76 = 10330;

	t76 = (x689<<(x690<(x691+x692)));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x701 = UINT32_MAX;
	volatile int8_t x702 = 1;
	static int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MIN;
	uint32_t t77 = UINT32_MAX;

	t77 = (x701<<(x702<(x703+x704)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x725 = 0;
	static uint16_t x728 = 22342U;
	int32_t t78 = -1279778;

	t78 = (x725<<(x726<(x727+x728)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x733 = 202U;
	volatile uint32_t x734 = 314639U;
	static uint64_t x735 = UINT64_MAX;
	int64_t x736 = INT64_MIN;
	volatile int32_t t79 = -21738;

	t79 = (x733<<(x734<(x735+x736)));

	if (t79 != 404) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x737 = 13U;
	int32_t x738 = 72;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t80 = 444515;

	t80 = (x737<<(x738<(x739+x740)));

	if (t80 != 26) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x741 = UINT32_MAX;
	int32_t x743 = 7010623;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x741<<(x742<(x743+x744)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x757 = 83920675;
	uint32_t x758 = 80U;
	int16_t x759 = INT16_MIN;
	volatile int64_t x760 = 112953874965030078LL;
	volatile int32_t t82 = 7175497;

	t82 = (x757<<(x758<(x759+x760)));

	if (t82 != 167841350) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x762 = INT64_MAX;
	int8_t x763 = -1;
	static int16_t x764 = INT16_MIN;
	volatile int32_t t83 = -36168;

	t83 = (x761<<(x762<(x763+x764)));

	if (t83 != 74) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x785 = UINT64_MAX;
	volatile int32_t x787 = INT32_MAX;
	int8_t x788 = -4;

	t84 = (x785<<(x786<(x787+x788)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x789 = 3877U;
	static uint8_t x790 = UINT8_MAX;
	int8_t x791 = 13;
	volatile int8_t x792 = -54;
	uint32_t t85 = 203537488U;

	t85 = (x789<<(x790<(x791+x792)));

	if (t85 != 3877U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x797 = INT16_MAX;
	uint8_t x798 = 25U;
	static volatile uint8_t x799 = 6U;
	volatile uint64_t x800 = 134303972573863677LLU;

	t86 = (x797<<(x798<(x799+x800)));

	if (t86 != 65534) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x801 = 40976095907321800LL;
	int64_t x802 = -2664503879945068537LL;
	volatile int16_t x803 = INT16_MAX;
	int32_t x804 = INT32_MIN;

	t87 = (x801<<(x802<(x803+x804)));

	if (t87 != 81952191814643600LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x805 = 325051363716457879LLU;
	static int16_t x806 = INT16_MAX;
	static uint32_t x807 = 19U;
	volatile int32_t x808 = INT32_MIN;
	uint64_t t88 = 14LLU;

	t88 = (x805<<(x806<(x807+x808)));

	if (t88 != 650102727432915758LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x817 = INT16_MAX;
	int64_t x818 = INT64_MIN;
	static volatile int64_t x819 = 1LL;
	static int64_t x820 = -107LL;
	volatile int32_t t89 = 0;

	t89 = (x817<<(x818<(x819+x820)));

	if (t89 != 65534) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x825 = 615774U;
	uint16_t x826 = 5198U;
	int16_t x827 = INT16_MIN;
	static int16_t x828 = 14;

	t90 = (x825<<(x826<(x827+x828)));

	if (t90 != 615774U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x829 = 1399646;
	int8_t x831 = 0;
	volatile int32_t t91 = 2585618;

	t91 = (x829<<(x830<(x831+x832)));

	if (t91 != 1399646) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x833 = 0U;
	uint32_t x834 = 57U;
	uint32_t x835 = UINT32_MAX;
	static uint64_t x836 = 50015671952LLU;
	volatile int32_t t92 = 57300471;

	t92 = (x833<<(x834<(x835+x836)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x837 = UINT32_MAX;
	int16_t x838 = INT16_MAX;
	uint32_t t93 = UINT32_MAX;

	t93 = (x837<<(x838<(x839+x840)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x841 = 4U;
	volatile int32_t x842 = INT32_MIN;
	volatile int32_t x843 = -14678;
	int8_t x844 = INT8_MIN;
	int32_t t94 = 164;

	t94 = (x841<<(x842<(x843+x844)));

	if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x845 = UINT64_MAX;
	int8_t x846 = INT8_MAX;
	int8_t x847 = INT8_MIN;
	uint64_t t95 = 1097194015351552LLU;

	t95 = (x845<<(x846<(x847+x848)));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x853 = 108245;
	int64_t x854 = -26456831643610018LL;
	volatile int16_t x855 = INT16_MIN;
	int16_t x856 = INT16_MIN;
	int32_t t96 = 54932;

	t96 = (x853<<(x854<(x855+x856)));

	if (t96 != 216490) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x857 = 8U;
	volatile int32_t x858 = 0;
	uint16_t x860 = 51U;
	static volatile int32_t t97 = -78;

	t97 = (x857<<(x858<(x859+x860)));

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x881 = INT16_MAX;
	uint8_t x882 = 10U;
	uint32_t x883 = UINT32_MAX;
	static int64_t x884 = INT64_MIN;
	volatile int32_t t98 = 216463754;

	t98 = (x881<<(x882<(x883+x884)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x893 = 689617685U;
	static uint32_t t99 = 1348U;

	t99 = (x893<<(x894<(x895+x896)));

	if (t99 != 689617685U) { NG(); } else { ; }
	
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

