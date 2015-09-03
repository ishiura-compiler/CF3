#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 118713028011806554LLU;
int16_t x3 = 183;
volatile uint64_t t1 = 3393LLU;
uint64_t x15 = 219LLU;
static uint8_t x16 = 11U;
uint64_t t2 = 21994806469304866LLU;
volatile int64_t t3 = -749030LL;
int16_t x21 = 426;
int32_t x31 = INT32_MIN;
uint32_t x33 = UINT32_MAX;
uint64_t t7 = 3699589501086949LLU;
int32_t x52 = INT32_MIN;
static int16_t x54 = -1;
int32_t t11 = 99083;
static int64_t x58 = 11151LL;
int16_t x63 = -27;
static uint16_t x64 = UINT16_MAX;
static int16_t x66 = INT16_MAX;
int8_t x67 = -1;
uint16_t x68 = 2U;
uint32_t x69 = 46U;
static int32_t x71 = INT32_MIN;
static int32_t t16 = 13;
static uint16_t x91 = 4U;
int32_t x93 = INT32_MIN;
static int64_t x109 = -30285202384758762LL;
uint16_t x116 = 22874U;
static uint16_t x120 = 205U;
int64_t x122 = INT64_MIN;
static int16_t x133 = INT16_MIN;
static uint16_t x136 = 1U;
uint32_t t30 = 93U;
int32_t x149 = INT32_MAX;
int16_t x152 = INT16_MIN;
int8_t x154 = -1;
static uint8_t x164 = UINT8_MAX;
int8_t x166 = -1;
volatile uint32_t x187 = UINT32_MAX;
static int32_t x189 = -1;
uint64_t t39 = 1019886900LLU;
int64_t x198 = -879664LL;
uint32_t x202 = 881398298U;
static uint16_t x204 = UINT16_MAX;
uint32_t t41 = 102590064U;
int32_t x219 = INT32_MAX;
int16_t x220 = -1;
uint64_t x224 = 17177115311933LLU;
uint64_t t45 = 538833972224LLU;
volatile int32_t x225 = INT32_MIN;
uint32_t x232 = 1965961U;
static volatile int16_t x233 = -41;
uint8_t x237 = UINT8_MAX;
volatile int32_t x244 = -1;
volatile int16_t x252 = INT16_MIN;
int8_t x259 = -1;
uint64_t t53 = 255LLU;
int64_t x265 = INT64_MIN;
static volatile uint64_t t56 = 137813428LLU;
uint64_t x286 = UINT64_MAX;
uint64_t x293 = 4769346933LLU;
uint16_t x298 = 4U;
static int8_t x311 = -32;
int64_t x313 = -1LL;
volatile uint32_t x320 = 1932368325U;
uint8_t x323 = 10U;
volatile int64_t x324 = INT64_MIN;
int64_t t70 = -52185772499677LL;
uint64_t x341 = 1884467LLU;
static int64_t x345 = 25LL;
static int32_t x352 = -4483;
uint16_t x357 = 18U;
static int32_t x360 = 118714;
int32_t t77 = 2838;
int64_t x365 = -355LL;
static uint64_t x370 = 6823174024LLU;
int64_t x371 = INT64_MIN;
int64_t x372 = -1LL;
int16_t x376 = -1;
int64_t x382 = 84329612649LL;
uint64_t x388 = UINT64_MAX;
static uint16_t x393 = 7041U;
int8_t x395 = INT8_MIN;
int32_t x398 = INT32_MAX;
int64_t x407 = 0LL;
uint8_t x409 = 13U;
uint8_t x424 = UINT8_MAX;
int64_t t91 = -94620541113008LL;
volatile uint64_t x427 = UINT64_MAX;
static int32_t x428 = -1;
static int8_t x451 = INT8_MAX;
uint16_t x453 = 237U;
static int8_t x454 = 0;
static int32_t x463 = INT32_MIN;
static volatile int8_t x464 = INT8_MIN;
volatile int32_t t99 = -56;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static volatile int64_t x4 = INT64_MIN;
	static uint64_t t0 = 12343928918170304LLU;

	t0 = ((x1&(x2^x3))*x4);

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1933031919LLU;
	volatile int32_t x6 = INT32_MIN;
	int32_t x7 = -1;
	static int64_t x8 = -1LL;

	t1 = ((x5&(x6^x7))*x8);

	if (t1 != 18446744071776519697LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x13 = UINT64_MAX;
	int32_t x14 = INT32_MAX;

	t2 = ((x13&(x14^x15))*x16);

	if (t2 != 23622317708LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 671;
	int16_t x18 = -1;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = UINT16_MAX;

	t3 = ((x17&(x18^x19))*x20);

	if (t3 != 43973985LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	static int8_t x23 = 2;
	static uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 478592742505843306LLU;

	t4 = ((x21&(x22^x23))*x24);

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 263U;
	int64_t x26 = INT64_MIN;
	static int32_t x27 = -48871174;
	uint32_t x28 = UINT32_MAX;
	volatile int64_t t5 = -335410LL;

	t5 = ((x25&(x26^x27))*x28);

	if (t5 != 8589934590LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	volatile uint64_t x30 = 9219686LLU;
	uint8_t x32 = 2U;
	static volatile uint64_t t6 = 203385248752582LLU;

	t6 = ((x29&(x30^x31))*x32);

	if (t6 != 18439372LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x34 = 349LLU;
	uint64_t x35 = 109LLU;
	uint64_t x36 = 10711897LLU;

	t7 = ((x33&(x34^x35))*x36);

	if (t7 != 3256416688LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	static uint16_t x42 = 313U;
	int8_t x43 = -4;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t8 = 10366;

	t8 = ((x41&(x42^x43))*x44);

	if (t8 != -80325) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 392147U;
	int32_t x46 = INT32_MAX;
	static int32_t x47 = INT32_MAX;
	volatile uint64_t x48 = UINT64_MAX;
	volatile uint64_t t9 = 15LLU;

	t9 = ((x45&(x46^x47))*x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -38;
	volatile uint64_t x50 = 43215LLU;
	uint16_t x51 = 6U;
	volatile uint64_t t10 = 68091563723129LLU;

	t10 = ((x49&(x50^x51))*x52);

	if (t10 != 18446651285236088832LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = INT16_MAX;
	int8_t x55 = INT8_MIN;
	volatile int8_t x56 = -2;

	t11 = ((x53&(x54^x55))*x56);

	if (t11 != -254) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	int32_t x59 = -820738;
	volatile int8_t x60 = INT8_MIN;
	int64_t t12 = 29416LL;

	t12 = ((x57&(x58^x59))*x60);

	if (t12 != 106350464LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x61 = 22001622U;
	volatile uint16_t x62 = 22167U;
	uint32_t t13 = 101187327U;

	t13 = ((x61&(x62^x63))*x64);

	if (t13 != 2684509870U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = INT8_MAX;
	int32_t t14 = 1109247;

	t14 = ((x65&(x66^x67))*x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = INT8_MAX;
	int64_t x72 = -54938296133LL;
	static int64_t t15 = 28606711522LL;

	t15 = ((x69&(x70^x71))*x72);

	if (t15 != -2527161622118LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = 2;
	int8_t x87 = -10;
	static int16_t x88 = -1;

	t16 = ((x85&(x86^x87))*x88);

	if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x89 = -1LL;
	static uint64_t x90 = 1734LLU;
	uint16_t x92 = 5U;
	volatile uint64_t t17 = 2742LLU;

	t17 = ((x89&(x90^x91))*x92);

	if (t17 != 8650LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x94 = -1;
	int32_t x95 = -1;
	int32_t x96 = -1;
	int32_t t18 = -1397239;

	t18 = ((x93&(x94^x95))*x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = UINT32_MAX;
	uint32_t x99 = UINT32_MAX;
	int8_t x100 = -24;
	int64_t t19 = -3551LL;

	t19 = ((x97&(x98^x99))*x100);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MIN;
	uint16_t x102 = UINT16_MAX;
	static uint16_t x103 = 25757U;
	int8_t x104 = -1;
	volatile int32_t t20 = 6815286;

	t20 = ((x101&(x102^x103))*x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x105 = INT8_MAX;
	int64_t x106 = 215502LL;
	volatile int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MIN;
	static int64_t t21 = -117442LL;

	t21 = ((x105&(x106^x107))*x108);

	if (t21 != -167503724544LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x110 = UINT8_MAX;
	static int32_t x111 = INT32_MIN;
	uint16_t x112 = 22U;
	static volatile int64_t t22 = 47469487LL;

	t22 = ((x109&(x110^x111))*x112);

	if (t22 != -666274484172357148LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x113 = 10377U;
	int32_t x114 = 14132356;
	volatile uint16_t x115 = 36U;
	volatile int32_t t23 = -78793;

	t23 = ((x113&(x114^x115))*x116);

	if (t23 != 190311680) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 3008U;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	static uint32_t t24 = 2272U;

	t24 = ((x117&(x118^x119))*x120);

	if (t24 != 603520U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -1;
	int64_t x123 = 3114LL;
	int8_t x124 = -1;
	volatile int64_t t25 = -10907910132676422LL;

	t25 = ((x121&(x122^x123))*x124);

	if (t25 != 9223372036854772694LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = 276;
	int8_t x126 = INT8_MIN;
	int8_t x127 = -5;
	int32_t x128 = -804;
	int32_t t26 = 10;

	t26 = ((x125&(x126^x127))*x128);

	if (t26 != -12864) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x134 = INT32_MIN;
	volatile int64_t x135 = 3637244431164433561LL;
	volatile int64_t t27 = 141515673893LL;

	t27 = ((x133&(x134^x135))*x136);

	if (t27 != -3637244433015865344LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = -1;
	volatile int16_t x139 = -1;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t28 = 55635155;

	t28 = ((x137&(x138^x139))*x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 30444739U;
	int8_t x142 = 3;
	int32_t x143 = 984843;
	static int16_t x144 = -13;
	volatile uint32_t t29 = 4451U;

	t29 = ((x141&(x142^x143))*x144);

	if (t29 != 4294953984U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = -1;
	int8_t x147 = -6;
	static int32_t x148 = -32063622;

	t30 = ((x145&(x146^x147))*x148);

	if (t30 != 4134649186U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x150 = INT32_MAX;
	int16_t x151 = -81;
	volatile int32_t t31 = -5032;

	t31 = ((x149&(x150^x151))*x152);

	if (t31 != -2621440) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 1U;
	volatile uint16_t x155 = UINT16_MAX;
	static int16_t x156 = -1;
	int32_t t32 = 9955;

	t32 = ((x153&(x154^x155))*x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x157 = -11582;
	int16_t x158 = -183;
	volatile int8_t x159 = -1;
	int32_t x160 = -314509;
	static int32_t t33 = 780760;

	t33 = ((x157&(x158^x159))*x160);

	if (t33 != -40886170) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = INT16_MIN;
	volatile int8_t x162 = 9;
	int16_t x163 = INT16_MIN;
	static int32_t t34 = 939326;

	t34 = ((x161&(x162^x163))*x164);

	if (t34 != -8355840) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = -1LL;
	int64_t x167 = -1LL;
	int64_t x168 = INT64_MIN;
	int64_t t35 = 29273LL;

	t35 = ((x165&(x166^x167))*x168);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 8U;
	static uint16_t x170 = UINT16_MAX;
	static volatile int8_t x171 = -1;
	volatile uint16_t x172 = 188U;
	int32_t t36 = 776;

	t36 = ((x169&(x170^x171))*x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MIN;
	volatile int8_t x174 = 0;
	static volatile int64_t x175 = INT64_MAX;
	volatile int64_t x176 = INT64_MIN;
	int64_t t37 = -7LL;

	t37 = ((x173&(x174^x175))*x176);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = -10177;
	int8_t x186 = INT8_MAX;
	uint64_t x188 = UINT64_MAX;
	static volatile uint64_t t38 = 463854242LLU;

	t38 = ((x185&(x186^x187))*x188);

	if (t38 != 18446744069414594560LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x190 = 90U;
	uint64_t x191 = 203LLU;
	int16_t x192 = -1;

	t39 = ((x189&(x190^x191))*x192);

	if (t39 != 18446744073709551471LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x199 = INT16_MAX;
	int16_t x200 = INT16_MIN;
	int64_t t40 = 38057641LL;

	t40 = ((x197&(x198^x199))*x200);

	if (t40 != -140709404835840LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = INT32_MIN;
	int16_t x203 = INT16_MIN;

	t41 = ((x201&(x202^x203))*x204);

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = 17;
	volatile int16_t x206 = -6;
	int64_t x207 = INT64_MIN;
	int64_t x208 = -497395LL;
	int64_t t42 = -281603479LL;

	t42 = ((x205&(x206^x207))*x208);

	if (t42 != -7958320LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = -1;
	int32_t x215 = -6;
	static int8_t x216 = 3;
	int32_t t43 = -16234;

	t43 = ((x213&(x214^x215))*x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x217 = INT16_MIN;
	int64_t x218 = 31416192325377LL;
	volatile int64_t t44 = -636052332LL;

	t44 = ((x217&(x218^x219))*x220);

	if (t44 != -31417031720960LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = -104659;
	int16_t x222 = -14;
	uint64_t x223 = UINT64_MAX;

	t45 = ((x221&(x222^x223))*x224);

	if (t45 != 223302499055129LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x226 = -1;
	int64_t x227 = -1LL;
	int16_t x228 = 21;
	int64_t t46 = -3235733398LL;

	t46 = ((x225&(x226^x227))*x228);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = UINT16_MAX;
	int32_t x230 = INT32_MIN;
	volatile int64_t x231 = 85782844LL;
	volatile int64_t t47 = 3LL;

	t47 = ((x229&(x230^x231))*x232);

	if (t47 != 121409887516LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x234 = -1LL;
	int32_t x235 = INT32_MIN;
	static volatile int32_t x236 = -1;
	int64_t t48 = -2792437007935LL;

	t48 = ((x233&(x234^x235))*x236);

	if (t48 != -2147483607LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	static int16_t x240 = -25;
	volatile int64_t t49 = -8789181202820LL;

	t49 = ((x237&(x238^x239))*x240);

	if (t49 != -6375LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = INT64_MIN;
	static int16_t x242 = -2;
	int64_t x243 = -351542087LL;
	int64_t t50 = -7248877145569LL;

	t50 = ((x241&(x242^x243))*x244);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = -25;
	uint32_t x250 = 992U;
	int8_t x251 = INT8_MAX;
	static uint32_t t51 = 165709U;

	t51 = ((x249&(x250^x251))*x252);

	if (t51 != 4265377792U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MAX;
	static int64_t x254 = 1LL;
	uint64_t x255 = 942209LLU;
	int8_t x256 = INT8_MIN;
	static uint64_t t52 = 17LLU;

	t52 = ((x253&(x254^x255))*x256);

	if (t52 != 18446744073706389504LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = 3LLU;
	volatile uint8_t x258 = UINT8_MAX;
	static uint64_t x260 = UINT64_MAX;

	t53 = ((x257&(x258^x259))*x260);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = 1;
	static uint32_t x263 = 1918192960U;
	static int64_t x264 = -1LL;
	static volatile int64_t t54 = -58745549567033124LL;

	t54 = ((x261&(x262^x263))*x264);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x266 = 41202509206LLU;
	int64_t x267 = INT64_MAX;
	static int16_t x268 = -470;
	uint64_t t55 = 3000451615522013612LLU;

	t55 = ((x265&(x266^x267))*x268);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = 0;
	int16_t x270 = -1;
	static uint64_t x271 = 625951LLU;
	int64_t x272 = 10143608LL;

	t56 = ((x269&(x270^x271))*x272);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x273 = UINT32_MAX;
	static volatile uint8_t x274 = 1U;
	int16_t x275 = INT16_MIN;
	static int32_t x276 = -623937875;
	volatile uint32_t t57 = 2778U;

	t57 = ((x273&(x274^x275))*x276);

	if (t57 != 528021165U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = 33;
	volatile int8_t x282 = -1;
	int64_t x283 = -63890043LL;
	int16_t x284 = INT16_MIN;
	int64_t t58 = 1488956212989LL;

	t58 = ((x281&(x282^x283))*x284);

	if (t58 != -1048576LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x285 = UINT8_MAX;
	uint32_t x287 = UINT32_MAX;
	static int64_t x288 = INT64_MAX;
	uint64_t t59 = 2034506794362258350LLU;

	t59 = ((x285&(x286^x287))*x288);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x289 = 80444025LLU;
	uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = INT8_MAX;
	volatile int64_t x292 = INT64_MIN;
	volatile uint64_t t60 = 9554727LLU;

	t60 = ((x289&(x290^x291))*x292);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x294 = INT32_MIN;
	static int8_t x295 = -1;
	uint16_t x296 = 8U;
	volatile uint64_t t61 = 53199639596212LLU;

	t61 = ((x293&(x294^x295))*x296);

	if (t61 != 3795037096LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = -1;
	int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MAX;
	volatile int32_t t62 = 831;

	t62 = ((x297&(x298^x299))*x300);

	if (t62 != -4063108) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 28650U;
	uint16_t x302 = 12U;
	int64_t x303 = 8493289432LL;
	int64_t x304 = 19285261019029LL;
	static int64_t t63 = -1736LL;

	t63 = ((x301&(x302^x303))*x304);

	if (t63 != 393727888964496064LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = 43U;
	uint8_t x307 = 1U;
	static volatile int32_t x308 = INT32_MIN;
	int32_t t64 = 223232;

	t64 = ((x305&(x306^x307))*x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x309 = 1U;
	int64_t x310 = INT64_MIN;
	int64_t x312 = INT64_MAX;
	int64_t t65 = -3LL;

	t65 = ((x309&(x310^x311))*x312);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x314 = INT8_MIN;
	int16_t x315 = -3540;
	static int8_t x316 = 2;
	int64_t t66 = -176088254234LL;

	t66 = ((x313&(x314^x315))*x316);

	if (t66 != 7000LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x318 = INT64_MAX;
	int64_t x319 = -1LL;
	volatile uint64_t t67 = 989130394567LLU;

	t67 = ((x317&(x318^x319))*x320);

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x322 = -1LL;
	volatile uint64_t t68 = 67803356850509948LLU;

	t68 = ((x321&(x322^x323))*x324);

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = INT64_MIN;
	uint64_t x327 = 69328815LLU;
	int64_t x328 = -1LL;
	uint64_t t69 = 216931024170569LLU;

	t69 = ((x325&(x326^x327))*x328);

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = -62207LL;
	int8_t x332 = -1;

	t70 = ((x329&(x330^x331))*x332);

	if (t70 != -254LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x333 = 42406LL;
	uint8_t x334 = 3U;
	volatile uint32_t x335 = 271853U;
	volatile int8_t x336 = INT8_MIN;
	int64_t t71 = 156265454102908234LL;

	t71 = ((x333&(x334^x335))*x336);

	if (t71 != -1233664LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x337 = INT16_MAX;
	uint16_t x338 = UINT16_MAX;
	static uint64_t x339 = 4603372253LLU;
	static int8_t x340 = 42;
	volatile uint64_t t72 = 327583038550LLU;

	t72 = ((x337&(x338^x339))*x340);

	if (t72 != 313236LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x342 = 12;
	int32_t x343 = -1;
	volatile uint8_t x344 = UINT8_MAX;
	uint64_t t73 = 0LLU;

	t73 = ((x341&(x342^x343))*x344);

	if (t73 != 480539085LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x346 = INT8_MIN;
	uint32_t x347 = 3U;
	volatile int64_t x348 = INT64_MIN;
	int64_t t74 = INT64_MIN;

	t74 = ((x345&(x346^x347))*x348);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = -35653;
	volatile int8_t x350 = INT8_MAX;
	int64_t x351 = 3LL;
	volatile int64_t t75 = 4194888456632LL;

	t75 = ((x349&(x350^x351))*x352);

	if (t75 != -251048LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int64_t x354 = -1LL;
	int16_t x355 = -390;
	int16_t x356 = INT16_MIN;
	static volatile int64_t t76 = -94407807396LL;

	t76 = ((x353&(x354^x355))*x356);

	if (t76 != -4358144LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MIN;

	t77 = ((x357&(x358^x359))*x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x366 = 11U;
	int64_t x367 = INT64_MAX;
	uint64_t x368 = 5026536633698399525LLU;
	uint64_t t78 = 12983LLU;

	t78 = ((x365&(x366^x367))*x368);

	if (t78 != 5791700667882958692LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = UINT64_MAX;
	uint64_t t79 = 42561171342115819LLU;

	t79 = ((x369&(x370^x371))*x372);

	if (t79 != 9223372030031601784LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x373 = -173;
	static int32_t x374 = INT32_MIN;
	volatile int64_t x375 = -1LL;
	int64_t t80 = -780439971453263LL;

	t80 = ((x373&(x374^x375))*x376);

	if (t80 != -2147483475LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 647747U;
	int64_t x379 = -1LL;
	int8_t x380 = -1;
	int64_t t81 = -4123982356877060053LL;

	t81 = ((x377&(x378^x379))*x380);

	if (t81 != -4294319548LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = 0;
	volatile uint16_t x383 = UINT16_MAX;
	static volatile uint8_t x384 = UINT8_MAX;
	int64_t t82 = -16964932818539918LL;

	t82 = ((x381&(x382^x383))*x384);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = INT64_MIN;
	uint8_t x386 = UINT8_MAX;
	static int64_t x387 = INT64_MAX;
	volatile uint64_t t83 = 1182174803292132LLU;

	t83 = ((x385&(x386^x387))*x388);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = INT8_MIN;
	static int8_t x390 = -1;
	int16_t x391 = -1;
	static int8_t x392 = INT8_MIN;
	int32_t t84 = 27766050;

	t84 = ((x389&(x390^x391))*x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x394 = -1;
	static volatile uint16_t x396 = 5U;
	static int32_t t85 = 122;

	t85 = ((x393&(x394^x395))*x396);

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x397 = UINT8_MAX;
	volatile uint16_t x399 = 25888U;
	volatile uint32_t x400 = 98442575U;
	volatile uint32_t t86 = 11238U;

	t86 = ((x397&(x398^x399))*x400);

	if (t86 != 477857745U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x401 = INT64_MAX;
	int16_t x402 = -1;
	volatile uint64_t x403 = 1761750625LLU;
	int8_t x404 = 2;
	uint64_t t87 = 33282976977LLU;

	t87 = ((x401&(x402^x403))*x404);

	if (t87 != 18446744070186050364LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x405 = INT8_MAX;
	int16_t x406 = INT16_MIN;
	static uint8_t x408 = 1U;
	int64_t t88 = -16422708LL;

	t88 = ((x405&(x406^x407))*x408);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x410 = INT8_MIN;
	static uint16_t x411 = 93U;
	uint32_t x412 = 3919161U;
	uint32_t t89 = 19012U;

	t89 = ((x409&(x410^x411))*x412);

	if (t89 != 50949093U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MAX;
	int16_t x419 = -2532;
	static int16_t x420 = 1;
	int64_t t90 = INT64_MIN;

	t90 = ((x417&(x418^x419))*x420);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x421 = 22LL;
	int8_t x422 = 0;
	int32_t x423 = INT32_MIN;

	t91 = ((x421&(x422^x423))*x424);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = 103081007151951LL;
	int32_t x426 = INT32_MAX;
	volatile uint64_t t92 = 45979LLU;

	t92 = ((x425&(x426^x427))*x428);

	if (t92 != 18446640994494447616LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = 12;
	int64_t x430 = INT64_MAX;
	static uint64_t x431 = 43802967LLU;
	volatile int32_t x432 = -1;
	volatile uint64_t t93 = 1058317722970926LLU;

	t93 = ((x429&(x430^x431))*x432);

	if (t93 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = INT32_MAX;
	int16_t x438 = INT16_MAX;
	int64_t x439 = 4198046258106225499LL;
	int8_t x440 = 0;
	int64_t t94 = -4191575LL;

	t94 = ((x437&(x438^x439))*x440);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x445 = -1;
	uint16_t x446 = 12115U;
	uint16_t x447 = 73U;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t95 = 0;

	t95 = ((x445&(x446^x447))*x448);

	if (t95 != 3074790) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x449 = 943;
	int32_t x450 = INT32_MIN;
	int8_t x452 = 30;
	int32_t t96 = 118;

	t96 = ((x449&(x450^x451))*x452);

	if (t96 != 1410) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x455 = 86U;
	volatile uint16_t x456 = 8U;
	volatile int32_t t97 = 8863030;

	t97 = ((x453&(x454^x455))*x456);

	if (t97 != 544) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x457 = -8121202551LL;
	int32_t x458 = INT32_MIN;
	static uint32_t x459 = 42900906U;
	volatile int32_t x460 = -1;
	volatile int64_t t98 = -400119LL;

	t98 = ((x457&(x458^x459))*x460);

	if (t98 != -41945224LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x461 = 123;
	uint8_t x462 = 2U;

	t99 = ((x461&(x462^x463))*x464);

	if (t99 != -256) { NG(); } else { ; }
	
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

