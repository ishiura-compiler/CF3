#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = INT16_MIN;
volatile int8_t x12 = -27;
static int16_t x14 = INT16_MIN;
int32_t x27 = -62298;
int8_t x34 = INT8_MIN;
static int16_t x38 = INT16_MIN;
static uint64_t x45 = UINT64_MAX;
int64_t x51 = INT64_MIN;
volatile int8_t x75 = -1;
int8_t x97 = INT8_MAX;
int32_t t14 = -3157617;
volatile int8_t x116 = -51;
int16_t x121 = 1;
volatile int32_t t20 = 12;
static int16_t x141 = INT16_MIN;
int64_t t21 = 4011840989407810LL;
static int32_t x165 = 1;
static int16_t x181 = INT16_MAX;
int64_t x187 = -3159175475LL;
static int16_t x191 = 0;
uint16_t x195 = 230U;
static int64_t x204 = -1LL;
static int32_t x208 = INT32_MIN;
uint16_t x218 = 1132U;
int16_t x230 = 56;
int32_t x242 = INT32_MIN;
static volatile int16_t x245 = -23;
uint64_t x261 = UINT64_MAX;
int32_t x272 = INT32_MAX;
static volatile int32_t x276 = 17842043;
uint8_t x286 = UINT8_MAX;
uint64_t x288 = UINT64_MAX;
uint16_t x294 = 78U;
uint8_t x295 = 1U;
int64_t x307 = -1LL;
uint64_t t47 = 16427324241202LLU;
volatile int8_t x320 = 6;
uint16_t x321 = UINT16_MAX;
int8_t x333 = INT8_MIN;
int64_t x354 = 29LL;
int8_t x373 = INT8_MIN;
uint64_t x376 = 188216400635364353LLU;
int8_t x382 = INT8_MIN;
uint32_t x383 = 202729196U;
int8_t x401 = INT8_MIN;
int32_t x404 = INT32_MIN;
int8_t x406 = -1;
static int8_t x411 = INT8_MAX;
static uint32_t t66 = 216543700U;
int8_t x439 = 3;
volatile int32_t x446 = -222;
static int8_t x453 = 55;
volatile uint64_t x454 = 1545836786545697LLU;
static int8_t x459 = INT8_MIN;
static uint64_t t73 = 1948LLU;
static int16_t x476 = -1;
volatile int64_t t75 = -29LL;
static uint16_t x478 = UINT16_MAX;
static volatile int64_t x485 = 30147LL;
static volatile int64_t x490 = INT64_MIN;
static volatile int8_t x494 = -1;
int16_t x497 = 25;
static uint8_t x500 = 1U;
volatile int32_t x501 = -1;
uint32_t x505 = UINT32_MAX;
static int32_t x506 = INT32_MAX;
int32_t x509 = INT32_MIN;
uint32_t x510 = UINT32_MAX;
int32_t x517 = 1;
int64_t x519 = 1964129LL;
int32_t x529 = INT32_MIN;
static uint64_t x530 = 1281270004691418606LLU;
static uint64_t x531 = 5625774LLU;
volatile uint64_t t86 = 20296401LLU;
volatile uint64_t t87 = 38LLU;
static int32_t x540 = INT32_MIN;
uint64_t t91 = 137487383212065LLU;
static uint64_t t92 = 1LLU;
uint64_t x561 = 295715LLU;
int32_t x562 = 24012;
volatile uint8_t x563 = 1U;
volatile int64_t x574 = -1LL;
static int32_t x585 = -164;
static int16_t x591 = -1;
uint64_t t96 = 65654723967883LLU;
uint64_t t97 = 15143LLU;
static volatile int64_t x600 = 19971149LL;
int16_t x601 = 0;


void f0(void) {
	static int32_t x9 = INT32_MAX;
	static volatile int32_t x11 = INT32_MIN;
	volatile int32_t t0 = 154;

	t0 = (((x9+x10)+x11)*x12);

	if (t0 != 884763) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 1;
	int32_t x15 = 1;
	volatile int8_t x16 = -1;
	volatile int32_t t1 = 28050988;

	t1 = (((x13+x14)+x15)*x16);

	if (t1 != 32766) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x21 = INT16_MAX;
	uint32_t x22 = 138U;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = INT64_MIN;
	static volatile uint64_t t2 = 12365525494LLU;

	t2 = (((x21+x22)+x23)*x24);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 3;
	static volatile int8_t x26 = -4;
	static volatile int16_t x28 = 46;
	volatile int32_t t3 = -2045;

	t3 = (((x25+x26)+x27)*x28);

	if (t3 != -2865754) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = 2852158176137LL;
	uint8_t x30 = 0U;
	static int32_t x31 = INT32_MIN;
	uint32_t x32 = 359825U;
	volatile int64_t t4 = -3254253LL;

	t4 = (((x29+x30)+x31)*x32);

	if (t4 != 1025505097424854425LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x33 = -1;
	volatile int16_t x35 = 56;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t5 = 60682;

	t5 = (((x33+x34)+x35)*x36);

	if (t5 != -18615) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = UINT8_MAX;
	uint8_t x39 = 13U;
	int8_t x40 = INT8_MIN;
	int32_t t6 = -300082;

	t6 = (((x37+x38)+x39)*x40);

	if (t6 != 4160000) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x46 = INT32_MIN;
	int8_t x47 = 1;
	int32_t x48 = -1;
	uint64_t t7 = 269242721821284972LLU;

	t7 = (((x45+x46)+x47)*x48);

	if (t7 != 2147483648LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = 3U;
	uint16_t x50 = UINT16_MAX;
	int8_t x52 = -1;
	volatile int64_t t8 = -1LL;

	t8 = (((x49+x50)+x51)*x52);

	if (t8 != 9223372036854710270LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x53 = 1;
	static int16_t x54 = -1342;
	int8_t x55 = -1;
	uint64_t x56 = 108644661LLU;
	static volatile uint64_t t9 = 132832544821LLU;

	t9 = (((x53+x54)+x55)*x56);

	if (t9 != 18446743927908416554LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 719307795106386814LLU;
	int32_t x58 = 26;
	int32_t x59 = 0;
	int32_t x60 = INT32_MAX;
	uint64_t t10 = 14360180LLU;

	t10 = (((x57+x58)+x59)*x60);

	if (t10 != 7764956909056273512LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x73 = UINT8_MAX;
	volatile int64_t x74 = -118993LL;
	int16_t x76 = -989;
	int64_t t11 = 74220LL;

	t11 = (((x73+x74)+x75)*x76);

	if (t11 != 117432871LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x77 = -1LL;
	int32_t x78 = INT32_MAX;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t x80 = INT32_MIN;
	volatile int64_t t12 = -396531LL;

	t12 = (((x77+x78)+x79)*x80);

	if (t12 != -4611686561740750848LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x81 = 1459847457972LLU;
	int8_t x82 = 8;
	int32_t x83 = -14;
	int8_t x84 = -1;
	volatile uint64_t t13 = 50255LLU;

	t13 = (((x81+x82)+x83)*x84);

	if (t13 != 18446742613862093650LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x98 = 4;
	int8_t x99 = -1;
	uint16_t x100 = 14565U;

	t14 = (((x97+x98)+x99)*x100);

	if (t14 != 1893450) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x109 = 139638292170276LL;
	uint64_t x110 = 43499933710009LLU;
	int64_t x111 = INT64_MAX;
	static uint32_t x112 = 10655U;
	uint64_t t15 = 243521678361697LLU;

	t15 = (((x109+x110)+x111)*x112);

	if (t15 != 11174709833609201828LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = -296528772;
	static uint32_t t16 = 656470U;

	t16 = (((x113+x114)+x115)*x116);

	if (t16 != 2238072063U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x122 = -25315979965970LL;
	static int64_t x123 = 11979LL;
	volatile int8_t x124 = 26;
	volatile int64_t t17 = 5LL;

	t17 = (((x121+x122)+x123)*x124);

	if (t17 != -658215478803740LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x129 = INT32_MIN;
	volatile uint16_t x130 = 312U;
	int8_t x131 = 48;
	int64_t x132 = 1LL;
	int64_t t18 = 127050519545947971LL;

	t18 = (((x129+x130)+x131)*x132);

	if (t18 != -2147483288LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = -396LL;
	int16_t x134 = -242;
	static int32_t x135 = -9320;
	volatile int64_t x136 = 1LL;
	int64_t t19 = 18701571499921LL;

	t19 = (((x133+x134)+x135)*x136);

	if (t19 != -9958LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x137 = 24367613;
	uint16_t x138 = 22570U;
	static volatile int8_t x139 = -1;
	int8_t x140 = -1;

	t20 = (((x137+x138)+x139)*x140);

	if (t20 != -24390182) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x142 = INT16_MIN;
	volatile int64_t x143 = -1LL;
	uint8_t x144 = 4U;

	t21 = (((x141+x142)+x143)*x144);

	if (t21 != -262148LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x145 = 259;
	static int8_t x146 = INT8_MIN;
	static int8_t x147 = 2;
	volatile uint8_t x148 = 7U;
	static volatile int32_t t22 = -141;

	t22 = (((x145+x146)+x147)*x148);

	if (t22 != 931) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x153 = INT8_MAX;
	uint32_t x154 = 25593U;
	int16_t x155 = 2;
	int16_t x156 = -1;
	static volatile uint32_t t23 = 9U;

	t23 = (((x153+x154)+x155)*x156);

	if (t23 != 4294941574U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x166 = -10786046LL;
	int8_t x167 = 1;
	int32_t x168 = -9;
	int64_t t24 = -2300403730420LL;

	t24 = (((x165+x166)+x167)*x168);

	if (t24 != 97074396LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x173 = 131U;
	int8_t x174 = -4;
	volatile int8_t x175 = 15;
	static int32_t x176 = 0;
	int32_t t25 = 52;

	t25 = (((x173+x174)+x175)*x176);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x182 = 2946U;
	int8_t x183 = -1;
	static int8_t x184 = INT8_MAX;
	static volatile int32_t t26 = 39;

	t26 = (((x181+x182)+x183)*x184);

	if (t26 != 4535424) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x185 = -48385023LL;
	volatile int16_t x186 = 70;
	volatile int8_t x188 = INT8_MIN;
	volatile int64_t t27 = -2203147LL;

	t27 = (((x185+x186)+x187)*x188);

	if (t27 != 410567734784LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x189 = 1;
	static uint32_t x190 = 1250861717U;
	static volatile uint32_t x192 = UINT32_MAX;
	uint32_t t28 = 1795038U;

	t28 = (((x189+x190)+x191)*x192);

	if (t28 != 3044105578U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x193 = 32U;
	static uint64_t x194 = 73392431931LLU;
	volatile int64_t x196 = -1LL;
	volatile uint64_t t29 = 547033612052523LLU;

	t29 = (((x193+x194)+x195)*x196);

	if (t29 != 18446744000317119423LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x201 = -1;
	int8_t x202 = 0;
	volatile int16_t x203 = INT16_MIN;
	int64_t t30 = 213999288540LL;

	t30 = (((x201+x202)+x203)*x204);

	if (t30 != 32769LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x205 = -1LL;
	static int32_t x206 = INT32_MIN;
	volatile int64_t x207 = -1LL;
	volatile int64_t t31 = 57974430203LL;

	t31 = (((x205+x206)+x207)*x208);

	if (t31 != 4611686022722355200LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x213 = 1643U;
	volatile int16_t x214 = INT16_MAX;
	static volatile int8_t x215 = -1;
	static int16_t x216 = -1;
	int32_t t32 = 1953299;

	t32 = (((x213+x214)+x215)*x216);

	if (t32 != -34409) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x217 = 401LLU;
	uint16_t x219 = 2U;
	static uint16_t x220 = 1707U;
	uint64_t t33 = 11807121LLU;

	t33 = (((x217+x218)+x219)*x220);

	if (t33 != 2620245LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x221 = 2;
	int8_t x222 = INT8_MAX;
	volatile int8_t x223 = -1;
	volatile int8_t x224 = -1;
	int32_t t34 = -175427353;

	t34 = (((x221+x222)+x223)*x224);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x225 = -1LL;
	uint8_t x226 = 9U;
	volatile uint32_t x227 = UINT32_MAX;
	static int8_t x228 = -1;
	volatile int64_t t35 = 247147587051872333LL;

	t35 = (((x225+x226)+x227)*x228);

	if (t35 != -4294967303LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x229 = 42706474LL;
	static int16_t x231 = INT16_MAX;
	uint16_t x232 = 1U;
	volatile int64_t t36 = 13LL;

	t36 = (((x229+x230)+x231)*x232);

	if (t36 != 42739297LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x237 = UINT16_MAX;
	static int64_t x238 = -1LL;
	uint32_t x239 = 13629724U;
	volatile uint8_t x240 = 3U;
	static volatile int64_t t37 = -7539619717LL;

	t37 = (((x237+x238)+x239)*x240);

	if (t37 != 41085774LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x241 = 1205U;
	volatile uint64_t x243 = UINT64_MAX;
	uint64_t x244 = 1148800861467374053LLU;
	volatile uint64_t t38 = 3130318862519LLU;

	t38 = (((x241+x242)+x243)*x244);

	if (t38 != 18045814323525298436LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x246 = INT8_MIN;
	volatile uint32_t x247 = 183583254U;
	static volatile uint64_t x248 = 18LLU;
	uint64_t t39 = 3998432215969356LLU;

	t39 = (((x245+x246)+x247)*x248);

	if (t39 != 3304495854LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x249 = 2114315LLU;
	uint32_t x250 = 35289U;
	uint8_t x251 = 67U;
	int8_t x252 = -1;
	volatile uint64_t t40 = 22226556666595173LLU;

	t40 = (((x249+x250)+x251)*x252);

	if (t40 != 18446744073707401945LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x262 = -1;
	uint8_t x263 = UINT8_MAX;
	uint32_t x264 = 1252763032U;
	volatile uint64_t t41 = 391133191LLU;

	t41 = (((x261+x262)+x263)*x264);

	if (t41 != 316949047096LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x269 = UINT8_MAX;
	uint32_t x270 = 130123097U;
	volatile int8_t x271 = INT8_MIN;
	uint32_t t42 = 933U;

	t42 = (((x269+x270)+x271)*x272);

	if (t42 != 4164844072U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x273 = -1;
	static int32_t x274 = 416482968;
	volatile uint64_t x275 = 13LLU;
	static volatile uint64_t t43 = 39LLU;

	t43 = (((x273+x274)+x275)*x276);

	if (t43 != 7430907237928140LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x282 = 2082127474LLU;
	int64_t x283 = 13168909219263608LL;
	uint16_t x284 = 53U;
	uint64_t t44 = 2LLU;

	t44 = (((x281+x282)+x283)*x284);

	if (t44 != 697952298971990642LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x285 = UINT8_MAX;
	static int64_t x287 = INT64_MIN;
	static uint64_t t45 = 4LLU;

	t45 = (((x285+x286)+x287)*x288);

	if (t45 != 9223372036854775298LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x293 = INT8_MAX;
	uint8_t x296 = UINT8_MAX;
	int32_t t46 = 1;

	t46 = (((x293+x294)+x295)*x296);

	if (t46 != 52530) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = 7U;
	static uint64_t x308 = 1767991167625240124LLU;

	t47 = (((x305+x306)+x307)*x308);

	if (t47 != 5666006434235324264LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x309 = INT16_MAX;
	uint8_t x310 = 6U;
	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = 36U;
	volatile uint32_t t48 = 51742U;

	t48 = (((x309+x310)+x311)*x312);

	if (t48 != 3539088U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x313 = 24;
	static uint32_t x314 = 936575761U;
	int32_t x315 = -1;
	uint32_t x316 = 125796U;
	uint32_t t49 = 929922U;

	t49 = (((x313+x314)+x315)*x316);

	if (t49 != 2239427488U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x317 = 972LLU;
	int64_t x318 = INT64_MAX;
	int64_t x319 = INT64_MIN;
	volatile uint64_t t50 = 1462706LLU;

	t50 = (((x317+x318)+x319)*x320);

	if (t50 != 5826LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x322 = INT16_MAX;
	int32_t x323 = INT32_MIN;
	volatile uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t51 = 8410820955917700494LLU;

	t51 = (((x321+x322)+x323)*x324);

	if (t51 != 2147385346LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x334 = 59U;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 315381647U;
	volatile uint32_t t52 = 1954775195U;

	t52 = (((x333+x334)+x335)*x336);

	if (t52 != 3273975413U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x341 = INT8_MAX;
	uint8_t x342 = 0U;
	int8_t x343 = 62;
	uint8_t x344 = 26U;
	volatile int32_t t53 = 1;

	t53 = (((x341+x342)+x343)*x344);

	if (t53 != 4914) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x345 = -1;
	volatile uint16_t x346 = 183U;
	static uint8_t x347 = 113U;
	static int8_t x348 = -1;
	volatile int32_t t54 = -11679848;

	t54 = (((x345+x346)+x347)*x348);

	if (t54 != -295) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x353 = INT32_MIN;
	static int64_t x355 = -22246249LL;
	volatile uint32_t x356 = 14428U;
	volatile int64_t t55 = 11303LL;

	t55 = (((x353+x354)+x355)*x356);

	if (t55 != -31304862535504LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x365 = -1;
	static int16_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	volatile uint64_t x368 = 737797703952471001LLU;
	uint64_t t56 = 2029855881472758011LLU;

	t56 = (((x365+x366)+x367)*x368);

	if (t56 != 2195378362879647093LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x369 = 68U;
	uint16_t x370 = 200U;
	int8_t x371 = -1;
	int8_t x372 = 0;
	static volatile int32_t t57 = 382;

	t57 = (((x369+x370)+x371)*x372);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x374 = INT16_MIN;
	uint8_t x375 = UINT8_MAX;
	uint64_t t58 = 1408295864414552105LLU;

	t58 = (((x373+x374)+x375)*x376);

	if (t58 != 17640987480062393471LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x381 = -9;
	int16_t x384 = 377;
	static uint32_t t59 = 3571U;

	t59 = (((x381+x382)+x383)*x384);

	if (t59 != 3414411211U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x389 = 883U;
	int32_t x390 = 185020;
	uint64_t x391 = 2884018419357LLU;
	int64_t x392 = INT64_MAX;
	uint64_t t60 = 17LLU;

	t60 = (((x389+x390)+x391)*x392);

	if (t60 != 18446741189690946356LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x397 = 27067909LLU;
	int64_t x398 = -1LL;
	volatile int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	uint64_t t61 = 938670304617LLU;

	t61 = (((x397+x398)+x399)*x400);

	if (t61 != 18446743186748342272LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x402 = -1LL;
	int8_t x403 = INT8_MIN;
	int64_t t62 = 40LL;

	t62 = (((x401+x402)+x403)*x404);

	if (t62 != 551903297536LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x405 = 569;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = -620;
	static volatile uint64_t t63 = 1319304934970LLU;

	t63 = (((x405+x406)+x407)*x408);

	if (t63 != 18446744073709200076LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x409 = 102U;
	int32_t x410 = -1;
	volatile uint16_t x412 = 3894U;
	volatile int32_t t64 = 1540491;

	t64 = (((x409+x410)+x411)*x412);

	if (t64 != 887832) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x417 = 4992997U;
	static int8_t x418 = -1;
	int16_t x419 = INT16_MIN;
	volatile uint32_t x420 = 44782008U;
	uint32_t t65 = 5084U;

	t65 = (((x417+x418)+x419)*x420);

	if (t65 != 1851363296U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x429 = 3694370U;
	static int8_t x430 = 0;
	volatile int32_t x431 = INT32_MAX;
	static int8_t x432 = -1;

	t66 = (((x429+x430)+x431)*x432);

	if (t66 != 2143789279U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x437 = 4125LLU;
	int16_t x438 = INT16_MAX;
	int64_t x440 = INT64_MIN;
	static uint64_t t67 = 477LLU;

	t67 = (((x437+x438)+x439)*x440);

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x441 = UINT32_MAX;
	static volatile int16_t x442 = INT16_MAX;
	int32_t x443 = INT32_MIN;
	int8_t x444 = -1;
	uint32_t t68 = 194536471U;

	t68 = (((x441+x442)+x443)*x444);

	if (t68 != 2147450882U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x445 = 3679U;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = 1;
	uint32_t t69 = 410U;

	t69 = (((x445+x446)+x447)*x448);

	if (t69 != 3456U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x455 = INT32_MIN;
	uint8_t x456 = 15U;
	uint64_t t70 = 233LLU;

	t70 = (((x453+x454)+x455)*x456);

	if (t70 != 23187519585931560LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x457 = INT64_MIN;
	static uint16_t x458 = UINT16_MAX;
	int32_t x460 = -1;
	int64_t t71 = -26178582872514688LL;

	t71 = (((x457+x458)+x459)*x460);

	if (t71 != 9223372036854710401LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x461 = 30740878404432LLU;
	uint8_t x462 = 31U;
	volatile int64_t x463 = 4315297670484268579LL;
	static int32_t x464 = INT32_MIN;
	volatile uint64_t t72 = 45563658118LLU;

	t72 = (((x461+x462)+x463)*x464);

	if (t72 != 3731759193569361920LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x465 = 1369585826U;
	static int8_t x466 = INT8_MAX;
	int64_t x467 = -1LL;
	static uint64_t x468 = 15092183362LLU;

	t73 = (((x465+x466)+x467)*x468);

	if (t73 != 2223298243893779008LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x469 = 0;
	int8_t x470 = INT8_MIN;
	int16_t x471 = -11000;
	static uint64_t x472 = 5221LLU;
	volatile uint64_t t74 = 565781602877375742LLU;

	t74 = (((x469+x470)+x471)*x472);

	if (t74 != 18446744073651452328LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x473 = -55721281939531458LL;
	int64_t x474 = INT64_MAX;
	int8_t x475 = INT8_MAX;

	t75 = (((x473+x474)+x475)*x476);

	if (t75 != -9167650754915244476LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x477 = -1;
	uint16_t x479 = 32065U;
	static volatile int8_t x480 = INT8_MIN;
	volatile int32_t t76 = -423426;

	t76 = (((x477+x478)+x479)*x480);

	if (t76 != -12492672) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x486 = INT32_MIN;
	uint64_t x487 = 30884413220523LLU;
	uint32_t x488 = 761U;
	uint64_t t77 = 26286LLU;

	t77 = (((x485+x486)+x487)*x488);

	if (t77 != 23501404248703742LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x489 = INT8_MAX;
	uint32_t x491 = UINT32_MAX;
	uint64_t x492 = 12327517LLU;
	static volatile uint64_t t78 = 8503821111715LLU;

	t78 = (((x489+x490)+x491)*x492);

	if (t78 != 9276318320763926982LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x493 = 135796625033427LLU;
	uint64_t x495 = 8172847764LLU;
	int16_t x496 = INT16_MIN;
	static uint64_t t79 = 15854398702LLU;

	t79 = (((x493+x494)+x495)*x496);

	if (t79 != 13996692456738717696LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x498 = UINT64_MAX;
	uint8_t x499 = UINT8_MAX;
	volatile uint64_t t80 = 2140716817359200LLU;

	t80 = (((x497+x498)+x499)*x500);

	if (t80 != 279LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x502 = 102;
	static uint32_t x503 = UINT32_MAX;
	volatile int8_t x504 = -33;
	volatile uint32_t t81 = 6004U;

	t81 = (((x501+x502)+x503)*x504);

	if (t81 != 4294963996U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x507 = 6U;
	uint16_t x508 = 291U;
	uint32_t t82 = 54322U;

	t82 = (((x505+x506)+x507)*x508);

	if (t82 != 2147484812U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x511 = 10736U;
	volatile int64_t x512 = -123132LL;
	int64_t t83 = 544922393LL;

	t83 = (((x509+x510)+x511)*x512);

	if (t83 != -264425278367556LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x513 = UINT64_MAX;
	uint8_t x514 = 2U;
	volatile int64_t x515 = INT64_MIN;
	int64_t x516 = -1LL;
	volatile uint64_t t84 = 56839LLU;

	t84 = (((x513+x514)+x515)*x516);

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x518 = INT64_MIN;
	uint16_t x520 = 1U;
	volatile int64_t t85 = -635911644085923LL;

	t85 = (((x517+x518)+x519)*x520);

	if (t85 != -9223372036852811678LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x532 = 115330287LLU;

	t86 = (((x529+x530)+x531)*x532);

	if (t86 != 7296090868704083108LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x533 = 919815687929LLU;
	int64_t x534 = INT64_MAX;
	int8_t x535 = -1;
	uint64_t x536 = 257504LLU;

	t87 = (((x533+x534)+x535)*x536);

	if (t87 != 236856218903954208LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x537 = -1;
	uint32_t x538 = UINT32_MAX;
	int8_t x539 = INT8_MIN;
	uint32_t t88 = 118954446U;

	t88 = (((x537+x538)+x539)*x540);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x541 = -4057;
	uint32_t x542 = 3397238U;
	int32_t x543 = INT32_MIN;
	static int8_t x544 = INT8_MIN;
	static uint32_t t89 = 3774U;

	t89 = (((x541+x542)+x543)*x544);

	if (t89 != 3860640128U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x545 = INT64_MAX;
	uint64_t x546 = 5LLU;
	int8_t x547 = -50;
	uint32_t x548 = 485U;
	uint64_t t90 = 4381936548038LLU;

	t90 = (((x545+x546)+x547)*x548);

	if (t90 != 9223372036854753498LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x553 = INT16_MIN;
	int64_t x554 = INT64_MAX;
	int16_t x555 = 0;
	volatile uint64_t x556 = 20677452072103LLU;

	t91 = (((x553+x554)+x555)*x556);

	if (t91 != 8545792609904032601LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x557 = -1LL;
	int8_t x558 = INT8_MIN;
	static uint64_t x559 = 1280052642LLU;
	volatile int32_t x560 = 7;

	t92 = (((x557+x558)+x559)*x560);

	if (t92 != 8960367591LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x564 = 0;
	volatile uint64_t t93 = 1488659LLU;

	t93 = (((x561+x562)+x563)*x564);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x573 = INT8_MAX;
	static int16_t x575 = INT16_MIN;
	static int32_t x576 = INT32_MIN;
	static int64_t t94 = 3679LL;

	t94 = (((x573+x574)+x575)*x576);

	if (t94 != 70098161238016LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x586 = 1U;
	static uint16_t x587 = 0U;
	static int16_t x588 = INT16_MIN;
	volatile int32_t t95 = 0;

	t95 = (((x585+x586)+x587)*x588);

	if (t95 != 5341184) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x589 = UINT64_MAX;
	int8_t x590 = -28;
	int32_t x592 = INT32_MIN;

	t96 = (((x589+x590)+x591)*x592);

	if (t96 != 64424509440LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x593 = 116704490525106LLU;
	int32_t x594 = INT32_MAX;
	uint8_t x595 = 45U;
	int64_t x596 = 5052785166088LL;

	t97 = (((x593+x594)+x595)*x596);

	if (t97 != 8256669313764401392LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x597 = 101753501;
	int16_t x598 = INT16_MAX;
	int8_t x599 = -2;
	volatile int64_t t98 = 52678389105443LL;

	t98 = (((x597+x598)+x599)*x600);

	if (t98 != 2032788684439634LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x602 = 15001463717218228LLU;
	int64_t x603 = 13285586176LL;
	int8_t x604 = INT8_MIN;
	volatile uint64_t t99 = 1099098LLU;

	t99 = (((x601+x602)+x603)*x604);

	if (t99 != 16526555017350587904LLU) { NG(); } else { ; }
	
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

