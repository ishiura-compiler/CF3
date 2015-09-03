#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
int32_t x6 = -453;
int32_t x9 = -1;
uint32_t x11 = 1825U;
int64_t x18 = -1LL;
int16_t x22 = -11;
uint8_t x24 = 46U;
int8_t x33 = -7;
int32_t x34 = -176;
int16_t x43 = -109;
uint8_t x49 = UINT8_MAX;
volatile uint32_t x52 = 10303420U;
static uint16_t x55 = 14U;
static int32_t x56 = INT32_MIN;
int64_t x59 = -1LL;
uint8_t x60 = 3U;
volatile uint64_t t9 = 1206333055LLU;
int16_t x61 = INT16_MIN;
int16_t x81 = INT16_MIN;
int32_t x93 = INT32_MAX;
int32_t x95 = -1;
volatile int64_t x96 = -1LL;
uint64_t t14 = UINT64_MAX;
uint8_t x98 = 0U;
uint64_t x99 = 1897663807262114337LLU;
uint8_t x104 = 10U;
int64_t x118 = -1LL;
static uint8_t x121 = 1U;
int64_t x123 = -8LL;
int8_t x124 = -1;
int64_t t20 = -24960704956096LL;
int8_t x139 = -1;
uint16_t x142 = 0U;
static int8_t x144 = -1;
static int32_t x146 = 4044823;
int32_t x161 = INT32_MAX;
static int32_t x168 = INT32_MIN;
volatile uint16_t x172 = 2U;
static volatile uint16_t x183 = 14U;
static int64_t x184 = INT64_MIN;
int64_t t29 = INT64_MAX;
uint8_t x190 = 13U;
static int64_t t33 = 5464597LL;
uint64_t t34 = 2842042291LLU;
volatile uint64_t t35 = 5156LLU;
int16_t x235 = 7417;
volatile int16_t x238 = -1;
int32_t t38 = 3125;
volatile int64_t x249 = 2015316LL;
static int64_t t40 = 2500439782002770377LL;
int32_t x261 = INT32_MIN;
int64_t t43 = 50787767323LL;
uint64_t t44 = UINT64_MAX;
int64_t x273 = -1LL;
int64_t t45 = 46077534592321LL;
int16_t x281 = -89;
volatile uint32_t t48 = 16226584U;
volatile int64_t t49 = 130428366LL;
uint16_t x309 = 1875U;
static volatile int64_t t50 = 7663LL;
int16_t x313 = 888;
uint64_t x315 = 7021558472LLU;
uint16_t x324 = UINT16_MAX;
int8_t x325 = INT8_MAX;
uint8_t x345 = 15U;
uint16_t x347 = 1U;
static int64_t t56 = 2531114955766271LL;
int8_t x351 = INT8_MAX;
int64_t x352 = 6509866859672LL;
int64_t x362 = INT64_MAX;
int64_t x365 = 1461678LL;
int64_t t60 = 4084495694LL;
static int64_t x371 = 11177100828979801LL;
uint64_t x378 = 2LLU;
int16_t x382 = 2775;
int32_t t67 = 200778659;
volatile int8_t x400 = 1;
uint8_t x406 = 52U;
uint32_t x415 = UINT32_MAX;
uint64_t x426 = 21595751808LLU;
static int16_t x443 = INT16_MIN;
volatile int64_t t76 = 1LL;
volatile uint16_t x458 = 8627U;
int64_t x463 = -1LL;
int64_t t79 = -29716936059712188LL;
volatile uint8_t x485 = 0U;
static int8_t x487 = 26;
volatile uint64_t t83 = 4671135570486LLU;
int16_t x493 = 205;
static int64_t x500 = INT64_MIN;
int16_t x503 = -611;
int16_t x505 = -1;
static uint64_t x508 = UINT64_MAX;
static uint16_t x523 = 10U;
volatile uint64_t t89 = UINT64_MAX;
int8_t x566 = INT8_MIN;
uint64_t x578 = UINT64_MAX;
volatile int32_t x586 = -198;
volatile int64_t t98 = -1963LL;
uint64_t x598 = 4191697133388120731LLU;


void f0(void) {
	static volatile uint64_t x7 = UINT64_MAX;
	uint16_t x8 = UINT16_MAX;
	uint64_t t0 = 12201398975702LLU;

	t0 = (((x5+x6)*x7)|x8);

	if (t0 != 65535LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = 17U;
	int64_t x12 = -61LL;
	static volatile int64_t t1 = -438247LL;

	t1 = (((x9+x10)*x11)|x12);

	if (t1 != -45LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = -1LL;
	static int32_t x19 = INT32_MIN;
	int16_t x20 = -1;
	volatile int64_t t2 = 160037822169823820LL;

	t2 = (((x17+x18)*x19)|x20);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = 51836043LLU;
	volatile int32_t x23 = INT32_MIN;
	uint64_t t3 = 383413123256LLU;

	t3 = (((x21+x22)*x23)|x24);

	if (t3 != 18335427042612346926LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 97U;
	int64_t x26 = 18981131159515979LL;
	int8_t x27 = INT8_MIN;
	volatile int16_t x28 = 0;
	volatile int64_t t4 = -357858906457358190LL;

	t4 = (((x25+x26)*x27)|x28);

	if (t4 != -2429584788418057728LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x35 = INT8_MIN;
	static uint32_t x36 = 166U;
	uint32_t t5 = 0U;

	t5 = (((x33+x34)*x35)|x36);

	if (t5 != 23462U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x41 = -1;
	static int8_t x42 = -1;
	uint8_t x44 = 2U;
	static int32_t t6 = 16;

	t6 = (((x41+x42)*x43)|x44);

	if (t6 != 218) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x50 = UINT16_MAX;
	static uint64_t x51 = 24LLU;
	static uint64_t t7 = 490072554307041607LLU;

	t7 = (((x49+x50)*x51)|x52);

	if (t7 != 10303484LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = 19;
	volatile int32_t t8 = -13485499;

	t8 = (((x53+x54)*x55)|x56);

	if (t8 != -2147024644) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = UINT64_MAX;
	static volatile uint8_t x58 = UINT8_MAX;

	t9 = (((x57+x58)*x59)|x60);

	if (t9 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x62 = 1;
	uint8_t x63 = UINT8_MAX;
	static uint64_t x64 = UINT64_MAX;
	static uint64_t t10 = UINT64_MAX;

	t10 = (((x61+x62)*x63)|x64);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x73 = -1;
	int8_t x74 = -1;
	int8_t x75 = -1;
	int32_t x76 = INT32_MIN;
	volatile int32_t t11 = -498;

	t11 = (((x73+x74)*x75)|x76);

	if (t11 != -2147483646) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x77 = 6U;
	static uint16_t x78 = 18539U;
	int8_t x79 = INT8_MIN;
	int32_t x80 = 1;
	static volatile int32_t t12 = -3681937;

	t12 = (((x77+x78)*x79)|x80);

	if (t12 != -2373759) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x82 = 42U;
	volatile int16_t x83 = INT16_MIN;
	static volatile int16_t x84 = -1077;
	static volatile int32_t t13 = -519125;

	t13 = (((x81+x82)*x83)|x84);

	if (t13 != -1077) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x94 = 15665811LLU;

	t14 = (((x93+x94)*x95)|x96);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x97 = -3;
	int16_t x100 = -1;
	uint64_t t15 = UINT64_MAX;

	t15 = (((x97+x98)*x99)|x100);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x101 = -1LL;
	uint16_t x102 = 1U;
	uint16_t x103 = 49U;
	volatile int64_t t16 = 262922LL;

	t16 = (((x101+x102)*x103)|x104);

	if (t16 != 10LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x109 = -1;
	static volatile int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = INT8_MIN;
	volatile int32_t t17 = 577732639;

	t17 = (((x109+x110)*x111)|x112);

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x113 = 65427253;
	int16_t x114 = -194;
	volatile uint32_t x115 = UINT32_MAX;
	int32_t x116 = INT32_MIN;
	uint32_t t18 = 2782U;

	t18 = (((x113+x114)*x115)|x116);

	if (t18 != 4229540237U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = -1LL;
	uint64_t x119 = 633235815016027224LLU;
	int64_t x120 = 31833691959545LL;
	uint64_t t19 = 6646954806806182300LLU;

	t19 = (((x117+x118)*x119)|x120);

	if (t19 != 17180281449320216569LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x122 = 682083U;

	t20 = (((x121+x122)*x123)|x124);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x125 = INT16_MAX;
	static int8_t x126 = INT8_MAX;
	volatile uint64_t x127 = 693075LLU;
	int8_t x128 = 11;
	static uint64_t t21 = 3LLU;

	t21 = (((x125+x126)*x127)|x128);

	if (t21 != 22798009051LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = INT8_MAX;
	int32_t x138 = -1;
	static volatile int32_t x140 = 379193;
	int32_t t22 = 1;

	t22 = (((x137+x138)*x139)|x140);

	if (t22 != -69) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x141 = 10;
	static int8_t x143 = INT8_MAX;
	static volatile int32_t t23 = -1;

	t23 = (((x141+x142)*x143)|x144);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x145 = INT16_MIN;
	volatile int64_t x147 = -1LL;
	int16_t x148 = INT16_MIN;
	static volatile int64_t t24 = 127691380LL;

	t24 = (((x145+x146)*x147)|x148);

	if (t24 != -14359LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = -1;
	int16_t x164 = 0;
	uint32_t t25 = 46348053U;

	t25 = (((x161+x162)*x163)|x164);

	if (t25 != 2147483650U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = 398251519770016LL;
	static int32_t x166 = 24;
	volatile uint64_t x167 = 7578886120696441347LLU;
	volatile uint64_t t26 = 31LLU;

	t26 = (((x165+x166)*x167)|x168);

	if (t26 != 18446744072825350440LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x169 = INT16_MIN;
	int8_t x170 = 58;
	uint64_t x171 = UINT64_MAX;
	static volatile uint64_t t27 = 12717LLU;

	t27 = (((x169+x170)*x171)|x172);

	if (t27 != 32710LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x181 = 1178562;
	int32_t x182 = -47;
	int64_t t28 = -28908019795426LL;

	t28 = (((x181+x182)*x183)|x184);

	if (t28 != -9223372036838276598LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x185 = -1;
	volatile int32_t x186 = -703;
	int32_t x187 = 0;
	int64_t x188 = INT64_MAX;

	t29 = (((x185+x186)*x187)|x188);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = INT16_MIN;
	static int8_t x191 = INT8_MIN;
	int32_t x192 = 977181656;
	static volatile int32_t t30 = -51924808;

	t30 = (((x189+x190)*x191)|x192);

	if (t30 != 977271768) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x197 = -1LL;
	static volatile uint16_t x198 = 5U;
	volatile uint8_t x199 = UINT8_MAX;
	static uint8_t x200 = 43U;
	static int64_t t31 = 1438112067LL;

	t31 = (((x197+x198)*x199)|x200);

	if (t31 != 1023LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x201 = INT16_MIN;
	static uint32_t x202 = UINT32_MAX;
	static int32_t x203 = INT32_MIN;
	static int32_t x204 = INT32_MIN;
	volatile uint32_t t32 = 753334U;

	t32 = (((x201+x202)*x203)|x204);

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x205 = -1LL;
	static volatile int16_t x206 = 1;
	int32_t x207 = 1;
	uint16_t x208 = UINT16_MAX;

	t33 = (((x205+x206)*x207)|x208);

	if (t33 != 65535LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x209 = INT64_MIN;
	uint64_t x210 = 280080861204927LLU;
	volatile int16_t x211 = INT16_MAX;
	static int32_t x212 = INT32_MIN;

	t34 = (((x209+x210)*x211)|x212);

	if (t34 != 18446744073183292993LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x213 = 6U;
	volatile uint64_t x214 = 209LLU;
	volatile uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MIN;

	t35 = (((x213+x214)*x215)|x216);

	if (t35 != 18446744073709540905LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x221 = 2;
	int32_t x222 = INT32_MIN;
	volatile int8_t x223 = 0;
	uint16_t x224 = UINT16_MAX;
	int32_t t36 = -22908;

	t36 = (((x221+x222)*x223)|x224);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x233 = -1;
	uint64_t x234 = 77763987469LLU;
	uint16_t x236 = 135U;
	volatile uint64_t t37 = 1758537LLU;

	t37 = (((x233+x234)*x235)|x236);

	if (t37 != 576775495050159LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x237 = 1;
	volatile int8_t x239 = 0;
	volatile int16_t x240 = INT16_MAX;

	t38 = (((x237+x238)*x239)|x240);

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x245 = INT16_MIN;
	volatile int8_t x246 = -1;
	static volatile int16_t x247 = INT16_MIN;
	int8_t x248 = 0;
	int32_t t39 = 96462418;

	t39 = (((x245+x246)*x247)|x248);

	if (t39 != 1073774592) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x250 = 24457438;
	static int8_t x251 = INT8_MAX;
	static int32_t x252 = -1;

	t40 = (((x249+x250)*x251)|x252);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x253 = UINT32_MAX;
	static volatile int16_t x254 = INT16_MIN;
	static uint32_t x255 = 535U;
	int16_t x256 = INT16_MAX;
	volatile uint32_t t41 = 1U;

	t41 = (((x253+x254)*x255)|x256);

	if (t41 != 4277436415U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x257 = INT8_MAX;
	uint8_t x258 = 2U;
	int64_t x259 = 10402793624919619LL;
	volatile int32_t x260 = -1;
	volatile int64_t t42 = 594455647334LL;

	t42 = (((x257+x258)*x259)|x260);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x262 = INT16_MAX;
	volatile uint32_t x263 = 30494U;
	int64_t x264 = INT64_MIN;

	t43 = (((x261+x262)*x263)|x264);

	if (t43 != -9223372035855578910LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x265 = 205095580185LLU;
	static int16_t x266 = INT16_MAX;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = -1;

	t44 = (((x265+x266)*x267)|x268);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x274 = UINT32_MAX;
	int32_t x275 = -631261864;
	int8_t x276 = -1;

	t45 = (((x273+x274)*x275)|x276);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x282 = -1;
	int32_t x283 = -135024;
	int8_t x284 = -3;
	volatile int32_t t46 = -31984546;

	t46 = (((x281+x282)*x283)|x284);

	if (t46 != -3) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MAX;
	volatile uint32_t x287 = 3U;
	int8_t x288 = INT8_MAX;
	uint32_t t47 = 39U;

	t47 = (((x285+x286)*x287)|x288);

	if (t47 != 767U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 1U;
	int16_t x295 = -1;
	int8_t x296 = -6;

	t48 = (((x293+x294)*x295)|x296);

	if (t48 != 4294967290U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x305 = 52;
	volatile int64_t x306 = INT64_MIN;
	int16_t x307 = 0;
	int8_t x308 = 6;

	t49 = (((x305+x306)*x307)|x308);

	if (t49 != 6LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MAX;

	t50 = (((x309+x310)*x311)|x312);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x314 = -125;
	static uint64_t x316 = UINT64_MAX;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x313+x314)*x315)|x316);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MIN;
	static int64_t t52 = 532166LL;

	t52 = (((x321+x322)*x323)|x324);

	if (t52 != 65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x326 = 14U;
	uint16_t x327 = 27969U;
	int64_t x328 = -160LL;
	volatile int64_t t53 = 53628455369460LL;

	t53 = (((x325+x326)*x327)|x328);

	if (t53 != -19LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x333 = INT8_MIN;
	uint16_t x334 = 24U;
	static volatile int32_t x335 = -1;
	uint8_t x336 = 1U;
	volatile int32_t t54 = 3;

	t54 = (((x333+x334)*x335)|x336);

	if (t54 != 105) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x341 = INT16_MIN;
	int8_t x342 = -3;
	uint8_t x343 = 1U;
	uint64_t x344 = 0LLU;
	volatile uint64_t t55 = 191081069LLU;

	t55 = (((x341+x342)*x343)|x344);

	if (t55 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x346 = 253U;
	int64_t x348 = -138929389439791LL;

	t56 = (((x345+x346)*x347)|x348);

	if (t56 != -138929389439523LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x349 = 0;
	static int64_t x350 = 2213679LL;
	int64_t t57 = -44LL;

	t57 = (((x349+x350)*x351)|x352);

	if (t57 != 6509875297497LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x357 = 0;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = INT8_MAX;
	uint16_t x360 = 18668U;
	int32_t t58 = 1047494;

	t58 = (((x357+x358)*x359)|x360);

	if (t58 != 32493) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x361 = INT16_MIN;
	int8_t x363 = -1;
	int64_t x364 = INT64_MIN;
	volatile int64_t t59 = 14942374LL;

	t59 = (((x361+x362)*x363)|x364);

	if (t59 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x366 = UINT8_MAX;
	uint8_t x367 = UINT8_MAX;
	static int16_t x368 = INT16_MAX;

	t60 = (((x365+x366)*x367)|x368);

	if (t60 != 372801535LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x369 = INT8_MIN;
	static int64_t x370 = -1LL;
	int64_t x372 = INT64_MAX;
	static volatile int64_t t61 = 499685219LL;

	t61 = (((x369+x370)*x371)|x372);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x374 = -1;
	int16_t x375 = 10365;
	int64_t x376 = -927389862695LL;
	volatile int64_t t62 = 15976531LL;

	t62 = (((x373+x374)*x375)|x376);

	if (t62 != -926714839073LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x377 = 0;
	volatile int16_t x379 = INT16_MIN;
	static uint32_t x380 = 206U;
	uint64_t t63 = 286559270568336932LLU;

	t63 = (((x377+x378)*x379)|x380);

	if (t63 != 18446744073709486286LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x381 = INT16_MAX;
	int8_t x383 = -1;
	int32_t x384 = -1;
	int32_t t64 = 1;

	t64 = (((x381+x382)*x383)|x384);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x386 = 5;
	int16_t x387 = 1;
	int32_t x388 = INT32_MIN;
	volatile int32_t t65 = -15919;

	t65 = (((x385+x386)*x387)|x388);

	if (t65 != -2147483388) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x389 = 106U;
	volatile uint16_t x390 = 0U;
	volatile int16_t x391 = INT16_MAX;
	int8_t x392 = -1;
	volatile int32_t t66 = 17771;

	t66 = (((x389+x390)*x391)|x392);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = 59;
	static int8_t x395 = -1;
	int32_t x396 = 3;

	t67 = (((x393+x394)*x395)|x396);

	if (t67 != -185) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x397 = 573LL;
	int8_t x398 = INT8_MIN;
	static uint32_t x399 = UINT32_MAX;
	int64_t t68 = -64279106LL;

	t68 = (((x397+x398)*x399)|x400);

	if (t68 != 1911260446275LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x405 = -1;
	int8_t x407 = -1;
	int16_t x408 = 21;
	volatile int32_t t69 = 17;

	t69 = (((x405+x406)*x407)|x408);

	if (t69 != -35) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x409 = 501861096LLU;
	static uint16_t x410 = 43U;
	volatile int8_t x411 = -1;
	static volatile int32_t x412 = INT32_MAX;
	static uint64_t t70 = UINT64_MAX;

	t70 = (((x409+x410)*x411)|x412);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x413 = INT16_MIN;
	int64_t x414 = -1LL;
	static int16_t x416 = INT16_MIN;
	volatile int64_t t71 = -1799545902045892LL;

	t71 = (((x413+x414)*x415)|x416);

	if (t71 != -32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x417 = -1LL;
	int8_t x418 = -1;
	int32_t x419 = -1;
	uint16_t x420 = UINT16_MAX;
	static int64_t t72 = 56977929997LL;

	t72 = (((x417+x418)*x419)|x420);

	if (t72 != 65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x425 = -1;
	int32_t x427 = INT32_MAX;
	int64_t x428 = 29LL;
	uint64_t t73 = 359067LLU;

	t73 = (((x425+x426)*x427)|x428);

	if (t73 != 9483035702784096925LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x429 = UINT32_MAX;
	uint16_t x430 = 1256U;
	static volatile int8_t x431 = 7;
	int8_t x432 = -3;
	uint32_t t74 = 62950901U;

	t74 = (((x429+x430)*x431)|x432);

	if (t74 != 4294967293U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x437 = 9U;
	uint16_t x438 = 0U;
	int16_t x439 = INT16_MIN;
	static int16_t x440 = -171;
	volatile int32_t t75 = -9919517;

	t75 = (((x437+x438)*x439)|x440);

	if (t75 != -171) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x441 = -1;
	int64_t x442 = -1LL;
	int16_t x444 = 1;

	t76 = (((x441+x442)*x443)|x444);

	if (t76 != 65537LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x453 = INT32_MIN;
	static int8_t x454 = INT8_MAX;
	uint64_t x455 = 3697853895857LLU;
	static volatile int64_t x456 = -186920774LL;
	volatile uint64_t t77 = 13LLU;

	t77 = (((x453+x454)*x455)|x456);

	if (t77 != 18446744073673888767LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x457 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t78 = 25;

	t78 = (((x457+x458)*x459)|x460);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x461 = 15;
	int64_t x462 = INT64_MIN;
	int8_t x464 = INT8_MIN;

	t79 = (((x461+x462)*x463)|x464);

	if (t79 != -15LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x469 = UINT8_MAX;
	uint8_t x470 = UINT8_MAX;
	static volatile int8_t x471 = INT8_MAX;
	uint64_t x472 = UINT64_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = (((x469+x470)*x471)|x472);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x473 = -1;
	volatile int8_t x474 = INT8_MIN;
	volatile uint16_t x475 = 5U;
	uint8_t x476 = 7U;
	static volatile int32_t t81 = 7182779;

	t81 = (((x473+x474)*x475)|x476);

	if (t81 != -641) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x477 = 56U;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = INT8_MIN;
	uint32_t x480 = 544850952U;
	uint32_t t82 = 738358U;

	t82 = (((x477+x478)*x479)|x480);

	if (t82 != 4294960264U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x486 = 150414LLU;
	static int32_t x488 = INT32_MIN;

	t83 = (((x485+x486)*x487)|x488);

	if (t83 != 18446744071565978732LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x489 = UINT64_MAX;
	uint16_t x490 = UINT16_MAX;
	volatile int32_t x491 = -1513;
	volatile int8_t x492 = -1;
	uint64_t t84 = UINT64_MAX;

	t84 = (((x489+x490)*x491)|x492);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x494 = -1;
	int16_t x495 = -1;
	static int32_t x496 = -1;
	volatile int32_t t85 = 69464911;

	t85 = (((x493+x494)*x495)|x496);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x497 = -1;
	uint16_t x498 = 2862U;
	int64_t x499 = 4789077676633LL;
	volatile int64_t t86 = 151LL;

	t86 = (((x497+x498)*x499)|x500);

	if (t86 != -9209670485621928795LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x501 = 277062059104552LL;
	static int64_t x502 = -895585288879015LL;
	int32_t x504 = -26;
	volatile int64_t t87 = -31576961LL;

	t87 = (((x501+x502)*x503)|x504);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x506 = -1;
	int8_t x507 = INT8_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = (((x505+x506)*x507)|x508);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x521 = 2U;
	static uint64_t x522 = 7606042811498031LLU;
	volatile int8_t x524 = -1;

	t89 = (((x521+x522)*x523)|x524);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x525 = INT16_MAX;
	static int16_t x526 = 1;
	int16_t x527 = INT16_MIN;
	int8_t x528 = INT8_MAX;
	static int32_t t90 = 1501;

	t90 = (((x525+x526)*x527)|x528);

	if (t90 != -1073741697) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x533 = 9U;
	volatile int64_t x534 = INT64_MIN;
	static uint64_t x535 = 18543943195LLU;
	int64_t x536 = -24768304LL;
	uint64_t t91 = 1286LLU;

	t91 = (((x533+x534)*x535)|x536);

	if (t91 != 18446744073705299699LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x541 = -1;
	static uint64_t x542 = 4292115489LLU;
	static uint64_t x543 = 249855369757236881LLU;
	static int16_t x544 = INT16_MIN;
	uint64_t t92 = 931718987807LLU;

	t92 = (((x541+x542)*x543)|x544);

	if (t92 != 18446744073709522464LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x545 = INT16_MAX;
	uint16_t x546 = 5U;
	int16_t x547 = INT16_MAX;
	uint16_t x548 = UINT16_MAX;
	int32_t t93 = 19848742;

	t93 = (((x545+x546)*x547)|x548);

	if (t93 != 1073872895) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x565 = INT16_MAX;
	int8_t x567 = INT8_MAX;
	uint8_t x568 = 6U;
	int32_t t94 = -168717145;

	t94 = (((x565+x566)*x567)|x568);

	if (t94 != 4145159) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x573 = INT32_MAX;
	uint64_t x574 = 1091378121468185648LLU;
	int16_t x575 = 16;
	int16_t x576 = -1;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (((x573+x574)*x575)|x576);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x577 = 14439U;
	int64_t x579 = -10LL;
	uint64_t x580 = 146855969LLU;
	volatile uint64_t t96 = 7481LLU;

	t96 = (((x577+x578)*x579)|x580);

	if (t96 != 18446744073709411365LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x585 = -1;
	int16_t x587 = INT16_MAX;
	volatile uint8_t x588 = 0U;
	static volatile int32_t t97 = -4383;

	t97 = (((x585+x586)*x587)|x588);

	if (t97 != -6520633) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x589 = -12232LL;
	static volatile uint32_t x590 = UINT32_MAX;
	static int16_t x591 = -1213;
	int16_t x592 = INT16_MIN;

	t98 = (((x589+x590)*x591)|x592);

	if (t98 != -5275LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x597 = -1;
	uint16_t x599 = UINT16_MAX;
	static uint16_t x600 = UINT16_MAX;
	uint64_t t99 = 1831664822395414180LLU;

	t99 = (((x597+x598)*x599)|x600);

	if (t99 != 12405634981558943743LLU) { NG(); } else { ; }
	
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

