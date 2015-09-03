#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 3;
volatile uint64_t x3 = 1706829616144329LLU;
uint8_t x4 = 3U;
volatile uint64_t t0 = UINT64_MAX;
int32_t x9 = -8947479;
static int32_t t4 = 222;
static uint8_t x26 = 28U;
uint32_t x31 = 2044135305U;
uint16_t x32 = UINT16_MAX;
static uint32_t x51 = 19U;
uint32_t t9 = 47U;
int16_t x55 = -6;
static uint64_t t10 = 371823685971247162LLU;
int8_t x58 = -16;
volatile int16_t x59 = INT16_MAX;
volatile int32_t t11 = -3;
volatile int64_t x61 = INT64_MIN;
volatile int64_t x68 = INT64_MAX;
int64_t t13 = -32747108255LL;
volatile int64_t t14 = -15718LL;
uint8_t x80 = UINT8_MAX;
static int64_t x82 = INT64_MIN;
volatile int8_t x85 = INT8_MAX;
volatile int32_t t17 = 19914;
static int8_t x112 = 2;
int64_t x116 = -1LL;
volatile int64_t t23 = 587808651819786LL;
volatile int16_t x123 = INT16_MIN;
int32_t x133 = -1;
int8_t x139 = INT8_MIN;
int64_t t29 = -2461644201391472837LL;
int64_t x154 = -209816LL;
int16_t x157 = -290;
int64_t x160 = -1LL;
int64_t t33 = 255LL;
int8_t x173 = -1;
int16_t x174 = 0;
volatile uint32_t t36 = 0U;
static uint64_t x187 = UINT64_MAX;
static int32_t t40 = -1281375;
volatile uint8_t x205 = UINT8_MAX;
int16_t x207 = INT16_MAX;
volatile int8_t x211 = INT8_MAX;
int64_t x213 = -1LL;
static int32_t x214 = INT32_MIN;
int64_t x215 = INT64_MAX;
static int32_t x221 = -1;
int8_t x222 = -1;
int64_t x233 = INT64_MIN;
static int32_t t52 = 32;
static volatile int32_t x246 = -1;
static uint64_t x247 = UINT64_MAX;
volatile uint16_t x248 = 0U;
uint32_t x259 = 189394041U;
static int16_t x274 = INT16_MAX;
int16_t x280 = 579;
volatile uint8_t x283 = 82U;
int64_t t62 = -2863980112244713948LL;
uint16_t x297 = 14U;
int16_t x306 = INT16_MIN;
uint8_t x312 = 1U;
uint64_t t66 = UINT64_MAX;
int8_t x317 = 5;
uint64_t t68 = 7281325580LLU;
uint16_t x322 = 198U;
static volatile int32_t x325 = -1;
int16_t x335 = INT16_MIN;
uint32_t x336 = 0U;
volatile uint32_t t72 = 1896U;
static uint64_t x344 = UINT64_MAX;
static volatile int16_t x345 = INT16_MIN;
int16_t x348 = -1;
static int16_t x351 = -1;
uint16_t x353 = UINT16_MAX;
uint8_t x358 = UINT8_MAX;
volatile int16_t x362 = -1;
static volatile int32_t t79 = 16414316;
uint16_t x368 = UINT16_MAX;
int32_t t80 = -728689;
uint8_t x378 = 9U;
uint32_t x379 = 404227U;
int64_t x388 = INT64_MIN;
uint64_t x392 = 5237839326788LLU;
static int32_t x397 = INT32_MIN;
int64_t x398 = INT64_MIN;
uint64_t x400 = UINT64_MAX;
static uint64_t x413 = UINT64_MAX;
volatile int16_t x419 = -1;
static int32_t t91 = -647963;
uint16_t x427 = 10796U;
int8_t x428 = INT8_MAX;
int16_t x436 = INT16_MAX;
int32_t x441 = INT32_MIN;
volatile int32_t t98 = -52205;


void f0(void) {
	uint32_t x1 = UINT32_MAX;

	t0 = ((x1<=x2)-(x3&x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	int16_t x6 = -1276;
	int32_t x7 = INT32_MAX;
	volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -1227;

	t1 = ((x5<=x6)-(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 2010312LLU;
	uint64_t x11 = 888999715LLU;
	int64_t x12 = -1LL;
	volatile uint64_t t2 = 18503359LLU;

	t2 = ((x9<=x10)-(x11&x12));

	if (t2 != 18446744072820551901LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint32_t x14 = 0U;
	uint16_t x15 = UINT16_MAX;
	static volatile int8_t x16 = INT8_MIN;
	int32_t t3 = -13370;

	t3 = ((x13<=x14)-(x15&x16));

	if (t3 != -65408) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static volatile int32_t x18 = INT32_MIN;
	int16_t x19 = -1;
	volatile int32_t x20 = 0;

	t4 = ((x17<=x18)-(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	uint8_t x22 = 0U;
	uint32_t x23 = UINT32_MAX;
	static uint8_t x24 = UINT8_MAX;
	uint32_t t5 = 1298680U;

	t5 = ((x21<=x22)-(x23&x24));

	if (t5 != 4294967041U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int64_t x27 = 1943947LL;
	int32_t x28 = -1;
	volatile int64_t t6 = -561LL;

	t6 = ((x25<=x26)-(x27&x28));

	if (t6 != -1943946LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	uint32_t x30 = UINT32_MAX;
	uint32_t t7 = 463U;

	t7 = ((x29<=x30)-(x31&x32));

	if (t7 != 4294965368U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	uint32_t x34 = 3U;
	int16_t x35 = 3;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -28022298;

	t8 = ((x33<=x34)-(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x49 = UINT16_MAX;
	volatile int8_t x50 = INT8_MIN;
	int32_t x52 = -1;

	t9 = ((x49<=x50)-(x51&x52));

	if (t9 != 4294967277U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 10LLU;
	int64_t x54 = -1LL;
	uint64_t x56 = 12651662473LLU;

	t10 = ((x53<=x54)-(x55&x56));

	if (t10 != 18446744061057889145LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -30;
	int32_t x60 = 3941;

	t11 = ((x57<=x58)-(x59&x60));

	if (t11 != -3940) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;
	volatile uint32_t x64 = UINT32_MAX;
	volatile uint32_t t12 = 243U;

	t12 = ((x61<=x62)-(x63&x64));

	if (t12 != 2147483649U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MAX;
	int8_t x66 = 1;
	int8_t x67 = INT8_MAX;

	t13 = ((x65<=x66)-(x67&x68));

	if (t13 != -127LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = INT16_MIN;
	int64_t x70 = -1LL;
	static volatile uint16_t x71 = 27U;
	volatile int64_t x72 = INT64_MIN;

	t14 = ((x69<=x70)-(x71&x72));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x77 = INT8_MAX;
	int32_t x78 = 3;
	int32_t x79 = INT32_MAX;
	int32_t t15 = 131459701;

	t15 = ((x77<=x78)-(x79&x80));

	if (t15 != -255) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = INT8_MIN;
	uint64_t x83 = 1090833051272217LLU;
	static int64_t x84 = INT64_MIN;
	uint64_t t16 = 256578LLU;

	t16 = ((x81<=x82)-(x83&x84));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x86 = INT32_MIN;
	static volatile int8_t x87 = -60;
	int16_t x88 = INT16_MIN;

	t17 = ((x85<=x86)-(x87&x88));

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x93 = UINT16_MAX;
	int32_t x94 = INT32_MIN;
	volatile uint16_t x95 = UINT16_MAX;
	volatile int8_t x96 = INT8_MIN;
	int32_t t18 = -11;

	t18 = ((x93<=x94)-(x95&x96));

	if (t18 != -65408) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MIN;
	uint32_t x99 = UINT32_MAX;
	volatile int16_t x100 = 2;
	uint32_t t19 = 13672U;

	t19 = ((x97<=x98)-(x99&x100));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = 6291U;
	int32_t x102 = INT32_MIN;
	int64_t x103 = 196619080LL;
	static int16_t x104 = 5991;
	volatile int64_t t20 = 30666213813LL;

	t20 = ((x101<=x102)-(x103&x104));

	if (t20 != -832LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = 1U;
	static int8_t x107 = 41;
	int8_t x108 = INT8_MIN;
	int32_t t21 = 11634;

	t21 = ((x105<=x106)-(x107&x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x109 = -1;
	int8_t x110 = -1;
	uint32_t x111 = UINT32_MAX;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = ((x109<=x110)-(x111&x112));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = 3271356LLU;
	int32_t x114 = -47235;
	int64_t x115 = -1LL;

	t23 = ((x113<=x114)-(x115&x116));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x121 = INT64_MIN;
	uint64_t x122 = 66LLU;
	static int64_t x124 = INT64_MAX;
	int64_t t24 = 2037950LL;

	t24 = ((x121<=x122)-(x123&x124));

	if (t24 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x125 = UINT32_MAX;
	static int32_t x126 = INT32_MAX;
	int32_t x127 = -1;
	int32_t x128 = 10;
	int32_t t25 = -387473749;

	t25 = ((x125<=x126)-(x127&x128));

	if (t25 != -10) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = 15115816411LLU;
	static uint8_t x130 = 0U;
	int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MAX;
	int32_t t26 = 253;

	t26 = ((x129<=x130)-(x131&x132));

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x134 = -29063;
	int32_t x135 = -1;
	int64_t x136 = -1LL;
	volatile int64_t t27 = 659LL;

	t27 = ((x133<=x134)-(x135&x136));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x137 = 11U;
	uint8_t x138 = UINT8_MAX;
	static volatile uint8_t x140 = UINT8_MAX;
	volatile int32_t t28 = -59784553;

	t28 = ((x137<=x138)-(x139&x140));

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MAX;
	int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MIN;

	t29 = ((x141<=x142)-(x143&x144));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	int32_t x147 = 92;
	volatile int8_t x148 = -1;
	int32_t t30 = 62137;

	t30 = ((x145<=x146)-(x147&x148));

	if (t30 != -92) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 15181170U;
	static int16_t x150 = 0;
	volatile int64_t x151 = -512211848540351LL;
	int8_t x152 = -1;
	volatile int64_t t31 = 53370351684528LL;

	t31 = ((x149<=x150)-(x151&x152));

	if (t31 != 512211848540351LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x153 = 83U;
	static int32_t x155 = INT32_MAX;
	volatile int16_t x156 = -8417;
	volatile int32_t t32 = -362905;

	t32 = ((x153<=x154)-(x155&x156));

	if (t32 != -2147475231) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x158 = 0U;
	int16_t x159 = INT16_MIN;

	t33 = ((x157<=x158)-(x159&x160));

	if (t33 != 32769LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x161 = -1;
	int16_t x162 = INT16_MIN;
	static int8_t x163 = INT8_MIN;
	static int8_t x164 = -3;
	int32_t t34 = 2945;

	t34 = ((x161<=x162)-(x163&x164));

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = INT32_MAX;
	static uint64_t x170 = UINT64_MAX;
	int16_t x171 = INT16_MIN;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t35 = -738773060;

	t35 = ((x169<=x170)-(x171&x172));

	if (t35 != 32769) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x175 = -2;
	uint32_t x176 = 269186U;

	t36 = ((x173<=x174)-(x175&x176));

	if (t36 != 4294698111U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = INT64_MAX;
	volatile uint64_t x178 = 1710149121718299LLU;
	int32_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int32_t t37 = -34;

	t37 = ((x177<=x178)-(x179&x180));

	if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x181 = 35891710393LL;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 3U;
	int64_t x184 = 1LL;
	static volatile int64_t t38 = 508LL;

	t38 = ((x181<=x182)-(x183&x184));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x185 = 324208668383790LL;
	int16_t x186 = INT16_MIN;
	int8_t x188 = INT8_MAX;
	volatile uint64_t t39 = 199290268313377LLU;

	t39 = ((x185<=x186)-(x187&x188));

	if (t39 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MAX;
	int8_t x190 = -1;
	int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MIN;

	t40 = ((x189<=x190)-(x191&x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 7921U;
	int32_t x194 = -1;
	volatile int32_t x195 = 1;
	int16_t x196 = -1;
	volatile int32_t t41 = 262511830;

	t41 = ((x193<=x194)-(x195&x196));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = UINT8_MAX;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t42 = -1645;

	t42 = ((x197<=x198)-(x199&x200));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x201 = INT16_MIN;
	int8_t x202 = -2;
	uint64_t x203 = 116LLU;
	int32_t x204 = -1;
	volatile uint64_t t43 = 1556049773044798967LLU;

	t43 = ((x201<=x202)-(x203&x204));

	if (t43 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x206 = 0;
	uint32_t x208 = 213491U;
	volatile uint32_t t44 = 71881726U;

	t44 = ((x205<=x206)-(x207&x208));

	if (t44 != 4294950413U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MIN;
	uint32_t x212 = 0U;
	uint32_t t45 = 15444U;

	t45 = ((x209<=x210)-(x211&x212));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x216 = INT16_MIN;
	volatile int64_t t46 = -20067736579589731LL;

	t46 = ((x213<=x214)-(x215&x216));

	if (t46 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = 101040159963821LLU;
	int16_t x218 = INT16_MIN;
	int64_t x219 = 6462155601LL;
	int32_t x220 = INT32_MIN;
	volatile int64_t t47 = -52LL;

	t47 = ((x217<=x218)-(x219&x220));

	if (t47 != -6442450943LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x223 = 612756607U;
	int64_t x224 = INT64_MIN;
	int64_t t48 = -370934634LL;

	t48 = ((x221<=x222)-(x223&x224));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -836443651711871LL;
	volatile uint64_t x226 = 1471697468LLU;
	int64_t x227 = 2201LL;
	uint32_t x228 = 540U;
	volatile int64_t t49 = 2LL;

	t49 = ((x225<=x226)-(x227&x228));

	if (t49 != -24LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	volatile uint64_t x230 = 1313918393451116133LLU;
	volatile int16_t x231 = -1;
	int16_t x232 = INT16_MAX;
	volatile int32_t t50 = -3869204;

	t50 = ((x229<=x230)-(x231&x232));

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x234 = -1;
	int64_t x235 = INT64_MAX;
	uint32_t x236 = 16832U;
	static int64_t t51 = 1LL;

	t51 = ((x233<=x234)-(x235&x236));

	if (t51 != -16831LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = 1009014U;
	uint16_t x238 = 9U;
	volatile uint8_t x239 = UINT8_MAX;
	int32_t x240 = 358629102;

	t52 = ((x237<=x238)-(x239&x240));

	if (t52 != -238) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = 7;
	int8_t x242 = INT8_MAX;
	static int16_t x243 = -34;
	volatile int8_t x244 = INT8_MIN;
	int32_t t53 = 415;

	t53 = ((x241<=x242)-(x243&x244));

	if (t53 != 129) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MIN;
	uint64_t t54 = 3LLU;

	t54 = ((x245<=x246)-(x247&x248));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = INT32_MAX;
	int64_t x258 = INT64_MIN;
	int16_t x260 = INT16_MAX;
	static uint32_t t55 = 444U;

	t55 = ((x257<=x258)-(x259&x260));

	if (t55 != 4294939527U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = 13;
	uint16_t x262 = 6U;
	int8_t x263 = 0;
	volatile int32_t x264 = -5742322;
	int32_t t56 = 32086093;

	t56 = ((x261<=x262)-(x263&x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = -1;
	int64_t x266 = INT64_MIN;
	int8_t x267 = -5;
	static uint16_t x268 = UINT16_MAX;
	int32_t t57 = 3902506;

	t57 = ((x265<=x266)-(x267&x268));

	if (t57 != -65531) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x273 = UINT8_MAX;
	uint64_t x275 = UINT64_MAX;
	static int32_t x276 = 26;
	volatile uint64_t t58 = 3597LLU;

	t58 = ((x273<=x274)-(x275&x276));

	if (t58 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x277 = 616;
	static volatile int32_t x278 = -1;
	static volatile uint16_t x279 = 115U;
	volatile int32_t t59 = -6;

	t59 = ((x277<=x278)-(x279&x280));

	if (t59 != -67) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = 213616;
	int8_t x282 = 2;
	int16_t x284 = INT16_MIN;
	volatile int32_t t60 = -1603;

	t60 = ((x281<=x282)-(x283&x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = 396U;
	uint8_t x290 = 7U;
	uint16_t x291 = 133U;
	int16_t x292 = -3;
	int32_t t61 = -656169;

	t61 = ((x289<=x290)-(x291&x292));

	if (t61 != -133) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	int64_t x295 = -4398LL;
	uint32_t x296 = 791657391U;

	t62 = ((x293<=x294)-(x295&x296));

	if (t62 != -791652993LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x298 = 5;
	static int16_t x299 = INT16_MIN;
	volatile int64_t x300 = 10064237932225LL;
	int64_t t63 = 116213741LL;

	t63 = ((x297<=x298)-(x299&x300));

	if (t63 != -10064237920256LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int16_t x302 = INT16_MAX;
	int8_t x303 = -1;
	static int32_t x304 = -1;
	int32_t t64 = 3;

	t64 = ((x301<=x302)-(x303&x304));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = INT16_MIN;
	int64_t x307 = 87966146622708182LL;
	int64_t x308 = -6909392244196LL;
	int64_t t65 = -1LL;

	t65 = ((x305<=x306)-(x307&x308));

	if (t65 != -87961712042446867LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = UINT64_MAX;

	t66 = ((x309<=x310)-(x311&x312));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x313 = -1LL;
	volatile int8_t x314 = 63;
	int32_t x315 = -1;
	uint16_t x316 = 8402U;
	volatile int32_t t67 = -6884073;

	t67 = ((x313<=x314)-(x315&x316));

	if (t67 != -8401) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = -22;

	t68 = ((x317<=x318)-(x319&x320));

	if (t68 != 22LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = -1LL;
	uint64_t x323 = UINT64_MAX;
	volatile int64_t x324 = -1LL;
	uint64_t t69 = 373884813970LLU;

	t69 = ((x321<=x322)-(x323&x324));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x326 = 1;
	static volatile uint64_t x327 = 107891315LLU;
	int64_t x328 = -1LL;
	volatile uint64_t t70 = 8597281741801LLU;

	t70 = ((x325<=x326)-(x327&x328));

	if (t70 != 18446744073601660302LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	volatile uint32_t x331 = 0U;
	uint16_t x332 = 53U;
	volatile uint32_t t71 = 623626U;

	t71 = ((x329<=x330)-(x331&x332));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = -72237746LL;
	int32_t x334 = INT32_MIN;

	t72 = ((x333<=x334)-(x335&x336));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 9323LLU;
	static volatile int8_t x338 = 0;
	uint64_t x339 = 2708105193778408631LLU;
	static int8_t x340 = -3;
	static volatile uint64_t t73 = 24575674164LLU;

	t73 = ((x337<=x338)-(x339&x340));

	if (t73 != 15738638879931142987LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x341 = INT32_MAX;
	uint16_t x342 = 41U;
	static int32_t x343 = INT32_MAX;
	uint64_t t74 = 0LLU;

	t74 = ((x341<=x342)-(x343&x344));

	if (t74 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x346 = 44U;
	uint16_t x347 = UINT16_MAX;
	int32_t t75 = 14951;

	t75 = ((x345<=x346)-(x347&x348));

	if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x349 = 1818734LLU;
	int64_t x350 = INT64_MIN;
	uint16_t x352 = 665U;
	static volatile int32_t t76 = 7;

	t76 = ((x349<=x350)-(x351&x352));

	if (t76 != -664) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x354 = INT16_MAX;
	int16_t x355 = 7085;
	volatile int16_t x356 = 5;
	int32_t t77 = -73536696;

	t77 = ((x353<=x354)-(x355&x356));

	if (t77 != -5) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x357 = -261391687210LL;
	static uint32_t x359 = 126U;
	int8_t x360 = INT8_MIN;
	static volatile uint32_t t78 = 66068U;

	t78 = ((x357<=x358)-(x359&x360));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = -6;
	int8_t x363 = INT8_MIN;
	volatile int16_t x364 = -5;

	t79 = ((x361<=x362)-(x363&x364));

	if (t79 != 129) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x365 = UINT16_MAX;
	int8_t x366 = INT8_MIN;
	int8_t x367 = 1;

	t80 = ((x365<=x366)-(x367&x368));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x373 = INT32_MIN;
	volatile uint32_t x374 = 16358U;
	static int16_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t81 = 1470381;

	t81 = ((x373<=x374)-(x375&x376));

	if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = -1LL;
	static uint8_t x380 = UINT8_MAX;
	uint32_t t82 = 0U;

	t82 = ((x377<=x378)-(x379&x380));

	if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x381 = 1U;
	int64_t x382 = INT64_MIN;
	static int32_t x383 = INT32_MIN;
	volatile uint16_t x384 = 3U;
	int32_t t83 = 10652754;

	t83 = ((x381<=x382)-(x383&x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x385 = INT8_MAX;
	uint64_t x386 = UINT64_MAX;
	uint8_t x387 = 122U;
	volatile int64_t t84 = 21637243474LL;

	t84 = ((x385<=x386)-(x387&x388));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = UINT32_MAX;
	static int16_t x390 = INT16_MIN;
	volatile int32_t x391 = 971722;
	uint64_t t85 = 8635925932472074383LLU;

	t85 = ((x389<=x390)-(x391&x392));

	if (t85 != 18446744073708748224LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x399 = 5774325231LL;
	static volatile uint64_t t86 = 259606221294LLU;

	t86 = ((x397<=x398)-(x399&x400));

	if (t86 != 18446744067935226385LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = INT32_MAX;
	static int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MAX;
	static int16_t x404 = INT16_MAX;
	static int32_t t87 = -236;

	t87 = ((x401<=x402)-(x403&x404));

	if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x405 = 13U;
	int16_t x406 = -1;
	uint8_t x407 = 0U;
	int32_t x408 = -58616;
	int32_t t88 = 17;

	t88 = ((x405<=x406)-(x407&x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x409 = INT8_MAX;
	uint8_t x410 = 1U;
	uint64_t x411 = UINT64_MAX;
	volatile uint64_t x412 = 15LLU;
	volatile uint64_t t89 = 26325905772982LLU;

	t89 = ((x409<=x410)-(x411&x412));

	if (t89 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x414 = INT64_MAX;
	int16_t x415 = 30;
	int64_t x416 = INT64_MIN;
	volatile int64_t t90 = -694577856LL;

	t90 = ((x413<=x414)-(x415&x416));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x417 = INT64_MAX;
	volatile int8_t x418 = -2;
	uint8_t x420 = 77U;

	t91 = ((x417<=x418)-(x419&x420));

	if (t91 != -77) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = 10204;
	static uint8_t x422 = 2U;
	uint8_t x423 = 8U;
	static int64_t x424 = -1LL;
	volatile int64_t t92 = -335928728LL;

	t92 = ((x421<=x422)-(x423&x424));

	if (t92 != -8LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MIN;
	volatile uint16_t x426 = 1U;
	volatile int32_t t93 = 947;

	t93 = ((x425<=x426)-(x427&x428));

	if (t93 != -43) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x429 = 2035U;
	int32_t x430 = -266159;
	uint8_t x431 = 3U;
	int32_t x432 = -1;
	int32_t t94 = 4914;

	t94 = ((x429<=x430)-(x431&x432));

	if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x433 = INT32_MIN;
	int64_t x434 = INT64_MIN;
	volatile int32_t x435 = 19513;
	static volatile int32_t t95 = -998404289;

	t95 = ((x433<=x434)-(x435&x436));

	if (t95 != -19513) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x437 = 203U;
	int64_t x438 = -135069570828LL;
	int64_t x439 = 15500563263809LL;
	volatile uint64_t x440 = 388498LLU;
	static volatile uint64_t t96 = 24LLU;

	t96 = ((x437<=x438)-(x439&x440));

	if (t96 != 18446744073709477632LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x442 = INT8_MIN;
	volatile int8_t x443 = -1;
	volatile int8_t x444 = 0;
	int32_t t97 = -60207;

	t97 = ((x441<=x442)-(x443&x444));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = INT64_MAX;
	int16_t x446 = -1;
	int8_t x447 = INT8_MIN;
	int32_t x448 = -1;

	t98 = ((x445<=x446)-(x447&x448));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x449 = INT64_MIN;
	int8_t x450 = 25;
	static volatile int16_t x451 = -1;
	int8_t x452 = INT8_MIN;
	static int32_t t99 = -8;

	t99 = ((x449<=x450)-(x451&x452));

	if (t99 != 129) { NG(); } else { ; }
	
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

