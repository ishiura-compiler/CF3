#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 7615LLU;
uint64_t x9 = 269056372420035261LLU;
static uint64_t x10 = 8617647849403297LLU;
int8_t x12 = -7;
uint32_t x13 = 466U;
volatile int16_t x15 = INT16_MIN;
volatile int64_t x23 = -12767945LL;
uint16_t x31 = 13220U;
int16_t x53 = -1;
uint64_t x55 = UINT64_MAX;
static uint64_t t6 = 231327251106LLU;
static int64_t x57 = -1LL;
uint32_t x75 = UINT32_MAX;
uint32_t x76 = 2694635U;
int8_t x85 = INT8_MIN;
int8_t x94 = 1;
int8_t x96 = -1;
int64_t t14 = -214740LL;
static uint64_t t15 = 116147259775951474LLU;
int8_t x101 = INT8_MIN;
static volatile uint32_t x106 = UINT32_MAX;
volatile uint64_t x113 = 47045300LLU;
static volatile uint64_t t18 = 2265566250830901342LLU;
volatile uint64_t t19 = 2LLU;
int16_t x128 = -1;
int64_t x138 = INT64_MIN;
int16_t x140 = -1;
volatile int64_t t21 = -2601LL;
int8_t x142 = -1;
static uint8_t x143 = 48U;
static int16_t x144 = -1;
int8_t x154 = -3;
int8_t x155 = INT8_MIN;
int32_t x165 = -1;
static volatile uint8_t x166 = 122U;
int32_t x176 = -1;
uint64_t x186 = UINT64_MAX;
static int32_t x189 = -5574;
volatile int32_t x191 = INT32_MIN;
int8_t x192 = 3;
static int32_t t28 = 0;
static uint32_t x193 = 283U;
int64_t x194 = INT64_MIN;
int64_t x202 = -1LL;
uint64_t x203 = 198848142567061522LLU;
volatile int32_t x204 = 2136;
int32_t x205 = 6815;
uint32_t x207 = UINT32_MAX;
uint32_t x214 = 4037U;
volatile uint16_t x216 = 5U;
uint8_t x248 = 1U;
static int32_t x255 = INT32_MIN;
volatile uint64_t x256 = 78LLU;
int16_t x258 = INT16_MAX;
int64_t x285 = INT64_MIN;
uint32_t x286 = 70U;
int64_t t44 = 990LL;
uint8_t x337 = UINT8_MAX;
int16_t x339 = INT16_MIN;
volatile int64_t x342 = INT64_MIN;
int16_t x346 = 1;
int16_t x351 = INT16_MIN;
int8_t x353 = INT8_MIN;
volatile int64_t x354 = 368586041610472478LL;
int8_t x355 = -1;
int16_t x357 = -1;
int32_t x376 = INT32_MIN;
int64_t t56 = -53911387172839644LL;
int64_t x390 = -46LL;
volatile int64_t t57 = -76818857716815LL;
uint16_t x404 = 268U;
int8_t x410 = INT8_MIN;
int32_t x426 = INT32_MIN;
int8_t x452 = -16;
int32_t x463 = INT32_MIN;
volatile int16_t x477 = -4;
volatile int8_t x482 = -15;
static uint64_t x483 = UINT64_MAX;
int64_t x484 = INT64_MIN;
uint8_t x488 = 8U;
int8_t x521 = INT8_MIN;
int64_t x529 = -23374245LL;
int32_t x556 = INT32_MIN;
int32_t t80 = 606;
int64_t x578 = 175688314396768990LL;
int64_t x579 = 92836LL;
uint16_t x598 = 3076U;
uint32_t x608 = 1U;
int32_t x630 = INT32_MAX;
uint64_t x640 = 2915228031843LLU;
uint16_t x651 = UINT16_MAX;
int16_t x652 = 1;
uint16_t x671 = 174U;
uint64_t t90 = 110590872171620158LLU;
volatile int8_t x693 = INT8_MAX;
volatile int64_t t93 = 3237525498LL;
uint16_t x712 = 29U;
int64_t x735 = INT64_MAX;
static int32_t x743 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x2 = 2896956LLU;
	volatile int32_t x3 = -755;
	static uint64_t x4 = 19436503LLU;

	t0 = (x1^(x2%(x3/x4)));

	if (t0 != 2902979LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x11 = UINT8_MAX;
	uint64_t t1 = 179LLU;

	t1 = (x9^(x10%(x11/x12)));

	if (t1 != 262753506870047004LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MIN;
	volatile int8_t x16 = -5;
	static volatile uint32_t t2 = 0U;

	t2 = (x13^(x14%(x15/x16)));

	if (t2 != 4294966831U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	uint32_t x22 = 1984467U;
	int16_t x24 = INT16_MAX;
	static volatile int64_t t3 = 20930LL;

	t3 = (x21^(x22%(x23/x24)));

	if (t3 != 77LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	volatile uint8_t x26 = 21U;
	static int8_t x27 = INT8_MIN;
	uint8_t x28 = 95U;
	int64_t t4 = INT64_MIN;

	t4 = (x25^(x26%(x27/x28)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int16_t x30 = -1;
	uint16_t x32 = 413U;
	volatile int32_t t5 = 158;

	t5 = (x29^(x30%(x31/x32)));

	if (t5 != -256) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x54 = INT64_MAX;
	uint32_t x56 = UINT32_MAX;

	t6 = (x53^(x54%(x55/x56)));

	if (t6 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x58 = -2651577798LL;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int64_t t7 = -3547090126LL;

	t7 = (x57^(x58%(x59/x60)));

	if (t7 != 7225541LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = 1285;
	int32_t x62 = -2028406;
	volatile int64_t x63 = -508999487519LL;
	int32_t x64 = INT32_MIN;
	int64_t t8 = 5719561298778LL;

	t8 = (x61^(x62%(x63/x64)));

	if (t8 != -1435LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x69 = UINT16_MAX;
	volatile int32_t x70 = INT32_MIN;
	int16_t x71 = 2321;
	uint8_t x72 = 4U;
	int32_t t9 = 63256332;

	t9 = (x69^(x70%(x71/x72)));

	if (t9 != -65529) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x73 = INT8_MIN;
	static int16_t x74 = INT16_MAX;
	volatile uint32_t t10 = 30U;

	t10 = (x73^(x74%(x75/x76)));

	if (t10 != 4294966283U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x81 = -49342373;
	int8_t x82 = INT8_MIN;
	int16_t x83 = 8183;
	int64_t x84 = -1LL;
	volatile int64_t t11 = 3LL;

	t11 = (x81^(x82%(x83/x84)));

	if (t11 != 49342427LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x86 = 23LLU;
	int16_t x87 = -1;
	volatile uint32_t x88 = 766U;
	uint64_t t12 = 6463001460120LLU;

	t12 = (x85^(x86%(x87/x88)));

	if (t12 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = INT8_MIN;
	volatile int64_t x90 = -1LL;
	int64_t x91 = 587006432793LL;
	int8_t x92 = INT8_MIN;
	int64_t t13 = -1LL;

	t13 = (x89^(x90%(x91/x92)));

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x93 = -1;
	int64_t x95 = -3214826703506617185LL;

	t14 = (x93^(x94%(x95/x96)));

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = 1;
	static uint64_t x99 = 3499704LLU;
	int64_t x100 = 1376466LL;

	t15 = (x97^(x98%(x99/x100)));

	if (t15 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x102 = -1;
	int64_t x103 = INT64_MAX;
	volatile uint16_t x104 = 15U;
	int64_t t16 = -342LL;

	t16 = (x101^(x102%(x103/x104)));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x105 = 1995911515LLU;
	int8_t x107 = INT8_MIN;
	static uint64_t x108 = 118332LLU;
	volatile uint64_t t17 = 1556449396LLU;

	t17 = (x105^(x106%(x107/x108)));

	if (t17 != 2299055780LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x114 = 862597904349LLU;
	volatile int32_t x115 = INT32_MIN;
	int16_t x116 = -2;

	t18 = (x113^(x114%(x115/x116)));

	if (t18 != 337292649LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = 42803;
	static int16_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	uint16_t x120 = UINT16_MAX;

	t19 = (x117^(x118%(x119/x120)));

	if (t19 != 42803LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = INT8_MIN;
	static int16_t x126 = INT16_MAX;
	int64_t x127 = -1LL;
	int64_t t20 = 1919864485423LL;

	t20 = (x125^(x126%(x127/x128)));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x137 = 66U;
	volatile int64_t x139 = INT64_MAX;

	t21 = (x137^(x138%(x139/x140)));

	if (t21 != -67LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x141 = -1;
	volatile int32_t t22 = -116521;

	t22 = (x141^(x142%(x143/x144)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x153 = 8U;
	int8_t x156 = INT8_MAX;
	static volatile int32_t t23 = -335562;

	t23 = (x153^(x154%(x155/x156)));

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x161 = -1;
	static uint16_t x162 = 3U;
	static uint16_t x163 = 2965U;
	int32_t x164 = -1;
	volatile int32_t t24 = -5;

	t24 = (x161^(x162%(x163/x164)));

	if (t24 != -4) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x167 = INT8_MIN;
	uint16_t x168 = 31U;
	volatile int32_t t25 = 68;

	t25 = (x165^(x166%(x167/x168)));

	if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x173 = 20219062157156LLU;
	int16_t x174 = INT16_MAX;
	int64_t x175 = 1464241023LL;
	uint64_t t26 = 3896540223786941LLU;

	t26 = (x173^(x174%(x175/x176)));

	if (t26 != 20219062124699LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x185 = -8311796;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = -69078690146967033LL;
	static uint64_t t27 = 1214938403784LLU;

	t27 = (x185^(x186%(x187/x188)));

	if (t27 != 18446744073701239820LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x190 = UINT16_MAX;

	t28 = (x189^(x190%(x191/x192)));

	if (t28 != -59963) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x195 = 4U;
	int16_t x196 = -3;
	static volatile int64_t t29 = -10912991449865773LL;

	t29 = (x193^(x194%(x195/x196)));

	if (t29 != 283LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x197 = 944661039548629LLU;
	uint8_t x198 = UINT8_MAX;
	volatile int64_t x199 = INT64_MIN;
	int8_t x200 = INT8_MIN;
	static uint64_t t30 = 117702LLU;

	t30 = (x197^(x198%(x199/x200)));

	if (t30 != 944661039548458LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x201 = 6371U;
	static uint64_t t31 = 90505234599LLU;

	t31 = (x201^(x202%(x203/x204)));

	if (t31 != 41290025958172LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x206 = -1;
	int8_t x208 = INT8_MAX;
	uint32_t t32 = 15193422U;

	t32 = (x205^(x206%(x207/x208)));

	if (t32 != 6800U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x213 = -59;
	static uint8_t x215 = 12U;
	volatile uint32_t t33 = 43U;

	t33 = (x213^(x214%(x215/x216)));

	if (t33 != 4294967236U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x221 = INT8_MIN;
	static volatile int16_t x222 = 0;
	static int64_t x223 = -341740035271020LL;
	int32_t x224 = INT32_MIN;
	int64_t t34 = -310483715LL;

	t34 = (x221^(x222%(x223/x224)));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x233 = INT16_MAX;
	int64_t x234 = 149LL;
	int8_t x235 = -1;
	static uint32_t x236 = UINT32_MAX;
	int64_t t35 = -100825693381831505LL;

	t35 = (x233^(x234%(x235/x236)));

	if (t35 != 32767LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x237 = 8U;
	volatile uint32_t x238 = 52921U;
	static volatile int32_t x239 = INT32_MIN;
	volatile uint16_t x240 = UINT16_MAX;
	volatile uint32_t t36 = 2787602U;

	t36 = (x237^(x238%(x239/x240)));

	if (t36 != 52913U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x241 = 328133;
	int8_t x242 = -1;
	int32_t x243 = INT32_MAX;
	volatile uint16_t x244 = 16270U;
	volatile int32_t t37 = 58;

	t37 = (x241^(x242%(x243/x244)));

	if (t37 != -328134) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x245 = 523463540LLU;
	uint64_t x246 = 2366008900032534LLU;
	int8_t x247 = INT8_MIN;
	uint64_t t38 = 6075331828LLU;

	t38 = (x245^(x246%(x247/x248)));

	if (t38 != 2366009423360866LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x253 = 88461637655336LL;
	int32_t x254 = 183653375;
	volatile uint64_t t39 = 11330LLU;

	t39 = (x253^(x254%(x255/x256)));

	if (t39 != 88461806618839LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x257 = -1;
	int64_t x259 = -2151523761067325357LL;
	static int64_t x260 = -1168067LL;
	volatile int64_t t40 = 102281348670091LL;

	t40 = (x257^(x258%(x259/x260)));

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MIN;
	static uint64_t t41 = 2128564665515108147LLU;

	t41 = (x265^(x266%(x267/x268)));

	if (t41 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = 13;
	uint16_t x275 = 65U;
	int64_t x276 = -1LL;
	volatile int64_t t42 = 3LL;

	t42 = (x273^(x274%(x275/x276)));

	if (t42 != 32754LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x287 = -48753180217509616LL;
	int16_t x288 = INT16_MIN;
	int64_t t43 = 26057920119LL;

	t43 = (x285^(x286%(x287/x288)));

	if (t43 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x289 = 24175753112273LL;
	int8_t x290 = INT8_MAX;
	int32_t x291 = -252927;
	static uint32_t x292 = 939696650U;

	t44 = (x289^(x290%(x291/x292)));

	if (t44 != 24175753112274LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x317 = -1;
	volatile uint16_t x318 = 4U;
	volatile int16_t x319 = INT16_MAX;
	int8_t x320 = 3;
	volatile int32_t t45 = 19178;

	t45 = (x317^(x318%(x319/x320)));

	if (t45 != -5) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x325 = INT8_MIN;
	volatile int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	static volatile int8_t x328 = 4;
	int32_t t46 = 5426931;

	t46 = (x325^(x326%(x327/x328)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x333 = 5;
	volatile uint16_t x334 = 26U;
	int16_t x335 = INT16_MIN;
	static volatile int32_t x336 = -1;
	static volatile int32_t t47 = -840491;

	t47 = (x333^(x334%(x335/x336)));

	if (t47 != 31) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x338 = -556374LL;
	volatile uint64_t x340 = 125127903810989164LLU;
	uint64_t t48 = 25991076LLU;

	t48 = (x337^(x338%(x339/x340)));

	if (t48 != 134LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x343 = -35189;
	static uint64_t x344 = 160655LLU;
	volatile uint64_t t49 = 50828441182864LLU;

	t49 = (x341^(x342%(x343/x344)));

	if (t49 != 57414901831120LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int32_t x347 = INT32_MIN;
	static uint64_t x348 = 7163879299436348901LLU;
	volatile uint64_t t50 = 235944058570663155LLU;

	t50 = (x345^(x346%(x347/x348)));

	if (t50 != 65534LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x349 = 937072625;
	volatile int16_t x350 = -1;
	int16_t x352 = INT16_MAX;
	static volatile int32_t t51 = 18968;

	t51 = (x349^(x350%(x351/x352)));

	if (t51 != 937072625) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x356 = -1;
	int64_t t52 = -23064039188669LL;

	t52 = (x353^(x354%(x355/x356)));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x358 = 10U;
	static int16_t x359 = -1;
	static int8_t x360 = 1;
	static uint32_t t53 = 58044U;

	t53 = (x357^(x358%(x359/x360)));

	if (t53 != 4294967285U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x361 = INT16_MIN;
	int32_t x362 = 0;
	volatile int16_t x363 = -1700;
	uint64_t x364 = 54302265LLU;
	static volatile uint64_t t54 = 7LLU;

	t54 = (x361^(x362%(x363/x364)));

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x373 = INT16_MAX;
	int16_t x374 = 188;
	volatile int64_t x375 = INT64_MAX;
	static int64_t t55 = -201799LL;

	t55 = (x373^(x374%(x375/x376)));

	if (t55 != 32579LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = -16;
	volatile int64_t x379 = -31180423923503LL;
	volatile uint8_t x380 = 5U;

	t56 = (x377^(x378%(x379/x380)));

	if (t56 != 32752LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x389 = 0;
	int64_t x391 = 4539070LL;
	int16_t x392 = INT16_MAX;

	t57 = (x389^(x390%(x391/x392)));

	if (t57 != -46LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x401 = -1;
	volatile uint64_t x402 = UINT64_MAX;
	volatile int64_t x403 = -590LL;
	volatile uint64_t t58 = 58948LLU;

	t58 = (x401^(x402%(x403/x404)));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x409 = INT8_MIN;
	int64_t x411 = INT64_MIN;
	int64_t x412 = 7LL;
	int64_t t59 = -5LL;

	t59 = (x409^(x410%(x411/x412)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x413 = UINT32_MAX;
	volatile int64_t x414 = INT64_MIN;
	int32_t x415 = INT32_MIN;
	uint8_t x416 = UINT8_MAX;
	int64_t t60 = -3035100294000LL;

	t60 = (x413^(x414%(x415/x416)));

	if (t60 != -4294934529LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x417 = 915789;
	volatile int8_t x418 = -1;
	uint32_t x419 = 94757U;
	int16_t x420 = INT16_MAX;
	uint32_t t61 = 57567U;

	t61 = (x417^(x418%(x419/x420)));

	if (t61 != 915788U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x425 = INT16_MIN;
	uint8_t x427 = UINT8_MAX;
	int8_t x428 = 11;
	int32_t t62 = -361147;

	t62 = (x425^(x426%(x427/x428)));

	if (t62 != 32762) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x429 = INT8_MIN;
	static volatile int8_t x430 = INT8_MAX;
	uint16_t x431 = UINT16_MAX;
	uint16_t x432 = 278U;
	int32_t t63 = 31374457;

	t63 = (x429^(x430%(x431/x432)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x433 = -5437090446808460LL;
	int8_t x434 = 0;
	uint64_t x435 = UINT64_MAX;
	int32_t x436 = INT32_MIN;
	uint64_t t64 = 1658053LLU;

	t64 = (x433^(x434%(x435/x436)));

	if (t64 != 18441306983262743156LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x441 = INT16_MAX;
	static int8_t x442 = -1;
	int64_t x443 = INT64_MIN;
	int64_t x444 = INT64_MIN;
	volatile int64_t t65 = 848142208LL;

	t65 = (x441^(x442%(x443/x444)));

	if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MIN;
	int64_t x447 = INT64_MIN;
	int8_t x448 = INT8_MIN;
	int64_t t66 = 1LL;

	t66 = (x445^(x446%(x447/x448)));

	if (t66 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x449 = INT8_MAX;
	int64_t x450 = INT64_MIN;
	static uint8_t x451 = UINT8_MAX;
	volatile int64_t t67 = 1516116915438982LL;

	t67 = (x449^(x450%(x451/x452)));

	if (t67 != -121LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x461 = 15U;
	volatile int16_t x462 = -1;
	int16_t x464 = -6525;
	static volatile int32_t t68 = 3291763;

	t68 = (x461^(x462%(x463/x464)));

	if (t68 != -16) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x473 = INT32_MIN;
	int16_t x474 = -1;
	volatile int32_t x475 = INT32_MIN;
	static volatile int32_t x476 = INT32_MIN;
	static volatile int32_t t69 = INT32_MIN;

	t69 = (x473^(x474%(x475/x476)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x478 = -1;
	int64_t x479 = INT64_MIN;
	int16_t x480 = INT16_MAX;
	int64_t t70 = 1094256027602384LL;

	t70 = (x477^(x478%(x479/x480)));

	if (t70 != 3LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x481 = INT16_MIN;
	volatile uint64_t t71 = 1941LLU;

	t71 = (x481^(x482%(x483/x484)));

	if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x485 = INT32_MIN;
	int32_t x486 = -1;
	volatile uint8_t x487 = 10U;
	volatile int32_t t72 = INT32_MIN;

	t72 = (x485^(x486%(x487/x488)));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x493 = -6375122249LL;
	static int16_t x494 = -1;
	int64_t x495 = INT64_MIN;
	static int32_t x496 = 1748547;
	static int64_t t73 = 0LL;

	t73 = (x493^(x494%(x495/x496)));

	if (t73 != 6375122248LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x517 = UINT8_MAX;
	int32_t x518 = INT32_MIN;
	volatile int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	volatile int32_t t74 = -368659;

	t74 = (x517^(x518%(x519/x520)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x522 = -1LL;
	static int8_t x523 = INT8_MIN;
	uint32_t x524 = 531539021U;
	static volatile int64_t t75 = -66LL;

	t75 = (x521^(x522%(x523/x524)));

	if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x530 = -1653;
	int64_t x531 = -1LL;
	static int32_t x532 = -1;
	volatile int64_t t76 = 3242954781752834LL;

	t76 = (x529^(x530%(x531/x532)));

	if (t76 != -23374245LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x545 = UINT8_MAX;
	static int8_t x546 = INT8_MIN;
	static int32_t x547 = INT32_MAX;
	volatile uint32_t x548 = 13877U;
	volatile uint32_t t77 = 14U;

	t77 = (x545^(x546%(x547/x548)));

	if (t77 != 7701U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x549 = INT64_MIN;
	int8_t x550 = -2;
	volatile uint64_t x551 = UINT64_MAX;
	static uint8_t x552 = 45U;
	uint64_t t78 = 634602293836605203LLU;

	t78 = (x549^(x550%(x551/x552)));

	if (t78 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x553 = -182260880;
	int16_t x554 = -3452;
	uint32_t x555 = UINT32_MAX;
	volatile uint32_t t79 = 9307598U;

	t79 = (x553^(x554%(x555/x556)));

	if (t79 != 4112706416U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x569 = INT8_MAX;
	int32_t x570 = INT32_MIN;
	static int16_t x571 = INT16_MIN;
	uint8_t x572 = 6U;

	t80 = (x569^(x570%(x571/x572)));

	if (t80 != -121) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x577 = INT16_MIN;
	int16_t x580 = -2;
	int64_t t81 = 3LL;

	t81 = (x577^(x578%(x579/x580)));

	if (t81 != -30858LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x597 = 487;
	int64_t x599 = INT64_MAX;
	int16_t x600 = -1;
	volatile int64_t t82 = 2247520906652004LL;

	t82 = (x597^(x598%(x599/x600)));

	if (t82 != 3555LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x605 = -1;
	int32_t x606 = INT32_MIN;
	static volatile int8_t x607 = -1;
	volatile uint32_t t83 = 3U;

	t83 = (x605^(x606%(x607/x608)));

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x613 = INT32_MAX;
	int32_t x614 = -5933;
	volatile uint16_t x615 = 3882U;
	static int32_t x616 = 55;
	int32_t t84 = 194;

	t84 = (x613^(x614%(x615/x616)));

	if (t84 != -2147483596) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x629 = -37;
	volatile int32_t x631 = INT32_MAX;
	uint64_t x632 = 10478LLU;
	uint64_t t85 = 160002LLU;

	t85 = (x629^(x630%(x631/x632)));

	if (t85 != 18446744073709544518LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x637 = -1;
	int64_t x638 = INT64_MAX;
	int32_t x639 = -848628;
	volatile uint64_t t86 = 1621569971866773LLU;

	t86 = (x637^(x638%(x639/x640)));

	if (t86 != 18446744073705815287LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x641 = INT8_MAX;
	static uint8_t x642 = UINT8_MAX;
	int32_t x643 = -129189126;
	static int8_t x644 = -1;
	static volatile int32_t t87 = -1;

	t87 = (x641^(x642%(x643/x644)));

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x649 = 2U;
	int16_t x650 = INT16_MIN;
	volatile int32_t t88 = -740884;

	t88 = (x649^(x650%(x651/x652)));

	if (t88 != -32766) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x669 = -2498811759385625LL;
	int16_t x670 = INT16_MAX;
	static volatile int32_t x672 = -1;
	volatile int64_t t89 = 0LL;

	t89 = (x669^(x670%(x671/x672)));

	if (t89 != -2498811759385648LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x673 = 1U;
	static int64_t x674 = INT64_MIN;
	uint64_t x675 = UINT64_MAX;
	static uint8_t x676 = UINT8_MAX;

	t90 = (x673^(x674%(x675/x676)));

	if (t90 != 36170086419038336LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x685 = -1;
	int16_t x686 = 13657;
	int8_t x687 = -1;
	static int8_t x688 = 1;
	int32_t t91 = -93;

	t91 = (x685^(x686%(x687/x688)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x689 = 1152;
	int32_t x690 = INT32_MAX;
	int64_t x691 = -20921665023830541LL;
	int32_t x692 = INT32_MIN;
	int64_t t92 = 96173409LL;

	t92 = (x689^(x690%(x691/x692)));

	if (t92 != 4154819LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x694 = -1LL;
	static int64_t x695 = 43332976232791LL;
	int64_t x696 = -1LL;

	t93 = (x693^(x694%(x695/x696)));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x701 = 5176335LLU;
	int64_t x702 = -2707910324304LL;
	int64_t x703 = INT64_MIN;
	static volatile int16_t x704 = INT16_MIN;
	volatile uint64_t t94 = 79198LLU;

	t94 = (x701^(x702%(x703/x704)));

	if (t94 != 18446741365795156927LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x705 = 47920814907LLU;
	uint8_t x706 = 1U;
	int16_t x707 = INT16_MIN;
	static int16_t x708 = -8463;
	static volatile uint64_t t95 = 1387322465579396LLU;

	t95 = (x705^(x706%(x707/x708)));

	if (t95 != 47920814906LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x709 = 47;
	int16_t x710 = 25;
	int8_t x711 = INT8_MIN;
	int32_t t96 = -1704193;

	t96 = (x709^(x710%(x711/x712)));

	if (t96 != 46) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x717 = UINT8_MAX;
	volatile int64_t x718 = -1LL;
	int64_t x719 = INT64_MIN;
	uint16_t x720 = 10U;
	volatile int64_t t97 = 45156437988853LL;

	t97 = (x717^(x718%(x719/x720)));

	if (t97 != -256LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x733 = -1;
	uint32_t x734 = 257756U;
	uint64_t x736 = 358636237234690LLU;
	uint64_t t98 = 16667900074712251LLU;

	t98 = (x733^(x734%(x735/x736)));

	if (t98 != 18446744073709551029LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x741 = 230U;
	uint16_t x742 = 6U;
	int64_t x744 = -1LL;
	volatile int64_t t99 = 1LL;

	t99 = (x741^(x742%(x743/x744)));

	if (t99 != 224LL) { NG(); } else { ; }
	
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

