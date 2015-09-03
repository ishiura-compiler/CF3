#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x19 = INT64_MIN;
uint8_t x26 = 84U;
volatile uint32_t x27 = 928316U;
uint32_t x31 = UINT32_MAX;
int64_t x34 = INT64_MIN;
static int16_t x35 = -1;
static int64_t x41 = 22533813520563LL;
int16_t x48 = 1530;
int32_t x64 = INT32_MIN;
int32_t t8 = -1318600;
uint32_t t9 = 809607U;
static int16_t x79 = -4976;
volatile int32_t x91 = -1;
int32_t t14 = -7461;
volatile int16_t x94 = -491;
static int32_t t15 = 142;
uint8_t x97 = 53U;
uint32_t x99 = UINT32_MAX;
volatile int64_t x103 = 11204961LL;
int16_t x106 = INT16_MAX;
uint8_t x108 = 0U;
volatile int64_t x113 = INT64_MIN;
int64_t x135 = 30208653475424LL;
volatile uint8_t x139 = 0U;
uint8_t x143 = 21U;
int64_t x153 = 279999947501LL;
static uint16_t x155 = 0U;
int32_t x158 = -7541416;
int32_t t27 = 43;
int16_t x167 = INT16_MIN;
int64_t x178 = INT64_MIN;
volatile int32_t x195 = INT32_MIN;
static volatile int32_t t32 = 160177;
uint64_t t34 = UINT64_MAX;
static uint64_t x214 = 265032022329LLU;
volatile uint8_t x218 = UINT8_MAX;
int16_t x238 = INT16_MIN;
int16_t x239 = INT16_MIN;
uint32_t x256 = 61440U;
uint64_t x257 = 19679563LLU;
volatile int8_t x268 = INT8_MIN;
volatile uint32_t x269 = UINT32_MAX;
uint32_t x275 = 262987U;
volatile int8_t x288 = -1;
volatile int32_t t45 = -23672782;
int32_t x313 = INT32_MIN;
int8_t x315 = INT8_MIN;
uint8_t x321 = 1U;
int64_t t52 = INT64_MAX;
static volatile int64_t t53 = INT64_MAX;
uint64_t x348 = 2015097682LLU;
static int8_t x364 = -41;
volatile int8_t x371 = -1;
int16_t x385 = -1;
int32_t x389 = INT32_MIN;
int8_t x391 = 2;
volatile int8_t x408 = 6;
volatile int32_t t63 = INT32_MIN;
int32_t t64 = -1;
static uint32_t t65 = 576648U;
uint16_t x434 = 2091U;
uint16_t x437 = UINT16_MAX;
volatile int16_t x440 = INT16_MIN;
int32_t x445 = INT32_MIN;
int64_t x447 = INT64_MIN;
uint8_t x452 = 5U;
uint32_t x474 = 7543U;
int32_t x475 = 43971467;
static int32_t x479 = -1;
int8_t x481 = -1;
static int8_t x494 = -1;
uint8_t x495 = 3U;
uint32_t x529 = 5186U;
uint64_t x545 = 180260352138704LLU;
static int8_t x559 = 0;
int32_t t81 = 52;
int8_t x569 = -3;
volatile int32_t t82 = 784;
volatile int64_t x577 = 3063LL;
int64_t x578 = INT64_MIN;
int16_t x579 = INT16_MIN;
static int64_t x591 = INT64_MAX;
static uint8_t x592 = 93U;
static uint16_t x605 = 684U;
volatile int32_t t87 = 2418;
int32_t x614 = INT32_MIN;
static uint8_t x639 = 73U;
int32_t t90 = 76418585;
uint64_t x657 = 555679377436763LLU;
int8_t x659 = INT8_MAX;
int16_t x670 = 0;
int16_t x671 = -5;


void f0(void) {
	uint64_t x13 = 3976524844818LLU;
	int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MIN;
	static uint32_t x16 = 707604995U;
	uint64_t t0 = 12089966LLU;

	t0 = (x13/(x14<(x15^x16)));

	if (t0 != 3976524844818LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x17 = 37U;
	int64_t x18 = -1LL;
	int64_t x20 = INT64_MIN;
	volatile int32_t t1 = 15178393;

	t1 = (x17/(x18<(x19^x20)));

	if (t1 != 37) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x25 = -1;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t2 = 2;

	t2 = (x25/(x26<(x27^x28)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x29 = 13555;
	int32_t x30 = 1;
	int16_t x32 = INT16_MAX;
	int32_t t3 = 0;

	t3 = (x29/(x30<(x31^x32)));

	if (t3 != 13555) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x33 = UINT32_MAX;
	uint8_t x36 = 7U;
	uint32_t t4 = UINT32_MAX;

	t4 = (x33/(x34<(x35^x36)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = -1;
	volatile int32_t x39 = 58;
	uint8_t x40 = 4U;
	int64_t t5 = INT64_MIN;

	t5 = (x37/(x38<(x39^x40)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	static uint64_t x44 = 1LLU;
	volatile int64_t t6 = -681214LL;

	t6 = (x41/(x42<(x43^x44)));

	if (t6 != 22533813520563LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -1;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	volatile int32_t t7 = -1632999;

	t7 = (x45/(x46<(x47^x48)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x62 = 33U;
	int8_t x63 = INT8_MIN;

	t8 = (x61/(x62<(x63^x64)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x69 = 374U;
	volatile uint8_t x70 = 45U;
	volatile int32_t x71 = 1895;
	uint16_t x72 = UINT16_MAX;

	t9 = (x69/(x70<(x71^x72)));

	if (t9 != 374U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x73 = UINT32_MAX;
	uint64_t x74 = 228268427792LLU;
	int16_t x75 = -7496;
	static uint64_t x76 = 22952LLU;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x73/(x74<(x75^x76)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x77 = -9;
	uint16_t x78 = 0U;
	uint64_t x80 = 5959494LLU;
	volatile int32_t t11 = -1;

	t11 = (x77/(x78<(x79^x80)));

	if (t11 != -9) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MAX;
	volatile int16_t x84 = INT16_MIN;
	int32_t t12 = 882;

	t12 = (x81/(x82<(x83^x84)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x85 = -1LL;
	volatile int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	uint64_t x88 = 4137443117586LLU;
	static int64_t t13 = -1844080393489805424LL;

	t13 = (x85/(x86<(x87^x88)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x89 = 58;
	static int16_t x90 = 0;
	static int8_t x92 = -11;

	t14 = (x89/(x90<(x91^x92)));

	if (t14 != 58) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = 1;
	volatile int64_t x95 = INT64_MAX;
	static volatile int8_t x96 = 0;

	t15 = (x93/(x94<(x95^x96)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x98 = 0U;
	uint64_t x100 = 7376682481434LLU;
	volatile int32_t t16 = -1021375;

	t16 = (x97/(x98<(x99^x100)));

	if (t16 != 53) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x101 = -1;
	volatile uint64_t x102 = 5LLU;
	uint8_t x104 = 19U;
	volatile int32_t t17 = 1304;

	t17 = (x101/(x102<(x103^x104)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x105 = -1;
	static volatile int64_t x107 = INT64_MAX;
	int32_t t18 = -18555;

	t18 = (x105/(x106<(x107^x108)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x114 = 320515LL;
	int32_t x115 = -1;
	int64_t x116 = -16258292LL;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x113/(x114<(x115^x116)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = -1149478LL;
	int32_t x122 = INT32_MIN;
	int8_t x123 = -21;
	int64_t x124 = INT64_MIN;
	volatile int64_t t20 = -299718804733279LL;

	t20 = (x121/(x122<(x123^x124)));

	if (t20 != -1149478LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	int16_t x127 = -1;
	int8_t x128 = INT8_MIN;
	int64_t t21 = INT64_MIN;

	t21 = (x125/(x126<(x127^x128)));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	int8_t x131 = 21;
	int8_t x132 = INT8_MIN;
	int32_t t22 = 0;

	t22 = (x129/(x130<(x131^x132)));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = INT8_MAX;
	static volatile int8_t x134 = -29;
	int32_t x136 = 13633;
	volatile int32_t t23 = -1;

	t23 = (x133/(x134<(x135^x136)));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x137 = INT16_MIN;
	volatile int32_t x138 = INT32_MIN;
	uint8_t x140 = 3U;
	int32_t t24 = 395272;

	t24 = (x137/(x138<(x139^x140)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x141 = 3U;
	int8_t x142 = INT8_MIN;
	static uint8_t x144 = 52U;
	int32_t t25 = 793552828;

	t25 = (x141/(x142<(x143^x144)));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x154 = 0;
	static uint64_t x156 = UINT64_MAX;
	int64_t t26 = -370047596LL;

	t26 = (x153/(x154<(x155^x156)));

	if (t26 != 279999947501LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = 4873;
	int8_t x159 = INT8_MIN;
	int32_t x160 = INT32_MIN;

	t27 = (x157/(x158<(x159^x160)));

	if (t27 != 4873) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	static volatile int64_t x168 = INT64_MIN;
	int32_t t28 = INT32_MIN;

	t28 = (x165/(x166<(x167^x168)));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x177 = -1;
	uint32_t x179 = UINT32_MAX;
	static volatile uint8_t x180 = 1U;
	static volatile int32_t t29 = -7;

	t29 = (x177/(x178<(x179^x180)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MIN;
	int64_t x183 = -1LL;
	uint32_t x184 = UINT32_MAX;
	static volatile int32_t t30 = INT32_MAX;

	t30 = (x181/(x182<(x183^x184)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x193 = 3417403025582LLU;
	int64_t x194 = INT64_MIN;
	int64_t x196 = INT64_MIN;
	uint64_t t31 = 17072962LLU;

	t31 = (x193/(x194<(x195^x196)));

	if (t31 != 3417403025582LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x197 = INT8_MIN;
	static volatile uint32_t x198 = 589239U;
	static int16_t x199 = INT16_MIN;
	uint32_t x200 = 1U;

	t32 = (x197/(x198<(x199^x200)));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x201 = 20U;
	int8_t x202 = 3;
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t33 = 527940705;

	t33 = (x201/(x202<(x203^x204)));

	if (t33 != 20) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x206 = INT16_MAX;
	int32_t x207 = 7;
	uint32_t x208 = 7067770U;

	t34 = (x205/(x206<(x207^x208)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x213 = INT8_MAX;
	int64_t x215 = -1LL;
	uint16_t x216 = 20U;
	int32_t t35 = 8234844;

	t35 = (x213/(x214<(x215^x216)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x217 = UINT8_MAX;
	static uint64_t x219 = 8102413568674LLU;
	int64_t x220 = INT64_MIN;
	volatile int32_t t36 = -423;

	t36 = (x217/(x218<(x219^x220)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x229 = INT16_MIN;
	int32_t x230 = -98323435;
	int32_t x231 = 25002;
	int32_t x232 = -1;
	static int32_t t37 = -213623907;

	t37 = (x229/(x230<(x231^x232)));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x237 = -16939131;
	int16_t x240 = INT16_MAX;
	static volatile int32_t t38 = -15157;

	t38 = (x237/(x238<(x239^x240)));

	if (t38 != -16939131) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x241 = 13U;
	int64_t x242 = 403116475205411311LL;
	uint64_t x243 = 2092774546994390769LLU;
	int32_t x244 = 1;
	int32_t t39 = 0;

	t39 = (x241/(x242<(x243^x244)));

	if (t39 != 13) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x253 = 1;
	static int32_t x254 = 113545;
	int32_t x255 = -1;
	volatile int32_t t40 = 186313006;

	t40 = (x253/(x254<(x255^x256)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x258 = INT64_MIN;
	uint16_t x259 = 0U;
	static int8_t x260 = INT8_MIN;
	volatile uint64_t t41 = 61362LLU;

	t41 = (x257/(x258<(x259^x260)));

	if (t41 != 19679563LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x265 = 2U;
	int64_t x266 = INT64_MIN;
	volatile int32_t x267 = -1;
	int32_t t42 = 11467;

	t42 = (x265/(x266<(x267^x268)));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x270 = 0;
	uint32_t x271 = 26877097U;
	int8_t x272 = 1;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (x269/(x270<(x271^x272)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x273 = 0U;
	uint64_t x274 = 1LLU;
	uint8_t x276 = UINT8_MAX;
	int32_t t44 = -667;

	t44 = (x273/(x274<(x275^x276)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x285 = -1;
	volatile uint32_t x286 = 375867U;
	uint8_t x287 = 7U;

	t45 = (x285/(x286<(x287^x288)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x289 = 1133U;
	int16_t x290 = INT16_MIN;
	volatile uint16_t x291 = 10431U;
	int64_t x292 = -1LL;
	volatile int32_t t46 = 3;

	t46 = (x289/(x290<(x291^x292)));

	if (t46 != 1133) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x293 = 1812LL;
	uint32_t x294 = 721U;
	int8_t x295 = INT8_MIN;
	volatile int64_t x296 = INT64_MIN;
	volatile int64_t t47 = 41007549LL;

	t47 = (x293/(x294<(x295^x296)));

	if (t47 != 1812LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x301 = INT8_MIN;
	static uint64_t x302 = 2583767324696LLU;
	uint64_t x303 = 973193384792466170LLU;
	int64_t x304 = INT64_MIN;
	volatile int32_t t48 = 2714669;

	t48 = (x301/(x302<(x303^x304)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x309 = INT16_MAX;
	static uint16_t x310 = UINT16_MAX;
	static int64_t x311 = -199125923131LL;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t49 = 219447;

	t49 = (x309/(x310<(x311^x312)));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x314 = 158U;
	int8_t x316 = INT8_MAX;
	int32_t t50 = INT32_MIN;

	t50 = (x313/(x314<(x315^x316)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x322 = 20835U;
	static int8_t x323 = -1;
	uint64_t x324 = 58704685584775LLU;
	volatile int32_t t51 = 999550;

	t51 = (x321/(x322<(x323^x324)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x325 = INT64_MAX;
	int8_t x326 = INT8_MIN;
	static int32_t x327 = 98;
	static int16_t x328 = 409;

	t52 = (x325/(x326<(x327^x328)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x329 = INT64_MAX;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MAX;
	uint8_t x332 = 0U;

	t53 = (x329/(x330<(x331^x332)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x345 = -1LL;
	static uint64_t x346 = 15014655480464LLU;
	int32_t x347 = INT32_MIN;
	volatile int64_t t54 = -1LL;

	t54 = (x345/(x346<(x347^x348)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MIN;
	int32_t t55 = INT32_MIN;

	t55 = (x361/(x362<(x363^x364)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x369 = -1;
	static int64_t x370 = INT64_MIN;
	static uint16_t x372 = UINT16_MAX;
	int32_t t56 = -1882961;

	t56 = (x369/(x370<(x371^x372)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x377 = 12U;
	uint8_t x378 = 57U;
	uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MIN;
	volatile uint32_t t57 = 417207U;

	t57 = (x377/(x378<(x379^x380)));

	if (t57 != 12U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x386 = INT64_MIN;
	int8_t x387 = -48;
	int64_t x388 = -1LL;
	volatile int32_t t58 = -33481476;

	t58 = (x385/(x386<(x387^x388)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x390 = 23LL;
	uint32_t x392 = 1868832159U;
	int32_t t59 = INT32_MIN;

	t59 = (x389/(x390<(x391^x392)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x393 = INT8_MAX;
	uint8_t x394 = 5U;
	volatile int64_t x395 = INT64_MAX;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t60 = 1341780;

	t60 = (x393/(x394<(x395^x396)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x397 = -13569446;
	int64_t x398 = INT64_MIN;
	static int16_t x399 = -1;
	int32_t x400 = 395695;
	int32_t t61 = -235754;

	t61 = (x397/(x398<(x399^x400)));

	if (t61 != -13569446) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x401 = INT64_MIN;
	volatile int8_t x402 = INT8_MAX;
	uint64_t x403 = 4127137136LLU;
	uint8_t x404 = 7U;
	int64_t t62 = INT64_MIN;

	t62 = (x401/(x402<(x403^x404)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x405 = INT32_MIN;
	int32_t x406 = INT32_MIN;
	static int16_t x407 = INT16_MAX;

	t63 = (x405/(x406<(x407^x408)));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x413 = 0;
	uint32_t x414 = 9U;
	static int32_t x415 = -53751;
	int16_t x416 = INT16_MIN;

	t64 = (x413/(x414<(x415^x416)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x417 = 106U;
	uint8_t x418 = 17U;
	int64_t x419 = INT64_MAX;
	volatile uint32_t x420 = 55599053U;

	t65 = (x417/(x418<(x419^x420)));

	if (t65 != 106U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x425 = 279;
	int32_t x426 = 21;
	uint8_t x427 = UINT8_MAX;
	static uint16_t x428 = 33U;
	static int32_t t66 = -867;

	t66 = (x425/(x426<(x427^x428)));

	if (t66 != 279) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x433 = -32;
	int32_t x435 = INT32_MIN;
	static volatile int16_t x436 = INT16_MIN;
	int32_t t67 = 0;

	t67 = (x433/(x434<(x435^x436)));

	if (t67 != -32) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MIN;
	int32_t t68 = -1;

	t68 = (x437/(x438<(x439^x440)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x446 = 9LLU;
	int16_t x448 = INT16_MIN;
	int32_t t69 = INT32_MIN;

	t69 = (x445/(x446<(x447^x448)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x449 = INT16_MIN;
	int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MAX;
	static volatile int32_t t70 = -242;

	t70 = (x449/(x450<(x451^x452)));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x469 = INT8_MIN;
	int64_t x470 = INT64_MIN;
	int16_t x471 = -1;
	int16_t x472 = 0;
	volatile int32_t t71 = -28720755;

	t71 = (x469/(x470<(x471^x472)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x473 = -1LL;
	uint16_t x476 = 297U;
	volatile int64_t t72 = 8726730030051LL;

	t72 = (x473/(x474<(x475^x476)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x477 = 2U;
	int64_t x478 = 4LL;
	int16_t x480 = INT16_MIN;
	volatile uint32_t t73 = 1U;

	t73 = (x477/(x478<(x479^x480)));

	if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x482 = -1;
	int64_t x483 = 808782852978LL;
	uint32_t x484 = 13U;
	int32_t t74 = -40559;

	t74 = (x481/(x482<(x483^x484)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x493 = 57U;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t75 = 1;

	t75 = (x493/(x494<(x495^x496)));

	if (t75 != 57) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x497 = INT16_MIN;
	int8_t x498 = -1;
	static uint16_t x499 = 68U;
	uint8_t x500 = UINT8_MAX;
	int32_t t76 = -2;

	t76 = (x497/(x498<(x499^x500)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x530 = -1585779547852837823LL;
	volatile int16_t x531 = INT16_MIN;
	int16_t x532 = INT16_MAX;
	uint32_t t77 = 29271U;

	t77 = (x529/(x530<(x531^x532)));

	if (t77 != 5186U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x546 = -551;
	uint32_t x547 = 17479U;
	volatile int64_t x548 = 17183651169252LL;
	uint64_t t78 = 210132208LLU;

	t78 = (x545/(x546<(x547^x548)));

	if (t78 != 180260352138704LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x553 = INT64_MIN;
	int16_t x554 = -1;
	int64_t x555 = -1LL;
	int8_t x556 = -1;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x553/(x554<(x555^x556)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x557 = UINT16_MAX;
	volatile uint8_t x558 = 109U;
	static uint32_t x560 = UINT32_MAX;
	int32_t t80 = -7452426;

	t80 = (x557/(x558<(x559^x560)));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x565 = INT8_MAX;
	volatile int16_t x566 = -1;
	int8_t x567 = INT8_MAX;
	uint8_t x568 = 5U;

	t81 = (x565/(x566<(x567^x568)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x570 = 178644LLU;
	int8_t x571 = -1;
	int64_t x572 = INT64_MAX;

	t82 = (x569/(x570<(x571^x572)));

	if (t82 != -3) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x580 = INT64_MIN;
	static int64_t t83 = -32462285430464LL;

	t83 = (x577/(x578<(x579^x580)));

	if (t83 != 3063LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x585 = INT32_MIN;
	static volatile int64_t x586 = INT64_MIN;
	int16_t x587 = INT16_MAX;
	int16_t x588 = INT16_MIN;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x585/(x586<(x587^x588)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x589 = UINT64_MAX;
	static uint16_t x590 = 14U;
	uint64_t t85 = UINT64_MAX;

	t85 = (x589/(x590<(x591^x592)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x601 = INT32_MIN;
	static int16_t x602 = INT16_MAX;
	int16_t x603 = INT16_MIN;
	int32_t x604 = INT32_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x601/(x602<(x603^x604)));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x606 = 1U;
	uint16_t x607 = 191U;
	static uint8_t x608 = 0U;

	t87 = (x605/(x606<(x607^x608)));

	if (t87 != 684) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x613 = INT64_MAX;
	volatile uint16_t x615 = UINT16_MAX;
	int16_t x616 = INT16_MIN;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x613/(x614<(x615^x616)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x629 = 3779U;
	int8_t x630 = INT8_MIN;
	int8_t x631 = -1;
	int32_t x632 = INT32_MIN;
	static int32_t t89 = 1124411;

	t89 = (x629/(x630<(x631^x632)));

	if (t89 != 3779) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x637 = UINT8_MAX;
	static int64_t x638 = INT64_MAX;
	uint64_t x640 = UINT64_MAX;

	t90 = (x637/(x638<(x639^x640)));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x645 = 255U;
	int16_t x646 = -625;
	int64_t x647 = 210113949778065018LL;
	static volatile uint16_t x648 = 17920U;
	int32_t t91 = 299804824;

	t91 = (x645/(x646<(x647^x648)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x653 = -1;
	int16_t x654 = -1;
	static int64_t x655 = INT64_MAX;
	static int32_t x656 = 3;
	static int32_t t92 = -765984019;

	t92 = (x653/(x654<(x655^x656)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x658 = 1;
	static uint32_t x660 = UINT32_MAX;
	static uint64_t t93 = 1330LLU;

	t93 = (x657/(x658<(x659^x660)));

	if (t93 != 555679377436763LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x661 = -1LL;
	static volatile uint64_t x662 = 106502LLU;
	static uint8_t x663 = 11U;
	int32_t x664 = -1;
	volatile int64_t t94 = 267LL;

	t94 = (x661/(x662<(x663^x664)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x665 = UINT8_MAX;
	volatile uint8_t x666 = 90U;
	volatile int16_t x667 = INT16_MAX;
	static volatile uint64_t x668 = UINT64_MAX;
	static volatile int32_t t95 = -474411755;

	t95 = (x665/(x666<(x667^x668)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x669 = INT8_MAX;
	volatile int16_t x672 = -1;
	volatile int32_t t96 = -635357211;

	t96 = (x669/(x670<(x671^x672)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x673 = -1;
	static int64_t x674 = 1LL;
	int64_t x675 = INT64_MIN;
	static int64_t x676 = -1LL;
	int32_t t97 = -11;

	t97 = (x673/(x674<(x675^x676)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x677 = UINT8_MAX;
	uint32_t x678 = 10625U;
	int16_t x679 = 1;
	int16_t x680 = INT16_MAX;
	volatile int32_t t98 = -10373;

	t98 = (x677/(x678<(x679^x680)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x685 = 3U;
	static int32_t x686 = 5;
	volatile uint64_t x687 = 3272028276LLU;
	static int32_t x688 = INT32_MAX;
	volatile int32_t t99 = -37137;

	t99 = (x685/(x686<(x687^x688)));

	if (t99 != 3) { NG(); } else { ; }
	
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

