#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -1LL;
volatile uint8_t x12 = UINT8_MAX;
int16_t x25 = -1;
volatile uint32_t t4 = 1641U;
int16_t x33 = INT16_MIN;
volatile int64_t x37 = -196907549LL;
uint32_t x43 = 53873U;
int16_t x44 = INT16_MIN;
volatile uint64_t x46 = 423775604LLU;
int32_t x59 = -1;
int32_t t12 = 14635589;
volatile uint16_t x62 = 171U;
int8_t x64 = INT8_MIN;
static int16_t x67 = 6;
uint64_t x69 = UINT64_MAX;
uint16_t x70 = UINT16_MAX;
uint64_t t15 = 27320242409840LLU;
uint64_t t16 = 771939674796507368LLU;
int8_t x82 = INT8_MIN;
int32_t x84 = INT32_MIN;
static volatile int64_t x101 = INT64_MIN;
int16_t x114 = INT16_MIN;
uint64_t x116 = 1011394429761140LLU;
int16_t x131 = INT16_MIN;
volatile int16_t x133 = 165;
int8_t x134 = -22;
uint64_t t24 = 444LLU;
uint16_t x140 = 18U;
volatile int8_t x141 = INT8_MAX;
int16_t x146 = INT16_MIN;
uint8_t x147 = UINT8_MAX;
static volatile int64_t t28 = 37LL;
static int8_t x166 = -1;
uint64_t x167 = 590LLU;
static int16_t x172 = -13;
volatile uint32_t t31 = 90U;
uint16_t x184 = 6U;
int16_t x189 = -1;
volatile int8_t x193 = INT8_MAX;
int32_t t34 = 122442712;
int32_t x201 = INT32_MIN;
uint64_t x223 = 221LLU;
int32_t x224 = INT32_MAX;
int16_t x245 = INT16_MIN;
int64_t x248 = -1LL;
int32_t x250 = INT32_MIN;
uint8_t x251 = 96U;
volatile int32_t x262 = INT32_MIN;
int8_t x264 = INT8_MIN;
volatile int32_t t44 = 1;
static uint64_t x267 = 58589697122387LLU;
uint16_t x272 = 7U;
int16_t x273 = INT16_MIN;
volatile uint64_t x276 = UINT64_MAX;
int64_t x278 = -712LL;
static int64_t x287 = 822183346LL;
uint8_t x296 = 2U;
static uint32_t x297 = UINT32_MAX;
static uint32_t x301 = 227519229U;
volatile uint32_t x305 = 28U;
int64_t x308 = -13394467128745LL;
volatile int16_t x309 = INT16_MAX;
int8_t x312 = INT8_MIN;
uint64_t t55 = 216869299LLU;
int64_t t56 = 4788848513533124LL;
static volatile int64_t t57 = 396546728LL;
int64_t x326 = INT64_MIN;
int16_t x327 = -1;
static int32_t x332 = -3662705;
int64_t t60 = -2972691LL;
volatile int32_t t62 = 461;
volatile int16_t x354 = INT16_MAX;
volatile int64_t t64 = 172232570353035600LL;
volatile int32_t t65 = 1579;
static int8_t x370 = -2;
int64_t t66 = -31539LL;
static volatile uint8_t x389 = 4U;
int16_t x391 = INT16_MIN;
int64_t x399 = -1720737103625676430LL;
static int64_t x411 = -549491241135848LL;
uint64_t x412 = 23458235076LLU;
int8_t x415 = INT8_MIN;
uint16_t x419 = 8052U;
static uint16_t x428 = UINT16_MAX;
uint64_t x439 = 1305837LLU;
int16_t x449 = INT16_MIN;
volatile int32_t t77 = -100008;
uint16_t x458 = UINT16_MAX;
uint32_t x461 = 2720U;
volatile uint64_t x465 = 290084LLU;
uint8_t x471 = 3U;
volatile int64_t t82 = 22401391780806325LL;
static volatile int64_t x485 = INT64_MIN;
uint64_t x487 = 460458144776584451LLU;
int8_t x500 = 0;
volatile int64_t t88 = -753700LL;
volatile int16_t x508 = 2;
int64_t t89 = -60346809007182LL;
int64_t t90 = -14801566934LL;
volatile uint16_t x517 = 3184U;
int16_t x531 = INT16_MIN;
uint64_t x535 = 1838LLU;
uint8_t x538 = 103U;
static int32_t x539 = 2;
uint32_t x555 = 217023256U;


void f0(void) {
	int16_t x1 = 756;
	int16_t x2 = -1;
	volatile int8_t x3 = INT8_MAX;
	uint8_t x4 = 119U;
	static volatile int32_t t0 = 29547;

	t0 = ((x1-x2)%(x3+x4));

	if (t0 != 19) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 101720302288LLU;
	volatile uint64_t x6 = UINT64_MAX;
	volatile int32_t x8 = INT32_MAX;
	volatile uint64_t t1 = 133044032111LLU;

	t1 = ((x5-x6)%(x7+x8));

	if (t1 != 788570927LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	static uint16_t x10 = 3U;
	int8_t x11 = -1;
	static volatile int32_t t2 = 312;

	t2 = ((x9-x10)%(x11+x12));

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -1;
	volatile int8_t x22 = -1;
	volatile uint8_t x23 = 2U;
	static int8_t x24 = INT8_MAX;
	volatile int32_t t3 = 15652212;

	t3 = ((x21-x22)%(x23+x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x26 = INT16_MAX;
	uint32_t x27 = 3230U;
	int8_t x28 = INT8_MIN;

	t4 = ((x25-x26)%(x27+x28));

	if (t4 != 1490U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x29 = 0LLU;
	volatile int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	int64_t x32 = INT64_MIN;
	uint64_t t5 = 114808LLU;

	t5 = ((x29-x30)%(x31+x32));

	if (t5 != 2147483648LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x34 = -1;
	uint64_t x35 = UINT64_MAX;
	static int8_t x36 = -1;
	uint64_t t6 = 170LLU;

	t6 = ((x33-x34)%(x35+x36));

	if (t6 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x38 = -1;
	uint16_t x39 = UINT16_MAX;
	volatile int32_t x40 = -1;
	volatile int64_t t7 = -503325826396638330LL;

	t7 = ((x37-x38)%(x39+x40));

	if (t7 != -43412LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	static int8_t x42 = -1;
	int64_t t8 = 49101601332208415LL;

	t8 = ((x41-x42)%(x43+x44));

	if (t8 != -1582LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 780381LLU;
	int8_t x47 = -3;
	static volatile int32_t x48 = -1;
	uint64_t t9 = 15265419981524536LLU;

	t9 = ((x45-x46)%(x47+x48));

	if (t9 != 18446744073286556393LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x49 = UINT32_MAX;
	static volatile uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 6U;
	int16_t x52 = INT16_MAX;
	volatile uint64_t t10 = 1234662495498614769LLU;

	t10 = ((x49-x50)%(x51+x52));

	if (t10 != 100LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 0U;
	volatile uint64_t x54 = 100LLU;
	int64_t x55 = 2828LL;
	volatile int64_t x56 = INT64_MIN;
	uint64_t t11 = 40275142LLU;

	t11 = ((x53-x54)%(x55+x56));

	if (t11 != 9223372036854772880LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MIN;
	int32_t x58 = 423195;
	int16_t x60 = INT16_MAX;

	t12 = ((x57-x58)%(x59+x60));

	if (t12 != -30005) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	int16_t x63 = INT16_MIN;
	int32_t t13 = -2968;

	t13 = ((x61-x62)%(x63+x64));

	if (t13 != -172) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = INT8_MIN;
	uint8_t x66 = 39U;
	uint32_t x68 = 44U;
	static volatile uint32_t t14 = 359U;

	t14 = ((x65-x66)%(x67+x68));

	if (t14 != 29U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x71 = -1;
	volatile int16_t x72 = 0;

	t15 = ((x69-x70)%(x71+x72));

	if (t15 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint64_t x74 = 132LLU;
	int32_t x75 = INT32_MIN;
	uint8_t x76 = 2U;

	t16 = ((x73-x74)%(x75+x76));

	if (t16 != 123LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;
	volatile uint64_t t17 = 7150615020250845756LLU;

	t17 = ((x81-x82)%(x83+x84));

	if (t17 != 2147451009LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = 4190;
	volatile int16_t x94 = 0;
	uint32_t x95 = 249U;
	int16_t x96 = INT16_MIN;
	static volatile uint32_t t18 = 25U;

	t18 = ((x93-x94)%(x95+x96));

	if (t18 != 4190U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x102 = UINT64_MAX;
	static volatile uint16_t x103 = UINT16_MAX;
	static volatile uint8_t x104 = 29U;
	uint64_t t19 = 818LLU;

	t19 = ((x101-x102)%(x103+x104));

	if (t19 != 45073LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x113 = -300;
	int16_t x115 = -15611;
	static uint64_t t20 = 96874LLU;

	t20 = ((x113-x114)%(x115+x116));

	if (t20 != 32468LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	uint64_t x123 = 33718306613930627LLU;
	static uint16_t x124 = UINT16_MAX;
	volatile uint64_t t21 = 112661811660743LLU;

	t21 = ((x121-x122)%(x123+x124));

	if (t21 != 2830355853650875LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = UINT16_MAX;
	static uint32_t x126 = 301468U;
	int64_t x127 = -1LL;
	int8_t x128 = -22;
	static volatile int64_t t22 = 765039145003932LL;

	t22 = ((x125-x126)%(x127+x128));

	if (t22 != 13LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = 1;
	int64_t x130 = -1LL;
	uint8_t x132 = UINT8_MAX;
	static volatile int64_t t23 = 1124081527LL;

	t23 = ((x129-x130)%(x131+x132));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x135 = -1;
	static volatile uint64_t x136 = 465902639862785020LLU;

	t24 = ((x133-x134)%(x135+x136));

	if (t24 != 187LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x137 = 757329U;
	volatile uint32_t x138 = 6U;
	int16_t x139 = INT16_MIN;
	uint32_t t25 = 180875U;

	t25 = ((x137-x138)%(x139+x140));

	if (t25 != 757323U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x142 = -1;
	uint16_t x143 = UINT16_MAX;
	int16_t x144 = -1389;
	int32_t t26 = 368628;

	t26 = ((x141-x142)%(x143+x144));

	if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x145 = 9760104678591LL;
	int8_t x148 = -18;
	volatile int64_t t27 = -24577315970803LL;

	t27 = ((x145-x146)%(x147+x148));

	if (t27 != 56LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x161 = 3U;
	static volatile int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = 2381U;

	t28 = ((x161-x162)%(x163+x164));

	if (t28 != -124LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x165 = 215U;
	uint8_t x168 = 36U;
	static uint64_t t29 = 135802233369431LLU;

	t29 = ((x165-x166)%(x167+x168));

	if (t29 != 216LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x169 = INT64_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	int16_t x171 = INT16_MIN;
	volatile uint64_t t30 = 40247548LLU;

	t30 = ((x169-x170)%(x171+x172));

	if (t30 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x177 = 245565363U;
	int16_t x178 = -1;
	int8_t x179 = INT8_MIN;
	static uint8_t x180 = 3U;

	t31 = ((x177-x178)%(x179+x180));

	if (t31 != 245565364U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x181 = 501287U;
	volatile int8_t x182 = INT8_MIN;
	int16_t x183 = 1141;
	volatile uint32_t t32 = 6940U;

	t32 = ((x181-x182)%(x183+x184));

	if (t32 != 176U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x190 = UINT16_MAX;
	static uint64_t x191 = 1863990485029931LLU;
	volatile int64_t x192 = -333723921535LL;
	uint64_t t33 = 3620753191LLU;

	t33 = ((x189-x190)%(x191+x192));

	if (t33 != 269452258582472LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x194 = -15;
	static volatile int16_t x195 = INT16_MAX;
	int8_t x196 = INT8_MAX;

	t34 = ((x193-x194)%(x195+x196));

	if (t34 != 142) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = 8;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MIN;
	static int32_t t35 = 27;

	t35 = ((x197-x198)%(x199+x200));

	if (t35 != -32776) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x202 = -1LL;
	uint16_t x203 = 59U;
	uint32_t x204 = 1060787U;
	int64_t t36 = -12217536918LL;

	t36 = ((x201-x202)%(x203+x204));

	if (t36 != -331343LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x205 = UINT8_MAX;
	static int16_t x206 = -1;
	volatile uint32_t x207 = UINT32_MAX;
	int32_t x208 = INT32_MAX;
	uint32_t t37 = 106987327U;

	t37 = ((x205-x206)%(x207+x208));

	if (t37 != 256U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = 1;
	static volatile uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 217887742U;
	static volatile uint64_t x216 = UINT64_MAX;
	uint64_t t38 = 309553000LLU;

	t38 = ((x213-x214)%(x215+x216));

	if (t38 != 203629064LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x221 = UINT64_MAX;
	int32_t x222 = INT32_MAX;
	volatile uint64_t t39 = 21LLU;

	t39 = ((x221-x222)%(x223+x224));

	if (t39 != 193820LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x233 = -1;
	int32_t x234 = INT32_MAX;
	volatile int16_t x235 = -1;
	static uint32_t x236 = 13240U;
	uint32_t t40 = 1320534U;

	t40 = ((x233-x234)%(x235+x236));

	if (t40 != 11936U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x237 = INT8_MAX;
	static int64_t x238 = -62LL;
	int32_t x239 = -1;
	int64_t x240 = INT64_MAX;
	volatile int64_t t41 = 5035561934340LL;

	t41 = ((x237-x238)%(x239+x240));

	if (t41 != 189LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x246 = 11708U;
	int16_t x247 = -1;
	volatile int64_t t42 = -10809599880LL;

	t42 = ((x245-x246)%(x247+x248));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x249 = 2051231696U;
	uint8_t x252 = 33U;
	volatile uint32_t t43 = 968U;

	t43 = ((x249-x250)%(x251+x252));

	if (t43 != 124U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x261 = INT32_MIN;
	int8_t x263 = INT8_MIN;

	t44 = ((x261-x262)%(x263+x264));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x265 = INT8_MIN;
	static uint32_t x266 = 5U;
	uint64_t x268 = 27478350059912LLU;
	uint64_t t45 = 2070894117141384298LLU;

	t45 = ((x265-x266)%(x267+x268));

	if (t45 != 4294967163LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x269 = -112;
	int32_t x270 = INT32_MIN;
	uint8_t x271 = 1U;
	volatile int32_t t46 = -1515;

	t46 = ((x269-x270)%(x271+x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x274 = INT32_MIN;
	static int32_t x275 = -7384842;
	uint64_t t47 = 859120868808906LLU;

	t47 = ((x273-x274)%(x275+x276));

	if (t47 != 2147450880LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x277 = 122316U;
	static int64_t x279 = INT64_MAX;
	static int8_t x280 = INT8_MIN;
	static volatile int64_t t48 = 88553090209614142LL;

	t48 = ((x277-x278)%(x279+x280));

	if (t48 != 123028LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x285 = INT8_MIN;
	int8_t x286 = 1;
	volatile uint16_t x288 = 3U;
	volatile int64_t t49 = -20675LL;

	t49 = ((x285-x286)%(x287+x288));

	if (t49 != -129LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x289 = 131U;
	static uint16_t x290 = 4U;
	uint64_t x291 = 156178120669603918LLU;
	static volatile int64_t x292 = INT64_MIN;
	static volatile uint64_t t50 = 964221898LLU;

	t50 = ((x289-x290)%(x291+x292));

	if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x293 = -49;
	int8_t x294 = -11;
	int32_t x295 = 9;
	int32_t t51 = 10652;

	t51 = ((x293-x294)%(x295+x296));

	if (t51 != -5) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x298 = INT16_MIN;
	int16_t x299 = -1;
	static int64_t x300 = INT64_MAX;
	int64_t t52 = 18017335733287LL;

	t52 = ((x297-x298)%(x299+x300));

	if (t52 != 32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x302 = 186427328LLU;
	uint16_t x303 = UINT16_MAX;
	static int64_t x304 = -386029LL;
	uint64_t t53 = 7036838106160337LLU;

	t53 = ((x301-x302)%(x303+x304));

	if (t53 != 41091901LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x306 = 193246422;
	volatile int32_t x307 = INT32_MIN;
	volatile int64_t t54 = 12770580602716602LL;

	t54 = ((x305-x306)%(x307+x308));

	if (t54 != 4101720902LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x310 = 11435569717LLU;
	static uint32_t x311 = 36700936U;

	t55 = ((x309-x310)%(x311+x312));

	if (t55 != 20200082LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x317 = 2740102LL;
	volatile uint8_t x318 = 120U;
	static uint8_t x319 = 7U;
	int16_t x320 = 927;

	t56 = ((x317-x318)%(x319+x320));

	if (t56 != 560LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = -3;
	int8_t x323 = -2;
	int64_t x324 = INT64_MAX;

	t57 = ((x321-x322)%(x323+x324));

	if (t57 != -125LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x328 = 278539LLU;
	uint64_t t58 = 2455LLU;

	t58 = ((x325-x326)%(x327+x328));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x329 = 684U;
	int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MIN;
	static int32_t t59 = 15903997;

	t59 = ((x329-x330)%(x331+x332));

	if (t59 != -32083) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x333 = INT64_MAX;
	uint16_t x334 = 0U;
	int16_t x335 = -2;
	int32_t x336 = 3758;

	t60 = ((x333-x334)%(x335+x336));

	if (t60 != 2887LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int16_t x338 = -1;
	static volatile uint16_t x339 = 27U;
	int16_t x340 = INT16_MAX;
	volatile uint32_t t61 = 48U;

	t61 = ((x337-x338)%(x339+x340));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x345 = INT32_MAX;
	volatile uint16_t x346 = UINT16_MAX;
	static int8_t x347 = INT8_MIN;
	uint8_t x348 = UINT8_MAX;

	t62 = ((x345-x346)%(x347+x348));

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x349 = INT8_MAX;
	uint16_t x350 = UINT16_MAX;
	static int16_t x351 = -1;
	volatile uint8_t x352 = 2U;
	volatile int32_t t63 = -11;

	t63 = ((x349-x350)%(x351+x352));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x353 = INT16_MIN;
	int64_t x355 = -24650332630964LL;
	int16_t x356 = -1;

	t64 = ((x353-x354)%(x355+x356));

	if (t64 != -65535LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x357 = UINT8_MAX;
	static int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MAX;

	t65 = ((x357-x358)%(x359+x360));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = -1LL;
	uint8_t x371 = 58U;
	volatile int64_t x372 = INT64_MIN;

	t66 = ((x369-x370)%(x371+x372));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x373 = -1;
	int16_t x374 = 4049;
	int32_t x375 = 221;
	int64_t x376 = INT64_MIN;
	volatile int64_t t67 = 1850135197715937LL;

	t67 = ((x373-x374)%(x375+x376));

	if (t67 != -4050LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x390 = -1;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t68 = -260609;

	t68 = ((x389-x390)%(x391+x392));

	if (t68 != 5) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x393 = 0;
	int32_t x394 = -1;
	volatile uint16_t x395 = 1646U;
	volatile int8_t x396 = INT8_MIN;
	static volatile int32_t t69 = 809394;

	t69 = ((x393-x394)%(x395+x396));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x397 = INT32_MAX;
	int64_t x398 = 1889453083154770LL;
	static uint16_t x400 = UINT16_MAX;
	int64_t t70 = -26439736930LL;

	t70 = ((x397-x398)%(x399+x400));

	if (t70 != -1889450935671123LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x409 = -1;
	static uint64_t x410 = UINT64_MAX;
	uint64_t t71 = 1394708520370LLU;

	t71 = ((x409-x410)%(x411+x412));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x413 = INT64_MIN;
	static int64_t x414 = INT64_MIN;
	uint16_t x416 = 4U;
	int64_t t72 = -4LL;

	t72 = ((x413-x414)%(x415+x416));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x417 = UINT64_MAX;
	static int64_t x418 = INT64_MIN;
	int16_t x420 = 1;
	volatile uint64_t t73 = 841280413LLU;

	t73 = ((x417-x418)%(x419+x420));

	if (t73 != 5925LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x425 = INT32_MIN;
	static volatile int16_t x426 = INT16_MIN;
	int32_t x427 = -86997;
	int32_t t74 = 1384;

	t74 = ((x425-x426)%(x427+x428));

	if (t74 != -6084) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x433 = INT16_MIN;
	volatile int32_t x434 = INT32_MIN;
	static uint32_t x435 = 10463096U;
	volatile int32_t x436 = 47;
	volatile uint32_t t75 = 646450U;

	t75 = ((x433-x434)%(x435+x436));

	if (t75 != 2506565U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x437 = INT32_MAX;
	int64_t x438 = INT64_MAX;
	int16_t x440 = INT16_MAX;
	volatile uint64_t t76 = 57LLU;

	t76 = ((x437-x438)%(x439+x440));

	if (t76 != 446708LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x450 = INT16_MAX;
	uint16_t x451 = 179U;
	int32_t x452 = -1;

	t77 = ((x449-x450)%(x451+x452));

	if (t77 != -31) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x453 = -13;
	volatile int8_t x454 = INT8_MAX;
	volatile int32_t x455 = 14356;
	static int64_t x456 = -1LL;
	volatile int64_t t78 = -10497LL;

	t78 = ((x453-x454)%(x455+x456));

	if (t78 != -140LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x457 = 2936181U;
	int16_t x459 = INT16_MIN;
	uint64_t x460 = 17LLU;
	volatile uint64_t t79 = 124472807725123119LLU;

	t79 = ((x457-x458)%(x459+x460));

	if (t79 != 2870646LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x462 = 1;
	uint8_t x463 = 3U;
	static uint32_t x464 = UINT32_MAX;
	uint32_t t80 = 146U;

	t80 = ((x461-x462)%(x463+x464));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x466 = 2U;
	int32_t x467 = -2;
	int16_t x468 = -1;
	volatile uint64_t t81 = 57261527LLU;

	t81 = ((x465-x466)%(x467+x468));

	if (t81 != 290082LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x469 = -4038668904LL;
	static volatile int8_t x470 = INT8_MIN;
	int32_t x472 = INT32_MIN;

	t82 = ((x469-x470)%(x471+x472));

	if (t82 != -1891185131LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x473 = UINT64_MAX;
	int32_t x474 = -2873784;
	static int64_t x475 = INT64_MIN;
	int64_t x476 = INT64_MAX;
	uint64_t t83 = 21LLU;

	t83 = ((x473-x474)%(x475+x476));

	if (t83 != 2873783LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x477 = 5U;
	volatile uint64_t x478 = UINT64_MAX;
	volatile int32_t x479 = -250960583;
	volatile int16_t x480 = INT16_MIN;
	volatile uint64_t t84 = 6885221570051512948LLU;

	t84 = ((x477-x478)%(x479+x480));

	if (t84 != 6LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x481 = 381LLU;
	int32_t x482 = -6;
	int64_t x483 = -1LL;
	volatile int16_t x484 = INT16_MAX;
	uint64_t t85 = 265517769347LLU;

	t85 = ((x481-x482)%(x483+x484));

	if (t85 != 387LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x486 = INT16_MIN;
	int64_t x488 = INT64_MIN;
	uint64_t t86 = 16034256LLU;

	t86 = ((x485-x486)%(x487+x488));

	if (t86 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x497 = INT8_MIN;
	volatile int16_t x498 = 0;
	volatile int8_t x499 = -1;
	int32_t t87 = 13328;

	t87 = ((x497-x498)%(x499+x500));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x501 = INT16_MAX;
	int64_t x502 = -23LL;
	volatile uint32_t x503 = UINT32_MAX;
	int64_t x504 = INT64_MIN;

	t88 = ((x501-x502)%(x503+x504));

	if (t88 != 32790LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x505 = INT16_MAX;
	uint8_t x506 = UINT8_MAX;
	static int64_t x507 = INT64_MIN;

	t89 = ((x505-x506)%(x507+x508));

	if (t89 != 32512LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x513 = -1;
	static int64_t x514 = -1LL;
	int64_t x515 = -14315LL;
	int8_t x516 = INT8_MIN;

	t90 = ((x513-x514)%(x515+x516));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x518 = UINT8_MAX;
	static int8_t x519 = INT8_MIN;
	volatile uint32_t x520 = 115989185U;
	uint32_t t91 = 341U;

	t91 = ((x517-x518)%(x519+x520));

	if (t91 != 2929U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x525 = -1LL;
	int16_t x526 = INT16_MAX;
	volatile int8_t x527 = -1;
	int16_t x528 = 486;
	static volatile int64_t t92 = 14128LL;

	t92 = ((x525-x526)%(x527+x528));

	if (t92 != -273LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x529 = INT16_MAX;
	int8_t x530 = INT8_MIN;
	uint16_t x532 = 899U;
	int32_t t93 = -10;

	t93 = ((x529-x530)%(x531+x532));

	if (t93 != 1026) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x533 = 0U;
	uint64_t x534 = UINT64_MAX;
	static uint16_t x536 = 4U;
	volatile uint64_t t94 = 63LLU;

	t94 = ((x533-x534)%(x535+x536));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x537 = -1;
	int16_t x540 = INT16_MAX;
	int32_t t95 = 3476;

	t95 = ((x537-x538)%(x539+x540));

	if (t95 != -104) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x541 = 116696LL;
	int16_t x542 = INT16_MAX;
	static int16_t x543 = INT16_MIN;
	uint8_t x544 = 43U;
	volatile int64_t t96 = -219312404828703741LL;

	t96 = ((x541-x542)%(x543+x544));

	if (t96 != 18479LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x545 = -1;
	static int16_t x546 = INT16_MIN;
	volatile uint64_t x547 = 948705070506LLU;
	uint32_t x548 = 65U;
	static uint64_t t97 = 118105450901671163LLU;

	t97 = ((x545-x546)%(x547+x548));

	if (t97 != 32767LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x549 = 32;
	static volatile int8_t x550 = -1;
	int8_t x551 = INT8_MIN;
	uint32_t x552 = 10957U;
	static volatile uint32_t t98 = 348U;

	t98 = ((x549-x550)%(x551+x552));

	if (t98 != 33U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x553 = 19;
	static int16_t x554 = 7;
	int64_t x556 = -310LL;
	int64_t t99 = 124908901786705LL;

	t99 = ((x553-x554)%(x555+x556));

	if (t99 != 12LL) { NG(); } else { ; }
	
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

