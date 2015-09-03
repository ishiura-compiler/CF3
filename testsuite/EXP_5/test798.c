#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -1LL;
int32_t x9 = INT32_MIN;
volatile uint64_t x16 = 5440754314868LLU;
int16_t x17 = INT16_MIN;
volatile int32_t t3 = -528223472;
int8_t x24 = -1;
volatile uint16_t x26 = 856U;
uint8_t x29 = 1U;
int32_t t6 = -1014;
int16_t x35 = INT16_MIN;
volatile int32_t x40 = -1;
int32_t t8 = -449231;
static int64_t x41 = -1LL;
volatile int64_t t10 = 5351456672LL;
int32_t x53 = INT32_MIN;
uint32_t x60 = UINT32_MAX;
uint64_t x63 = UINT64_MAX;
int16_t x71 = INT16_MIN;
int64_t x86 = INT64_MIN;
uint64_t x87 = UINT64_MAX;
volatile int32_t x88 = INT32_MIN;
uint16_t x114 = 2258U;
volatile int64_t x134 = 6845LL;
int64_t x148 = -1LL;
static int32_t t22 = 804397721;
int32_t x153 = INT32_MAX;
volatile uint16_t x154 = 1U;
uint32_t x160 = 472U;
uint8_t x175 = UINT8_MAX;
uint64_t x178 = 4374178432745613LLU;
int8_t x189 = INT8_MIN;
int8_t x191 = INT8_MIN;
static volatile int32_t t30 = 165300;
static int32_t x205 = INT32_MIN;
int16_t x208 = INT16_MAX;
static int8_t x211 = INT8_MIN;
static int32_t x212 = INT32_MAX;
int8_t x217 = INT8_MIN;
uint8_t x220 = UINT8_MAX;
int32_t x236 = INT32_MIN;
volatile int16_t x239 = 12161;
uint8_t x240 = 2U;
static uint16_t x268 = 5U;
static int8_t x271 = INT8_MIN;
int8_t x278 = INT8_MIN;
volatile int32_t x287 = -10;
static int32_t x290 = INT32_MAX;
uint32_t x292 = UINT32_MAX;
volatile int16_t x294 = INT16_MIN;
int32_t t46 = -7048478;
uint64_t x297 = 1580901261463LLU;
int16_t x298 = -1;
static volatile uint64_t t47 = 409307232517897LLU;
static int8_t x313 = INT8_MAX;
int32_t t50 = -76;
int32_t x326 = -35520;
static uint32_t x336 = 3446469U;
volatile int32_t t53 = 203273925;
static int32_t x340 = -1;
int16_t x344 = INT16_MAX;
volatile int64_t t55 = -92659LL;
int8_t x366 = -1;
static uint16_t x372 = 3558U;
static uint32_t t62 = 40U;
int64_t x391 = INT64_MIN;
int32_t x399 = -1;
static int64_t x409 = 12623086503LL;
volatile int8_t x410 = -1;
static uint64_t x411 = UINT64_MAX;
int64_t t66 = 156975690244641833LL;
volatile int32_t t68 = -951127323;
int64_t x426 = 679907728447LL;
volatile int64_t t69 = -114139405630630LL;
uint8_t x429 = UINT8_MAX;
int32_t x432 = 927;
volatile int32_t t70 = -12;
int16_t x442 = -2;
volatile uint32_t t72 = 10U;
volatile int8_t x483 = INT8_MIN;
static volatile int16_t x484 = INT16_MAX;
static int32_t x492 = 60023072;
int64_t t77 = 1336424LL;
uint64_t x500 = 1LLU;
int8_t x506 = INT8_MIN;
volatile int32_t t81 = -127036036;
volatile uint8_t x523 = 8U;
int32_t x546 = -28580582;
int8_t x550 = -1;
int16_t x559 = -191;
static int8_t x562 = -29;
uint8_t x564 = 31U;
int16_t x568 = INT16_MAX;
int8_t x573 = INT8_MIN;
static volatile int8_t x576 = INT8_MAX;
int64_t x594 = -1205LL;
uint64_t x595 = 20923086937LLU;
int32_t x607 = -1;
int64_t x608 = INT64_MAX;
static int8_t x609 = -1;
int32_t t96 = 22510096;
int32_t x614 = -572;
int64_t t97 = 35075342778LL;
uint16_t x622 = UINT16_MAX;
int32_t x632 = INT32_MAX;


void f0(void) {
	uint8_t x5 = 2U;
	int32_t x6 = 24;
	uint8_t x8 = UINT8_MAX;
	int32_t t0 = 0;

	t0 = (x5%((x6%x7)<=x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x10 = INT8_MAX;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MIN;
	static int32_t t1 = 107;

	t1 = (x9%((x10%x11)<=x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	volatile uint8_t x14 = 7U;
	int64_t x15 = INT64_MIN;
	static int64_t t2 = -10LL;

	t2 = (x13%((x14%x15)<=x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = UINT16_MAX;
	volatile uint16_t x19 = 13U;
	static int32_t x20 = INT32_MAX;

	t3 = (x17%((x18%x19)<=x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	volatile int32_t x22 = -1;
	int64_t x23 = 275738752892018LL;
	volatile int32_t t4 = -654;

	t4 = (x21%((x22%x23)<=x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = -1;
	int32_t x27 = -1;
	volatile uint16_t x28 = UINT16_MAX;
	int32_t t5 = 188;

	t5 = (x25%((x26%x27)<=x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x30 = -1LL;
	int8_t x31 = -3;
	volatile uint8_t x32 = UINT8_MAX;

	t6 = (x29%((x30%x31)<=x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x34 = 720064053514394LLU;
	int32_t x36 = INT32_MIN;
	volatile int32_t t7 = 6;

	t7 = (x33%((x34%x35)<=x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	volatile uint64_t x38 = 8810394LLU;
	int16_t x39 = -1;

	t8 = (x37%((x38%x39)<=x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x42 = INT8_MAX;
	int64_t x43 = -3839643141263630LL;
	uint8_t x44 = UINT8_MAX;
	int64_t t9 = -28LL;

	t9 = (x41%((x42%x43)<=x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MAX;
	int8_t x50 = -6;
	static int32_t x51 = -14;
	static uint16_t x52 = UINT16_MAX;

	t10 = (x49%((x50%x51)<=x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x54 = UINT32_MAX;
	static int16_t x55 = -1;
	uint8_t x56 = 6U;
	volatile int32_t t11 = 1254507;

	t11 = (x53%((x54%x55)<=x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = 204;
	static uint64_t x59 = UINT64_MAX;
	volatile int64_t t12 = -275652962922375076LL;

	t12 = (x57%((x58%x59)<=x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = 956;
	volatile uint16_t x62 = 3U;
	int16_t x64 = -2210;
	int32_t t13 = -1;

	t13 = (x61%((x62%x63)<=x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = UINT32_MAX;
	uint16_t x67 = UINT16_MAX;
	uint16_t x68 = 2U;
	static int64_t t14 = -269857401559632987LL;

	t14 = (x65%((x66%x67)<=x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	static int32_t x70 = INT32_MIN;
	static uint64_t x72 = 4119LLU;
	volatile int64_t t15 = 43513LL;

	t15 = (x69%((x70%x71)<=x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x85 = -1;
	int32_t t16 = 50;

	t16 = (x85%((x86%x87)<=x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = 148U;
	int16_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = -1LL;
	int32_t t17 = 659981423;

	t17 = (x93%((x94%x95)<=x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x113 = UINT8_MAX;
	static int8_t x115 = INT8_MIN;
	volatile uint32_t x116 = 492U;
	int32_t t18 = -35;

	t18 = (x113%((x114%x115)<=x116));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x121 = -10;
	uint64_t x122 = 1198320999321LLU;
	uint64_t x123 = 2029LLU;
	int16_t x124 = -9;
	int32_t t19 = -417121435;

	t19 = (x121%((x122%x123)<=x124));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x133 = UINT64_MAX;
	volatile int32_t x135 = -1418;
	static int16_t x136 = INT16_MAX;
	volatile uint64_t t20 = 6LLU;

	t20 = (x133%((x134%x135)<=x136));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x141 = -1;
	int64_t x142 = 34076452742588531LL;
	uint8_t x143 = UINT8_MAX;
	static int8_t x144 = INT8_MAX;
	int32_t t21 = 6162;

	t21 = (x141%((x142%x143)<=x144));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x145 = -1;
	static int8_t x146 = -1;
	int16_t x147 = INT16_MIN;

	t22 = (x145%((x146%x147)<=x148));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x149 = 6971U;
	volatile uint8_t x150 = UINT8_MAX;
	int16_t x151 = INT16_MIN;
	volatile uint8_t x152 = UINT8_MAX;
	int32_t t23 = -87263;

	t23 = (x149%((x150%x151)<=x152));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x155 = -1;
	static int16_t x156 = 417;
	static int32_t t24 = -206220;

	t24 = (x153%((x154%x155)<=x156));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x157 = UINT16_MAX;
	volatile int8_t x158 = 0;
	volatile uint32_t x159 = 101104U;
	volatile int32_t t25 = 1214;

	t25 = (x157%((x158%x159)<=x160));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x173 = 210054;
	int16_t x174 = 9;
	int16_t x176 = INT16_MAX;
	volatile int32_t t26 = -1578482;

	t26 = (x173%((x174%x175)<=x176));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x177 = 1;
	uint8_t x179 = 6U;
	volatile uint32_t x180 = 589638U;
	volatile int32_t t27 = 1277111;

	t27 = (x177%((x178%x179)<=x180));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x185 = 94369LLU;
	volatile uint16_t x186 = 2U;
	uint64_t x187 = 59LLU;
	uint8_t x188 = 43U;
	uint64_t t28 = 26LLU;

	t28 = (x185%((x186%x187)<=x188));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x190 = -1;
	int8_t x192 = -1;
	volatile int32_t t29 = 1907;

	t29 = (x189%((x190%x191)<=x192));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = 31;
	static volatile uint16_t x194 = UINT16_MAX;
	int8_t x195 = -1;
	volatile uint64_t x196 = UINT64_MAX;

	t30 = (x193%((x194%x195)<=x196));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x197 = -1;
	uint8_t x198 = 12U;
	static int8_t x199 = -1;
	int64_t x200 = 1LL;
	int32_t t31 = 10455;

	t31 = (x197%((x198%x199)<=x200));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x206 = 208LLU;
	int8_t x207 = -3;
	volatile int32_t t32 = 4023;

	t32 = (x205%((x206%x207)<=x208));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = UINT16_MAX;
	int32_t t33 = -6611;

	t33 = (x209%((x210%x211)<=x212));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MAX;
	int32_t t34 = 78;

	t34 = (x217%((x218%x219)<=x220));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x229 = 4581U;
	volatile uint16_t x230 = 29U;
	uint8_t x231 = 2U;
	static int32_t x232 = INT32_MAX;
	volatile int32_t t35 = 8;

	t35 = (x229%((x230%x231)<=x232));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x233 = -1LL;
	uint64_t x234 = 1603728LLU;
	int16_t x235 = 1;
	int64_t t36 = -85257335918493LL;

	t36 = (x233%((x234%x235)<=x236));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x237 = 0U;
	static volatile int64_t x238 = -1LL;
	static int32_t t37 = 6;

	t37 = (x237%((x238%x239)<=x240));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x253 = 63U;
	int64_t x254 = -3792661607LL;
	uint16_t x255 = UINT16_MAX;
	int32_t x256 = INT32_MAX;
	static int32_t t38 = -2704402;

	t38 = (x253%((x254%x255)<=x256));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x257 = INT32_MIN;
	uint64_t x258 = 1578651311LLU;
	uint64_t x259 = UINT64_MAX;
	int64_t x260 = -661LL;
	int32_t t39 = 24232;

	t39 = (x257%((x258%x259)<=x260));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x265 = 25763423U;
	uint16_t x266 = UINT16_MAX;
	uint16_t x267 = UINT16_MAX;
	volatile uint32_t t40 = 29428855U;

	t40 = (x265%((x266%x267)<=x268));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x269 = INT16_MIN;
	uint8_t x270 = 14U;
	uint32_t x272 = UINT32_MAX;
	int32_t t41 = 13;

	t41 = (x269%((x270%x271)<=x272));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x279 = 4058U;
	int16_t x280 = -1;
	static int32_t t42 = 556529;

	t42 = (x277%((x278%x279)<=x280));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x281 = INT32_MAX;
	int32_t x282 = -553507870;
	uint16_t x283 = 1U;
	static volatile uint64_t x284 = 195883LLU;
	int32_t t43 = -11017869;

	t43 = (x281%((x282%x283)<=x284));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x285 = 8;
	int32_t x286 = INT32_MIN;
	uint8_t x288 = 15U;
	int32_t t44 = 2642258;

	t44 = (x285%((x286%x287)<=x288));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x289 = -1;
	uint32_t x291 = 1021498U;
	int32_t t45 = -393;

	t45 = (x289%((x290%x291)<=x292));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x293 = 0;
	int8_t x295 = -1;
	static uint32_t x296 = 4993U;

	t46 = (x293%((x294%x295)<=x296));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x299 = 141184037140827758LL;
	static int32_t x300 = INT32_MAX;

	t47 = (x297%((x298%x299)<=x300));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x305 = 850;
	uint16_t x306 = 28054U;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t48 = 882187;

	t48 = (x305%((x306%x307)<=x308));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x314 = INT64_MIN;
	static int8_t x315 = -1;
	volatile uint32_t x316 = 89419972U;
	int32_t t49 = 234243;

	t49 = (x313%((x314%x315)<=x316));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x317 = INT32_MAX;
	static uint16_t x318 = UINT16_MAX;
	static uint16_t x319 = UINT16_MAX;
	uint16_t x320 = UINT16_MAX;

	t50 = (x317%((x318%x319)<=x320));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x325 = -6705;
	int32_t x327 = -1;
	uint8_t x328 = 121U;
	int32_t t51 = 55632693;

	t51 = (x325%((x326%x327)<=x328));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x329 = UINT32_MAX;
	volatile int32_t x330 = INT32_MIN;
	uint8_t x331 = UINT8_MAX;
	uint16_t x332 = 2U;
	static uint32_t t52 = 290884U;

	t52 = (x329%((x330%x331)<=x332));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x333 = INT32_MAX;
	volatile uint32_t x334 = 16U;
	volatile int8_t x335 = INT8_MAX;

	t53 = (x333%((x334%x335)<=x336));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x337 = INT32_MIN;
	volatile int32_t x338 = INT32_MIN;
	int32_t x339 = 205459;
	int32_t t54 = 0;

	t54 = (x337%((x338%x339)<=x340));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	int64_t x343 = 410752LL;

	t55 = (x341%((x342%x343)<=x344));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x345 = 15U;
	int64_t x346 = -210262360949343930LL;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = UINT64_MAX;
	int32_t t56 = -526509;

	t56 = (x345%((x346%x347)<=x348));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x349 = INT16_MIN;
	static uint32_t x350 = UINT32_MAX;
	static uint64_t x351 = 1433264LLU;
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t57 = 13;

	t57 = (x349%((x350%x351)<=x352));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x353 = -1;
	volatile int64_t x354 = -286257373LL;
	int16_t x355 = 32;
	uint16_t x356 = 29648U;
	volatile int32_t t58 = 816889215;

	t58 = (x353%((x354%x355)<=x356));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x361 = 7735143;
	volatile int16_t x362 = -11;
	uint16_t x363 = UINT16_MAX;
	static uint8_t x364 = 8U;
	int32_t t59 = -1;

	t59 = (x361%((x362%x363)<=x364));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x365 = 175563LLU;
	static volatile int64_t x367 = -788780089907914262LL;
	uint8_t x368 = UINT8_MAX;
	uint64_t t60 = 398409294140180LLU;

	t60 = (x365%((x366%x367)<=x368));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x369 = 6726U;
	volatile int32_t x370 = INT32_MIN;
	int32_t x371 = -224713;
	volatile uint32_t t61 = 20992U;

	t61 = (x369%((x370%x371)<=x372));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x381 = 385801U;
	int64_t x382 = -2987LL;
	static volatile int16_t x383 = INT16_MIN;
	static int8_t x384 = INT8_MIN;

	t62 = (x381%((x382%x383)<=x384));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x385 = 31526240U;
	int16_t x386 = 1;
	volatile uint32_t x387 = UINT32_MAX;
	static int32_t x388 = 148740;
	volatile uint32_t t63 = 25096U;

	t63 = (x385%((x386%x387)<=x388));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x389 = INT64_MAX;
	uint8_t x390 = UINT8_MAX;
	int16_t x392 = 3833;
	static volatile int64_t t64 = 277724920622833LL;

	t64 = (x389%((x390%x391)<=x392));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x397 = INT32_MIN;
	volatile int16_t x398 = INT16_MIN;
	volatile uint32_t x400 = 0U;
	volatile int32_t t65 = -9363378;

	t65 = (x397%((x398%x399)<=x400));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x412 = -1LL;

	t66 = (x409%((x410%x411)<=x412));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x413 = INT32_MIN;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MAX;
	uint16_t x416 = 2743U;
	int32_t t67 = 1;

	t67 = (x413%((x414%x415)<=x416));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x421 = INT16_MAX;
	int16_t x422 = -1;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = UINT8_MAX;

	t68 = (x421%((x422%x423)<=x424));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x425 = -1327811259542184LL;
	int64_t x427 = -1LL;
	volatile uint16_t x428 = UINT16_MAX;

	t69 = (x425%((x426%x427)<=x428));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x430 = -1;
	int32_t x431 = INT32_MIN;

	t70 = (x429%((x430%x431)<=x432));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x433 = 160134LLU;
	volatile int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MAX;
	int64_t x436 = 105056855451163636LL;
	static uint64_t t71 = 266341874912691183LLU;

	t71 = (x433%((x434%x435)<=x436));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x441 = 206U;
	int64_t x443 = -719535LL;
	uint16_t x444 = UINT16_MAX;

	t72 = (x441%((x442%x443)<=x444));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x453 = INT32_MIN;
	uint8_t x454 = 25U;
	uint64_t x455 = 46678LLU;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t73 = 55;

	t73 = (x453%((x454%x455)<=x456));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x461 = 77U;
	uint8_t x462 = 125U;
	static int16_t x463 = INT16_MAX;
	int32_t x464 = 1966086;
	int32_t t74 = 19119;

	t74 = (x461%((x462%x463)<=x464));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x473 = UINT16_MAX;
	volatile int64_t x474 = INT64_MAX;
	int8_t x475 = -1;
	uint32_t x476 = 594U;
	volatile int32_t t75 = 1;

	t75 = (x473%((x474%x475)<=x476));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x481 = UINT64_MAX;
	int8_t x482 = INT8_MIN;
	volatile uint64_t t76 = 415403781857LLU;

	t76 = (x481%((x482%x483)<=x484));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x489 = -776066833608888LL;
	static uint8_t x490 = 11U;
	uint64_t x491 = UINT64_MAX;

	t77 = (x489%((x490%x491)<=x492));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x493 = 104452;
	uint32_t x494 = 192305889U;
	static uint32_t x495 = 7U;
	int32_t x496 = -1;
	int32_t t78 = 23;

	t78 = (x493%((x494%x495)<=x496));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x497 = -1;
	int64_t x498 = INT64_MAX;
	int64_t x499 = -1LL;
	int32_t t79 = -21404521;

	t79 = (x497%((x498%x499)<=x500));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x501 = INT8_MIN;
	int16_t x502 = INT16_MIN;
	volatile uint32_t x503 = 2079U;
	int64_t x504 = INT64_MAX;
	volatile int32_t t80 = 184;

	t80 = (x501%((x502%x503)<=x504));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x505 = -1;
	static volatile int32_t x507 = -1;
	uint16_t x508 = 54U;

	t81 = (x505%((x506%x507)<=x508));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x517 = UINT16_MAX;
	uint32_t x518 = UINT32_MAX;
	volatile int16_t x519 = -1;
	volatile int64_t x520 = INT64_MAX;
	int32_t t82 = 0;

	t82 = (x517%((x518%x519)<=x520));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x521 = UINT8_MAX;
	uint8_t x522 = 1U;
	volatile uint64_t x524 = UINT64_MAX;
	int32_t t83 = -1007758;

	t83 = (x521%((x522%x523)<=x524));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x525 = 298307990LLU;
	int32_t x526 = INT32_MIN;
	uint16_t x527 = UINT16_MAX;
	volatile uint8_t x528 = 15U;
	uint64_t t84 = 1003LLU;

	t84 = (x525%((x526%x527)<=x528));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x545 = INT8_MIN;
	static uint64_t x547 = 10LLU;
	static int16_t x548 = 15;
	int32_t t85 = 1001841372;

	t85 = (x545%((x546%x547)<=x548));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x549 = -1;
	int16_t x551 = INT16_MIN;
	int32_t x552 = INT32_MAX;
	int32_t t86 = 822472870;

	t86 = (x549%((x550%x551)<=x552));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x557 = -1;
	static int8_t x558 = INT8_MIN;
	int16_t x560 = -1;
	int32_t t87 = 204;

	t87 = (x557%((x558%x559)<=x560));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x561 = -1;
	int64_t x563 = INT64_MAX;
	volatile int32_t t88 = 18431826;

	t88 = (x561%((x562%x563)<=x564));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x565 = -1;
	uint8_t x566 = UINT8_MAX;
	volatile int64_t x567 = INT64_MIN;
	int32_t t89 = -1;

	t89 = (x565%((x566%x567)<=x568));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x574 = 4017;
	int8_t x575 = 6;
	int32_t t90 = -250445;

	t90 = (x573%((x574%x575)<=x576));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x581 = 50U;
	uint32_t x582 = UINT32_MAX;
	static volatile int32_t x583 = -1;
	uint8_t x584 = UINT8_MAX;
	uint32_t t91 = 7270496U;

	t91 = (x581%((x582%x583)<=x584));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x593 = INT32_MIN;
	int64_t x596 = INT64_MAX;
	volatile int32_t t92 = -76667;

	t92 = (x593%((x594%x595)<=x596));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x597 = -1;
	volatile uint16_t x598 = UINT16_MAX;
	static int64_t x599 = INT64_MAX;
	static uint32_t x600 = 118304U;
	int32_t t93 = 16078;

	t93 = (x597%((x598%x599)<=x600));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x601 = INT16_MAX;
	volatile uint8_t x602 = UINT8_MAX;
	uint32_t x603 = 11993332U;
	static uint64_t x604 = 9075300LLU;
	int32_t t94 = -64142;

	t94 = (x601%((x602%x603)<=x604));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x605 = INT8_MAX;
	static volatile int16_t x606 = -1;
	static int32_t t95 = -43256526;

	t95 = (x605%((x606%x607)<=x608));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x610 = -1;
	static int16_t x611 = 866;
	uint8_t x612 = UINT8_MAX;

	t96 = (x609%((x610%x611)<=x612));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x613 = -1LL;
	uint16_t x615 = 1498U;
	volatile uint32_t x616 = UINT32_MAX;

	t97 = (x613%((x614%x615)<=x616));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x621 = 6U;
	int32_t x623 = 2;
	static uint8_t x624 = UINT8_MAX;
	int32_t t98 = -1;

	t98 = (x621%((x622%x623)<=x624));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x629 = INT32_MIN;
	static int16_t x630 = INT16_MAX;
	static uint16_t x631 = UINT16_MAX;
	static volatile int32_t t99 = -3;

	t99 = (x629%((x630%x631)<=x632));

	if (t99 != 0) { NG(); } else { ; }
	
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

