#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
int8_t x6 = -1;
uint8_t x8 = UINT8_MAX;
uint64_t x27 = 207514235182813725LLU;
uint64_t t2 = 97816086510LLU;
int8_t x53 = INT8_MAX;
static volatile int8_t x56 = 25;
uint32_t x61 = 1206533482U;
uint32_t t5 = 6610U;
int64_t t6 = -2381341LL;
int16_t x69 = INT16_MAX;
static volatile uint32_t t7 = 125U;
int8_t x95 = -4;
int8_t x97 = -18;
int8_t x98 = INT8_MIN;
volatile int16_t x100 = INT16_MIN;
volatile int32_t t10 = -2;
static volatile int8_t x113 = -1;
static uint32_t x116 = UINT32_MAX;
int8_t x120 = INT8_MIN;
int8_t x122 = INT8_MIN;
static volatile uint64_t t13 = 10434LLU;
int8_t x126 = 0;
int8_t x128 = INT8_MIN;
volatile uint64_t x150 = UINT64_MAX;
static int32_t x158 = 2947389;
volatile uint64_t x165 = 4357942745858LLU;
int64_t x166 = -1LL;
int8_t x168 = -1;
int8_t x182 = INT8_MIN;
volatile uint8_t x186 = 0U;
volatile int16_t x187 = INT16_MIN;
static uint16_t x203 = 14U;
static uint32_t t25 = 443495945U;
uint8_t x230 = UINT8_MAX;
int32_t t26 = 0;
uint16_t x243 = 14U;
static uint8_t x248 = 104U;
uint8_t x253 = 1U;
uint64_t x256 = 206424115806054LLU;
int16_t x265 = INT16_MAX;
volatile uint16_t x276 = UINT16_MAX;
static int16_t x277 = 1;
int32_t t33 = 181140420;
static volatile int16_t x297 = INT16_MAX;
int16_t x299 = INT16_MIN;
uint32_t x300 = UINT32_MAX;
uint64_t x301 = 589960012164287LLU;
uint8_t x303 = 18U;
uint16_t x313 = 243U;
int64_t x314 = 3LL;
int8_t x317 = -1;
static int16_t x320 = INT16_MIN;
static int16_t x321 = INT16_MIN;
int16_t x325 = -1;
static int8_t x335 = -1;
int32_t x343 = INT32_MAX;
int64_t t43 = -3814LL;
uint8_t x377 = 0U;
int32_t t44 = 192581;
uint64_t x406 = 119016854814085LLU;
int64_t x418 = -1LL;
int8_t x419 = INT8_MAX;
int64_t x421 = -1LL;
volatile int16_t x422 = INT16_MIN;
uint64_t x427 = 828411175269892027LLU;
volatile uint32_t x435 = UINT32_MAX;
int64_t x451 = 25700701532224LL;
uint32_t x463 = 16148784U;
int8_t x470 = -1;
int64_t x479 = -62755266706LL;
volatile int8_t x492 = 11;
volatile uint32_t t62 = 111665780U;
int32_t x504 = INT32_MIN;
static int16_t x539 = INT16_MIN;
uint8_t x542 = 11U;
int32_t t68 = -761;
volatile uint32_t t69 = 54849988U;
static uint8_t x570 = UINT8_MAX;
uint8_t x575 = UINT8_MAX;
int64_t x581 = 1LL;
int32_t x583 = INT32_MIN;
int64_t x586 = INT64_MIN;
int16_t x587 = INT16_MAX;
int64_t x588 = 343LL;
volatile uint64_t t75 = 345892277873LLU;
int8_t x603 = INT8_MIN;
uint32_t x615 = 2029U;
int16_t x627 = INT16_MIN;
uint64_t t81 = 11046644LLU;
int32_t x637 = -1;
uint64_t x645 = 20914616973LLU;
int64_t x646 = INT64_MIN;
int32_t x652 = -365710;
int32_t x672 = INT32_MIN;
int16_t x677 = 73;
uint64_t t89 = 313135893169639LLU;
volatile int64_t x684 = -91583100205LL;
int16_t x685 = -7;
volatile int64_t t91 = INT64_MIN;
uint64_t x689 = 7057018988448898143LLU;
int64_t t93 = 94679421257518920LL;
volatile int16_t x697 = INT16_MIN;
uint16_t x699 = 0U;
int8_t x702 = -1;
static int32_t x708 = INT32_MIN;
int8_t x709 = -1;
uint16_t x711 = 32310U;
uint16_t x723 = UINT16_MAX;
static int32_t x724 = INT32_MIN;


void f0(void) {
	uint64_t x7 = UINT64_MAX;
	volatile uint64_t t0 = 5830951528932LLU;

	t0 = (((x5*x6)*x7)+x8);

	if (t0 != 254LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = INT32_MAX;
	uint8_t x26 = 0U;
	volatile uint32_t x28 = UINT32_MAX;
	volatile uint64_t t1 = 3181997LLU;

	t1 = (((x25*x26)*x27)+x28);

	if (t1 != 4294967295LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x33 = 2678263947795667411LLU;
	volatile uint64_t x34 = 2449926847669860495LLU;
	static int64_t x35 = INT64_MIN;
	int32_t x36 = 173967976;

	t2 = (((x33*x34)*x35)+x36);

	if (t2 != 9223372037028743784LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x41 = 3268U;
	static int64_t x42 = -1LL;
	static int8_t x43 = -1;
	uint64_t x44 = 11159676135468LLU;
	uint64_t t3 = 122666303354173LLU;

	t3 = (((x41*x42)*x43)+x44);

	if (t3 != 11159676138736LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x54 = 0;
	int8_t x55 = INT8_MIN;
	volatile int32_t t4 = 42;

	t4 = (((x53*x54)*x55)+x56);

	if (t4 != 25) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x62 = 1384;
	static uint32_t x63 = 296694U;
	uint8_t x64 = UINT8_MAX;

	t5 = (((x61*x62)*x63)+x64);

	if (t5 != 3008577119U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x65 = UINT16_MAX;
	uint32_t x66 = 663U;
	int64_t x67 = -1LL;
	static int8_t x68 = 29;

	t6 = (((x65*x66)*x67)+x68);

	if (t6 != -43449676LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = 3U;
	int32_t x72 = INT32_MAX;

	t7 = (((x69*x70)*x71)+x72);

	if (t7 != 2147385346U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x89 = UINT32_MAX;
	volatile int64_t x90 = -1LL;
	uint16_t x91 = 0U;
	static int16_t x92 = 0;
	volatile int64_t t8 = -3LL;

	t8 = (((x89*x90)*x91)+x92);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x93 = -1;
	int8_t x94 = -2;
	uint64_t x96 = UINT64_MAX;
	static volatile uint64_t t9 = 603611LLU;

	t9 = (((x93*x94)*x95)+x96);

	if (t9 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x99 = INT16_MIN;

	t10 = (((x97*x98)*x99)+x100);

	if (t10 != -75530240) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x114 = -1LL;
	static uint8_t x115 = 13U;
	volatile int64_t t11 = -64327320186491390LL;

	t11 = (((x113*x114)*x115)+x116);

	if (t11 != 4294967308LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x117 = 0U;
	int8_t x118 = INT8_MAX;
	uint16_t x119 = UINT16_MAX;
	volatile int32_t t12 = -3150026;

	t12 = (((x117*x118)*x119)+x120);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x121 = 743LLU;
	volatile int16_t x123 = -1;
	uint16_t x124 = 26242U;

	t13 = (((x121*x122)*x123)+x124);

	if (t13 != 121346LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x125 = INT16_MAX;
	uint32_t x127 = 1U;
	static volatile uint32_t t14 = 300263U;

	t14 = (((x125*x126)*x127)+x128);

	if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x145 = INT8_MAX;
	int16_t x146 = INT16_MIN;
	uint32_t x147 = 218U;
	int8_t x148 = 15;
	uint32_t t15 = 72920U;

	t15 = (((x145*x146)*x147)+x148);

	if (t15 != 3387752463U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x149 = INT8_MIN;
	uint32_t x151 = UINT32_MAX;
	uint64_t x152 = 5852140138992LLU;
	volatile uint64_t t16 = 64472LLU;

	t16 = (((x149*x150)*x151)+x152);

	if (t16 != 6401895952752LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	static volatile int16_t x155 = -1;
	int32_t x156 = INT32_MIN;
	volatile int32_t t17 = -37961524;

	t17 = (((x153*x154)*x155)+x156);

	if (t17 != -1073774592) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x157 = 1U;
	int64_t x159 = 2587LL;
	volatile uint8_t x160 = 45U;
	int64_t t18 = -8524875471LL;

	t18 = (((x157*x158)*x159)+x160);

	if (t18 != 7624895388LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x167 = UINT32_MAX;
	uint64_t t19 = 2401697LLU;

	t19 = (((x165*x166)*x167)+x168);

	if (t19 != 6223667872588176129LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x173 = INT16_MAX;
	uint16_t x174 = 1U;
	uint32_t x175 = 1U;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t20 = -250961LL;

	t20 = (((x173*x174)*x175)+x176);

	if (t20 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x181 = INT8_MIN;
	int8_t x183 = INT8_MAX;
	uint8_t x184 = 1U;
	volatile int32_t t21 = 5836;

	t21 = (((x181*x182)*x183)+x184);

	if (t21 != 2080769) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x185 = INT16_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t22 = -3;

	t22 = (((x185*x186)*x187)+x188);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x189 = 3186U;
	uint32_t x190 = UINT32_MAX;
	static volatile uint32_t x191 = 112U;
	volatile int64_t x192 = -716LL;
	static int64_t t23 = 1LL;

	t23 = (((x189*x190)*x191)+x192);

	if (t23 != 4294609748LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x193 = -1;
	uint8_t x194 = 1U;
	int16_t x195 = INT16_MIN;
	static int32_t x196 = INT32_MIN;
	static volatile int32_t t24 = -2033;

	t24 = (((x193*x194)*x195)+x196);

	if (t24 != -2147450880) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x201 = INT16_MAX;
	uint8_t x202 = 0U;
	uint32_t x204 = 19U;

	t25 = (((x201*x202)*x203)+x204);

	if (t25 != 19U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x229 = -296;
	volatile int16_t x231 = -134;
	int8_t x232 = 1;

	t26 = (((x229*x230)*x231)+x232);

	if (t26 != 10114321) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x241 = 73603U;
	volatile int16_t x242 = INT16_MIN;
	int64_t x244 = 481LL;
	static volatile int64_t t27 = -89LL;

	t27 = (((x241*x242)*x243)+x244);

	if (t27 != 594215393LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x245 = INT16_MAX;
	static uint64_t x246 = 8257493LLU;
	static int8_t x247 = INT8_MIN;
	volatile uint64_t t28 = 1642918842747925LLU;

	t28 = (((x245*x246)*x247)+x248);

	if (t28 != 18446709440330590952LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x250 = 0;
	int32_t x251 = -116362;
	volatile uint8_t x252 = 42U;
	int32_t t29 = -31164767;

	t29 = (((x249*x250)*x251)+x252);

	if (t29 != 42) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x254 = -1;
	volatile int16_t x255 = INT16_MAX;
	volatile uint64_t t30 = 1LLU;

	t30 = (((x253*x254)*x255)+x256);

	if (t30 != 206424115773287LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x266 = UINT8_MAX;
	static int8_t x267 = 0;
	static volatile uint16_t x268 = 9U;
	int32_t t31 = -276120;

	t31 = (((x265*x266)*x267)+x268);

	if (t31 != 9) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x273 = 0;
	int8_t x274 = INT8_MAX;
	static int16_t x275 = INT16_MAX;
	int32_t t32 = -66711;

	t32 = (((x273*x274)*x275)+x276);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x278 = -1;
	volatile int8_t x279 = -1;
	uint8_t x280 = 10U;

	t33 = (((x277*x278)*x279)+x280);

	if (t33 != 11) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x298 = -1;
	static volatile uint32_t t34 = 1015989360U;

	t34 = (((x297*x298)*x299)+x300);

	if (t34 != 1073709055U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x302 = -1;
	uint8_t x304 = UINT8_MAX;
	uint64_t t35 = 24775741328LLU;

	t35 = (((x301*x302)*x303)+x304);

	if (t35 != 18436124793490594705LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x315 = INT16_MIN;
	volatile int16_t x316 = INT16_MAX;
	volatile int64_t t36 = -86721LL;

	t36 = (((x313*x314)*x315)+x316);

	if (t36 != -23855105LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x318 = 1846715758287231LLU;
	static int64_t x319 = -1LL;
	volatile uint64_t t37 = 153820675LLU;

	t37 = (((x317*x318)*x319)+x320);

	if (t37 != 1846715758254463LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x322 = 120U;
	uint16_t x323 = 82U;
	int8_t x324 = INT8_MIN;
	int32_t t38 = -99573226;

	t38 = (((x321*x322)*x323)+x324);

	if (t38 != -322437248) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x326 = INT16_MIN;
	int16_t x327 = -1;
	uint8_t x328 = 16U;
	static int32_t t39 = 1;

	t39 = (((x325*x326)*x327)+x328);

	if (t39 != -32752) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x333 = 43LL;
	uint32_t x334 = UINT32_MAX;
	int64_t x336 = INT64_MAX;
	int64_t t40 = -18LL;

	t40 = (((x333*x334)*x335)+x336);

	if (t40 != 9223371852171182122LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x341 = 0U;
	int16_t x342 = INT16_MAX;
	static int64_t x344 = -31159992072LL;
	static volatile int64_t t41 = -34350665LL;

	t41 = (((x341*x342)*x343)+x344);

	if (t41 != -31159992072LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x365 = INT8_MIN;
	volatile int8_t x366 = 1;
	int64_t x367 = 1149814775648444LL;
	uint8_t x368 = 21U;
	int64_t t42 = -791198488327798109LL;

	t42 = (((x365*x366)*x367)+x368);

	if (t42 != -147176291283000811LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x373 = INT8_MIN;
	static uint8_t x374 = 3U;
	int64_t x375 = -1LL;
	uint8_t x376 = 1U;

	t43 = (((x373*x374)*x375)+x376);

	if (t43 != 385LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x378 = 5U;
	int32_t x379 = INT32_MIN;
	static int8_t x380 = INT8_MAX;

	t44 = (((x377*x378)*x379)+x380);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t45 = 50912711560LLU;

	t45 = (((x381*x382)*x383)+x384);

	if (t45 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x393 = -1;
	uint32_t x394 = 494U;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = 27;
	uint32_t t46 = 993942909U;

	t46 = (((x393*x394)*x395)+x396);

	if (t46 != 4294841353U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x405 = -1;
	uint16_t x407 = 339U;
	int64_t x408 = 348LL;
	uint64_t t47 = 667113488764937036LLU;

	t47 = (((x405*x406)*x407)+x408);

	if (t47 != 18406397359927577149LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x417 = -1;
	volatile int8_t x420 = -4;
	int64_t t48 = -63113LL;

	t48 = (((x417*x418)*x419)+x420);

	if (t48 != 123LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x423 = -1;
	int8_t x424 = INT8_MIN;
	int64_t t49 = 516445LL;

	t49 = (((x421*x422)*x423)+x424);

	if (t49 != -32896LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x425 = 88LLU;
	static int32_t x426 = -58509;
	uint8_t x428 = 3U;
	static uint64_t t50 = 4LLU;

	t50 = (((x425*x426)*x427)+x428);

	if (t50 != 13119759199453376603LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x433 = -1;
	volatile uint32_t x434 = 294692U;
	int64_t x436 = -1LL;
	int64_t t51 = 6916014LL;

	t51 = (((x433*x434)*x435)+x436);

	if (t51 != 294691LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x437 = -1;
	int16_t x438 = -1;
	int8_t x439 = 1;
	uint32_t x440 = 428021U;
	volatile uint32_t t52 = 105U;

	t52 = (((x437*x438)*x439)+x440);

	if (t52 != 428022U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x445 = -86837LL;
	uint8_t x446 = UINT8_MAX;
	volatile uint16_t x447 = 18U;
	uint16_t x448 = 3U;
	static int64_t t53 = 1LL;

	t53 = (((x445*x446)*x447)+x448);

	if (t53 != -398581827LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x449 = 15;
	uint16_t x450 = 24U;
	int32_t x452 = -1;
	volatile int64_t t54 = 1440422848LL;

	t54 = (((x449*x450)*x451)+x452);

	if (t54 != 9252252551600639LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x453 = INT32_MIN;
	static uint64_t x454 = 34501856785517013LLU;
	volatile uint16_t x455 = UINT16_MAX;
	int16_t x456 = INT16_MAX;
	uint64_t t55 = 3310317087340LLU;

	t55 = (((x453*x454)*x455)+x456);

	if (t55 != 6771976685525958655LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x457 = 0;
	int32_t x458 = INT32_MIN;
	volatile int64_t x459 = -1LL;
	int8_t x460 = INT8_MAX;
	int64_t t56 = 2LL;

	t56 = (((x457*x458)*x459)+x460);

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x461 = 32297U;
	static int8_t x462 = 17;
	uint8_t x464 = 0U;
	volatile uint32_t t57 = 104588U;

	t57 = (((x461*x462)*x463)+x464);

	if (t57 != 1661207472U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x469 = INT16_MAX;
	int8_t x471 = INT8_MIN;
	static uint16_t x472 = 12U;
	int32_t t58 = -60451;

	t58 = (((x469*x470)*x471)+x472);

	if (t58 != 4194188) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x477 = 1LL;
	uint64_t x478 = 47476LLU;
	int32_t x480 = -13042996;
	static volatile uint64_t t59 = 309862LLU;

	t59 = (((x477*x478)*x479)+x480);

	if (t59 != 18443764704654374564LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x485 = UINT32_MAX;
	int8_t x486 = -1;
	int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	static volatile uint32_t t60 = 335U;

	t60 = (((x485*x486)*x487)+x488);

	if (t60 != 4294967040U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x489 = 3742744U;
	int8_t x490 = INT8_MAX;
	static volatile uint16_t x491 = UINT16_MAX;
	uint32_t t61 = 63U;

	t61 = (((x489*x490)*x491)+x492);

	if (t61 != 3549630499U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x497 = 1U;
	int32_t x498 = INT32_MIN;
	static volatile uint32_t x499 = UINT32_MAX;
	static volatile int8_t x500 = -26;

	t62 = (((x497*x498)*x499)+x500);

	if (t62 != 2147483622U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x501 = UINT64_MAX;
	volatile int64_t x502 = 161156855LL;
	uint16_t x503 = UINT16_MAX;
	volatile uint64_t t63 = 2086041LLU;

	t63 = (((x501*x502)*x503)+x504);

	if (t63 != 18446733510147575543LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x517 = 113011148315649110LLU;
	int8_t x518 = INT8_MIN;
	int16_t x519 = -2;
	uint16_t x520 = UINT16_MAX;
	volatile uint64_t t64 = 2633252266LLU;

	t64 = (((x517*x518)*x519)+x520);

	if (t64 != 10484109895096686079LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x537 = INT16_MIN;
	uint64_t x538 = 1375836486744700LLU;
	int16_t x540 = -1;
	static uint64_t t65 = 139LLU;

	t65 = (((x537*x538)*x539)+x540);

	if (t65 != 4126404050268717055LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x541 = INT16_MIN;
	int8_t x543 = INT8_MIN;
	int64_t x544 = INT64_MIN;
	int64_t t66 = -286681291329LL;

	t66 = (((x541*x542)*x543)+x544);

	if (t66 != -9223372036808638464LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x557 = -20;
	uint8_t x558 = 51U;
	uint64_t x559 = UINT64_MAX;
	uint8_t x560 = 1U;
	volatile uint64_t t67 = 7LLU;

	t67 = (((x557*x558)*x559)+x560);

	if (t67 != 1021LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x561 = INT8_MAX;
	uint16_t x562 = 32U;
	int8_t x563 = 0;
	uint8_t x564 = 84U;

	t68 = (((x561*x562)*x563)+x564);

	if (t68 != 84) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x565 = 8008438U;
	int32_t x566 = INT32_MIN;
	int32_t x567 = 310;
	int8_t x568 = INT8_MIN;

	t69 = (((x565*x566)*x567)+x568);

	if (t69 != 4294967168U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x569 = 89U;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = 59U;
	int32_t t70 = 0;

	t70 = (((x569*x570)*x571)+x572);

	if (t70 != -743669701) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x573 = UINT32_MAX;
	volatile int64_t x574 = -1LL;
	uint32_t x576 = 14U;
	static int64_t t71 = 175LL;

	t71 = (((x573*x574)*x575)+x576);

	if (t71 != -1095216660211LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x577 = 1012019788U;
	int16_t x578 = -1;
	int8_t x579 = -1;
	int32_t x580 = INT32_MIN;
	uint32_t t72 = 13U;

	t72 = (((x577*x578)*x579)+x580);

	if (t72 != 3159503436U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x582 = -11;
	int64_t x584 = 56216156013573159LL;
	int64_t t73 = 110583921LL;

	t73 = (((x581*x582)*x583)+x584);

	if (t73 != 56216179635893287LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x585 = 3061638516LLU;
	volatile uint64_t t74 = 2306LLU;

	t74 = (((x585*x586)*x587)+x588);

	if (t74 != 343LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x597 = UINT8_MAX;
	int16_t x598 = -1;
	int32_t x599 = 15;
	uint64_t x600 = UINT64_MAX;

	t75 = (((x597*x598)*x599)+x600);

	if (t75 != 18446744073709547790LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x601 = 24U;
	volatile uint32_t x602 = 974657U;
	volatile uint16_t x604 = 454U;
	uint32_t t76 = 103698123U;

	t76 = (((x601*x602)*x603)+x604);

	if (t76 != 1300821446U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x609 = 0U;
	int32_t x610 = INT32_MIN;
	int8_t x611 = -1;
	volatile int32_t x612 = 787238;
	static volatile int32_t t77 = 1;

	t77 = (((x609*x610)*x611)+x612);

	if (t77 != 787238) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x613 = INT8_MAX;
	static uint16_t x614 = UINT16_MAX;
	int64_t x616 = -124LL;
	int64_t t78 = 45LL;

	t78 = (((x613*x614)*x615)+x616);

	if (t78 != 4002353393LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x617 = -303;
	uint8_t x618 = UINT8_MAX;
	int16_t x619 = -1;
	volatile uint64_t x620 = 52695LLU;
	volatile uint64_t t79 = 9LLU;

	t79 = (((x617*x618)*x619)+x620);

	if (t79 != 129960LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x625 = -1LL;
	int8_t x626 = INT8_MAX;
	uint16_t x628 = 97U;
	int64_t t80 = -40252053759801912LL;

	t80 = (((x625*x626)*x627)+x628);

	if (t80 != 4161633LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x633 = 11709LLU;
	int16_t x634 = -1;
	int64_t x635 = INT64_MIN;
	uint32_t x636 = UINT32_MAX;

	t81 = (((x633*x634)*x635)+x636);

	if (t81 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MAX;
	int16_t x640 = INT16_MIN;
	int32_t t82 = 27797756;

	t82 = (((x637*x638)*x639)+x640);

	if (t82 != -16512) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x647 = 41782;
	int64_t x648 = INT64_MIN;
	volatile uint64_t t83 = 43536158925LLU;

	t83 = (((x645*x646)*x647)+x648);

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x649 = -1;
	int16_t x650 = -47;
	int32_t x651 = -1;
	int32_t t84 = 0;

	t84 = (((x649*x650)*x651)+x652);

	if (t84 != -365757) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x653 = 2U;
	static int8_t x654 = INT8_MIN;
	uint8_t x655 = 14U;
	static volatile uint8_t x656 = 40U;
	volatile int32_t t85 = -421277;

	t85 = (((x653*x654)*x655)+x656);

	if (t85 != -3544) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x657 = UINT64_MAX;
	volatile uint64_t x658 = 618LLU;
	static int64_t x659 = -1LL;
	int16_t x660 = 57;
	static uint64_t t86 = 8773476608637602LLU;

	t86 = (((x657*x658)*x659)+x660);

	if (t86 != 675LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x661 = 98;
	uint32_t x662 = 103339025U;
	static uint8_t x663 = UINT8_MAX;
	int16_t x664 = INT16_MIN;
	volatile uint32_t t87 = 1866U;

	t87 = (((x661*x662)*x663)+x664);

	if (t87 != 1166857086U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x669 = 12358;
	int8_t x670 = -50;
	uint64_t x671 = UINT64_MAX;
	uint64_t t88 = 276072LLU;

	t88 = (((x669*x670)*x671)+x672);

	if (t88 != 18446744071562685868LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x678 = 136933297636964402LLU;
	int32_t x679 = INT32_MIN;
	int16_t x680 = INT16_MIN;

	t89 = (((x677*x678)*x679)+x680);

	if (t89 != 6164192996578263040LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x681 = 2920273579LL;
	volatile uint16_t x682 = 829U;
	static int8_t x683 = INT8_MAX;
	volatile int64_t t90 = -8776954050515911LL;

	t90 = (((x681*x682)*x683)+x684);

	if (t90 != 307363580117652LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x686 = 0LL;
	static int64_t x687 = INT64_MIN;
	int64_t x688 = INT64_MIN;

	t91 = (((x685*x686)*x687)+x688);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x690 = 1519041926402753LLU;
	volatile uint64_t x691 = UINT64_MAX;
	volatile int32_t x692 = -1;
	volatile uint64_t t92 = 46687285328541LLU;

	t92 = (((x689*x690)*x691)+x692);

	if (t92 != 796995749620035168LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x693 = 127;
	int32_t x694 = 6677331;
	static int64_t x695 = 21165LL;
	int64_t x696 = -1LL;

	t93 = (((x693*x694)*x695)+x696);

	if (t93 != 17948365248104LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x698 = -18;
	int32_t x700 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = (((x697*x698)*x699)+x700);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x701 = UINT8_MAX;
	static uint32_t x703 = UINT32_MAX;
	static uint8_t x704 = UINT8_MAX;
	uint32_t t95 = 25380U;

	t95 = (((x701*x702)*x703)+x704);

	if (t95 != 510U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x705 = 396U;
	int16_t x706 = 657;
	uint32_t x707 = 3210272U;
	uint32_t t96 = 449734841U;

	t96 = (((x705*x706)*x707)+x708);

	if (t96 != 4146715008U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x710 = 124605513U;
	int16_t x712 = INT16_MAX;
	volatile uint32_t t97 = 178911U;

	t97 = (((x709*x710)*x711)+x712);

	if (t97 != 2675231385U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x721 = INT32_MIN;
	uint64_t x722 = 226671577LLU;
	volatile uint64_t t98 = 438664650442484337LLU;

	t98 = (((x721*x722)*x723)+x724);

	if (t98 != 12165592499116572672LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x729 = 15U;
	int32_t x730 = -1;
	int16_t x731 = INT16_MAX;
	int8_t x732 = -1;
	static volatile int32_t t99 = 0;

	t99 = (((x729*x730)*x731)+x732);

	if (t99 != -491506) { NG(); } else { ; }
	
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

