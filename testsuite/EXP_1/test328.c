#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MIN;
volatile int8_t x4 = INT8_MIN;
volatile int64_t t0 = 15966LL;
static uint64_t x9 = UINT64_MAX;
int16_t x14 = 0;
int8_t x17 = -1;
uint16_t x19 = 909U;
uint16_t x26 = 26868U;
static uint32_t x27 = 1887158U;
uint32_t x28 = UINT32_MAX;
volatile int32_t x33 = -174;
uint64_t x46 = UINT64_MAX;
volatile uint64_t t10 = 28LLU;
int32_t t12 = 79;
static volatile uint64_t x116 = 6203LLU;
volatile int16_t x125 = 11;
static int32_t x139 = INT32_MIN;
static volatile int64_t t18 = 7290142858387726LL;
volatile int16_t x143 = INT16_MIN;
volatile uint64_t x144 = 2916LLU;
int32_t x145 = -173272137;
int8_t x146 = -1;
static volatile uint32_t x147 = 39024783U;
int32_t x152 = -1;
volatile int32_t t21 = 87;
int8_t x153 = 54;
volatile int8_t x156 = 2;
uint64_t t22 = 37LLU;
int8_t x159 = INT8_MAX;
uint64_t x161 = UINT64_MAX;
uint32_t x165 = 22U;
static int64_t t25 = -33416215925LL;
int64_t x202 = 131917680970LL;
static uint32_t x204 = 4U;
uint8_t x205 = UINT8_MAX;
int8_t x207 = INT8_MIN;
int64_t t31 = 83359870949473050LL;
static int16_t x223 = 10;
uint64_t x225 = 291463631602828605LLU;
int8_t x229 = INT8_MIN;
uint16_t x232 = 124U;
int32_t x235 = 1624552;
volatile int64_t x247 = -1LL;
static int8_t x296 = INT8_MIN;
int16_t x305 = -2;
uint32_t x306 = 1U;
volatile uint64_t t44 = 5469LLU;
int16_t x313 = -1;
int8_t x332 = -1;
volatile uint64_t t49 = 14763867LLU;
volatile int64_t t51 = -13LL;
int16_t x341 = INT16_MIN;
int64_t x344 = -1LL;
uint8_t x347 = 123U;
uint16_t x361 = 0U;
uint64_t x362 = 1039LLU;
volatile uint8_t x378 = UINT8_MAX;
uint64_t t57 = 1864LLU;
int64_t x382 = 230395478726LL;
int8_t x387 = 1;
uint8_t x388 = 55U;
int8_t x398 = 0;
int32_t x407 = 3698;
int64_t x409 = -1LL;
volatile uint64_t t64 = 764735733LLU;
volatile uint64_t x423 = 883701772LLU;
static volatile uint64_t t67 = 382917LLU;
int64_t x428 = -1LL;
volatile uint32_t x429 = 151495U;
int8_t x434 = 0;
uint8_t x437 = UINT8_MAX;
volatile int8_t x456 = INT8_MAX;
uint32_t x457 = UINT32_MAX;
static int32_t x460 = INT32_MAX;
volatile uint64_t x461 = 9LLU;
volatile int8_t x463 = INT8_MIN;
int64_t t77 = 1119490LL;
volatile uint32_t x473 = 1U;
int32_t t82 = -80269877;
static int64_t x510 = INT64_MIN;
volatile int64_t t86 = 4418809LL;
volatile uint8_t x532 = 0U;
volatile int64_t t88 = -695412829116LL;
volatile int16_t x541 = INT16_MIN;
uint32_t t91 = 7563151U;
static int64_t x548 = 39135LL;
volatile int32_t t93 = -3355;
uint64_t x563 = 8015828846282426LLU;
volatile int32_t x565 = -1;
static uint64_t t96 = 2LLU;
static int32_t x596 = INT32_MIN;
static volatile int64_t x601 = 5LL;


void f0(void) {
	int64_t x2 = -19271094165LL;
	static uint8_t x3 = 7U;

	t0 = (((x1-x2)^x3)*x4);

	if (t0 != -2466695858432LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 3U;
	volatile uint64_t x6 = UINT64_MAX;
	int32_t x7 = INT32_MIN;
	int32_t x8 = INT32_MIN;
	static volatile uint64_t t1 = 16280LLU;

	t1 = (((x5-x6)^x7)*x8);

	if (t1 != 4611686009837453312LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 3U;
	uint64_t x11 = 12603LLU;
	int32_t x12 = -80;
	static uint64_t t2 = 3162623766668741564LLU;

	t2 = (((x9-x10)^x11)*x12);

	if (t2 != 1008080LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x15 = 12817LL;
	volatile int8_t x16 = -1;
	int64_t t3 = 205831LL;

	t3 = (((x13-x14)^x15)*x16);

	if (t3 != 9223372036854762991LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = 6941;
	static volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -11704286;

	t4 = (((x17-x18)^x19)*x20);

	if (t4 != 804992) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 2U;
	static uint32_t t5 = 246994U;

	t5 = (((x25-x26)^x27)*x28);

	if (t5 != 1876808U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = INT8_MIN;
	static volatile int32_t x35 = 6281811;
	int16_t x36 = 11;
	volatile int32_t t6 = -1832231;

	t6 = (((x33-x34)^x35)*x36);

	if (t6 != -69100405) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int32_t x42 = -1;
	static int8_t x43 = -1;
	uint16_t x44 = 6450U;
	volatile int32_t t7 = 3813971;

	t7 = (((x41-x42)^x43)*x44);

	if (t7 != 812700) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MAX;
	volatile int16_t x47 = -1;
	int8_t x48 = -1;
	volatile uint64_t t8 = 4041LLU;

	t8 = (((x45-x46)^x47)*x48);

	if (t8 != 32769LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x65 = 215665U;
	static volatile int32_t x66 = INT32_MIN;
	int16_t x67 = -1412;
	volatile uint8_t x68 = 20U;
	uint32_t t9 = 290858U;

	t9 = (((x65-x66)^x67)*x68);

	if (t9 != 4290625796U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x73 = UINT64_MAX;
	int16_t x74 = -1;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MAX;

	t10 = (((x73-x74)^x75)*x76);

	if (t10 != 18446743798831644800LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x85 = -1;
	int32_t x86 = 145901008;
	static uint64_t x87 = 23479LLU;
	volatile uint8_t x88 = 1U;
	uint64_t t11 = 85189966LLU;

	t11 = (((x85-x86)^x87)*x88);

	if (t11 != 18446744073563660696LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x97 = 0;
	int16_t x98 = INT16_MIN;
	static uint16_t x99 = 864U;
	int32_t x100 = -1;

	t12 = (((x97-x98)^x99)*x100);

	if (t12 != -33632) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x101 = INT64_MAX;
	uint16_t x102 = 6944U;
	volatile uint64_t x103 = 22352810177512587LLU;
	uint32_t x104 = 118318U;
	volatile uint64_t t13 = 116386379191947264LLU;

	t13 = (((x101-x102)^x103)*x104);

	if (t13 != 11591352030419445528LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x105 = 26789438LLU;
	volatile int64_t x106 = INT64_MAX;
	uint64_t x107 = 7297361608294980503LLU;
	int32_t x108 = -933067542;
	static volatile uint64_t t14 = 40LLU;

	t14 = (((x105-x106)^x107)*x108);

	if (t14 != 15479752751079078800LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x113 = -7;
	int8_t x114 = -7;
	int32_t x115 = INT32_MIN;
	uint64_t t15 = 0LLU;

	t15 = (((x113-x114)^x115)*x116);

	if (t15 != 18446730752868483072LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x126 = UINT8_MAX;
	uint16_t x127 = 717U;
	static int64_t x128 = -3371224884801113LL;
	int64_t t16 = -12940LL;

	t16 = (((x125-x126)^x127)*x128);

	if (t16 != 1938454308760639975LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x129 = 29U;
	volatile uint8_t x130 = 99U;
	uint8_t x131 = 62U;
	uint32_t x132 = 55577360U;
	static volatile uint32_t t17 = 78683151U;

	t17 = (((x129-x130)^x131)*x132);

	if (t17 != 1698341952U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x137 = 1089LL;
	int16_t x138 = INT16_MIN;
	static volatile int16_t x140 = INT16_MIN;

	t18 = (((x137-x138)^x139)*x140);

	if (t18 != 70367634751488LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x141 = INT32_MIN;
	uint64_t x142 = 24012330LLU;
	static volatile uint64_t t19 = 438366006467LLU;

	t19 = (((x141-x142)^x143)*x144);

	if (t19 != 6332025293208LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x148 = INT32_MAX;
	volatile uint32_t t20 = 6270U;

	t20 = (((x145-x146)^x147)*x148);

	if (t20 != 2281739465U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x149 = INT8_MIN;
	uint8_t x150 = UINT8_MAX;
	volatile int8_t x151 = INT8_MAX;

	t21 = (((x149-x150)^x151)*x152);

	if (t21 != 258) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x154 = -115LL;
	uint64_t x155 = 2222884674942595LLU;

	t22 = (((x153-x154)^x155)*x156);

	if (t22 != 4445769349885012LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x157 = 1328;
	int8_t x158 = INT8_MIN;
	uint8_t x160 = 7U;
	static volatile int32_t t23 = -1995644;

	t23 = (((x157-x158)^x159)*x160);

	if (t23 != 10409) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x162 = -4460764331222623603LL;
	volatile int8_t x163 = 23;
	static int8_t x164 = INT8_MIN;
	uint64_t t24 = 114LLU;

	t24 = (((x161-x162)^x163)*x164);

	if (t24 != 871231888500280704LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x166 = -1LL;
	volatile int8_t x167 = INT8_MIN;
	int8_t x168 = 22;

	t25 = (((x165-x166)^x167)*x168);

	if (t25 != -2310LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x181 = UINT8_MAX;
	uint64_t x182 = 5384827039LLU;
	uint64_t x183 = 871442622LLU;
	static int32_t x184 = INT32_MIN;
	uint64_t t26 = 37093579565492LLU;

	t26 = (((x181-x182)^x183)*x184);

	if (t26 != 13367356118410461184LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x185 = -1;
	volatile uint64_t x186 = 35325851805160203LLU;
	int32_t x187 = -1;
	uint8_t x188 = 5U;
	uint64_t t27 = 2917408821625114LLU;

	t27 = (((x185-x186)^x187)*x188);

	if (t27 != 176629259025801015LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x193 = 10U;
	int16_t x194 = 5;
	int16_t x195 = INT16_MAX;
	int32_t x196 = INT32_MIN;
	uint32_t t28 = 1890U;

	t28 = (((x193-x194)^x195)*x196);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x201 = UINT16_MAX;
	static int16_t x203 = -5;
	volatile int64_t t29 = -3753981763883799LL;

	t29 = (((x201-x202)^x203)*x204);

	if (t29 != 527670461752LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x206 = INT32_MAX;
	uint64_t x208 = 44339454LLU;
	uint64_t t30 = 10482639LLU;

	t30 = (((x205-x206)^x207)*x208);

	if (t30 != 95218235399897856LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x209 = 30959578LL;
	static int8_t x210 = 1;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -1;

	t31 = (((x209-x210)^x211)*x212);

	if (t31 != 2116524071LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x217 = INT8_MAX;
	volatile int16_t x218 = INT16_MAX;
	int8_t x219 = INT8_MAX;
	uint16_t x220 = 0U;
	volatile int32_t t32 = -1007052083;

	t32 = (((x217-x218)^x219)*x220);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x221 = 88U;
	static int16_t x222 = INT16_MAX;
	uint32_t x224 = 186U;
	volatile uint32_t t33 = 5536893U;

	t33 = (((x221-x222)^x223)*x224);

	if (t33 != 4288887886U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x226 = INT8_MAX;
	static int64_t x227 = INT64_MAX;
	int32_t x228 = 73;
	static volatile uint64_t t34 = 16367982267242LLU;

	t34 = (((x225-x226)^x227)*x228);

	if (t34 != 6393271003557848457LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x230 = -263;
	int64_t x231 = -1185LL;
	volatile int64_t t35 = -68618923551102LL;

	t35 = (((x229-x230)^x231)*x232);

	if (t35 != -131936LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x233 = -2;
	volatile uint64_t x234 = 24835318570LLU;
	uint32_t x236 = 34328852U;
	volatile uint64_t t36 = 1832344192465LLU;

	t36 = (((x233-x234)^x235)*x236);

	if (t36 != 17594159720469800112LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x245 = 182LLU;
	uint64_t x246 = UINT64_MAX;
	uint64_t x248 = UINT64_MAX;
	uint64_t t37 = 858716308754756LLU;

	t37 = (((x245-x246)^x247)*x248);

	if (t37 != 184LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x249 = 0;
	int8_t x250 = -1;
	uint32_t x251 = 1925U;
	int8_t x252 = 27;
	uint32_t t38 = 2439U;

	t38 = (((x249-x250)^x251)*x252);

	if (t38 != 51948U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = 26;
	uint8_t x255 = 5U;
	static int8_t x256 = -4;
	volatile int32_t t39 = -356405;

	t39 = (((x253-x254)^x255)*x256);

	if (t39 != 131188) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x273 = 0;
	int8_t x274 = 3;
	static int16_t x275 = INT16_MIN;
	static int8_t x276 = -1;
	volatile int32_t t40 = -49050;

	t40 = (((x273-x274)^x275)*x276);

	if (t40 != -32765) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x285 = INT16_MAX;
	int8_t x286 = -8;
	int8_t x287 = INT8_MAX;
	static uint64_t x288 = 359530715051LLU;
	uint64_t t41 = 0LLU;

	t41 = (((x285-x286)^x287)*x288);

	if (t41 != 11824246156597288LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x293 = INT8_MIN;
	static uint64_t x294 = UINT64_MAX;
	volatile int64_t x295 = INT64_MIN;
	static uint64_t t42 = 6973686018959LLU;

	t42 = (((x293-x294)^x295)*x296);

	if (t42 != 16256LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = INT8_MIN;
	volatile uint32_t t43 = 7317U;

	t43 = (((x305-x306)^x307)*x308);

	if (t43 != 32512U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x310 = UINT64_MAX;
	uint32_t x311 = 68127U;
	int16_t x312 = 478;

	t44 = (((x309-x310)^x311)*x312);

	if (t44 != 18446744073663800324LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x314 = 59725872873999LL;
	uint8_t x315 = 27U;
	uint64_t x316 = 733561924288LLU;
	static uint64_t t45 = 1LLU;

	t45 = (((x313-x314)^x315)*x316);

	if (t45 != 14253303102755208768LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x317 = -1;
	static int32_t x318 = INT32_MIN;
	static int32_t x319 = INT32_MIN;
	int8_t x320 = -3;
	int32_t t46 = 25;

	t46 = (((x317-x318)^x319)*x320);

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = -335;
	volatile int64_t x323 = 806LL;
	int16_t x324 = -1;
	int64_t t47 = 45089LL;

	t47 = (((x321-x322)^x323)*x324);

	if (t47 != 2147483031LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x325 = INT32_MIN;
	volatile int64_t x326 = -1LL;
	static volatile int32_t x327 = INT32_MIN;
	static int8_t x328 = INT8_MIN;
	int64_t t48 = -160294781813358LL;

	t48 = (((x325-x326)^x327)*x328);

	if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x329 = 154963514LLU;
	volatile int32_t x330 = -4308;
	volatile uint32_t x331 = 533226210U;

	t49 = (((x329-x330)^x331)*x332);

	if (t49 != 18446744073324397076LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x333 = 5276963U;
	int8_t x334 = INT8_MIN;
	uint8_t x335 = 31U;
	uint64_t x336 = 42555749718981313LLU;
	volatile uint64_t t50 = 1060916497666069857LLU;

	t50 = (((x333-x334)^x335)*x336);

	if (t50 != 965380691709160124LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x337 = INT16_MIN;
	uint32_t x338 = UINT32_MAX;
	static int8_t x339 = -59;
	int64_t x340 = 7LL;

	t51 = (((x337-x338)^x339)*x340);

	if (t51 != 228956LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x342 = INT16_MIN;
	static int16_t x343 = -19;
	static volatile int64_t t52 = 240130199253402LL;

	t52 = (((x341-x342)^x343)*x344);

	if (t52 != 19LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x345 = 3U;
	int16_t x346 = -452;
	int16_t x348 = INT16_MIN;
	static int32_t t53 = -3340;

	t53 = (((x345-x346)^x347)*x348);

	if (t53 != -14548992) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x349 = -11091146805473LL;
	int64_t x350 = -1LL;
	int8_t x351 = -1;
	uint64_t x352 = 3LLU;
	uint64_t t54 = 1594796LLU;

	t54 = (((x349-x350)^x351)*x352);

	if (t54 != 33273440416413LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x363 = INT32_MAX;
	int64_t x364 = INT64_MIN;
	uint64_t t55 = 248227LLU;

	t55 = (((x361-x362)^x363)*x364);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x373 = 4668U;
	static int8_t x374 = INT8_MIN;
	static volatile uint8_t x375 = UINT8_MAX;
	uint8_t x376 = 1U;
	volatile int32_t t56 = 6;

	t56 = (((x373-x374)^x375)*x376);

	if (t56 != 4675) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x377 = 5284LLU;
	volatile int8_t x379 = -35;
	int16_t x380 = -153;

	t57 = (((x377-x378)^x379)*x380);

	if (t57 != 765000LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x381 = 1U;
	static int8_t x383 = -1;
	int16_t x384 = INT16_MIN;
	volatile int64_t t58 = 39843224388344885LL;

	t58 = (((x381-x382)^x383)*x384);

	if (t58 != -7549599046828032LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x385 = 0;
	uint64_t x386 = 1LLU;
	uint64_t t59 = 32866492659442410LLU;

	t59 = (((x385-x386)^x387)*x388);

	if (t59 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x393 = -1;
	uint64_t x394 = 110888221093186LLU;
	int8_t x395 = -3;
	volatile int64_t x396 = -1LL;
	uint64_t t60 = 2928783261198206290LLU;

	t60 = (((x393-x394)^x395)*x396);

	if (t60 != 18446633185488458432LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x397 = 20586U;
	static int64_t x399 = INT64_MIN;
	int32_t x400 = -1;
	int64_t t61 = 17067907842883LL;

	t61 = (((x397-x398)^x399)*x400);

	if (t61 != 9223372036854755222LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x401 = -1LL;
	uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MAX;
	int8_t x404 = 21;
	int64_t t62 = 55423LL;

	t62 = (((x401-x402)^x403)*x404);

	if (t62 != -682773LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x405 = -1;
	int8_t x406 = INT8_MAX;
	int8_t x408 = INT8_MAX;
	static volatile int32_t t63 = -4133421;

	t63 = (((x405-x406)^x407)*x408);

	if (t63 != -456946) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x410 = 1;
	uint32_t x411 = 12U;
	static uint64_t x412 = 1093359163661266LLU;

	t64 = (((x409-x410)^x411)*x412);

	if (t64 != 18431437045418293892LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = -1;
	uint8_t x415 = 28U;
	uint64_t x416 = 168700844LLU;
	volatile uint64_t t65 = 13118847372897LLU;

	t65 = (((x413-x414)^x415)*x416);

	if (t65 != 4723623632LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x417 = 3U;
	int8_t x418 = -1;
	volatile int32_t x419 = INT32_MIN;
	static int16_t x420 = -1;
	volatile uint32_t t66 = 1U;

	t66 = (((x417-x418)^x419)*x420);

	if (t66 != 2147483644U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x421 = INT16_MIN;
	int32_t x422 = -1;
	int8_t x424 = INT8_MIN;

	t67 = (((x421-x422)^x423)*x424);

	if (t67 != 113114347904LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x425 = UINT64_MAX;
	static uint32_t x426 = 8511U;
	static int64_t x427 = 3894LL;
	uint64_t t68 = 87804203687LLU;

	t68 = (((x425-x426)^x427)*x428);

	if (t68 != 11786LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x430 = 39;
	int8_t x431 = -1;
	uint8_t x432 = 0U;
	uint32_t t69 = 1554319092U;

	t69 = (((x429-x430)^x431)*x432);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x433 = INT16_MAX;
	volatile int16_t x435 = INT16_MIN;
	static volatile uint16_t x436 = 961U;
	static volatile int32_t t70 = 0;

	t70 = (((x433-x434)^x435)*x436);

	if (t70 != -961) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x438 = -39LL;
	int64_t x439 = INT64_MIN;
	int32_t x440 = -1;
	volatile int64_t t71 = 35311145LL;

	t71 = (((x437-x438)^x439)*x440);

	if (t71 != 9223372036854775514LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x441 = 41907LLU;
	int32_t x442 = 3;
	int32_t x443 = -46;
	int32_t x444 = -4253960;
	volatile uint64_t t72 = 266135147925381692LLU;

	t72 = (((x441-x442)^x443)*x444);

	if (t72 != 178181368560LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x449 = UINT64_MAX;
	int8_t x450 = INT8_MIN;
	uint32_t x451 = UINT32_MAX;
	volatile int32_t x452 = INT32_MAX;
	static volatile uint64_t t73 = 3343LLU;

	t73 = (((x449-x450)^x451)*x452);

	if (t73 != 9223371757681901696LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x453 = 10753023LLU;
	int32_t x454 = INT32_MIN;
	int64_t x455 = -1LL;
	uint64_t t74 = 3404755838LLU;

	t74 = (((x453-x454)^x455)*x456);

	if (t74 != 18446743799613494272LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x458 = 10656958LL;
	static int64_t x459 = -18321049LL;
	int64_t t75 = 200983747956372LL;

	t75 = (((x457-x458)^x459)*x460);

	if (t75 != -9161859772968145446LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x462 = INT32_MIN;
	volatile int32_t x464 = -1;
	uint64_t t76 = 105677860246LLU;

	t76 = (((x461-x462)^x463)*x464);

	if (t76 != 2147483767LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x469 = 14205384U;
	volatile int32_t x470 = -1;
	int64_t x471 = -1LL;
	int16_t x472 = 8;

	t77 = (((x469-x470)^x471)*x472);

	if (t77 != -113643088LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x474 = 3U;
	int64_t x475 = -950244932LL;
	static uint16_t x476 = UINT16_MAX;
	int64_t t78 = 145LL;

	t78 = (((x473-x474)^x475)*x476);

	if (t78 != -219196380255810LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x477 = UINT16_MAX;
	int32_t x478 = INT32_MAX;
	static uint8_t x479 = UINT8_MAX;
	uint32_t x480 = 3076326U;
	volatile uint32_t t79 = 243U;

	t79 = (((x477-x478)^x479)*x480);

	if (t79 != 531100954U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x481 = -2;
	volatile int16_t x482 = -1;
	int16_t x483 = -1;
	static uint64_t x484 = 8LLU;
	uint64_t t80 = 351442395763256LLU;

	t80 = (((x481-x482)^x483)*x484);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x485 = INT32_MIN;
	uint32_t x486 = UINT32_MAX;
	uint16_t x487 = 303U;
	int16_t x488 = INT16_MIN;
	volatile uint32_t t81 = 174974911U;

	t81 = (((x485-x486)^x487)*x488);

	if (t81 != 4285071360U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x489 = -1;
	uint16_t x490 = 21U;
	volatile int8_t x491 = INT8_MAX;
	int16_t x492 = INT16_MIN;

	t82 = (((x489-x490)^x491)*x492);

	if (t82 != 3506176) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x497 = INT16_MIN;
	static uint64_t x498 = UINT64_MAX;
	uint32_t x499 = UINT32_MAX;
	int16_t x500 = INT16_MIN;
	volatile uint64_t t83 = 1018279739133463231LLU;

	t83 = (((x497-x498)^x499)*x500);

	if (t83 != 140736414679040LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x509 = 55941310140LLU;
	static uint16_t x511 = 184U;
	int8_t x512 = -1;
	uint64_t t84 = 2677992623873105771LLU;

	t84 = (((x509-x510)^x511)*x512);

	if (t84 != 9223371980913465852LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x517 = UINT32_MAX;
	static int8_t x518 = INT8_MIN;
	int64_t x519 = INT64_MIN;
	uint64_t x520 = 2868356686598467905LLU;
	uint64_t t85 = 934804161464LLU;

	t85 = (((x517-x518)^x519)*x520);

	if (t85 != 4569789760669167423LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x521 = 495178LL;
	volatile int16_t x522 = 7522;
	volatile uint32_t x523 = 4499U;
	static int32_t x524 = INT32_MAX;

	t86 = (((x521-x522)^x523)*x524);

	if (t86 != 1038752872439429LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x525 = UINT64_MAX;
	int8_t x526 = 2;
	volatile uint8_t x527 = UINT8_MAX;
	static uint16_t x528 = 0U;
	uint64_t t87 = 102458737776018LLU;

	t87 = (((x525-x526)^x527)*x528);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x529 = INT64_MAX;
	uint16_t x530 = 695U;
	int32_t x531 = INT32_MIN;

	t88 = (((x529-x530)^x531)*x532);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x533 = INT16_MIN;
	static int16_t x534 = INT16_MIN;
	int32_t x535 = 4216;
	static uint8_t x536 = 7U;
	volatile int32_t t89 = -1;

	t89 = (((x533-x534)^x535)*x536);

	if (t89 != 29512) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x537 = 20365943730058LLU;
	int32_t x538 = 3;
	int32_t x539 = INT32_MIN;
	int8_t x540 = -1;
	uint64_t t90 = 681646LLU;

	t90 = (((x537-x538)^x539)*x540);

	if (t90 != 20365378621561LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x542 = UINT32_MAX;
	int32_t x543 = INT32_MAX;
	int8_t x544 = -1;

	t91 = (((x541-x542)^x543)*x544);

	if (t91 != 2147450882U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x545 = -1LL;
	static int8_t x546 = INT8_MIN;
	static volatile uint64_t x547 = UINT64_MAX;
	static uint64_t t92 = 309775LLU;

	t92 = (((x545-x546)^x547)*x548);

	if (t92 != 18446744073704542336LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x557 = 1631;
	static int32_t x558 = -2;
	int32_t x559 = INT32_MAX;
	int8_t x560 = 1;

	t93 = (((x557-x558)^x559)*x560);

	if (t93 != 2147482014) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x561 = 11693LLU;
	volatile uint32_t x562 = 157U;
	static int8_t x564 = 31;
	uint64_t t94 = 6448363833LLU;

	t94 = (((x561-x562)^x563)*x564);

	if (t94 != 248490694235048342LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x566 = INT32_MAX;
	static uint8_t x567 = 92U;
	static uint32_t x568 = 976U;
	volatile uint32_t t95 = 48619303U;

	t95 = (((x565-x566)^x567)*x568);

	if (t95 != 89792U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x569 = INT8_MAX;
	volatile uint64_t x570 = UINT64_MAX;
	int16_t x571 = INT16_MIN;
	int8_t x572 = -1;

	t96 = (((x569-x570)^x571)*x572);

	if (t96 != 32640LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x581 = -2;
	uint64_t x582 = 14276949624290LLU;
	volatile int16_t x583 = INT16_MIN;
	volatile int16_t x584 = INT16_MAX;
	uint64_t t97 = 20045LLU;

	t97 = (((x581-x582)^x583)*x584);

	if (t97 != 467812808240350692LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x593 = 7339;
	int32_t x594 = -211284;
	uint32_t x595 = UINT32_MAX;
	volatile uint32_t t98 = 143U;

	t98 = (((x593-x594)^x595)*x596);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x602 = -1;
	int8_t x603 = INT8_MIN;
	int16_t x604 = -3;
	int64_t t99 = -89577921682937LL;

	t99 = (((x601-x602)^x603)*x604);

	if (t99 != 366LL) { NG(); } else { ; }
	
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

