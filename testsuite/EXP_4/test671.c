#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -196916;
static uint8_t x5 = UINT8_MAX;
int8_t x12 = INT8_MIN;
uint16_t x18 = 20U;
static uint8_t x19 = 7U;
int32_t t4 = 14;
volatile int8_t x27 = INT8_MIN;
volatile int32_t t6 = 31943;
uint32_t x33 = 644083806U;
volatile int32_t x34 = -1;
int16_t x38 = INT16_MIN;
uint32_t x43 = 251704202U;
uint16_t x48 = 502U;
volatile int32_t t11 = 6;
static volatile uint16_t x51 = 114U;
static int32_t x65 = -1;
int16_t x67 = -1;
volatile int16_t x68 = INT16_MIN;
static int64_t x74 = INT64_MIN;
static int32_t t18 = -7850794;
volatile int16_t x84 = 1;
static int8_t x85 = 1;
volatile int32_t t21 = 13;
uint64_t x96 = 132675LLU;
uint32_t x97 = 2717U;
int16_t x101 = INT16_MIN;
static int16_t x105 = 894;
volatile uint8_t x106 = UINT8_MAX;
int32_t t25 = -46293965;
uint64_t x110 = UINT64_MAX;
int64_t x112 = 1959126598247118LL;
int32_t t27 = 16;
volatile int16_t x130 = -1;
int16_t x131 = INT16_MIN;
int32_t t30 = 116049;
volatile uint16_t x143 = UINT16_MAX;
int8_t x144 = -1;
int8_t x148 = INT8_MIN;
int32_t x151 = 5;
int8_t x155 = 3;
int64_t x165 = -1LL;
volatile uint64_t x168 = UINT64_MAX;
uint32_t x175 = UINT32_MAX;
uint64_t x177 = UINT64_MAX;
int8_t x183 = INT8_MAX;
volatile int32_t x184 = INT32_MIN;
uint8_t x195 = UINT8_MAX;
int16_t x198 = -41;
static int64_t x200 = -97393058LL;
static int32_t t48 = -2;
int8_t x212 = 1;
int64_t x219 = -25792375064LL;
int64_t x228 = INT64_MAX;
int8_t x232 = INT8_MIN;
uint64_t x235 = 4380099LLU;
int64_t x239 = INT64_MIN;
static uint32_t x240 = 293U;
int8_t x251 = -1;
static uint32_t x253 = 90538U;
static int8_t x254 = -1;
int8_t x258 = INT8_MIN;
int32_t t61 = -2628174;
int32_t x262 = INT32_MIN;
static volatile int16_t x266 = 9;
static int32_t x270 = -1;
uint32_t x271 = UINT32_MAX;
volatile int16_t x275 = -1;
uint16_t x276 = 138U;
int64_t x281 = INT64_MIN;
uint8_t x282 = UINT8_MAX;
int16_t x284 = INT16_MIN;
static int64_t x286 = INT64_MIN;
static volatile int8_t x288 = 44;
int32_t t70 = 804670834;
uint64_t x303 = UINT64_MAX;
int8_t x311 = -1;
int8_t x318 = -41;
int32_t t75 = -480159871;
uint8_t x325 = 19U;
int16_t x326 = INT16_MIN;
static volatile uint8_t x327 = UINT8_MAX;
int16_t x337 = INT16_MIN;
uint8_t x356 = UINT8_MAX;
static volatile int32_t t84 = -2566434;
uint32_t x367 = 1U;
int8_t x378 = -1;
int8_t x380 = 4;
volatile int32_t x386 = -169260;
int64_t x388 = INT64_MAX;
int8_t x392 = INT8_MIN;
uint16_t x399 = 6336U;
int8_t x401 = -46;
volatile uint16_t x402 = 7578U;
int8_t x404 = 3;
static int16_t x411 = INT16_MAX;
int16_t x412 = -1;
static uint32_t x413 = UINT32_MAX;
static uint64_t x415 = 718275LLU;
uint16_t x418 = 5425U;
int32_t t99 = 182043447;


void f0(void) {
	int16_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	int16_t x3 = 49;
	static volatile int8_t x4 = INT8_MAX;

	t0 = (x1==(x2^(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int64_t x7 = -1LL;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -1531;

	t1 = (x5==(x6^(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static volatile int8_t x10 = INT8_MIN;
	volatile int64_t x11 = -4148LL;
	int32_t t2 = -235624;

	t2 = (x9==(x10^(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static volatile int64_t x14 = INT64_MIN;
	volatile int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -7;

	t3 = (x13==(x14^(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	int8_t x20 = INT8_MIN;

	t4 = (x17==(x18^(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	uint16_t x22 = 10U;
	int32_t x23 = INT32_MIN;
	int8_t x24 = -5;
	int32_t t5 = 370;

	t5 = (x21==(x22^(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = INT32_MAX;
	static volatile int64_t x26 = INT64_MIN;
	volatile int8_t x28 = INT8_MIN;

	t6 = (x25==(x26^(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	uint16_t x30 = 191U;
	int64_t x31 = INT64_MIN;
	uint8_t x32 = 1U;
	static volatile int32_t t7 = -2;

	t7 = (x29==(x30^(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = INT64_MIN;
	uint16_t x36 = 29693U;
	int32_t t8 = -79;

	t8 = (x33==(x34^(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	uint16_t x39 = 604U;
	int64_t x40 = -96301042857844703LL;
	volatile int32_t t9 = -1;

	t9 = (x37==(x38^(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	uint64_t x42 = UINT64_MAX;
	volatile uint64_t x44 = 2LLU;
	static volatile int32_t t10 = -172657;

	t10 = (x41==(x42^(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -25;
	uint64_t x46 = 358713107LLU;
	static int64_t x47 = INT64_MAX;

	t11 = (x45==(x46^(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	int64_t x50 = 130359965347LL;
	uint64_t x52 = 34LLU;
	static int32_t t12 = -3768;

	t12 = (x49==(x50^(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 78526LL;
	int64_t x54 = INT64_MAX;
	int32_t x55 = INT32_MIN;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 31796;

	t13 = (x53==(x54^(x55/x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	int64_t x58 = -1LL;
	uint8_t x59 = 18U;
	uint16_t x60 = 1U;
	volatile int32_t t14 = 17;

	t14 = (x57==(x58^(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	static int8_t x62 = -1;
	int16_t x63 = 3;
	static volatile int16_t x64 = INT16_MAX;
	int32_t t15 = 157471;

	t15 = (x61==(x62^(x63/x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = UINT32_MAX;
	volatile int32_t t16 = -58;

	t16 = (x65==(x66^(x67/x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 61U;
	int64_t x70 = 141775596448153970LL;
	int64_t x71 = INT64_MAX;
	int64_t x72 = 2741555LL;
	volatile int32_t t17 = 2;

	t17 = (x69==(x70^(x71/x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -7;
	volatile int16_t x75 = -1;
	int32_t x76 = 70;

	t18 = (x73==(x74^(x75/x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	uint8_t x83 = 1U;
	volatile int32_t t19 = 7;

	t19 = (x81==(x82^(x83/x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MIN;
	int16_t x87 = -1;
	uint32_t x88 = UINT32_MAX;
	int32_t t20 = -7033;

	t20 = (x85==(x86^(x87/x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 36U;
	uint64_t x90 = 1518427LLU;
	int8_t x91 = -1;
	int64_t x92 = INT64_MIN;

	t21 = (x89==(x90^(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x93 = -1LL;
	static uint32_t x94 = 3U;
	static int64_t x95 = INT64_MAX;
	volatile int32_t t22 = 4026;

	t22 = (x93==(x94^(x95/x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = -1;
	uint8_t x99 = 86U;
	int32_t x100 = 151576688;
	static volatile int32_t t23 = 0;

	t23 = (x97==(x98^(x99/x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x102 = 59;
	uint32_t x103 = UINT32_MAX;
	uint64_t x104 = 1020756973LLU;
	static int32_t t24 = 1736751;

	t24 = (x101==(x102^(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 144351147876283LLU;

	t25 = (x105==(x106^(x107/x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 2416;
	static volatile uint8_t x111 = UINT8_MAX;
	int32_t t26 = 0;

	t26 = (x109==(x110^(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = 146;
	int64_t x114 = -1073284006LL;
	int8_t x115 = -1;
	volatile uint32_t x116 = UINT32_MAX;

	t27 = (x113==(x114^(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MAX;
	uint64_t x122 = 22342355349394LLU;
	volatile uint8_t x123 = UINT8_MAX;
	static int32_t x124 = INT32_MAX;
	int32_t t28 = 131753077;

	t28 = (x121==(x122^(x123/x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int16_t x126 = -1;
	uint64_t x127 = UINT64_MAX;
	static int32_t x128 = -1;
	int32_t t29 = 149;

	t29 = (x125==(x126^(x127/x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = -1;
	int16_t x132 = INT16_MAX;

	t30 = (x129==(x130^(x131/x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = INT64_MAX;
	int64_t x134 = -1LL;
	volatile uint16_t x135 = 0U;
	uint32_t x136 = 133228U;
	int32_t t31 = -1855392;

	t31 = (x133==(x134^(x135/x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x137 = UINT64_MAX;
	volatile uint32_t x138 = 12061630U;
	int8_t x139 = INT8_MIN;
	static uint64_t x140 = 190LLU;
	int32_t t32 = -101825;

	t32 = (x137==(x138^(x139/x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x142 = INT64_MIN;
	static volatile int32_t t33 = -2691;

	t33 = (x141==(x142^(x143/x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = UINT64_MAX;
	static uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MIN;
	int32_t t34 = -2564697;

	t34 = (x145==(x146^(x147/x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = 1;
	int32_t x150 = -1;
	volatile uint8_t x152 = UINT8_MAX;
	static volatile int32_t t35 = 123633;

	t35 = (x149==(x150^(x151/x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = -1;
	volatile int8_t x156 = -1;
	volatile int32_t t36 = -1;

	t36 = (x153==(x154^(x155/x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	static uint16_t x158 = 93U;
	int64_t x159 = -113189804LL;
	int16_t x160 = INT16_MAX;
	volatile int32_t t37 = -6658;

	t37 = (x157==(x158^(x159/x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x166 = -26873432330LL;
	volatile int32_t x167 = INT32_MAX;
	int32_t t38 = 58;

	t38 = (x165==(x166^(x167/x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	volatile uint16_t x170 = UINT16_MAX;
	int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MIN;
	static int32_t t39 = 57273;

	t39 = (x169==(x170^(x171/x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = 3815U;
	static int8_t x174 = -1;
	static uint8_t x176 = 1U;
	int32_t t40 = 336268;

	t40 = (x173==(x174^(x175/x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = INT32_MIN;
	volatile int16_t x180 = 10315;
	volatile int32_t t41 = -190;

	t41 = (x177==(x178^(x179/x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x181 = -5;
	volatile int64_t x182 = INT64_MIN;
	int32_t t42 = 1;

	t42 = (x181==(x182^(x183/x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = -229209323;
	int32_t x186 = INT32_MIN;
	static int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MIN;
	volatile int32_t t43 = -15304;

	t43 = (x185==(x186^(x187/x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = -25;
	int8_t x190 = INT8_MAX;
	int8_t x191 = INT8_MAX;
	uint64_t x192 = 4LLU;
	volatile int32_t t44 = 549;

	t44 = (x189==(x190^(x191/x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1LL;
	volatile int16_t x194 = INT16_MAX;
	volatile int8_t x196 = -8;
	int32_t t45 = -50;

	t45 = (x193==(x194^(x195/x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = -1;
	int64_t x199 = -13LL;
	volatile int32_t t46 = -12058322;

	t46 = (x197==(x198^(x199/x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x201 = UINT16_MAX;
	int64_t x202 = -32LL;
	uint64_t x203 = 2601LLU;
	static volatile int8_t x204 = 1;
	static int32_t t47 = 48137108;

	t47 = (x201==(x202^(x203/x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x205 = INT16_MAX;
	uint64_t x206 = UINT64_MAX;
	static int16_t x207 = -1;
	int64_t x208 = INT64_MIN;

	t48 = (x205==(x206^(x207/x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x209 = 24U;
	int64_t x210 = -10658239592LL;
	volatile int64_t x211 = INT64_MIN;
	int32_t t49 = 1;

	t49 = (x209==(x210^(x211/x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = INT8_MIN;
	int32_t x215 = -507982268;
	int16_t x216 = INT16_MAX;
	static int32_t t50 = 104161641;

	t50 = (x213==(x214^(x215/x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -1;
	int8_t x218 = 1;
	int8_t x220 = -1;
	volatile int32_t t51 = 165;

	t51 = (x217==(x218^(x219/x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x221 = -1;
	static int16_t x222 = INT16_MIN;
	uint64_t x223 = 72794816096472797LLU;
	int64_t x224 = -1LL;
	volatile int32_t t52 = 0;

	t52 = (x221==(x222^(x223/x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MAX;
	volatile uint32_t x226 = 12U;
	int8_t x227 = 0;
	int32_t t53 = -1370;

	t53 = (x225==(x226^(x227/x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x229 = INT16_MIN;
	int16_t x230 = -654;
	int64_t x231 = -2189462480LL;
	volatile int32_t t54 = -4;

	t54 = (x229==(x230^(x231/x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 1U;
	int8_t x234 = INT8_MIN;
	int32_t x236 = -1;
	volatile int32_t t55 = 2874763;

	t55 = (x233==(x234^(x235/x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x237 = 0U;
	int8_t x238 = INT8_MIN;
	volatile int32_t t56 = -472;

	t56 = (x237==(x238^(x239/x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int16_t x242 = -1;
	int64_t x243 = INT64_MAX;
	uint64_t x244 = UINT64_MAX;
	int32_t t57 = -13763863;

	t57 = (x241==(x242^(x243/x244)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	int32_t x246 = INT32_MAX;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -7;
	int32_t t58 = -1;

	t58 = (x245==(x246^(x247/x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = -1LL;
	int8_t x250 = 2;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t59 = -36876;

	t59 = (x249==(x250^(x251/x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x255 = 68U;
	int64_t x256 = -1LL;
	volatile int32_t t60 = -116755;

	t60 = (x253==(x254^(x255/x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = -1;
	uint16_t x259 = 19U;
	static uint32_t x260 = 8U;

	t61 = (x257==(x258^(x259/x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	int8_t x263 = INT8_MAX;
	int8_t x264 = INT8_MAX;
	static int32_t t62 = -13388826;

	t62 = (x261==(x262^(x263/x264)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile int32_t x267 = INT32_MAX;
	int16_t x268 = INT16_MAX;
	static int32_t t63 = 22188685;

	t63 = (x265==(x266^(x267/x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = -1;
	uint64_t x272 = 16210213435173635LLU;
	volatile int32_t t64 = -6273712;

	t64 = (x269==(x270^(x271/x272)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = UINT64_MAX;
	static int64_t x274 = -220338497885005358LL;
	static volatile int32_t t65 = -1;

	t65 = (x273==(x274^(x275/x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = UINT16_MAX;
	volatile uint16_t x278 = 95U;
	int16_t x279 = INT16_MIN;
	static int16_t x280 = INT16_MIN;
	static int32_t t66 = 7404765;

	t66 = (x277==(x278^(x279/x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x283 = -14;
	volatile int32_t t67 = -57242;

	t67 = (x281==(x282^(x283/x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = UINT64_MAX;
	static uint64_t x287 = 223014119167LLU;
	volatile int32_t t68 = -7;

	t68 = (x285==(x286^(x287/x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MIN;
	static int64_t x290 = -1LL;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t69 = 120;

	t69 = (x289==(x290^(x291/x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x293 = 16U;
	static uint16_t x294 = 3599U;
	uint16_t x295 = UINT16_MAX;
	static int64_t x296 = INT64_MAX;

	t70 = (x293==(x294^(x295/x296)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 3U;
	int32_t x298 = INT32_MAX;
	int8_t x299 = 4;
	static uint32_t x300 = UINT32_MAX;
	int32_t t71 = -7277;

	t71 = (x297==(x298^(x299/x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x301 = -1;
	uint32_t x302 = UINT32_MAX;
	int32_t x304 = 253;
	int32_t t72 = -1;

	t72 = (x301==(x302^(x303/x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = 4701;
	volatile int16_t x306 = 1;
	static int64_t x307 = 29547295326357943LL;
	static int64_t x308 = INT64_MAX;
	static volatile int32_t t73 = -160505;

	t73 = (x305==(x306^(x307/x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = -1LL;
	volatile int64_t x310 = INT64_MAX;
	int16_t x312 = INT16_MAX;
	int32_t t74 = -15774020;

	t74 = (x309==(x310^(x311/x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = 3988247658208551084LL;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;

	t75 = (x317==(x318^(x319/x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x328 = INT64_MIN;
	int32_t t76 = 11212;

	t76 = (x325==(x326^(x327/x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x329 = 6945U;
	int16_t x330 = 1;
	static int64_t x331 = INT64_MIN;
	static volatile int32_t x332 = 1;
	static int32_t t77 = 406555;

	t77 = (x329==(x330^(x331/x332)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x333 = 33766435U;
	uint64_t x334 = 758LLU;
	int16_t x335 = -1;
	int8_t x336 = -1;
	volatile int32_t t78 = -101666;

	t78 = (x333==(x334^(x335/x336)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x338 = 1U;
	int64_t x339 = -1LL;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t79 = -121150;

	t79 = (x337==(x338^(x339/x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = 78U;
	uint8_t x344 = 15U;
	volatile int32_t t80 = 5834;

	t80 = (x341==(x342^(x343/x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = 2LLU;
	volatile int64_t x346 = -252LL;
	volatile int16_t x347 = 46;
	int64_t x348 = -1LL;
	volatile int32_t t81 = 5;

	t81 = (x345==(x346^(x347/x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x353 = UINT8_MAX;
	static volatile int32_t x354 = INT32_MIN;
	static uint32_t x355 = UINT32_MAX;
	int32_t t82 = 4547911;

	t82 = (x353==(x354^(x355/x356)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = -1;
	static int32_t x358 = 0;
	volatile int32_t x359 = -1;
	int16_t x360 = -4486;
	int32_t t83 = 13762806;

	t83 = (x357==(x358^(x359/x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x361 = UINT16_MAX;
	static int8_t x362 = -45;
	volatile uint32_t x363 = 1247332719U;
	uint64_t x364 = UINT64_MAX;

	t84 = (x361==(x362^(x363/x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t85 = -6;

	t85 = (x365==(x366^(x367/x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x369 = 42U;
	int8_t x370 = 0;
	volatile int32_t x371 = INT32_MIN;
	int16_t x372 = 5;
	volatile int32_t t86 = 7555;

	t86 = (x369==(x370^(x371/x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x374 = INT16_MAX;
	int16_t x375 = 1;
	static volatile int16_t x376 = -1;
	int32_t t87 = 27;

	t87 = (x373==(x374^(x375/x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x377 = -2;
	static int32_t x379 = 31;
	volatile int32_t t88 = -11876;

	t88 = (x377==(x378^(x379/x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MIN;
	volatile int8_t x383 = INT8_MAX;
	uint32_t x384 = 1892U;
	int32_t t89 = -2459037;

	t89 = (x381==(x382^(x383/x384)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x385 = 4U;
	int16_t x387 = INT16_MIN;
	static int32_t t90 = -119108394;

	t90 = (x385==(x386^(x387/x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = -1;
	static int32_t x390 = INT32_MAX;
	volatile uint8_t x391 = 42U;
	volatile int32_t t91 = -1351;

	t91 = (x389==(x390^(x391/x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = -1;
	uint32_t x395 = 1659U;
	static int64_t x396 = INT64_MAX;
	volatile int32_t t92 = 25977;

	t92 = (x393==(x394^(x395/x396)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x397 = 7134;
	int8_t x398 = -1;
	uint8_t x400 = 36U;
	int32_t t93 = -305862;

	t93 = (x397==(x398^(x399/x400)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x403 = INT16_MAX;
	volatile int32_t t94 = 37767423;

	t94 = (x401==(x402^(x403/x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x405 = INT16_MAX;
	static int32_t x406 = INT32_MIN;
	static uint16_t x407 = 64U;
	uint16_t x408 = UINT16_MAX;
	int32_t t95 = -5955627;

	t95 = (x405==(x406^(x407/x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x409 = UINT16_MAX;
	volatile int8_t x410 = INT8_MIN;
	volatile int32_t t96 = 6735097;

	t96 = (x409==(x410^(x411/x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x414 = 13545036U;
	int16_t x416 = INT16_MAX;
	int32_t t97 = -14;

	t97 = (x413==(x414^(x415/x416)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = INT8_MAX;
	uint16_t x419 = 31U;
	int8_t x420 = INT8_MIN;
	volatile int32_t t98 = 22159;

	t98 = (x417==(x418^(x419/x420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = INT16_MIN;
	static int8_t x422 = -6;
	int64_t x423 = -1LL;
	static uint64_t x424 = 8460602557913308594LLU;

	t99 = (x421==(x422^(x423/x424)));

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

