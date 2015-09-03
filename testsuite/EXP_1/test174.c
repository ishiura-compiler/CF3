#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = -41927;
uint32_t x7 = 462550U;
volatile int32_t x19 = INT32_MIN;
static volatile int16_t x25 = -6;
int16_t x26 = INT16_MIN;
uint32_t x32 = 43969166U;
int64_t x41 = INT64_MIN;
volatile uint32_t x43 = 84302U;
static int32_t x44 = INT32_MIN;
volatile uint64_t x46 = 557516204540LLU;
int64_t x54 = -1LL;
uint64_t t8 = 4LLU;
uint16_t x57 = 72U;
static uint16_t x60 = 4U;
static uint32_t x76 = 129899U;
static uint64_t t12 = 3306104243LLU;
static volatile uint8_t x79 = UINT8_MAX;
static volatile int64_t t14 = -2383086269LL;
volatile uint32_t t15 = 38864936U;
int16_t x94 = -1;
uint64_t x103 = 23836962687434LLU;
volatile uint8_t x111 = UINT8_MAX;
int8_t x120 = -37;
uint64_t t22 = 200067878475775LLU;
uint32_t x132 = UINT32_MAX;
int16_t x134 = -904;
uint32_t t26 = 241355U;
uint16_t x157 = 148U;
volatile int64_t t33 = 41924646821LL;
uint64_t x186 = 17163681765LLU;
static volatile int32_t x187 = INT32_MAX;
uint16_t x189 = 1U;
int64_t x191 = 10241639998034LL;
int64_t t35 = 2806523453LL;
int16_t x193 = INT16_MIN;
static int64_t x199 = 850645LL;
static int64_t x218 = 14961LL;
volatile int32_t x219 = -1;
volatile int8_t x229 = 6;
int16_t x232 = -1;
int8_t x233 = -50;
int64_t x237 = -1LL;
int16_t x238 = INT16_MIN;
int64_t x248 = INT64_MIN;
static uint32_t x252 = UINT32_MAX;
volatile int8_t x254 = INT8_MAX;
int16_t x256 = INT16_MIN;
uint8_t x259 = 95U;
static volatile uint64_t x260 = 3LLU;
int64_t t51 = -1684837412579203LL;
volatile int32_t x277 = INT32_MAX;
volatile int64_t t54 = 18415LL;
int16_t x285 = INT16_MIN;
uint16_t x287 = 893U;
int8_t x294 = -1;
uint64_t x295 = 201LLU;
uint32_t x297 = 6U;
static int64_t x302 = INT64_MIN;
int32_t x308 = -1;
static int8_t x309 = -1;
volatile uint32_t x312 = UINT32_MAX;
uint32_t t60 = 3463151U;
static uint16_t x318 = 25459U;
uint8_t x320 = 41U;
int16_t x321 = -1;
int64_t t62 = 1005887LL;
uint64_t x328 = 4208422814668235540LLU;
uint16_t x330 = 0U;
static int64_t x331 = INT64_MAX;
uint8_t x332 = 25U;
static int16_t x334 = -1;
int32_t x336 = -34;
int64_t x338 = -32446LL;
int8_t x344 = -1;
uint64_t t67 = 69388068854LLU;
uint64_t x351 = 8288947131LLU;
int64_t x354 = INT64_MIN;
static uint32_t x359 = UINT32_MAX;
static int16_t x360 = -1;
volatile int64_t t76 = -3447195550228292LL;
int64_t x395 = INT64_MIN;
int32_t x415 = INT32_MIN;
int8_t x419 = INT8_MIN;
uint8_t x420 = UINT8_MAX;
int32_t x424 = INT32_MAX;
uint64_t x434 = UINT64_MAX;
int16_t x436 = -1;
uint64_t x439 = 3LLU;
volatile int16_t x440 = -1;
int16_t x455 = INT16_MAX;
volatile uint64_t t89 = 218767758641365LLU;
uint64_t x457 = UINT64_MAX;
uint64_t x460 = UINT64_MAX;
uint64_t x462 = UINT64_MAX;
uint64_t x465 = UINT64_MAX;
volatile int16_t x467 = -1;
volatile int32_t t94 = -4223388;
int64_t x498 = 684538459159984702LL;
volatile uint64_t x500 = 192LLU;
volatile uint32_t t98 = 24575621U;


void f0(void) {
	int8_t x6 = -1;
	static uint64_t x8 = UINT64_MAX;
	static volatile uint64_t t0 = 75218926102552LLU;

	t0 = (((x5-x6)+x7)%x8);

	if (t0 != 420624LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x18 = -1LL;
	int64_t x20 = INT64_MIN;
	volatile int64_t t1 = 22572364896686LL;

	t1 = (((x17-x18)+x19)%x20);

	if (t1 != -2147483392LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x27 = -1;
	volatile int32_t x28 = -1;
	int32_t t2 = 3;

	t2 = (((x25-x26)+x27)%x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = UINT64_MAX;
	static int8_t x30 = -1;
	volatile int8_t x31 = 3;
	volatile uint64_t t3 = 30287333306LLU;

	t3 = (((x29-x30)+x31)%x32);

	if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = 6430LL;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MIN;
	int64_t x36 = -1LL;
	uint64_t t4 = 3675229563287247656LLU;

	t4 = (((x33-x34)+x35)%x36);

	if (t4 != 6303LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x37 = -1;
	int64_t x38 = -1500398528400668030LL;
	volatile int8_t x39 = INT8_MIN;
	int64_t x40 = -231352LL;
	int64_t t5 = -28266170443LL;

	t5 = (((x37-x38)+x39)%x40);

	if (t5 != 100765LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x42 = -1;
	int64_t t6 = -72430633598764296LL;

	t6 = (((x41-x42)+x43)%x44);

	if (t6 != -2147399345LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = -1;
	int16_t x47 = -1;
	uint64_t x48 = 7935520827LLU;
	volatile uint64_t t7 = 3316LLU;

	t7 = (((x45-x46)+x47)%x48);

	if (t7 != 3048596166LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = -166;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -1;

	t8 = (((x53-x54)+x55)%x56);

	if (t8 != 18446744073709551450LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x58 = -16383807;
	uint16_t x59 = 0U;
	static int32_t t9 = -61;

	t9 = (((x57-x58)+x59)%x60);

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x61 = 56U;
	int32_t x62 = 30;
	static volatile int8_t x63 = INT8_MAX;
	static uint16_t x64 = 10890U;
	int32_t t10 = 12785;

	t10 = (((x61-x62)+x63)%x64);

	if (t10 != 153) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x65 = INT64_MIN;
	uint16_t x66 = 0U;
	int64_t x67 = 1688729107LL;
	int64_t x68 = -279LL;
	int64_t t11 = -487825646238245LL;

	t11 = (((x65-x66)+x67)%x68);

	if (t11 != -148LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MIN;

	t12 = (((x73-x74)+x75)%x76);

	if (t12 != 31081LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	volatile int64_t t13 = 1507LL;

	t13 = (((x77-x78)+x79)%x80);

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -1LL;
	uint8_t x82 = 1U;
	uint8_t x83 = UINT8_MAX;
	uint32_t x84 = 9538651U;

	t14 = (((x81-x82)+x83)%x84);

	if (t14 != 253LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = 1973U;
	volatile int32_t x91 = INT32_MAX;
	volatile uint8_t x92 = 13U;

	t15 = (((x89-x90)+x91)%x92);

	if (t15 != 11U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x93 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	int16_t x96 = INT16_MAX;
	volatile int32_t t16 = 8;

	t16 = (((x93-x94)+x95)%x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x101 = 463LLU;
	uint8_t x102 = 0U;
	int64_t x104 = INT64_MIN;
	uint64_t t17 = 23282392396997LLU;

	t17 = (((x101-x102)+x103)%x104);

	if (t17 != 23836962687897LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x109 = 1018068U;
	int32_t x110 = INT32_MIN;
	int8_t x112 = -1;
	uint32_t t18 = 24U;

	t18 = (((x109-x110)+x111)%x112);

	if (t18 != 2148501971U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = -9;
	int16_t x115 = -1;
	uint16_t x116 = 11859U;
	static volatile uint32_t t19 = 398033U;

	t19 = (((x113-x114)+x115)%x116);

	if (t19 != 7U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	static uint32_t t20 = 928528U;

	t20 = (((x117-x118)+x119)%x120);

	if (t20 != 4294967168U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x121 = -1;
	int32_t x122 = INT32_MIN;
	static uint32_t x123 = UINT32_MAX;
	int64_t x124 = -28927546063LL;
	volatile int64_t t21 = 93503798LL;

	t21 = (((x121-x122)+x123)%x124);

	if (t21 != 2147483646LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x125 = UINT32_MAX;
	uint64_t x126 = 72LLU;
	uint16_t x127 = UINT16_MAX;
	volatile uint64_t x128 = 381381LLU;

	t22 = (((x125-x126)+x127)%x128);

	if (t22 != 301317LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x129 = 13LLU;
	int8_t x130 = -1;
	int32_t x131 = -7822993;
	uint64_t t23 = 1004033203LLU;

	t23 = (((x129-x130)+x131)%x132);

	if (t23 != 4287144317LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x133 = -6310720LL;
	int8_t x135 = 40;
	int16_t x136 = -1;
	int64_t t24 = -458862LL;

	t24 = (((x133-x134)+x135)%x136);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = -1;
	int32_t x138 = INT32_MIN;
	volatile int64_t x139 = -1224804LL;
	volatile int16_t x140 = INT16_MIN;
	volatile int64_t t25 = 6LL;

	t25 = (((x137-x138)+x139)%x140);

	if (t25 != 20379LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x141 = -12;
	uint32_t x142 = UINT32_MAX;
	int16_t x143 = -3;
	uint32_t x144 = 146254U;

	t26 = (((x141-x142)+x143)%x144);

	if (t26 != 72318U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = -1LL;
	int16_t x146 = -1;
	int16_t x147 = INT16_MAX;
	uint16_t x148 = 350U;
	int64_t t27 = -56240636685704LL;

	t27 = (((x145-x146)+x147)%x148);

	if (t27 != 217LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x153 = INT64_MAX;
	uint8_t x154 = 20U;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -1;
	int64_t t28 = 79435LL;

	t28 = (((x153-x154)+x155)%x156);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x158 = 53577;
	int8_t x159 = 35;
	uint16_t x160 = 469U;
	int32_t t29 = 0;

	t29 = (((x157-x158)+x159)%x160);

	if (t29 != -397) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x161 = 2U;
	static int8_t x162 = INT8_MIN;
	volatile int16_t x163 = -1389;
	int8_t x164 = INT8_MIN;
	int32_t t30 = 117;

	t30 = (((x161-x162)+x163)%x164);

	if (t30 != -107) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 219608U;
	int32_t x171 = 1845;
	int32_t x172 = -79875;
	volatile uint32_t t31 = 106870872U;

	t31 = (((x169-x170)+x171)%x172);

	if (t31 != 4294716765U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x173 = 0U;
	int64_t x174 = -1LL;
	int16_t x175 = 1;
	int16_t x176 = INT16_MAX;
	volatile int64_t t32 = -7LL;

	t32 = (((x173-x174)+x175)%x176);

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = -18;
	static uint16_t x183 = 329U;
	int8_t x184 = INT8_MAX;

	t33 = (((x181-x182)+x183)%x184);

	if (t33 != -35LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = INT8_MAX;
	static int16_t x188 = INT16_MIN;
	volatile uint64_t t34 = 2959581LLU;

	t34 = (((x185-x186)+x187)%x188);

	if (t34 != 18446744058693353625LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x190 = INT64_MAX;
	uint8_t x192 = 4U;

	t35 = (((x189-x190)+x191)%x192);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x194 = -10905;
	static uint64_t x195 = 60511LLU;
	static uint16_t x196 = 2100U;
	static volatile uint64_t t36 = 1374469126055712909LLU;

	t36 = (((x193-x194)+x195)%x196);

	if (t36 != 848LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x197 = UINT32_MAX;
	int32_t x198 = INT32_MIN;
	uint32_t x200 = 588731090U;
	volatile int64_t t37 = 171184LL;

	t37 = (((x197-x198)+x199)%x200);

	if (t37 != 382141022LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x201 = INT16_MAX;
	int64_t x202 = 11935376239LL;
	static volatile int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;
	volatile int64_t t38 = -1310247253099LL;

	t38 = (((x201-x202)+x203)%x204);

	if (t38 != 7311LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x205 = -3;
	int16_t x206 = 278;
	volatile int16_t x207 = -3742;
	volatile int32_t x208 = -1;
	int32_t t39 = -183;

	t39 = (((x205-x206)+x207)%x208);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x217 = 63842U;
	static int64_t x220 = -1LL;
	volatile int64_t t40 = 25464933LL;

	t40 = (((x217-x218)+x219)%x220);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = -1;
	int16_t x223 = INT16_MAX;
	int16_t x224 = -20;
	int32_t t41 = 221110;

	t41 = (((x221-x222)+x223)%x224);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x225 = -7;
	int64_t x226 = -1LL;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = -10;
	static int64_t t42 = 185104342619LL;

	t42 = (((x225-x226)+x227)%x228);

	if (t42 != 9LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x230 = -470995373949LL;
	int32_t x231 = -327;
	int64_t t43 = -1966LL;

	t43 = (((x229-x230)+x231)%x232);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x234 = 121U;
	int64_t x235 = -1LL;
	int8_t x236 = INT8_MIN;
	int64_t t44 = 3115246LL;

	t44 = (((x233-x234)+x235)%x236);

	if (t44 != -44LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x239 = 45U;
	static volatile int64_t x240 = 457688354206LL;
	volatile int64_t t45 = 408LL;

	t45 = (((x237-x238)+x239)%x240);

	if (t45 != 32812LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x241 = 3789638128413494530LL;
	int16_t x242 = -779;
	static int8_t x243 = 1;
	static int64_t x244 = INT64_MIN;
	volatile int64_t t46 = -67166815895360113LL;

	t46 = (((x241-x242)+x243)%x244);

	if (t46 != 3789638128413495310LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x245 = INT8_MIN;
	volatile int16_t x246 = 2921;
	static volatile int16_t x247 = 7;
	int64_t t47 = 13401381562275375LL;

	t47 = (((x245-x246)+x247)%x248);

	if (t47 != -3042LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x249 = 747155LLU;
	int64_t x250 = INT64_MIN;
	int8_t x251 = 2;
	uint64_t t48 = 36718111003782722LLU;

	t48 = (((x249-x250)+x251)%x252);

	if (t48 != 2148230805LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x253 = 117780945184LLU;
	static uint32_t x255 = 19U;
	static volatile uint64_t t49 = 56813837471LLU;

	t49 = (((x253-x254)+x255)%x256);

	if (t49 != 117780945076LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x257 = 1;
	volatile uint16_t x258 = 67U;
	static volatile uint64_t t50 = 2559852972863719366LLU;

	t50 = (((x257-x258)+x259)%x260);

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x261 = 7U;
	static int16_t x262 = 2;
	static int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MIN;

	t51 = (((x261-x262)+x263)%x264);

	if (t51 != 2147483653LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x265 = 1177296LL;
	static volatile int16_t x266 = -1;
	volatile int16_t x267 = 12009;
	int8_t x268 = INT8_MAX;
	static volatile int64_t t52 = -242833LL;

	t52 = (((x265-x266)+x267)%x268);

	if (t52 != 78LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MAX;
	int64_t x271 = 403522550377LL;
	int64_t x272 = -1042LL;
	int64_t t53 = 21429308865867LL;

	t53 = (((x269-x270)+x271)%x272);

	if (t53 != 334LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x278 = 119U;
	uint32_t x279 = UINT32_MAX;
	int64_t x280 = -1LL;

	t54 = (((x277-x278)+x279)%x280);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x286 = INT16_MAX;
	int8_t x288 = 2;
	int32_t t55 = -13402;

	t55 = (((x285-x286)+x287)%x288);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x293 = INT16_MAX;
	int64_t x296 = INT64_MAX;
	static uint64_t t56 = 180465361665LLU;

	t56 = (((x293-x294)+x295)%x296);

	if (t56 != 32969LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x298 = -3334;
	uint16_t x299 = 9573U;
	uint16_t x300 = 279U;
	volatile uint32_t t57 = 8U;

	t57 = (((x297-x298)+x299)%x300);

	if (t57 != 79U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x301 = INT8_MIN;
	int8_t x303 = -1;
	volatile int64_t x304 = -105620848605204LL;
	volatile int64_t t58 = 159LL;

	t58 = (((x301-x302)+x303)%x304);

	if (t58 != 31432405336379LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 4334460LLU;
	volatile int16_t x307 = INT16_MIN;
	uint64_t t59 = 3921632161693983LLU;

	t59 = (((x305-x306)+x307)%x308);

	if (t59 != 4290600067LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MIN;

	t60 = (((x309-x310)+x311)%x312);

	if (t60 != 2147516415U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = -1;
	uint64_t x319 = 2015381LLU;
	uint64_t t61 = 426740460LLU;

	t61 = (((x317-x318)+x319)%x320);

	if (t61 != 27LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x322 = -1;
	int64_t x323 = 4341LL;
	int32_t x324 = 438;

	t62 = (((x321-x322)+x323)%x324);

	if (t62 != 399LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x325 = INT16_MIN;
	uint8_t x326 = 40U;
	uint32_t x327 = 1067638285U;
	uint64_t t63 = 5067651549181849350LLU;

	t63 = (((x325-x326)+x327)%x328);

	if (t63 != 1067605477LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x329 = -14;
	volatile int64_t t64 = 882LL;

	t64 = (((x329-x330)+x331)%x332);

	if (t64 != 18LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x333 = UINT8_MAX;
	uint16_t x335 = 822U;
	int32_t t65 = 44;

	t65 = (((x333-x334)+x335)%x336);

	if (t65 != 24) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = -1;
	static volatile int32_t x339 = INT32_MAX;
	volatile int64_t x340 = -1LL;
	int64_t t66 = -15376161011LL;

	t66 = (((x337-x338)+x339)%x340);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = 1398LLU;
	int32_t x343 = 245333142;

	t67 = (((x341-x342)+x343)%x344);

	if (t67 != 245298976LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x345 = 0;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 10U;
	volatile int64_t x348 = -5364335LL;
	volatile int64_t t68 = -40280LL;

	t68 = (((x345-x346)+x347)%x348);

	if (t68 != 138LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = INT16_MAX;
	static volatile int8_t x350 = -1;
	int64_t x352 = INT64_MIN;
	volatile uint64_t t69 = 1826258850LLU;

	t69 = (((x349-x350)+x351)%x352);

	if (t69 != 8288979899LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x353 = INT8_MIN;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = UINT8_MAX;
	static uint64_t t70 = 772255LLU;

	t70 = (((x353-x354)+x355)%x356);

	if (t70 != 254LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x357 = -1;
	int32_t x358 = -1;
	volatile uint32_t t71 = 493092U;

	t71 = (((x357-x358)+x359)%x360);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x365 = INT32_MIN;
	static volatile uint64_t x366 = 1LLU;
	int32_t x367 = -215;
	static int32_t x368 = -4;
	volatile uint64_t t72 = 657LLU;

	t72 = (((x365-x366)+x367)%x368);

	if (t72 != 18446744071562067752LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x369 = INT64_MIN;
	static int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MIN;
	int64_t t73 = -12LL;

	t73 = (((x369-x370)+x371)%x372);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = -1;
	uint8_t x374 = 17U;
	int8_t x375 = -37;
	static int16_t x376 = INT16_MIN;
	int32_t t74 = -66;

	t74 = (((x373-x374)+x375)%x376);

	if (t74 != -55) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x381 = 3U;
	volatile uint32_t x382 = 197U;
	volatile int32_t x383 = INT32_MIN;
	static uint8_t x384 = 42U;
	volatile uint32_t t75 = 26U;

	t75 = (((x381-x382)+x383)%x384);

	if (t75 != 18U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x385 = 1073402685954440877LL;
	int32_t x386 = INT32_MIN;
	volatile int16_t x387 = INT16_MIN;
	uint16_t x388 = 12740U;

	t76 = (((x385-x386)+x387)%x388);

	if (t76 != 9437LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x389 = 1017017U;
	int16_t x390 = INT16_MIN;
	uint64_t x391 = 469284383069LLU;
	volatile uint8_t x392 = UINT8_MAX;
	uint64_t t77 = 563107LLU;

	t77 = (((x389-x390)+x391)%x392);

	if (t77 != 204LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x393 = 10944U;
	uint8_t x394 = UINT8_MAX;
	static volatile int64_t x396 = INT64_MIN;
	volatile int64_t t78 = -28898067203245668LL;

	t78 = (((x393-x394)+x395)%x396);

	if (t78 != -9223372036854765119LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x397 = -466;
	uint8_t x398 = UINT8_MAX;
	uint16_t x399 = 1112U;
	volatile uint8_t x400 = 29U;
	volatile int32_t t79 = 55858;

	t79 = (((x397-x398)+x399)%x400);

	if (t79 != 14) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x413 = 17;
	int16_t x414 = INT16_MIN;
	int8_t x416 = 1;
	int32_t t80 = 456727608;

	t80 = (((x413-x414)+x415)%x416);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x417 = INT8_MIN;
	volatile int64_t x418 = -247027484511330LL;
	int64_t t81 = 56878LL;

	t81 = (((x417-x418)+x419)%x420);

	if (t81 != 194LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x421 = 18U;
	static int64_t x422 = INT64_MAX;
	int64_t x423 = 225236639153LL;
	volatile int64_t t82 = -5609076326889LL;

	t82 = (((x421-x422)+x423)%x424);

	if (t82 != -249143765LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x425 = UINT32_MAX;
	static volatile int32_t x426 = 41680;
	int32_t x427 = INT32_MIN;
	static int32_t x428 = INT32_MIN;
	volatile uint32_t t83 = 5U;

	t83 = (((x425-x426)+x427)%x428);

	if (t83 != 2147441967U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x429 = -1;
	volatile int8_t x430 = INT8_MAX;
	static uint32_t x431 = 702994297U;
	static int8_t x432 = INT8_MIN;
	uint32_t t84 = 87169029U;

	t84 = (((x429-x430)+x431)%x432);

	if (t84 != 702994169U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x433 = 44LL;
	uint64_t x435 = 3025167LLU;
	volatile uint64_t t85 = 10443778314801280LLU;

	t85 = (((x433-x434)+x435)%x436);

	if (t85 != 3025212LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x437 = UINT64_MAX;
	uint16_t x438 = 6094U;
	volatile uint64_t t86 = 332LLU;

	t86 = (((x437-x438)+x439)%x440);

	if (t86 != 18446744073709545524LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x441 = INT16_MIN;
	uint64_t x442 = 2344481359023886LLU;
	static volatile int32_t x443 = 1038212;
	volatile uint8_t x444 = UINT8_MAX;
	uint64_t t87 = 36787LLU;

	t87 = (((x441-x442)+x443)%x444);

	if (t87 != 54LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x449 = UINT8_MAX;
	static int64_t x450 = 4LL;
	volatile int64_t x451 = -233324LL;
	int16_t x452 = -1;
	static int64_t t88 = -1821314431344LL;

	t88 = (((x449-x450)+x451)%x452);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x453 = 308012426LLU;
	volatile int16_t x454 = INT16_MAX;
	int8_t x456 = INT8_MIN;

	t89 = (((x453-x454)+x455)%x456);

	if (t89 != 308012426LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x458 = UINT8_MAX;
	int64_t x459 = -1LL;
	volatile uint64_t t90 = 427884220834983565LLU;

	t90 = (((x457-x458)+x459)%x460);

	if (t90 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x461 = UINT64_MAX;
	int16_t x463 = INT16_MAX;
	uint8_t x464 = 1U;
	volatile uint64_t t91 = 131115LLU;

	t91 = (((x461-x462)+x463)%x464);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x466 = INT16_MAX;
	int64_t x468 = -1LL;
	uint64_t t92 = 4941LLU;

	t92 = (((x465-x466)+x467)%x468);

	if (t92 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x469 = INT32_MIN;
	volatile int8_t x470 = -1;
	static int64_t x471 = -1187403510LL;
	static uint32_t x472 = 267122U;
	int64_t t93 = 0LL;

	t93 = (((x469-x470)+x471)%x472);

	if (t93 != -136109LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x473 = 2;
	uint8_t x474 = 5U;
	static volatile int16_t x475 = INT16_MIN;
	static int32_t x476 = INT32_MIN;

	t94 = (((x473-x474)+x475)%x476);

	if (t94 != -32771) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x481 = INT16_MIN;
	static int16_t x482 = INT16_MAX;
	static uint32_t x483 = UINT32_MAX;
	uint16_t x484 = 1692U;
	uint32_t t95 = 3242666U;

	t95 = (((x481-x482)+x483)%x484);

	if (t95 != 24U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x497 = INT32_MIN;
	int32_t x499 = -1;
	uint64_t t96 = 0LLU;

	t96 = (((x497-x498)+x499)%x500);

	if (t96 != 129LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x509 = INT8_MIN;
	volatile uint8_t x510 = UINT8_MAX;
	static int32_t x511 = -1776142;
	static uint64_t x512 = 20278118081279LLU;
	static uint64_t t97 = 2203338LLU;

	t97 = (((x509-x510)+x511)%x512);

	if (t97 != 3670703325418LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x517 = UINT8_MAX;
	uint32_t x518 = 49054170U;
	uint16_t x519 = 28253U;
	int32_t x520 = 3812;

	t98 = (((x517-x518)+x519)%x520);

	if (t98 != 2614U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x521 = 4U;
	static int32_t x522 = -1;
	int8_t x523 = 0;
	uint16_t x524 = 245U;
	volatile uint32_t t99 = 1U;

	t99 = (((x521-x522)+x523)%x524);

	if (t99 != 5U) { NG(); } else { ; }
	
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

