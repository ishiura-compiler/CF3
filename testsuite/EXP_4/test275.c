#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x14 = 6U;
volatile int16_t x20 = INT16_MIN;
volatile int32_t x24 = INT32_MIN;
int64_t x28 = 7347736964LL;
static uint32_t x38 = UINT32_MAX;
uint32_t x39 = 8U;
int32_t t10 = -532097;
static int64_t x65 = -1LL;
uint32_t x68 = UINT32_MAX;
static volatile int64_t t13 = 120LL;
uint16_t x73 = 20422U;
uint64_t x75 = 35582799134LLU;
static volatile int32_t x76 = -1;
int8_t x77 = 47;
volatile int32_t x83 = INT32_MIN;
int16_t x88 = INT16_MIN;
int16_t x89 = INT16_MIN;
static volatile uint64_t x90 = UINT64_MAX;
volatile int64_t x92 = INT64_MAX;
uint16_t x95 = UINT16_MAX;
int16_t x99 = INT16_MIN;
static uint32_t t26 = 164U;
int8_t x134 = INT8_MAX;
volatile uint32_t t28 = UINT32_MAX;
static int8_t x141 = INT8_MAX;
volatile int32_t t29 = -1;
int16_t x145 = INT16_MIN;
volatile int8_t x146 = 0;
uint64_t x147 = UINT64_MAX;
static int32_t x162 = INT32_MAX;
int32_t x163 = INT32_MAX;
static int32_t x167 = -245;
static volatile uint16_t x173 = 5805U;
static int32_t x175 = -1;
int32_t t38 = -607374316;
int8_t x196 = -59;
volatile uint64_t x219 = 847346LLU;
int16_t x220 = -1;
uint8_t x225 = 3U;
int32_t t47 = 826342;
int16_t x239 = 44;
int16_t x252 = INT16_MAX;
static int8_t x256 = 6;
static uint16_t x258 = 375U;
static uint8_t x264 = UINT8_MAX;
int64_t t56 = 26555196LL;
int32_t x278 = INT32_MAX;
volatile int16_t x286 = -1;
int32_t x289 = 0;
int32_t x291 = 34;
static int32_t t60 = -2189693;
uint32_t x300 = 18U;
static volatile int16_t x305 = 1577;
volatile uint64_t x308 = UINT64_MAX;
int32_t x317 = 2;
volatile uint64_t t67 = 997305919945168152LLU;
int16_t x354 = INT16_MIN;
int8_t x356 = -1;
volatile uint16_t x363 = 0U;
static volatile int16_t x364 = -9909;
int16_t x366 = 0;
volatile int32_t x369 = -1;
volatile int16_t x371 = -157;
int16_t x376 = -1;
int32_t x382 = INT32_MIN;
int8_t x386 = -1;
volatile uint32_t t79 = 184594U;
int8_t x391 = 1;
uint8_t x392 = 56U;
static int64_t x396 = INT64_MAX;
int32_t x398 = -17;
uint32_t t84 = 1U;
static volatile int64_t x409 = 11290028425939LL;
volatile uint16_t x412 = 6U;
static int16_t x413 = INT16_MAX;
uint16_t x416 = 29U;
volatile int16_t x418 = INT16_MIN;
uint32_t x423 = 558544719U;
uint64_t t88 = 342222731047292377LLU;
uint16_t x431 = 1868U;
volatile uint64_t t90 = 1918464040316LLU;
int8_t x434 = 0;
static uint64_t t91 = 29998750293319772LLU;
volatile int8_t x439 = -35;
volatile int32_t t92 = -21304;
static int16_t x443 = -243;
int32_t t95 = -1;
uint32_t x460 = 326U;


void f0(void) {
	volatile uint16_t x1 = 5U;
	uint64_t x2 = 93264347LLU;
	int32_t x3 = 1;
	uint16_t x4 = 1042U;
	volatile int32_t t0 = -4;

	t0 = (x1-(x2<(x3-x4)));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static int64_t x6 = 4163686471636272LL;
	uint8_t x7 = 118U;
	static int8_t x8 = -49;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5-(x6<(x7-x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x15 = 31U;
	int16_t x16 = -1;
	volatile int32_t t2 = 3;

	t2 = (x13-(x14<(x15-x16)));

	if (t2 != -32769) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 271305974206760LL;
	int8_t x18 = -1;
	volatile int8_t x19 = 1;
	static volatile int64_t t3 = 475723020848LL;

	t3 = (x17-(x18<(x19-x20)));

	if (t3 != 271305974206759LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 5U;
	int8_t x22 = -1;
	int16_t x23 = INT16_MIN;
	volatile int32_t t4 = 7803963;

	t4 = (x21-(x22<(x23-x24)));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = -1;
	volatile int8_t x26 = 18;
	static int16_t x27 = INT16_MIN;
	int32_t t5 = 16354;

	t5 = (x25-(x26<(x27-x28)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	volatile int64_t x31 = -1LL;
	static int8_t x32 = INT8_MIN;
	static volatile int32_t t6 = 7024070;

	t6 = (x29-(x30<(x31-x32)));

	if (t6 != -129) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	uint64_t x40 = 193176LLU;
	static uint32_t t7 = 391U;

	t7 = (x37-(x38<(x39-x40)));

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	uint64_t x42 = UINT64_MAX;
	static int64_t x43 = 64090389LL;
	uint64_t x44 = 2579535565780266398LLU;
	int32_t t8 = 907951;

	t8 = (x41-(x42<(x43-x44)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 8310763LLU;
	int64_t x46 = -124566442725724LL;
	static int32_t x47 = -1608063;
	int64_t x48 = 0LL;
	uint64_t t9 = 287732943400356215LLU;

	t9 = (x45-(x46<(x47-x48)));

	if (t9 != 8310762LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	uint64_t x50 = 5051567768082234LLU;
	static int32_t x51 = -3;
	int32_t x52 = -1;

	t10 = (x49-(x50<(x51-x52)));

	if (t10 != 126) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x57 = -7;
	volatile int32_t x58 = -1;
	int16_t x59 = INT16_MIN;
	int16_t x60 = -4169;
	volatile int32_t t11 = 18769;

	t11 = (x57-(x58<(x59-x60)));

	if (t11 != -7) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = -1;
	uint32_t x62 = 47U;
	int32_t x63 = -1;
	static uint8_t x64 = UINT8_MAX;
	static int32_t t12 = -55238;

	t12 = (x61-(x62<(x63-x64)));

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x66 = INT32_MIN;
	uint8_t x67 = UINT8_MAX;

	t13 = (x65-(x66<(x67-x68)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 41217900359LLU;
	volatile int64_t x70 = INT64_MIN;
	int8_t x71 = -1;
	static int16_t x72 = 230;
	uint64_t t14 = 825588691918519LLU;

	t14 = (x69-(x70<(x71-x72)));

	if (t14 != 41217900358LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x74 = -31;
	int32_t t15 = 656862733;

	t15 = (x73-(x74<(x75-x76)));

	if (t15 != 20422) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x78 = 296917LLU;
	uint32_t x79 = UINT32_MAX;
	int8_t x80 = -24;
	int32_t t16 = 21;

	t16 = (x77-(x78<(x79-x80)));

	if (t16 != 47) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -8325505811750669LL;
	volatile int8_t x82 = INT8_MAX;
	int16_t x84 = INT16_MIN;
	volatile int64_t t17 = 7LL;

	t17 = (x81-(x82<(x83-x84)));

	if (t17 != -8325505811750669LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x85 = UINT8_MAX;
	volatile int32_t x86 = -57042;
	int8_t x87 = -1;
	static volatile int32_t t18 = 0;

	t18 = (x85-(x86<(x87-x88)));

	if (t18 != 254) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x91 = 37;
	int32_t t19 = 122;

	t19 = (x89-(x90<(x91-x92)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = -26413123LL;
	static int8_t x94 = INT8_MAX;
	int64_t x96 = -498140LL;
	static int64_t t20 = 2LL;

	t20 = (x93-(x94<(x95-x96)));

	if (t20 != -26413124LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = UINT8_MAX;
	volatile int16_t x98 = 0;
	volatile uint8_t x100 = UINT8_MAX;
	volatile int32_t t21 = 493157;

	t21 = (x97-(x98<(x99-x100)));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MAX;
	int64_t x102 = INT64_MAX;
	int16_t x103 = -1;
	static uint8_t x104 = UINT8_MAX;
	volatile int32_t t22 = 14453731;

	t22 = (x101-(x102<(x103-x104)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = INT32_MAX;
	int64_t x106 = INT64_MAX;
	volatile uint32_t x107 = 29U;
	static int8_t x108 = -1;
	int32_t t23 = INT32_MAX;

	t23 = (x105-(x106<(x107-x108)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -2;
	int32_t x110 = 1023;
	int16_t x111 = -15981;
	static uint8_t x112 = 0U;
	int32_t t24 = -4883197;

	t24 = (x109-(x110<(x111-x112)));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x113 = 601162U;
	int8_t x114 = 0;
	static uint8_t x115 = 10U;
	int8_t x116 = INT8_MAX;
	uint32_t t25 = 0U;

	t25 = (x113-(x114<(x115-x116)));

	if (t25 != 601162U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 92U;
	int32_t x118 = INT32_MIN;
	int32_t x119 = 1;
	volatile uint16_t x120 = UINT16_MAX;

	t26 = (x117-(x118<(x119-x120)));

	if (t26 != 91U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	volatile int8_t x130 = INT8_MAX;
	volatile int32_t x131 = INT32_MIN;
	uint64_t x132 = 33955531174LLU;
	int32_t t27 = 167;

	t27 = (x129-(x130<(x131-x132)));

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int16_t x135 = INT16_MIN;
	static volatile uint16_t x136 = 12U;

	t28 = (x133-(x134<(x135-x136)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x142 = -1;
	uint64_t x143 = 191LLU;
	static int32_t x144 = INT32_MIN;

	t29 = (x141-(x142<(x143-x144)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x148 = UINT32_MAX;
	int32_t t30 = 1;

	t30 = (x145-(x146<(x147-x148)));

	if (t30 != -32769) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MIN;
	volatile uint64_t x150 = UINT64_MAX;
	int16_t x151 = -1891;
	uint16_t x152 = UINT16_MAX;
	static volatile int32_t t31 = -329;

	t31 = (x149-(x150<(x151-x152)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = 49662U;
	uint16_t x154 = 441U;
	volatile int32_t x155 = INT32_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t32 = 2111U;

	t32 = (x153-(x154<(x155-x156)));

	if (t32 != 49661U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = UINT64_MAX;
	uint8_t x164 = 4U;
	uint64_t t33 = UINT64_MAX;

	t33 = (x161-(x162<(x163-x164)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x165 = INT64_MAX;
	int32_t x166 = -1;
	int16_t x168 = INT16_MAX;
	int64_t t34 = INT64_MAX;

	t34 = (x165-(x166<(x167-x168)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = INT16_MIN;
	static uint8_t x170 = 2U;
	int64_t x171 = 727LL;
	int64_t x172 = INT64_MAX;
	int32_t t35 = -60672115;

	t35 = (x169-(x170<(x171-x172)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x174 = -1;
	int32_t x176 = 79;
	volatile int32_t t36 = -2015;

	t36 = (x173-(x174<(x175-x176)));

	if (t36 != 5805) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint32_t x186 = UINT32_MAX;
	uint16_t x187 = UINT16_MAX;
	int32_t x188 = INT32_MAX;
	static volatile uint64_t t37 = UINT64_MAX;

	t37 = (x185-(x186<(x187-x188)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x189 = -31449;
	uint32_t x190 = UINT32_MAX;
	static uint32_t x191 = UINT32_MAX;
	static uint32_t x192 = UINT32_MAX;

	t38 = (x189-(x190<(x191-x192)));

	if (t38 != -31449) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = -1;
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 146U;
	volatile int32_t t39 = -934490;

	t39 = (x193-(x194<(x195-x196)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x197 = INT32_MAX;
	int16_t x198 = 110;
	int32_t x199 = INT32_MIN;
	uint64_t x200 = UINT64_MAX;
	int32_t t40 = -1;

	t40 = (x197-(x198<(x199-x200)));

	if (t40 != 2147483646) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = 1;
	static uint64_t x202 = UINT64_MAX;
	int8_t x203 = INT8_MIN;
	static volatile uint8_t x204 = 43U;
	static int32_t t41 = 15;

	t41 = (x201-(x202<(x203-x204)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x205 = -1;
	static int64_t x206 = -1LL;
	uint64_t x207 = 799547LLU;
	static uint64_t x208 = UINT64_MAX;
	volatile int32_t t42 = -12631;

	t42 = (x205-(x206<(x207-x208)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = UINT32_MAX;
	uint8_t x210 = 2U;
	int32_t x211 = 37475562;
	static volatile int32_t x212 = INT32_MAX;
	uint32_t t43 = UINT32_MAX;

	t43 = (x209-(x210<(x211-x212)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = -1;
	int16_t x214 = 10;
	int64_t x215 = INT64_MIN;
	int16_t x216 = -216;
	volatile int32_t t44 = -411442;

	t44 = (x213-(x214<(x215-x216)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x217 = 78U;
	int64_t x218 = 504LL;
	int32_t t45 = 38715643;

	t45 = (x217-(x218<(x219-x220)));

	if (t45 != 77) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x226 = 11972U;
	int16_t x227 = INT16_MAX;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t46 = 1089;

	t46 = (x225-(x226<(x227-x228)));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = UINT16_MAX;
	volatile int64_t x230 = -1LL;
	int16_t x231 = INT16_MIN;
	volatile int32_t x232 = INT32_MIN;

	t47 = (x229-(x230<(x231-x232)));

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x237 = INT16_MIN;
	volatile int16_t x238 = 1;
	uint16_t x240 = 0U;
	int32_t t48 = -1666;

	t48 = (x237-(x238<(x239-x240)));

	if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x241 = 1U;
	int32_t x242 = 162;
	volatile int8_t x243 = 0;
	int16_t x244 = INT16_MIN;
	int32_t t49 = -1;

	t49 = (x241-(x242<(x243-x244)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x245 = -3453;
	static int16_t x246 = 69;
	uint8_t x247 = 37U;
	uint16_t x248 = 1U;
	static int32_t t50 = 1;

	t50 = (x245-(x246<(x247-x248)));

	if (t50 != -3453) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MAX;
	static int64_t x251 = INT64_MAX;
	int64_t t51 = INT64_MIN;

	t51 = (x249-(x250<(x251-x252)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x253 = -1;
	int32_t x254 = INT32_MIN;
	uint64_t x255 = 28353720800719232LLU;
	volatile int32_t t52 = 924002;

	t52 = (x253-(x254<(x255-x256)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x257 = -1;
	int64_t x259 = -1LL;
	static uint64_t x260 = 121132LLU;
	volatile int32_t t53 = -1061754531;

	t53 = (x257-(x258<(x259-x260)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -1854238325349076542LL;
	static volatile int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MAX;
	volatile int64_t t54 = -43866024073504054LL;

	t54 = (x261-(x262<(x263-x264)));

	if (t54 != -1854238325349076543LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = -1;
	static volatile int16_t x266 = -1;
	static volatile int8_t x267 = 1;
	int16_t x268 = -1;
	int32_t t55 = 2;

	t55 = (x265-(x266<(x267-x268)));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x269 = -1LL;
	uint32_t x270 = 324205749U;
	volatile int8_t x271 = 5;
	static int8_t x272 = INT8_MIN;

	t56 = (x269-(x270<(x271-x272)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x277 = INT32_MAX;
	static uint8_t x279 = 14U;
	int16_t x280 = INT16_MIN;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x277-(x278<(x279-x280)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = 13;
	volatile int32_t x282 = -1;
	int64_t x283 = INT64_MIN;
	int32_t x284 = -68312485;
	volatile int32_t t58 = -106905;

	t58 = (x281-(x282<(x283-x284)));

	if (t58 != 13) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = 4LL;
	int32_t x287 = INT32_MIN;
	static uint64_t x288 = 0LLU;
	int64_t t59 = 0LL;

	t59 = (x285-(x286<(x287-x288)));

	if (t59 != 4LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x290 = 87U;
	volatile uint32_t x292 = UINT32_MAX;

	t60 = (x289-(x290<(x291-x292)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x297 = -1LL;
	uint8_t x298 = 0U;
	int16_t x299 = INT16_MIN;
	int64_t t61 = 38249126457947143LL;

	t61 = (x297-(x298<(x299-x300)));

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x301 = 1;
	volatile int64_t x302 = INT64_MIN;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = 0;
	volatile int32_t t62 = -42785;

	t62 = (x301-(x302<(x303-x304)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MAX;
	volatile int32_t t63 = 201668116;

	t63 = (x305-(x306<(x307-x308)));

	if (t63 != 1577) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 28219U;
	uint8_t x320 = 0U;
	volatile int32_t t64 = 21199694;

	t64 = (x317-(x318<(x319-x320)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x325 = 3;
	int8_t x326 = INT8_MIN;
	static volatile int16_t x327 = -12;
	volatile uint8_t x328 = 12U;
	volatile int32_t t65 = -4091;

	t65 = (x325-(x326<(x327-x328)));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x329 = -233;
	int32_t x330 = -1;
	uint8_t x331 = 112U;
	int8_t x332 = 1;
	volatile int32_t t66 = -90013;

	t66 = (x329-(x330<(x331-x332)));

	if (t66 != -234) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x333 = 113LLU;
	int64_t x334 = -1LL;
	static int64_t x335 = 695387LL;
	static int16_t x336 = INT16_MAX;

	t67 = (x333-(x334<(x335-x336)));

	if (t67 != 112LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = -1LL;
	volatile int8_t x339 = -1;
	static int16_t x340 = INT16_MIN;
	static int32_t t68 = -2218212;

	t68 = (x337-(x338<(x339-x340)));

	if (t68 != -32769) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = UINT16_MAX;
	int32_t x347 = -1;
	volatile uint64_t x348 = 11526367213LLU;
	int32_t t69 = 18;

	t69 = (x345-(x346<(x347-x348)));

	if (t69 != -32769) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x349 = INT32_MAX;
	int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MIN;
	volatile int8_t x352 = -15;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x349-(x350<(x351-x352)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x353 = 15773712309LLU;
	int32_t x355 = -47591;
	volatile uint64_t t71 = 708717664239LLU;

	t71 = (x353-(x354<(x355-x356)));

	if (t71 != 15773712309LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x357 = 830U;
	uint8_t x358 = UINT8_MAX;
	volatile int32_t x359 = INT32_MIN;
	volatile int64_t x360 = INT64_MIN;
	uint32_t t72 = 559543U;

	t72 = (x357-(x358<(x359-x360)));

	if (t72 != 829U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = INT8_MIN;
	uint16_t x362 = UINT16_MAX;
	int32_t t73 = -9821;

	t73 = (x361-(x362<(x363-x364)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x365 = 593476793LL;
	int16_t x367 = 9464;
	static int8_t x368 = INT8_MIN;
	int64_t t74 = 1216208703898671LL;

	t74 = (x365-(x366<(x367-x368)));

	if (t74 != 593476792LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x370 = 8U;
	volatile int8_t x372 = INT8_MIN;
	static int32_t t75 = 105875;

	t75 = (x369-(x370<(x371-x372)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x373 = -1LL;
	uint32_t x374 = 824520535U;
	int8_t x375 = -1;
	volatile int64_t t76 = 23216322LL;

	t76 = (x373-(x374<(x375-x376)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x377 = 28165U;
	int16_t x378 = -6354;
	int32_t x379 = INT32_MIN;
	static int32_t x380 = -605;
	int32_t t77 = -79;

	t77 = (x377-(x378<(x379-x380)));

	if (t77 != 28165) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x381 = 348U;
	int16_t x383 = -1;
	int64_t x384 = -1LL;
	volatile uint32_t t78 = 22361672U;

	t78 = (x381-(x382<(x383-x384)));

	if (t78 != 347U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x385 = 486U;
	static uint16_t x387 = 1U;
	int64_t x388 = INT64_MAX;

	t79 = (x385-(x386<(x387-x388)));

	if (t79 != 486U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x389 = UINT32_MAX;
	volatile uint32_t x390 = UINT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = (x389-(x390<(x391-x392)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = -1;
	volatile int8_t x394 = INT8_MAX;
	uint32_t x395 = 2364470U;
	volatile int32_t t81 = 6039698;

	t81 = (x393-(x394<(x395-x396)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = INT8_MIN;
	static int8_t x399 = INT8_MIN;
	int16_t x400 = -243;
	int32_t t82 = -2264;

	t82 = (x397-(x398<(x399-x400)));

	if (t82 != -129) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x401 = -1;
	int8_t x402 = INT8_MIN;
	int64_t x403 = -133228LL;
	static uint32_t x404 = 3290U;
	int32_t t83 = 7873528;

	t83 = (x401-(x402<(x403-x404)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x405 = 2U;
	static uint32_t x406 = UINT32_MAX;
	static volatile int8_t x407 = INT8_MAX;
	int16_t x408 = INT16_MIN;

	t84 = (x405-(x406<(x407-x408)));

	if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x410 = INT32_MAX;
	static uint16_t x411 = UINT16_MAX;
	static int64_t t85 = -176565483LL;

	t85 = (x409-(x410<(x411-x412)));

	if (t85 != 11290028425939LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x414 = 0;
	int16_t x415 = 130;
	int32_t t86 = 241;

	t86 = (x413-(x414<(x415-x416)));

	if (t86 != 32766) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x417 = -6;
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MAX;
	volatile int32_t t87 = -498;

	t87 = (x417-(x418<(x419-x420)));

	if (t87 != -6) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x421 = 3100136323917LLU;
	int32_t x422 = INT32_MIN;
	int8_t x424 = INT8_MIN;

	t88 = (x421-(x422<(x423-x424)));

	if (t88 != 3100136323917LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = INT64_MIN;
	uint32_t x426 = UINT32_MAX;
	volatile int8_t x427 = INT8_MIN;
	uint8_t x428 = UINT8_MAX;
	int64_t t89 = INT64_MIN;

	t89 = (x425-(x426<(x427-x428)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x429 = UINT64_MAX;
	int8_t x430 = INT8_MIN;
	int64_t x432 = -16122172167985LL;

	t90 = (x429-(x430<(x431-x432)));

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x433 = 186129724298800LLU;
	uint32_t x435 = 376U;
	int16_t x436 = -1;

	t91 = (x433-(x434<(x435-x436)));

	if (t91 != 186129724298799LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x437 = 1105U;
	int64_t x438 = -1LL;
	int16_t x440 = -1;

	t92 = (x437-(x438<(x439-x440)));

	if (t92 != 1105) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = INT16_MIN;
	static int16_t x442 = INT16_MIN;
	uint8_t x444 = UINT8_MAX;
	volatile int32_t t93 = -119354212;

	t93 = (x441-(x442<(x443-x444)));

	if (t93 != -32769) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x445 = 55U;
	int8_t x446 = INT8_MIN;
	int8_t x447 = INT8_MIN;
	int16_t x448 = -1;
	int32_t t94 = 2;

	t94 = (x445-(x446<(x447-x448)));

	if (t94 != 54) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x449 = 15;
	static volatile int8_t x450 = 13;
	int8_t x451 = INT8_MIN;
	static uint16_t x452 = UINT16_MAX;

	t95 = (x449-(x450<(x451-x452)));

	if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x453 = INT64_MAX;
	uint32_t x454 = 250U;
	volatile uint32_t x455 = 51840009U;
	uint8_t x456 = 16U;
	int64_t t96 = 135751110912305LL;

	t96 = (x453-(x454<(x455-x456)));

	if (t96 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = -1;
	int32_t x458 = 127;
	int8_t x459 = INT8_MAX;
	int32_t t97 = 15298939;

	t97 = (x457-(x458<(x459-x460)));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x461 = 2463982855799476519LLU;
	uint32_t x462 = 822U;
	int16_t x463 = INT16_MIN;
	int32_t x464 = -1;
	uint64_t t98 = 88064358642206LLU;

	t98 = (x461-(x462<(x463-x464)));

	if (t98 != 2463982855799476518LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x465 = UINT32_MAX;
	static uint16_t x466 = UINT16_MAX;
	int32_t x467 = INT32_MIN;
	int32_t x468 = INT32_MIN;
	uint32_t t99 = UINT32_MAX;

	t99 = (x465-(x466<(x467-x468)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

