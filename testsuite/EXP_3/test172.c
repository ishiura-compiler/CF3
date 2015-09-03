#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 1U;
static volatile int16_t x4 = INT16_MIN;
int32_t x6 = 1021574434;
volatile int64_t t2 = -1044936352499LL;
volatile uint64_t t3 = 170525551412388311LLU;
int32_t x30 = 6885;
volatile int32_t x36 = -1;
int64_t x37 = -35782362225LL;
int16_t x38 = INT16_MIN;
volatile int64_t t8 = 5LL;
uint16_t x47 = UINT16_MAX;
uint32_t x48 = 573U;
int32_t x52 = INT32_MIN;
int8_t x67 = -2;
uint32_t x80 = 313710806U;
static int32_t x88 = 13;
static uint64_t x94 = 6780032415541642LLU;
static int32_t x96 = 0;
volatile uint32_t x141 = 49U;
volatile int8_t x143 = INT8_MIN;
int64_t x146 = INT64_MAX;
uint8_t x147 = 1U;
uint16_t x151 = UINT16_MAX;
int16_t x154 = INT16_MIN;
static uint16_t x181 = 0U;
static uint64_t t27 = 4338051597LLU;
volatile int16_t x189 = -21;
int32_t x194 = -168191320;
uint64_t t29 = 2557842087136586395LLU;
uint16_t x207 = UINT16_MAX;
uint64_t t31 = 1740380231707068353LLU;
uint64_t x211 = 21028440446500LLU;
uint32_t x213 = 186U;
uint32_t t33 = 4113911U;
static volatile uint16_t x223 = 1U;
static volatile int32_t x229 = INT32_MAX;
int16_t x236 = INT16_MAX;
volatile int32_t t36 = -2;
static int32_t x243 = 72;
volatile uint64_t x248 = UINT64_MAX;
volatile int32_t x255 = 123221377;
uint8_t x258 = 0U;
static uint64_t x263 = 2112686LLU;
uint64_t t42 = 7066311007LLU;
volatile uint64_t t43 = 41979498861912LLU;
int32_t x273 = 7;
static volatile uint16_t x274 = 2U;
static int16_t x279 = -2006;
volatile uint64_t t45 = 4086568513LLU;
volatile uint8_t x286 = 27U;
static int64_t x289 = -5790708916LL;
volatile uint32_t x298 = 251238U;
static uint32_t x303 = 852U;
static int8_t x318 = INT8_MIN;
uint32_t x320 = 5U;
static int64_t x325 = -1LL;
volatile int64_t t56 = -607446LL;
uint8_t x341 = 2U;
int16_t x346 = INT16_MIN;
volatile int64_t t58 = -2119636310661123806LL;
static volatile uint32_t x363 = 854087356U;
uint32_t x379 = 2050343U;
static int16_t x380 = INT16_MIN;
volatile int8_t x398 = -1;
int8_t x403 = INT8_MAX;
volatile uint64_t t67 = 101LLU;
int32_t x425 = -1;
uint32_t t70 = 67679U;
uint32_t x430 = UINT32_MAX;
int64_t t72 = 34291LL;
int32_t x443 = -1;
volatile uint64_t t74 = 116627896664352LLU;
uint64_t x450 = 7283032131177LLU;
uint32_t x468 = 3985907U;
volatile uint64_t t79 = 7898LLU;
uint64_t x473 = 193152780LLU;
static uint64_t t81 = 7037469673251990222LLU;
int32_t x497 = INT32_MIN;
uint64_t x503 = 417061586363689560LLU;
volatile uint32_t t84 = 1188844U;
static uint32_t x537 = 582392657U;
uint32_t x565 = UINT32_MAX;
uint64_t x567 = 14666280LLU;
uint64_t t90 = 1660372852316089224LLU;
static uint64_t x570 = 577573209298152LLU;
uint16_t x574 = 7611U;
uint8_t x576 = 2U;
volatile uint64_t t92 = 448943915859LLU;
int64_t x584 = INT64_MAX;
int16_t x594 = INT16_MAX;
int64_t x605 = -1LL;
static volatile int64_t x610 = INT64_MIN;
static int8_t x621 = INT8_MAX;
int16_t x629 = -178;
int32_t x633 = INT32_MAX;


void f0(void) {
	static int16_t x2 = 1;
	static uint8_t x3 = 10U;
	volatile int32_t t0 = -2074106;

	t0 = ((x1+x2)*(x3-x4));

	if (t0 != 65556) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -43LL;

	t1 = ((x5+x6)*(x7-x8));

	if (t1 != -129744114527LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static uint16_t x10 = UINT16_MAX;
	int64_t x11 = -15020826LL;
	int32_t x12 = -1;

	t2 = ((x9+x10)*(x11-x12));

	if (t2 != -986297411150LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int32_t x14 = 370231;
	uint64_t x15 = 12713287283LLU;
	int16_t x16 = INT16_MIN;

	t3 = ((x13+x14)*(x15-x16));

	if (t3 != 4706852482481730LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	static int64_t x18 = 28269305LL;
	int32_t x19 = 58381748;
	int16_t x20 = INT16_MIN;
	int64_t t4 = 413633539510LL;

	t4 = ((x17+x18)*(x19-x20));

	if (t4 != 127095555626651232LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	static int64_t x24 = 6051031LL;
	volatile int64_t t5 = 104328LL;

	t5 = ((x21+x22)*(x23-x24));

	if (t5 != 277805973591LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	uint8_t x31 = 46U;
	uint16_t x32 = 4U;
	static int32_t t6 = -1023740931;

	t6 = ((x29+x30)*(x31-x32));

	if (t6 != 283794) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 392452990U;
	volatile int16_t x34 = INT16_MIN;
	int8_t x35 = -1;
	volatile uint32_t t7 = 3936U;

	t7 = ((x33+x34)*(x35-x36));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x39 = 1U;
	volatile uint32_t x40 = UINT32_MAX;

	t8 = ((x37+x38)*(x39-x40));

	if (t8 != -71564789986LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = 88;
	uint64_t x46 = 1610560457LLU;
	uint64_t t9 = 6886522779LLU;

	t9 = ((x45+x46)*(x47-x48));

	if (t9 != 104625234124290LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x49 = 4557502728618LLU;
	volatile int16_t x50 = INT16_MIN;
	uint64_t x51 = 29412481795741901LLU;
	volatile uint64_t t10 = 889878942292LLU;

	t10 = ((x49+x50)*(x51-x52));

	if (t10 != 2349290564911394082LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = -1LL;
	static uint64_t x58 = UINT64_MAX;
	static int16_t x59 = -746;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t11 = 3LLU;

	t11 = ((x57+x58)*(x59-x60));

	if (t11 != 1492LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x61 = INT8_MIN;
	uint32_t x62 = UINT32_MAX;
	uint8_t x63 = UINT8_MAX;
	static int8_t x64 = -1;
	static uint32_t t12 = 68510U;

	t12 = ((x61+x62)*(x63-x64));

	if (t12 != 4294934272U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 1931344912U;
	volatile int16_t x66 = INT16_MIN;
	static uint8_t x68 = 1U;
	uint32_t t13 = 15U;

	t13 = ((x65+x66)*(x67-x68));

	if (t13 != 2795998160U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = 50U;
	int64_t x78 = 64LL;
	int16_t x79 = 0;
	volatile int64_t t14 = -16978270LL;

	t14 = ((x77+x78)*(x79-x80));

	if (t14 != 453863239860LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = -1LL;
	uint64_t x86 = UINT64_MAX;
	volatile uint32_t x87 = UINT32_MAX;
	volatile uint64_t t15 = 832370013935206653LLU;

	t15 = ((x85+x86)*(x87-x88));

	if (t15 != 18446744065119617052LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = INT16_MAX;
	static int8_t x95 = INT8_MAX;
	uint64_t t16 = 11586375316427123LLU;

	t16 = ((x93+x94)*(x95-x96));

	if (t16 != 861064116777949943LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = 115717598652LL;
	uint64_t x111 = 34071962306650273LLU;
	int64_t x112 = -32815729869485LL;
	uint64_t t17 = 7LLU;

	t17 = ((x109+x110)*(x111-x112));

	if (t17 != 15763928062524465992LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x113 = -1;
	int16_t x114 = INT16_MAX;
	uint8_t x115 = UINT8_MAX;
	volatile int8_t x116 = -1;
	int32_t t18 = 2334;

	t18 = ((x113+x114)*(x115-x116));

	if (t18 != 8388096) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = -1;
	uint16_t x118 = UINT16_MAX;
	int64_t x119 = -1LL;
	uint64_t x120 = 7084160346386528LLU;
	volatile uint64_t t19 = 27832LLU;

	t19 = ((x117+x118)*(x119-x120));

	if (t19 != 15361981776353550530LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x125 = INT16_MAX;
	static uint8_t x126 = 101U;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = -1LL;
	volatile uint64_t t20 = 252172635264LLU;

	t20 = ((x125+x126)*(x127-x128));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x142 = INT16_MIN;
	volatile int16_t x144 = INT16_MIN;
	uint32_t t21 = 61U;

	t21 = ((x141+x142)*(x143-x144));

	if (t21 != 3227019136U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x145 = -1LL;
	volatile int32_t x148 = 2;
	volatile int64_t t22 = -21879716LL;

	t22 = ((x145+x146)*(x147-x148));

	if (t22 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x149 = UINT16_MAX;
	uint8_t x150 = 0U;
	int16_t x152 = INT16_MAX;
	static int32_t t23 = -1;

	t23 = ((x149+x150)*(x151-x152));

	if (t23 != 2147450880) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x153 = -1;
	volatile uint8_t x155 = 1U;
	volatile uint64_t x156 = 388LLU;
	volatile uint64_t t24 = 210474LLU;

	t24 = ((x153+x154)*(x155-x156));

	if (t24 != 12681603LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x165 = 1;
	uint16_t x166 = 15U;
	uint8_t x167 = 1U;
	uint64_t x168 = 101820043336115LLU;
	uint64_t t25 = 249032495465616LLU;

	t25 = ((x165+x166)*(x167-x168));

	if (t25 != 18445114953016173792LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MAX;
	volatile int16_t x179 = 1761;
	volatile int8_t x180 = INT8_MAX;
	volatile int32_t t26 = -26;

	t26 = ((x177+x178)*(x179-x180));

	if (t26 != -1634) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x182 = 9790556902283173LLU;
	int8_t x183 = INT8_MIN;
	volatile uint32_t x184 = UINT32_MAX;

	t27 = ((x181+x182)*(x183-x184));

	if (t27 != 11029004624175858981LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x190 = -18;
	int16_t x191 = INT16_MIN;
	volatile uint32_t x192 = 41110U;
	uint32_t t28 = 4801308U;

	t28 = ((x189+x190)*(x191-x192));

	if (t28 != 2881242U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x193 = 38U;
	uint64_t x195 = UINT64_MAX;
	volatile uint8_t x196 = 57U;

	t29 = ((x193+x194)*(x195-x196));

	if (t29 != 9755094356LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x201 = 6LLU;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	static uint32_t x204 = 4848702U;
	uint64_t t30 = 1624103603649LLU;

	t30 = ((x201+x202)*(x203-x204));

	if (t30 != 9233784573001995910LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x205 = 8313601489352LLU;
	uint64_t x206 = 26LLU;
	int16_t x208 = -1273;

	t31 = ((x205+x206)*(x207-x208));

	if (t31 != 555415088302365424LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x209 = 374U;
	static int16_t x210 = -1;
	int8_t x212 = -24;
	volatile uint64_t t32 = 311637LLU;

	t32 = ((x209+x210)*(x211-x212));

	if (t32 != 7843608286553452LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x214 = INT32_MAX;
	int32_t x215 = -1;
	int32_t x216 = INT32_MAX;

	t33 = ((x213+x214)*(x215-x216));

	if (t33 != 2147483648U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x221 = UINT16_MAX;
	int64_t x222 = -1LL;
	int8_t x224 = INT8_MIN;
	volatile int64_t t34 = 190LL;

	t34 = ((x221+x222)*(x223-x224));

	if (t34 != 8453886LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x230 = UINT32_MAX;
	uint32_t x231 = 381775U;
	int32_t x232 = INT32_MAX;
	volatile uint32_t t35 = 6U;

	t35 = ((x229+x230)*(x231-x232));

	if (t35 != 4294203744U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x233 = -1;
	int8_t x234 = 10;
	int16_t x235 = -1;

	t36 = ((x233+x234)*(x235-x236));

	if (t36 != -294912) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x241 = 385605LLU;
	int8_t x242 = -4;
	int32_t x244 = -1;
	static uint64_t t37 = 8376221519LLU;

	t37 = ((x241+x242)*(x243-x244));

	if (t37 != 28148873LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MIN;
	volatile int16_t x247 = -2897;
	uint64_t t38 = 502403483826LLU;

	t38 = ((x245+x246)*(x247-x248));

	if (t38 != 18446744073614658384LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x249 = UINT8_MAX;
	uint64_t x250 = 1775211038377218603LLU;
	static uint64_t x251 = UINT64_MAX;
	static int32_t x252 = INT32_MIN;
	volatile uint64_t t39 = 36LLU;

	t39 = ((x249+x250)*(x251-x252));

	if (t39 != 4559604954283404502LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x253 = 584;
	volatile uint32_t x254 = UINT32_MAX;
	static uint64_t x256 = 431947LLU;
	uint64_t t40 = 439530207437920823LLU;

	t40 = ((x253+x254)*(x255-x256));

	if (t40 != 71586237690LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x257 = INT16_MIN;
	volatile int8_t x259 = INT8_MAX;
	uint16_t x260 = UINT16_MAX;
	int32_t t41 = 3;

	t41 = ((x257+x258)*(x259-x260));

	if (t41 != 2143289344) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x261 = 1U;
	volatile int16_t x262 = 7366;
	uint64_t x264 = 277534656652948LLU;

	t42 = ((x261+x262)*(x263-x264));

	if (t42 != 16402146273711441462LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = -1;
	volatile int8_t x271 = -1;
	static int16_t x272 = -1;

	t43 = ((x269+x270)*(x271-x272));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x275 = INT8_MAX;
	uint64_t x276 = 876565171613415085LLU;
	volatile uint64_t t44 = 5905507693521899LLU;

	t44 = ((x273+x274)*(x275-x276));

	if (t44 != 10557657529188816994LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x277 = 58187569U;
	uint64_t x278 = 3938576546641200LLU;
	volatile int8_t x280 = -1;

	t45 = ((x277+x278)*(x279-x280));

	if (t45 != 10549897981027869771LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x281 = INT8_MAX;
	static int64_t x282 = -223LL;
	int16_t x283 = INT16_MAX;
	int8_t x284 = 5;
	int64_t t46 = -33286265334LL;

	t46 = ((x281+x282)*(x283-x284));

	if (t46 != -3145152LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x285 = INT16_MIN;
	int64_t x287 = -1LL;
	volatile uint8_t x288 = 0U;
	volatile int64_t t47 = 2LL;

	t47 = ((x285+x286)*(x287-x288));

	if (t47 != 32741LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x290 = -1LL;
	int8_t x291 = -1;
	int16_t x292 = INT16_MIN;
	volatile int64_t t48 = -36318LL;

	t48 = ((x289+x290)*(x291-x292));

	if (t48 != -189744159083339LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x297 = 27755167787LLU;
	int32_t x299 = -98218;
	int32_t x300 = 27673;
	uint64_t t49 = 65LLU;

	t49 = ((x297+x298)*(x299-x300));

	if (t49 != 18443249916253075341LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x301 = 6108;
	uint64_t x302 = 166573433073480LLU;
	uint16_t x304 = 89U;
	uint64_t t50 = 146090LLU;

	t50 = ((x301+x302)*(x303-x304));

	if (t50 != 127095529439725644LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x305 = 1586U;
	int8_t x306 = 15;
	int8_t x307 = 1;
	int8_t x308 = 2;
	uint32_t t51 = 45250U;

	t51 = ((x305+x306)*(x307-x308));

	if (t51 != 4294965695U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x317 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	volatile uint32_t t52 = 101U;

	t52 = ((x317+x318)*(x319-x320));

	if (t52 != 34048U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x321 = 40U;
	int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	static volatile int32_t x324 = -16;
	int32_t t53 = 47973;

	t53 = ((x321+x322)*(x323-x324));

	if (t53 != 1071907456) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x326 = 419293;
	int16_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	volatile int64_t t54 = 164390LL;

	t54 = ((x325+x326)*(x327-x328));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x329 = 1;
	static int64_t x330 = -13101467028095LL;
	uint16_t x331 = 27U;
	static int8_t x332 = -1;
	volatile int64_t t55 = -11474632526518437LL;

	t55 = ((x329+x330)*(x331-x332));

	if (t55 != -366841076786632LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x337 = -1LL;
	uint8_t x338 = 2U;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -3;

	t56 = ((x337+x338)*(x339-x340));

	if (t56 != -32765LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x342 = INT64_MIN;
	static uint8_t x343 = 20U;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t57 = 21925615332708LLU;

	t57 = ((x341+x342)*(x343-x344));

	if (t57 != 9223372036854775850LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x345 = INT32_MAX;
	int16_t x347 = -11;
	int64_t x348 = -1LL;

	t58 = ((x345+x346)*(x347-x348));

	if (t58 != -21474508790LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x361 = INT8_MAX;
	uint32_t x362 = 5215U;
	int32_t x364 = -1;
	volatile uint32_t t59 = 101759545U;

	t59 = ((x361+x362)*(x363-x364));

	if (t59 != 1279392742U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x365 = 76866545216599LLU;
	static volatile int8_t x366 = 53;
	uint8_t x367 = UINT8_MAX;
	volatile int32_t x368 = -1;
	static volatile uint64_t t60 = 1943497730LLU;

	t60 = ((x365+x366)*(x367-x368));

	if (t60 != 19677835575462912LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x369 = 58U;
	uint8_t x370 = 85U;
	uint32_t x371 = 1U;
	uint8_t x372 = 1U;
	static volatile uint32_t t61 = 21002134U;

	t61 = ((x369+x370)*(x371-x372));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MIN;
	volatile uint32_t t62 = 182U;

	t62 = ((x377+x378)*(x379-x380));

	if (t62 != 991288793U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x381 = 7957U;
	int32_t x382 = INT32_MAX;
	uint8_t x383 = 0U;
	static uint64_t x384 = UINT64_MAX;
	volatile uint64_t t63 = 57LLU;

	t63 = ((x381+x382)*(x383-x384));

	if (t63 != 2147491604LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x389 = -1;
	static int16_t x390 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	int16_t x392 = 36;
	int32_t t64 = -3982;

	t64 = ((x389+x390)*(x391-x392));

	if (t64 != -7176411) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x393 = INT8_MAX;
	uint32_t x394 = 5U;
	int8_t x395 = INT8_MIN;
	static uint32_t x396 = UINT32_MAX;
	uint32_t t65 = 28852U;

	t65 = ((x393+x394)*(x395-x396));

	if (t65 != 4294950532U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x397 = 4063LLU;
	volatile int16_t x399 = -1;
	static int16_t x400 = INT16_MIN;
	volatile uint64_t t66 = 23852LLU;

	t66 = ((x397+x398)*(x399-x400));

	if (t66 != 133099554LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x401 = INT16_MIN;
	volatile uint64_t x402 = 15572LLU;
	int16_t x404 = -1;

	t67 = ((x401+x402)*(x403-x404));

	if (t67 != 18446744073707350528LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x405 = UINT64_MAX;
	int8_t x406 = -1;
	int16_t x407 = INT16_MIN;
	static volatile int32_t x408 = 93230432;
	uint64_t t68 = 8042463369631387LLU;

	t68 = ((x405+x406)*(x407-x408));

	if (t68 != 186526400LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x417 = INT8_MIN;
	static int32_t x418 = -458656;
	static uint64_t x419 = 200746167860LLU;
	int32_t x420 = INT32_MIN;
	uint64_t t69 = 1789794538828494169LLU;

	t69 = ((x417+x418)*(x419-x420));

	if (t69 != 18353659712696105344LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x426 = INT32_MAX;
	uint32_t x427 = UINT32_MAX;
	volatile uint16_t x428 = 5U;

	t70 = ((x425+x426)*(x427-x428));

	if (t70 != 12U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x429 = 735185LLU;
	volatile uint64_t x431 = UINT64_MAX;
	static int8_t x432 = INT8_MIN;
	uint64_t t71 = 106690826LLU;

	t71 = ((x429+x430)*(x431-x432));

	if (t71 != 545554214960LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x433 = -3;
	static int64_t x434 = -9LL;
	int16_t x435 = 1524;
	static uint32_t x436 = 2995U;

	t72 = ((x433+x434)*(x435-x436));

	if (t72 != -51539589900LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x437 = UINT16_MAX;
	static int32_t x438 = INT32_MIN;
	int64_t x439 = -1LL;
	static volatile int32_t x440 = INT32_MAX;
	static int64_t t73 = -274477844300644641LL;

	t73 = ((x437+x438)*(x439-x440));

	if (t73 != 4611545283086516224LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x441 = 1977349491LLU;
	int32_t x442 = -104601089;
	uint16_t x444 = 690U;

	t74 = ((x441+x442)*(x443-x444));

	if (t74 != 18446742779640405834LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x445 = 221U;
	int64_t x446 = -1LL;
	volatile int8_t x447 = 8;
	uint16_t x448 = UINT16_MAX;
	volatile int64_t t75 = -38LL;

	t75 = ((x445+x446)*(x447-x448));

	if (t75 != -14415940LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x449 = UINT8_MAX;
	int32_t x451 = -1;
	uint32_t x452 = 221U;
	volatile uint64_t t76 = 11968583507769515LLU;

	t76 = ((x449+x450)*(x451-x452));

	if (t76 != 13151998446790480848LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x453 = -1;
	uint16_t x454 = 845U;
	volatile uint32_t x455 = 253U;
	uint16_t x456 = UINT16_MAX;
	uint32_t t77 = 375U;

	t77 = ((x453+x454)*(x455-x456));

	if (t77 != 4239869288U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x465 = -372LL;
	volatile int16_t x466 = INT16_MIN;
	int16_t x467 = -1;
	volatile int64_t t78 = 1107919720553LL;

	t78 = ((x465+x466)*(x467-x468));

	if (t78 != -142203123198320LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x469 = -1;
	volatile int32_t x470 = INT32_MAX;
	volatile int16_t x471 = INT16_MIN;
	static uint64_t x472 = 131900772766796562LLU;

	t79 = ((x469+x470)*(x471-x472));

	if (t79 != 1907925982904030756LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x474 = 16341;
	int32_t x475 = 21;
	static int16_t x476 = -3638;
	volatile uint64_t t80 = 152LLU;

	t80 = ((x473+x474)*(x475-x476));

	if (t80 != 706805813739LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x485 = INT8_MIN;
	int8_t x486 = -1;
	uint64_t x487 = UINT64_MAX;
	static volatile int8_t x488 = INT8_MAX;

	t81 = ((x485+x486)*(x487-x488));

	if (t81 != 16512LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x498 = 302275283394016LLU;
	static int8_t x499 = INT8_MIN;
	static int16_t x500 = INT16_MIN;
	volatile uint64_t t82 = 12831619228537LLU;

	t82 = ((x497+x498)*(x499-x500));

	if (t82 != 9866195156114411520LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x501 = 3631527688709407LLU;
	static int64_t x502 = -1LL;
	volatile uint32_t x504 = 2907U;
	volatile uint64_t t83 = 901207088454LLU;

	t83 = ((x501+x502)*(x503-x504));

	if (t83 != 11230773898509726374LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x509 = 13U;
	volatile uint8_t x510 = 1U;
	volatile uint32_t x511 = UINT32_MAX;
	int16_t x512 = INT16_MIN;

	t84 = ((x509+x510)*(x511-x512));

	if (t84 != 458738U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x517 = -1;
	static uint8_t x518 = 0U;
	volatile int16_t x519 = 3519;
	volatile int8_t x520 = 16;
	static volatile int32_t t85 = 74246;

	t85 = ((x517+x518)*(x519-x520));

	if (t85 != -3503) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x521 = INT16_MIN;
	int16_t x522 = 110;
	int16_t x523 = INT16_MIN;
	uint8_t x524 = 1U;
	int32_t t86 = 0;

	t86 = ((x521+x522)*(x523-x524));

	if (t86 != 1070170002) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x529 = -1LL;
	int8_t x530 = INT8_MIN;
	static uint16_t x531 = 21U;
	uint32_t x532 = 295795U;
	int64_t t87 = -1348796201829820LL;

	t87 = ((x529+x530)*(x531-x532));

	if (t87 != -554012626338LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x538 = INT16_MIN;
	uint64_t x539 = UINT64_MAX;
	static int32_t x540 = -109095;
	volatile uint64_t t88 = 6837703104LLU;

	t88 = ((x537+x538)*(x539-x540));

	if (t88 != 63531969730566LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x545 = UINT16_MAX;
	int64_t x546 = 54298761547926LL;
	volatile uint8_t x547 = 1U;
	int8_t x548 = 4;
	static int64_t t89 = 0LL;

	t89 = ((x545+x546)*(x547-x548));

	if (t89 != -162896284840383LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x566 = INT32_MIN;
	volatile uint8_t x568 = 1U;

	t90 = ((x565+x566)*(x567-x568));

	if (t90 != 31495594314839513LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x569 = 33646U;
	uint16_t x571 = 12U;
	uint32_t x572 = 1672U;
	volatile uint64_t t91 = 73911LLU;

	t91 = ((x569+x570)*(x571-x572));

	if (t91 != 12730298141268980312LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x573 = 437695933LLU;
	int16_t x575 = INT16_MIN;

	t92 = ((x573+x574)*(x575-x576));

	if (t92 != 18446729730164414736LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x581 = 3698LLU;
	uint16_t x582 = 745U;
	static volatile uint64_t x583 = 5844375969598940870LLU;
	static uint64_t t93 = 398413965462LLU;

	t93 = ((x581+x582)*(x583-x584));

	if (t93 != 2770149181900390333LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x593 = -954918129067LL;
	uint16_t x595 = 6U;
	volatile int32_t x596 = -1;
	int64_t t94 = 544009184121LL;

	t94 = ((x593+x594)*(x595-x596));

	if (t94 != -6684426674100LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x606 = -5049764;
	int8_t x607 = -1;
	static int32_t x608 = INT32_MAX;
	int64_t t95 = -22411693LL;

	t95 = ((x605+x606)*(x607-x608));

	if (t95 != 10844287763742720LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x609 = INT64_MAX;
	static uint16_t x611 = UINT16_MAX;
	volatile uint64_t x612 = UINT64_MAX;
	uint64_t t96 = 908980229LLU;

	t96 = ((x609+x610)*(x611-x612));

	if (t96 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x622 = INT16_MIN;
	volatile int32_t x623 = -6;
	static uint32_t x624 = UINT32_MAX;
	volatile uint32_t t97 = 7101U;

	t97 = ((x621+x622)*(x623-x624));

	if (t97 != 163205U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x630 = -1;
	int64_t x631 = -1LL;
	int16_t x632 = 4859;
	int64_t t98 = 55368437850LL;

	t98 = ((x629+x630)*(x631-x632));

	if (t98 != 869940LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x634 = INT32_MIN;
	int8_t x635 = -1;
	volatile uint64_t x636 = 11759283109320LLU;
	uint64_t t99 = 19169571675570LLU;

	t99 = ((x633+x634)*(x635-x636));

	if (t99 != 11759283109321LLU) { NG(); } else { ; }
	
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

