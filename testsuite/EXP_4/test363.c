#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = 137354184LL;
int16_t x17 = -746;
static int64_t x19 = -218231745LL;
int64_t t2 = 2040744576201702LL;
int64_t x29 = INT64_MIN;
int64_t x30 = INT64_MIN;
uint32_t x47 = UINT32_MAX;
uint64_t t8 = 3063105583714883504LLU;
uint32_t x63 = 35564U;
uint32_t x64 = 6282U;
volatile int16_t x67 = 1;
volatile int64_t t11 = 1087377683022672520LL;
static volatile int8_t x84 = INT8_MIN;
int32_t t15 = -998762131;
static uint8_t x91 = 120U;
uint32_t x104 = 361840517U;
int16_t x105 = -1;
int8_t x108 = -1;
uint32_t x109 = 3U;
static int32_t x111 = -2;
int8_t x115 = INT8_MIN;
volatile int16_t x121 = INT16_MAX;
static volatile int64_t x122 = 281LL;
int16_t x123 = -1;
int8_t x126 = -1;
volatile int32_t t22 = 16;
uint32_t x152 = 0U;
uint32_t t26 = 744U;
int64_t x172 = -18LL;
volatile int64_t t28 = 2142186198494988LL;
uint64_t x179 = UINT64_MAX;
uint32_t x190 = 402373U;
uint64_t x198 = 21930645394967728LLU;
static int16_t x200 = 2;
static uint64_t t34 = 555831824LLU;
static int8_t x210 = -58;
uint64_t t37 = 158237652799LLU;
static volatile int8_t x230 = 0;
int64_t x231 = INT64_MIN;
uint64_t x232 = UINT64_MAX;
int8_t x251 = INT8_MIN;
uint32_t x253 = 501156638U;
int32_t x255 = INT32_MIN;
int8_t x263 = -5;
int16_t x264 = 0;
volatile int32_t t46 = -829211214;
volatile uint64_t x274 = 3502233848693LLU;
static int64_t x281 = INT64_MIN;
static int16_t x287 = INT16_MAX;
uint64_t t49 = 28511306LLU;
uint8_t x290 = 13U;
uint32_t x313 = 317672564U;
int8_t x329 = INT8_MAX;
int8_t x330 = INT8_MIN;
volatile int32_t t60 = 672605;
volatile int32_t x342 = -5198;
uint64_t x343 = UINT64_MAX;
volatile uint64_t x366 = UINT64_MAX;
volatile uint64_t x379 = 322207309LLU;
uint32_t x383 = 155U;
static int8_t x386 = INT8_MAX;
uint16_t x389 = 0U;
volatile int64_t x390 = 364611562064785LL;
int8_t x391 = INT8_MIN;
volatile uint64_t t71 = UINT64_MAX;
uint64_t x402 = 349524917114234068LLU;
static volatile int64_t x416 = -1LL;
int64_t t74 = 3991LL;
uint16_t x420 = UINT16_MAX;
static int8_t x431 = INT8_MAX;
int8_t x433 = INT8_MIN;
int64_t x434 = -532981337420170233LL;
int32_t x436 = 7923596;
static volatile int8_t x448 = -1;
static uint32_t x455 = 48366184U;
uint64_t x456 = UINT64_MAX;
volatile int32_t t87 = -9089;
int32_t x475 = -1;
int64_t x476 = -1LL;
int8_t x499 = 0;
int16_t x532 = 1;
int64_t t96 = -994727176LL;
int32_t x535 = -1;
static volatile int8_t x538 = INT8_MIN;
int32_t x540 = 9362;
volatile int64_t t98 = 50252507682931LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = -1;
	volatile uint16_t x3 = UINT16_MAX;
	uint8_t x4 = UINT8_MAX;
	uint32_t t0 = UINT32_MAX;

	t0 = (x1|(x2-(x3*x4)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = 73595309;
	static uint16_t x14 = 3266U;
	static int64_t x15 = 534954834818LL;
	static int32_t x16 = -1508;

	t1 = (x13|(x14-(x15*x16)));

	if (t1 != 806711895261103LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x18 = UINT16_MAX;
	volatile uint8_t x20 = 110U;

	t2 = (x17|(x18-(x19*x20)));

	if (t2 != -513LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = 0;
	int8_t x23 = INT8_MIN;
	int64_t x24 = -29344940636LL;
	volatile int64_t t3 = -971848LL;

	t3 = (x21|(x22-(x23*x24)));

	if (t3 != -3756152401408LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	volatile uint32_t x26 = UINT32_MAX;
	int64_t x27 = -1LL;
	uint64_t x28 = 1028294770LLU;
	volatile uint64_t t4 = 0LLU;

	t4 = (x25|(x26-(x27*x28)));

	if (t4 != 9223372042178037873LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x31 = 0U;
	volatile int8_t x32 = 1;
	int64_t t5 = INT64_MIN;

	t5 = (x29|(x30-(x31*x32)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = -1;
	static int32_t x35 = INT32_MAX;
	static int64_t x36 = -12993LL;
	volatile int64_t t6 = 298279832389486LL;

	t6 = (x33|(x34-(x35*x36)));

	if (t6 != -66LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -1;
	static int8_t x38 = 25;
	volatile int16_t x39 = 31;
	int32_t x40 = -1;
	static volatile int32_t t7 = 3404288;

	t7 = (x37|(x38-(x39*x40)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x45 = 18724LLU;
	int32_t x46 = -181329705;
	int32_t x48 = INT32_MIN;

	t8 = (x45|(x46-(x47*x48)));

	if (t8 != 1966172663LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x61 = INT64_MIN;
	int8_t x62 = 0;
	volatile int64_t t9 = 1LL;

	t9 = (x61|(x62-(x63*x64)));

	if (t9 != -9223372032783221560LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = 15434;
	volatile int32_t x66 = -502507;
	int8_t x68 = -1;
	volatile int32_t t10 = 141610;

	t10 = (x65|(x66-(x67*x68)));

	if (t10 != -492194) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x69 = 0U;
	static uint8_t x70 = UINT8_MAX;
	int64_t x71 = -1LL;
	static uint16_t x72 = UINT16_MAX;

	t11 = (x69|(x70-(x71*x72)));

	if (t11 != 65790LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = -1LL;
	int64_t x74 = -106374646223551193LL;
	volatile int8_t x75 = -32;
	volatile int32_t x76 = -1;
	volatile int64_t t12 = 0LL;

	t12 = (x73|(x74-(x75*x76)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = 31;
	int64_t x78 = INT64_MAX;
	uint32_t x79 = 3U;
	int32_t x80 = -7697;
	static volatile int64_t t13 = 542LL;

	t13 = (x77|(x78-(x79*x80)));

	if (t13 != 9223372032559831615LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x81 = INT16_MIN;
	static volatile int64_t x82 = 238397624113364070LL;
	static int64_t x83 = -1LL;
	static volatile int64_t t14 = 1087721550853470LL;

	t14 = (x81|(x82-(x83*x84)));

	if (t14 != -1050LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x85 = INT8_MAX;
	static int16_t x86 = -2;
	int32_t x87 = INT32_MIN;
	int8_t x88 = 0;

	t15 = (x85|(x86-(x87*x88)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 12U;
	int32_t x90 = INT32_MAX;
	int8_t x92 = INT8_MAX;
	int32_t t16 = -10879244;

	t16 = (x89|(x90-(x91*x92)));

	if (t16 != 2147468415) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = INT64_MIN;
	static uint16_t x102 = 8U;
	static int32_t x103 = -1;
	volatile int64_t t17 = -28419378751311LL;

	t17 = (x101|(x102-(x103*x104)));

	if (t17 != -9223372036492935283LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	volatile int32_t t18 = 22038;

	t18 = (x105|(x106-(x107*x108)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x110 = 59166527LL;
	uint8_t x112 = 1U;
	int64_t t19 = -125LL;

	t19 = (x109|(x110-(x111*x112)));

	if (t19 != 59166531LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x113 = 0U;
	uint16_t x114 = UINT16_MAX;
	static int8_t x116 = 29;
	static volatile int32_t t20 = -23684543;

	t20 = (x113|(x114-(x115*x116)));

	if (t20 != 69247) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x124 = INT8_MAX;
	volatile int64_t t21 = 4089200096LL;

	t21 = (x121|(x122-(x123*x124)));

	if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x125 = 279;
	int8_t x127 = 9;
	static int32_t x128 = -1;

	t22 = (x125|(x126-(x127*x128)));

	if (t22 != 287) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x141 = -1LL;
	int8_t x142 = -1;
	int8_t x143 = -1;
	volatile int64_t x144 = -216155095759LL;
	volatile int64_t t23 = 27464LL;

	t23 = (x141|(x142-(x143*x144)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x149 = 7U;
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = INT16_MIN;
	static volatile uint32_t t24 = 321U;

	t24 = (x149|(x150-(x151*x152)));

	if (t24 != 4294934535U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x157 = -208;
	uint16_t x158 = UINT16_MAX;
	uint64_t x159 = UINT64_MAX;
	volatile int8_t x160 = INT8_MIN;
	uint64_t t25 = 254391708LLU;

	t25 = (x157|(x158-(x159*x160)));

	if (t25 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x161 = INT32_MAX;
	int16_t x162 = -1;
	volatile uint32_t x163 = UINT32_MAX;
	uint8_t x164 = 3U;

	t26 = (x161|(x162-(x163*x164)));

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MIN;
	uint32_t x167 = 847278404U;
	volatile uint8_t x168 = 5U;
	uint32_t t27 = 141475U;

	t27 = (x165|(x166-(x167*x168)));

	if (t27 != 4294967212U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile uint32_t x170 = 7562607U;
	int16_t x171 = INT16_MIN;

	t28 = (x169|(x170-(x171*x172)));

	if (t28 != -6801LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x173 = -1;
	static int16_t x174 = INT16_MAX;
	static int32_t x175 = -1;
	uint8_t x176 = 1U;
	int32_t t29 = 443675;

	t29 = (x173|(x174-(x175*x176)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x177 = INT8_MIN;
	volatile int32_t x178 = -1;
	uint16_t x180 = UINT16_MAX;
	volatile uint64_t t30 = 14003086042118412LLU;

	t30 = (x177|(x178-(x179*x180)));

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x185 = INT8_MIN;
	static int64_t x186 = INT64_MIN;
	int16_t x187 = 567;
	volatile int64_t x188 = -1LL;
	volatile int64_t t31 = 980915639430LL;

	t31 = (x185|(x186-(x187*x188)));

	if (t31 != -73LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x189 = UINT32_MAX;
	static int32_t x191 = 3;
	static int8_t x192 = -1;
	uint32_t t32 = UINT32_MAX;

	t32 = (x189|(x190-(x191*x192)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	uint32_t x195 = 9614U;
	volatile int8_t x196 = INT8_MIN;
	uint32_t t33 = 136782U;

	t33 = (x193|(x194-(x195*x196)));

	if (t33 != 2148714240U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x197 = 319LLU;
	int8_t x199 = INT8_MAX;

	t34 = (x197|(x198-(x199*x200)));

	if (t34 != 21930645394967487LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x205 = -471882859;
	int64_t x206 = 2689176798895LL;
	uint32_t x207 = 1031627U;
	uint64_t x208 = UINT64_MAX;
	static volatile uint64_t t35 = 175LLU;

	t35 = (x205|(x206-(x207*x208)));

	if (t35 != 18446744073709545471LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x211 = UINT32_MAX;
	uint8_t x212 = UINT8_MAX;
	uint32_t t36 = 13U;

	t36 = (x209|(x210-(x211*x212)));

	if (t36 != 4294967237U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x221 = 44491U;
	int16_t x222 = 1;
	volatile int64_t x223 = -208101999959LL;
	uint64_t x224 = 2LLU;

	t37 = (x221|(x222-(x223*x224)));

	if (t37 != 416204042223LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x225 = INT32_MIN;
	int8_t x226 = -1;
	uint32_t x227 = UINT32_MAX;
	static uint8_t x228 = 5U;
	volatile uint32_t t38 = 195132652U;

	t38 = (x225|(x226-(x227*x228)));

	if (t38 != 2147483652U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = -1;
	uint64_t t39 = UINT64_MAX;

	t39 = (x229|(x230-(x231*x232)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x233 = 1376LLU;
	volatile uint8_t x234 = 5U;
	uint8_t x235 = 2U;
	int32_t x236 = -1;
	uint64_t t40 = 8964887251691LLU;

	t40 = (x233|(x234-(x235*x236)));

	if (t40 != 1383LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x241 = UINT32_MAX;
	static uint32_t x242 = 443812995U;
	int32_t x243 = INT32_MIN;
	int64_t x244 = 61LL;
	int64_t t41 = 435557061078LL;

	t41 = (x241|(x242-(x243*x244)));

	if (t41 != 133143986175LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	int64_t x247 = -1LL;
	volatile int16_t x248 = INT16_MIN;
	static int64_t t42 = -616347LL;

	t42 = (x245|(x246-(x247*x248)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x249 = 3056;
	int16_t x250 = -1;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x249|(x250-(x251*x252)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x254 = INT8_MIN;
	uint64_t x256 = UINT64_MAX;
	uint64_t t44 = 157209478LLU;

	t44 = (x253|(x254-(x255*x256)));

	if (t44 != 18446744071562067870LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	int32_t x259 = -24776141;
	volatile uint64_t x260 = 3868097406587298LLU;
	uint64_t t45 = 1108923663231110750LLU;

	t45 = (x257|(x258-(x259*x260)));

	if (t45 != 14914656454810704058LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = INT16_MIN;
	static int8_t x262 = 5;

	t46 = (x261|(x262-(x263*x264)));

	if (t46 != -32763) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x273 = INT64_MIN;
	uint16_t x275 = 1U;
	volatile int32_t x276 = INT32_MAX;
	uint64_t t47 = 488402989224137LLU;

	t47 = (x273|(x274-(x275*x276)));

	if (t47 != 9223375536941140854LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x282 = 0;
	int8_t x283 = INT8_MAX;
	uint16_t x284 = UINT16_MAX;
	volatile int64_t t48 = -6642LL;

	t48 = (x281|(x282-(x283*x284)));

	if (t48 != -8322945LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x285 = INT8_MIN;
	static uint8_t x286 = 2U;
	uint64_t x288 = 821062965103973LLU;

	t49 = (x285|(x286-(x287*x288)));

	if (t49 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x289 = INT8_MIN;
	static uint32_t x291 = 0U;
	int16_t x292 = INT16_MAX;
	static volatile uint32_t t50 = 10727078U;

	t50 = (x289|(x290-(x291*x292)));

	if (t50 != 4294967181U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MAX;
	uint16_t x295 = 13U;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t51 = 178947650;

	t51 = (x293|(x294-(x295*x296)));

	if (t51 != -3316) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MIN;
	int64_t x299 = -1LL;
	int64_t x300 = -1LL;
	int64_t t52 = -394566179262470286LL;

	t52 = (x297|(x298-(x299*x300)));

	if (t52 != -32769LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x301 = -1;
	volatile int32_t x302 = INT32_MIN;
	int64_t x303 = 171417861303144602LL;
	volatile uint8_t x304 = 0U;
	int64_t t53 = -1602457366LL;

	t53 = (x301|(x302-(x303*x304)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x314 = 21437406186461LLU;
	uint16_t x315 = 6496U;
	uint64_t x316 = 119796157887LLU;
	uint64_t t54 = 329LLU;

	t54 = (x313|(x314-(x315*x316)));

	if (t54 != 18445987315285196157LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x317 = -1LL;
	uint32_t x318 = 48U;
	volatile int16_t x319 = -1;
	volatile int64_t x320 = -1LL;
	volatile int64_t t55 = 35221781903379933LL;

	t55 = (x317|(x318-(x319*x320)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x321 = INT16_MAX;
	static volatile int8_t x322 = INT8_MIN;
	uint32_t x323 = 509819898U;
	int16_t x324 = INT16_MAX;
	volatile uint32_t t56 = 159488U;

	t56 = (x321|(x322-(x323*x324)));

	if (t56 != 2154201087U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x325 = INT16_MIN;
	uint32_t x326 = 45386767U;
	static int32_t x327 = -5092126;
	static int64_t x328 = -189998201LL;
	int64_t t57 = 953292476837LL;

	t57 = (x325|(x326-(x327*x328)));

	if (t57 != -21791LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x331 = 3U;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t58 = 86938;

	t58 = (x329|(x330-(x331*x332)));

	if (t58 != -196609) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = 0;
	int16_t x336 = INT16_MAX;
	volatile int32_t t59 = 916755;

	t59 = (x333|(x334-(x335*x336)));

	if (t59 != -2147483393) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x337 = UINT16_MAX;
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;

	t60 = (x337|(x338-(x339*x340)));

	if (t60 != -4194305) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x341 = 169LLU;
	int16_t x344 = INT16_MIN;
	uint64_t t61 = 9580656130LLU;

	t61 = (x341|(x342-(x343*x344)));

	if (t61 != 18446744073709513659LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x345 = -85212;
	uint8_t x346 = UINT8_MAX;
	static int8_t x347 = 11;
	static volatile int8_t x348 = INT8_MIN;
	volatile int32_t t62 = 958;

	t62 = (x345|(x346-(x347*x348)));

	if (t62 != -84097) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x349 = 0;
	int16_t x350 = INT16_MAX;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = 13;
	volatile uint32_t t63 = 73U;

	t63 = (x349|(x350-(x351*x352)));

	if (t63 != 32780U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x361 = INT16_MAX;
	volatile uint8_t x362 = UINT8_MAX;
	uint64_t x363 = 15LLU;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t64 = 12567466LLU;

	t64 = (x361|(x362-(x363*x364)));

	if (t64 != 524287LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x365 = -9;
	volatile int16_t x367 = INT16_MIN;
	static int8_t x368 = -1;
	static uint64_t t65 = UINT64_MAX;

	t65 = (x365|(x366-(x367*x368)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x378 = 2;
	volatile uint64_t x380 = UINT64_MAX;
	static volatile uint64_t t66 = 10978565449LLU;

	t66 = (x377|(x378-(x379*x380)));

	if (t66 != 322240511LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x381 = 3838U;
	int64_t x382 = INT64_MAX;
	uint8_t x384 = 1U;
	volatile int64_t t67 = 1720760176952LL;

	t67 = (x381|(x382-(x383*x384)));

	if (t67 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x385 = -1;
	static int32_t x387 = 3027106;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t68 = -227338;

	t68 = (x385|(x386-(x387*x388)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x392 = 43649809996234LLU;
	static uint64_t t69 = 5299657438LLU;

	t69 = (x389|(x390-(x391*x392)));

	if (t69 != 5951787241582737LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x393 = 912U;
	volatile int16_t x394 = 668;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -1LL;
	int64_t t70 = 2123751140879LL;

	t70 = (x393|(x394-(x395*x396)));

	if (t70 != -2147482724LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x397 = -1;
	static volatile uint16_t x398 = 7012U;
	uint64_t x399 = UINT64_MAX;
	static uint32_t x400 = 0U;

	t71 = (x397|(x398-(x399*x400)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x401 = INT16_MIN;
	int8_t x403 = 0;
	uint8_t x404 = UINT8_MAX;
	static uint64_t t72 = 363638420593371476LLU;

	t72 = (x401|(x402-(x403*x404)));

	if (t72 != 18446744073709544660LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x405 = 149U;
	static volatile int8_t x406 = INT8_MAX;
	int64_t x407 = 42658963713LL;
	uint8_t x408 = UINT8_MAX;
	volatile int64_t t73 = -388475521964150860LL;

	t73 = (x405|(x406-(x407*x408)));

	if (t73 != -10878035746667LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x413 = INT64_MAX;
	static int8_t x414 = INT8_MIN;
	volatile int8_t x415 = INT8_MIN;

	t74 = (x413|(x414-(x415*x416)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x417 = 56U;
	int32_t x418 = -1;
	int8_t x419 = INT8_MIN;
	int32_t t75 = 22084477;

	t75 = (x417|(x418-(x419*x420)));

	if (t75 != 8388479) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x421 = INT16_MIN;
	int64_t x422 = -1LL;
	uint16_t x423 = 15U;
	static int32_t x424 = 4318;
	static volatile int64_t t76 = -893LL;

	t76 = (x421|(x422-(x423*x424)));

	if (t76 != -32003LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x425 = -59528;
	volatile int8_t x426 = 42;
	static int32_t x427 = 52;
	volatile int16_t x428 = INT16_MIN;
	int32_t t77 = -22891;

	t77 = (x425|(x426-(x427*x428)));

	if (t77 != -59526) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x429 = -6;
	volatile int64_t x430 = INT64_MIN;
	uint64_t x432 = 149680588561LLU;
	uint64_t t78 = 680646969522LLU;

	t78 = (x429|(x430-(x431*x432)));

	if (t78 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x435 = 7U;
	volatile int64_t t79 = 682364143121680678LL;

	t79 = (x433|(x434-(x435*x436)));

	if (t79 != -77LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x437 = UINT16_MAX;
	uint32_t x438 = 0U;
	volatile int16_t x439 = 1;
	int64_t x440 = 101630LL;
	volatile int64_t t80 = 9061069431607LL;

	t80 = (x437|(x438-(x439*x440)));

	if (t80 != -65537LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x441 = 2896U;
	static int32_t x442 = -11;
	uint16_t x443 = 70U;
	int16_t x444 = -1;
	uint32_t t81 = 31025U;

	t81 = (x441|(x442-(x443*x444)));

	if (t81 != 2939U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x445 = -2LL;
	int32_t x446 = -426247291;
	uint16_t x447 = UINT16_MAX;
	int64_t t82 = -17402789019678LL;

	t82 = (x445|(x446-(x447*x448)));

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = -1;
	volatile uint32_t x450 = 15U;
	static volatile int16_t x451 = 7278;
	static int16_t x452 = INT16_MIN;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x449|(x450-(x451*x452)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x453 = UINT64_MAX;
	uint32_t x454 = 171U;
	uint64_t t84 = UINT64_MAX;

	t84 = (x453|(x454-(x455*x456)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x461 = UINT64_MAX;
	volatile uint64_t x462 = 892394714762529LLU;
	int8_t x463 = INT8_MIN;
	int16_t x464 = 417;
	uint64_t t85 = UINT64_MAX;

	t85 = (x461|(x462-(x463*x464)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x465 = 19U;
	int32_t x466 = -1;
	int64_t x467 = INT64_MIN;
	uint8_t x468 = 0U;
	static volatile int64_t t86 = -1437826116633661119LL;

	t86 = (x465|(x466-(x467*x468)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x469 = INT8_MAX;
	int16_t x470 = 15390;
	int16_t x471 = -1455;
	int16_t x472 = -1;

	t87 = (x469|(x470-(x471*x472)));

	if (t87 != 13951) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x473 = INT64_MIN;
	int8_t x474 = 1;
	static int64_t t88 = INT64_MIN;

	t88 = (x473|(x474-(x475*x476)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x477 = 3631U;
	uint64_t x478 = 3519660042LLU;
	volatile int64_t x479 = 1073LL;
	uint64_t x480 = 25762174599LLU;
	volatile uint64_t t89 = 9319807433931LLU;

	t89 = (x477|(x478-(x479*x480)));

	if (t89 != 18446716434415869503LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x481 = INT16_MIN;
	int16_t x482 = INT16_MIN;
	int8_t x483 = 51;
	uint64_t x484 = 98844755469024611LLU;
	uint64_t t90 = 123635LLU;

	t90 = (x481|(x482-(x483*x484)));

	if (t90 != 18446744073709536583LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x485 = 1;
	volatile uint32_t x486 = 3U;
	uint32_t x487 = 123616108U;
	uint64_t x488 = 14043415294LLU;
	volatile uint64_t t91 = 47020956936733LLU;

	t91 = (x485|(x486-(x487*x488)));

	if (t91 != 16710751732037595867LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x489 = INT32_MIN;
	volatile int32_t x490 = -1;
	int64_t x491 = -801051411469LL;
	volatile int16_t x492 = -1;
	static int64_t t92 = 428836228083LL;

	t92 = (x489|(x490-(x491*x492)));

	if (t92 != -40010766LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x497 = 61;
	static int32_t x498 = INT32_MIN;
	int8_t x500 = INT8_MIN;
	static volatile int32_t t93 = -878433;

	t93 = (x497|(x498-(x499*x500)));

	if (t93 != -2147483587) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x501 = 9727;
	int16_t x502 = -1;
	int64_t x503 = INT64_MIN;
	volatile uint32_t x504 = 1U;
	int64_t t94 = INT64_MAX;

	t94 = (x501|(x502-(x503*x504)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x505 = INT16_MAX;
	uint8_t x506 = 20U;
	static int8_t x507 = -2;
	volatile uint8_t x508 = UINT8_MAX;
	static volatile int32_t t95 = -60;

	t95 = (x505|(x506-(x507*x508)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x529 = INT64_MIN;
	int64_t x530 = INT64_MAX;
	volatile int32_t x531 = INT32_MAX;

	t96 = (x529|(x530-(x531*x532)));

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = -31;
	volatile int16_t x534 = INT16_MAX;
	volatile int8_t x536 = INT8_MIN;
	static volatile int32_t t97 = -4227929;

	t97 = (x533|(x534-(x535*x536)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x537 = -1LL;
	static volatile uint8_t x539 = 19U;

	t98 = (x537|(x538-(x539*x540)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x541 = 76U;
	static uint8_t x542 = 3U;
	uint64_t x543 = 399478128LLU;
	static int8_t x544 = -16;
	uint64_t t99 = 992LLU;

	t99 = (x541|(x542-(x543*x544)));

	if (t99 != 6391650127LLU) { NG(); } else { ; }
	
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

