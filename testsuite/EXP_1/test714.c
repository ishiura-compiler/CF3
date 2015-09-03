#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = INT64_MAX;
uint16_t x6 = 7U;
volatile int16_t x7 = -1;
int64_t t1 = -160222081LL;
static uint8_t x29 = 0U;
uint8_t x30 = 1U;
int8_t x36 = -1;
int32_t x41 = 15;
int16_t x52 = 1;
int16_t x56 = -1;
volatile uint64_t x57 = UINT64_MAX;
uint16_t x61 = 454U;
static volatile int64_t x65 = INT64_MIN;
int16_t x72 = 3356;
static int16_t x76 = INT16_MIN;
static int16_t x93 = INT16_MIN;
volatile uint32_t t19 = 42921U;
volatile uint64_t x103 = 15794LLU;
static uint64_t t21 = 2311350912594LLU;
int64_t t23 = -13936918418951LL;
int8_t x117 = INT8_MAX;
int64_t t24 = INT64_MIN;
volatile int64_t x142 = INT64_MIN;
static int64_t t29 = 10771832LL;
static uint8_t x148 = 1U;
int32_t x149 = INT32_MIN;
int8_t x151 = 3;
static int8_t x155 = -1;
volatile uint16_t x157 = UINT16_MAX;
volatile int8_t x158 = 28;
static int8_t x162 = INT8_MIN;
uint32_t t34 = UINT32_MAX;
volatile int8_t x172 = INT8_MIN;
volatile uint16_t x174 = 9U;
int16_t x179 = INT16_MIN;
int16_t x183 = -39;
static uint32_t x186 = 1380U;
uint8_t x188 = 68U;
static volatile int64_t t40 = 0LL;
int32_t x190 = -1;
volatile uint64_t t43 = 69210LLU;
int16_t x211 = INT16_MAX;
int64_t t44 = -25LL;
uint32_t x220 = 33U;
volatile uint64_t t47 = 6623005204702210873LLU;
uint32_t x229 = 0U;
volatile uint64_t t49 = 1335032288198849105LLU;
int64_t x234 = INT64_MIN;
uint8_t x237 = 3U;
int16_t x240 = -1;
uint8_t x241 = 16U;
int64_t x244 = INT64_MAX;
volatile uint32_t x252 = 221622U;
static int32_t x266 = INT32_MIN;
int32_t x270 = INT32_MAX;
uint8_t x284 = 13U;
static int16_t x287 = INT16_MAX;
static int32_t x292 = -10;
uint64_t x294 = 4136332LLU;
volatile int32_t t65 = -1;
int64_t x301 = -1LL;
volatile int64_t t66 = 1925676351324540391LL;
uint8_t x307 = 1U;
volatile int64_t t69 = 217415898LL;
int32_t t70 = 315978;
volatile int16_t x323 = INT16_MAX;
volatile uint32_t x325 = 31345U;
volatile uint32_t t72 = 28362549U;
uint8_t x334 = UINT8_MAX;
static uint64_t x335 = 7LLU;
int32_t x337 = INT32_MAX;
int32_t x339 = -1;
static int8_t x344 = INT8_MIN;
int16_t x346 = INT16_MAX;
uint8_t x348 = 0U;
int64_t x350 = INT64_MAX;
int16_t x357 = INT16_MIN;
volatile int64_t t79 = -15152461LL;
static uint16_t x365 = 2U;
int64_t x368 = -1LL;
int32_t x370 = -1;
volatile uint32_t x372 = 84U;
int64_t x379 = -1295LL;
int64_t t84 = -45489976267373892LL;
uint16_t x390 = UINT16_MAX;
volatile uint16_t x392 = UINT16_MAX;
static int16_t x396 = -21;
static int64_t x401 = 7287341732598868LL;
volatile uint16_t x406 = 19202U;
int8_t x407 = INT8_MAX;
static int32_t t89 = -112586;
static int8_t x410 = INT8_MIN;
int8_t x411 = INT8_MIN;
int32_t t90 = 106472;
int8_t x416 = INT8_MIN;
uint64_t t93 = 159422650LLU;
uint32_t x429 = 871829311U;
uint16_t x431 = 15714U;
static uint64_t t94 = 6188515583804908429LLU;
volatile uint16_t x437 = 543U;
int8_t x447 = INT8_MIN;
static int8_t x451 = -55;
int8_t x452 = -1;
uint16_t x453 = 5U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint64_t x2 = 10LLU;
	int16_t x3 = INT16_MIN;
	static int16_t x4 = INT16_MAX;
	volatile uint64_t t0 = 12618610466751LLU;

	t0 = (((x1%x2)*x3)|x4);

	if (t0 != 18446744073709322239LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x8 = -534861;

	t1 = (((x5%x6)*x7)|x8);

	if (t1 != -534861LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MAX;
	volatile int8_t x15 = -1;
	int16_t x16 = INT16_MIN;
	int64_t t2 = 480LL;

	t2 = (((x13%x14)*x15)|x16);

	if (t2 != -32760LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = -15;
	uint8_t x18 = 22U;
	int8_t x19 = 43;
	int8_t x20 = -1;
	int32_t t3 = -79;

	t3 = (((x17%x18)*x19)|x20);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	uint8_t x24 = UINT8_MAX;
	int64_t t4 = -1710221888LL;

	t4 = (((x21%x22)*x23)|x24);

	if (t4 != 255LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x31 = UINT8_MAX;
	volatile int8_t x32 = -1;
	volatile int32_t t5 = -125175739;

	t5 = (((x29%x30)*x31)|x32);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 5405LLU;
	uint16_t x34 = 10449U;
	static int64_t x35 = -1LL;
	uint64_t t6 = UINT64_MAX;

	t6 = (((x33%x34)*x35)|x36);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -1783;
	static int32_t x38 = -1;
	static int16_t x39 = INT16_MAX;
	int64_t x40 = INT64_MIN;
	int64_t t7 = INT64_MIN;

	t7 = (((x37%x38)*x39)|x40);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	int16_t x44 = INT16_MAX;
	volatile int32_t t8 = -809100863;

	t8 = (((x41%x42)*x43)|x44);

	if (t8 != 491519) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MIN;
	static int16_t x50 = -3967;
	int8_t x51 = 1;
	volatile int32_t t9 = 18;

	t9 = (((x49%x50)*x51)|x52);

	if (t9 != -3735) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int64_t x54 = INT64_MIN;
	uint32_t x55 = 117509169U;
	static volatile int64_t t10 = 979226548989644LL;

	t10 = (((x53%x54)*x55)|x56);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = 1;
	volatile int64_t x59 = INT64_MAX;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t11 = 26404567947826630LLU;

	t11 = (((x57%x58)*x59)|x60);

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = -1LL;
	static int8_t x63 = INT8_MIN;
	volatile int64_t x64 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = (((x61%x62)*x63)|x64);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x66 = INT32_MIN;
	static int16_t x67 = 171;
	volatile uint16_t x68 = UINT16_MAX;
	int64_t t13 = -114LL;

	t13 = (((x65%x66)*x67)|x68);

	if (t13 != 65535LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	static volatile int32_t t14 = 0;

	t14 = (((x69%x70)*x71)|x72);

	if (t14 != 32669) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	volatile uint64_t x74 = UINT64_MAX;
	uint32_t x75 = 839U;
	uint64_t t15 = 301352628314057499LLU;

	t15 = (((x73%x74)*x75)|x76);

	if (t15 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	static uint32_t x79 = UINT32_MAX;
	int32_t x80 = 16372618;
	uint32_t t16 = 51521179U;

	t16 = (((x77%x78)*x79)|x80);

	if (t16 != 16372618U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile int64_t x82 = 175373316LL;
	static uint16_t x83 = 13320U;
	uint16_t x84 = 105U;
	volatile int64_t t17 = 44776LL;

	t17 = (((x81%x82)*x83)|x84);

	if (t17 != -436469655LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = INT16_MIN;
	uint64_t x90 = 1380575299533LLU;
	uint64_t x91 = 2379371039LLU;
	uint16_t x92 = UINT16_MAX;
	volatile uint64_t t18 = 10887398219LLU;

	t18 = (((x89%x90)*x91)|x92);

	if (t18 != 4250195205834997759LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x94 = -106959177;
	volatile uint32_t x95 = 510963U;
	int32_t x96 = INT32_MAX;

	t19 = (((x93%x94)*x95)|x96);

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	volatile uint16_t x99 = UINT16_MAX;
	volatile uint64_t x100 = 1697871717375LLU;
	volatile uint64_t t20 = 15449744LLU;

	t20 = (((x97%x98)*x99)|x100);

	if (t20 != 18446744073709511679LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = UINT8_MAX;
	uint16_t x102 = UINT16_MAX;
	uint32_t x104 = UINT32_MAX;

	t21 = (((x101%x102)*x103)|x104);

	if (t21 != 4294967295LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x105 = UINT8_MAX;
	volatile int32_t x106 = 7856;
	int8_t x107 = -1;
	uint8_t x108 = 33U;
	int32_t t22 = -73778;

	t22 = (((x105%x106)*x107)|x108);

	if (t22 != -223) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x109 = -6;
	int64_t x110 = -7790801281391469LL;
	uint8_t x111 = UINT8_MAX;
	volatile int16_t x112 = 103;

	t23 = (((x109%x110)*x111)|x112);

	if (t23 != -1433LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x118 = -1;
	int8_t x119 = -49;
	int64_t x120 = INT64_MIN;

	t24 = (((x117%x118)*x119)|x120);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = -4;
	int32_t x126 = -26788423;
	int64_t x127 = -1LL;
	uint16_t x128 = 2U;
	volatile int64_t t25 = -7602336034LL;

	t25 = (((x125%x126)*x127)|x128);

	if (t25 != 6LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x129 = INT8_MIN;
	int16_t x130 = 1;
	uint32_t x131 = 1555723854U;
	int64_t x132 = -50350485377811LL;
	volatile int64_t t26 = 45LL;

	t26 = (((x129%x130)*x131)|x132);

	if (t26 != -50350485377811LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = INT16_MAX;
	int16_t x134 = -8;
	static uint32_t x135 = 105U;
	int32_t x136 = INT32_MAX;
	volatile uint32_t t27 = 0U;

	t27 = (((x133%x134)*x135)|x136);

	if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x137 = 783381U;
	int16_t x138 = 2355;
	volatile int16_t x139 = INT16_MIN;
	uint8_t x140 = 3U;
	uint32_t t28 = 7U;

	t28 = (((x137%x138)*x139)|x140);

	if (t28 != 4245127171U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x141 = 13;
	int16_t x143 = INT16_MIN;
	static volatile uint32_t x144 = 247724U;

	t29 = (((x141%x142)*x143)|x144);

	if (t29 != -276564LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x145 = 10470U;
	uint8_t x146 = UINT8_MAX;
	volatile int8_t x147 = INT8_MIN;
	int32_t t30 = -162806973;

	t30 = (((x145%x146)*x147)|x148);

	if (t30 != -1919) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x150 = INT8_MAX;
	int64_t x152 = INT64_MIN;
	volatile int64_t t31 = 12873417898921877LL;

	t31 = (((x149%x150)*x151)|x152);

	if (t31 != -24LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 3LLU;
	uint8_t x154 = UINT8_MAX;
	int32_t x156 = -1;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (((x153%x154)*x155)|x156);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x159 = 946;
	volatile int16_t x160 = -1;
	volatile int32_t t33 = 34415;

	t33 = (((x157%x158)*x159)|x160);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = UINT32_MAX;
	volatile int16_t x163 = INT16_MAX;
	volatile int16_t x164 = -1;

	t34 = (((x161%x162)*x163)|x164);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x165 = 441U;
	volatile uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MAX;
	int16_t x168 = -1;
	uint32_t t35 = UINT32_MAX;

	t35 = (((x165%x166)*x167)|x168);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = -37;
	int16_t x171 = -708;
	volatile int64_t t36 = 942652LL;

	t36 = (((x169%x170)*x171)|x172);

	if (t36 != -104LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 52U;
	static int8_t x175 = INT8_MAX;
	int64_t x176 = INT64_MAX;
	int64_t t37 = INT64_MAX;

	t37 = (((x173%x174)*x175)|x176);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	static uint16_t x178 = 2U;
	static int64_t x180 = INT64_MAX;
	int64_t t38 = INT64_MAX;

	t38 = (((x177%x178)*x179)|x180);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x181 = -138681513;
	int8_t x182 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	static int32_t t39 = 8;

	t39 = (((x181%x182)*x183)|x184);

	if (t39 != -65) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x187 = 17687U;

	t40 = (((x185%x186)*x187)|x188);

	if (t40 != -22427052LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = -1LL;
	int64_t x191 = 353044809LL;
	int32_t x192 = -48282703;
	int64_t t41 = -3837710785408LL;

	t41 = (((x189%x190)*x191)|x192);

	if (t41 != -48282703LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x193 = INT64_MIN;
	int32_t x194 = 5651872;
	volatile uint64_t x195 = 30968847133044LLU;
	int16_t x196 = INT16_MIN;
	uint64_t t42 = 122991504540183LLU;

	t42 = (((x193%x194)*x195)|x196);

	if (t42 != 18446744073709544960LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = -1;
	int16_t x206 = -1;
	int32_t x207 = 0;
	static uint64_t x208 = 8740LLU;

	t43 = (((x205%x206)*x207)|x208);

	if (t43 != 8740LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = 361375011LL;
	volatile int16_t x210 = -738;
	static uint16_t x212 = UINT16_MAX;

	t44 = (((x209%x210)*x211)|x212);

	if (t44 != 917503LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MIN;
	uint16_t x214 = 7U;
	uint64_t x215 = 455176689LLU;
	int64_t x216 = INT64_MAX;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = (((x213%x214)*x215)|x216);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MAX;
	int64_t x218 = -1LL;
	int8_t x219 = INT8_MIN;
	volatile int64_t t46 = -6159373322219168LL;

	t46 = (((x217%x218)*x219)|x220);

	if (t46 != 33LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = 1055039419141281LLU;
	static uint64_t x222 = 111707847684810839LLU;
	int8_t x223 = -1;
	static int16_t x224 = INT16_MIN;

	t47 = (((x221%x222)*x223)|x224);

	if (t47 != 18446744073709531999LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = -1;
	static int8_t x226 = -1;
	int64_t x227 = 188955235870800021LL;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t48 = INT64_MIN;

	t48 = (((x225%x226)*x227)|x228);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x230 = 58071539061LLU;
	volatile uint32_t x231 = 3U;
	volatile int16_t x232 = -26;

	t49 = (((x229%x230)*x231)|x232);

	if (t49 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x233 = 13U;
	uint8_t x235 = UINT8_MAX;
	static uint16_t x236 = 7U;
	volatile int64_t t50 = -48576182413295LL;

	t50 = (((x233%x234)*x235)|x236);

	if (t50 != 3319LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x238 = UINT8_MAX;
	static uint8_t x239 = 89U;
	volatile int32_t t51 = 9626218;

	t51 = (((x237%x238)*x239)|x240);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x242 = -328706601957250910LL;
	static uint16_t x243 = 3U;
	int64_t t52 = INT64_MAX;

	t52 = (((x241%x242)*x243)|x244);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x245 = -30;
	volatile int8_t x246 = -1;
	volatile uint64_t x247 = UINT64_MAX;
	volatile uint16_t x248 = UINT16_MAX;
	uint64_t t53 = 64897245LLU;

	t53 = (((x245%x246)*x247)|x248);

	if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x249 = 1U;
	int16_t x250 = -1;
	uint8_t x251 = 3U;
	uint32_t t54 = 148006U;

	t54 = (((x249%x250)*x251)|x252);

	if (t54 != 221622U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = -1;
	static volatile int16_t x254 = INT16_MIN;
	volatile int16_t x255 = INT16_MAX;
	volatile uint64_t x256 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (((x253%x254)*x255)|x256);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x261 = -1;
	uint64_t x262 = 6915948240980LLU;
	int8_t x263 = -5;
	int8_t x264 = -1;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (((x261%x262)*x263)|x264);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	static int32_t x268 = -7002;
	int32_t t57 = -743355;

	t57 = (((x265%x266)*x267)|x268);

	if (t57 != -7002) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x269 = 17;
	int16_t x271 = 9;
	uint16_t x272 = 2009U;
	int32_t t58 = 10;

	t58 = (((x269%x270)*x271)|x272);

	if (t58 != 2009) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = -6;
	volatile int64_t x274 = -934241432LL;
	int16_t x275 = INT16_MIN;
	uint8_t x276 = UINT8_MAX;
	int64_t t59 = -2559715270LL;

	t59 = (((x273%x274)*x275)|x276);

	if (t59 != 196863LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = -1;
	uint64_t x278 = 515911061751139942LLU;
	int16_t x279 = INT16_MIN;
	volatile int8_t x280 = INT8_MAX;
	volatile uint64_t t60 = 88468358067LLU;

	t60 = (((x277%x278)*x279)|x280);

	if (t60 != 8762336913508630655LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MIN;
	static volatile int16_t x283 = INT16_MIN;
	volatile int64_t t61 = -3LL;

	t61 = (((x281%x282)*x283)|x284);

	if (t61 != -1073709043LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MIN;
	volatile int64_t x286 = INT64_MAX;
	int8_t x288 = INT8_MAX;
	int64_t t62 = -106LL;

	t62 = (((x285%x286)*x287)|x288);

	if (t62 != -70366596693889LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = 2113420150U;
	static int32_t x290 = INT32_MIN;
	volatile int64_t x291 = -1LL;
	volatile int64_t t63 = 60139993392542LL;

	t63 = (((x289%x290)*x291)|x292);

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x293 = UINT32_MAX;
	int16_t x295 = INT16_MIN;
	volatile int32_t x296 = INT32_MIN;
	uint64_t t64 = 154198968886687LLU;

	t64 = (((x293%x294)*x295)|x296);

	if (t64 != 18446744073287270400LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = INT16_MIN;
	static int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	volatile int32_t x300 = -1;

	t65 = (((x297%x298)*x299)|x300);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x302 = -2706;
	int64_t x303 = 11393LL;
	volatile uint8_t x304 = 2U;

	t66 = (((x301%x302)*x303)|x304);

	if (t66 != -11393LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = INT8_MAX;
	int64_t x306 = 3LL;
	static int64_t x308 = INT64_MIN;
	int64_t t67 = -74558671089486270LL;

	t67 = (((x305%x306)*x307)|x308);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x309 = 2270687LL;
	int8_t x310 = INT8_MIN;
	volatile int32_t x311 = -9243063;
	volatile int16_t x312 = INT16_MIN;
	int64_t t68 = -8278451831LL;

	t68 = (((x309%x310)*x311)|x312);

	if (t68 != -6889LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile int32_t x314 = INT32_MIN;
	uint32_t x315 = 3333102U;
	uint16_t x316 = 3554U;

	t69 = (((x313%x314)*x315)|x316);

	if (t69 != 3554LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x317 = -1;
	int32_t x318 = 3605;
	int8_t x319 = -1;
	int32_t x320 = -1;

	t70 = (((x317%x318)*x319)|x320);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = -1;
	int64_t x322 = INT64_MIN;
	int64_t x324 = -1LL;
	int64_t t71 = -6875110495475LL;

	t71 = (((x321%x322)*x323)|x324);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MIN;
	volatile int32_t x328 = INT32_MIN;

	t72 = (((x325%x326)*x327)|x328);

	if (t72 != 4287266816U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x333 = UINT16_MAX;
	int64_t x336 = INT64_MAX;
	volatile uint64_t t73 = 196125355LLU;

	t73 = (((x333%x334)*x335)|x336);

	if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x338 = -26058;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t74 = 2;

	t74 = (((x337%x338)*x339)|x340);

	if (t74 != -17809) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = -1;
	uint32_t x342 = 117U;
	uint32_t x343 = 9U;
	volatile uint32_t t75 = 51950U;

	t75 = (((x341%x342)*x343)|x344);

	if (t75 != 4294967229U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = INT64_MIN;
	int16_t x347 = INT16_MAX;
	int64_t t76 = -350408348LL;

	t76 = (((x345%x346)*x347)|x348);

	if (t76 != -262136LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x349 = 3;
	static int32_t x351 = INT32_MIN;
	uint8_t x352 = 3U;
	volatile int64_t t77 = 138055LL;

	t77 = (((x349%x350)*x351)|x352);

	if (t77 != -6442450941LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = 2023111545504797216LL;
	int8_t x354 = -1;
	int16_t x355 = 1;
	volatile int32_t x356 = 251;
	int64_t t78 = -117443218910LL;

	t78 = (((x353%x354)*x355)|x356);

	if (t78 != 251LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x358 = INT64_MAX;
	int32_t x359 = -1;
	static int16_t x360 = 212;

	t79 = (((x357%x358)*x359)|x360);

	if (t79 != 32980LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x361 = INT16_MIN;
	int16_t x362 = 2514;
	int16_t x363 = -1;
	volatile uint32_t x364 = 2747333U;
	uint32_t t80 = 1738761U;

	t80 = (((x361%x362)*x363)|x364);

	if (t80 != 2747351U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x366 = -1009;
	volatile int64_t x367 = 20015805323558LL;
	volatile int64_t t81 = -2893922448897531LL;

	t81 = (((x365%x366)*x367)|x368);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	uint64_t t82 = 1886711805119LLU;

	t82 = (((x369%x370)*x371)|x372);

	if (t82 != 84LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = -11015;
	int8_t x378 = INT8_MIN;
	static uint16_t x380 = UINT16_MAX;
	int64_t t83 = 1238083694362408172LL;

	t83 = (((x377%x378)*x379)|x380);

	if (t83 != 65535LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = -1;
	volatile int64_t x386 = INT64_MAX;
	uint16_t x387 = 60U;
	int64_t x388 = -19215589LL;

	t84 = (((x385%x386)*x387)|x388);

	if (t84 != -33LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = 6U;
	static int32_t x391 = -416964508;
	uint32_t t85 = 30U;

	t85 = (((x389%x390)*x391)|x392);

	if (t85 != 1793196031U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = 7673U;
	int16_t x394 = INT16_MAX;
	uint64_t x395 = UINT64_MAX;
	uint64_t t86 = 31915893LLU;

	t86 = (((x393%x394)*x395)|x396);

	if (t86 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = -1LL;
	volatile int32_t x399 = -1;
	volatile int16_t x400 = -1;
	int64_t t87 = -10063LL;

	t87 = (((x397%x398)*x399)|x400);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x402 = INT16_MIN;
	int32_t x403 = INT32_MIN;
	static int64_t x404 = INT64_MIN;
	volatile int64_t t88 = -216739LL;

	t88 = (((x401%x402)*x403)|x404);

	if (t88 != -11175504904192LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = INT16_MAX;
	int8_t x408 = INT8_MAX;

	t89 = (((x405%x406)*x407)|x408);

	if (t89 != 1722879) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x409 = INT32_MIN;
	volatile int16_t x412 = -34;

	t90 = (((x409%x410)*x411)|x412);

	if (t90 != -34) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x413 = 19U;
	static uint16_t x414 = 13U;
	static volatile int64_t x415 = 5933747963652436LL;
	int64_t t91 = 27785224184970LL;

	t91 = (((x413%x414)*x415)|x416);

	if (t91 != -8LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = 58;
	int8_t x423 = -6;
	volatile uint8_t x424 = 4U;
	static volatile int32_t t92 = -1;

	t92 = (((x421%x422)*x423)|x424);

	if (t92 != 76) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = 1;
	static int64_t x426 = INT64_MIN;
	uint64_t x427 = 53623LLU;
	uint8_t x428 = UINT8_MAX;

	t93 = (((x425%x426)*x427)|x428);

	if (t93 != 53759LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x430 = INT8_MIN;
	uint64_t x432 = 508LLU;

	t94 = (((x429%x430)*x431)|x432);

	if (t94 != 3275086334LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x438 = INT8_MIN;
	int16_t x439 = -1;
	int8_t x440 = INT8_MIN;
	int32_t t95 = -49865;

	t95 = (((x437%x438)*x439)|x440);

	if (t95 != -31) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x441 = -2LL;
	static uint64_t x442 = 60LLU;
	int32_t x443 = -1;
	static uint8_t x444 = UINT8_MAX;
	uint64_t t96 = UINT64_MAX;

	t96 = (((x441%x442)*x443)|x444);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = -1;
	int32_t x446 = INT32_MIN;
	int64_t x448 = -1LL;
	volatile int64_t t97 = 198826055489LL;

	t97 = (((x445%x446)*x447)|x448);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = 337;
	uint32_t x450 = UINT32_MAX;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (((x449%x450)*x451)|x452);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x454 = INT16_MAX;
	static int32_t x455 = -1;
	int8_t x456 = INT8_MAX;
	volatile int32_t t99 = 97298816;

	t99 = (((x453%x454)*x455)|x456);

	if (t99 != -1) { NG(); } else { ; }
	
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

