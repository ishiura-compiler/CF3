#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x13 = 1U;
static int32_t x19 = 15238;
volatile int16_t x25 = 770;
uint64_t t3 = 128344591190LLU;
volatile uint64_t t4 = 10629418442762LLU;
volatile uint64_t t5 = 543LLU;
uint64_t x50 = UINT64_MAX;
static volatile uint8_t x54 = 0U;
static uint8_t x55 = UINT8_MAX;
volatile int32_t t7 = -42278548;
int16_t x66 = INT16_MAX;
int64_t x68 = 152LL;
int16_t x70 = -1;
int8_t x71 = 30;
int16_t x75 = INT16_MAX;
int64_t t12 = 933198256925031088LL;
volatile uint64_t t14 = 4575855543432792365LLU;
static uint64_t x90 = UINT64_MAX;
int64_t x92 = -1LL;
uint32_t x97 = 2092U;
int32_t t18 = -10177;
static int8_t x119 = -2;
int8_t x123 = -1;
int32_t t20 = 0;
int8_t x125 = INT8_MIN;
volatile int64_t x126 = -1LL;
static volatile uint64_t x136 = 2105264LLU;
uint8_t x147 = 45U;
static int32_t x154 = INT32_MAX;
int32_t x156 = 1;
int64_t x166 = INT64_MIN;
int8_t x172 = INT8_MIN;
uint8_t x173 = 3U;
uint32_t x183 = 13U;
int16_t x188 = INT16_MAX;
volatile int64_t t32 = 5338662450963419LL;
static int64_t x198 = -2254242011148767302LL;
int8_t x201 = INT8_MAX;
int32_t x207 = -1;
uint64_t x213 = UINT64_MAX;
int16_t x214 = INT16_MIN;
int64_t x215 = INT64_MIN;
int16_t x223 = 13;
uint64_t x224 = UINT64_MAX;
int16_t x234 = INT16_MIN;
uint64_t x261 = 551963948836889060LLU;
static uint8_t x262 = 125U;
uint64_t x270 = 27282063043LLU;
uint64_t x277 = UINT64_MAX;
volatile uint32_t x281 = 423451U;
static int8_t x283 = 53;
volatile uint64_t t48 = 28519129894LLU;
uint8_t x289 = 22U;
static volatile uint8_t x313 = 62U;
int64_t x324 = INT64_MAX;
uint64_t x331 = UINT64_MAX;
static uint8_t x335 = UINT8_MAX;
uint16_t x344 = UINT16_MAX;
static int8_t x347 = INT8_MIN;
int64_t x363 = -1LL;
volatile int64_t t61 = -6876337846544LL;
uint64_t x366 = 18340977LLU;
int16_t x367 = INT16_MAX;
uint8_t x368 = 12U;
static volatile int16_t x381 = INT16_MIN;
volatile int64_t x382 = INT64_MAX;
static volatile uint64_t t66 = 3LLU;
int8_t x402 = INT8_MIN;
static int32_t t71 = -3717;
int8_t x418 = 7;
volatile int64_t x419 = 205706594856634LL;
static int8_t x422 = INT8_MIN;
static int8_t x423 = INT8_MIN;
int32_t x435 = 105;
int8_t x440 = -1;
static uint8_t x445 = 6U;
int16_t x446 = INT16_MAX;
static int16_t x447 = INT16_MAX;
static volatile uint64_t x454 = 224030660512LLU;
int16_t x456 = INT16_MAX;
uint16_t x461 = UINT16_MAX;
uint64_t x462 = 16671571748898LLU;
uint64_t x465 = 3770544313LLU;
volatile uint64_t x468 = 28LLU;
uint64_t t85 = 1130298443339088178LLU;
int64_t t86 = -13407835714838LL;
volatile uint64_t t89 = 7537239593LLU;
uint16_t x509 = 14599U;
static int64_t x512 = -152LL;
volatile int8_t x513 = -1;
static uint32_t t92 = 333910199U;
uint64_t x521 = UINT64_MAX;
uint8_t x538 = 1U;
volatile uint16_t x548 = 110U;
static volatile int64_t t97 = -79275772LL;
uint32_t x551 = 16430208U;


void f0(void) {
	uint8_t x1 = 9U;
	uint8_t x2 = 0U;
	int64_t x3 = 44199308672LL;
	uint64_t x4 = 488569LLU;
	uint64_t t0 = 102LLU;

	t0 = ((x1+x2)|(x3*x4));

	if (t0 != 21594412038570377LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x14 = -10;
	uint64_t x15 = 2LLU;
	static int8_t x16 = 3;
	volatile uint64_t t1 = 2757069LLU;

	t1 = ((x13+x14)|(x15*x16));

	if (t1 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = UINT8_MAX;
	static uint8_t x18 = 74U;
	int8_t x20 = INT8_MIN;
	static int32_t t2 = 25452;

	t2 = ((x17+x18)|(x19*x20));

	if (t2 != -1950391) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x26 = 45211904576LLU;
	volatile int8_t x27 = INT8_MAX;
	uint16_t x28 = 3U;

	t3 = ((x25+x26)|(x27*x28));

	if (t3 != 45211905407LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x41 = INT16_MIN;
	uint8_t x42 = 38U;
	static int16_t x43 = 6608;
	uint64_t x44 = 113645417626435153LLU;

	t4 = ((x41+x42)|(x43*x44));

	if (t4 != 18446744073709521654LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x45 = INT64_MAX;
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = 1;
	int8_t x48 = INT8_MIN;

	t5 = ((x45+x46)|(x47*x48));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = -1;
	int16_t x51 = INT16_MAX;
	volatile uint32_t x52 = UINT32_MAX;
	uint64_t t6 = UINT64_MAX;

	t6 = ((x49+x50)|(x51*x52));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x53 = -1139428;
	int16_t x56 = 3;

	t7 = ((x53+x54)|(x55*x56));

	if (t7 != -1138691) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x57 = 27U;
	uint32_t x58 = 44252U;
	int16_t x59 = INT16_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile uint32_t t8 = 8U;

	t8 = ((x57+x58)|(x59*x60));

	if (t8 != 2147396855U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x65 = -1;
	int8_t x67 = -1;
	volatile int64_t t9 = 274275814010LL;

	t9 = ((x65+x66)|(x67*x68));

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x69 = 27564926842820040LLU;
	volatile uint32_t x72 = UINT32_MAX;
	volatile uint64_t t10 = 80460628LLU;

	t10 = ((x69+x70)|(x71*x72));

	if (t10 != 27564928307036135LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = -4;
	int32_t x74 = 491406;
	volatile int8_t x76 = INT8_MIN;
	static int32_t t11 = -4;

	t11 = ((x73+x74)|(x75*x76));

	if (t11 != -3702902) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = INT64_MIN;
	static volatile int8_t x78 = 6;
	int64_t x79 = INT64_MAX;
	volatile int8_t x80 = -1;

	t12 = ((x77+x78)|(x79*x80));

	if (t12 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = -1;
	uint64_t x82 = 333984032028LLU;
	static uint8_t x83 = UINT8_MAX;
	int32_t x84 = 109090;
	volatile uint64_t t13 = 1201776092LLU;

	t13 = ((x81+x82)|(x83*x84));

	if (t13 != 334000814047LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = UINT64_MAX;
	int32_t x86 = -53;
	int8_t x87 = -1;
	uint64_t x88 = UINT64_MAX;

	t14 = ((x85+x86)|(x87*x88));

	if (t14 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x91 = -1;
	uint64_t t15 = 4420803423038192878LLU;

	t15 = ((x89+x90)|(x91*x92));

	if (t15 != 255LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x98 = INT32_MIN;
	static int64_t x99 = -28628724LL;
	int8_t x100 = INT8_MAX;
	volatile int64_t t16 = -34871314LL;

	t16 = ((x97+x98)|(x99*x100));

	if (t16 != -1488364292LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x109 = -892950490LL;
	volatile uint32_t x110 = 5380U;
	int64_t x111 = -6194436LL;
	int8_t x112 = -1;
	int64_t t17 = -1028074LL;

	t17 = ((x109+x110)|(x111*x112));

	if (t17 != -891372242LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = -1;
	static uint16_t x114 = UINT16_MAX;
	int32_t x115 = -1;
	int8_t x116 = INT8_MIN;

	t18 = ((x113+x114)|(x115*x116));

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = -3990;
	int8_t x118 = INT8_MIN;
	static int32_t x120 = 338319029;
	volatile int32_t t19 = -21720;

	t19 = ((x117+x118)|(x119*x120));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x121 = -1;
	volatile uint16_t x122 = 30U;
	int16_t x124 = -11769;

	t20 = ((x121+x122)|(x123*x124));

	if (t20 != 11773) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x127 = 43;
	static int32_t x128 = -1;
	volatile int64_t t21 = -62657913293134LL;

	t21 = ((x125+x126)|(x127*x128));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = -46;
	uint16_t x134 = 0U;
	int16_t x135 = -1;
	static volatile uint64_t t22 = 989779222359LLU;

	t22 = ((x133+x134)|(x135*x136));

	if (t22 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x141 = INT8_MIN;
	volatile int32_t x142 = -1;
	int64_t x143 = -1LL;
	static int8_t x144 = -15;
	int64_t t23 = -10550LL;

	t23 = ((x141+x142)|(x143*x144));

	if (t23 != -129LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x145 = -130061;
	int32_t x146 = 1840435;
	int16_t x148 = INT16_MIN;
	int32_t t24 = -2094788;

	t24 = ((x145+x146)|(x147*x148));

	if (t24 != -288474) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = ((x153+x154)|(x155*x156));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x157 = -1;
	volatile int64_t x158 = INT64_MAX;
	volatile int16_t x159 = -1;
	int8_t x160 = 3;
	int64_t t26 = 1680006LL;

	t26 = ((x157+x158)|(x159*x160));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = -284LL;
	static int64_t x162 = INT64_MAX;
	static volatile int16_t x163 = -6;
	uint64_t x164 = 38875066541792921LLU;
	uint64_t t27 = 2578679579177LLU;

	t27 = ((x161+x162)|(x163*x164));

	if (t27 != 18446744073709551339LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x165 = 0U;
	int8_t x167 = INT8_MAX;
	uint16_t x168 = 6361U;
	volatile int64_t t28 = -1126053LL;

	t28 = ((x165+x166)|(x167*x168));

	if (t28 != -9223372036853967961LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x169 = 0;
	volatile int32_t x170 = INT32_MIN;
	static int16_t x171 = -1;
	int32_t t29 = 2;

	t29 = ((x169+x170)|(x171*x172));

	if (t29 != -2147483520) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x174 = UINT32_MAX;
	static int64_t x175 = -1LL;
	volatile uint64_t x176 = 1842143LLU;
	static uint64_t t30 = 944176354047LLU;

	t30 = ((x173+x174)|(x175*x176));

	if (t30 != 18446744073707709475LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x181 = INT8_MIN;
	uint16_t x182 = 3314U;
	int16_t x184 = -1;
	static uint32_t t31 = 232U;

	t31 = ((x181+x182)|(x183*x184));

	if (t31 != 4294967283U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x185 = INT32_MAX;
	static int64_t x186 = -2229678173466786LL;
	uint32_t x187 = 3U;

	t32 = ((x185+x186)|(x187*x188));

	if (t32 != -2229676025970691LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x197 = 10U;
	static int16_t x199 = INT16_MIN;
	static volatile uint64_t x200 = UINT64_MAX;
	volatile uint64_t t33 = 440181993725471LLU;

	t33 = ((x197+x198)|(x199*x200));

	if (t33 != 16192502062560817092LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x202 = 8;
	int32_t x203 = -8022342;
	static int8_t x204 = INT8_MAX;
	int32_t t34 = 0;

	t34 = ((x201+x202)|(x203*x204));

	if (t34 != -1018837305) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x205 = INT32_MIN;
	uint32_t x206 = 2486U;
	int8_t x208 = INT8_MIN;
	static volatile uint32_t t35 = 922U;

	t35 = ((x205+x206)|(x207*x208));

	if (t35 != 2147486134U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x216 = UINT64_MAX;
	uint64_t t36 = 901346646231142553LLU;

	t36 = ((x213+x214)|(x215*x216));

	if (t36 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x217 = 45;
	int32_t x218 = 2835;
	static volatile uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 22249U;
	static uint64_t t37 = 5985709126LLU;

	t37 = ((x217+x218)|(x219*x220));

	if (t37 != 18446744073709529943LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x221 = INT64_MIN;
	int64_t x222 = INT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x221+x222)|(x223*x224));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x225 = 337245727287876LLU;
	int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	static uint16_t x228 = UINT16_MAX;
	uint64_t t39 = 44LLU;

	t39 = ((x225+x226)|(x227*x228));

	if (t39 != 18446744072162306500LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x229 = -2164849356LL;
	static volatile uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t40 = 33113766232893LLU;

	t40 = ((x229+x230)|(x231*x232));

	if (t40 != 18446744071544702259LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x233 = 96U;
	int16_t x235 = -3385;
	uint16_t x236 = 6U;
	int32_t t41 = 281867984;

	t41 = ((x233+x234)|(x235*x236));

	if (t41 != -20246) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x249 = INT32_MIN;
	uint8_t x250 = 1U;
	uint32_t x251 = 6U;
	static uint64_t x252 = 207178628LLU;
	uint64_t t42 = 3LLU;

	t42 = ((x249+x250)|(x251*x252));

	if (t42 != 18446744072805139737LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x263 = UINT32_MAX;
	int16_t x264 = -1;
	volatile uint64_t t43 = 27LLU;

	t43 = ((x261+x262)|(x263*x264));

	if (t43 != 551963948836889185LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x266 = 7;
	volatile uint64_t x267 = 21LLU;
	static volatile int64_t x268 = INT64_MAX;
	volatile uint64_t t44 = 1LLU;

	t44 = ((x265+x266)|(x267*x268));

	if (t44 != 9223372036854775791LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x269 = -464;
	volatile int16_t x271 = INT16_MIN;
	volatile int16_t x272 = 0;
	uint64_t t45 = 14339945LLU;

	t45 = ((x269+x270)|(x271*x272));

	if (t45 != 27282062579LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x273 = INT8_MIN;
	int64_t x274 = -1LL;
	volatile int64_t x275 = -1LL;
	int32_t x276 = 0;
	int64_t t46 = -12704213478LL;

	t46 = ((x273+x274)|(x275*x276));

	if (t46 != -129LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x278 = -3;
	uint32_t x279 = 185597856U;
	int16_t x280 = -1;
	volatile uint64_t t47 = 1982LLU;

	t47 = ((x277+x278)|(x279*x280));

	if (t47 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x282 = 918768LLU;
	int8_t x284 = 3;

	t48 = ((x281+x282)|(x283*x284));

	if (t48 != 1342367LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x290 = 0;
	uint8_t x291 = 1U;
	static int8_t x292 = 1;
	static volatile int32_t t49 = -11808;

	t49 = ((x289+x290)|(x291*x292));

	if (t49 != 23) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x293 = INT16_MIN;
	volatile int32_t x294 = -1;
	uint32_t x295 = 3U;
	int8_t x296 = 60;
	static volatile uint32_t t50 = 2U;

	t50 = ((x293+x294)|(x295*x296));

	if (t50 != 4294934527U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x305 = UINT16_MAX;
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 1U;
	int32_t x308 = INT32_MAX;
	volatile uint32_t t51 = 460901U;

	t51 = ((x305+x306)|(x307*x308));

	if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = 0;
	int8_t x310 = INT8_MIN;
	int8_t x311 = -1;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t52 = -23;

	t52 = ((x309+x310)|(x311*x312));

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x314 = 38U;
	static volatile uint64_t x315 = 2360762599870LLU;
	volatile int64_t x316 = INT64_MIN;
	uint64_t t53 = 428312769LLU;

	t53 = ((x313+x314)|(x315*x316));

	if (t53 != 100LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x317 = 37U;
	static uint16_t x318 = 16U;
	static int16_t x319 = INT16_MAX;
	static int64_t x320 = 504LL;
	int64_t t54 = 4771021212008198LL;

	t54 = ((x317+x318)|(x319*x320));

	if (t54 != 16514621LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x321 = 894596710646LL;
	int16_t x322 = -7;
	int16_t x323 = 0;
	volatile int64_t t55 = -18LL;

	t55 = ((x321+x322)|(x323*x324));

	if (t55 != 894596710639LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x329 = 26U;
	int64_t x330 = -1LL;
	int8_t x332 = 3;
	volatile uint64_t t56 = 170177789768194LLU;

	t56 = ((x329+x330)|(x331*x332));

	if (t56 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x333 = 12938340991184LL;
	int8_t x334 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	int64_t t57 = 26920149LL;

	t57 = ((x333+x334)|(x335*x336));

	if (t57 != -4685744LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x337 = -1;
	int16_t x338 = -3;
	int8_t x339 = INT8_MAX;
	int8_t x340 = 12;
	int32_t t58 = 2;

	t58 = ((x337+x338)|(x339*x340));

	if (t58 != -4) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x341 = -122673856005LL;
	int8_t x342 = INT8_MIN;
	uint32_t x343 = 35478U;
	int64_t t59 = -11LL;

	t59 = ((x341+x342)|(x343*x344));

	if (t59 != -120349919877LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x345 = INT8_MIN;
	volatile int8_t x346 = INT8_MIN;
	static uint8_t x348 = 17U;
	int32_t t60 = -51840385;

	t60 = ((x345+x346)|(x347*x348));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x361 = -1LL;
	int32_t x362 = -1;
	int32_t x364 = 254554;

	t61 = ((x361+x362)|(x363*x364));

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x365 = INT64_MIN;
	volatile uint64_t t62 = 209698405014446LLU;

	t62 = ((x365+x366)|(x367*x368));

	if (t62 != 9223372036873125877LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x369 = 0;
	static volatile int16_t x370 = INT16_MAX;
	uint64_t x371 = 17273LLU;
	uint16_t x372 = 1757U;
	uint64_t t63 = 111131618LLU;

	t63 = ((x369+x370)|(x371*x372));

	if (t63 != 30375935LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x374 = 2;
	volatile int8_t x375 = 0;
	int32_t x376 = INT32_MIN;
	static uint64_t t64 = 10948LLU;

	t64 = ((x373+x374)|(x375*x376));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x377 = 13151;
	int8_t x378 = 1;
	static int8_t x379 = INT8_MIN;
	static volatile int16_t x380 = 942;
	static volatile int32_t t65 = -75648;

	t65 = ((x377+x378)|(x379*x380));

	if (t65 != -115872) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MAX;

	t66 = ((x381+x382)|(x383*x384));

	if (t66 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x389 = 0;
	int16_t x390 = INT16_MAX;
	volatile int64_t x391 = 161715LL;
	int16_t x392 = -1;
	volatile int64_t t67 = -337042862147200175LL;

	t67 = ((x389+x390)|(x391*x392));

	if (t67 != -131073LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x397 = INT64_MAX;
	uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = 1433U;
	uint64_t x400 = 97118278972LLU;
	uint64_t t68 = 99LLU;

	t68 = ((x397+x398)|(x399*x400));

	if (t68 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x401 = 3U;
	int32_t x403 = -1;
	int8_t x404 = -1;
	volatile int32_t t69 = 1;

	t69 = ((x401+x402)|(x403*x404));

	if (t69 != -125) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x405 = 1550;
	int64_t x406 = 395288710352LL;
	int8_t x407 = INT8_MIN;
	int32_t x408 = -5;
	int64_t t70 = -29106LL;

	t70 = ((x405+x406)|(x407*x408));

	if (t70 != 395288711902LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	int32_t x412 = INT32_MAX;

	t71 = ((x409+x410)|(x411*x412));

	if (t71 != -2147483521) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x413 = INT8_MIN;
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = INT16_MIN;
	uint16_t x416 = 251U;
	volatile uint64_t t72 = 16052376446LLU;

	t72 = ((x413+x414)|(x415*x416));

	if (t72 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x417 = UINT64_MAX;
	uint16_t x420 = 174U;
	volatile uint64_t t73 = 21675LLU;

	t73 = ((x417+x418)|(x419*x420));

	if (t73 != 35792947505054318LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x421 = -1;
	int16_t x424 = INT16_MIN;
	int32_t t74 = 1315;

	t74 = ((x421+x422)|(x423*x424));

	if (t74 != -129) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x425 = INT16_MIN;
	uint64_t x426 = 6713355559382598LLU;
	int16_t x427 = -1;
	volatile int8_t x428 = INT8_MIN;
	uint64_t t75 = 839049802121380648LLU;

	t75 = ((x425+x426)|(x427*x428));

	if (t75 != 6713355559349958LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x429 = 892188489U;
	int32_t x430 = INT32_MAX;
	int64_t x431 = INT64_MAX;
	uint64_t x432 = 52861153LLU;
	uint64_t t76 = 28LLU;

	t76 = ((x429+x430)|(x431*x432));

	if (t76 != 9223372036821088095LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x433 = 86810094LLU;
	volatile uint32_t x434 = 8U;
	volatile uint64_t x436 = 618688391LLU;
	static volatile uint64_t t77 = 1774808312226LLU;

	t77 = ((x433+x434)|(x435*x436));

	if (t77 != 65048264703LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x437 = INT8_MAX;
	uint64_t x438 = 940606249806234LLU;
	int8_t x439 = INT8_MAX;
	static volatile uint64_t t78 = 3900LLU;

	t78 = ((x437+x438)|(x439*x440));

	if (t78 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x441 = 10396725;
	static uint32_t x442 = UINT32_MAX;
	int32_t x443 = -134841668;
	int8_t x444 = 1;
	uint32_t t79 = 78U;

	t79 = ((x441+x442)|(x443*x444));

	if (t79 != 4160683708U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x448 = 120U;
	volatile int32_t t80 = 48;

	t80 = ((x445+x446)|(x447*x448));

	if (t80 != 3932045) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x449 = -1;
	int32_t x450 = INT32_MAX;
	int32_t x451 = -1;
	volatile int64_t x452 = 2408657LL;
	int64_t t81 = 192LL;

	t81 = ((x449+x450)|(x451*x452));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x453 = INT16_MIN;
	int8_t x455 = 0;
	volatile uint64_t t82 = 54243732LLU;

	t82 = ((x453+x454)|(x455*x456));

	if (t82 != 224030627744LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x457 = 16U;
	volatile uint16_t x458 = UINT16_MAX;
	int64_t x459 = INT64_MAX;
	static volatile uint64_t x460 = 1LLU;
	static uint64_t t83 = 1LLU;

	t83 = ((x457+x458)|(x459*x460));

	if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x463 = -1LL;
	static volatile uint8_t x464 = 90U;
	uint64_t t84 = 24880941LLU;

	t84 = ((x461+x462)|(x463*x464));

	if (t84 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x466 = -2449LL;
	uint8_t x467 = 19U;

	t85 = ((x465+x466)|(x467*x468));

	if (t85 != 3770541884LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x469 = -1;
	uint8_t x470 = 1U;
	uint8_t x471 = 12U;
	int64_t x472 = -1LL;

	t86 = ((x469+x470)|(x471*x472));

	if (t86 != -12LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x481 = UINT32_MAX;
	int8_t x482 = 15;
	uint16_t x483 = 13U;
	uint8_t x484 = 3U;
	uint32_t t87 = 44092104U;

	t87 = ((x481+x482)|(x483*x484));

	if (t87 != 47U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x485 = 43;
	static int8_t x486 = INT8_MIN;
	volatile int8_t x487 = INT8_MAX;
	int16_t x488 = 13469;
	volatile int32_t t88 = 6385602;

	t88 = ((x485+x486)|(x487*x488));

	if (t88 != -21) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x489 = INT8_MAX;
	int16_t x490 = -1;
	uint64_t x491 = UINT64_MAX;
	static int16_t x492 = -148;

	t89 = ((x489+x490)|(x491*x492));

	if (t89 != 254LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x501 = 47U;
	volatile uint32_t x502 = 18U;
	int64_t x503 = -1LL;
	int64_t x504 = -1LL;
	volatile int64_t t90 = 122152348898LL;

	t90 = ((x501+x502)|(x503*x504));

	if (t90 != 65LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x510 = INT32_MIN;
	int16_t x511 = 2;
	volatile int64_t t91 = -572800726LL;

	t91 = ((x509+x510)|(x511*x512));

	if (t91 != -41LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x514 = 1853;
	volatile uint32_t x515 = UINT32_MAX;
	int16_t x516 = INT16_MAX;

	t92 = ((x513+x514)|(x515*x516));

	if (t92 != 4294936381U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x517 = 60;
	int16_t x518 = 177;
	static int16_t x519 = -944;
	volatile int16_t x520 = -1124;
	int32_t t93 = 297815196;

	t93 = ((x517+x518)|(x519*x520));

	if (t93 != 1061101) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x522 = INT16_MAX;
	int32_t x523 = 665929;
	uint8_t x524 = 15U;
	volatile uint64_t t94 = 57797LLU;

	t94 = ((x521+x522)|(x523*x524));

	if (t94 != 9994239LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x533 = UINT32_MAX;
	uint64_t x534 = UINT64_MAX;
	static int64_t x535 = INT64_MAX;
	uint64_t x536 = 29965197863LLU;
	volatile uint64_t t95 = 8337162800091LLU;

	t95 = ((x533+x534)|(x535*x536));

	if (t95 != 9223372011084972031LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x537 = 150968601U;
	volatile int16_t x539 = -5058;
	int16_t x540 = -31;
	uint32_t t96 = 2094813339U;

	t96 = ((x537+x538)|(x539*x540));

	if (t96 != 150994302U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x545 = -1LL;
	uint16_t x546 = 2791U;
	uint8_t x547 = UINT8_MAX;

	t97 = ((x545+x546)|(x547*x548));

	if (t97 != 28662LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x549 = UINT32_MAX;
	static int8_t x550 = INT8_MAX;
	int32_t x552 = -1;
	uint32_t t98 = 9729U;

	t98 = ((x549+x550)|(x551*x552));

	if (t98 != 4278537214U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x553 = UINT16_MAX;
	int16_t x554 = -14;
	uint8_t x555 = 37U;
	int8_t x556 = INT8_MIN;
	int32_t t99 = 26829;

	t99 = ((x553+x554)|(x555*x556));

	if (t99 != -15) { NG(); } else { ; }
	
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

