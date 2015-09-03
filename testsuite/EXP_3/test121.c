#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = -1;
static int32_t x12 = -1;
static volatile int32_t t3 = -13819359;
int32_t x25 = 28090563;
static int8_t x37 = INT8_MIN;
volatile int32_t x41 = INT32_MIN;
static volatile int64_t x45 = 4299998521456296LL;
int32_t x48 = INT32_MAX;
volatile int32_t x49 = INT32_MIN;
uint32_t x52 = 239U;
int64_t t10 = 3004LL;
uint8_t x53 = UINT8_MAX;
int64_t x55 = 498LL;
int16_t x57 = -1387;
uint16_t x58 = UINT16_MAX;
volatile int64_t t12 = 0LL;
uint8_t x63 = UINT8_MAX;
int16_t x73 = 45;
uint8_t x75 = 23U;
int32_t x80 = -1;
uint16_t x88 = UINT16_MAX;
volatile uint16_t x92 = 654U;
static uint64_t t17 = 705488314425183LLU;
int32_t t18 = 0;
int16_t x97 = INT16_MIN;
int32_t x109 = -816;
int64_t x123 = -15LL;
static int16_t x130 = INT16_MAX;
static uint64_t x133 = 1381558471220767LLU;
int32_t x134 = INT32_MIN;
static int64_t x137 = INT64_MIN;
int32_t x143 = INT32_MIN;
int16_t x146 = INT16_MIN;
int8_t x151 = -1;
int32_t t32 = -5056162;
uint16_t x157 = 479U;
int64_t x166 = -194883014LL;
uint8_t x168 = 33U;
static uint64_t x179 = 90198924003861862LLU;
int64_t x180 = INT64_MAX;
static volatile int64_t x189 = INT64_MIN;
int8_t x190 = -1;
int64_t x191 = INT64_MAX;
static int32_t x192 = INT32_MIN;
volatile int32_t x195 = INT32_MIN;
volatile int32_t t40 = 23745130;
volatile int64_t t41 = -2885695070LL;
static int16_t x201 = INT16_MAX;
uint32_t x204 = 331974268U;
int32_t x208 = -1;
int8_t x216 = INT8_MIN;
static uint64_t t44 = 6LLU;
static volatile int32_t t45 = -913777;
static int16_t x223 = INT16_MIN;
uint64_t x228 = 1263995936970943LLU;
volatile uint64_t x231 = 4729860586935942178LLU;
int32_t x245 = -1;
static volatile int8_t x261 = INT8_MAX;
int32_t x262 = -13;
int8_t x267 = 10;
uint64_t x269 = 1032564879572LLU;
int8_t x280 = INT8_MIN;
uint16_t x281 = 30523U;
int8_t x282 = INT8_MAX;
uint32_t x284 = 13325138U;
volatile int32_t t61 = 1700353;
int8_t x289 = INT8_MAX;
uint8_t x290 = 0U;
static volatile int32_t t62 = 6;
volatile uint32_t x302 = 13930U;
uint16_t x303 = 5U;
uint64_t x305 = 21258227833LLU;
int64_t x306 = INT64_MIN;
int16_t x327 = -1;
uint16_t x338 = UINT16_MAX;
int32_t t74 = 203315340;
int64_t x346 = -1125634411LL;
int64_t x360 = INT64_MAX;
int64_t x362 = INT64_MIN;
volatile int8_t x365 = INT8_MIN;
static int16_t x376 = -1;
int16_t x380 = 876;
static volatile int16_t x381 = INT16_MAX;
int16_t x384 = INT16_MIN;
int16_t x385 = -1;
uint8_t x388 = 10U;
int32_t x395 = -1;
volatile int16_t x397 = INT16_MIN;
static int64_t x398 = INT64_MIN;
int8_t x401 = 18;
volatile uint64_t t88 = 32928LLU;
static int64_t x413 = 6834LL;
uint8_t x424 = 4U;
int64_t t93 = 469425156LL;


void f0(void) {
	int32_t x5 = INT32_MAX;
	int32_t x6 = INT32_MIN;
	static uint16_t x8 = 19U;
	volatile int32_t t0 = 0;

	t0 = ((x5<=x6)/(x7+x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -69963541634668128LL;
	int32_t x10 = INT32_MIN;
	uint16_t x11 = UINT16_MAX;
	volatile int32_t t1 = -22871;

	t1 = ((x9<=x10)/(x11+x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 104291LLU;
	int32_t x14 = -1;
	static uint8_t x15 = 126U;
	int8_t x16 = -1;
	int32_t t2 = -2323857;

	t2 = ((x13<=x14)/(x15+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	uint16_t x22 = 1U;
	int8_t x23 = 3;
	int8_t x24 = INT8_MIN;

	t3 = ((x21<=x22)/(x23+x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x26 = INT8_MIN;
	uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MIN;
	volatile int64_t t4 = -829995LL;

	t4 = ((x25<=x26)/(x27+x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 1;
	static uint8_t x30 = 48U;
	int16_t x31 = INT16_MIN;
	volatile int8_t x32 = INT8_MIN;
	int32_t t5 = 2668771;

	t5 = ((x29<=x30)/(x31+x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = -1305;
	int16_t x36 = INT16_MAX;
	int32_t t6 = 232532489;

	t6 = ((x33<=x34)/(x35+x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x38 = INT16_MAX;
	int16_t x39 = -1;
	int8_t x40 = -1;
	volatile int32_t t7 = 65126;

	t7 = ((x37<=x38)/(x39+x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MIN;
	uint64_t x43 = 1281464LLU;
	int64_t x44 = -2315749644260802842LL;
	uint64_t t8 = 1883526181LLU;

	t8 = ((x41<=x42)/(x43+x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = -1;
	int32_t x47 = -1;
	volatile int32_t t9 = 861853;

	t9 = ((x45<=x46)/(x47+x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x50 = UINT64_MAX;
	int64_t x51 = -3104350153994686LL;

	t10 = ((x49<=x50)/(x51+x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x54 = UINT64_MAX;
	static int8_t x56 = INT8_MIN;
	int64_t t11 = -3701782177502898396LL;

	t11 = ((x53<=x54)/(x55+x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x59 = -1LL;
	uint32_t x60 = 3515U;

	t12 = ((x57<=x58)/(x59+x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	int8_t x62 = -12;
	static volatile int16_t x64 = INT16_MAX;
	int32_t t13 = 48674711;

	t13 = ((x61<=x62)/(x63+x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x74 = 0U;
	int16_t x76 = -1;
	volatile int32_t t14 = -519;

	t14 = ((x73<=x74)/(x75+x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = 202;
	uint32_t x78 = 9880376U;
	uint64_t x79 = 29LLU;
	uint64_t t15 = 1826432169225LLU;

	t15 = ((x77<=x78)/(x79+x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = UINT64_MAX;
	uint16_t x86 = 0U;
	static int32_t x87 = INT32_MIN;
	static volatile int32_t t16 = -12585387;

	t16 = ((x85<=x86)/(x87+x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MIN;
	static int32_t x90 = INT32_MIN;
	uint64_t x91 = 46112898264178LLU;

	t17 = ((x89<=x90)/(x91+x92));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	int64_t x94 = -51213457LL;
	int16_t x95 = -1;
	uint16_t x96 = 32072U;

	t18 = ((x93<=x94)/(x95+x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x98 = -1;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = INT8_MIN;
	uint64_t t19 = 610LLU;

	t19 = ((x97<=x98)/(x99+x100));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 3;
	int32_t x102 = -1;
	int32_t x103 = INT32_MIN;
	static uint8_t x104 = UINT8_MAX;
	int32_t t20 = -1649;

	t20 = ((x101<=x102)/(x103+x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x105 = 407U;
	int64_t x106 = 133853982715781484LL;
	uint32_t x107 = 106946744U;
	volatile uint16_t x108 = UINT16_MAX;
	static volatile uint32_t t21 = 336U;

	t21 = ((x105<=x106)/(x107+x108));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x110 = -1;
	uint32_t x111 = 40080883U;
	int64_t x112 = 222021LL;
	volatile int64_t t22 = 823952111916026411LL;

	t22 = ((x109<=x110)/(x111+x112));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x117 = INT16_MAX;
	static int32_t x118 = -82;
	volatile int32_t x119 = INT32_MIN;
	int32_t x120 = 97858788;
	volatile int32_t t23 = -1;

	t23 = ((x117<=x118)/(x119+x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x121 = INT32_MIN;
	int32_t x122 = 86836846;
	uint16_t x124 = UINT16_MAX;
	static int64_t t24 = -6264888451836542LL;

	t24 = ((x121<=x122)/(x123+x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x125 = 423788217LLU;
	int32_t x126 = INT32_MIN;
	static volatile int64_t x127 = -237LL;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int64_t t25 = -173587222301LL;

	t25 = ((x125<=x126)/(x127+x128));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = INT8_MIN;
	static int64_t x131 = -1LL;
	int64_t x132 = 569680LL;
	int64_t t26 = 117350523LL;

	t26 = ((x129<=x130)/(x131+x132));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x135 = UINT32_MAX;
	int8_t x136 = -1;
	uint32_t t27 = 350698229U;

	t27 = ((x133<=x134)/(x135+x136));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x138 = UINT16_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	static int64_t t28 = 237099408855LL;

	t28 = ((x137<=x138)/(x139+x140));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x141 = -134101532723105029LL;
	int32_t x142 = INT32_MIN;
	static uint64_t x144 = UINT64_MAX;
	static uint64_t t29 = 1LLU;

	t29 = ((x141<=x142)/(x143+x144));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x145 = INT64_MAX;
	volatile int8_t x147 = INT8_MIN;
	static volatile int8_t x148 = -1;
	volatile int32_t t30 = -27418319;

	t30 = ((x145<=x146)/(x147+x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MAX;
	volatile int16_t x150 = 97;
	static uint8_t x152 = 28U;
	volatile int32_t t31 = 38040;

	t31 = ((x149<=x150)/(x151+x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x153 = -1LL;
	static volatile int32_t x154 = -110;
	int32_t x155 = INT32_MIN;
	uint16_t x156 = UINT16_MAX;

	t32 = ((x153<=x154)/(x155+x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t33 = -14176211;

	t33 = ((x157<=x158)/(x159+x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x161 = INT8_MIN;
	static volatile int16_t x162 = INT16_MAX;
	uint32_t x163 = 13U;
	static int8_t x164 = INT8_MIN;
	volatile uint32_t t34 = 5605710U;

	t34 = ((x161<=x162)/(x163+x164));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 24U;
	uint64_t x167 = UINT64_MAX;
	volatile uint64_t t35 = 343594708LLU;

	t35 = ((x165<=x166)/(x167+x168));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = -4642371;
	uint32_t x170 = 193876U;
	volatile int64_t x171 = -466LL;
	int64_t x172 = -1871866677042709427LL;
	static volatile int64_t t36 = 1457354LL;

	t36 = ((x169<=x170)/(x171+x172));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x177 = UINT16_MAX;
	int64_t x178 = -1LL;
	uint64_t t37 = 102236LLU;

	t37 = ((x177<=x178)/(x179+x180));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MAX;
	volatile int16_t x182 = -1;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = -1;
	int32_t t38 = -2015092;

	t38 = ((x181<=x182)/(x183+x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t t39 = 880328997242441LL;

	t39 = ((x189<=x190)/(x191+x192));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = -61;
	int16_t x196 = INT16_MAX;

	t40 = ((x193<=x194)/(x195+x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x197 = 916U;
	int8_t x198 = 30;
	int64_t x199 = -1LL;
	uint16_t x200 = UINT16_MAX;

	t41 = ((x197<=x198)/(x199+x200));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x202 = -239;
	uint16_t x203 = 715U;
	uint32_t t42 = 9759751U;

	t42 = ((x201<=x202)/(x203+x204));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = 409LL;
	int32_t x206 = 35;
	uint64_t x207 = UINT64_MAX;
	uint64_t t43 = 68LLU;

	t43 = ((x205<=x206)/(x207+x208));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x213 = INT8_MIN;
	static uint8_t x214 = 52U;
	static uint64_t x215 = 0LLU;

	t44 = ((x213<=x214)/(x215+x216));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x217 = INT64_MIN;
	static int16_t x218 = -1;
	static int8_t x219 = 1;
	uint16_t x220 = UINT16_MAX;

	t45 = ((x217<=x218)/(x219+x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x221 = UINT64_MAX;
	uint64_t x222 = 994544452675171035LLU;
	uint32_t x224 = 24803089U;
	volatile uint32_t t46 = 383383280U;

	t46 = ((x221<=x222)/(x223+x224));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = 93U;
	static int16_t x226 = -1;
	int32_t x227 = INT32_MIN;
	uint64_t t47 = 123178720858407LLU;

	t47 = ((x225<=x226)/(x227+x228));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x229 = INT32_MIN;
	volatile int64_t x230 = -84994813658LL;
	int64_t x232 = INT64_MIN;
	static volatile uint64_t t48 = 25207633942LLU;

	t48 = ((x229<=x230)/(x231+x232));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x233 = INT64_MIN;
	static volatile int8_t x234 = -1;
	static int16_t x235 = 4484;
	static uint16_t x236 = 1U;
	volatile int32_t t49 = 261102311;

	t49 = ((x233<=x234)/(x235+x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x237 = UINT64_MAX;
	volatile int32_t x238 = 3307146;
	uint32_t x239 = UINT32_MAX;
	static int8_t x240 = INT8_MIN;
	uint32_t t50 = 6053623U;

	t50 = ((x237<=x238)/(x239+x240));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = 5;
	volatile int16_t x242 = -801;
	int16_t x243 = 31;
	static int32_t x244 = 96685499;
	static int32_t t51 = 176356431;

	t51 = ((x241<=x242)/(x243+x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MIN;
	int16_t x248 = INT16_MAX;
	static int32_t t52 = -513223;

	t52 = ((x245<=x246)/(x247+x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = 0;
	volatile int32_t x250 = -58143;
	uint32_t x251 = UINT32_MAX;
	volatile uint64_t x252 = 489670720LLU;
	uint64_t t53 = 1401LLU;

	t53 = ((x249<=x250)/(x251+x252));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = -1;
	static int32_t x258 = INT32_MIN;
	int64_t x259 = 713992328105656LL;
	volatile int32_t x260 = INT32_MIN;
	volatile int64_t t54 = 58100466553389787LL;

	t54 = ((x257<=x258)/(x259+x260));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x263 = INT8_MIN;
	int8_t x264 = -1;
	volatile int32_t t55 = -2011;

	t55 = ((x261<=x262)/(x263+x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x265 = UINT16_MAX;
	uint32_t x266 = 1642261U;
	int8_t x268 = INT8_MAX;
	volatile int32_t t56 = 463401213;

	t56 = ((x265<=x266)/(x267+x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x270 = 38;
	uint64_t x271 = 17337879080369LLU;
	uint64_t x272 = 3LLU;
	static uint64_t t57 = 465648450159813LLU;

	t57 = ((x269<=x270)/(x271+x272));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x273 = INT16_MIN;
	static int8_t x274 = -1;
	int16_t x275 = 655;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t58 = -102037;

	t58 = ((x273<=x274)/(x275+x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x277 = 1;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = -1;
	int32_t t59 = -1;

	t59 = ((x277<=x278)/(x279+x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x283 = UINT64_MAX;
	uint64_t t60 = 54182485791LLU;

	t60 = ((x281<=x282)/(x283+x284));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x285 = INT16_MAX;
	static uint32_t x286 = UINT32_MAX;
	static int8_t x287 = INT8_MIN;
	int16_t x288 = -1;

	t61 = ((x285<=x286)/(x287+x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x291 = 7U;
	int8_t x292 = -1;

	t62 = ((x289<=x290)/(x291+x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x293 = INT64_MIN;
	int16_t x294 = -1;
	uint32_t x295 = 29636U;
	uint64_t x296 = 29956468535LLU;
	volatile uint64_t t63 = 21412263785456448LLU;

	t63 = ((x293<=x294)/(x295+x296));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = 85U;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	uint8_t x300 = 23U;
	volatile int32_t t64 = 254372667;

	t64 = ((x297<=x298)/(x299+x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x301 = UINT8_MAX;
	volatile uint8_t x304 = 3U;
	int32_t t65 = -14;

	t65 = ((x301<=x302)/(x303+x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x307 = -1;
	static volatile int32_t x308 = -1;
	int32_t t66 = -35273;

	t66 = ((x305<=x306)/(x307+x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = INT64_MAX;
	volatile int16_t x310 = -1;
	volatile uint8_t x311 = UINT8_MAX;
	int8_t x312 = -1;
	volatile int32_t t67 = 751;

	t67 = ((x309<=x310)/(x311+x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x313 = UINT8_MAX;
	uint16_t x314 = 216U;
	uint8_t x315 = UINT8_MAX;
	volatile int16_t x316 = -1;
	volatile int32_t t68 = 1;

	t68 = ((x313<=x314)/(x315+x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x317 = UINT16_MAX;
	int64_t x318 = INT64_MIN;
	volatile int64_t x319 = -1LL;
	int32_t x320 = 55539;
	static int64_t t69 = -87296764070LL;

	t69 = ((x317<=x318)/(x319+x320));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x325 = -1;
	int64_t x326 = 217519090814578LL;
	static uint16_t x328 = UINT16_MAX;
	int32_t t70 = 21747;

	t70 = ((x325<=x326)/(x327+x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = -1;
	static uint32_t x330 = 15226124U;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t71 = -27039;

	t71 = ((x329<=x330)/(x331+x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x333 = -380;
	volatile int64_t x334 = INT64_MAX;
	volatile int16_t x335 = INT16_MAX;
	int16_t x336 = -68;
	static volatile int32_t t72 = 1408306;

	t72 = ((x333<=x334)/(x335+x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x337 = -95781003;
	static volatile uint64_t x339 = 757479429506317LLU;
	uint32_t x340 = 321U;
	uint64_t t73 = 982LLU;

	t73 = ((x337<=x338)/(x339+x340));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x341 = UINT64_MAX;
	uint32_t x342 = 24U;
	uint8_t x343 = 2U;
	int32_t x344 = INT32_MIN;

	t74 = ((x341<=x342)/(x343+x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = 55;
	uint64_t x347 = 5903012488061307483LLU;
	volatile int64_t x348 = INT64_MIN;
	uint64_t t75 = 421579LLU;

	t75 = ((x345<=x346)/(x347+x348));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x349 = UINT32_MAX;
	static uint16_t x350 = 2982U;
	volatile uint8_t x351 = UINT8_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t76 = -80948;

	t76 = ((x349<=x350)/(x351+x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = INT64_MAX;
	int32_t x358 = INT32_MAX;
	volatile uint16_t x359 = 0U;
	int64_t t77 = 25671005768385082LL;

	t77 = ((x357<=x358)/(x359+x360));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = -161133676LL;
	static uint16_t x363 = UINT16_MAX;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t78 = -235053;

	t78 = ((x361<=x362)/(x363+x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x366 = 60768;
	uint16_t x367 = UINT16_MAX;
	int64_t x368 = -1LL;
	static int64_t t79 = -13769915334LL;

	t79 = ((x365<=x366)/(x367+x368));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MAX;
	int8_t x371 = 1;
	uint64_t x372 = 139462549318180639LLU;
	static volatile uint64_t t80 = 159699254402LLU;

	t80 = ((x369<=x370)/(x371+x372));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = -366910106166LL;
	uint32_t x374 = 297009U;
	uint16_t x375 = 73U;
	int32_t t81 = 233938973;

	t81 = ((x373<=x374)/(x375+x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x377 = INT16_MIN;
	int64_t x378 = -518500LL;
	volatile uint8_t x379 = 8U;
	volatile int32_t t82 = 1106856;

	t82 = ((x377<=x378)/(x379+x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x382 = 1U;
	int32_t x383 = -2006228;
	int32_t t83 = 675137;

	t83 = ((x381<=x382)/(x383+x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x386 = INT8_MAX;
	volatile int8_t x387 = INT8_MIN;
	int32_t t84 = 114712;

	t84 = ((x385<=x386)/(x387+x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = -96309142;
	int8_t x390 = INT8_MAX;
	int32_t x391 = -808985404;
	int16_t x392 = INT16_MIN;
	volatile int32_t t85 = -5;

	t85 = ((x389<=x390)/(x391+x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MAX;
	uint8_t x394 = 57U;
	uint64_t x396 = 376204LLU;
	volatile uint64_t t86 = 27991385LLU;

	t86 = ((x393<=x394)/(x395+x396));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x399 = -1;
	volatile int16_t x400 = INT16_MIN;
	int32_t t87 = -15879;

	t87 = ((x397<=x398)/(x399+x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x402 = -4291;
	uint64_t x403 = 180516910804789LLU;
	int32_t x404 = INT32_MAX;

	t88 = ((x401<=x402)/(x403+x404));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x405 = 3897912805620LLU;
	uint64_t x406 = UINT64_MAX;
	volatile int64_t x407 = -1LL;
	int64_t x408 = -1LL;
	int64_t t89 = -2978544627990846316LL;

	t89 = ((x405<=x406)/(x407+x408));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x409 = INT8_MIN;
	static int64_t x410 = -1LL;
	int32_t x411 = INT32_MAX;
	int32_t x412 = INT32_MIN;
	static volatile int32_t t90 = 1;

	t90 = ((x409<=x410)/(x411+x412));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x414 = UINT16_MAX;
	volatile int64_t x415 = INT64_MIN;
	static int8_t x416 = INT8_MAX;
	int64_t t91 = -84958570603447311LL;

	t91 = ((x413<=x414)/(x415+x416));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x417 = 980431895U;
	uint32_t x418 = 172128186U;
	uint32_t x419 = UINT32_MAX;
	static uint32_t x420 = UINT32_MAX;
	uint32_t t92 = 0U;

	t92 = ((x417<=x418)/(x419+x420));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = INT64_MIN;
	volatile int64_t x422 = INT64_MIN;
	volatile int64_t x423 = INT64_MIN;

	t93 = ((x421<=x422)/(x423+x424));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = -1LL;
	int64_t x426 = -1LL;
	uint32_t x427 = UINT32_MAX;
	int64_t x428 = -899618630LL;
	volatile int64_t t94 = 7371284928LL;

	t94 = ((x425<=x426)/(x427+x428));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = INT8_MIN;
	uint32_t x430 = UINT32_MAX;
	int8_t x431 = INT8_MIN;
	volatile uint16_t x432 = 2U;
	volatile int32_t t95 = -2525562;

	t95 = ((x429<=x430)/(x431+x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x433 = INT16_MIN;
	uint32_t x434 = 78744U;
	static uint64_t x435 = 47778LLU;
	int16_t x436 = 31;
	volatile uint64_t t96 = 37002938808620LLU;

	t96 = ((x433<=x434)/(x435+x436));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = INT64_MIN;
	static uint32_t x438 = 7U;
	static int8_t x439 = -1;
	int8_t x440 = INT8_MAX;
	static volatile int32_t t97 = 0;

	t97 = ((x437<=x438)/(x439+x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x441 = INT8_MAX;
	static int32_t x442 = INT32_MIN;
	static int16_t x443 = -1;
	int16_t x444 = -224;
	static int32_t t98 = 976776;

	t98 = ((x441<=x442)/(x443+x444));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = -7143715598LL;
	uint32_t x447 = UINT32_MAX;
	uint8_t x448 = 17U;
	uint32_t t99 = 6651205U;

	t99 = ((x445<=x446)/(x447+x448));

	if (t99 != 0U) { NG(); } else { ; }
	
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

