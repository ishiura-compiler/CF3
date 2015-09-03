#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x22 = 510725LLU;
volatile int32_t t5 = 1857;
static int32_t x33 = -1;
int64_t x35 = INT64_MIN;
int32_t x37 = -441;
volatile int16_t x39 = INT16_MIN;
uint32_t x50 = 24U;
int8_t x59 = INT8_MIN;
static int32_t t12 = -182156;
int32_t t13 = -129747;
volatile int64_t x68 = 1705643255388431219LL;
uint16_t x72 = 3U;
volatile int32_t t16 = -924070792;
uint64_t x80 = 10389363LLU;
static volatile int32_t t17 = -27724080;
uint32_t x81 = UINT32_MAX;
static int8_t x83 = INT8_MIN;
volatile int32_t t19 = 1;
static int32_t x89 = -979039330;
int64_t x91 = 2566LL;
int8_t x92 = INT8_MIN;
volatile int32_t t20 = 80556276;
volatile int16_t x97 = INT16_MIN;
int16_t x104 = INT16_MAX;
int8_t x105 = -2;
uint8_t x106 = 3U;
static volatile int32_t t24 = -994949748;
static int64_t x109 = INT64_MIN;
int16_t x114 = INT16_MIN;
static int32_t t32 = 3398074;
int8_t x147 = INT8_MAX;
volatile int8_t x150 = INT8_MIN;
int32_t x151 = 12595519;
int64_t x153 = 5930835LL;
int64_t x163 = -1LL;
static int16_t x165 = INT16_MIN;
int32_t x167 = 160889;
static volatile int32_t t37 = -1270609;
volatile int16_t x169 = -1;
uint16_t x176 = 517U;
int32_t x182 = INT32_MAX;
int32_t t42 = -2648245;
int8_t x200 = INT8_MAX;
static int32_t x204 = INT32_MIN;
volatile uint16_t x214 = UINT16_MAX;
int8_t x215 = INT8_MIN;
int16_t x216 = -1;
int32_t x219 = INT32_MAX;
int16_t x220 = INT16_MIN;
static volatile int64_t x221 = INT64_MAX;
int16_t x222 = -7384;
int8_t x241 = INT8_MAX;
uint8_t x255 = 66U;
int32_t t54 = 49618;
int32_t t55 = 2;
volatile uint32_t x261 = UINT32_MAX;
uint32_t x263 = UINT32_MAX;
int32_t t56 = -14;
int64_t x273 = INT64_MIN;
int32_t x274 = INT32_MIN;
volatile int32_t t59 = -94;
volatile int32_t t61 = 21;
int8_t x289 = INT8_MIN;
int64_t x324 = INT64_MAX;
int8_t x325 = -1;
int64_t x328 = INT64_MAX;
int64_t x334 = -626756948LL;
int32_t t72 = 1189;
volatile int64_t x339 = INT64_MAX;
static int16_t x344 = INT16_MIN;
static int32_t t74 = -28;
uint64_t x347 = 67885LLU;
int32_t t75 = -935215;
uint64_t x351 = UINT64_MAX;
int32_t t76 = 4;
uint32_t x366 = 12U;
static volatile int16_t x367 = -2020;
int16_t x372 = -1;
int32_t t81 = -3139616;
uint8_t x373 = UINT8_MAX;
volatile int8_t x377 = INT8_MIN;
uint16_t x378 = UINT16_MAX;
volatile int32_t x385 = -60;
static int8_t x388 = INT8_MAX;
int32_t x390 = -673779751;
int64_t x395 = -1LL;
static volatile int32_t t86 = 3;
volatile uint64_t x397 = UINT64_MAX;
volatile int32_t x402 = INT32_MAX;
static uint64_t x406 = 1077530180514072148LLU;
int64_t x407 = INT64_MAX;
uint32_t x408 = 44U;
static int32_t t89 = 3925;
int32_t x410 = -17;
static volatile int32_t t90 = 3956;
uint64_t x417 = 181819807175141LLU;
volatile int32_t x419 = -1;
int64_t x422 = INT64_MIN;
int8_t x426 = -10;
int32_t x428 = 6665959;
static uint8_t x430 = UINT8_MAX;
volatile int64_t x440 = INT64_MAX;
int8_t x444 = 9;
int32_t t99 = 12185;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int16_t x2 = 10007;
	static int64_t x3 = INT64_MIN;
	int64_t x4 = -34LL;
	static int32_t t0 = -5763;

	t0 = (x1==((x2%x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int32_t x7 = -14;
	int8_t x8 = INT8_MAX;
	int32_t t1 = 5;

	t1 = (x5==((x6%x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MIN;
	volatile uint64_t x16 = 229159LLU;
	volatile int32_t t2 = -44;

	t2 = (x13==((x14%x15)*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	int32_t x20 = -1;
	volatile int32_t t3 = 229;

	t3 = (x17==((x18%x19)*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	int16_t x23 = 566;
	uint16_t x24 = 3037U;
	volatile int32_t t4 = -1458;

	t4 = (x21==((x22%x23)*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = -1;
	int32_t x27 = -1;
	static uint64_t x28 = 1532332121LLU;

	t5 = (x25==((x26%x27)*x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	static int32_t x30 = -1;
	volatile uint32_t x31 = UINT32_MAX;
	static uint32_t x32 = UINT32_MAX;
	int32_t t6 = 249;

	t6 = (x29==((x30%x31)*x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	int32_t x36 = -590569;
	volatile int32_t t7 = -200;

	t7 = (x33==((x34%x35)*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = 6;

	t8 = (x37==((x38%x39)*x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -2712054168723509444LL;
	int16_t x46 = -38;
	uint16_t x47 = 1U;
	int8_t x48 = 34;
	volatile int32_t t9 = 0;

	t9 = (x45==((x46%x47)*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -2;
	uint64_t x51 = 812848LLU;
	static int32_t x52 = INT32_MAX;
	volatile int32_t t10 = -248;

	t10 = (x49==((x50%x51)*x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 15074378U;
	uint8_t x54 = UINT8_MAX;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t11 = -2428600;

	t11 = (x53==((x54%x55)*x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -1;
	int32_t x58 = -865;
	static volatile uint8_t x60 = 4U;

	t12 = (x57==((x58%x59)*x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 122U;
	int16_t x62 = 1;
	int8_t x63 = 3;
	static volatile uint32_t x64 = UINT32_MAX;

	t13 = (x61==((x62%x63)*x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	uint8_t x66 = 0U;
	volatile uint32_t x67 = 12461U;
	int32_t t14 = 2599;

	t14 = (x65==((x66%x67)*x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 1U;
	uint32_t x70 = 33U;
	int8_t x71 = -1;
	static int32_t t15 = -420;

	t15 = (x69==((x70%x71)*x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	volatile uint32_t x74 = 786987714U;
	volatile int64_t x75 = INT64_MIN;
	volatile int8_t x76 = -1;

	t16 = (x73==((x74%x75)*x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = -1;
	uint8_t x79 = UINT8_MAX;

	t17 = (x77==((x78%x79)*x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x82 = 3U;
	uint16_t x84 = 1U;
	static volatile int32_t t18 = 15729722;

	t18 = (x81==((x82%x83)*x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = UINT8_MAX;
	static volatile uint32_t x88 = 90482U;

	t19 = (x85==((x86%x87)*x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;

	t20 = (x89==((x90%x91)*x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = INT16_MIN;
	volatile int16_t x94 = INT16_MAX;
	uint16_t x95 = 2U;
	uint64_t x96 = 236718702436126LLU;
	volatile int32_t t21 = -794590;

	t21 = (x93==((x94%x95)*x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = INT64_MAX;
	static volatile uint8_t x99 = 124U;
	uint16_t x100 = UINT16_MAX;
	static volatile int32_t t22 = -107976188;

	t22 = (x97==((x98%x99)*x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 1U;
	static uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = -1;
	static int32_t t23 = -2;

	t23 = (x101==((x102%x103)*x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x107 = -15658973001116229LL;
	uint32_t x108 = 873068674U;

	t24 = (x105==((x106%x107)*x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x110 = 641LLU;
	int32_t x111 = -1;
	int32_t x112 = 68;
	int32_t t25 = -474;

	t25 = (x109==((x110%x111)*x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x115 = INT64_MIN;
	int32_t x116 = 659259215;
	volatile int32_t t26 = 161885729;

	t26 = (x113==((x114%x115)*x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x117 = 0U;
	uint32_t x118 = UINT32_MAX;
	static int8_t x119 = -49;
	volatile int8_t x120 = -14;
	volatile int32_t t27 = 1;

	t27 = (x117==((x118%x119)*x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MAX;
	uint64_t x123 = 89227983752395LLU;
	uint64_t x124 = UINT64_MAX;
	int32_t t28 = -151602987;

	t28 = (x121==((x122%x123)*x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 4;
	int64_t x126 = INT64_MIN;
	static uint8_t x127 = UINT8_MAX;
	volatile int16_t x128 = INT16_MAX;
	int32_t t29 = 3424589;

	t29 = (x125==((x126%x127)*x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = -1LL;
	int32_t x131 = -1;
	int8_t x132 = -5;
	volatile int32_t t30 = 10;

	t30 = (x129==((x130%x131)*x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x137 = 741129;
	uint64_t x138 = UINT64_MAX;
	uint16_t x139 = 17697U;
	static uint16_t x140 = UINT16_MAX;
	int32_t t31 = 15;

	t31 = (x137==((x138%x139)*x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = UINT8_MAX;
	int64_t x142 = -25024040437LL;
	static volatile int8_t x143 = -1;
	uint16_t x144 = UINT16_MAX;

	t32 = (x141==((x142%x143)*x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MIN;
	int8_t x148 = -1;
	int32_t t33 = -1;

	t33 = (x145==((x146%x147)*x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x149 = -1;
	static int32_t x152 = -3;
	int32_t t34 = -356359769;

	t34 = (x149==((x150%x151)*x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x154 = INT64_MIN;
	uint8_t x155 = 2U;
	static uint8_t x156 = 1U;
	int32_t t35 = 122815180;

	t35 = (x153==((x154%x155)*x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = INT64_MAX;
	int32_t x162 = INT32_MIN;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t36 = -2;

	t36 = (x161==((x162%x163)*x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x166 = INT64_MIN;
	uint16_t x168 = UINT16_MAX;

	t37 = (x165==((x166%x167)*x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x170 = INT32_MAX;
	int8_t x171 = INT8_MIN;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t38 = -235251159;

	t38 = (x169==((x170%x171)*x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x173 = INT64_MIN;
	static int32_t x174 = INT32_MAX;
	static volatile uint8_t x175 = 55U;
	volatile int32_t t39 = 0;

	t39 = (x173==((x174%x175)*x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 5LLU;
	volatile uint16_t x183 = UINT16_MAX;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t40 = -213;

	t40 = (x181==((x182%x183)*x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 9819873527LLU;
	int32_t x186 = INT32_MIN;
	static int32_t x187 = INT32_MIN;
	int8_t x188 = 1;
	static volatile int32_t t41 = -96513;

	t41 = (x185==((x186%x187)*x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = -1;
	static int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	uint64_t x192 = 52814199745LLU;

	t42 = (x189==((x190%x191)*x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x197 = 1U;
	volatile uint16_t x198 = 8U;
	uint32_t x199 = 50497478U;
	int32_t t43 = 16872828;

	t43 = (x197==((x198%x199)*x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;
	static int32_t t44 = -1;

	t44 = (x201==((x202%x203)*x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x205 = UINT16_MAX;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MAX;
	static uint16_t x208 = UINT16_MAX;
	volatile int32_t t45 = 7;

	t45 = (x205==((x206%x207)*x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x213 = -212;
	volatile int32_t t46 = 13;

	t46 = (x213==((x214%x215)*x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x217 = 1570U;
	int8_t x218 = INT8_MIN;
	int32_t t47 = -38;

	t47 = (x217==((x218%x219)*x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x223 = 829LLU;
	int32_t x224 = INT32_MAX;
	volatile int32_t t48 = 59752507;

	t48 = (x221==((x222%x223)*x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = -9655;
	uint32_t x226 = 25114484U;
	static int16_t x227 = INT16_MAX;
	uint16_t x228 = 1U;
	volatile int32_t t49 = -14611;

	t49 = (x225==((x226%x227)*x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x229 = 2;
	uint32_t x230 = 6U;
	int8_t x231 = 1;
	int64_t x232 = 0LL;
	int32_t t50 = 47947;

	t50 = (x229==((x230%x231)*x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	static volatile uint16_t x236 = UINT16_MAX;
	volatile int32_t t51 = -48;

	t51 = (x233==((x234%x235)*x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MIN;
	static int8_t x244 = -20;
	volatile int32_t t52 = -891701932;

	t52 = (x241==((x242%x243)*x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = -302386LL;
	volatile int8_t x246 = INT8_MIN;
	int32_t x247 = 4;
	static int64_t x248 = -1LL;
	volatile int32_t t53 = 1;

	t53 = (x245==((x246%x247)*x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x253 = UINT16_MAX;
	static int16_t x254 = 3;
	int8_t x256 = INT8_MIN;

	t54 = (x253==((x254%x255)*x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x257 = -353729724;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = -3635;
	int64_t x260 = -138537296570947LL;

	t55 = (x257==((x258%x259)*x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x262 = INT8_MIN;
	uint8_t x264 = 102U;

	t56 = (x261==((x262%x263)*x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x265 = UINT32_MAX;
	static volatile int64_t x266 = -8081882LL;
	uint16_t x267 = 3U;
	static volatile int16_t x268 = 4;
	volatile int32_t t57 = -119;

	t57 = (x265==((x266%x267)*x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = -1LL;
	static uint32_t x270 = 1U;
	volatile int16_t x271 = INT16_MIN;
	static int32_t x272 = INT32_MAX;
	static int32_t t58 = 35;

	t58 = (x269==((x270%x271)*x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x275 = -1;
	static int32_t x276 = 4;

	t59 = (x273==((x274%x275)*x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = 415;
	int8_t x282 = INT8_MAX;
	volatile int8_t x283 = INT8_MIN;
	volatile int64_t x284 = -611015964368765LL;
	volatile int32_t t60 = -596;

	t60 = (x281==((x282%x283)*x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = INT16_MAX;
	static int8_t x286 = -1;
	uint64_t x287 = 6395957164963LLU;
	uint8_t x288 = 8U;

	t61 = (x285==((x286%x287)*x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x290 = -1;
	int32_t x291 = 9;
	static int8_t x292 = INT8_MAX;
	int32_t t62 = -10757;

	t62 = (x289==((x290%x291)*x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int32_t x295 = -10996858;
	uint16_t x296 = 0U;
	volatile int32_t t63 = 1063;

	t63 = (x293==((x294%x295)*x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x297 = UINT32_MAX;
	static uint8_t x298 = 12U;
	volatile uint8_t x299 = UINT8_MAX;
	uint8_t x300 = 30U;
	int32_t t64 = -7586;

	t64 = (x297==((x298%x299)*x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x301 = 1U;
	volatile int16_t x302 = INT16_MAX;
	volatile uint8_t x303 = 68U;
	int8_t x304 = INT8_MAX;
	int32_t t65 = -621232664;

	t65 = (x301==((x302%x303)*x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = 74482483;
	volatile uint16_t x310 = UINT16_MAX;
	int32_t x311 = -1865383;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t66 = -59;

	t66 = (x309==((x310%x311)*x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x313 = -1LL;
	static int32_t x314 = -53;
	int64_t x315 = INT64_MAX;
	int16_t x316 = -2;
	int32_t t67 = -1;

	t67 = (x313==((x314%x315)*x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = INT64_MAX;
	volatile int32_t x318 = -714404;
	int8_t x319 = -1;
	static uint64_t x320 = 4960333997170636340LLU;
	int32_t t68 = 7;

	t68 = (x317==((x318%x319)*x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = 521024968LL;
	int32_t x322 = 1;
	static int16_t x323 = INT16_MAX;
	volatile int32_t t69 = 5968;

	t69 = (x321==((x322%x323)*x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x326 = -1;
	uint8_t x327 = 6U;
	static int32_t t70 = 2;

	t70 = (x325==((x326%x327)*x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = -557LL;
	int16_t x330 = INT16_MAX;
	uint16_t x331 = 26086U;
	static uint8_t x332 = 8U;
	int32_t t71 = 9;

	t71 = (x329==((x330%x331)*x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x333 = UINT8_MAX;
	uint16_t x335 = UINT16_MAX;
	static int32_t x336 = 661681911;

	t72 = (x333==((x334%x335)*x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = -16155;
	uint16_t x338 = 35U;
	uint64_t x340 = 933172790624402LLU;
	int32_t t73 = 297526648;

	t73 = (x337==((x338%x339)*x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x341 = UINT32_MAX;
	int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MIN;

	t74 = (x341==((x342%x343)*x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x345 = UINT16_MAX;
	static int16_t x346 = -1;
	int64_t x348 = -1LL;

	t75 = (x345==((x346%x347)*x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = 3594;
	volatile int8_t x350 = -1;
	uint8_t x352 = UINT8_MAX;

	t76 = (x349==((x350%x351)*x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = INT64_MAX;
	uint64_t x354 = 132469182537256LLU;
	volatile uint64_t x355 = 820881142874LLU;
	static int8_t x356 = -1;
	static volatile int32_t t77 = 337045259;

	t77 = (x353==((x354%x355)*x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = INT16_MAX;
	int32_t x358 = INT32_MIN;
	static int8_t x359 = INT8_MIN;
	uint16_t x360 = UINT16_MAX;
	int32_t t78 = 9898857;

	t78 = (x357==((x358%x359)*x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = 0;
	static volatile uint32_t x362 = UINT32_MAX;
	volatile uint16_t x363 = 785U;
	static uint16_t x364 = UINT16_MAX;
	static volatile int32_t t79 = -381440;

	t79 = (x361==((x362%x363)*x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = INT32_MIN;
	volatile uint32_t x368 = 97U;
	int32_t t80 = -133;

	t80 = (x365==((x366%x367)*x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x369 = INT32_MIN;
	volatile int8_t x370 = INT8_MIN;
	int32_t x371 = 795324;

	t81 = (x369==((x370%x371)*x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x374 = INT32_MIN;
	volatile int32_t x375 = INT32_MIN;
	int64_t x376 = INT64_MAX;
	volatile int32_t t82 = 1;

	t82 = (x373==((x374%x375)*x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x379 = -30;
	int16_t x380 = -2317;
	static volatile int32_t t83 = -111323754;

	t83 = (x377==((x378%x379)*x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x386 = INT8_MIN;
	uint32_t x387 = 16318U;
	volatile int32_t t84 = 5040;

	t84 = (x385==((x386%x387)*x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = 7U;
	uint64_t x391 = 83521059977170LLU;
	int64_t x392 = 1316041013300130559LL;
	volatile int32_t t85 = -42222;

	t85 = (x389==((x390%x391)*x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = 123079875029LL;
	uint8_t x394 = 0U;
	int16_t x396 = 8282;

	t86 = (x393==((x394%x395)*x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x398 = UINT64_MAX;
	uint64_t x399 = 1487480144466LLU;
	static int32_t x400 = INT32_MAX;
	volatile int32_t t87 = -97299889;

	t87 = (x397==((x398%x399)*x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = 254U;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = 342U;
	int32_t t88 = 22475907;

	t88 = (x401==((x402%x403)*x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x405 = 80075714LLU;

	t89 = (x405==((x406%x407)*x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = UINT8_MAX;
	int64_t x411 = INT64_MIN;
	volatile int32_t x412 = INT32_MIN;

	t90 = (x409==((x410%x411)*x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x413 = INT8_MAX;
	static int16_t x414 = -1;
	static uint8_t x415 = 4U;
	int32_t x416 = INT32_MAX;
	int32_t t91 = 506473081;

	t91 = (x413==((x414%x415)*x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x418 = INT64_MAX;
	static uint16_t x420 = 223U;
	static volatile int32_t t92 = 17;

	t92 = (x417==((x418%x419)*x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MAX;
	volatile int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t93 = 144157;

	t93 = (x421==((x422%x423)*x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = -1;
	uint32_t x427 = 29U;
	int32_t t94 = 1240;

	t94 = (x425==((x426%x427)*x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = INT64_MIN;
	static int8_t x431 = -1;
	volatile int64_t x432 = INT64_MAX;
	volatile int32_t t95 = 0;

	t95 = (x429==((x430%x431)*x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x437 = 62;
	int64_t x438 = -201LL;
	volatile int32_t x439 = 1;
	int32_t t96 = 5510775;

	t96 = (x437==((x438%x439)*x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = INT16_MIN;
	int64_t x442 = INT64_MIN;
	int32_t x443 = 14241;
	int32_t t97 = -6340765;

	t97 = (x441==((x442%x443)*x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MAX;
	int8_t x447 = 1;
	int32_t x448 = INT32_MIN;
	int32_t t98 = -290;

	t98 = (x445==((x446%x447)*x448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x449 = INT32_MIN;
	int64_t x450 = INT64_MIN;
	int8_t x451 = INT8_MAX;
	static int16_t x452 = 3;

	t99 = (x449==((x450%x451)*x452));

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

