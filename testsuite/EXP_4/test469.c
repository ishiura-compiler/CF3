#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 105U;
static volatile int32_t t2 = 0;
static volatile int32_t x25 = INT32_MIN;
int16_t x35 = INT16_MIN;
volatile int16_t x44 = -14093;
int64_t x45 = -1LL;
int16_t x50 = -1;
volatile int8_t x54 = INT8_MIN;
uint64_t t11 = 503385LLU;
int16_t x57 = INT16_MIN;
static uint32_t x59 = UINT32_MAX;
static volatile int64_t t13 = -1LL;
static int8_t x65 = -1;
uint32_t x69 = 9328904U;
volatile uint64_t x72 = 83505LLU;
uint64_t t15 = 274585687543441LLU;
int64_t x74 = -1010LL;
int32_t x76 = -1;
int8_t x80 = 49;
static int8_t x85 = -1;
volatile int16_t x87 = INT16_MAX;
static int16_t x94 = 1;
static int8_t x97 = -1;
static uint16_t x100 = 25U;
volatile uint32_t t21 = 27316U;
int8_t x104 = -27;
volatile uint64_t x108 = 32LLU;
volatile int8_t x109 = INT8_MIN;
int8_t x125 = 22;
static int64_t x126 = INT64_MIN;
uint16_t x127 = 3767U;
volatile int32_t x128 = -1;
static int64_t t27 = -78488756683288LL;
volatile int32_t x129 = -1;
int8_t x130 = INT8_MIN;
uint16_t x137 = 7U;
static uint8_t x140 = 58U;
uint64_t x154 = 73332389LLU;
uint8_t x166 = UINT8_MAX;
static uint32_t x169 = UINT32_MAX;
static uint64_t t34 = 4LLU;
static uint8_t x177 = 8U;
volatile int16_t x180 = INT16_MIN;
int64_t x181 = INT64_MAX;
volatile uint64_t t36 = 3310836LLU;
int64_t x195 = 39554014953LL;
static int16_t x198 = 486;
int8_t x218 = INT8_MIN;
int32_t x221 = 127;
uint32_t x223 = 1U;
volatile int8_t x228 = 0;
volatile uint32_t t44 = UINT32_MAX;
int32_t x235 = INT32_MAX;
uint16_t x242 = 24U;
int32_t x246 = INT32_MAX;
volatile int32_t t49 = -10091016;
static int64_t x256 = -1LL;
uint64_t t50 = 79295744LLU;
uint16_t x265 = UINT16_MAX;
int64_t x273 = 48297459LL;
int16_t x280 = -17;
int32_t x284 = -1;
static volatile uint64_t t56 = 64546LLU;
int32_t x285 = -691;
static volatile uint32_t t59 = 9798736U;
static uint32_t x299 = 238725U;
int64_t x304 = -1LL;
int64_t x312 = -1LL;
int64_t x339 = -1LL;
int16_t x350 = INT16_MAX;
int32_t x354 = 282882853;
int16_t x355 = INT16_MIN;
volatile int64_t x361 = INT64_MAX;
int32_t x370 = 0;
int32_t x373 = INT32_MIN;
int64_t x375 = -1LL;
uint8_t x386 = 72U;
int8_t x390 = INT8_MAX;
static uint16_t x393 = UINT16_MAX;
volatile int32_t t76 = -20;
uint8_t x410 = 13U;
volatile int64_t t80 = -93689727722145LL;
volatile uint64_t x414 = UINT64_MAX;
volatile int32_t t82 = -131283609;
volatile uint64_t t83 = 7562LLU;
volatile uint64_t x436 = 14183758624153063LLU;
uint8_t x438 = 36U;
volatile int8_t x439 = -7;
static int8_t x446 = -1;
uint8_t x456 = 8U;
uint32_t x458 = 14510U;
volatile uint32_t x467 = 6U;
volatile int64_t x473 = INT64_MIN;
int8_t x480 = -1;
static int64_t t94 = -172LL;
uint64_t x500 = 172089918LLU;
volatile uint64_t t96 = 14LLU;
int32_t x501 = INT32_MIN;
uint8_t x507 = 6U;


void f0(void) {
	volatile uint32_t x5 = 249U;
	int8_t x6 = 1;
	volatile int16_t x7 = 0;
	volatile uint8_t x8 = 13U;

	t0 = (x5+(x6&(x7*x8)));

	if (t0 != 249U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MAX;
	static volatile int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MIN;
	int64_t t1 = 3LL;

	t1 = (x9+(x10&(x11*x12)));

	if (t1 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = -5157;
	int16_t x18 = 1689;
	int8_t x19 = INT8_MIN;
	static uint8_t x20 = 6U;

	t2 = (x17+(x18&(x19*x20)));

	if (t2 != -4133) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	volatile int64_t x22 = INT64_MIN;
	static volatile int64_t x23 = INT64_MAX;
	static uint16_t x24 = 1U;
	int64_t t3 = -6965837LL;

	t3 = (x21+(x22&(x23*x24)));

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x26 = 82U;
	int64_t x27 = -454166278375383LL;
	int8_t x28 = INT8_MAX;
	int64_t t4 = -335330361284336340LL;

	t4 = (x25+(x26&(x27*x28)));

	if (t4 != -2147483566LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	static volatile int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;
	int64_t t5 = 46718LL;

	t5 = (x29+(x30&(x31*x32)));

	if (t5 != 98303LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -984396484049131707LL;
	int32_t x34 = INT32_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t6 = 205655471LL;

	t6 = (x33+(x34&(x35*x36)));

	if (t6 != -984396486196615355LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x37 = 7582196736107LLU;
	int16_t x38 = INT16_MAX;
	uint16_t x39 = UINT16_MAX;
	int64_t x40 = 1009062971771LL;
	volatile uint64_t t7 = 1517347LLU;

	t7 = (x37+(x38&(x39*x40)));

	if (t7 != 7582196766448LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x42 = 0U;
	int8_t x43 = INT8_MIN;
	volatile int32_t t8 = INT32_MIN;

	t8 = (x41+(x42&(x43*x44)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = -1;
	volatile int8_t x48 = INT8_MIN;
	volatile uint64_t t9 = 5318065039371LLU;

	t9 = (x45+(x46&(x47*x48)));

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 61U;
	int32_t x51 = 325;
	uint16_t x52 = UINT16_MAX;
	static volatile int32_t t10 = -33360955;

	t10 = (x49+(x50&(x51*x52)));

	if (t10 != 21298936) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	static uint64_t x55 = 41LLU;
	int64_t x56 = INT64_MIN;

	t11 = (x53+(x54&(x55*x56)));

	if (t11 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = INT16_MIN;
	int64_t x60 = 19126LL;
	int64_t t12 = 2116130150398927LL;

	t12 = (x57+(x58&(x59*x60)));

	if (t12 != 82145544437760LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = UINT32_MAX;
	int64_t x62 = INT64_MAX;
	volatile int32_t x63 = 1715;
	uint16_t x64 = UINT16_MAX;

	t13 = (x61+(x62&(x63*x64)));

	if (t13 != 4407359820LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = -1;
	uint64_t x67 = 1169401448LLU;
	int8_t x68 = INT8_MIN;
	volatile uint64_t t14 = 11948594625LLU;

	t14 = (x65+(x66&(x67*x68)));

	if (t14 != 18446743924026166271LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = -1;
	int32_t x71 = -1;

	t15 = (x69+(x70&(x71*x72)));

	if (t15 != 9245399LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	int32_t x75 = -1;
	volatile int64_t t16 = 419842671926LL;

	t16 = (x73+(x74&(x75*x76)));

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = 3U;
	int64_t x78 = INT64_MIN;
	static int32_t x79 = -1;
	volatile int64_t t17 = 0LL;

	t17 = (x77+(x78&(x79*x80)));

	if (t17 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x86 = 1U;
	static int32_t x88 = -10;
	int32_t t18 = -5;

	t18 = (x85+(x86&(x87*x88)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = -1996;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = 11U;
	uint32_t t19 = 252U;

	t19 = (x89+(x90&(x91*x92)));

	if (t19 != 2147481652U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	static int16_t x95 = 1978;
	int8_t x96 = 16;
	static int64_t t20 = 8355914677LL;

	t20 = (x93+(x94&(x95*x96)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x98 = 169U;
	int8_t x99 = INT8_MIN;

	t21 = (x97+(x98&(x99*x100)));

	if (t21 != 127U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -1LL;
	uint64_t x102 = 1067418884LLU;
	int64_t x103 = 0LL;
	static volatile uint64_t t22 = UINT64_MAX;

	t22 = (x101+(x102&(x103*x104)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = INT32_MAX;
	int16_t x106 = INT16_MIN;
	static int64_t x107 = INT64_MIN;
	uint64_t t23 = 407391LLU;

	t23 = (x105+(x106&(x107*x108)));

	if (t23 != 2147483647LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x110 = 634218U;
	int8_t x111 = INT8_MAX;
	int16_t x112 = -1;
	volatile uint32_t t24 = 120872U;

	t24 = (x109+(x110&(x111*x112)));

	if (t24 != 633984U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	int16_t x114 = 221;
	uint64_t x115 = 58LLU;
	int8_t x116 = INT8_MIN;
	static volatile uint64_t t25 = 32833922LLU;

	t25 = (x113+(x114&(x115*x116)));

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x121 = INT64_MAX;
	static int8_t x122 = INT8_MIN;
	static int64_t x123 = -1LL;
	uint16_t x124 = UINT16_MAX;
	int64_t t26 = 208LL;

	t26 = (x121+(x122&(x123*x124)));

	if (t26 != 9223372036854710271LL) { NG(); } else { ; }
	
}

void f27(void) {


	t27 = (x125+(x126&(x127*x128)));

	if (t27 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x131 = 1;
	static int16_t x132 = INT16_MIN;
	volatile int32_t t28 = 1;

	t28 = (x129+(x130&(x131*x132)));

	if (t28 != -32769) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x138 = INT8_MAX;
	static uint8_t x139 = UINT8_MAX;
	volatile int32_t t29 = 455890;

	t29 = (x137+(x138&(x139*x140)));

	if (t29 != 77) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = 14400U;
	int16_t x148 = INT16_MAX;
	uint32_t t30 = 41907U;

	t30 = (x145+(x146&(x147*x148)));

	if (t30 != 471844608U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 161953636U;
	uint8_t x150 = 8U;
	int16_t x151 = 340;
	static uint32_t x152 = UINT32_MAX;
	volatile uint32_t t31 = 707986U;

	t31 = (x149+(x150&(x151*x152)));

	if (t31 != 161953644U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x153 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	int64_t x156 = -533804542665LL;
	uint64_t t32 = 106LLU;

	t32 = (x153+(x154&(x155*x156)));

	if (t32 != 71565312LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 11081U;
	int32_t x167 = 3776100;
	volatile uint8_t x168 = UINT8_MAX;
	static int32_t t33 = 1;

	t33 = (x165+(x166&(x167*x168)));

	if (t33 != 11237) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x170 = UINT64_MAX;
	uint16_t x171 = 18U;
	int16_t x172 = INT16_MIN;

	t34 = (x169+(x170&(x171*x172)));

	if (t34 != 4294377471LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x178 = -1LL;
	int8_t x179 = 14;
	int64_t t35 = 579086852LL;

	t35 = (x177+(x178&(x179*x180)));

	if (t35 != -458744LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x182 = INT16_MIN;
	uint64_t x183 = 31421620216654238LLU;
	volatile int8_t x184 = INT8_MIN;

	t36 = (x181+(x182&(x183*x184)));

	if (t36 != 5201404649123020799LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = 3617;
	uint16_t x186 = 12785U;
	uint32_t x187 = 1501148U;
	static int32_t x188 = 1448608;
	volatile uint32_t t37 = 2722420U;

	t37 = (x185+(x186&(x187*x188)));

	if (t37 != 4001U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x189 = UINT32_MAX;
	int8_t x190 = -11;
	int16_t x191 = -1;
	static int32_t x192 = INT32_MAX;
	volatile uint32_t t38 = 59307844U;

	t38 = (x189+(x190&(x191*x192)));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = INT32_MIN;
	static uint16_t x194 = 0U;
	volatile int16_t x196 = INT16_MAX;
	static int64_t t39 = -4292LL;

	t39 = (x193+(x194&(x195*x196)));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x197 = 20649LLU;
	static uint16_t x199 = 6031U;
	volatile int16_t x200 = -75;
	static volatile uint64_t t40 = 136LLU;

	t40 = (x197+(x198&(x199*x200)));

	if (t40 != 20907LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = INT64_MIN;
	volatile uint16_t x214 = 5U;
	int64_t x215 = -1LL;
	uint32_t x216 = 1542892139U;
	volatile int64_t t41 = -23518LL;

	t41 = (x213+(x214&(x215*x216)));

	if (t41 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x217 = UINT32_MAX;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile uint32_t t42 = 832621U;

	t42 = (x217+(x218&(x219*x220)));

	if (t42 != 2147516415U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x222 = -1;
	int32_t x224 = INT32_MIN;
	uint32_t t43 = 23406U;

	t43 = (x221+(x222&(x223*x224)));

	if (t43 != 2147483775U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = -1;
	uint32_t x226 = 31868345U;
	volatile uint8_t x227 = 7U;

	t44 = (x225+(x226&(x227*x228)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = 60;
	uint8_t x231 = 3U;
	int32_t x232 = -1;
	volatile int32_t t45 = -10763134;

	t45 = (x229+(x230&(x231*x232)));

	if (t45 != -32708) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x233 = UINT32_MAX;
	int16_t x234 = INT16_MAX;
	int32_t x236 = 1;
	uint32_t t46 = 21U;

	t46 = (x233+(x234&(x235*x236)));

	if (t46 != 32766U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = -1;
	int16_t x238 = INT16_MAX;
	uint16_t x239 = 5U;
	static volatile uint64_t x240 = UINT64_MAX;
	volatile uint64_t t47 = 926468LLU;

	t47 = (x237+(x238&(x239*x240)));

	if (t47 != 32762LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x241 = 11065;
	volatile uint64_t x243 = 63630LLU;
	uint32_t x244 = UINT32_MAX;
	volatile uint64_t t48 = 8LLU;

	t48 = (x241+(x242&(x243*x244)));

	if (t48 != 11081LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x245 = 7;
	static int32_t x247 = -1;
	static uint16_t x248 = UINT16_MAX;

	t49 = (x245+(x246&(x247*x248)));

	if (t49 != 2147418120) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x253 = 11U;
	volatile int8_t x254 = INT8_MAX;
	static volatile uint64_t x255 = 1057LLU;

	t50 = (x253+(x254&(x255*x256)));

	if (t50 != 106LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x257 = 149U;
	uint8_t x258 = UINT8_MAX;
	int32_t x259 = INT32_MAX;
	static uint32_t x260 = 2U;
	volatile uint32_t t51 = 0U;

	t51 = (x257+(x258&(x259*x260)));

	if (t51 != 403U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x261 = 1;
	uint32_t x262 = 120U;
	uint16_t x263 = UINT16_MAX;
	volatile int8_t x264 = INT8_MAX;
	volatile uint32_t t52 = 27604710U;

	t52 = (x261+(x262&(x263*x264)));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x266 = -1LL;
	static int32_t x267 = -1;
	int8_t x268 = INT8_MIN;
	volatile int64_t t53 = 11943106LL;

	t53 = (x265+(x266&(x267*x268)));

	if (t53 != 65663LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x274 = -3420;
	int8_t x275 = INT8_MAX;
	int8_t x276 = INT8_MIN;
	volatile int64_t t54 = -903794789508LL;

	t54 = (x273+(x274&(x275*x276)));

	if (t54 != 48281203LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x277 = 0U;
	int64_t x278 = -1LL;
	uint8_t x279 = 1U;
	volatile int64_t t55 = 157981065LL;

	t55 = (x277+(x278&(x279*x280)));

	if (t55 != -17LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MIN;
	uint64_t x283 = 435863348918989LLU;

	t56 = (x281+(x282&(x283*x284)));

	if (t56 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x286 = INT16_MAX;
	volatile int64_t x287 = 341878LL;
	uint8_t x288 = UINT8_MAX;
	int64_t t57 = 20702847984335686LL;

	t57 = (x285+(x286&(x287*x288)));

	if (t57 != 15319LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = -1;
	int32_t x290 = INT32_MAX;
	int16_t x291 = INT16_MAX;
	static volatile uint16_t x292 = UINT16_MAX;
	int32_t t58 = -27610373;

	t58 = (x289+(x290&(x291*x292)));

	if (t58 != 2147385344) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x293 = UINT32_MAX;
	static int16_t x294 = -10;
	uint8_t x295 = UINT8_MAX;
	uint32_t x296 = UINT32_MAX;

	t59 = (x293+(x294&(x295*x296)));

	if (t59 != 4294967039U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = 90870074;
	static int64_t x298 = INT64_MAX;
	static uint32_t x300 = 21U;
	volatile int64_t t60 = 255166626222369LL;

	t60 = (x297+(x298&(x299*x300)));

	if (t60 != 95883299LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = -1875062;
	uint64_t x302 = 32883553089035LLU;
	uint32_t x303 = 0U;
	uint64_t t61 = 2022421837498086172LLU;

	t61 = (x301+(x302&(x303*x304)));

	if (t61 != 18446744073707676554LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x309 = UINT8_MAX;
	int8_t x310 = INT8_MIN;
	volatile int8_t x311 = INT8_MIN;
	volatile int64_t t62 = -11889LL;

	t62 = (x309+(x310&(x311*x312)));

	if (t62 != 383LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x317 = INT8_MIN;
	uint32_t x318 = 3236008U;
	volatile int8_t x319 = INT8_MIN;
	static int16_t x320 = INT16_MAX;
	uint32_t t63 = 364756196U;

	t63 = (x317+(x318&(x319*x320)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x321 = INT8_MIN;
	volatile uint8_t x322 = 0U;
	uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 323504699U;
	uint64_t t64 = 224970796944621509LLU;

	t64 = (x321+(x322&(x323*x324)));

	if (t64 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x329 = 12141U;
	static int16_t x330 = INT16_MIN;
	uint32_t x331 = 8899U;
	uint8_t x332 = 1U;
	volatile uint32_t t65 = 9U;

	t65 = (x329+(x330&(x331*x332)));

	if (t65 != 12141U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x337 = -1LL;
	int64_t x338 = INT64_MAX;
	int32_t x340 = 185;
	volatile int64_t t66 = -2002287972444167285LL;

	t66 = (x337+(x338&(x339*x340)));

	if (t66 != 9223372036854775622LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = -1;
	int64_t x344 = 271513953259811LL;
	int64_t t67 = 474946233134153LL;

	t67 = (x341+(x342&(x343*x344)));

	if (t67 != -9223372036854731043LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x349 = INT32_MIN;
	static int64_t x351 = -974897LL;
	static volatile int32_t x352 = -1;
	volatile int64_t t68 = -856459818547302LL;

	t68 = (x349+(x350&(x351*x352)));

	if (t68 != -2147459023LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x353 = -1LL;
	volatile uint32_t x356 = 18472686U;
	volatile int64_t t69 = -7450364427437LL;

	t69 = (x353+(x354&(x355*x356)));

	if (t69 != 277348351LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x362 = UINT64_MAX;
	uint64_t x363 = UINT64_MAX;
	static int16_t x364 = -331;
	static volatile uint64_t t70 = 14LLU;

	t70 = (x361+(x362&(x363*x364)));

	if (t70 != 9223372036854776138LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x365 = 3296U;
	volatile uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MIN;
	static int8_t x368 = -15;
	volatile uint64_t t71 = 14713907564709352LLU;

	t71 = (x365+(x366&(x367*x368)));

	if (t71 != 494816LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x369 = 560225LLU;
	uint64_t x371 = 237579206520LLU;
	int32_t x372 = -1;
	uint64_t t72 = 381015123813556LLU;

	t72 = (x369+(x370&(x371*x372)));

	if (t72 != 560225LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x374 = INT32_MIN;
	int32_t x376 = INT32_MIN;
	static int64_t t73 = 449LL;

	t73 = (x373+(x374&(x375*x376)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x385 = UINT16_MAX;
	static uint32_t x387 = UINT32_MAX;
	volatile int8_t x388 = -3;
	uint32_t t74 = 1260289U;

	t74 = (x385+(x386&(x387*x388)));

	if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x389 = 34777714831681LLU;
	uint8_t x391 = UINT8_MAX;
	int16_t x392 = -1;
	volatile uint64_t t75 = 2408447263271277LLU;

	t75 = (x389+(x390&(x391*x392)));

	if (t75 != 34777714831682LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x394 = 103U;
	static int8_t x395 = -1;
	int32_t x396 = -1;

	t76 = (x393+(x394&(x395*x396)));

	if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x397 = 2U;
	uint8_t x398 = 85U;
	int32_t x399 = 18;
	int64_t x400 = -57910141LL;
	int64_t t77 = 15809487LL;

	t77 = (x397+(x398&(x399*x400)));

	if (t77 != 22LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x401 = 1;
	int8_t x402 = INT8_MIN;
	static int8_t x403 = INT8_MIN;
	static int64_t x404 = -1549926275501LL;
	int64_t t78 = 0LL;

	t78 = (x401+(x402&(x403*x404)));

	if (t78 != 198390563264129LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x405 = -11631;
	int16_t x406 = INT16_MAX;
	static int16_t x407 = 2010;
	volatile uint16_t x408 = 20U;
	int32_t t79 = -4;

	t79 = (x405+(x406&(x407*x408)));

	if (t79 != -4199) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x409 = INT32_MAX;
	int64_t x411 = -854064LL;
	volatile int8_t x412 = INT8_MIN;

	t80 = (x409+(x410&(x411*x412)));

	if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x415 = 4U;
	int8_t x416 = INT8_MIN;
	volatile uint64_t t81 = 5663238646907LLU;

	t81 = (x413+(x414&(x415*x416)));

	if (t81 != 18446744073709550976LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x417 = UINT8_MAX;
	int16_t x418 = -3496;
	int8_t x419 = INT8_MAX;
	uint16_t x420 = 16U;

	t82 = (x417+(x418&(x419*x420)));

	if (t82 != 847) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x421 = UINT64_MAX;
	uint16_t x422 = 18929U;
	static int32_t x423 = -1;
	int8_t x424 = INT8_MIN;

	t83 = (x421+(x422&(x423*x424)));

	if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x429 = INT64_MIN;
	uint64_t x430 = 2LLU;
	uint32_t x431 = 8U;
	volatile int8_t x432 = -1;
	uint64_t t84 = 2814117001143454LLU;

	t84 = (x429+(x430&(x431*x432)));

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x433 = -6044506565LL;
	static int16_t x434 = -29;
	uint16_t x435 = UINT16_MAX;
	static volatile uint64_t t85 = 70593315446853LLU;

	t85 = (x433+(x434&(x435*x436)));

	if (t85 != 7195417742348896316LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x437 = -1;
	uint64_t x440 = 27885705437478LLU;
	static volatile uint64_t t86 = 5994518181199LLU;

	t86 = (x437+(x438&(x439*x440)));

	if (t86 != 35LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x445 = 11LL;
	int16_t x447 = INT16_MIN;
	static uint16_t x448 = 117U;
	static int64_t t87 = -261339913553LL;

	t87 = (x445+(x446&(x447*x448)));

	if (t87 != -3833845LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x449 = 215615132U;
	int16_t x450 = INT16_MAX;
	int16_t x451 = INT16_MIN;
	static volatile uint64_t x452 = 27568228747211987LLU;
	uint64_t t88 = 14115058722907LLU;

	t88 = (x449+(x450&(x451*x452)));

	if (t88 != 215615132LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x453 = 2U;
	uint32_t x454 = 8655U;
	uint32_t x455 = 1U;
	static volatile uint32_t t89 = 242U;

	t89 = (x453+(x454&(x455*x456)));

	if (t89 != 10U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x457 = -1;
	volatile uint16_t x459 = 0U;
	uint32_t x460 = UINT32_MAX;
	uint32_t t90 = UINT32_MAX;

	t90 = (x457+(x458&(x459*x460)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = 1LL;
	uint16_t x466 = 29037U;
	volatile int8_t x468 = INT8_MIN;
	int64_t t91 = -1LL;

	t91 = (x465+(x466&(x467*x468)));

	if (t91 != 28929LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x474 = 2U;
	int32_t x475 = -1;
	int32_t x476 = INT32_MAX;
	static volatile int64_t t92 = INT64_MIN;

	t92 = (x473+(x474&(x475*x476)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x477 = INT8_MAX;
	static int32_t x478 = -1;
	volatile int32_t x479 = -21695;
	int32_t t93 = 1504;

	t93 = (x477+(x478&(x479*x480)));

	if (t93 != 21822) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x481 = INT8_MIN;
	int32_t x482 = -1;
	static int64_t x483 = -125941575LL;
	volatile int8_t x484 = INT8_MIN;

	t94 = (x481+(x482&(x483*x484)));

	if (t94 != 16120521472LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x489 = -1502;
	uint32_t x490 = 13664U;
	uint64_t x491 = 472370235160LLU;
	static int8_t x492 = INT8_MIN;
	volatile uint64_t t95 = 1LLU;

	t95 = (x489+(x490&(x491*x492)));

	if (t95 != 11810LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x497 = 46;
	static int8_t x498 = INT8_MIN;
	volatile int8_t x499 = INT8_MIN;

	t96 = (x497+(x498&(x499*x500)));

	if (t96 != 18446744051682042158LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x502 = 124U;
	int16_t x503 = INT16_MAX;
	int8_t x504 = 5;
	volatile int32_t t97 = 1;

	t97 = (x501+(x502&(x503*x504)));

	if (t97 != -2147483528) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x505 = 52LL;
	volatile int64_t x506 = -1LL;
	uint16_t x508 = 18903U;
	volatile int64_t t98 = -37086102650445570LL;

	t98 = (x505+(x506&(x507*x508)));

	if (t98 != 113470LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x509 = INT16_MIN;
	uint64_t x510 = 8072934699825055LLU;
	int8_t x511 = 58;
	uint64_t x512 = 9926629900628033LLU;
	static uint64_t t99 = 1587190LLU;

	t99 = (x509+(x510&(x511*x512)));

	if (t99 != 7920925051741850LLU) { NG(); } else { ; }
	
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

