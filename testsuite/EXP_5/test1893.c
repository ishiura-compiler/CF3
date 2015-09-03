#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = -11;
static volatile int32_t t4 = 335012;
static int16_t x31 = 0;
uint32_t x39 = UINT32_MAX;
volatile uint16_t x46 = 2U;
uint16_t x47 = 0U;
volatile int16_t x51 = INT16_MIN;
int64_t x57 = 32608483121461LL;
int16_t x61 = 484;
int16_t x66 = INT16_MIN;
int32_t t16 = 2412;
int16_t x93 = INT16_MIN;
uint8_t x97 = 0U;
volatile uint32_t x99 = UINT32_MAX;
static volatile int32_t t22 = -262485926;
int64_t x130 = 493LL;
uint8_t x136 = 121U;
static uint32_t x137 = 5435898U;
int8_t x143 = 0;
int32_t t30 = -3837876;
int16_t x149 = INT16_MAX;
uint32_t x151 = 137U;
int64_t x153 = INT64_MIN;
volatile int32_t t33 = -178474;
int16_t x162 = -1;
volatile uint8_t x165 = 19U;
int8_t x167 = -2;
static int16_t x172 = -1023;
int16_t x173 = INT16_MIN;
uint8_t x176 = 38U;
uint64_t x187 = 574108053804319LLU;
int64_t x204 = INT64_MIN;
uint32_t x206 = 2412773U;
uint8_t x211 = 117U;
static volatile int32_t t42 = 2752;
static int16_t x214 = 27;
static int8_t x217 = INT8_MIN;
int16_t x219 = INT16_MIN;
static int16_t x228 = -14870;
uint32_t x230 = UINT32_MAX;
volatile int16_t x233 = -25;
int64_t x234 = 25321LL;
int16_t x236 = INT16_MIN;
int8_t x248 = INT8_MIN;
volatile int64_t x260 = -1LL;
int8_t x270 = -16;
uint32_t x271 = 1144U;
volatile int16_t x282 = INT16_MIN;
volatile int8_t x283 = -22;
volatile int32_t x287 = -341538;
volatile int32_t x292 = 16103177;
int32_t x294 = -23;
static uint64_t x295 = 45220604485831LLU;
static volatile int32_t t59 = -46677319;
static volatile int32_t t60 = -61;
int16_t x327 = -21;
int32_t t63 = -9;
int8_t x339 = INT8_MIN;
int32_t x354 = INT32_MAX;
uint8_t x359 = 6U;
static int64_t x361 = -10497249LL;
int16_t x363 = -1;
uint64_t x368 = 310171612750LLU;
uint16_t x369 = UINT16_MAX;
static volatile uint16_t x374 = 1U;
int16_t x381 = INT16_MIN;
uint16_t x383 = 682U;
uint8_t x401 = 3U;
uint8_t x402 = 65U;
static int8_t x411 = 0;
int32_t t83 = -11126;
static int16_t x423 = 0;
int64_t x430 = -1LL;
int32_t t86 = 3864;
int64_t x446 = -1553812LL;
static int32_t t89 = -29918;
int8_t x453 = INT8_MIN;
int64_t x459 = -1LL;
static volatile int64_t x462 = -1LL;
int8_t x468 = -1;
static int32_t x475 = 2;
int32_t x479 = -163;
int32_t t95 = -135682730;
uint16_t x484 = 4682U;
int64_t x487 = INT64_MIN;
static int64_t x491 = -1LL;
static volatile int32_t t99 = -7974687;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint32_t x2 = 189U;
	uint64_t x3 = 558687940282LLU;
	uint16_t x4 = 10U;
	volatile int32_t t0 = -30141611;

	t0 = (x1==((x2|x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static uint32_t x6 = 75U;
	static int32_t x7 = -1;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 78234507;

	t1 = (x5==((x6|x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int64_t x10 = -3LL;
	static int64_t x11 = 7541606LL;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 12;

	t2 = (x9==((x10|x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	int8_t x15 = -1;
	uint32_t x16 = 26702U;
	int32_t t3 = 3322179;

	t3 = (x13==((x14|x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -28108482356LL;
	int32_t x22 = 2811;
	int8_t x23 = INT8_MAX;
	int16_t x24 = 696;

	t4 = (x21==((x22|x23)*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MAX;
	volatile uint32_t x26 = UINT32_MAX;
	uint8_t x27 = 4U;
	uint32_t x28 = 66U;
	static int32_t t5 = 23;

	t5 = (x25==((x26|x27)*x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = 6U;
	int32_t x30 = 47203;
	volatile int16_t x32 = -4054;
	int32_t t6 = 0;

	t6 = (x29==((x30|x31)*x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -31;
	uint64_t x34 = UINT64_MAX;
	static int32_t x35 = INT32_MIN;
	int32_t x36 = 28817;
	int32_t t7 = 64200;

	t7 = (x33==((x34|x35)*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 3U;
	uint16_t x38 = 138U;
	int32_t x40 = INT32_MIN;
	volatile int32_t t8 = -27602321;

	t8 = (x37==((x38|x39)*x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 134U;
	uint16_t x48 = 47U;
	int32_t t9 = 26;

	t9 = (x45==((x46|x47)*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = 7;
	int16_t x52 = INT16_MIN;
	volatile int32_t t10 = -9;

	t10 = (x49==((x50|x51)*x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MAX;
	int32_t x54 = 33258;
	int16_t x55 = -2651;
	int16_t x56 = INT16_MIN;
	static volatile int32_t t11 = 678;

	t11 = (x53==((x54|x55)*x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = INT16_MIN;
	int32_t x59 = -1;
	uint16_t x60 = 1039U;
	int32_t t12 = 5;

	t12 = (x57==((x58|x59)*x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x62 = INT32_MAX;
	int8_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t13 = -6;

	t13 = (x61==((x62|x63)*x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MIN;
	volatile int8_t x67 = -35;
	int8_t x68 = -1;
	static int32_t t14 = -2;

	t14 = (x65==((x66|x67)*x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x69 = 17340U;
	volatile int16_t x70 = INT16_MAX;
	uint64_t x71 = 326805433LLU;
	uint64_t x72 = 28325653215246484LLU;
	int32_t t15 = 22594;

	t15 = (x69==((x70|x71)*x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x73 = 12894522U;
	int64_t x74 = INT64_MAX;
	volatile int32_t x75 = -1;
	int32_t x76 = 530588431;

	t16 = (x73==((x74|x75)*x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int16_t x78 = -20;
	volatile int8_t x79 = INT8_MIN;
	uint16_t x80 = UINT16_MAX;
	int32_t t17 = -238928;

	t17 = (x77==((x78|x79)*x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = 47;
	uint16_t x90 = UINT16_MAX;
	uint64_t x91 = 18536170775096LLU;
	int16_t x92 = -1904;
	static volatile int32_t t18 = -233986109;

	t18 = (x89==((x90|x91)*x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = INT16_MIN;
	static volatile int16_t x95 = INT16_MAX;
	int16_t x96 = INT16_MAX;
	int32_t t19 = 31725;

	t19 = (x93==((x94|x95)*x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x98 = 55U;
	int8_t x100 = -3;
	volatile int32_t t20 = -15326;

	t20 = (x97==((x98|x99)*x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 3225LLU;
	volatile int32_t x102 = -1;
	volatile int64_t x103 = 16073713810538698LL;
	uint16_t x104 = 3U;
	static int32_t t21 = -319232526;

	t21 = (x101==((x102|x103)*x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	int16_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int8_t x108 = -1;

	t22 = (x105==((x106|x107)*x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = -1;
	int64_t x110 = -1LL;
	int16_t x111 = -15376;
	int32_t x112 = INT32_MIN;
	volatile int32_t t23 = 73181283;

	t23 = (x109==((x110|x111)*x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = -50;
	uint32_t x115 = 468U;
	int16_t x116 = -23;
	static int32_t t24 = -66997;

	t24 = (x113==((x114|x115)*x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = 1;
	volatile int8_t x122 = -6;
	uint8_t x123 = 0U;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t25 = 350;

	t25 = (x121==((x122|x123)*x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x125 = UINT8_MAX;
	int64_t x126 = 5LL;
	int32_t x127 = 143;
	static int16_t x128 = -2;
	int32_t t26 = -8172250;

	t26 = (x125==((x126|x127)*x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = -29;
	uint16_t x131 = UINT16_MAX;
	volatile uint8_t x132 = UINT8_MAX;
	volatile int32_t t27 = 6915;

	t27 = (x129==((x130|x131)*x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = INT32_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	int32_t t28 = -5581;

	t28 = (x133==((x134|x135)*x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x138 = INT16_MIN;
	int64_t x139 = 10779327690933284LL;
	static volatile int16_t x140 = -22;
	static int32_t t29 = 12;

	t29 = (x137==((x138|x139)*x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = INT8_MIN;
	static uint16_t x142 = UINT16_MAX;
	uint32_t x144 = UINT32_MAX;

	t30 = (x141==((x142|x143)*x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = 26;
	int32_t x147 = INT32_MAX;
	volatile int8_t x148 = -1;
	int32_t t31 = 209646;

	t31 = (x145==((x146|x147)*x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x150 = -228;
	int32_t x152 = INT32_MIN;
	volatile int32_t t32 = 17833939;

	t32 = (x149==((x150|x151)*x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x154 = -4792717010LL;
	int16_t x155 = -23;
	uint16_t x156 = UINT16_MAX;

	t33 = (x153==((x154|x155)*x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = UINT8_MAX;
	volatile uint8_t x163 = 6U;
	volatile uint32_t x164 = 7203U;
	volatile int32_t t34 = 185;

	t34 = (x161==((x162|x163)*x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x166 = -3235;
	int8_t x168 = INT8_MAX;
	volatile int32_t t35 = 780811;

	t35 = (x165==((x166|x167)*x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 57452304LLU;
	int8_t x170 = 9;
	int16_t x171 = -1;
	int32_t t36 = -256276527;

	t36 = (x169==((x170|x171)*x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x174 = 171691109903873LLU;
	int32_t x175 = INT32_MAX;
	int32_t t37 = -49;

	t37 = (x173==((x174|x175)*x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x185 = 83U;
	uint16_t x186 = 1033U;
	int8_t x188 = -1;
	static volatile int32_t t38 = -398061;

	t38 = (x185==((x186|x187)*x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 178421LLU;
	static volatile uint64_t x190 = 7111266LLU;
	int16_t x191 = 72;
	static int32_t x192 = 54;
	volatile int32_t t39 = -247;

	t39 = (x189==((x190|x191)*x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x201 = INT8_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile int64_t x203 = INT64_MIN;
	int32_t t40 = 92478235;

	t40 = (x201==((x202|x203)*x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x205 = -1;
	int16_t x207 = 0;
	static volatile uint16_t x208 = UINT16_MAX;
	volatile int32_t t41 = 8778792;

	t41 = (x205==((x206|x207)*x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x209 = 1U;
	volatile uint8_t x210 = 4U;
	volatile uint64_t x212 = UINT64_MAX;

	t42 = (x209==((x210|x211)*x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x213 = UINT64_MAX;
	uint16_t x215 = 3U;
	int8_t x216 = INT8_MIN;
	int32_t t43 = -483;

	t43 = (x213==((x214|x215)*x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x218 = UINT8_MAX;
	int16_t x220 = 1;
	volatile int32_t t44 = -14095;

	t44 = (x217==((x218|x219)*x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MAX;
	static int32_t x222 = 6;
	uint16_t x223 = 935U;
	int32_t x224 = 0;
	int32_t t45 = -219034;

	t45 = (x221==((x222|x223)*x224));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x225 = -1;
	volatile int32_t x226 = 262;
	static int16_t x227 = INT16_MIN;
	static int32_t t46 = 2252738;

	t46 = (x225==((x226|x227)*x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x229 = INT8_MIN;
	int32_t x231 = -1;
	int16_t x232 = -4;
	static volatile int32_t t47 = 6286001;

	t47 = (x229==((x230|x231)*x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x235 = -1;
	volatile int32_t t48 = 1;

	t48 = (x233==((x234|x235)*x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = -8;
	int8_t x243 = INT8_MIN;
	uint64_t x244 = 551923791511300256LLU;
	int32_t t49 = -249448;

	t49 = (x241==((x242|x243)*x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	uint32_t x247 = 3001819U;
	volatile int32_t t50 = -3;

	t50 = (x245==((x246|x247)*x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x249 = 0;
	volatile uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = INT16_MIN;
	volatile int8_t x252 = INT8_MIN;
	int32_t t51 = -67640633;

	t51 = (x249==((x250|x251)*x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x257 = INT16_MIN;
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = -4580487729689719LL;
	volatile int32_t t52 = -1;

	t52 = (x257==((x258|x259)*x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x265 = 6U;
	volatile uint64_t x266 = UINT64_MAX;
	int32_t x267 = -1;
	uint32_t x268 = 1498U;
	int32_t t53 = 1901395;

	t53 = (x265==((x266|x267)*x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x269 = -1LL;
	uint64_t x272 = 76LLU;
	volatile int32_t t54 = 27;

	t54 = (x269==((x270|x271)*x272));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x277 = 1U;
	int32_t x278 = -1;
	uint64_t x279 = 1118297LLU;
	int8_t x280 = -1;
	volatile int32_t t55 = -124;

	t55 = (x277==((x278|x279)*x280));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x281 = 30;
	static volatile int16_t x284 = INT16_MAX;
	static volatile int32_t t56 = 1;

	t56 = (x281==((x282|x283)*x284));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = INT32_MIN;
	static uint8_t x286 = 9U;
	static uint16_t x288 = 1U;
	static int32_t t57 = 25;

	t57 = (x285==((x286|x287)*x288));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x289 = 0U;
	int32_t x290 = -1;
	int64_t x291 = -9486138LL;
	int32_t t58 = -465840;

	t58 = (x289==((x290|x291)*x292));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x293 = UINT32_MAX;
	int16_t x296 = 5;

	t59 = (x293==((x294|x295)*x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = 4741;
	int32_t x298 = -325148;
	uint16_t x299 = UINT16_MAX;
	static int32_t x300 = -1;

	t60 = (x297==((x298|x299)*x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = INT16_MIN;
	static int8_t x318 = -1;
	int16_t x319 = 1666;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t61 = -1;

	t61 = (x317==((x318|x319)*x320));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x325 = 7187837;
	int64_t x326 = INT64_MAX;
	int16_t x328 = 12;
	int32_t t62 = 0;

	t62 = (x325==((x326|x327)*x328));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MIN;

	t63 = (x329==((x330|x331)*x332));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x333 = 35U;
	int32_t x334 = 2747;
	uint32_t x335 = 274953473U;
	int32_t x336 = INT32_MAX;
	volatile int32_t t64 = 1490590;

	t64 = (x333==((x334|x335)*x336));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x337 = -1LL;
	volatile int16_t x338 = -313;
	int32_t x340 = -1;
	static volatile int32_t t65 = 196521157;

	t65 = (x337==((x338|x339)*x340));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = INT64_MAX;
	int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = UINT8_MAX;
	static int32_t t66 = 4770891;

	t66 = (x341==((x342|x343)*x344));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = 91;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = 87U;
	static int32_t t67 = -16436640;

	t67 = (x345==((x346|x347)*x348));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x350 = -1;
	volatile int16_t x351 = INT16_MIN;
	int64_t x352 = INT64_MAX;
	volatile int32_t t68 = -42151928;

	t68 = (x349==((x350|x351)*x352));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x353 = -1;
	int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = 2838031224762033924LLU;
	int32_t t69 = -1851;

	t69 = (x353==((x354|x355)*x356));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = -3;
	int8_t x358 = INT8_MAX;
	int64_t x360 = -1903LL;
	static int32_t t70 = -11;

	t70 = (x357==((x358|x359)*x360));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x362 = INT16_MIN;
	static int64_t x364 = -6LL;
	int32_t t71 = 106432903;

	t71 = (x361==((x362|x363)*x364));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x365 = INT16_MIN;
	static int32_t x366 = 22389;
	static int16_t x367 = -807;
	volatile int32_t t72 = 846931518;

	t72 = (x365==((x366|x367)*x368));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x370 = 137LLU;
	static int64_t x371 = 69939551712LL;
	volatile int64_t x372 = INT64_MIN;
	static int32_t t73 = 2401;

	t73 = (x369==((x370|x371)*x372));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x373 = INT64_MAX;
	int32_t x375 = INT32_MIN;
	int8_t x376 = -1;
	int32_t t74 = 4926;

	t74 = (x373==((x374|x375)*x376));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = -3;
	int64_t x378 = -390LL;
	static volatile int32_t x379 = 774;
	int32_t x380 = INT32_MIN;
	volatile int32_t t75 = 128799291;

	t75 = (x377==((x378|x379)*x380));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x382 = 3149U;
	volatile uint32_t x384 = 1696U;
	volatile int32_t t76 = 776221187;

	t76 = (x381==((x382|x383)*x384));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x385 = -22;
	int8_t x386 = 7;
	int8_t x387 = INT8_MAX;
	static volatile int16_t x388 = INT16_MIN;
	volatile int32_t t77 = 9;

	t77 = (x385==((x386|x387)*x388));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x389 = -1;
	int64_t x390 = -1LL;
	volatile int8_t x391 = INT8_MAX;
	int32_t x392 = -344;
	static volatile int32_t t78 = 80636;

	t78 = (x389==((x390|x391)*x392));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 43U;
	static int8_t x396 = -1;
	static int32_t t79 = 116;

	t79 = (x393==((x394|x395)*x396));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x403 = 3741;
	uint32_t x404 = 26201U;
	int32_t t80 = 37319;

	t80 = (x401==((x402|x403)*x404));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = -1;
	int8_t x410 = INT8_MAX;
	int64_t x412 = -186LL;
	volatile int32_t t81 = 7;

	t81 = (x409==((x410|x411)*x412));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x413 = UINT64_MAX;
	uint64_t x414 = 3800LLU;
	int64_t x415 = 270798941391107LL;
	static int16_t x416 = 31;
	volatile int32_t t82 = 0;

	t82 = (x413==((x414|x415)*x416));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x417 = -1;
	int32_t x418 = INT32_MAX;
	volatile int8_t x419 = INT8_MIN;
	volatile uint8_t x420 = 21U;

	t83 = (x417==((x418|x419)*x420));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x421 = 2280;
	volatile int8_t x422 = INT8_MIN;
	int16_t x424 = 5102;
	volatile int32_t t84 = -24781074;

	t84 = (x421==((x422|x423)*x424));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x425 = UINT16_MAX;
	int32_t x426 = 333966978;
	uint16_t x427 = UINT16_MAX;
	uint64_t x428 = 978489LLU;
	static volatile int32_t t85 = -77046;

	t85 = (x425==((x426|x427)*x428));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x429 = -1;
	static volatile int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MAX;

	t86 = (x429==((x430|x431)*x432));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x437 = 1;
	int8_t x438 = INT8_MIN;
	static uint16_t x439 = 41U;
	uint32_t x440 = 50800U;
	int32_t t87 = 52;

	t87 = (x437==((x438|x439)*x440));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x441 = 2727331LLU;
	static uint64_t x442 = UINT64_MAX;
	int64_t x443 = INT64_MAX;
	int16_t x444 = INT16_MIN;
	volatile int32_t t88 = 82837882;

	t88 = (x441==((x442|x443)*x444));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x445 = 2;
	int32_t x447 = INT32_MIN;
	static int64_t x448 = 964131283LL;

	t89 = (x445==((x446|x447)*x448));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x454 = INT8_MIN;
	uint16_t x455 = UINT16_MAX;
	int64_t x456 = INT64_MAX;
	static volatile int32_t t90 = 29;

	t90 = (x453==((x454|x455)*x456));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x457 = INT64_MAX;
	uint32_t x458 = UINT32_MAX;
	uint8_t x460 = 2U;
	volatile int32_t t91 = 183;

	t91 = (x457==((x458|x459)*x460));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x461 = INT32_MIN;
	static int8_t x463 = 0;
	int32_t x464 = INT32_MAX;
	int32_t t92 = 1141;

	t92 = (x461==((x462|x463)*x464));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x465 = UINT8_MAX;
	static volatile uint8_t x466 = 62U;
	uint16_t x467 = UINT16_MAX;
	int32_t t93 = 106;

	t93 = (x465==((x466|x467)*x468));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x473 = -1;
	uint8_t x474 = 1U;
	uint16_t x476 = 6U;
	static int32_t t94 = 23;

	t94 = (x473==((x474|x475)*x476));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x477 = 6510LLU;
	int32_t x478 = INT32_MAX;
	uint64_t x480 = UINT64_MAX;

	t95 = (x477==((x478|x479)*x480));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x481 = INT8_MIN;
	static int8_t x482 = -36;
	static volatile uint16_t x483 = 30549U;
	int32_t t96 = -1456;

	t96 = (x481==((x482|x483)*x484));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x485 = INT64_MAX;
	volatile int32_t x486 = -1;
	int64_t x488 = -1LL;
	volatile int32_t t97 = 93049;

	t97 = (x485==((x486|x487)*x488));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x489 = 1258782836LLU;
	volatile uint8_t x490 = 30U;
	volatile uint32_t x492 = UINT32_MAX;
	int32_t t98 = 911556;

	t98 = (x489==((x490|x491)*x492));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x493 = 72U;
	int16_t x494 = -1;
	static volatile uint16_t x495 = UINT16_MAX;
	int16_t x496 = INT16_MAX;

	t99 = (x493==((x494|x495)*x496));

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

