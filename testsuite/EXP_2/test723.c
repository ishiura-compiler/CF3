#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x11 = 385LLU;
uint64_t x21 = UINT64_MAX;
static volatile int32_t x22 = INT32_MIN;
static int64_t x24 = -67889324859LL;
int8_t x26 = -3;
volatile int32_t t3 = -16626143;
volatile uint8_t x35 = UINT8_MAX;
volatile int32_t t4 = 56519034;
int32_t t5 = 17678;
static int16_t x42 = INT16_MIN;
volatile int32_t t6 = 21827574;
uint32_t x47 = UINT32_MAX;
uint64_t x49 = 267970069366364760LLU;
volatile int32_t t8 = -1;
int8_t x62 = -29;
volatile uint64_t x65 = 401061217631LLU;
int64_t x66 = -56000LL;
volatile int64_t x68 = -1LL;
int32_t x70 = INT32_MIN;
int32_t t12 = 0;
int64_t x75 = INT64_MIN;
static int32_t t13 = -44182314;
uint16_t x82 = UINT16_MAX;
static volatile int32_t t16 = 3361;
volatile int16_t x99 = -71;
uint8_t x100 = UINT8_MAX;
uint64_t x103 = 55507374LLU;
static int32_t x138 = INT32_MIN;
uint32_t x140 = UINT32_MAX;
static uint8_t x142 = UINT8_MAX;
int8_t x143 = INT8_MIN;
static volatile int32_t t22 = -5;
int32_t x156 = INT32_MIN;
static uint8_t x165 = UINT8_MAX;
static int8_t x166 = -1;
int32_t x188 = 3838;
volatile int32_t x212 = 1;
int32_t t36 = -1038830861;
static volatile int32_t x213 = 955462899;
static int32_t x214 = INT32_MIN;
uint8_t x221 = UINT8_MAX;
static uint32_t x223 = 5724514U;
int16_t x224 = -12;
int32_t t38 = -44;
volatile int32_t t39 = -969060019;
volatile uint32_t x230 = UINT32_MAX;
static volatile int32_t t40 = -2038109;
volatile int8_t x238 = INT8_MIN;
static int8_t x247 = -56;
int32_t t43 = 2;
static uint8_t x251 = UINT8_MAX;
int16_t x257 = INT16_MIN;
int64_t x262 = INT64_MAX;
volatile int8_t x270 = -1;
volatile int32_t t48 = -339718993;
static volatile int32_t t51 = 55;
int32_t x313 = -1;
uint16_t x315 = 2U;
int8_t x330 = INT8_MIN;
int16_t x341 = INT16_MIN;
static volatile uint16_t x343 = 753U;
int64_t x344 = -1LL;
int32_t x350 = 2806251;
int32_t x351 = -33088;
volatile int32_t t61 = -35655;
uint16_t x357 = 3972U;
uint8_t x359 = UINT8_MAX;
volatile int32_t t62 = -19714952;
static volatile uint64_t x367 = 11LLU;
static uint64_t x375 = UINT64_MAX;
int32_t x387 = 1477;
static uint32_t x388 = 74U;
int32_t t67 = 1;
uint8_t x393 = 1U;
static uint8_t x398 = 17U;
int16_t x407 = INT16_MIN;
volatile int32_t t73 = 10;
static volatile int32_t x431 = 31040561;
volatile int32_t x435 = INT32_MIN;
static int32_t t75 = 407069700;
uint8_t x437 = 16U;
int8_t x444 = -1;
int16_t x461 = INT16_MAX;
int8_t x463 = INT8_MIN;
static volatile int32_t t79 = 20811;
int64_t x485 = INT64_MAX;
int8_t x497 = -1;
static int32_t x499 = INT32_MAX;
int16_t x500 = -1;
uint32_t x511 = UINT32_MAX;
int16_t x512 = -1;
static int16_t x524 = 990;
uint8_t x534 = UINT8_MAX;
int32_t t92 = -13413185;
static int16_t x549 = INT16_MIN;
int64_t x550 = -1LL;
int64_t x553 = INT64_MIN;
volatile int16_t x558 = -4;
uint64_t x574 = 5473036964724LLU;
int8_t x584 = INT8_MAX;
uint32_t x588 = 247741530U;
uint32_t x589 = 1U;


void f0(void) {
	int8_t x5 = INT8_MAX;
	static uint16_t x6 = 352U;
	static uint8_t x7 = UINT8_MAX;
	uint64_t x8 = 159LLU;
	static volatile int32_t t0 = -120417;

	t0 = ((x5/(x6%x7))==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = 0;
	static int16_t x10 = -1;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t1 = -14;

	t1 = ((x9/(x10%x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x23 = 6LL;
	volatile int32_t t2 = -14;

	t2 = ((x21/(x22%x23))==x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = 20U;
	static int64_t x27 = INT64_MIN;
	static int64_t x28 = 256048LL;

	t3 = ((x25/(x26%x27))==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = 1;
	int16_t x34 = INT16_MIN;
	volatile int8_t x36 = 2;

	t4 = ((x33/(x34%x35))==x36);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MAX;
	static int32_t x38 = -1;
	int64_t x39 = -406281904475382402LL;
	static int8_t x40 = -1;

	t5 = ((x37/(x38%x39))==x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = -5683563LL;
	uint64_t x43 = 53652LLU;
	int16_t x44 = 590;

	t6 = ((x41/(x42%x43))==x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x45 = INT32_MIN;
	uint32_t x46 = 716U;
	uint8_t x48 = UINT8_MAX;
	int32_t t7 = -3916164;

	t7 = ((x45/(x46%x47))==x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x50 = 18016598126LLU;
	int16_t x51 = INT16_MAX;
	int32_t x52 = INT32_MAX;

	t8 = ((x49/(x50%x51))==x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x53 = INT16_MIN;
	static int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	int64_t x56 = -1LL;
	static int32_t t9 = 1;

	t9 = ((x53/(x54%x55))==x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x61 = INT32_MIN;
	uint16_t x63 = 19U;
	int32_t x64 = INT32_MIN;
	volatile int32_t t10 = 231474607;

	t10 = ((x61/(x62%x63))==x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x67 = 7812486567LLU;
	int32_t t11 = 5992683;

	t11 = ((x65/(x66%x67))==x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x69 = 23U;
	int16_t x71 = INT16_MAX;
	static int16_t x72 = -1;

	t12 = ((x69/(x70%x71))==x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -1;
	static uint64_t x74 = 185430346LLU;
	uint8_t x76 = 112U;

	t13 = ((x73/(x74%x75))==x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 181U;
	static uint16_t x78 = UINT16_MAX;
	static uint16_t x79 = 10938U;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t14 = 64063;

	t14 = ((x77/(x78%x79))==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile int8_t x83 = 45;
	int8_t x84 = -54;
	static int32_t t15 = 233947908;

	t15 = ((x81/(x82%x83))==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x93 = INT8_MAX;
	int64_t x94 = INT64_MIN;
	int64_t x95 = INT64_MAX;
	int32_t x96 = -2;

	t16 = ((x93/(x94%x95))==x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -1111576606014604487LL;
	volatile int8_t x98 = INT8_MAX;
	volatile int32_t t17 = 24718;

	t17 = ((x97/(x98%x99))==x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	volatile int32_t t18 = 639522774;

	t18 = ((x101/(x102%x103))==x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = INT64_MIN;
	volatile uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -1LL;
	int32_t t19 = -339885457;

	t19 = ((x105/(x106%x107))==x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x137 = UINT16_MAX;
	int16_t x139 = INT16_MAX;
	static volatile int32_t t20 = -574;

	t20 = ((x137/(x138%x139))==x140);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x141 = INT32_MIN;
	int64_t x144 = 2LL;
	volatile int32_t t21 = 711553867;

	t21 = ((x141/(x142%x143))==x144);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x145 = INT8_MIN;
	int8_t x146 = -43;
	static uint32_t x147 = UINT32_MAX;
	static int8_t x148 = INT8_MIN;

	t22 = ((x145/(x146%x147))==x148);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x149 = -1;
	uint64_t x150 = 3573510415519273LLU;
	volatile int64_t x151 = 60LL;
	int16_t x152 = INT16_MIN;
	volatile int32_t t23 = -29;

	t23 = ((x149/(x150%x151))==x152);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x153 = -1LL;
	volatile int16_t x154 = 35;
	uint8_t x155 = 8U;
	int32_t t24 = 1649;

	t24 = ((x153/(x154%x155))==x156);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x157 = 236U;
	int32_t x158 = INT32_MAX;
	static uint8_t x159 = 17U;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t25 = 3622;

	t25 = ((x157/(x158%x159))==x160);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x161 = INT8_MIN;
	uint16_t x162 = 366U;
	volatile int64_t x163 = -5664221LL;
	static uint64_t x164 = UINT64_MAX;
	int32_t t26 = -8406341;

	t26 = ((x161/(x162%x163))==x164);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x167 = 13453;
	static uint32_t x168 = UINT32_MAX;
	int32_t t27 = 37;

	t27 = ((x165/(x166%x167))==x168);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x169 = 1405U;
	int64_t x170 = INT64_MAX;
	uint64_t x171 = 127608LLU;
	static uint64_t x172 = 854563899261549LLU;
	volatile int32_t t28 = -448458;

	t28 = ((x169/(x170%x171))==x172);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x173 = INT8_MAX;
	int64_t x174 = -59024LL;
	int64_t x175 = INT64_MAX;
	int16_t x176 = -117;
	int32_t t29 = -2080130;

	t29 = ((x173/(x174%x175))==x176);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = 3213459424673161LL;
	volatile int8_t x186 = -54;
	volatile int16_t x187 = INT16_MAX;
	int32_t t30 = 462486;

	t30 = ((x185/(x186%x187))==x188);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x189 = 400;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = 9LLU;
	int64_t x192 = INT64_MIN;
	static volatile int32_t t31 = 4733;

	t31 = ((x189/(x190%x191))==x192);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x193 = INT8_MAX;
	uint8_t x194 = 5U;
	volatile uint64_t x195 = 47456LLU;
	int32_t x196 = INT32_MAX;
	int32_t t32 = 2;

	t32 = ((x193/(x194%x195))==x196);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x198 = -110206860LL;
	int64_t x199 = -389754086094308071LL;
	volatile int8_t x200 = -12;
	volatile int32_t t33 = 3512;

	t33 = ((x197/(x198%x199))==x200);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x201 = INT32_MIN;
	static int16_t x202 = INT16_MIN;
	volatile int64_t x203 = -206072LL;
	static uint16_t x204 = 3943U;
	volatile int32_t t34 = 196348;

	t34 = ((x201/(x202%x203))==x204);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x205 = 129907;
	static int64_t x206 = -1LL;
	int64_t x207 = -34912989LL;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t35 = 290794;

	t35 = ((x205/(x206%x207))==x208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x209 = 1249873070LLU;
	int16_t x210 = INT16_MIN;
	static uint8_t x211 = UINT8_MAX;

	t36 = ((x209/(x210%x211))==x212);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x215 = 19U;
	uint32_t x216 = UINT32_MAX;
	int32_t t37 = -21589868;

	t37 = ((x213/(x214%x215))==x216);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x222 = UINT64_MAX;

	t38 = ((x221/(x222%x223))==x224);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x225 = INT32_MIN;
	uint16_t x226 = UINT16_MAX;
	static int32_t x227 = INT32_MIN;
	uint64_t x228 = 701114166142LLU;

	t39 = ((x225/(x226%x227))==x228);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x229 = 4322;
	int16_t x231 = INT16_MIN;
	volatile uint8_t x232 = UINT8_MAX;

	t40 = ((x229/(x230%x231))==x232);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x233 = 11U;
	int32_t x234 = INT32_MIN;
	uint8_t x235 = 37U;
	static int32_t x236 = 189081038;
	static int32_t t41 = 2366;

	t41 = ((x233/(x234%x235))==x236);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x237 = INT64_MAX;
	int64_t x239 = 7620444685961LL;
	int16_t x240 = INT16_MIN;
	int32_t t42 = 110;

	t42 = ((x237/(x238%x239))==x240);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x245 = -1;
	int32_t x246 = -1;
	int64_t x248 = INT64_MAX;

	t43 = ((x245/(x246%x247))==x248);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x249 = -1258870LL;
	uint32_t x250 = 499481208U;
	int8_t x252 = INT8_MIN;
	int32_t t44 = -10539;

	t44 = ((x249/(x250%x251))==x252);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x258 = -7453;
	static uint16_t x259 = 14U;
	int16_t x260 = 134;
	int32_t t45 = -2357;

	t45 = ((x257/(x258%x259))==x260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x261 = UINT8_MAX;
	int64_t x263 = INT64_MIN;
	volatile uint32_t x264 = 1300U;
	int32_t t46 = -7620;

	t46 = ((x261/(x262%x263))==x264);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x269 = INT8_MAX;
	volatile uint16_t x271 = 59U;
	int16_t x272 = INT16_MAX;
	volatile int32_t t47 = 190907629;

	t47 = ((x269/(x270%x271))==x272);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x273 = 439636;
	uint64_t x274 = 4443888358053908329LLU;
	uint32_t x275 = 1474221925U;
	int32_t x276 = INT32_MAX;

	t48 = ((x273/(x274%x275))==x276);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x281 = 9U;
	int8_t x282 = INT8_MIN;
	uint32_t x283 = UINT32_MAX;
	volatile int8_t x284 = INT8_MAX;
	static int32_t t49 = 0;

	t49 = ((x281/(x282%x283))==x284);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x293 = INT16_MIN;
	static volatile int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MIN;
	int64_t x296 = -78LL;
	static volatile int32_t t50 = -3384253;

	t50 = ((x293/(x294%x295))==x296);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x309 = INT8_MAX;
	static int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MAX;
	uint8_t x312 = 0U;

	t51 = ((x309/(x310%x311))==x312);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x314 = -1;
	static uint8_t x316 = UINT8_MAX;
	static int32_t t52 = -11485384;

	t52 = ((x313/(x314%x315))==x316);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x317 = 1505U;
	static int32_t x318 = -3973859;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = 3370U;
	int32_t t53 = 1630;

	t53 = ((x317/(x318%x319))==x320);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x321 = 353538734LLU;
	int32_t x322 = 4092;
	static volatile uint32_t x323 = 247U;
	int16_t x324 = 15;
	int32_t t54 = -14496932;

	t54 = ((x321/(x322%x323))==x324);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x325 = INT8_MAX;
	int64_t x326 = INT64_MIN;
	uint64_t x327 = 751205390589579222LLU;
	uint64_t x328 = 12512LLU;
	int32_t t55 = -9410962;

	t55 = ((x325/(x326%x327))==x328);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x329 = INT32_MIN;
	int16_t x331 = 3417;
	int32_t x332 = -929852;
	volatile int32_t t56 = -246;

	t56 = ((x329/(x330%x331))==x332);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x337 = -707;
	int16_t x338 = 1019;
	volatile int8_t x339 = INT8_MIN;
	uint32_t x340 = 31388530U;
	static int32_t t57 = 121977;

	t57 = ((x337/(x338%x339))==x340);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x342 = 9;
	static volatile int32_t t58 = 10;

	t58 = ((x341/(x342%x343))==x344);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x345 = 8467436110267917LLU;
	int32_t x346 = INT32_MAX;
	int64_t x347 = INT64_MIN;
	int32_t x348 = 0;
	volatile int32_t t59 = -65601778;

	t59 = ((x345/(x346%x347))==x348);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x349 = -41;
	uint16_t x352 = 3671U;
	int32_t t60 = -39490;

	t60 = ((x349/(x350%x351))==x352);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x353 = 209592U;
	int64_t x354 = -1LL;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = 13500U;

	t61 = ((x353/(x354%x355))==x356);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x358 = 16U;
	uint32_t x360 = 6348U;

	t62 = ((x357/(x358%x359))==x360);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x365 = 51326577U;
	int16_t x366 = -1;
	uint32_t x368 = 1059767U;
	int32_t t63 = -490;

	t63 = ((x365/(x366%x367))==x368);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x369 = 33U;
	volatile int16_t x370 = INT16_MIN;
	int16_t x371 = 2369;
	int32_t x372 = 12825575;
	volatile int32_t t64 = -10;

	t64 = ((x369/(x370%x371))==x372);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = 1;
	int8_t x374 = INT8_MIN;
	uint16_t x376 = 3156U;
	volatile int32_t t65 = 1;

	t65 = ((x373/(x374%x375))==x376);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x377 = 9494U;
	static int16_t x378 = INT16_MIN;
	static uint8_t x379 = UINT8_MAX;
	volatile int16_t x380 = INT16_MAX;
	int32_t t66 = 2306;

	t66 = ((x377/(x378%x379))==x380);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x385 = -39;
	uint8_t x386 = UINT8_MAX;

	t67 = ((x385/(x386%x387))==x388);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x389 = INT64_MAX;
	volatile int8_t x390 = INT8_MIN;
	uint16_t x391 = 5U;
	uint16_t x392 = 5537U;
	int32_t t68 = 9844066;

	t68 = ((x389/(x390%x391))==x392);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x394 = 3374;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t69 = -415862106;

	t69 = ((x393/(x394%x395))==x396);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x397 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	static uint16_t x400 = 100U;
	int32_t t70 = 23;

	t70 = ((x397/(x398%x399))==x400);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x401 = -2390;
	uint32_t x402 = UINT32_MAX;
	static int32_t x403 = INT32_MAX;
	volatile int8_t x404 = INT8_MIN;
	static volatile int32_t t71 = 0;

	t71 = ((x401/(x402%x403))==x404);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x405 = 837U;
	static int64_t x406 = -832340923653LL;
	static int32_t x408 = -15177;
	volatile int32_t t72 = -867881;

	t72 = ((x405/(x406%x407))==x408);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x417 = 2858;
	static uint32_t x418 = UINT32_MAX;
	volatile int64_t x419 = INT64_MIN;
	int8_t x420 = INT8_MIN;

	t73 = ((x417/(x418%x419))==x420);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x429 = 973U;
	volatile int8_t x430 = 63;
	int32_t x432 = -1;
	volatile int32_t t74 = -33785370;

	t74 = ((x429/(x430%x431))==x432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x433 = INT8_MIN;
	static int32_t x434 = -2;
	int64_t x436 = 1128LL;

	t75 = ((x433/(x434%x435))==x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x438 = INT16_MAX;
	static int32_t x439 = -223135463;
	volatile int64_t x440 = -2044900291LL;
	int32_t t76 = 12135473;

	t76 = ((x437/(x438%x439))==x440);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x441 = INT32_MAX;
	uint16_t x442 = 26206U;
	uint16_t x443 = 50U;
	volatile int32_t t77 = 189;

	t77 = ((x441/(x442%x443))==x444);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x449 = 0;
	static int32_t x450 = -1;
	int32_t x451 = INT32_MIN;
	static volatile int8_t x452 = -3;
	volatile int32_t t78 = 10486;

	t78 = ((x449/(x450%x451))==x452);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x462 = UINT64_MAX;
	int64_t x464 = -1067996LL;

	t79 = ((x461/(x462%x463))==x464);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x465 = -25;
	int16_t x466 = INT16_MIN;
	uint8_t x467 = UINT8_MAX;
	uint8_t x468 = 56U;
	volatile int32_t t80 = -82915;

	t80 = ((x465/(x466%x467))==x468);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x473 = INT64_MIN;
	volatile int8_t x474 = 10;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 1748785287U;
	volatile int32_t t81 = 10005;

	t81 = ((x473/(x474%x475))==x476);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x481 = INT32_MIN;
	volatile int64_t x482 = -744856125186436LL;
	volatile int8_t x483 = 27;
	uint16_t x484 = UINT16_MAX;
	static int32_t t82 = -1;

	t82 = ((x481/(x482%x483))==x484);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x486 = INT64_MIN;
	volatile uint8_t x487 = UINT8_MAX;
	static int64_t x488 = INT64_MAX;
	volatile int32_t t83 = -10546;

	t83 = ((x485/(x486%x487))==x488);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x498 = 3U;
	int32_t t84 = 1347293;

	t84 = ((x497/(x498%x499))==x500);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x501 = -1517;
	uint32_t x502 = 10458672U;
	volatile int64_t x503 = 960704220640911169LL;
	int64_t x504 = 17803067211205LL;
	volatile int32_t t85 = 418883;

	t85 = ((x501/(x502%x503))==x504);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x509 = 1799;
	int32_t x510 = -1289;
	volatile int32_t t86 = -3;

	t86 = ((x509/(x510%x511))==x512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x513 = 5947819210643LL;
	static int32_t x514 = INT32_MIN;
	static uint32_t x515 = 2085468705U;
	uint8_t x516 = UINT8_MAX;
	int32_t t87 = 8;

	t87 = ((x513/(x514%x515))==x516);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x521 = UINT32_MAX;
	int8_t x522 = -1;
	static int64_t x523 = -129860994LL;
	int32_t t88 = -59864;

	t88 = ((x521/(x522%x523))==x524);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x533 = 37080377U;
	volatile int8_t x535 = INT8_MAX;
	int32_t x536 = INT32_MAX;
	static volatile int32_t t89 = 25477992;

	t89 = ((x533/(x534%x535))==x536);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x537 = INT64_MIN;
	uint8_t x538 = 3U;
	volatile int32_t x539 = INT32_MAX;
	volatile uint8_t x540 = UINT8_MAX;
	static volatile int32_t t90 = 244055;

	t90 = ((x537/(x538%x539))==x540);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x541 = -1LL;
	int32_t x542 = 1002195;
	uint32_t x543 = 7699U;
	int64_t x544 = INT64_MAX;
	volatile int32_t t91 = -474;

	t91 = ((x541/(x542%x543))==x544);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x545 = 9U;
	uint16_t x546 = UINT16_MAX;
	int64_t x547 = INT64_MAX;
	int8_t x548 = INT8_MIN;

	t92 = ((x545/(x546%x547))==x548);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x551 = 9961495750725567LLU;
	int64_t x552 = -5740584969448LL;
	int32_t t93 = 43;

	t93 = ((x549/(x550%x551))==x552);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x554 = 1U;
	uint16_t x555 = 3746U;
	uint16_t x556 = 2519U;
	volatile int32_t t94 = 15;

	t94 = ((x553/(x554%x555))==x556);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x557 = 40808067;
	int32_t x559 = INT32_MIN;
	static uint16_t x560 = 1991U;
	int32_t t95 = 31342;

	t95 = ((x557/(x558%x559))==x560);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x573 = 12769858LLU;
	uint32_t x575 = UINT32_MAX;
	int16_t x576 = INT16_MIN;
	volatile int32_t t96 = 155879587;

	t96 = ((x573/(x574%x575))==x576);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x581 = INT64_MAX;
	static int16_t x582 = -10669;
	volatile uint64_t x583 = UINT64_MAX;
	volatile int32_t t97 = 4624320;

	t97 = ((x581/(x582%x583))==x584);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x585 = -258854;
	uint16_t x586 = 93U;
	uint16_t x587 = UINT16_MAX;
	int32_t t98 = -33152389;

	t98 = ((x585/(x586%x587))==x588);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x590 = 14;
	uint64_t x591 = 385060002408LLU;
	uint8_t x592 = UINT8_MAX;
	volatile int32_t t99 = -451330537;

	t99 = ((x589/(x590%x591))==x592);

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

