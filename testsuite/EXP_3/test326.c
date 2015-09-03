#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = INT16_MIN;
static int64_t t1 = 278149486948132LL;
volatile int64_t x25 = INT64_MIN;
volatile int32_t x35 = -850127127;
static uint32_t x37 = UINT32_MAX;
volatile uint32_t x38 = 0U;
uint16_t x39 = 0U;
int16_t x59 = -12;
uint32_t x60 = 7U;
uint64_t x63 = 3637LLU;
int32_t x64 = INT32_MIN;
volatile uint8_t x65 = 9U;
static uint8_t x66 = 6U;
int32_t t12 = -831;
static int16_t x75 = -1;
uint64_t x78 = UINT64_MAX;
static int16_t x81 = INT16_MIN;
int8_t x84 = INT8_MIN;
int32_t x91 = 1034391054;
volatile int64_t t17 = 1980597LL;
volatile uint32_t x98 = UINT32_MAX;
int32_t x102 = -1;
int16_t x103 = -1;
volatile int16_t x105 = -1599;
int64_t x117 = -7LL;
uint8_t x119 = 11U;
volatile int32_t x124 = -1;
int64_t t25 = 345069780357LL;
int8_t x138 = INT8_MAX;
int32_t x143 = -1;
int32_t x146 = INT32_MIN;
int32_t x157 = INT32_MIN;
volatile uint8_t x158 = 6U;
int8_t x172 = -1;
volatile int32_t x173 = INT32_MIN;
int32_t x175 = INT32_MAX;
uint16_t x181 = UINT16_MAX;
int16_t x186 = -1;
uint64_t x197 = UINT64_MAX;
uint64_t t38 = 430520751940387078LLU;
uint8_t x201 = UINT8_MAX;
int8_t x223 = 1;
uint64_t t43 = 78LLU;
volatile uint32_t t45 = 12U;
static int16_t x254 = -1;
volatile uint64_t t47 = 9LLU;
volatile uint32_t t49 = 182415697U;
uint32_t t50 = 21U;
volatile int16_t x287 = 3841;
static uint32_t t51 = 228500299U;
int8_t x292 = 5;
uint32_t t52 = 190428456U;
int32_t x294 = INT32_MIN;
static int8_t x298 = INT8_MIN;
volatile int64_t t54 = 1351999159415954096LL;
uint64_t t55 = 81097098651440LLU;
int8_t x309 = -1;
uint8_t x310 = 115U;
int16_t x311 = -732;
int32_t x319 = -1;
uint8_t x321 = 0U;
static int16_t x329 = -1;
static int32_t x333 = 5490;
volatile int64_t t64 = -624LL;
int8_t x346 = INT8_MIN;
static int16_t x354 = -1446;
int16_t x356 = -1;
volatile uint16_t x374 = 34U;
volatile int64_t t72 = -1392416LL;
uint16_t x392 = 457U;
uint8_t x393 = 112U;
static int64_t x395 = -1LL;
int32_t x396 = INT32_MIN;
volatile int32_t x402 = -1;
int64_t t76 = 808725549019LL;
int8_t x405 = -1;
int64_t t77 = 82LL;
uint32_t x409 = 1132177474U;
uint16_t x420 = UINT16_MAX;
volatile uint32_t t80 = 608739264U;
static int64_t x425 = -14LL;
int16_t x428 = 21;
volatile int64_t t82 = 75877739636LL;
static int16_t x441 = 1;
static int64_t x445 = 15958065LL;
int16_t x446 = 30;
int64_t t85 = 2923666497868031445LL;
static volatile int16_t x462 = 0;
volatile int16_t x464 = INT16_MAX;
int8_t x472 = -1;
int8_t x479 = INT8_MIN;
static volatile int32_t x480 = 10;
uint8_t x482 = 0U;
int16_t x486 = -16;
int8_t x488 = INT8_MIN;
int8_t x490 = INT8_MIN;
int16_t x493 = 1;
uint32_t x494 = UINT32_MAX;
int32_t x498 = -1;
static int16_t x499 = INT16_MIN;
int32_t t98 = -262633459;


void f0(void) {
	volatile int8_t x13 = -1;
	volatile int64_t x14 = 1LL;
	int8_t x15 = INT8_MIN;
	int64_t t0 = -5069066441935960LL;

	t0 = ((x13^x14)+(x15-x16));

	if (t0 != 32638LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = -27468539665LL;
	static uint32_t x19 = 3U;
	static int8_t x20 = -4;

	t1 = ((x17^x18)+(x19-x20));

	if (t1 != 27468552438LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 814U;
	static int32_t x22 = -1;
	static uint8_t x23 = 11U;
	int32_t x24 = -1;
	volatile int32_t t2 = 4632;

	t2 = ((x21^x22)+(x23-x24));

	if (t2 != -803) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x26 = 0LLU;
	uint32_t x27 = 829U;
	static volatile uint8_t x28 = UINT8_MAX;
	volatile uint64_t t3 = 70543LLU;

	t3 = ((x25^x26)+(x27-x28));

	if (t3 != 9223372036854776382LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x29 = 3418101941286882584LLU;
	int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MAX;
	uint32_t x32 = 1265004U;
	volatile uint64_t t4 = 117334101LLU;

	t4 = ((x29^x30)+(x31-x32));

	if (t4 != 5805270099861595642LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x33 = INT64_MAX;
	uint16_t x34 = 2U;
	volatile int32_t x36 = 11814042;
	int64_t t5 = -5688LL;

	t5 = ((x33^x34)+(x35-x36));

	if (t5 != 9223372035992834636LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x40 = -1;
	uint32_t t6 = 118880191U;

	t6 = ((x37^x38)+(x39-x40));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x45 = INT8_MAX;
	static int16_t x46 = 13;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = 3U;
	static volatile int32_t t7 = -5939107;

	t7 = ((x45^x46)+(x47-x48));

	if (t7 != -32657) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = 0U;
	volatile int32_t x50 = -1;
	static uint32_t x51 = UINT32_MAX;
	static uint16_t x52 = UINT16_MAX;
	volatile uint32_t t8 = 194705U;

	t8 = ((x49^x50)+(x51-x52));

	if (t8 != 4294901759U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MIN;
	int8_t x55 = 1;
	int16_t x56 = INT16_MIN;
	static volatile int64_t t9 = -11836388360301860LL;

	t9 = ((x53^x54)+(x55-x56));

	if (t9 != 9223372034707324929LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x57 = UINT32_MAX;
	uint32_t x58 = UINT32_MAX;
	static uint32_t t10 = 39236422U;

	t10 = ((x57^x58)+(x59-x60));

	if (t10 != 4294967277U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x61 = 32974651059543LLU;
	int16_t x62 = INT16_MIN;
	volatile uint64_t t11 = 1046292190LLU;

	t11 = ((x61^x62)+(x63-x64));

	if (t11 != 18446711101206002572LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x67 = -1;
	uint8_t x68 = 1U;

	t12 = ((x65^x66)+(x67-x68));

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = 1963590;
	uint8_t x70 = 0U;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = -28;
	static int32_t t13 = -10;

	t13 = ((x69^x70)+(x71-x72));

	if (t13 != 1963873) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x73 = 0;
	int64_t x74 = INT64_MIN;
	uint32_t x76 = 480U;
	int64_t t14 = 15771LL;

	t14 = ((x73^x74)+(x75-x76));

	if (t14 != -9223372032559808993LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 20U;
	int32_t x79 = 5095;
	uint64_t x80 = 213837849542389LLU;
	uint64_t t15 = 3323757882777079LLU;

	t15 = ((x77^x78)+(x79-x80));

	if (t15 != 18446530235860014301LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x82 = 14711576712887183LLU;
	static int32_t x83 = INT32_MIN;
	uint64_t t16 = 197977879LLU;

	t16 = ((x81^x82)+(x83-x84));

	if (t16 != 18432032494849178639LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = -1;
	static int64_t x90 = INT64_MIN;
	int32_t x92 = INT32_MAX;

	t17 = ((x89^x90)+(x91-x92));

	if (t17 != 9223372035741683214LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	static volatile int16_t x94 = -4021;
	volatile int16_t x95 = INT16_MAX;
	int32_t x96 = INT32_MAX;
	int32_t t18 = -5881963;

	t18 = ((x93^x94)+(x95-x96));

	if (t18 != 28747) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MIN;
	int8_t x99 = -29;
	volatile uint16_t x100 = UINT16_MAX;
	uint32_t t19 = 16658568U;

	t19 = ((x97^x98)+(x99-x100));

	if (t19 != 2147418083U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x101 = 170910247LL;
	static int32_t x104 = INT32_MIN;
	int64_t t20 = 349LL;

	t20 = ((x101^x102)+(x103-x104));

	if (t20 != 1976573399LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x106 = 12U;
	int8_t x107 = INT8_MIN;
	int32_t x108 = 310863215;
	static uint32_t t21 = 94899107U;

	t21 = ((x105^x106)+(x107-x108));

	if (t21 != 3984102366U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 4858166U;
	int16_t x110 = -3;
	int16_t x111 = -1338;
	int16_t x112 = -1;
	uint32_t t22 = 31U;

	t22 = ((x109^x110)+(x111-x112));

	if (t22 != 4290107794U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x113 = INT32_MAX;
	uint8_t x114 = UINT8_MAX;
	volatile int16_t x115 = -1;
	uint32_t x116 = 50893433U;
	static uint32_t t23 = 190828U;

	t23 = ((x113^x114)+(x115-x116));

	if (t23 != 2096589958U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x118 = INT32_MAX;
	uint64_t x120 = 15563709809583LLU;
	volatile uint64_t t24 = 4604605137170LLU;

	t24 = ((x117^x118)+(x119-x120));

	if (t24 != 18446728507852258402LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = -1LL;
	static uint8_t x122 = 3U;
	uint8_t x123 = 14U;

	t25 = ((x121^x122)+(x123-x124));

	if (t25 != 11LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x129 = -1LL;
	int8_t x130 = -1;
	volatile uint16_t x131 = 12U;
	int32_t x132 = INT32_MAX;
	int64_t t26 = -8817739205181594LL;

	t26 = ((x129^x130)+(x131-x132));

	if (t26 != -2147483635LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x133 = 20U;
	uint32_t x134 = 29U;
	uint8_t x135 = 0U;
	static int16_t x136 = 3132;
	uint32_t t27 = 146104U;

	t27 = ((x133^x134)+(x135-x136));

	if (t27 != 4294964173U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 57LLU;
	int16_t x139 = -1;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t28 = 27633850452LLU;

	t28 = ((x137^x138)+(x139-x140));

	if (t28 != 9223372036854775877LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x141 = 729865534533881325LLU;
	static int8_t x142 = INT8_MAX;
	int8_t x144 = -1;
	uint64_t t29 = 42LLU;

	t29 = ((x141^x142)+(x143-x144));

	if (t29 != 729865534533881234LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 18;
	volatile int8_t x147 = INT8_MIN;
	uint64_t x148 = 67465963369LLU;
	uint64_t t30 = 1855404LLU;

	t30 = ((x145^x146)+(x147-x148));

	if (t30 != 18446744004096104489LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = UINT16_MAX;
	int16_t x154 = 1;
	int8_t x155 = INT8_MIN;
	int32_t x156 = 140;
	int32_t t31 = 135;

	t31 = ((x153^x154)+(x155-x156));

	if (t31 != 65266) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x159 = 1U;
	volatile int64_t x160 = -6LL;
	volatile int64_t t32 = -273340185575LL;

	t32 = ((x157^x158)+(x159-x160));

	if (t32 != -2147483635LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x169 = INT64_MIN;
	static int32_t x170 = -1;
	static uint64_t x171 = UINT64_MAX;
	volatile uint64_t t33 = 138LLU;

	t33 = ((x169^x170)+(x171-x172));

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x174 = -60405049513LL;
	uint8_t x176 = UINT8_MAX;
	volatile int64_t t34 = -2587842432269LL;

	t34 = ((x173^x174)+(x175-x176));

	if (t34 != 64149001815LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MIN;
	volatile int16_t x179 = INT16_MIN;
	volatile int16_t x180 = -1;
	volatile int64_t t35 = 13615LL;

	t35 = ((x177^x178)+(x179-x180));

	if (t35 != -32767LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = 29;
	int64_t x184 = -1LL;
	volatile int64_t t36 = 157482277766LL;

	t36 = ((x181^x182)+(x183-x184));

	if (t36 != 4294901790LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x185 = UINT64_MAX;
	uint32_t x187 = UINT32_MAX;
	static uint32_t x188 = 313U;
	volatile uint64_t t37 = 2000061663LLU;

	t37 = ((x185^x186)+(x187-x188));

	if (t37 != 4294966982LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x198 = -1;
	volatile int64_t x199 = 354LL;
	uint64_t x200 = 58304029LLU;

	t38 = ((x197^x198)+(x199-x200));

	if (t38 != 18446744073651247941LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x202 = 7U;
	int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t39 = -13345;

	t39 = ((x201^x202)+(x203-x204));

	if (t39 != 65783) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = INT8_MIN;
	volatile uint64_t x206 = 9856430366072676LLU;
	uint8_t x207 = 47U;
	uint8_t x208 = 40U;
	volatile uint64_t t40 = 216153555LLU;

	t40 = ((x205^x206)+(x207-x208));

	if (t40 != 18436887643343479019LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x217 = -1LL;
	uint32_t x218 = UINT32_MAX;
	volatile int32_t x219 = INT32_MIN;
	uint32_t x220 = 42683839U;
	static int64_t t41 = -12477985432046977LL;

	t41 = ((x217^x218)+(x219-x220));

	if (t41 != -2190167487LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x221 = 17U;
	volatile int8_t x222 = INT8_MAX;
	static uint16_t x224 = UINT16_MAX;
	volatile int32_t t42 = -15269733;

	t42 = ((x221^x222)+(x223-x224));

	if (t42 != -65424) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x233 = 8221390569918LLU;
	static int16_t x234 = 3600;
	int32_t x235 = -28;
	static int64_t x236 = -1LL;

	t43 = ((x233^x234)+(x235-x236));

	if (t43 != 8221390573459LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = INT64_MAX;
	int16_t x239 = 1067;
	int16_t x240 = 1;
	volatile int64_t t44 = 707903521298824LL;

	t44 = ((x237^x238)+(x239-x240));

	if (t44 != -9223372036854774615LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x241 = 88765545U;
	uint32_t x242 = 167336U;
	uint8_t x243 = 2U;
	uint8_t x244 = 0U;

	t45 = ((x241^x242)+(x243-x244));

	if (t45 != 88668611U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x249 = INT64_MIN;
	uint64_t x250 = 5273867001LLU;
	volatile int16_t x251 = -2;
	int64_t x252 = -7703614566356152LL;
	uint64_t t46 = 41025716097LLU;

	t46 = ((x249^x250)+(x251-x252));

	if (t46 != 9231075656694998959LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x255 = 1;
	int8_t x256 = INT8_MIN;

	t47 = ((x253^x254)+(x255-x256));

	if (t47 != 129LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x257 = 1913LLU;
	int32_t x258 = -3008;
	static uint8_t x259 = 1U;
	static int64_t x260 = -89254765900200LL;
	volatile uint64_t t48 = 553LLU;

	t48 = ((x257^x258)+(x259-x260));

	if (t48 != 89254765896930LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x265 = -1;
	int8_t x266 = INT8_MIN;
	static uint8_t x267 = 5U;
	uint32_t x268 = 7U;

	t49 = ((x265^x266)+(x267-x268));

	if (t49 != 125U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x277 = 57U;
	volatile int32_t x278 = -696226;
	uint32_t x279 = 12997U;
	int32_t x280 = INT32_MIN;

	t50 = ((x277^x278)+(x279-x280));

	if (t50 != 2146800428U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x285 = UINT32_MAX;
	uint16_t x286 = 502U;
	static int32_t x288 = -1;

	t51 = ((x285^x286)+(x287-x288));

	if (t51 != 3339U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x289 = UINT16_MAX;
	uint32_t x290 = UINT32_MAX;
	uint16_t x291 = 596U;

	t52 = ((x289^x290)+(x291-x292));

	if (t52 != 4294902351U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x293 = UINT16_MAX;
	int16_t x295 = 5;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t53 = -2599017;

	t53 = ((x293^x294)+(x295-x296));

	if (t53 != -2147385340) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x297 = -64665941667897203LL;
	volatile int32_t x299 = 468;
	int32_t x300 = 204982;

	t54 = ((x297^x298)+(x299-x300));

	if (t54 != 64665941667692587LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x301 = 1845508142U;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = -44616;
	static int32_t x304 = INT32_MIN;

	t55 = ((x301^x302)+(x303-x304));

	if (t55 != 301930889LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x305 = INT32_MIN;
	volatile int16_t x306 = INT16_MAX;
	static volatile int8_t x307 = 0;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t56 = 1258U;

	t56 = ((x305^x306)+(x307-x308));

	if (t56 != 2147516416U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x312 = INT16_MAX;
	volatile int32_t t57 = -1463;

	t57 = ((x309^x310)+(x311-x312));

	if (t57 != -33615) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x317 = UINT32_MAX;
	int64_t x318 = 24917631306731729LL;
	static int16_t x320 = 2;
	int64_t t58 = 1962368593539088LL;

	t58 = ((x317^x318)+(x319-x320));

	if (t58 != 24917634437967659LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MAX;
	volatile int64_t t59 = -828658LL;

	t59 = ((x321^x322)+(x323-x324));

	if (t59 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1388;
	static volatile uint16_t x328 = UINT16_MAX;
	uint64_t t60 = 361783LLU;

	t60 = ((x325^x326)+(x327-x328));

	if (t60 != 18446744073709484693LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x330 = -19398984;
	int16_t x331 = 4775;
	static int16_t x332 = INT16_MIN;
	static int32_t t61 = -8400712;

	t61 = ((x329^x330)+(x331-x332));

	if (t61 != 19436526) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x334 = INT32_MAX;
	static volatile uint64_t x335 = 2LLU;
	uint16_t x336 = 38U;
	volatile uint64_t t62 = 2125275747074802LLU;

	t62 = ((x333^x334)+(x335-x336));

	if (t62 != 2147478121LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x337 = 2690;
	static int8_t x338 = INT8_MAX;
	uint32_t x339 = 1818290180U;
	static int8_t x340 = INT8_MAX;
	uint32_t t63 = 192780627U;

	t63 = ((x337^x338)+(x339-x340));

	if (t63 != 1818292866U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x341 = UINT8_MAX;
	volatile int64_t x342 = INT64_MAX;
	static int16_t x343 = INT16_MIN;
	static volatile int8_t x344 = -1;

	t64 = ((x341^x342)+(x343-x344));

	if (t64 != 9223372036854742785LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x345 = 188837U;
	static int64_t x347 = -1LL;
	static int8_t x348 = 2;
	static volatile int64_t t65 = 3076432LL;

	t65 = ((x345^x346)+(x347-x348));

	if (t65 != 4294778402LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x349 = INT64_MIN;
	uint8_t x350 = 3U;
	int8_t x351 = -1;
	uint8_t x352 = 2U;
	static volatile int64_t t66 = INT64_MIN;

	t66 = ((x349^x350)+(x351-x352));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x353 = INT8_MIN;
	int8_t x355 = -1;
	int32_t t67 = -11941189;

	t67 = ((x353^x354)+(x355-x356));

	if (t67 != 1498) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x365 = INT64_MIN;
	int64_t x366 = -10771997LL;
	volatile uint16_t x367 = 1195U;
	int16_t x368 = -1;
	int64_t t68 = 1LL;

	t68 = ((x365^x366)+(x367-x368));

	if (t68 != 9223372036844005007LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x369 = UINT8_MAX;
	uint32_t x370 = 28695U;
	uint64_t x371 = 2862534483229070864LLU;
	int16_t x372 = INT16_MAX;
	volatile uint64_t t69 = 37538260304LLU;

	t69 = ((x369^x370)+(x371-x372));

	if (t69 != 2862534483229067001LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x373 = -1;
	volatile int8_t x375 = -1;
	volatile int16_t x376 = -1;
	volatile int32_t t70 = -248625321;

	t70 = ((x373^x374)+(x375-x376));

	if (t70 != -35) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x377 = INT32_MIN;
	uint64_t x378 = UINT64_MAX;
	uint32_t x379 = 128U;
	uint8_t x380 = UINT8_MAX;
	static volatile uint64_t t71 = 256106961159LLU;

	t71 = ((x377^x378)+(x379-x380));

	if (t71 != 6442450816LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x381 = -78223819LL;
	int32_t x382 = INT32_MAX;
	int32_t x383 = 4025115;
	volatile int32_t x384 = -1;

	t72 = ((x381^x382)+(x383-x384));

	if (t72 != -2065234714LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x390 = UINT32_MAX;
	int8_t x391 = -1;
	volatile uint32_t t73 = 1865U;

	t73 = ((x389^x390)+(x391-x392));

	if (t73 != 2147483189U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x394 = INT16_MIN;
	volatile int64_t t74 = -240669654LL;

	t74 = ((x393^x394)+(x395-x396));

	if (t74 != 2147450991LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x397 = -2;
	int64_t x398 = INT64_MAX;
	static uint64_t x399 = UINT64_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile uint64_t t75 = 8281628174721266LLU;

	t75 = ((x397^x398)+(x399-x400));

	if (t75 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x401 = -1LL;
	int64_t x403 = -415LL;
	int64_t x404 = -1LL;

	t76 = ((x401^x402)+(x403-x404));

	if (t76 != -414LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x406 = -5LL;
	uint16_t x407 = 45U;
	uint8_t x408 = UINT8_MAX;

	t77 = ((x405^x406)+(x407-x408));

	if (t77 != -206LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x410 = 30730714LL;
	int32_t x411 = -1;
	uint8_t x412 = 0U;
	volatile int64_t t78 = 4804LL;

	t78 = ((x409^x410)+(x411-x412));

	if (t78 != 1118781847LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x413 = -1;
	int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MIN;
	volatile int8_t x416 = -1;
	static int32_t t79 = 312161868;

	t79 = ((x413^x414)+(x415-x416));

	if (t79 != -32640) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x417 = 683227957U;
	int8_t x418 = INT8_MIN;
	uint32_t x419 = 10964385U;

	t80 = ((x417^x418)+(x419-x420));

	if (t80 != 3622638167U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x421 = 34186310690615630LLU;
	int32_t x422 = INT32_MIN;
	int32_t x423 = 188530;
	uint32_t x424 = UINT32_MAX;
	uint64_t t81 = 29LLU;

	t81 = ((x421^x422)+(x423-x424));

	if (t81 != 18412557762780729793LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x426 = -1;
	int16_t x427 = INT16_MIN;

	t82 = ((x425^x426)+(x427-x428));

	if (t82 != -32776LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x437 = 12;
	int16_t x438 = INT16_MIN;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = INT8_MIN;
	uint64_t t83 = 719841933185LLU;

	t83 = ((x437^x438)+(x439-x440));

	if (t83 != 18446744073709518987LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x442 = -5168394268081LL;
	int8_t x443 = INT8_MAX;
	volatile int16_t x444 = -1;
	volatile int64_t t84 = -247393577261332LL;

	t84 = ((x441^x442)+(x443-x444));

	if (t84 != -5168394267954LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = -5;

	t85 = ((x445^x446)+(x447-x448));

	if (t85 != 16023603LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x449 = INT64_MIN;
	volatile int64_t x450 = INT64_MIN;
	int64_t x451 = 29510734414LL;
	static uint64_t x452 = 18LLU;
	volatile uint64_t t86 = 75076LLU;

	t86 = ((x449^x450)+(x451-x452));

	if (t86 != 29510734396LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x453 = INT32_MIN;
	int64_t x454 = -1LL;
	volatile uint8_t x455 = 1U;
	volatile int32_t x456 = -1;
	static volatile int64_t t87 = 164495160986987LL;

	t87 = ((x453^x454)+(x455-x456));

	if (t87 != 2147483649LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x457 = -1;
	volatile int8_t x458 = INT8_MAX;
	static int32_t x459 = -1;
	int64_t x460 = -6411353578629LL;
	volatile int64_t t88 = 52864030538867LL;

	t88 = ((x457^x458)+(x459-x460));

	if (t88 != 6411353578500LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x461 = INT8_MIN;
	int8_t x463 = -1;
	volatile int32_t t89 = 27249882;

	t89 = ((x461^x462)+(x463-x464));

	if (t89 != -32896) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x469 = -1;
	int32_t x470 = INT32_MIN;
	static uint64_t x471 = 133461945035432612LLU;
	static uint64_t t90 = 316579054853320649LLU;

	t90 = ((x469^x470)+(x471-x472));

	if (t90 != 133461947182916260LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x473 = -1;
	int32_t x474 = 249;
	uint8_t x475 = UINT8_MAX;
	volatile uint32_t x476 = 56U;
	static uint32_t t91 = 2249U;

	t91 = ((x473^x474)+(x475-x476));

	if (t91 != 4294967245U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x477 = UINT32_MAX;
	int64_t x478 = INT64_MAX;
	volatile int64_t t92 = -1LL;

	t92 = ((x477^x478)+(x479-x480));

	if (t92 != 9223372032559808374LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x481 = UINT64_MAX;
	static int8_t x483 = INT8_MIN;
	static int8_t x484 = -15;
	uint64_t t93 = 10880003LLU;

	t93 = ((x481^x482)+(x483-x484));

	if (t93 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x485 = INT8_MAX;
	uint64_t x487 = 109LLU;
	volatile uint64_t t94 = 94664695155914LLU;

	t94 = ((x485^x486)+(x487-x488));

	if (t94 != 124LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x489 = INT16_MIN;
	int8_t x491 = INT8_MAX;
	int32_t x492 = -1;
	volatile int32_t t95 = 54;

	t95 = ((x489^x490)+(x491-x492));

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x495 = UINT32_MAX;
	int32_t x496 = INT32_MIN;
	uint32_t t96 = 13U;

	t96 = ((x493^x494)+(x495-x496));

	if (t96 != 2147483645U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x497 = UINT32_MAX;
	uint8_t x500 = 3U;
	uint32_t t97 = 13002396U;

	t97 = ((x497^x498)+(x499-x500));

	if (t97 != 4294934525U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x501 = 578;
	int8_t x502 = INT8_MAX;
	int8_t x503 = 0;
	int32_t x504 = INT32_MAX;

	t98 = ((x501^x502)+(x503-x504));

	if (t98 != -2147483074) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x509 = INT32_MIN;
	int32_t x510 = INT32_MIN;
	volatile int32_t x511 = -3523136;
	int32_t x512 = -1;
	volatile int32_t t99 = -48157;

	t99 = ((x509^x510)+(x511-x512));

	if (t99 != -3523135) { NG(); } else { ; }
	
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

