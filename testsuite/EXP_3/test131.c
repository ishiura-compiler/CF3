#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = UINT64_MAX;
static volatile int8_t x7 = INT8_MIN;
uint64_t x10 = 26116LLU;
volatile uint32_t x13 = UINT32_MAX;
uint8_t x18 = 0U;
volatile uint64_t x21 = UINT64_MAX;
int32_t x22 = INT32_MIN;
static int32_t x27 = 14;
volatile int64_t t6 = -236441LL;
int32_t x38 = 2635000;
volatile int64_t x47 = -1LL;
static int8_t x51 = INT8_MIN;
int16_t x52 = 1;
uint64_t x67 = 1283639782LLU;
uint8_t x68 = UINT8_MAX;
volatile uint64_t t16 = 16392486130818LLU;
static int64_t x88 = 990401219892LL;
int64_t t18 = -334023186296361673LL;
int8_t x110 = INT8_MAX;
int64_t x111 = -15203921033090201LL;
static volatile uint8_t x112 = UINT8_MAX;
int16_t x123 = 1;
uint16_t x139 = 327U;
int8_t x146 = -1;
volatile uint64_t t28 = 3850341LLU;
int16_t x157 = -1;
static volatile uint64_t x160 = 7622LLU;
static int32_t x162 = INT32_MIN;
static uint64_t t30 = 967LLU;
uint32_t x170 = 851U;
uint32_t x172 = 7428028U;
volatile int8_t x175 = INT8_MAX;
int32_t x185 = -1;
uint8_t x194 = 40U;
uint64_t t38 = 1447322178387443LLU;
int16_t x216 = INT16_MAX;
int8_t x223 = INT8_MAX;
int64_t x224 = INT64_MIN;
uint8_t x229 = 27U;
static volatile int64_t t44 = -30420191722629454LL;
int8_t x235 = INT8_MIN;
int16_t x242 = -1;
uint64_t t49 = 3234428793998538931LLU;
static volatile int8_t x259 = INT8_MIN;
int16_t x262 = -94;
static int8_t x266 = INT8_MIN;
static uint16_t x268 = 10U;
volatile int32_t t53 = 1496;
uint64_t x274 = 66739695896LLU;
volatile uint64_t t55 = 73196272670052LLU;
int8_t x285 = INT8_MIN;
uint16_t x294 = 6981U;
uint8_t x295 = UINT8_MAX;
int32_t t58 = 774646192;
volatile uint64_t t59 = 51914981504LLU;
int64_t x305 = 21158020877LL;
uint64_t t61 = 486317262857LLU;
uint32_t x309 = 1572U;
uint32_t x312 = 5U;
static volatile uint64_t t65 = 137390LLU;
int32_t x331 = INT32_MIN;
uint64_t x335 = UINT64_MAX;
volatile uint64_t t67 = 4379239423264943LLU;
static volatile int64_t t68 = -446071040614337LL;
int16_t x348 = INT16_MAX;
static uint64_t t72 = 2760491587LLU;
static volatile uint32_t x357 = 4134U;
uint8_t x358 = UINT8_MAX;
int64_t x362 = INT64_MIN;
int16_t x365 = 1421;
int8_t x378 = 0;
uint64_t x380 = 194654638230812516LLU;
uint8_t x381 = 27U;
static int8_t x382 = -1;
int32_t x383 = INT32_MIN;
uint8_t x385 = 4U;
int8_t x386 = -8;
int32_t x397 = 247;
volatile int32_t x412 = -1;
static int16_t x414 = INT16_MIN;
int16_t x416 = 5;
volatile int32_t x418 = -15;
uint8_t x428 = 16U;
uint64_t x431 = UINT64_MAX;
static volatile uint64_t x436 = 130954841LLU;
int64_t x439 = -1LL;
uint64_t x449 = 51LLU;
volatile int16_t x453 = INT16_MIN;
uint16_t x461 = UINT16_MAX;
int32_t t99 = -153;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x3 = 1;
	volatile uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = 33860255910LLU;

	t0 = ((x1&x2)+(x3+x4));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = -122;
	int64_t x8 = INT64_MAX;
	static int64_t t1 = -73447568598LL;

	t1 = ((x5&x6)+(x7+x8));

	if (t1 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	int8_t x11 = -1;
	uint16_t x12 = UINT16_MAX;
	uint64_t t2 = 45037096854922LLU;

	t2 = ((x9&x10)+(x11+x12));

	if (t2 != 91646LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 228;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = INT16_MIN;
	volatile uint32_t t3 = 560485U;

	t3 = ((x13&x14)+(x15+x16));

	if (t3 != 4294934755U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 406838378U;
	uint8_t x19 = 1U;
	static uint64_t x20 = 2LLU;
	volatile uint64_t t4 = 138145436LLU;

	t4 = ((x17&x18)+(x19+x20));

	if (t4 != 3LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x23 = 23U;
	static uint64_t x24 = 246968108655681230LLU;
	volatile uint64_t t5 = 903LLU;

	t5 = ((x21&x22)+(x23+x24));

	if (t5 != 246968106508197605LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint32_t x26 = UINT32_MAX;
	int64_t x28 = INT64_MIN;

	t6 = ((x25&x26)+(x27+x28));

	if (t6 != -9223372032559808626LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 13553952U;
	uint64_t x30 = UINT64_MAX;
	volatile int32_t x31 = -15456;
	uint8_t x32 = 45U;
	uint64_t t7 = 580232801614LLU;

	t7 = ((x29&x30)+(x31+x32));

	if (t7 != 13538541LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 10;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MAX;
	int32_t t8 = 94;

	t8 = ((x33&x34)+(x35+x36));

	if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int32_t x39 = INT32_MIN;
	int64_t x40 = 1LL;
	int64_t t9 = 4434879LL;

	t9 = ((x37&x38)+(x39+x40));

	if (t9 != -2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 1737U;
	uint64_t x42 = 36910914619832015LLU;
	int8_t x43 = INT8_MIN;
	uint64_t x44 = 4LLU;
	uint64_t t10 = 0LLU;

	t10 = ((x41&x42)+(x43+x44));

	if (t10 != 1613LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int16_t x46 = 203;
	int64_t x48 = INT64_MAX;
	int64_t t11 = 3LL;

	t11 = ((x45&x46)+(x47+x48));

	if (t11 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	volatile uint8_t x50 = 2U;
	int32_t t12 = 15390770;

	t12 = ((x49&x50)+(x51+x52));

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = 140;
	int8_t x66 = INT8_MAX;
	uint64_t t13 = 27946771349886LLU;

	t13 = ((x65&x66)+(x67+x68));

	if (t13 != 1283640049LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	static int64_t x70 = INT64_MAX;
	static uint16_t x71 = UINT16_MAX;
	uint16_t x72 = 3U;
	volatile int64_t t14 = 176LL;

	t14 = ((x69&x70)+(x71+x72));

	if (t14 != 9223372034707357698LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	static uint16_t x78 = 0U;
	static volatile uint8_t x79 = 1U;
	static int8_t x80 = INT8_MAX;
	int32_t t15 = 45479;

	t15 = ((x77&x78)+(x79+x80));

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = 411LLU;
	int16_t x82 = -27;
	int16_t x83 = -1;
	static int32_t x84 = -1;

	t16 = ((x81&x82)+(x83+x84));

	if (t16 != 383LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x85 = 7U;
	uint8_t x86 = 60U;
	int8_t x87 = INT8_MAX;
	volatile int64_t t17 = 23674596240LL;

	t17 = ((x85&x86)+(x87+x88));

	if (t17 != 990401220023LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = -1;
	int8_t x90 = 1;
	static int64_t x91 = -1LL;
	static int8_t x92 = INT8_MIN;

	t18 = ((x89&x90)+(x91+x92));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x97 = INT64_MIN;
	static int16_t x98 = -1;
	uint64_t x99 = 1128329LLU;
	int64_t x100 = -1LL;
	volatile uint64_t t19 = 23LLU;

	t19 = ((x97&x98)+(x99+x100));

	if (t19 != 9223372036855904136LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x105 = -33796893LL;
	int32_t x106 = -1;
	static int64_t x107 = -396416324778715LL;
	int32_t x108 = INT32_MAX;
	volatile int64_t t20 = 25860071058LL;

	t20 = ((x105&x106)+(x107+x108));

	if (t20 != -396414211091961LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = -1;
	volatile int64_t t21 = -1607592LL;

	t21 = ((x109&x110)+(x111+x112));

	if (t21 != -15203921033089819LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = 23;
	volatile int32_t x119 = INT32_MIN;
	volatile uint16_t x120 = 17U;
	static volatile int32_t t22 = 13;

	t22 = ((x117&x118)+(x119+x120));

	if (t22 != -2147483631) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = 6;
	uint16_t x122 = UINT16_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t23 = -888;

	t23 = ((x121&x122)+(x123+x124));

	if (t23 != -2147483641) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x137 = UINT64_MAX;
	volatile uint64_t x138 = 1320246746478946LLU;
	uint16_t x140 = UINT16_MAX;
	uint64_t t24 = 708LLU;

	t24 = ((x137&x138)+(x139+x140));

	if (t24 != 1320246746544808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = 7;
	int64_t x142 = -1LL;
	volatile uint32_t x143 = 1735U;
	int32_t x144 = -441684322;
	int64_t t25 = 358647LL;

	t25 = ((x141&x142)+(x143+x144));

	if (t25 != 3853284716LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x145 = UINT8_MAX;
	static int16_t x147 = 0;
	uint32_t x148 = 3061U;
	uint32_t t26 = 105U;

	t26 = ((x145&x146)+(x147+x148));

	if (t26 != 3316U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x149 = 4;
	uint16_t x150 = UINT16_MAX;
	uint32_t x151 = 223771162U;
	int8_t x152 = INT8_MIN;
	volatile uint32_t t27 = 20U;

	t27 = ((x149&x150)+(x151+x152));

	if (t27 != 223771038U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x154 = -1LL;
	int32_t x155 = 5;
	volatile uint64_t x156 = 19295776104882LLU;

	t28 = ((x153&x154)+(x155+x156));

	if (t28 != 19295776104886LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x158 = UINT8_MAX;
	int8_t x159 = -1;
	volatile uint64_t t29 = 166LLU;

	t29 = ((x157&x158)+(x159+x160));

	if (t29 != 7876LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = 0;
	uint64_t x163 = 14387198344632LLU;
	int8_t x164 = INT8_MIN;

	t30 = ((x161&x162)+(x163+x164));

	if (t30 != 14387198344504LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MIN;
	volatile int16_t x166 = -5251;
	int64_t x167 = INT64_MAX;
	int8_t x168 = -10;
	static int64_t t31 = -176519LL;

	t31 = ((x165&x166)+(x167+x168));

	if (t31 != 9223372036854770421LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x171 = 15618U;
	volatile uint32_t t32 = 3975462U;

	t32 = ((x169&x170)+(x171+x172));

	if (t32 != 7443646U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MAX;
	int16_t x176 = -1;
	int64_t t33 = -493LL;

	t33 = ((x173&x174)+(x175+x176));

	if (t33 != 381LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x177 = 715LLU;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -8151;
	int8_t x180 = INT8_MAX;
	uint64_t t34 = 3411038409LLU;

	t34 = ((x177&x178)+(x179+x180));

	if (t34 != 18446744073709543592LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x186 = 0;
	uint32_t x187 = UINT32_MAX;
	volatile uint8_t x188 = UINT8_MAX;
	uint32_t t35 = 0U;

	t35 = ((x185&x186)+(x187+x188));

	if (t35 != 254U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = 54U;
	volatile int8_t x190 = -1;
	int8_t x191 = 0;
	int64_t x192 = -2966237LL;
	volatile int64_t t36 = 518874940LL;

	t36 = ((x189&x190)+(x191+x192));

	if (t36 != -2966183LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x193 = 2U;
	int32_t x195 = -26702011;
	volatile int64_t x196 = -13807530803985LL;
	static int64_t t37 = 24843LL;

	t37 = ((x193&x194)+(x195+x196));

	if (t37 != -13807557505996LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x197 = UINT64_MAX;
	volatile uint16_t x198 = UINT16_MAX;
	static volatile int64_t x199 = INT64_MAX;
	int64_t x200 = -1LL;

	t38 = ((x197&x198)+(x199+x200));

	if (t38 != 9223372036854841341LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x201 = INT32_MIN;
	uint32_t x202 = 568301710U;
	uint32_t x203 = UINT32_MAX;
	uint64_t x204 = 102256608863495836LLU;
	volatile uint64_t t39 = 3665818902194LLU;

	t39 = ((x201&x202)+(x203+x204));

	if (t39 != 102256613158463131LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x205 = -1;
	static volatile uint16_t x206 = UINT16_MAX;
	volatile uint8_t x207 = 46U;
	static volatile int32_t x208 = -1;
	volatile int32_t t40 = 31960;

	t40 = ((x205&x206)+(x207+x208));

	if (t40 != 65580) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = INT64_MAX;
	int32_t x210 = 1;
	int16_t x211 = INT16_MIN;
	static uint32_t x212 = 23274479U;
	int64_t t41 = 219599818605076LL;

	t41 = ((x209&x210)+(x211+x212));

	if (t41 != 23241712LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MAX;
	int64_t x215 = 3889974132571784LL;
	static volatile int64_t t42 = -3952533035962780LL;

	t42 = ((x213&x214)+(x215+x216));

	if (t42 != 3889974132604551LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = INT16_MIN;
	uint32_t x222 = 398691505U;
	volatile int64_t t43 = 2536979112LL;

	t43 = ((x221&x222)+(x223+x224));

	if (t43 != -9223372036456087425LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x230 = INT64_MIN;
	int8_t x231 = 0;
	static volatile int32_t x232 = INT32_MIN;

	t44 = ((x229&x230)+(x231+x232));

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x233 = 218292425LLU;
	int16_t x234 = -438;
	int16_t x236 = INT16_MAX;
	uint64_t t45 = 49021583876544LLU;

	t45 = ((x233&x234)+(x235+x236));

	if (t45 != 218324935LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x241 = -1;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = 7U;
	static volatile int32_t t46 = -246412;

	t46 = ((x241&x242)+(x243+x244));

	if (t46 != -2147483642) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = INT32_MAX;
	volatile uint64_t x246 = 1946938372990559LLU;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;
	static uint64_t t47 = 17LLU;

	t47 = ((x245&x246)+(x247+x248));

	if (t47 != 1780393439LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x249 = INT64_MIN;
	int16_t x250 = -14;
	uint64_t x251 = UINT64_MAX;
	static uint16_t x252 = 15U;
	uint64_t t48 = 1531LLU;

	t48 = ((x249&x250)+(x251+x252));

	if (t48 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x253 = INT8_MIN;
	uint16_t x254 = UINT16_MAX;
	uint64_t x255 = 11776739107707291LLU;
	uint16_t x256 = 1U;

	t49 = ((x253&x254)+(x255+x256));

	if (t49 != 11776739107772700LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = -1;
	int16_t x258 = 5377;
	int64_t x260 = -1LL;
	volatile int64_t t50 = 157172209LL;

	t50 = ((x257&x258)+(x259+x260));

	if (t50 != 5248LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x261 = -1;
	uint32_t x263 = 1175706681U;
	uint64_t x264 = 1167LLU;
	uint64_t t51 = 254410180LLU;

	t51 = ((x261&x262)+(x263+x264));

	if (t51 != 1175707754LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x265 = INT64_MIN;
	uint32_t x267 = 22U;
	int64_t t52 = -90LL;

	t52 = ((x265&x266)+(x267+x268));

	if (t52 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = INT16_MIN;
	uint8_t x270 = UINT8_MAX;
	static uint16_t x271 = UINT16_MAX;
	uint8_t x272 = UINT8_MAX;

	t53 = ((x269&x270)+(x271+x272));

	if (t53 != 65790) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x273 = 8U;
	uint32_t x275 = 1774388607U;
	static uint8_t x276 = 59U;
	volatile uint64_t t54 = 679474939LLU;

	t54 = ((x273&x274)+(x275+x276));

	if (t54 != 1774388674LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x277 = 12U;
	int64_t x278 = INT64_MIN;
	uint8_t x279 = 1U;
	uint64_t x280 = 91297LLU;

	t55 = ((x277&x278)+(x279+x280));

	if (t55 != 91298LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x286 = INT64_MIN;
	uint64_t x287 = 50783569LLU;
	volatile uint64_t x288 = 4126366721LLU;
	volatile uint64_t t56 = 10LLU;

	t56 = ((x285&x286)+(x287+x288));

	if (t56 != 9223372041031926098LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x289 = -71;
	int64_t x290 = -1LL;
	int32_t x291 = INT32_MIN;
	volatile uint32_t x292 = 118044U;
	volatile int64_t t57 = -184LL;

	t57 = ((x289&x290)+(x291+x292));

	if (t57 != 2147601621LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x293 = -12727;
	int32_t x296 = INT32_MIN;

	t58 = ((x293&x294)+(x295+x296));

	if (t58 != -2147480768) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x297 = 754613186126402269LLU;
	uint32_t x298 = 6U;
	uint32_t x299 = 100510U;
	static int16_t x300 = -777;

	t59 = ((x297&x298)+(x299+x300));

	if (t59 != 99737LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x301 = 225049511376LLU;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = 857803;
	static volatile uint64_t t60 = 2744693876231555063LLU;

	t60 = ((x301&x302)+(x303+x304));

	if (t60 != 225050336331LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x306 = 55953U;
	int16_t x307 = -1;
	volatile uint64_t x308 = UINT64_MAX;

	t61 = ((x305&x306)+(x307+x308));

	if (t61 != 49663LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x310 = INT16_MIN;
	uint8_t x311 = 1U;
	volatile uint32_t t62 = 42183U;

	t62 = ((x309&x310)+(x311+x312));

	if (t62 != 6U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x313 = INT16_MAX;
	uint8_t x314 = 31U;
	int16_t x315 = -305;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t63 = -28;

	t63 = ((x313&x314)+(x315+x316));

	if (t63 != -33042) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x317 = INT32_MIN;
	volatile uint8_t x318 = 0U;
	uint64_t x319 = 12777652948873644LLU;
	int16_t x320 = -337;
	volatile uint64_t t64 = 1830912LLU;

	t64 = ((x317&x318)+(x319+x320));

	if (t64 != 12777652948873307LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x321 = 10U;
	uint8_t x322 = UINT8_MAX;
	volatile int8_t x323 = INT8_MIN;
	uint64_t x324 = UINT64_MAX;

	t65 = ((x321&x322)+(x323+x324));

	if (t65 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x329 = INT64_MAX;
	static uint8_t x330 = 31U;
	uint16_t x332 = 68U;
	volatile int64_t t66 = 1LL;

	t66 = ((x329&x330)+(x331+x332));

	if (t66 != -2147483549LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x333 = 0;
	int32_t x334 = INT32_MAX;
	int64_t x336 = -1LL;

	t67 = ((x333&x334)+(x335+x336));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x337 = INT32_MIN;
	int32_t x338 = INT32_MAX;
	static int64_t x339 = -1LL;
	static volatile int32_t x340 = -49127;

	t68 = ((x337&x338)+(x339+x340));

	if (t68 != -49128LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x341 = -65941982787938LL;
	int8_t x342 = -1;
	int32_t x343 = INT32_MIN;
	static volatile int32_t x344 = 93;
	int64_t t69 = -17698LL;

	t69 = ((x341&x342)+(x343+x344));

	if (t69 != -65944130271493LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x345 = 289427885529LL;
	uint8_t x346 = 0U;
	int32_t x347 = -1;
	volatile int64_t t70 = -97084LL;

	t70 = ((x345&x346)+(x347+x348));

	if (t70 != 32766LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x349 = INT64_MIN;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = 1742290584U;
	volatile uint32_t x352 = 4080657U;
	int64_t t71 = -27514376496LL;

	t71 = ((x349&x350)+(x351+x352));

	if (t71 != -9223372035108404567LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = -1LL;
	int8_t x355 = INT8_MIN;
	static volatile uint64_t x356 = UINT64_MAX;

	t72 = ((x353&x354)+(x355+x356));

	if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x359 = UINT64_MAX;
	uint16_t x360 = 174U;
	uint64_t t73 = 1243494LLU;

	t73 = ((x357&x358)+(x359+x360));

	if (t73 != 211LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x361 = 62;
	uint32_t x363 = UINT32_MAX;
	uint32_t x364 = UINT32_MAX;
	int64_t t74 = -91758LL;

	t74 = ((x361&x362)+(x363+x364));

	if (t74 != 4294967294LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x366 = INT8_MIN;
	volatile int64_t x367 = 13LL;
	static uint64_t x368 = UINT64_MAX;
	uint64_t t75 = 2184489399330016904LLU;

	t75 = ((x365&x366)+(x367+x368));

	if (t75 != 1420LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x369 = -1;
	int32_t x370 = -1;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t76 = 1910075730878704LL;

	t76 = ((x369&x370)+(x371+x372));

	if (t76 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x373 = INT32_MAX;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = UINT32_MAX;
	volatile int64_t x376 = -231LL;
	int64_t t77 = 730510405316479972LL;

	t77 = ((x373&x374)+(x375+x376));

	if (t77 != 6442450584LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x377 = UINT8_MAX;
	uint64_t x379 = 12415557167416541LLU;
	uint64_t t78 = 12971916116LLU;

	t78 = ((x377&x378)+(x379+x380));

	if (t78 != 207070195398229057LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x384 = UINT8_MAX;
	static volatile int32_t t79 = -1269846;

	t79 = ((x381&x382)+(x383+x384));

	if (t79 != -2147483366) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x387 = 0;
	int16_t x388 = -1;
	static int32_t t80 = -8121;

	t80 = ((x385&x386)+(x387+x388));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x389 = UINT64_MAX;
	int64_t x390 = -1LL;
	int64_t x391 = 10127694LL;
	static int32_t x392 = 0;
	uint64_t t81 = 16755118LLU;

	t81 = ((x389&x390)+(x391+x392));

	if (t81 != 10127693LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x393 = 3071228206049907011LLU;
	volatile int32_t x394 = -526;
	static int64_t x395 = INT64_MIN;
	uint16_t x396 = UINT16_MAX;
	uint64_t t82 = 36271689437LLU;

	t82 = ((x393&x394)+(x395+x396));

	if (t82 != 12294600242904748353LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x398 = 11088704LLU;
	uint64_t x399 = UINT64_MAX;
	static int32_t x400 = INT32_MIN;
	uint64_t t83 = 81786LLU;

	t83 = ((x397&x398)+(x399+x400));

	if (t83 != 18446744071562068031LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x401 = INT16_MIN;
	static uint16_t x402 = UINT16_MAX;
	uint32_t x403 = 13728108U;
	int8_t x404 = -1;
	static volatile uint32_t t84 = 3783U;

	t84 = ((x401&x402)+(x403+x404));

	if (t84 != 13760875U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = INT8_MAX;
	int8_t x406 = 17;
	int32_t x407 = -318071;
	uint32_t x408 = 20717U;
	static uint32_t t85 = 32446841U;

	t85 = ((x405&x406)+(x407+x408));

	if (t85 != 4294669959U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x409 = 1144700118LL;
	static int64_t x410 = -49LL;
	uint64_t x411 = UINT64_MAX;
	uint64_t t86 = 15LLU;

	t86 = ((x409&x410)+(x411+x412));

	if (t86 != 1144700100LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x413 = -1;
	uint32_t x415 = 7349575U;
	volatile uint32_t t87 = 165555U;

	t87 = ((x413&x414)+(x415+x416));

	if (t87 != 7316812U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = 15098;
	int8_t x419 = INT8_MIN;
	volatile int8_t x420 = INT8_MIN;
	int32_t t88 = 0;

	t88 = ((x417&x418)+(x419+x420));

	if (t88 != 14832) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = -33576176272604LL;
	static int32_t x422 = INT32_MAX;
	int32_t x423 = 7;
	uint32_t x424 = UINT32_MAX;
	volatile int64_t t89 = -1237496346LL;

	t89 = ((x421&x422)+(x423+x424));

	if (t89 != 1878047530LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x425 = INT8_MAX;
	int8_t x426 = -43;
	int8_t x427 = INT8_MAX;
	volatile int32_t t90 = -83545;

	t90 = ((x425&x426)+(x427+x428));

	if (t90 != 228) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x429 = -1LL;
	int64_t x430 = INT64_MIN;
	int16_t x432 = 0;
	uint64_t t91 = 126LLU;

	t91 = ((x429&x430)+(x431+x432));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MIN;
	int8_t x435 = -1;
	uint64_t t92 = 2357828339692711748LLU;

	t92 = ((x433&x434)+(x435+x436));

	if (t92 != 130954712LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x437 = INT8_MIN;
	volatile int64_t x438 = 4119239548LL;
	static int32_t x440 = INT32_MIN;
	volatile int64_t t93 = 34720939878242LL;

	t93 = ((x437&x438)+(x439+x440));

	if (t93 != 1971755775LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x441 = 5U;
	int64_t x442 = INT64_MAX;
	int16_t x443 = INT16_MIN;
	uint32_t x444 = UINT32_MAX;
	volatile int64_t t94 = -30443692LL;

	t94 = ((x441&x442)+(x443+x444));

	if (t94 != 4294934532LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x450 = 95796;
	int32_t x451 = -311478758;
	int8_t x452 = -12;
	volatile uint64_t t95 = 4320137191LLU;

	t95 = ((x449&x450)+(x451+x452));

	if (t95 != 18446744073398072894LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x454 = INT32_MIN;
	int32_t x455 = -9518673;
	uint32_t x456 = 19342U;
	uint32_t t96 = 0U;

	t96 = ((x453&x454)+(x455+x456));

	if (t96 != 2137984317U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = INT16_MIN;
	uint64_t x458 = UINT64_MAX;
	static uint32_t x459 = 1043079913U;
	int16_t x460 = INT16_MIN;
	volatile uint64_t t97 = 1LLU;

	t97 = ((x457&x458)+(x459+x460));

	if (t97 != 1043014377LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x462 = -1LL;
	int16_t x463 = INT16_MIN;
	int8_t x464 = INT8_MIN;
	static volatile int64_t t98 = 1523182981LL;

	t98 = ((x461&x462)+(x463+x464));

	if (t98 != 32639LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = INT16_MIN;
	int8_t x466 = 0;
	int8_t x467 = -1;
	int8_t x468 = INT8_MIN;

	t99 = ((x465&x466)+(x467+x468));

	if (t99 != -129) { NG(); } else { ; }
	
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

