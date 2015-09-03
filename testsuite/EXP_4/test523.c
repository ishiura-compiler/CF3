#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int16_t x11 = 10132;
static volatile int16_t x33 = -489;
static int16_t x35 = 543;
int32_t x38 = -6;
volatile int64_t t8 = 422608586LL;
volatile uint32_t x69 = UINT32_MAX;
int16_t x71 = -1;
int32_t x73 = -444;
int8_t x74 = INT8_MIN;
int8_t x76 = INT8_MIN;
static int8_t x83 = -1;
uint64_t x85 = 259331873557LLU;
static uint64_t t14 = 125274785006LLU;
int16_t x98 = INT16_MIN;
static volatile uint64_t t18 = 0LLU;
static uint64_t x123 = 6659271742134633045LLU;
int16_t x130 = INT16_MIN;
static int64_t x131 = INT64_MIN;
volatile int16_t x136 = 18;
int16_t x141 = -51;
static volatile int8_t x149 = INT8_MAX;
int32_t x170 = 47;
uint32_t x180 = 17126509U;
volatile uint32_t t33 = 66636602U;
int64_t x199 = -83973LL;
volatile uint64_t t35 = 16836991766652892LLU;
volatile int8_t x207 = -12;
uint8_t x211 = UINT8_MAX;
int32_t x216 = INT32_MIN;
static int16_t x233 = -1;
uint64_t x239 = UINT64_MAX;
static int16_t x241 = -1;
int64_t t44 = -193298658498LL;
uint8_t x246 = 32U;
int32_t x256 = INT32_MIN;
int16_t x257 = -1;
int64_t t47 = -396631LL;
int16_t x264 = INT16_MIN;
volatile uint32_t t49 = 1U;
int64_t x272 = INT64_MIN;
uint32_t t52 = 94779612U;
int16_t x287 = -1;
uint32_t x289 = 32450U;
uint32_t x291 = UINT32_MAX;
int16_t x294 = INT16_MIN;
uint32_t x295 = 48U;
static volatile int64_t x296 = INT64_MAX;
uint8_t x298 = 0U;
static uint32_t x299 = 995838U;
uint64_t x316 = 6069218936755181636LLU;
volatile int32_t x323 = INT32_MIN;
uint16_t x330 = 1U;
static volatile uint8_t x333 = UINT8_MAX;
static volatile int32_t t63 = 7075472;
uint64_t x342 = 29748064296397LLU;
volatile uint32_t x368 = 93U;
static uint8_t x371 = 3U;
int64_t x372 = -1LL;
static int32_t x373 = 38370;
int64_t x382 = INT64_MIN;
int8_t x390 = INT8_MAX;
int8_t x391 = INT8_MIN;
uint16_t x392 = 10U;
int16_t x393 = INT16_MAX;
int64_t x404 = 10LL;
int32_t x408 = -1575148;
volatile int8_t x416 = INT8_MIN;
int8_t x422 = -1;
static int32_t x428 = -1489535;
volatile int32_t t78 = 1010;
volatile uint64_t t79 = 169LLU;
uint32_t x442 = UINT32_MAX;
int64_t x447 = 29289679888LL;
volatile int8_t x465 = -1;
int64_t x466 = -1LL;
int32_t x473 = -1;
int32_t x477 = -48;
int32_t t85 = 0;
int16_t x485 = INT16_MAX;
static volatile uint32_t t86 = 719696709U;
int64_t x494 = INT64_MIN;
static uint64_t x495 = UINT64_MAX;
uint16_t x496 = 3363U;
int8_t x500 = 1;
static int8_t x504 = -1;
int8_t x507 = -1;
int32_t x508 = INT32_MAX;
uint64_t x516 = UINT64_MAX;
uint64_t t92 = 2639019069473396LLU;
uint16_t x517 = 227U;
int8_t x520 = INT8_MAX;
int8_t x531 = -4;
static int64_t x532 = 2988936326123175LL;
static uint64_t x539 = UINT64_MAX;
int8_t x541 = INT8_MIN;
int16_t x543 = -906;
volatile int32_t t99 = 295913;


void f0(void) {
	int16_t x1 = -1;
	volatile int16_t x3 = INT16_MAX;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 356355637750463110LL;

	t0 = (x1*(x2-(x3/x4)));

	if (t0 != -32639LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 3U;
	uint64_t x10 = 219062840LLU;
	uint32_t x12 = UINT32_MAX;
	volatile uint64_t t1 = 9420417LLU;

	t1 = (x9*(x10-(x11/x12)));

	if (t1 != 657188520LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = 806;
	static int64_t x26 = -1LL;
	uint64_t x27 = UINT64_MAX;
	uint16_t x28 = 29U;
	volatile uint64_t t2 = 38534012718972802LLU;

	t2 = (x25*(x26-(x27/x28)));

	if (t2 != 3816567739388182954LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x29 = 3555;
	volatile int32_t x30 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	uint64_t x32 = UINT64_MAX;
	uint64_t t3 = 3456LLU;

	t3 = (x29*(x30-(x31/x32)));

	if (t3 != 18446736439405182976LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x34 = UINT8_MAX;
	volatile int32_t x36 = 195;
	int32_t t4 = 704970;

	t4 = (x33*(x34-(x35/x36)));

	if (t4 != -123717) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = 439U;
	volatile int16_t x39 = -1;
	int8_t x40 = 2;
	volatile int32_t t5 = 153281514;

	t5 = (x37*(x38-(x39/x40)));

	if (t5 != -2634) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	volatile uint8_t x42 = UINT8_MAX;
	static int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	int32_t t6 = 11575;

	t6 = (x41*(x42-(x43/x44)));

	if (t6 != -32512) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = -62LL;
	volatile int8_t x46 = 8;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 16U;
	int64_t t7 = 0LL;

	t7 = (x45*(x46-(x47/x48)));

	if (t7 != -249644975072LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x57 = 6534U;
	int64_t x58 = -1LL;
	int16_t x59 = 1;
	int32_t x60 = -1;

	t8 = (x57*(x58-(x59/x60)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x61 = 0U;
	int64_t x62 = -1LL;
	volatile int32_t x63 = -1;
	int32_t x64 = INT32_MAX;
	int64_t t9 = 6839821712033984LL;

	t9 = (x61*(x62-(x63/x64)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x70 = INT8_MIN;
	int32_t x72 = INT32_MAX;
	static uint32_t t10 = 131U;

	t10 = (x69*(x70-(x71/x72)));

	if (t10 != 128U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x75 = 53U;
	volatile int32_t t11 = -1;

	t11 = (x73*(x74-(x75/x76)));

	if (t11 != 56832) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x77 = 78U;
	int16_t x78 = INT16_MAX;
	int8_t x79 = -1;
	int32_t x80 = 31;
	static int32_t t12 = -2313;

	t12 = (x77*(x78-(x79/x80)));

	if (t12 != 2555826) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MAX;
	uint64_t x84 = 1173100LLU;
	volatile uint64_t t13 = 680209350LLU;

	t13 = (x81*(x82-(x83/x84)));

	if (t13 != 6563100260426579968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x86 = -1;
	int16_t x87 = INT16_MIN;
	volatile int32_t x88 = INT32_MIN;

	t14 = (x85*(x86-(x87/x88)));

	if (t14 != 18446743814377678059LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = -52;
	volatile uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	static int16_t x96 = INT16_MIN;
	uint64_t t15 = 40882285LLU;

	t15 = (x93*(x94-(x95/x96)));

	if (t15 != 3407924LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x97 = INT16_MIN;
	int64_t x99 = -1LL;
	int64_t x100 = -1772408803LL;
	int64_t t16 = 477LL;

	t16 = (x97*(x98-(x99/x100)));

	if (t16 != 1073741824LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = INT8_MIN;
	static int32_t x102 = -1;
	int8_t x103 = -1;
	int32_t x104 = -2;
	volatile int32_t t17 = 0;

	t17 = (x101*(x102-(x103/x104)));

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = INT16_MAX;
	int8_t x110 = INT8_MAX;
	uint16_t x111 = UINT16_MAX;
	volatile uint64_t x112 = 34595355LLU;

	t18 = (x109*(x110-(x111/x112)));

	if (t18 != 4161409LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x113 = 4837LLU;
	int32_t x114 = INT32_MIN;
	static uint64_t x115 = 1LLU;
	uint64_t x116 = 111643863501LLU;
	uint64_t t19 = 562LLU;

	t19 = (x113*(x114-(x115/x116)));

	if (t19 != 18446733686331146240LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = 7611;
	int32_t x118 = -1;
	int16_t x119 = 1;
	volatile int16_t x120 = INT16_MIN;
	int32_t t20 = 29;

	t20 = (x117*(x118-(x119/x120)));

	if (t20 != -7611) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static int8_t x122 = INT8_MIN;
	int64_t x124 = -14763LL;
	static volatile uint64_t t21 = 865612LLU;

	t21 = (x121*(x122-(x123/x124)));

	if (t21 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = -1;
	uint64_t x127 = UINT64_MAX;
	int8_t x128 = -1;
	static uint64_t t22 = 4641137846532LLU;

	t22 = (x125*(x126-(x127/x128)));

	if (t22 != 256LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x129 = 307LLU;
	int16_t x132 = -5;
	uint64_t t23 = 73LLU;

	t23 = (x129*(x130-(x131/x132)));

	if (t23 != 5534023222102805893LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = INT16_MIN;
	static uint16_t x134 = 3005U;
	uint32_t x135 = 0U;
	static uint32_t t24 = 4U;

	t24 = (x133*(x134-(x135/x136)));

	if (t24 != 4196499456U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x137 = 0U;
	uint8_t x138 = 18U;
	uint8_t x139 = 11U;
	int64_t x140 = 34347313LL;
	static int64_t t25 = 17615LL;

	t25 = (x137*(x138-(x139/x140)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x142 = 11290U;
	static volatile int64_t x143 = INT64_MIN;
	static int64_t x144 = -156871405LL;
	int64_t t26 = -5283700LL;

	t26 = (x141*(x142-(x143/x144)));

	if (t26 != 2998582715265LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x150 = -1;
	uint16_t x151 = UINT16_MAX;
	int8_t x152 = -1;
	volatile int32_t t27 = -1;

	t27 = (x149*(x150-(x151/x152)));

	if (t27 != 8322818) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = -33329092;
	int8_t x154 = -1;
	static volatile int64_t x155 = -2287889817931764LL;
	int16_t x156 = INT16_MAX;
	volatile int64_t t28 = 5819938LL;

	t28 = (x153*(x154-(x155/x156)));

	if (t28 != -2327136760337435004LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x157 = UINT8_MAX;
	int64_t x158 = -1LL;
	uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MAX;
	volatile int64_t t29 = -2875LL;

	t29 = (x157*(x158-(x159/x160)));

	if (t29 != -765LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x165 = UINT32_MAX;
	static int16_t x166 = -2307;
	int8_t x167 = INT8_MAX;
	static uint64_t x168 = 5093278705990154LLU;
	volatile uint64_t t30 = 1122361573811271220LLU;

	t30 = (x165*(x166-(x167/x168)));

	if (t30 != 18446734165220002051LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = -1LL;
	int8_t x171 = INT8_MIN;
	int8_t x172 = 14;
	int64_t t31 = 56LL;

	t31 = (x169*(x170-(x171/x172)));

	if (t31 != -56LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = 924;
	uint16_t x174 = 9U;
	int32_t x175 = -6;
	static int64_t x176 = INT64_MIN;
	int64_t t32 = -4335LL;

	t32 = (x173*(x174-(x175/x176)));

	if (t32 != 8316LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x177 = 12966066U;
	static int16_t x178 = INT16_MAX;
	int8_t x179 = -1;

	t33 = (x177*(x178-(x179/x180)));

	if (t33 != 710773114U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x181 = INT8_MAX;
	static int8_t x182 = 3;
	static uint8_t x183 = 0U;
	volatile int64_t x184 = 348155396533LL;
	int64_t t34 = 1338406899513LL;

	t34 = (x181*(x182-(x183/x184)));

	if (t34 != 381LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x197 = 29U;
	static int8_t x198 = 63;
	uint64_t x200 = 303786017800084367LLU;

	t35 = (x197*(x198-(x199/x200)));

	if (t35 != 87LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x201 = UINT32_MAX;
	uint8_t x202 = 2U;
	static int8_t x203 = -1;
	static int32_t x204 = -1;
	uint32_t t36 = UINT32_MAX;

	t36 = (x201*(x202-(x203/x204)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x205 = 2751671U;
	volatile int64_t x206 = -213LL;
	uint32_t x208 = UINT32_MAX;
	int64_t t37 = -4528003469825519310LL;

	t37 = (x205*(x206-(x207/x208)));

	if (t37 != -586105923LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x209 = -2437;
	static volatile int8_t x210 = -1;
	uint64_t x212 = 61534898577600LLU;
	uint64_t t38 = 7893348LLU;

	t38 = (x209*(x210-(x211/x212)));

	if (t38 != 2437LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x213 = 60U;
	uint32_t x214 = 226822U;
	volatile uint64_t x215 = UINT64_MAX;
	volatile uint64_t t39 = 643219446LLU;

	t39 = (x213*(x214-(x215/x216)));

	if (t39 != 13609260LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x217 = INT8_MAX;
	uint8_t x218 = 0U;
	static volatile int32_t x219 = -11;
	int16_t x220 = INT16_MIN;
	volatile int32_t t40 = 12204990;

	t40 = (x217*(x218-(x219/x220)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x225 = 1685661U;
	volatile uint8_t x226 = 4U;
	int32_t x227 = INT32_MAX;
	volatile uint8_t x228 = 3U;
	uint32_t t41 = 0U;

	t41 = (x225*(x226-(x227/x228)));

	if (t41 != 2155350066U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x234 = -380;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t42 = 1459;

	t42 = (x233*(x234-(x235/x236)));

	if (t42 != 379) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x237 = -1;
	static uint16_t x238 = 581U;
	uint16_t x240 = 3797U;
	volatile uint64_t t43 = 7099442821LLU;

	t43 = (x237*(x238-(x239/x240)));

	if (t43 != 4858241789230272LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x242 = -7;
	int64_t x243 = -1116355380559LL;
	int8_t x244 = INT8_MIN;

	t44 = (x241*(x242-(x243/x244)));

	if (t44 != 8721526417LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = UINT32_MAX;
	static int64_t x247 = -1LL;
	uint8_t x248 = UINT8_MAX;
	int64_t t45 = -7LL;

	t45 = (x245*(x246-(x247/x248)));

	if (t45 != 137438953440LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x253 = 17U;
	int32_t x254 = INT32_MIN;
	volatile int64_t x255 = INT64_MAX;
	volatile int64_t t46 = -1475035756262262LL;

	t46 = (x253*(x254-(x255/x256)));

	if (t46 != 36507221999LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x258 = -1;
	static uint8_t x259 = 1U;
	int64_t x260 = INT64_MIN;

	t47 = (x257*(x258-(x259/x260)));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x261 = 377U;
	static int8_t x262 = -1;
	volatile int16_t x263 = -1;
	static uint32_t t48 = 44U;

	t48 = (x261*(x262-(x263/x264)));

	if (t48 != 4294966919U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = -31191;
	volatile uint32_t x267 = UINT32_MAX;
	int32_t x268 = 54615673;

	t49 = (x265*(x266-(x267/x268)));

	if (t49 != 1024622592U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x269 = 11;
	static int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MAX;
	volatile int64_t t50 = -114356270657LL;

	t50 = (x269*(x270-(x271/x272)));

	if (t50 != -23622320128LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x277 = INT8_MAX;
	uint64_t x278 = UINT64_MAX;
	static volatile uint16_t x279 = 14560U;
	static int16_t x280 = INT16_MIN;
	uint64_t t51 = 20959287LLU;

	t51 = (x277*(x278-(x279/x280)));

	if (t51 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int16_t x282 = 7775;
	static uint32_t x283 = UINT32_MAX;
	uint32_t x284 = UINT32_MAX;

	t52 = (x281*(x282-(x283/x284)));

	if (t52 != 509469090U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x285 = -410LL;
	uint16_t x286 = 33U;
	static int8_t x288 = -3;
	int64_t t53 = -35541LL;

	t53 = (x285*(x286-(x287/x288)));

	if (t53 != -13530LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x290 = 7;
	static int8_t x292 = -1;
	uint32_t t54 = 13U;

	t54 = (x289*(x290-(x291/x292)));

	if (t54 != 194700U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = 1LL;
	int64_t t55 = -7250188072LL;

	t55 = (x293*(x294-(x295/x296)));

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x297 = -1;
	volatile uint64_t x300 = 3290545372783758397LLU;
	uint64_t t56 = 4178711091452LLU;

	t56 = (x297*(x298-(x299/x300)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x305 = 12825U;
	uint64_t x306 = 88LLU;
	volatile uint32_t x307 = 1028998U;
	int8_t x308 = -1;
	static uint64_t t57 = 332263218529614433LLU;

	t57 = (x305*(x306-(x307/x308)));

	if (t57 != 1128600LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x309 = INT64_MAX;
	uint64_t x310 = 19516615887519LLU;
	int8_t x311 = INT8_MAX;
	int8_t x312 = INT8_MAX;
	uint64_t t58 = 1727542LLU;

	t58 = (x309*(x310-(x311/x312)));

	if (t58 != 18446724557093664098LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	int32_t x315 = 2;
	uint64_t t59 = 26804233365146124LLU;

	t59 = (x313*(x314-(x315/x316)));

	if (t59 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MIN;
	int64_t x324 = -1LL;
	volatile int64_t t60 = 179372LL;

	t60 = (x321*(x322-(x323/x324)));

	if (t60 != -70367670403072LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x329 = 373742077LLU;
	int64_t x331 = INT64_MIN;
	int64_t x332 = -9530813680049LL;
	uint64_t t61 = 336409943977LLU;

	t61 = (x329*(x330-(x331/x332)));

	if (t61 != 18446382388178213559LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x334 = 16331302LL;
	uint64_t x335 = UINT64_MAX;
	static uint16_t x336 = UINT16_MAX;
	volatile uint64_t t62 = 477229506LLU;

	t62 = (x333*(x334-(x335/x336)));

	if (t62 != 18374966863579443931LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x337 = 4241U;
	volatile int16_t x338 = 13132;
	static int8_t x339 = 28;
	int8_t x340 = 60;

	t63 = (x337*(x338-(x339/x340)));

	if (t63 != 55692812) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x341 = 9334U;
	uint64_t x343 = 4746293172873086063LLU;
	int32_t x344 = INT32_MAX;
	volatile uint64_t t64 = 235292816055LLU;

	t64 = (x341*(x342-(x343/x344)));

	if (t64 != 277647802462562272LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x357 = UINT32_MAX;
	int8_t x358 = INT8_MAX;
	int16_t x359 = 130;
	int32_t x360 = -25271;
	static uint32_t t65 = 392U;

	t65 = (x357*(x358-(x359/x360)));

	if (t65 != 4294967169U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x365 = INT16_MAX;
	int8_t x366 = 49;
	int8_t x367 = INT8_MIN;
	uint32_t t66 = 6581912U;

	t66 = (x365*(x366-(x367/x368)));

	if (t66 != 2864984057U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = -1;
	int64_t t67 = 2921111031408764567LL;

	t67 = (x369*(x370-(x371/x372)));

	if (t67 != 131070LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x374 = 1666U;
	int32_t x375 = -1712;
	int16_t x376 = INT16_MIN;
	volatile uint32_t t68 = 39709206U;

	t68 = (x373*(x374-(x375/x376)));

	if (t68 != 63924420U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = -121LL;
	volatile int16_t x378 = INT16_MAX;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = INT16_MIN;
	volatile int64_t t69 = -4288500462101784LL;

	t69 = (x377*(x378-(x379/x380)));

	if (t69 != -3964807LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x381 = UINT64_MAX;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = -3393;
	uint64_t t70 = 7336528319363924980LLU;

	t70 = (x381*(x382-(x383/x384)));

	if (t70 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x389 = 390537980U;
	uint32_t t71 = 74428210U;

	t71 = (x389*(x390-(x391/x392)));

	if (t71 != 2745171668U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x394 = -1LL;
	uint32_t x395 = 40141U;
	int8_t x396 = -1;
	int64_t t72 = -18LL;

	t72 = (x393*(x394-(x395/x396)));

	if (t72 != -32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x401 = 1033U;
	volatile uint16_t x402 = 856U;
	int8_t x403 = 17;
	static volatile int64_t t73 = -231186LL;

	t73 = (x401*(x402-(x403/x404)));

	if (t73 != 883215LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = INT8_MAX;
	static uint8_t x407 = 8U;
	static volatile int32_t t74 = 20249;

	t74 = (x405*(x406-(x407/x408)));

	if (t74 != -4161536) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x409 = 58U;
	int32_t x410 = INT32_MIN;
	uint8_t x411 = 95U;
	uint64_t x412 = UINT64_MAX;
	static uint64_t t75 = 13589LLU;

	t75 = (x409*(x410-(x411/x412)));

	if (t75 != 18446743949155500032LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x413 = 9221306U;
	volatile int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	volatile uint32_t t76 = 200924U;

	t76 = (x413*(x414-(x415/x416)));

	if (t76 != 2769701702U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x421 = 391888739U;
	uint16_t x423 = 18981U;
	uint64_t x424 = 925733002843022102LLU;
	static uint64_t t77 = 193LLU;

	t77 = (x421*(x422-(x423/x424)));

	if (t77 != 18446744073317662877LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x425 = 71538;
	static volatile int8_t x426 = -57;
	int32_t x427 = INT32_MIN;

	t78 = (x425*(x426-(x427/x428)));

	if (t78 != -107163924) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x429 = 3LLU;
	int64_t x430 = 1411821939LL;
	int32_t x431 = 437357831;
	int32_t x432 = INT32_MIN;

	t79 = (x429*(x430-(x431/x432)));

	if (t79 != 4235465817LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x441 = -1053729146398395LL;
	int16_t x443 = 21;
	int8_t x444 = -1;
	int64_t t80 = -9470511010989188LL;

	t80 = (x441*(x442-(x443/x444)));

	if (t80 != -21074582927967900LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x445 = -35751;
	uint32_t x446 = 534085061U;
	volatile int8_t x448 = INT8_MIN;
	volatile int64_t t81 = -566569LL;

	t81 = (x445*(x446-(x447/x448)));

	if (t81 != -27274819899435LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x453 = -1;
	static uint64_t x454 = 10127580LLU;
	int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MAX;
	volatile uint64_t t82 = 11735960460386161LLU;

	t82 = (x453*(x454-(x455/x456)));

	if (t82 != 18446744069404456738LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x467 = -277951LL;
	static uint16_t x468 = 5303U;
	static volatile int64_t t83 = 3LL;

	t83 = (x465*(x466-(x467/x468)));

	if (t83 != -51LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x474 = 213U;
	static volatile uint64_t x475 = 134723255750190324LLU;
	int16_t x476 = INT16_MAX;
	volatile uint64_t t84 = 2069718818LLU;

	t84 = (x473*(x474-(x475/x476)));

	if (t84 != 4111552957036LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x478 = -1;
	uint16_t x479 = UINT16_MAX;
	static volatile int8_t x480 = INT8_MIN;

	t85 = (x477*(x478-(x479/x480)));

	if (t85 != -24480) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x486 = 19U;
	volatile int8_t x487 = -1;
	uint32_t x488 = 16368967U;

	t86 = (x485*(x486-(x487/x488)));

	if (t86 != 4287004915U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x493 = -1LL;
	volatile uint64_t t87 = 1645391433430061893LLU;

	t87 = (x493*(x494-(x495/x496)));

	if (t87 != 9228857241753291880LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x497 = 37U;
	uint64_t x498 = 58LLU;
	static int32_t x499 = -1;
	static uint64_t t88 = 11020LLU;

	t88 = (x497*(x498-(x499/x500)));

	if (t88 != 2183LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x501 = 207U;
	static int8_t x502 = INT8_MIN;
	static volatile int16_t x503 = INT16_MAX;
	volatile int32_t t89 = 4027;

	t89 = (x501*(x502-(x503/x504)));

	if (t89 != 6756273) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x505 = UINT16_MAX;
	static int64_t x506 = -4616254871LL;
	int64_t t90 = -908882752738696LL;

	t90 = (x505*(x506-(x507/x508)));

	if (t90 != -302526262970985LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x509 = INT16_MAX;
	uint32_t x510 = UINT32_MAX;
	int8_t x511 = INT8_MIN;
	int64_t x512 = -1LL;
	volatile int64_t t91 = -624979LL;

	t91 = (x509*(x510-(x511/x512)));

	if (t91 != 140733189161089LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x513 = -3638845818LL;
	int16_t x514 = -1;
	uint16_t x515 = UINT16_MAX;

	t92 = (x513*(x514-(x515/x516)));

	if (t92 != 3638845818LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x518 = UINT16_MAX;
	static int32_t x519 = -484231;
	int32_t t93 = 6433;

	t93 = (x517*(x518-(x519/x520)));

	if (t93 != 15741769) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x521 = 1;
	int64_t x522 = INT64_MAX;
	static int32_t x523 = -396548;
	static uint32_t x524 = UINT32_MAX;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x521*(x522-(x523/x524)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x525 = -1LL;
	int8_t x526 = INT8_MIN;
	static int16_t x527 = -596;
	static volatile int64_t x528 = -1LL;
	static volatile int64_t t95 = 252LL;

	t95 = (x525*(x526-(x527/x528)));

	if (t95 != 724LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x529 = 5;
	uint16_t x530 = UINT16_MAX;
	volatile int64_t t96 = 151148401231LL;

	t96 = (x529*(x530-(x531/x532)));

	if (t96 != 327675LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = INT8_MIN;
	int8_t x534 = -1;
	uint64_t x535 = UINT64_MAX;
	uint8_t x536 = 16U;
	uint64_t t97 = 38705LLU;

	t97 = (x533*(x534-(x535/x536)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x537 = -1;
	uint32_t x538 = UINT32_MAX;
	volatile int16_t x540 = INT16_MAX;
	uint64_t t98 = 1397904325127687221LLU;

	t98 = (x537*(x538-(x539/x540)));

	if (t98 != 562962838847505LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x542 = -4;
	static int32_t x544 = -135271424;

	t99 = (x541*(x542-(x543/x544)));

	if (t99 != 512) { NG(); } else { ; }
	
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

