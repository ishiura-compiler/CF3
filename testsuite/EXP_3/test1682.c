#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
uint64_t x25 = UINT64_MAX;
int32_t x30 = 336;
int8_t x31 = INT8_MIN;
uint16_t x50 = UINT16_MAX;
uint64_t x51 = UINT64_MAX;
int32_t t5 = 1;
int16_t x56 = INT16_MAX;
volatile int64_t t6 = -6733354223248653LL;
volatile int16_t x59 = INT16_MIN;
int64_t x63 = INT64_MIN;
static uint8_t x64 = 8U;
int64_t x66 = 29216010378497838LL;
volatile int64_t x70 = INT64_MAX;
static uint8_t x89 = 1U;
int32_t x90 = INT32_MIN;
int64_t x92 = 4LL;
int32_t t12 = 75488715;
uint32_t x112 = UINT32_MAX;
static int32_t x125 = -1;
int8_t x140 = 4;
volatile uint64_t t16 = 6696885502160LLU;
uint64_t t17 = 288717LLU;
uint8_t x155 = 120U;
int32_t x156 = INT32_MAX;
volatile int32_t t21 = 64030104;
int16_t x177 = -53;
static int16_t x180 = 118;
volatile int32_t t22 = -107947188;
volatile int16_t x181 = INT16_MIN;
uint64_t x183 = 198365122LLU;
volatile uint64_t t24 = 326723LLU;
uint32_t x218 = 176236132U;
uint32_t t28 = 216796061U;
uint32_t x226 = 36186U;
volatile int32_t x227 = INT32_MIN;
uint8_t x238 = UINT8_MAX;
static int8_t x240 = 0;
int8_t x275 = 2;
int8_t x286 = -21;
volatile int32_t t37 = 1;
volatile uint64_t t38 = 86LLU;
static uint16_t x303 = UINT16_MAX;
static int32_t x310 = -23;
uint32_t x311 = 4U;
int64_t x319 = -1LL;
int32_t t42 = 6;
uint32_t x325 = 3U;
volatile uint32_t x327 = 381596757U;
uint16_t x336 = 3312U;
volatile int64_t x349 = INT64_MIN;
static uint64_t x350 = 2158925514484242LLU;
uint16_t x366 = 5U;
int32_t x367 = -1;
uint8_t x374 = 109U;
static volatile int32_t t50 = -1;
int64_t x377 = -1LL;
int16_t x395 = INT16_MIN;
int64_t x396 = 494566586489LL;
int32_t x397 = -1;
int32_t t56 = -63007;
int32_t x402 = INT32_MAX;
volatile uint16_t x403 = UINT16_MAX;
uint64_t t57 = 64994069810LLU;
static uint16_t x414 = 9135U;
static int8_t x425 = 24;
static uint64_t t62 = 3253311906908656LLU;
volatile int8_t x455 = INT8_MIN;
int8_t x457 = INT8_MAX;
volatile int8_t x460 = -1;
static volatile uint64_t t66 = 12216LLU;
uint8_t x477 = 11U;
volatile int32_t x480 = INT32_MAX;
int64_t x485 = -3693930170105874971LL;
int16_t x487 = 0;
int8_t x493 = INT8_MIN;
volatile int16_t x501 = -1;
volatile uint64_t x502 = UINT64_MAX;
int32_t t72 = 512959;
volatile uint8_t x539 = UINT8_MAX;
static int32_t x557 = 29306421;
volatile int32_t x559 = -8195478;
int64_t x560 = 194011412476LL;
volatile int32_t t77 = -14508117;
uint32_t x611 = 1690U;
uint16_t x641 = UINT16_MAX;
int64_t x642 = 1834572LL;
static int64_t t84 = -50815433060208556LL;
uint64_t x647 = 221129356LLU;
volatile int64_t t85 = 874368289826LL;
static int16_t x656 = 0;
volatile uint32_t t86 = 386U;
static int64_t t88 = -100LL;
uint64_t x666 = UINT64_MAX;
static int32_t x668 = 119531;
volatile int16_t x671 = INT16_MIN;
volatile int32_t x674 = INT32_MIN;
int64_t x679 = INT64_MIN;
int32_t t92 = 0;
int64_t x691 = INT64_MIN;
volatile int32_t t94 = 5249;
int64_t x710 = -1LL;
static int32_t x711 = INT32_MIN;
static int32_t x713 = INT32_MIN;
int16_t x717 = INT16_MAX;
volatile int32_t t99 = -328141569;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = INT8_MIN;
	int32_t x8 = -1;
	uint32_t t0 = 3561U;

	t0 = ((x5^x6)%(x7<=x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x13 = -1LL;
	int64_t x14 = -1LL;
	int16_t x15 = INT16_MAX;
	uint64_t x16 = UINT64_MAX;
	volatile int64_t t1 = -10481344LL;

	t1 = ((x13^x14)%(x15<=x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x21 = 558U;
	volatile int8_t x22 = -1;
	int64_t x23 = -7LL;
	int16_t x24 = 7;
	volatile int32_t t2 = 1407;

	t2 = ((x21^x22)%(x23<=x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x26 = UINT16_MAX;
	static uint32_t x27 = 918491080U;
	volatile int8_t x28 = -1;
	volatile uint64_t t3 = 4LLU;

	t3 = ((x25^x26)%(x27<=x28));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MAX;
	int32_t x32 = -1;
	int32_t t4 = -19709327;

	t4 = ((x29^x30)%(x31<=x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x49 = 55U;
	volatile int8_t x52 = -1;

	t5 = ((x49^x50)%(x51<=x52));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x53 = INT64_MAX;
	int32_t x54 = -18912;
	int16_t x55 = -1;

	t6 = ((x53^x54)%(x55<=x56));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x57 = UINT32_MAX;
	static uint32_t x58 = 10480U;
	int8_t x60 = 3;
	volatile uint32_t t7 = 1013854097U;

	t7 = ((x57^x58)%(x59<=x60));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x61 = INT16_MAX;
	uint64_t x62 = 57621274LLU;
	static volatile uint64_t t8 = 40LLU;

	t8 = ((x61^x62)%(x63<=x64));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x65 = 2822352U;
	int16_t x67 = -1;
	int64_t x68 = INT64_MAX;
	volatile int64_t t9 = -176881716LL;

	t9 = ((x65^x66)%(x67<=x68));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	uint8_t x72 = 0U;
	volatile int64_t t10 = -839981433078861LL;

	t10 = ((x69^x70)%(x71<=x72));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x91 = INT64_MIN;
	static volatile int32_t t11 = -41;

	t11 = ((x89^x90)%(x91<=x92));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x101 = UINT16_MAX;
	static volatile uint8_t x102 = 67U;
	int32_t x103 = -10396;
	int8_t x104 = INT8_MIN;

	t12 = ((x101^x102)%(x103<=x104));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x109 = 6LLU;
	static int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	static volatile uint64_t t13 = 17821059279738121LLU;

	t13 = ((x109^x110)%(x111<=x112));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x126 = -1LL;
	volatile uint8_t x127 = 0U;
	uint64_t x128 = 12LLU;
	int64_t t14 = 18372203434LL;

	t14 = ((x125^x126)%(x127<=x128));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x129 = UINT16_MAX;
	int64_t x130 = 283359234341LL;
	uint32_t x131 = 381297679U;
	int16_t x132 = -1;
	static volatile int64_t t15 = -3036037928LL;

	t15 = ((x129^x130)%(x131<=x132));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x137 = -1;
	static uint64_t x138 = 221488228461153LLU;
	volatile int16_t x139 = -100;

	t16 = ((x137^x138)%(x139<=x140));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x146 = 24393464LLU;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -1;

	t17 = ((x145^x146)%(x147<=x148));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x153 = -1;
	int64_t x154 = -1LL;
	static int64_t t18 = 2122764621057850265LL;

	t18 = ((x153^x154)%(x155<=x156));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x157 = 60658U;
	int16_t x158 = INT16_MAX;
	int8_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	uint32_t t19 = 944262023U;

	t19 = ((x157^x158)%(x159<=x160));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x165 = 14;
	volatile int32_t x166 = INT32_MIN;
	int8_t x167 = 0;
	uint8_t x168 = UINT8_MAX;
	int32_t t20 = -1;

	t20 = ((x165^x166)%(x167<=x168));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x169 = -9;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -156301297243006674LL;
	int32_t x172 = -7820;

	t21 = ((x169^x170)%(x171<=x172));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x178 = -18;
	int8_t x179 = 14;

	t22 = ((x177^x178)%(x179<=x180));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x182 = 3735216544LLU;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t23 = 397568LLU;

	t23 = ((x181^x182)%(x183<=x184));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x185 = 493262932161LLU;
	int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	int64_t x188 = INT64_MAX;

	t24 = ((x185^x186)%(x187<=x188));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x193 = 40;
	int8_t x194 = -1;
	int16_t x195 = INT16_MIN;
	volatile uint64_t x196 = UINT64_MAX;
	int32_t t25 = 1983480;

	t25 = ((x193^x194)%(x195<=x196));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x205 = -18LL;
	int32_t x206 = -1;
	volatile int64_t x207 = -147384183322922LL;
	int64_t x208 = 204690007107966076LL;
	int64_t t26 = -80104185542985LL;

	t26 = ((x205^x206)%(x207<=x208));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x209 = -1;
	int32_t x210 = INT32_MAX;
	volatile uint32_t x211 = 363090U;
	static int64_t x212 = INT64_MAX;
	volatile int32_t t27 = 175;

	t27 = ((x209^x210)%(x211<=x212));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x217 = 349U;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 6095U;

	t28 = ((x217^x218)%(x219<=x220));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x225 = 1383U;
	int16_t x228 = INT16_MAX;
	static uint32_t t29 = 55738322U;

	t29 = ((x225^x226)%(x227<=x228));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x229 = 7U;
	static volatile int64_t x230 = 366LL;
	int64_t x231 = 7432439LL;
	uint64_t x232 = UINT64_MAX;
	volatile int64_t t30 = 531LL;

	t30 = ((x229^x230)%(x231<=x232));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x237 = 1579U;
	int32_t x239 = -1;
	volatile uint32_t t31 = 745U;

	t31 = ((x237^x238)%(x239<=x240));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x245 = -1;
	static uint8_t x246 = 99U;
	static uint8_t x247 = 126U;
	int8_t x248 = INT8_MAX;
	volatile int32_t t32 = 40;

	t32 = ((x245^x246)%(x247<=x248));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x257 = 1U;
	static int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MAX;
	int64_t x260 = INT64_MAX;
	int32_t t33 = -2450671;

	t33 = ((x257^x258)%(x259<=x260));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x269 = -1LL;
	static int8_t x270 = INT8_MAX;
	int8_t x271 = 6;
	uint64_t x272 = 28LLU;
	int64_t t34 = -1LL;

	t34 = ((x269^x270)%(x271<=x272));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t x274 = INT32_MIN;
	uint32_t x276 = 45U;
	volatile int32_t t35 = -117;

	t35 = ((x273^x274)%(x275<=x276));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x285 = -1;
	int64_t x287 = INT64_MIN;
	int16_t x288 = -1543;
	int32_t t36 = -3;

	t36 = ((x285^x286)%(x287<=x288));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x293 = 1439U;
	int8_t x294 = -1;
	int32_t x295 = -1;
	uint8_t x296 = 106U;

	t37 = ((x293^x294)%(x295<=x296));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x297 = 4U;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = -13;
	uint8_t x300 = UINT8_MAX;

	t38 = ((x297^x298)%(x299<=x300));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x301 = 1U;
	int64_t x302 = INT64_MIN;
	int32_t x304 = INT32_MAX;
	volatile int64_t t39 = -18960991046804791LL;

	t39 = ((x301^x302)%(x303<=x304));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x309 = 0U;
	int32_t x312 = -99;
	int32_t t40 = -4;

	t40 = ((x309^x310)%(x311<=x312));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x317 = 232003973U;
	static int64_t x318 = INT64_MAX;
	uint32_t x320 = UINT32_MAX;
	static volatile int64_t t41 = -3680571740534693658LL;

	t41 = ((x317^x318)%(x319<=x320));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x321 = INT16_MIN;
	uint8_t x322 = UINT8_MAX;
	volatile uint16_t x323 = 2U;
	static uint8_t x324 = 66U;

	t42 = ((x321^x322)%(x323<=x324));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x326 = 422668451U;
	static uint64_t x328 = 119162632753819194LLU;
	volatile uint32_t t43 = 525U;

	t43 = ((x325^x326)%(x327<=x328));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	static volatile int32_t x332 = 22;
	uint32_t t44 = 208970U;

	t44 = ((x329^x330)%(x331<=x332));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x333 = INT64_MAX;
	volatile int32_t x334 = -1;
	int16_t x335 = 1186;
	int64_t t45 = -708531476LL;

	t45 = ((x333^x334)%(x335<=x336));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x351 = INT16_MIN;
	static uint16_t x352 = 1572U;
	volatile uint64_t t46 = 424361908011LLU;

	t46 = ((x349^x350)%(x351<=x352));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x353 = -1;
	int8_t x354 = 6;
	int64_t x355 = -618990742335910522LL;
	uint8_t x356 = UINT8_MAX;
	static volatile int32_t t47 = 6231422;

	t47 = ((x353^x354)%(x355<=x356));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x365 = 30;
	int8_t x368 = -1;
	static volatile int32_t t48 = 3;

	t48 = ((x365^x366)%(x367<=x368));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = 36048U;
	int64_t x371 = INT64_MIN;
	uint16_t x372 = 2U;
	volatile uint32_t t49 = 443573329U;

	t49 = ((x369^x370)%(x371<=x372));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x373 = 0U;
	int16_t x375 = 108;
	static uint32_t x376 = 717550U;

	t50 = ((x373^x374)%(x375<=x376));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x378 = 3044870LL;
	int32_t x379 = INT32_MIN;
	static int8_t x380 = INT8_MIN;
	volatile int64_t t51 = 247684479LL;

	t51 = ((x377^x378)%(x379<=x380));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x381 = INT16_MIN;
	uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MIN;
	static int8_t x384 = -1;
	static int32_t t52 = 2;

	t52 = ((x381^x382)%(x383<=x384));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x385 = -1;
	int64_t x386 = INT64_MIN;
	uint16_t x387 = 0U;
	volatile uint16_t x388 = 0U;
	int64_t t53 = 2758684604255292573LL;

	t53 = ((x385^x386)%(x387<=x388));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	volatile int8_t x391 = INT8_MIN;
	volatile int8_t x392 = -1;
	int32_t t54 = 16;

	t54 = ((x389^x390)%(x391<=x392));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x393 = 1047188171045LLU;
	int8_t x394 = INT8_MIN;
	uint64_t t55 = 29794551290476359LLU;

	t55 = ((x393^x394)%(x395<=x396));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x398 = -1;
	volatile int64_t x399 = INT64_MIN;
	int8_t x400 = INT8_MAX;

	t56 = ((x397^x398)%(x399<=x400));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x401 = 1203597008LLU;
	static uint64_t x404 = UINT64_MAX;

	t57 = ((x401^x402)%(x403<=x404));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x413 = UINT32_MAX;
	uint32_t x415 = 29727U;
	int8_t x416 = -7;
	volatile uint32_t t58 = 11550352U;

	t58 = ((x413^x414)%(x415<=x416));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x417 = INT16_MAX;
	int64_t x418 = -1LL;
	int32_t x419 = -1;
	int16_t x420 = INT16_MAX;
	int64_t t59 = 15LL;

	t59 = ((x417^x418)%(x419<=x420));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x426 = INT16_MIN;
	static uint16_t x427 = 1U;
	int64_t x428 = 1096789LL;
	volatile int32_t t60 = -7574153;

	t60 = ((x425^x426)%(x427<=x428));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x433 = 51;
	static int16_t x434 = 59;
	static int64_t x435 = INT64_MIN;
	volatile uint8_t x436 = 7U;
	int32_t t61 = 0;

	t61 = ((x433^x434)%(x435<=x436));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x441 = 2227946202712233LLU;
	volatile uint8_t x442 = UINT8_MAX;
	int16_t x443 = -1;
	int8_t x444 = 40;

	t62 = ((x441^x442)%(x443<=x444));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x445 = INT64_MIN;
	int8_t x446 = -1;
	int64_t x447 = -798398991LL;
	static int32_t x448 = -1;
	int64_t t63 = -55831LL;

	t63 = ((x445^x446)%(x447<=x448));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x453 = INT64_MAX;
	static int16_t x454 = INT16_MIN;
	static uint8_t x456 = 0U;
	volatile int64_t t64 = -1359LL;

	t64 = ((x453^x454)%(x455<=x456));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x458 = INT64_MIN;
	int16_t x459 = INT16_MIN;
	volatile int64_t t65 = -19826026768279056LL;

	t65 = ((x457^x458)%(x459<=x460));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x473 = 0U;
	volatile uint64_t x474 = UINT64_MAX;
	uint16_t x475 = 1U;
	uint32_t x476 = 2274U;

	t66 = ((x473^x474)%(x475<=x476));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x478 = -15;
	volatile int16_t x479 = INT16_MIN;
	static volatile int32_t t67 = -726557;

	t67 = ((x477^x478)%(x479<=x480));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x486 = UINT64_MAX;
	uint32_t x488 = 297813U;
	uint64_t t68 = 2811018LLU;

	t68 = ((x485^x486)%(x487<=x488));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x494 = INT16_MAX;
	uint16_t x495 = 1987U;
	int64_t x496 = 42382515021924506LL;
	volatile int32_t t69 = -1858;

	t69 = ((x493^x494)%(x495<=x496));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x503 = -1;
	int32_t x504 = -1;
	static volatile uint64_t t70 = 2224689661123792596LLU;

	t70 = ((x501^x502)%(x503<=x504));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x505 = 12U;
	int8_t x506 = INT8_MIN;
	int8_t x507 = INT8_MIN;
	int8_t x508 = 1;
	int32_t t71 = -107327300;

	t71 = ((x505^x506)%(x507<=x508));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x525 = 12844U;
	static int32_t x526 = -1;
	static uint64_t x527 = 1460529LLU;
	uint64_t x528 = 182905537309LLU;

	t72 = ((x525^x526)%(x527<=x528));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x529 = -66405571LL;
	uint8_t x530 = 6U;
	uint16_t x531 = UINT16_MAX;
	uint32_t x532 = UINT32_MAX;
	int64_t t73 = 435213167LL;

	t73 = ((x529^x530)%(x531<=x532));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x533 = UINT8_MAX;
	static uint64_t x534 = 1LLU;
	int8_t x535 = INT8_MAX;
	uint32_t x536 = 351569U;
	volatile uint64_t t74 = 17569802214049633LLU;

	t74 = ((x533^x534)%(x535<=x536));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x537 = -2;
	int64_t x538 = INT64_MIN;
	uint64_t x540 = 600125865544418434LLU;
	volatile int64_t t75 = -14685580LL;

	t75 = ((x537^x538)%(x539<=x540));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x558 = INT8_MAX;
	int32_t t76 = 4492;

	t76 = ((x557^x558)%(x559<=x560));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x573 = 48U;
	static int16_t x574 = 0;
	volatile int8_t x575 = -1;
	static int64_t x576 = -1LL;

	t77 = ((x573^x574)%(x575<=x576));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x581 = 38LLU;
	int16_t x582 = INT16_MIN;
	static int16_t x583 = 1078;
	static int64_t x584 = 55545475LL;
	volatile uint64_t t78 = 144825760009449LLU;

	t78 = ((x581^x582)%(x583<=x584));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x589 = -1;
	uint64_t x590 = 1640951489717399020LLU;
	uint64_t x591 = 1688LLU;
	uint64_t x592 = 1603349291460113LLU;
	static volatile uint64_t t79 = 0LLU;

	t79 = ((x589^x590)%(x591<=x592));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x601 = 0U;
	int64_t x602 = INT64_MAX;
	volatile uint32_t x603 = UINT32_MAX;
	uint64_t x604 = UINT64_MAX;
	int64_t t80 = -1134543446LL;

	t80 = ((x601^x602)%(x603<=x604));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x609 = -1;
	volatile uint8_t x610 = UINT8_MAX;
	uint64_t x612 = UINT64_MAX;
	static volatile int32_t t81 = 8785397;

	t81 = ((x609^x610)%(x611<=x612));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x613 = UINT16_MAX;
	static uint32_t x614 = UINT32_MAX;
	volatile uint8_t x615 = 78U;
	static int64_t x616 = 8118484155113LL;
	uint32_t t82 = 7171931U;

	t82 = ((x613^x614)%(x615<=x616));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x617 = 464501259U;
	volatile uint8_t x618 = 126U;
	int8_t x619 = -1;
	int32_t x620 = 126886940;
	uint32_t t83 = 8981442U;

	t83 = ((x617^x618)%(x619<=x620));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x643 = 5425521761037600529LLU;
	static int64_t x644 = -253LL;

	t84 = ((x641^x642)%(x643<=x644));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x645 = 223;
	static volatile int64_t x646 = -11198LL;
	volatile int8_t x648 = INT8_MIN;

	t85 = ((x645^x646)%(x647<=x648));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x653 = 469U;
	int16_t x654 = INT16_MIN;
	int32_t x655 = INT32_MIN;

	t86 = ((x653^x654)%(x655<=x656));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x657 = UINT32_MAX;
	int64_t x658 = INT64_MAX;
	int64_t x659 = -5920LL;
	int8_t x660 = -27;
	int64_t t87 = 1LL;

	t87 = ((x657^x658)%(x659<=x660));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x661 = 1;
	int64_t x662 = 1LL;
	int16_t x663 = INT16_MIN;
	static volatile uint16_t x664 = 24593U;

	t88 = ((x661^x662)%(x663<=x664));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x665 = INT8_MIN;
	static volatile int8_t x667 = INT8_MAX;
	volatile uint64_t t89 = 265311842LLU;

	t89 = ((x665^x666)%(x667<=x668));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x669 = UINT64_MAX;
	int8_t x670 = INT8_MIN;
	int16_t x672 = INT16_MAX;
	uint64_t t90 = 16066LLU;

	t90 = ((x669^x670)%(x671<=x672));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x673 = 537396;
	volatile int64_t x675 = INT64_MIN;
	int8_t x676 = INT8_MIN;
	volatile int32_t t91 = -254784855;

	t91 = ((x673^x674)%(x675<=x676));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x677 = -177;
	volatile int32_t x678 = -70;
	uint32_t x680 = 14646172U;

	t92 = ((x677^x678)%(x679<=x680));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x681 = 33;
	uint32_t x682 = 12757475U;
	int64_t x683 = INT64_MIN;
	uint8_t x684 = 20U;
	volatile uint32_t t93 = 504U;

	t93 = ((x681^x682)%(x683<=x684));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x689 = INT32_MAX;
	volatile uint8_t x690 = UINT8_MAX;
	uint64_t x692 = UINT64_MAX;

	t94 = ((x689^x690)%(x691<=x692));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x701 = UINT8_MAX;
	uint16_t x702 = 66U;
	static int64_t x703 = INT64_MIN;
	volatile int8_t x704 = 51;
	volatile int32_t t95 = -56;

	t95 = ((x701^x702)%(x703<=x704));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x709 = INT16_MAX;
	int64_t x712 = -1LL;
	static volatile int64_t t96 = -16974969562911601LL;

	t96 = ((x709^x710)%(x711<=x712));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x714 = INT8_MIN;
	int16_t x715 = INT16_MIN;
	static volatile int64_t x716 = INT64_MAX;
	int32_t t97 = -92367104;

	t97 = ((x713^x714)%(x715<=x716));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x718 = 48;
	int64_t x719 = INT64_MIN;
	uint16_t x720 = 292U;
	int32_t t98 = 100200;

	t98 = ((x717^x718)%(x719<=x720));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x725 = INT32_MAX;
	uint16_t x726 = 0U;
	volatile int8_t x727 = INT8_MAX;
	uint64_t x728 = 534048129115LLU;

	t99 = ((x725^x726)%(x727<=x728));

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

