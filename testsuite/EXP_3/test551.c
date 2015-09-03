#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x9 = 18U;
static volatile int32_t t1 = -592405400;
int8_t x19 = INT8_MAX;
static int8_t x30 = INT8_MAX;
static volatile int32_t t7 = 11010;
uint16_t x61 = UINT16_MAX;
static uint64_t x71 = UINT64_MAX;
uint32_t x88 = 50U;
volatile int64_t t12 = 1438781308618602LL;
int8_t x100 = -1;
static volatile int16_t x123 = INT16_MIN;
uint16_t x128 = 231U;
int16_t x131 = INT16_MIN;
volatile int32_t t18 = -442145890;
static int8_t x144 = INT8_MIN;
static int8_t x146 = INT8_MIN;
int16_t x148 = INT16_MAX;
int8_t x150 = INT8_MIN;
uint64_t x151 = 5251936122546LLU;
uint32_t x152 = 3697949U;
static volatile int64_t x156 = 217174801008LL;
uint32_t x166 = 2882U;
int64_t x167 = INT64_MAX;
int8_t x170 = -1;
int64_t x171 = -189LL;
uint32_t t27 = 8832292U;
uint64_t x199 = UINT64_MAX;
int64_t x200 = INT64_MIN;
int64_t x212 = -31193848779528522LL;
int64_t t31 = -248657765878202120LL;
volatile int16_t x232 = -1;
int64_t t32 = -902LL;
int64_t x235 = INT64_MIN;
static int32_t x236 = INT32_MIN;
int64_t x238 = -1LL;
int64_t t36 = -10886LL;
int64_t x254 = -1LL;
int8_t x260 = INT8_MAX;
static int32_t t39 = 57288685;
volatile int32_t x264 = -1;
uint32_t x269 = 25486U;
int16_t x272 = -1;
int64_t x274 = -10753424428LL;
static int16_t x276 = 3;
int16_t x277 = -1;
int16_t x282 = 210;
int16_t x283 = INT16_MIN;
uint32_t x284 = 13U;
int64_t x310 = INT64_MIN;
static int8_t x328 = INT8_MIN;
static volatile uint64_t t47 = 2346721757807LLU;
volatile int16_t x329 = INT16_MAX;
int32_t x331 = INT32_MIN;
volatile int16_t x338 = INT16_MIN;
int16_t x340 = 13346;
int64_t t49 = 4118711354LL;
int16_t x341 = -4;
static int8_t x368 = INT8_MIN;
volatile int32_t t51 = 644087425;
int32_t x379 = INT32_MAX;
int16_t x380 = -1;
int8_t x392 = INT8_MIN;
volatile uint64_t t53 = 1612LLU;
volatile uint32_t x415 = 3U;
int64_t t58 = -1991762163LL;
static int16_t x439 = INT16_MIN;
volatile int16_t x443 = INT16_MIN;
static int32_t x444 = -1;
int32_t x445 = -973644;
static int64_t x447 = -68507663217LL;
uint32_t x455 = UINT32_MAX;
static volatile int8_t x456 = 55;
int64_t x506 = 1LL;
int32_t x507 = INT32_MIN;
static int8_t x508 = INT8_MIN;
int64_t t66 = -259310551583036862LL;
static uint32_t x554 = 1532U;
static uint8_t x569 = 7U;
static uint64_t x571 = 976396152818LLU;
int64_t x582 = 6633667505LL;
int64_t x583 = INT64_MAX;
static int8_t x588 = 3;
volatile int16_t x603 = INT16_MAX;
uint16_t x604 = 2908U;
volatile int64_t t78 = 207753LL;
uint16_t x606 = UINT16_MAX;
static uint32_t x622 = 1133U;
uint8_t x624 = 3U;
uint32_t t81 = 14022U;
uint32_t x635 = UINT32_MAX;
static volatile int32_t x636 = INT32_MAX;
uint32_t t82 = 2690973U;
int8_t x645 = INT8_MIN;
static int8_t x648 = 4;
static int8_t x651 = INT8_MIN;
int32_t x661 = INT32_MAX;
static uint16_t x669 = UINT16_MAX;
uint32_t x672 = 185710U;
uint32_t x673 = UINT32_MAX;
uint16_t x675 = 763U;
uint32_t x680 = 1176142U;
volatile int16_t x713 = -1;
static volatile int16_t x714 = INT16_MIN;
int8_t x719 = INT8_MIN;
int8_t x735 = -1;
int8_t x753 = INT8_MIN;
int16_t x755 = INT16_MAX;
uint64_t t99 = 7951903LLU;


void f0(void) {
	uint32_t x5 = 3U;
	int8_t x6 = INT8_MIN;
	volatile uint8_t x7 = UINT8_MAX;
	int8_t x8 = -1;
	uint32_t t0 = 970391606U;

	t0 = ((x5/x6)%(x7/x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x10 = -1;
	int16_t x11 = INT16_MIN;
	static uint16_t x12 = 6144U;

	t1 = ((x9/x10)%(x11/x12));

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -143;
	int8_t x14 = 16;
	uint8_t x15 = UINT8_MAX;
	static volatile int16_t x16 = -1;
	static volatile int32_t t2 = -20316142;

	t2 = ((x13/x14)%(x15/x16));

	if (t2 != -8) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 49;
	static int64_t x18 = -15235LL;
	static volatile int8_t x20 = 8;
	volatile int64_t t3 = 81LL;

	t3 = ((x17/x18)%(x19/x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	uint32_t x22 = 935U;
	volatile uint64_t x23 = UINT64_MAX;
	int64_t x24 = INT64_MIN;
	volatile uint64_t t4 = 10LLU;

	t4 = ((x21/x22)%(x23/x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = INT16_MIN;
	static volatile uint8_t x26 = 2U;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = -4;
	static int32_t t5 = 1;

	t5 = ((x25/x26)%(x27/x28));

	if (t5 != -16384) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = UINT64_MAX;
	static uint16_t x31 = 20889U;
	uint8_t x32 = 51U;
	static uint64_t t6 = 14LLU;

	t6 = ((x29/x30)%(x31/x32));

	if (t6 != 313LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x45 = 1U;
	uint16_t x46 = UINT16_MAX;
	int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;

	t7 = ((x45/x46)%(x47/x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x53 = UINT64_MAX;
	int16_t x54 = -1;
	int32_t x55 = INT32_MIN;
	int32_t x56 = 37135362;
	volatile uint64_t t8 = 3LLU;

	t8 = ((x53/x54)%(x55/x56));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x62 = INT32_MAX;
	static volatile int64_t x63 = -8818908873LL;
	static uint64_t x64 = 452LLU;
	static volatile uint64_t t9 = 4519409365LLU;

	t9 = ((x61/x62)%(x63/x64));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x69 = INT32_MIN;
	volatile uint64_t x70 = UINT64_MAX;
	int64_t x72 = -1LL;
	uint64_t t10 = 6464391260241LLU;

	t10 = ((x69/x70)%(x71/x72));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x73 = -1;
	static uint8_t x74 = 46U;
	int32_t x75 = 468847;
	int32_t x76 = -19;
	volatile int32_t t11 = -3;

	t11 = ((x73/x74)%(x75/x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x85 = -1;
	int64_t x86 = -12720433LL;
	int16_t x87 = 14652;

	t12 = ((x85/x86)%(x87/x88));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 779U;
	int16_t x91 = INT16_MAX;
	static int8_t x92 = INT8_MAX;
	volatile uint32_t t13 = 11032068U;

	t13 = ((x89/x90)%(x91/x92));

	if (t13 != 234U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MIN;
	volatile int32_t x99 = -31846;
	int32_t t14 = -11409066;

	t14 = ((x97/x98)%(x99/x100));

	if (t14 != 1844) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MAX;
	static uint32_t x115 = UINT32_MAX;
	int32_t x116 = -156;
	volatile uint32_t t15 = 2884346U;

	t15 = ((x113/x114)%(x115/x116));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x121 = 7U;
	uint8_t x122 = 1U;
	static volatile uint64_t x124 = 4377110944790689LLU;
	uint64_t t16 = 220LLU;

	t16 = ((x121/x122)%(x123/x124));

	if (t16 != 7LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x125 = -8;
	uint8_t x126 = UINT8_MAX;
	int16_t x127 = INT16_MIN;
	volatile int32_t t17 = 36;

	t17 = ((x125/x126)%(x127/x128));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x129 = 87U;
	volatile int32_t x130 = INT32_MIN;
	static uint8_t x132 = UINT8_MAX;

	t18 = ((x129/x130)%(x131/x132));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x133 = 34477U;
	int8_t x134 = 15;
	int8_t x135 = INT8_MIN;
	int32_t x136 = -1;
	uint32_t t19 = 643949U;

	t19 = ((x133/x134)%(x135/x136));

	if (t19 != 122U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x141 = 26;
	int32_t x142 = INT32_MIN;
	static int16_t x143 = INT16_MIN;
	volatile int32_t t20 = -22961656;

	t20 = ((x141/x142)%(x143/x144));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x145 = INT16_MIN;
	int16_t x147 = INT16_MAX;
	volatile int32_t t21 = 155189;

	t21 = ((x145/x146)%(x147/x148));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x149 = 77U;
	uint64_t t22 = 217770225LLU;

	t22 = ((x149/x150)%(x151/x152));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x153 = INT16_MIN;
	int8_t x154 = -1;
	int64_t x155 = -195166739581253LL;
	int64_t t23 = 125222358102LL;

	t23 = ((x153/x154)%(x155/x156));

	if (t23 != 440LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x157 = -1;
	int32_t x158 = -1;
	int64_t x159 = INT64_MAX;
	int16_t x160 = 10872;
	int64_t t24 = -1608110239213LL;

	t24 = ((x157/x158)%(x159/x160));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x165 = INT8_MIN;
	int64_t x168 = INT64_MAX;
	volatile int64_t t25 = 3LL;

	t25 = ((x165/x166)%(x167/x168));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x169 = UINT32_MAX;
	static uint64_t x172 = 63911LLU;
	volatile uint64_t t26 = 5586079LLU;

	t26 = ((x169/x170)%(x171/x172));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x178 = 125294836U;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MAX;

	t27 = ((x177/x178)%(x179/x180));

	if (t27 != 34U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x181 = 5LL;
	int64_t x182 = -91889623583LL;
	int64_t x183 = -220789202522649LL;
	int8_t x184 = 16;
	volatile int64_t t28 = 16438757LL;

	t28 = ((x181/x182)%(x183/x184));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x185 = INT16_MIN;
	static int8_t x186 = 1;
	int64_t x187 = INT64_MIN;
	static int8_t x188 = INT8_MAX;
	volatile int64_t t29 = -907257516LL;

	t29 = ((x185/x186)%(x187/x188));

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x197 = INT64_MIN;
	uint32_t x198 = 468U;
	volatile uint64_t t30 = 70765489739034195LLU;

	t30 = ((x197/x198)%(x199/x200));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x209 = UINT8_MAX;
	static int8_t x210 = -1;
	int64_t x211 = INT64_MIN;

	t31 = ((x209/x210)%(x211/x212));

	if (t31 != -255LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x229 = -1;
	int64_t x230 = INT64_MIN;
	static volatile int32_t x231 = INT32_MAX;

	t32 = ((x229/x230)%(x231/x232));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x233 = -1612391;
	static int8_t x234 = INT8_MIN;
	static int64_t t33 = 144447242401815LL;

	t33 = ((x233/x234)%(x235/x236));

	if (t33 != 12596LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x237 = 704;
	volatile int64_t x239 = -2370203076798873183LL;
	int8_t x240 = INT8_MIN;
	volatile int64_t t34 = -89LL;

	t34 = ((x237/x238)%(x239/x240));

	if (t34 != -704LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x241 = -127;
	volatile int64_t x242 = 1LL;
	int32_t x243 = INT32_MIN;
	static uint16_t x244 = UINT16_MAX;
	int64_t t35 = -1LL;

	t35 = ((x241/x242)%(x243/x244));

	if (t35 != -127LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x245 = INT8_MIN;
	volatile int64_t x246 = -1LL;
	int8_t x247 = INT8_MIN;
	int64_t x248 = -1LL;

	t36 = ((x245/x246)%(x247/x248));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x249 = 10628512LLU;
	int8_t x250 = 31;
	int64_t x251 = INT64_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile uint64_t t37 = 170541LLU;

	t37 = ((x249/x250)%(x251/x252));

	if (t37 != 342855LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x253 = INT16_MIN;
	uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 57U;
	volatile int64_t t38 = -12797671317LL;

	t38 = ((x253/x254)%(x255/x256));

	if (t38 != 596LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x257 = UINT16_MAX;
	volatile int32_t x258 = -1;
	uint16_t x259 = UINT16_MAX;

	t39 = ((x257/x258)%(x259/x260));

	if (t39 != -3) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x261 = -1;
	int32_t x262 = INT32_MIN;
	int16_t x263 = -1;
	int32_t t40 = -440731206;

	t40 = ((x261/x262)%(x263/x264));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x270 = 3U;
	static volatile int64_t x271 = 1LL;
	int64_t t41 = 6126603437670LL;

	t41 = ((x269/x270)%(x271/x272));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x273 = 0;
	uint32_t x275 = UINT32_MAX;
	static volatile int64_t t42 = 30LL;

	t42 = ((x273/x274)%(x275/x276));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x278 = 7U;
	int32_t x279 = INT32_MAX;
	int32_t x280 = 8765;
	uint32_t t43 = 25059716U;

	t43 = ((x277/x278)%(x279/x280));

	if (t43 != 71732U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x281 = 15640432LL;
	volatile int64_t t44 = -40357608429465038LL;

	t44 = ((x281/x282)%(x283/x284));

	if (t44 != 74478LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	int16_t x295 = 42;
	volatile int8_t x296 = -31;
	int32_t t45 = 5;

	t45 = ((x293/x294)%(x295/x296));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x311 = INT64_MAX;
	volatile int16_t x312 = INT16_MIN;
	volatile uint64_t t46 = 8943644468617LLU;

	t46 = ((x309/x310)%(x311/x312));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x325 = UINT8_MAX;
	volatile uint8_t x326 = 2U;
	uint64_t x327 = UINT64_MAX;

	t47 = ((x325/x326)%(x327/x328));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x330 = 43531548;
	int64_t x332 = 1669370LL;
	int64_t t48 = 184525362LL;

	t48 = ((x329/x330)%(x331/x332));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x337 = -1;
	static int64_t x339 = INT64_MIN;

	t49 = ((x337/x338)%(x339/x340));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MAX;
	uint8_t x344 = 7U;
	int64_t t50 = -2758302LL;

	t50 = ((x341/x342)%(x343/x344));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = -1;
	int32_t x367 = INT32_MIN;

	t51 = ((x365/x366)%(x367/x368));

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x377 = 10U;
	int64_t x378 = -1LL;
	volatile int64_t t52 = -148760025135264LL;

	t52 = ((x377/x378)%(x379/x380));

	if (t52 != -10LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x389 = INT16_MAX;
	volatile int32_t x390 = 6623755;
	static uint64_t x391 = UINT64_MAX;

	t53 = ((x389/x390)%(x391/x392));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x397 = 1136U;
	int16_t x398 = INT16_MAX;
	static volatile uint64_t x399 = 90367169513LLU;
	int16_t x400 = 106;
	uint64_t t54 = 35705257750969630LLU;

	t54 = ((x397/x398)%(x399/x400));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x405 = INT8_MAX;
	uint32_t x406 = 192050031U;
	volatile uint8_t x407 = 4U;
	uint8_t x408 = 2U;
	volatile uint32_t t55 = 28U;

	t55 = ((x405/x406)%(x407/x408));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x413 = INT32_MIN;
	volatile int16_t x414 = INT16_MIN;
	uint16_t x416 = 1U;
	uint32_t t56 = 478776U;

	t56 = ((x413/x414)%(x415/x416));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x417 = -1;
	int32_t x418 = 891;
	static uint32_t x419 = 213U;
	int8_t x420 = 3;
	static volatile uint32_t t57 = 268239254U;

	t57 = ((x417/x418)%(x419/x420));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = 3210105432307060340LL;
	int64_t x423 = INT64_MAX;
	volatile uint16_t x424 = UINT16_MAX;

	t58 = ((x421/x422)%(x423/x424));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x429 = INT32_MIN;
	int64_t x430 = -48317LL;
	int16_t x431 = INT16_MIN;
	static int16_t x432 = INT16_MIN;
	int64_t t59 = 28169109442LL;

	t59 = ((x429/x430)%(x431/x432));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x433 = 27U;
	static volatile int16_t x434 = INT16_MIN;
	int64_t x435 = -3542526221262LL;
	int32_t x436 = INT32_MAX;
	int64_t t60 = 549706LL;

	t60 = ((x433/x434)%(x435/x436));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x437 = -97;
	volatile int64_t x438 = INT64_MIN;
	static volatile int8_t x440 = -5;
	volatile int64_t t61 = 1LL;

	t61 = ((x437/x438)%(x439/x440));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x441 = UINT64_MAX;
	volatile int8_t x442 = INT8_MAX;
	uint64_t t62 = 21025898LLU;

	t62 = ((x441/x442)%(x443/x444));

	if (t62 != 258LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x446 = INT64_MIN;
	volatile uint64_t x448 = 166269516683075LLU;
	uint64_t t63 = 1803LLU;

	t63 = ((x445/x446)%(x447/x448));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x453 = UINT8_MAX;
	int16_t x454 = -276;
	uint32_t t64 = 48U;

	t64 = ((x453/x454)%(x455/x456));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x465 = 107;
	uint16_t x466 = UINT16_MAX;
	static int16_t x467 = -1801;
	int32_t x468 = -1;
	int32_t t65 = -618136622;

	t65 = ((x465/x466)%(x467/x468));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x505 = -1;

	t66 = ((x505/x506)%(x507/x508));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x509 = INT8_MIN;
	volatile int32_t x510 = -492;
	static int32_t x511 = INT32_MIN;
	uint64_t x512 = 4306481320921LLU;
	volatile uint64_t t67 = 66413894823LLU;

	t67 = ((x509/x510)%(x511/x512));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x513 = 1;
	static int32_t x514 = -46;
	int64_t x515 = INT64_MIN;
	int32_t x516 = 281883682;
	int64_t t68 = -23533LL;

	t68 = ((x513/x514)%(x515/x516));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x517 = 230U;
	int64_t x518 = -1LL;
	uint8_t x519 = UINT8_MAX;
	uint8_t x520 = 3U;
	volatile int64_t t69 = -593727LL;

	t69 = ((x517/x518)%(x519/x520));

	if (t69 != -60LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x537 = INT8_MAX;
	int64_t x538 = -3LL;
	static int32_t x539 = -35046882;
	int8_t x540 = INT8_MIN;
	int64_t t70 = 22976443099LL;

	t70 = ((x537/x538)%(x539/x540));

	if (t70 != -42LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x545 = INT8_MIN;
	int8_t x546 = INT8_MAX;
	uint16_t x547 = 1U;
	volatile int32_t x548 = -1;
	int32_t t71 = 0;

	t71 = ((x545/x546)%(x547/x548));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x553 = UINT8_MAX;
	uint64_t x555 = 130LLU;
	volatile int16_t x556 = 1;
	volatile uint64_t t72 = 1663607LLU;

	t72 = ((x553/x554)%(x555/x556));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x557 = UINT64_MAX;
	volatile uint32_t x558 = 10343904U;
	static int64_t x559 = -1LL;
	uint8_t x560 = 1U;
	uint64_t t73 = 31737310036LLU;

	t73 = ((x557/x558)%(x559/x560));

	if (t73 != 1783344477453LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x570 = 106U;
	static volatile uint16_t x572 = UINT16_MAX;
	uint64_t t74 = 9816924767LLU;

	t74 = ((x569/x570)%(x571/x572));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x573 = INT32_MIN;
	static volatile int8_t x574 = INT8_MIN;
	static uint32_t x575 = UINT32_MAX;
	uint8_t x576 = 16U;
	static uint32_t t75 = 682170821U;

	t75 = ((x573/x574)%(x575/x576));

	if (t75 != 16777216U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x581 = INT8_MIN;
	uint16_t x584 = 250U;
	int64_t t76 = 3446507787884LL;

	t76 = ((x581/x582)%(x583/x584));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x585 = -1LL;
	uint64_t x586 = 4116577LLU;
	uint32_t x587 = 737332894U;
	volatile uint64_t t77 = 64583794603LLU;

	t77 = ((x585/x586)%(x587/x588));

	if (t77 != 70299123LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x601 = -16LL;
	static int32_t x602 = -1;

	t78 = ((x601/x602)%(x603/x604));

	if (t78 != 5LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x605 = INT64_MAX;
	int8_t x607 = INT8_MIN;
	int8_t x608 = -1;
	static volatile int64_t t79 = 664833841646730888LL;

	t79 = ((x605/x606)%(x607/x608));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x613 = UINT16_MAX;
	uint32_t x614 = UINT32_MAX;
	static volatile int8_t x615 = INT8_MAX;
	static int8_t x616 = INT8_MAX;
	static uint32_t t80 = 399U;

	t80 = ((x613/x614)%(x615/x616));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x621 = 11976307;
	uint8_t x623 = UINT8_MAX;

	t81 = ((x621/x622)%(x623/x624));

	if (t81 != 30U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x633 = 56;
	int16_t x634 = -1;

	t82 = ((x633/x634)%(x635/x636));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x646 = INT32_MAX;
	uint8_t x647 = 12U;
	int32_t t83 = -1;

	t83 = ((x645/x646)%(x647/x648));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x649 = 398;
	int16_t x650 = INT16_MAX;
	int8_t x652 = INT8_MIN;
	volatile int32_t t84 = -752;

	t84 = ((x649/x650)%(x651/x652));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x653 = -1;
	uint32_t x654 = 374054126U;
	volatile int16_t x655 = INT16_MIN;
	static uint8_t x656 = UINT8_MAX;
	uint32_t t85 = 678272U;

	t85 = ((x653/x654)%(x655/x656));

	if (t85 != 11U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x657 = -1LL;
	volatile int8_t x658 = -1;
	volatile int64_t x659 = -196224181887351802LL;
	uint32_t x660 = UINT32_MAX;
	int64_t t86 = -56060243335375LL;

	t86 = ((x657/x658)%(x659/x660));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x662 = -7LL;
	int64_t x663 = INT64_MIN;
	static int32_t x664 = 137886;
	volatile int64_t t87 = -1115LL;

	t87 = ((x661/x662)%(x663/x664));

	if (t87 != -306783378LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x665 = 116;
	int64_t x666 = -1LL;
	int64_t x667 = INT64_MAX;
	uint16_t x668 = 13U;
	int64_t t88 = -2908LL;

	t88 = ((x665/x666)%(x667/x668));

	if (t88 != -116LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x670 = UINT64_MAX;
	int64_t x671 = 12961833720LL;
	static uint64_t t89 = 13401LLU;

	t89 = ((x669/x670)%(x671/x672));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x674 = -102648926;
	int64_t x676 = -1LL;
	int64_t t90 = 1437381666834728LL;

	t90 = ((x673/x674)%(x675/x676));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x677 = INT64_MAX;
	static int16_t x678 = -30;
	uint32_t x679 = 4200055U;
	static volatile int64_t t91 = -40803831024861LL;

	t91 = ((x677/x678)%(x679/x680));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x689 = 22U;
	static int64_t x690 = -1LL;
	static int8_t x691 = -1;
	static uint16_t x692 = 1U;
	volatile int64_t t92 = 29577550107LL;

	t92 = ((x689/x690)%(x691/x692));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x709 = INT32_MIN;
	int64_t x710 = INT64_MAX;
	int16_t x711 = 2;
	static volatile int8_t x712 = -1;
	volatile int64_t t93 = 3091266254856238LL;

	t93 = ((x709/x710)%(x711/x712));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x715 = UINT16_MAX;
	uint8_t x716 = 36U;
	volatile int32_t t94 = -2022;

	t94 = ((x713/x714)%(x715/x716));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x717 = INT8_MAX;
	int16_t x718 = INT16_MIN;
	volatile int32_t x720 = -1;
	volatile int32_t t95 = 3398504;

	t95 = ((x717/x718)%(x719/x720));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x733 = 154;
	uint32_t x734 = 28993967U;
	int32_t x736 = -1;
	volatile uint32_t t96 = 1828226693U;

	t96 = ((x733/x734)%(x735/x736));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x754 = UINT32_MAX;
	volatile int32_t x756 = -14643;
	volatile uint32_t t97 = 30860U;

	t97 = ((x753/x754)%(x755/x756));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x757 = INT8_MIN;
	int8_t x758 = INT8_MIN;
	int16_t x759 = INT16_MIN;
	int8_t x760 = 12;
	int32_t t98 = 47219445;

	t98 = ((x757/x758)%(x759/x760));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x761 = 17938LLU;
	int64_t x762 = 4750LL;
	uint32_t x763 = UINT32_MAX;
	int32_t x764 = INT32_MIN;

	t99 = ((x761/x762)%(x763/x764));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

