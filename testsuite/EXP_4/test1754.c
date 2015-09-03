#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 14711U;
volatile int64_t t0 = 0LL;
volatile int32_t t3 = -62;
static volatile uint16_t x36 = UINT16_MAX;
int32_t x46 = -1;
static uint8_t x47 = UINT8_MAX;
static volatile int64_t t6 = 13775076324LL;
int32_t x57 = INT32_MIN;
uint16_t x62 = UINT16_MAX;
int8_t x77 = 0;
int16_t x85 = -1;
uint8_t x86 = 62U;
volatile uint64_t t16 = UINT64_MAX;
int64_t x90 = INT64_MIN;
volatile int32_t x92 = INT32_MAX;
int64_t t17 = 189982780LL;
static int32_t x95 = INT32_MIN;
static uint64_t t18 = UINT64_MAX;
volatile uint64_t t19 = 833785267936196LLU;
int8_t x103 = INT8_MIN;
int64_t x115 = INT64_MIN;
uint16_t x117 = 14535U;
int8_t x120 = INT8_MIN;
uint32_t x121 = UINT32_MAX;
static uint32_t x122 = 1822801411U;
volatile int32_t x128 = -6598;
volatile int16_t x130 = INT16_MIN;
volatile uint32_t x132 = 214U;
int32_t x140 = 25932453;
volatile int32_t x141 = INT32_MAX;
volatile uint64_t t28 = 71331459781LLU;
int64_t x157 = INT64_MIN;
int16_t x162 = 123;
volatile int8_t x165 = INT8_MIN;
static int64_t t33 = 18082100356509LL;
static int64_t x179 = 11323509169172LL;
int32_t t35 = 460;
int64_t x190 = -109074984443474641LL;
static int64_t t38 = -36LL;
int8_t x202 = INT8_MAX;
uint64_t x203 = 201570215656400LLU;
volatile uint8_t x204 = 80U;
uint64_t t40 = 56092380876875LLU;
volatile uint64_t x205 = 126024708173649985LLU;
volatile uint64_t t41 = 7561167LLU;
volatile int8_t x215 = INT8_MIN;
uint64_t x218 = UINT64_MAX;
int16_t x220 = INT16_MIN;
uint64_t t44 = UINT64_MAX;
int64_t x222 = 1317110LL;
uint8_t x229 = UINT8_MAX;
uint64_t x230 = UINT64_MAX;
volatile uint64_t t47 = 133663011799565252LLU;
int8_t x235 = -1;
volatile uint64_t t49 = 301656597772LLU;
static uint32_t x259 = UINT32_MAX;
volatile int32_t x260 = INT32_MAX;
uint64_t x263 = 277778290999LLU;
static uint16_t x264 = 449U;
int16_t x277 = INT16_MIN;
int32_t x278 = 60760567;
int64_t t57 = 2325576LL;
uint16_t x285 = 3U;
int8_t x335 = INT8_MAX;
int8_t x341 = INT8_MIN;
int32_t t66 = 1;
volatile int64_t x359 = -1LL;
uint32_t x360 = UINT32_MAX;
uint16_t x366 = 1035U;
int64_t t71 = 431282LL;
int32_t x375 = -1;
uint16_t x384 = 216U;
int64_t t76 = -5286598969LL;
int32_t x401 = -5410;
static uint16_t x403 = 28U;
int8_t x415 = -1;
int16_t x418 = -125;
int8_t x421 = 9;
int16_t x425 = INT16_MIN;
volatile int64_t x434 = INT64_MIN;
int16_t x436 = INT16_MIN;
volatile int64_t t86 = 11908LL;
int16_t x440 = INT16_MIN;
int16_t x447 = 946;
volatile uint64_t x454 = 297038849192LLU;
uint64_t x456 = 7LLU;
volatile int64_t x460 = INT64_MIN;
volatile int64_t t92 = 364637411LL;
uint32_t x464 = 10575U;
uint8_t x472 = 31U;
uint32_t x473 = UINT32_MAX;
static volatile int16_t x488 = INT16_MIN;
uint32_t t98 = UINT32_MAX;
int16_t x489 = INT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int8_t x3 = -13;
	int64_t x4 = -1LL;

	t0 = (x1|(x2%(x3&x4)));

	if (t0 != -2147483640LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	uint32_t x6 = 15135301U;
	int32_t x7 = -34309;
	int16_t x8 = -1;
	static volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5|(x6%(x7&x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	static uint32_t x10 = 161U;
	int32_t x11 = INT32_MIN;
	volatile int16_t x12 = -1;
	int64_t t2 = INT64_MAX;

	t2 = (x9|(x10%(x11&x12)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	volatile int8_t x22 = INT8_MIN;
	uint8_t x23 = UINT8_MAX;
	volatile int16_t x24 = INT16_MAX;

	t3 = (x21|(x22%(x23&x24)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x33 = 1U;
	static volatile int32_t x34 = INT32_MIN;
	int64_t x35 = -1LL;
	int64_t t4 = 69844026879266LL;

	t4 = (x33|(x34%(x35&x36)));

	if (t4 != -32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = 109338U;
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	volatile int64_t x44 = INT64_MIN;
	volatile int64_t t5 = 5849436LL;

	t5 = (x41|(x42%(x43&x44)));

	if (t5 != -102LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = INT32_MAX;
	int64_t x48 = -1LL;

	t6 = (x45|(x46%(x47&x48)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x49 = 1299U;
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t7 = -34212455;

	t7 = (x49|(x50%(x51&x52)));

	if (t7 != 1407) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x53 = INT8_MAX;
	static int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MAX;
	int32_t x56 = INT32_MAX;
	static volatile int32_t t8 = 175712832;

	t8 = (x53|(x54%(x55&x56)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x58 = 1U;
	volatile uint64_t x59 = UINT64_MAX;
	int32_t x60 = -28010;
	uint64_t t9 = 16970LLU;

	t9 = (x57|(x58%(x59&x60)));

	if (t9 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x61 = INT8_MIN;
	int64_t x63 = 30278157365LL;
	static volatile int8_t x64 = INT8_MIN;
	volatile int64_t t10 = -533204141641LL;

	t10 = (x61|(x62%(x63&x64)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x65 = -8;
	int16_t x66 = 5628;
	static int64_t x67 = INT64_MAX;
	uint16_t x68 = 58U;
	static volatile int64_t t11 = 7739LL;

	t11 = (x65|(x66%(x67&x68)));

	if (t11 != -6LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x69 = -11;
	static uint8_t x70 = UINT8_MAX;
	volatile int16_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t12 = -1;

	t12 = (x69|(x70%(x71&x72)));

	if (t12 != -11) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	int64_t t13 = 11284LL;

	t13 = (x73|(x74%(x75&x76)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x78 = INT32_MIN;
	uint16_t x79 = 12U;
	int32_t x80 = INT32_MAX;
	int32_t t14 = -4619826;

	t14 = (x77|(x78%(x79&x80)));

	if (t14 != -8) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x81 = 0;
	static volatile uint32_t x82 = 24U;
	static int8_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	uint64_t t15 = 22478LLU;

	t15 = (x81|(x82%(x83&x84)));

	if (t15 != 24LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x87 = INT8_MIN;
	static volatile uint64_t x88 = 241974801LLU;

	t16 = (x85|(x86%(x87&x88)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 3U;
	int8_t x91 = -1;

	t17 = (x89|(x90%(x91&x92)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = -1;
	static uint64_t x94 = 140LLU;
	static int32_t x96 = -1;

	t18 = (x93|(x94%(x95&x96)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 16857294898393414LLU;
	int32_t x98 = INT32_MAX;
	int64_t x99 = -1856LL;
	volatile int64_t x100 = INT64_MIN;

	t19 = (x97|(x98%(x99&x100)));

	if (t19 != 16857295665233919LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MAX;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x101|(x102%(x103&x104)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = 29808463149LLU;
	uint32_t x114 = 307U;
	int16_t x116 = -6980;
	uint64_t t21 = 6883797125179586444LLU;

	t21 = (x113|(x114%(x115&x116)));

	if (t21 != 29808463167LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = -1;
	int64_t x119 = INT64_MAX;
	volatile int64_t t22 = -470553891471LL;

	t22 = (x117|(x118%(x119&x120)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x123 = 26U;
	volatile int32_t x124 = INT32_MAX;
	static uint32_t t23 = UINT32_MAX;

	t23 = (x121|(x122%(x123&x124)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = -1LL;
	int8_t x127 = -1;
	int64_t t24 = -618902LL;

	t24 = (x125|(x126%(x127&x128)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = -29;
	uint8_t x131 = 36U;
	uint32_t t25 = 5203U;

	t25 = (x129|(x130%(x131&x132)));

	if (t25 != 4294967267U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MAX;
	static int16_t x138 = 850;
	static volatile uint32_t x139 = UINT32_MAX;
	static uint32_t t26 = 289U;

	t26 = (x137|(x138%(x139&x140)));

	if (t26 != 895U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x142 = 3U;
	int16_t x143 = -1;
	uint8_t x144 = 11U;
	volatile int32_t t27 = INT32_MAX;

	t27 = (x141|(x142%(x143&x144)));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = 14488525LLU;
	static volatile int8_t x146 = 51;
	int8_t x147 = -1;
	uint32_t x148 = UINT32_MAX;

	t28 = (x145|(x146%(x147&x148)));

	if (t28 != 14488575LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = INT64_MIN;
	static int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	static int64_t t29 = 356133928188LL;

	t29 = (x149|(x150%(x151&x152)));

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = -1;
	int8_t x154 = -1;
	int64_t x155 = INT64_MAX;
	uint32_t x156 = 119U;
	static int64_t t30 = 40LL;

	t30 = (x153|(x154%(x155&x156)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x158 = UINT64_MAX;
	uint16_t x159 = 80U;
	volatile uint32_t x160 = UINT32_MAX;
	volatile uint64_t t31 = 5969375933407LLU;

	t31 = (x157|(x158%(x159&x160)));

	if (t31 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = 33098265U;
	int32_t x163 = INT32_MAX;
	int8_t x164 = 49;
	uint32_t t32 = 340674737U;

	t32 = (x161|(x162%(x163&x164)));

	if (t32 != 33098265U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;

	t33 = (x165|(x166%(x167&x168)));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 5U;
	uint64_t x180 = 389445LLU;
	volatile uint64_t t34 = 11176520354LLU;

	t34 = (x177|(x178%(x179&x180)));

	if (t34 != 255LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x181 = INT16_MAX;
	static int16_t x182 = INT16_MAX;
	static int32_t x183 = -2765;
	int32_t x184 = INT32_MIN;

	t35 = (x181|(x182%(x183&x184)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = -995683806;
	uint16_t x186 = 156U;
	uint64_t x187 = 23552901952825533LLU;
	int64_t x188 = 503274479402172LL;
	volatile uint64_t t36 = 135553000318548LLU;

	t36 = (x185|(x186%(x187&x188)));

	if (t36 != 18446744072713867966LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = 19;
	int32_t x191 = 52;
	int16_t x192 = -2;
	int64_t t37 = 15LL;

	t37 = (x189|(x190%(x191&x192)));

	if (t37 != -33LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x193 = -45191679;
	volatile int64_t x194 = -16644458739898472LL;
	uint32_t x195 = 352716U;
	int8_t x196 = INT8_MAX;

	t38 = (x193|(x194%(x195&x196)));

	if (t38 != -51LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = INT32_MAX;
	uint8_t x198 = UINT8_MAX;
	uint32_t x199 = 18U;
	uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t39 = 102023804718280424LLU;

	t39 = (x197|(x198%(x199&x200)));

	if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = 2;

	t40 = (x201|(x202%(x203&x204)));

	if (t40 != 47LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x206 = INT64_MAX;
	volatile uint64_t x207 = 535002011562621LLU;
	int32_t x208 = INT32_MAX;

	t41 = (x205|(x206%(x207&x208)));

	if (t41 != 126024708513529539LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x209 = -1;
	static int16_t x210 = INT16_MAX;
	uint32_t x211 = 3248U;
	int8_t x212 = INT8_MIN;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x209|(x210%(x211&x212)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x213 = 15U;
	int64_t x214 = INT64_MIN;
	int8_t x216 = INT8_MIN;
	int64_t t43 = 8502629869876521LL;

	t43 = (x213|(x214%(x215&x216)));

	if (t43 != 15LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = INT16_MIN;
	volatile int64_t x219 = INT64_MIN;

	t44 = (x217|(x218%(x219&x220)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x221 = INT8_MAX;
	int64_t x223 = 1970430832646LL;
	int8_t x224 = INT8_MAX;
	static volatile int64_t t45 = 190175LL;

	t45 = (x221|(x222%(x223&x224)));

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MIN;
	volatile uint32_t x227 = 4871098U;
	uint32_t x228 = UINT32_MAX;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x225|(x226%(x227&x228)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x231 = INT8_MIN;
	volatile int8_t x232 = -1;

	t47 = (x229|(x230%(x231&x232)));

	if (t47 != 255LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MIN;
	static int8_t x234 = INT8_MIN;
	int32_t x236 = -236;
	volatile int32_t t48 = -2041;

	t48 = (x233|(x234%(x235&x236)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x237 = 36352106LLU;
	static int32_t x238 = INT32_MIN;
	uint64_t x239 = 11383379206677LLU;
	volatile uint64_t x240 = 13995LLU;

	t49 = (x237|(x238%(x239&x240)));

	if (t49 != 36354431LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = -1;
	int8_t x243 = INT8_MAX;
	uint16_t x244 = UINT16_MAX;
	static volatile int32_t t50 = 100469;

	t50 = (x241|(x242%(x243&x244)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -1;
	uint8_t x246 = 2U;
	uint32_t x247 = 1004606932U;
	uint64_t x248 = 793436LLU;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x245|(x246%(x247&x248)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = -1;
	static volatile int64_t x250 = -140425684482572384LL;
	uint32_t x251 = 428749566U;
	static volatile int16_t x252 = INT16_MIN;
	volatile int64_t t52 = 17466082300990LL;

	t52 = (x249|(x250%(x251&x252)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x253 = 1331410;
	volatile int8_t x254 = 12;
	static int8_t x255 = INT8_MAX;
	uint8_t x256 = 40U;
	static volatile int32_t t53 = -780872;

	t53 = (x253|(x254%(x255&x256)));

	if (t53 != 1331422) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = 0U;
	volatile int8_t x258 = INT8_MIN;
	volatile uint32_t t54 = 1410U;

	t54 = (x257|(x258%(x259&x260)));

	if (t54 != 2147483521U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x261 = -1;
	int32_t x262 = -157691;
	uint64_t t55 = UINT64_MAX;

	t55 = (x261|(x262%(x263&x264)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x273 = UINT64_MAX;
	static int32_t x274 = INT32_MIN;
	int64_t x275 = INT64_MAX;
	static uint8_t x276 = 74U;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (x273|(x274%(x275&x276)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x279 = 89U;
	volatile int64_t x280 = -21451LL;

	t57 = (x277|(x278%(x279&x280)));

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	uint8_t x288 = UINT8_MAX;
	int32_t t58 = -292822;

	t58 = (x285|(x286%(x287&x288)));

	if (t58 != -125) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x301 = UINT8_MAX;
	volatile uint32_t x302 = UINT32_MAX;
	int8_t x303 = -18;
	volatile int16_t x304 = -299;
	uint32_t t59 = 98824U;

	t59 = (x301|(x302%(x303&x304)));

	if (t59 != 511U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = 3173248LL;
	volatile uint8_t x307 = 48U;
	volatile int32_t x308 = 45;
	volatile int64_t t60 = 520833735588LL;

	t60 = (x305|(x306%(x307&x308)));

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = 1936;
	uint32_t x310 = 13434U;
	static int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	static int64_t t61 = -2928321927LL;

	t61 = (x309|(x310%(x311&x312)));

	if (t61 != 14330LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x321 = -1;
	int32_t x322 = 3851419;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t62 = 28LL;

	t62 = (x321|(x322%(x323&x324)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x325 = -1;
	int64_t x326 = -14623126280484302LL;
	int8_t x327 = INT8_MIN;
	volatile int64_t x328 = -11787LL;
	int64_t t63 = -4410660279412568049LL;

	t63 = (x325|(x326%(x327&x328)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x329 = INT8_MAX;
	static int64_t x330 = -18LL;
	uint64_t x331 = 32118887610792LLU;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t64 = 119LLU;

	t64 = (x329|(x330%(x331&x332)));

	if (t64 != 1846835937279LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x333 = 0U;
	volatile uint64_t x334 = 13821LLU;
	static uint16_t x336 = 52U;
	volatile uint64_t t65 = 580LLU;

	t65 = (x333|(x334%(x335&x336)));

	if (t65 != 41LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x342 = -8290;
	int32_t x343 = INT32_MIN;
	volatile int8_t x344 = -1;

	t66 = (x341|(x342%(x343&x344)));

	if (t66 != -98) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x345 = -6;
	volatile int16_t x346 = INT16_MIN;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t x348 = 3;
	int32_t t67 = -1998;

	t67 = (x345|(x346%(x347&x348)));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x349 = 13U;
	static int64_t x350 = -1LL;
	static int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	static int64_t t68 = -3100LL;

	t68 = (x349|(x350%(x351&x352)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x353 = INT16_MIN;
	uint32_t x354 = 1310U;
	volatile int64_t x355 = 391384398LL;
	int64_t x356 = 4184805713LL;
	static volatile int64_t t69 = -8204241100177LL;

	t69 = (x353|(x354%(x355&x356)));

	if (t69 != -31458LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = -2073712822209903011LL;
	int32_t x358 = -1156079;
	int64_t t70 = -169377LL;

	t70 = (x357|(x358%(x359&x360)));

	if (t70 != -1057187LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x365 = 1720934U;
	int16_t x367 = INT16_MIN;
	int64_t x368 = -1LL;

	t71 = (x365|(x366%(x367&x368)));

	if (t71 != 1721967LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x369 = 2U;
	volatile int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MAX;
	static int32_t x372 = INT32_MAX;
	static int64_t t72 = 13244269LL;

	t72 = (x369|(x370%(x371&x372)));

	if (t72 != -126LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x373 = -232487;
	int8_t x374 = INT8_MIN;
	static volatile int64_t x376 = -3293LL;
	volatile int64_t t73 = -30796763LL;

	t73 = (x373|(x374%(x375&x376)));

	if (t73 != -39LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x377 = 1784U;
	int32_t x378 = -27157470;
	static int32_t x379 = INT32_MIN;
	int16_t x380 = -1;
	volatile uint32_t t74 = 5164997U;

	t74 = (x377|(x378%(x379&x380)));

	if (t74 != 4267810554U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x382 = INT64_MAX;
	uint32_t x383 = UINT32_MAX;
	volatile int64_t t75 = -7876LL;

	t75 = (x381|(x382%(x383&x384)));

	if (t75 != 65535LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x389 = -1LL;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	volatile uint16_t x392 = 1944U;

	t76 = (x389|(x390%(x391&x392)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = -1;
	int32_t x395 = INT32_MIN;
	static volatile int32_t x396 = -1;
	static volatile int32_t t77 = 1;

	t77 = (x393|(x394%(x395&x396)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x397 = UINT16_MAX;
	int64_t x398 = 1911658208907LL;
	static int16_t x399 = -55;
	int16_t x400 = INT16_MIN;
	int64_t t78 = -3816644814LL;

	t78 = (x397|(x398%(x399&x400)));

	if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x402 = 525U;
	int32_t x404 = 696650719;
	uint32_t t79 = 114U;

	t79 = (x401|(x402%(x403&x404)));

	if (t79 != 4294961887U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x409 = UINT64_MAX;
	uint32_t x410 = UINT32_MAX;
	int8_t x411 = -3;
	volatile int16_t x412 = INT16_MIN;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = (x409|(x410%(x411&x412)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x413 = 3880438918117777549LL;
	static uint64_t x414 = 254LLU;
	static int16_t x416 = INT16_MAX;
	uint64_t t81 = 2175LLU;

	t81 = (x413|(x414%(x415&x416)));

	if (t81 != 3880438918117777663LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x417 = 127977;
	int64_t x419 = INT64_MAX;
	int64_t x420 = -1LL;
	volatile int64_t t82 = -8333647905466LL;

	t82 = (x417|(x418%(x419&x420)));

	if (t82 != -21LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x422 = -4768913;
	static int32_t x423 = -1;
	uint16_t x424 = 4624U;
	int32_t t83 = -15;

	t83 = (x421|(x422%(x423&x424)));

	if (t83 != -1569) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x426 = 2715U;
	int64_t x427 = INT64_MIN;
	int32_t x428 = -19777;
	volatile int64_t t84 = -1113568191870170LL;

	t84 = (x425|(x426%(x427&x428)));

	if (t84 != -30053LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x429 = INT8_MAX;
	static int8_t x430 = INT8_MAX;
	static int64_t x431 = INT64_MAX;
	int64_t x432 = -2252LL;
	volatile int64_t t85 = 129494LL;

	t85 = (x429|(x430%(x431&x432)));

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x433 = INT32_MIN;
	static int8_t x435 = INT8_MIN;

	t86 = (x433|(x434%(x435&x436)));

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x437 = -1LL;
	int16_t x438 = 2224;
	volatile int8_t x439 = -11;
	int64_t t87 = -14220318778480LL;

	t87 = (x437|(x438%(x439&x440)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x441 = 62153652984LL;
	uint64_t x442 = 42489LLU;
	static int64_t x443 = -1LL;
	uint16_t x444 = 18212U;
	static volatile uint64_t t88 = 3551501467608433LLU;

	t88 = (x441|(x442%(x443&x444)));

	if (t88 != 62153654265LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x445 = -1;
	uint32_t x446 = 7594U;
	int8_t x448 = INT8_MIN;
	static volatile uint32_t t89 = UINT32_MAX;

	t89 = (x445|(x446%(x447&x448)));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x449 = UINT8_MAX;
	volatile uint16_t x450 = 68U;
	uint64_t x451 = 8908LLU;
	uint8_t x452 = 109U;
	uint64_t t90 = 3392LLU;

	t90 = (x449|(x450%(x451&x452)));

	if (t90 != 255LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x453 = -1;
	int64_t x455 = -1LL;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x453|(x454%(x455&x456)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x457 = 1U;
	static int64_t x458 = -1LL;
	int8_t x459 = -1;

	t92 = (x457|(x458%(x459&x460)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x461 = 3195U;
	static uint64_t x462 = 6251717454690917196LLU;
	static uint64_t x463 = 410383931131324LLU;
	volatile uint64_t t93 = 337026281306LLU;

	t93 = (x461|(x462%(x463&x464)));

	if (t93 != 3199LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x465 = -7666809900215LL;
	int8_t x466 = 49;
	static int64_t x467 = -32591LL;
	static uint32_t x468 = 1124U;
	volatile int64_t t94 = 3LL;

	t94 = (x465|(x466%(x467&x468)));

	if (t94 != -7666809900199LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x469 = INT32_MIN;
	volatile int16_t x470 = INT16_MAX;
	volatile int8_t x471 = INT8_MAX;
	volatile int32_t t95 = INT32_MIN;

	t95 = (x469|(x470%(x471&x472)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x474 = INT64_MIN;
	int32_t x475 = INT32_MAX;
	static volatile int16_t x476 = -1;
	int64_t t96 = -34851614937LL;

	t96 = (x473|(x474%(x475&x476)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x481 = INT8_MIN;
	volatile int32_t x482 = INT32_MIN;
	static uint32_t x483 = UINT32_MAX;
	uint8_t x484 = UINT8_MAX;
	uint32_t t97 = 15219U;

	t97 = (x481|(x482%(x483&x484)));

	if (t97 != 4294967168U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x485 = -1;
	int32_t x486 = 56895;
	uint32_t x487 = 158409946U;

	t98 = (x485|(x486%(x487&x488)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x490 = INT32_MIN;
	static int64_t x491 = -20017414LL;
	int16_t x492 = INT16_MIN;
	int64_t t99 = -441678873878LL;

	t99 = (x489|(x490%(x491&x492)));

	if (t99 != -5177345LL) { NG(); } else { ; }
	
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

