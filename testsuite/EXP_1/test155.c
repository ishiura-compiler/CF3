#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
static int64_t x3 = 150982LL;
int32_t x8 = -1;
volatile uint32_t t1 = UINT32_MAX;
uint32_t x30 = 243218U;
int8_t x35 = -1;
static int64_t t7 = -720193028068LL;
int16_t x37 = -234;
int16_t x39 = -14980;
static uint32_t x42 = 162992U;
static volatile uint64_t x44 = UINT64_MAX;
volatile uint16_t x50 = 26U;
volatile uint32_t x52 = 434886U;
volatile int16_t x54 = INT16_MIN;
volatile int16_t x60 = -1;
uint64_t x61 = 815810318896650346LLU;
uint64_t t14 = 124581986553433LLU;
int16_t x69 = INT16_MIN;
static int32_t x72 = INT32_MIN;
static volatile int16_t x74 = -1;
uint8_t x81 = 57U;
uint8_t x83 = 2U;
int64_t x85 = -1LL;
volatile uint16_t x91 = 5640U;
volatile int16_t x103 = INT16_MIN;
volatile int64_t x107 = INT64_MAX;
int64_t x108 = INT64_MIN;
int64_t x114 = 180557LL;
int16_t x119 = INT16_MIN;
int32_t x124 = -1;
volatile int8_t x129 = 0;
int32_t x130 = 301;
uint16_t x133 = 23U;
static volatile uint64_t t32 = UINT64_MAX;
int64_t x143 = -1659275341673LL;
uint32_t x151 = 3U;
int16_t x156 = 327;
volatile uint16_t x167 = 215U;
int16_t x171 = 981;
static volatile int16_t x178 = -1;
uint64_t x186 = 37384911529LLU;
static uint64_t t42 = UINT64_MAX;
uint16_t x189 = 77U;
int32_t x191 = INT32_MIN;
int64_t t43 = 136747223329641491LL;
volatile int32_t x197 = INT32_MIN;
int32_t x201 = INT32_MIN;
uint16_t x204 = UINT16_MAX;
int8_t x217 = -1;
uint64_t x229 = 46340447291LLU;
int16_t x232 = INT16_MIN;
int8_t x238 = INT8_MAX;
int64_t t53 = -3159464538264LL;
volatile int64_t x246 = 5458936247094LL;
uint16_t x247 = 0U;
uint64_t x251 = UINT64_MAX;
static volatile int8_t x253 = -1;
int8_t x257 = INT8_MAX;
int8_t x259 = -1;
static int32_t x260 = INT32_MAX;
volatile int64_t t59 = 35LL;
int8_t x277 = INT8_MAX;
static int8_t x279 = -1;
static int64_t t63 = -561873200837584LL;
volatile uint32_t t65 = UINT32_MAX;
int8_t x290 = 17;
int8_t x295 = INT8_MAX;
int16_t x296 = INT16_MIN;
volatile uint32_t x310 = UINT32_MAX;
volatile int16_t x314 = -1;
uint64_t x319 = UINT64_MAX;
volatile uint16_t x322 = 5U;
volatile int16_t x323 = INT16_MAX;
static uint16_t x337 = 15501U;
int64_t t74 = -515393583396873LL;
int64_t x344 = INT64_MIN;
volatile uint64_t t75 = 15672580173LLU;
volatile uint32_t x353 = 110U;
int32_t x361 = INT32_MAX;
volatile uint32_t x366 = 4U;
static int8_t x370 = INT8_MAX;
int64_t t82 = -419812LL;
static uint16_t x389 = UINT16_MAX;
static int32_t x390 = INT32_MIN;
int64_t x391 = INT64_MIN;
static volatile int64_t t86 = -419893962744000LL;
volatile uint32_t x398 = 1180U;
uint32_t x406 = 603U;
int32_t x408 = -1;
int32_t x411 = -47;
static uint64_t t91 = 10LLU;
int8_t x413 = -1;
volatile int64_t t94 = 43251889557LL;
int16_t x440 = -14;
int16_t x453 = INT16_MAX;
volatile int32_t x454 = INT32_MIN;
static int32_t x458 = INT32_MAX;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	uint8_t x4 = 38U;
	int64_t t0 = -7941195525LL;

	t0 = (((x1+x2)|x3)|x4);

	if (t0 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 21U;
	int8_t x6 = 0;
	uint32_t x7 = 207U;

	t1 = (((x5+x6)|x7)|x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 3U;
	volatile int8_t x10 = -19;
	int64_t x11 = INT64_MIN;
	int8_t x12 = 0;
	volatile int64_t t2 = 8238449810071LL;

	t2 = (((x9+x10)|x11)|x12);

	if (t2 != -9223372032559808528LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 47;
	uint64_t x14 = 65962733LLU;
	volatile uint64_t x15 = 131391129528100242LLU;
	static int8_t x16 = -1;
	static volatile uint64_t t3 = UINT64_MAX;

	t3 = (((x13+x14)|x15)|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 892219776687831987LLU;
	static int32_t x18 = -1;
	int32_t x19 = INT32_MAX;
	static volatile int16_t x20 = -28;
	uint64_t t4 = UINT64_MAX;

	t4 = (((x17+x18)|x19)|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static uint32_t x26 = 18871950U;
	uint16_t x27 = UINT16_MAX;
	static int8_t x28 = INT8_MAX;
	volatile int64_t t5 = -32116422576039152LL;

	t5 = (((x25+x26)|x27)|x28);

	if (t5 != -9223372036835901441LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 39U;
	int16_t x31 = INT16_MIN;
	int32_t x32 = -3046;
	volatile uint32_t t6 = 5691U;

	t6 = (((x29+x30)|x31)|x32);

	if (t6 != 4294964795U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	static uint32_t x34 = UINT32_MAX;
	volatile int64_t x36 = -453931521717827LL;

	t7 = (((x33+x34)|x35)|x36);

	if (t7 != -453930798546945LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = 27;
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -166552;

	t8 = (((x37+x38)|x39)|x40);

	if (t8 != -131) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 115U;
	volatile int32_t x43 = INT32_MAX;
	uint64_t t9 = UINT64_MAX;

	t9 = (((x41+x42)|x43)|x44);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = UINT16_MAX;
	volatile int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	int8_t x48 = -1;
	int32_t t10 = 153;

	t10 = (((x45+x46)|x47)|x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int64_t x51 = INT64_MIN;
	int64_t t11 = -93055827940509886LL;

	t11 = (((x49+x50)|x51)|x52);

	if (t11 != -23842LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 1376851LLU;
	uint8_t x55 = UINT8_MAX;
	uint64_t x56 = 721204772LLU;
	volatile uint64_t t12 = 6342136527052785054LLU;

	t12 = (((x53+x54)|x55)|x56);

	if (t12 != 721204991LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 0;
	static int32_t x58 = -2342990;
	int64_t x59 = -11LL;
	volatile int64_t t13 = -111820LL;

	t13 = (((x57+x58)|x59)|x60);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x62 = INT8_MAX;
	static int32_t x63 = INT32_MIN;
	static volatile int8_t x64 = -6;

	t14 = (((x61+x62)|x63)|x64);

	if (t14 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 7U;
	uint8_t x66 = 51U;
	int8_t x67 = INT8_MAX;
	volatile uint16_t x68 = 7U;
	volatile int32_t t15 = 102720601;

	t15 = (((x65+x66)|x67)|x68);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x70 = INT16_MIN;
	int32_t x71 = 3;
	volatile int32_t t16 = -63070624;

	t16 = (((x69+x70)|x71)|x72);

	if (t16 != -65533) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	int32_t x75 = 306;
	int16_t x76 = INT16_MIN;
	uint64_t t17 = 226230786811060853LLU;

	t17 = (((x73+x74)|x75)|x76);

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	volatile int32_t x78 = -1;
	int32_t x79 = 3822922;
	volatile int64_t x80 = 74LL;
	int64_t t18 = -1386LL;

	t18 = (((x77+x78)|x79)|x80);

	if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = 1713047310045599LLU;
	int16_t x84 = INT16_MIN;
	static uint64_t t19 = 6342297677527LLU;

	t19 = (((x81+x82)|x83)|x84);

	if (t19 != 18446744073709523418LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x86 = INT32_MIN;
	volatile int16_t x87 = INT16_MIN;
	int32_t x88 = -5;
	volatile int64_t t20 = -261399642485293LL;

	t20 = (((x85+x86)|x87)|x88);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MIN;
	uint32_t x90 = 833168U;
	int8_t x92 = -1;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (((x89+x90)|x91)|x92);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = INT8_MAX;
	int8_t x94 = -1;
	int16_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	uint32_t t22 = UINT32_MAX;

	t22 = (((x93+x94)|x95)|x96);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = UINT16_MAX;
	uint64_t x99 = 1739495299682426LLU;
	uint16_t x100 = 60U;
	uint64_t t23 = 17005960LLU;

	t23 = (((x97+x98)|x99)|x100);

	if (t23 != 1739495299743615LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MAX;
	uint64_t x104 = UINT64_MAX;
	static uint64_t t24 = UINT64_MAX;

	t24 = (((x101+x102)|x103)|x104);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 12U;
	int8_t x106 = INT8_MAX;
	int64_t t25 = 15091LL;

	t25 = (((x105+x106)|x107)|x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x109 = 104U;
	static uint32_t x110 = 15539576U;
	static int16_t x111 = -1;
	volatile int64_t x112 = -1LL;
	static volatile int64_t t26 = 0LL;

	t26 = (((x109+x110)|x111)|x112);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 0U;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile int64_t t27 = -2156930271424546961LL;

	t27 = (((x113+x114)|x115)|x116);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = -19;
	int32_t x118 = -61129282;
	int8_t x120 = -1;
	volatile int32_t t28 = 62922;

	t28 = (((x117+x118)|x119)|x120);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MAX;
	int32_t x122 = INT32_MIN;
	volatile int8_t x123 = -26;
	int32_t t29 = -11025882;

	t29 = (((x121+x122)|x123)|x124);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x125 = 1605715320606LLU;
	uint64_t x126 = 2878074LLU;
	volatile int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MIN;
	static uint64_t t30 = UINT64_MAX;

	t30 = (((x125+x126)|x127)|x128);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x131 = 34LL;
	static uint32_t x132 = 68U;
	int64_t t31 = 36256009350164224LL;

	t31 = (((x129+x130)|x131)|x132);

	if (t31 != 367LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = 895178456;
	uint64_t x135 = UINT64_MAX;
	volatile int8_t x136 = -62;

	t32 = (((x133+x134)|x135)|x136);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = 1062921;
	uint32_t x138 = UINT32_MAX;
	int64_t x139 = INT64_MIN;
	uint16_t x140 = 71U;
	volatile int64_t t33 = -1LL;

	t33 = (((x137+x138)|x139)|x140);

	if (t33 != -9223372036853712817LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	static uint16_t x142 = UINT16_MAX;
	int32_t x144 = INT32_MIN;
	int64_t t34 = -10585241004LL;

	t34 = (((x141+x142)|x143)|x144);

	if (t34 != -1417936897LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -1;
	uint16_t x150 = 775U;
	int8_t x152 = INT8_MIN;
	volatile uint32_t t35 = 2884U;

	t35 = (((x149+x150)|x151)|x152);

	if (t35 != 4294967175U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	int32_t x154 = INT32_MAX;
	int16_t x155 = INT16_MIN;
	volatile int32_t t36 = -9301;

	t36 = (((x153+x154)|x155)|x156);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MAX;
	static uint16_t x163 = UINT16_MAX;
	uint8_t x164 = 6U;
	volatile int32_t t37 = 1764;

	t37 = (((x161+x162)|x163)|x164);

	if (t37 != -2147418113) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MIN;
	static volatile uint32_t x168 = 156U;
	uint32_t t38 = 170U;

	t38 = (((x165+x166)|x167)|x168);

	if (t38 != 32767U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MAX;
	int8_t x170 = 0;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t39 = 111211;

	t39 = (((x169+x170)|x171)|x172);

	if (t39 != -2147450881) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint32_t x179 = 432660198U;
	int64_t x180 = INT64_MIN;
	int64_t t40 = -19804818169522799LL;

	t40 = (((x177+x178)|x179)|x180);

	if (t40 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x181 = INT16_MIN;
	uint8_t x182 = 3U;
	int64_t x183 = -1LL;
	int8_t x184 = INT8_MIN;
	volatile int64_t t41 = 7178LL;

	t41 = (((x181+x182)|x183)|x184);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x185 = INT16_MIN;
	uint16_t x187 = 566U;
	int32_t x188 = -1;

	t42 = (((x185+x186)|x187)|x188);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x190 = INT8_MIN;
	int64_t x192 = INT64_MAX;

	t43 = (((x189+x190)|x191)|x192);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x198 = 17U;
	int32_t x199 = -1;
	int8_t x200 = INT8_MAX;
	volatile int32_t t44 = 6348;

	t44 = (((x197+x198)|x199)|x200);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x202 = 5U;
	uint8_t x203 = 13U;
	volatile int32_t t45 = -223540043;

	t45 = (((x201+x202)|x203)|x204);

	if (t45 != -2147418113) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = -1;
	uint32_t x206 = 2U;
	int64_t x207 = INT64_MIN;
	volatile int64_t x208 = 9280336LL;
	static volatile int64_t t46 = -3672LL;

	t46 = (((x205+x206)|x207)|x208);

	if (t46 != -9223372036845495471LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	static int32_t x211 = INT32_MAX;
	volatile int32_t x212 = -554938;
	static volatile int32_t t47 = 7581;

	t47 = (((x209+x210)|x211)|x212);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x213 = UINT64_MAX;
	int16_t x214 = -1;
	volatile uint8_t x215 = 1U;
	uint16_t x216 = UINT16_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (((x213+x214)|x215)|x216);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x218 = 1U;
	static int32_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	static uint64_t t49 = UINT64_MAX;

	t49 = (((x217+x218)|x219)|x220);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = -1LL;
	int16_t x226 = INT16_MAX;
	uint16_t x227 = 55U;
	int8_t x228 = 14;
	int64_t t50 = 1LL;

	t50 = (((x225+x226)|x227)|x228);

	if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x230 = INT32_MAX;
	int64_t x231 = -1LL;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x229+x230)|x231)|x232);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MAX;
	int64_t x234 = -4626989LL;
	int64_t x235 = INT64_MIN;
	uint32_t x236 = 4137101U;
	int64_t t52 = 60754LL;

	t52 = (((x233+x234)|x235)|x236);

	if (t52 != -4233761LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = INT32_MIN;
	static int8_t x239 = INT8_MIN;
	static int64_t x240 = -22119807762LL;

	t53 = (((x237+x238)|x239)|x240);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x241 = 59959859U;
	int8_t x242 = -7;
	static int16_t x243 = -1;
	int32_t x244 = -1734824;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (((x241+x242)|x243)|x244);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x245 = 7U;
	static volatile int64_t x248 = INT64_MIN;
	int64_t t55 = 2149042250958LL;

	t55 = (((x245+x246)|x247)|x248);

	if (t55 != -9223366577918528707LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	static int16_t x250 = -1192;
	uint16_t x252 = 15U;
	static volatile uint64_t t56 = UINT64_MAX;

	t56 = (((x249+x250)|x251)|x252);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x254 = UINT16_MAX;
	static int16_t x255 = -3956;
	static int32_t x256 = INT32_MAX;
	int32_t t57 = 304757247;

	t57 = (((x253+x254)|x255)|x256);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x258 = INT16_MIN;
	static int32_t t58 = -54;

	t58 = (((x257+x258)|x259)|x260);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MIN;
	static int16_t x262 = 15729;
	int64_t x263 = INT64_MIN;
	int16_t x264 = -11;

	t59 = (((x261+x262)|x263)|x264);

	if (t59 != -11LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = -12;
	static int8_t x266 = 4;
	int32_t x267 = INT32_MAX;
	int64_t x268 = INT64_MAX;
	static volatile int64_t t60 = 265641999184LL;

	t60 = (((x265+x266)|x267)|x268);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = 0;
	volatile int64_t x270 = INT64_MIN;
	int8_t x271 = -32;
	static int16_t x272 = 502;
	volatile int64_t t61 = 4298453452991LL;

	t61 = (((x269+x270)|x271)|x272);

	if (t61 != -10LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = 70;
	uint64_t x274 = 5LLU;
	int64_t x275 = INT64_MAX;
	int16_t x276 = INT16_MIN;
	uint64_t t62 = UINT64_MAX;

	t62 = (((x273+x274)|x275)|x276);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x278 = INT16_MIN;
	volatile int64_t x280 = INT64_MAX;

	t63 = (((x277+x278)|x279)|x280);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = INT16_MIN;
	volatile int32_t x283 = INT32_MAX;
	volatile uint32_t x284 = 56037600U;
	volatile uint32_t t64 = 1U;

	t64 = (((x281+x282)|x283)|x284);

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int8_t x286 = 0;
	volatile int32_t x287 = INT32_MIN;
	uint8_t x288 = 0U;

	t65 = (((x285+x286)|x287)|x288);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x289 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	volatile uint16_t x292 = 0U;
	volatile int32_t t66 = -517262741;

	t66 = (((x289+x290)|x291)|x292);

	if (t66 != -111) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile int16_t x294 = INT16_MAX;
	int32_t t67 = 10529362;

	t67 = (((x293+x294)|x295)|x296);

	if (t67 != -129) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = 4114825U;
	volatile uint8_t x306 = 1U;
	volatile int32_t x307 = 36;
	int8_t x308 = 4;
	static volatile uint32_t t68 = 1636051145U;

	t68 = (((x305+x306)|x307)|x308);

	if (t68 != 4114862U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x309 = 15U;
	uint8_t x311 = 20U;
	int8_t x312 = INT8_MIN;
	uint32_t t69 = 21U;

	t69 = (((x309+x310)|x311)|x312);

	if (t69 != 4294967198U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x313 = 0;
	uint64_t x315 = UINT64_MAX;
	volatile uint8_t x316 = UINT8_MAX;
	static volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x313+x314)|x315)|x316);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MAX;
	volatile uint32_t x318 = 17541U;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (((x317+x318)|x319)|x320);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = 14;
	uint8_t x324 = 17U;
	int32_t t72 = -37;

	t72 = (((x321+x322)|x323)|x324);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = 41;
	static volatile int32_t x334 = -1;
	int16_t x335 = 1;
	int64_t x336 = INT64_MIN;
	int64_t t73 = -43366291811LL;

	t73 = (((x333+x334)|x335)|x336);

	if (t73 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x338 = 4U;
	volatile uint32_t x339 = 5949245U;
	static int64_t x340 = -883128LL;

	t74 = (((x337+x338)|x339)|x340);

	if (t74 != -327683LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = 14835123129440142LLU;
	static int8_t x342 = INT8_MIN;
	int64_t x343 = -540797343LL;

	t75 = (((x341+x342)|x343)|x344);

	if (t75 != 18446744073169819503LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = 0;
	static int8_t x346 = -10;
	static uint64_t x347 = 3599645LLU;
	volatile uint8_t x348 = UINT8_MAX;
	static volatile uint64_t t76 = UINT64_MAX;

	t76 = (((x345+x346)|x347)|x348);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x354 = 0U;
	int16_t x355 = INT16_MIN;
	static int64_t x356 = 1680775183233959LL;
	static int64_t t77 = 314970041LL;

	t77 = (((x353+x354)|x355)|x356);

	if (t77 != 1680775321744367LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x357 = UINT16_MAX;
	int8_t x358 = 32;
	int8_t x359 = -1;
	uint64_t x360 = 131LLU;
	uint64_t t78 = UINT64_MAX;

	t78 = (((x357+x358)|x359)|x360);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x362 = 2218766973753LL;
	int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	int64_t t79 = 782085LL;

	t79 = (((x361+x362)|x363)|x364);

	if (t79 != -1731118280LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x365 = UINT16_MAX;
	uint32_t x367 = UINT32_MAX;
	static int8_t x368 = INT8_MIN;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = (((x365+x366)|x367)|x368);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x369 = -1;
	int16_t x371 = -1;
	uint8_t x372 = UINT8_MAX;
	int32_t t81 = 13932335;

	t81 = (((x369+x370)|x371)|x372);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x373 = 1650LL;
	int64_t x374 = -1442LL;
	uint8_t x375 = UINT8_MAX;
	uint32_t x376 = 2U;

	t82 = (((x373+x374)|x375)|x376);

	if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x377 = 50U;
	uint8_t x378 = 3U;
	int8_t x379 = 57;
	int64_t x380 = INT64_MIN;
	volatile int64_t t83 = -1349271181534LL;

	t83 = (((x377+x378)|x379)|x380);

	if (t83 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x381 = -1821;
	int32_t x382 = 51446807;
	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MAX;
	int32_t t84 = 137071;

	t84 = (((x381+x382)|x383)|x384);

	if (t84 != -2096038657) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x385 = UINT32_MAX;
	int16_t x386 = -55;
	static int64_t x387 = 37332042LL;
	int32_t x388 = 364054;
	volatile int64_t t85 = 3100LL;

	t85 = (((x385+x386)|x387)|x388);

	if (t85 != 4294967262LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x392 = -1;

	t86 = (((x389+x390)|x391)|x392);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = -1;
	int8_t x394 = INT8_MIN;
	volatile int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t87 = 901;

	t87 = (((x393+x394)|x395)|x396);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x397 = INT8_MAX;
	volatile int16_t x399 = INT16_MIN;
	volatile uint16_t x400 = 22392U;
	volatile uint32_t t88 = 635028U;

	t88 = (((x397+x398)|x399)|x400);

	if (t88 != 4294956923U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x401 = 168149LLU;
	int8_t x402 = -1;
	int8_t x403 = INT8_MIN;
	int32_t x404 = 43529016;
	static volatile uint64_t t89 = 63489LLU;

	t89 = (((x401+x402)|x403)|x404);

	if (t89 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = INT16_MIN;
	static int16_t x407 = -1;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = (((x405+x406)|x407)|x408);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x409 = 2U;
	volatile int8_t x410 = 1;
	static uint64_t x412 = 46873519865408LLU;

	t91 = (((x409+x410)|x411)|x412);

	if (t91 != 46875273068499LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x414 = -200732625495843794LL;
	int16_t x415 = INT16_MIN;
	volatile int16_t x416 = -14134;
	static volatile int64_t t92 = -85263195639LL;

	t92 = (((x413+x414)|x415)|x416);

	if (t92 != -8977LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x425 = 65U;
	int8_t x426 = -1;
	int64_t x427 = INT64_MIN;
	int8_t x428 = 0;
	volatile int64_t t93 = -1952193728LL;

	t93 = (((x425+x426)|x427)|x428);

	if (t93 != -9223372036854775744LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x429 = -6965;
	int64_t x430 = 162366133LL;
	int32_t x431 = 11346501;
	int16_t x432 = INT16_MIN;

	t94 = (((x429+x430)|x431)|x432);

	if (t94 != -6203LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x437 = UINT16_MAX;
	static int8_t x438 = INT8_MIN;
	volatile int32_t x439 = INT32_MIN;
	volatile int32_t t95 = 531;

	t95 = (((x437+x438)|x439)|x440);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x441 = UINT8_MAX;
	uint64_t x442 = 15118060861481LLU;
	uint32_t x443 = 171188U;
	uint16_t x444 = UINT16_MAX;
	volatile uint64_t t96 = 47107854823046845LLU;

	t96 = (((x441+x442)|x443)|x444);

	if (t96 != 15118061010943LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x449 = -230;
	int8_t x450 = 1;
	static uint8_t x451 = 113U;
	static int16_t x452 = INT16_MIN;
	static volatile int32_t t97 = 38214301;

	t97 = (((x449+x450)|x451)|x452);

	if (t97 != -133) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x455 = INT64_MIN;
	static uint32_t x456 = 2U;
	volatile int64_t t98 = 258725644297825LL;

	t98 = (((x453+x454)|x455)|x456);

	if (t98 != -2147450881LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x457 = INT8_MIN;
	int64_t x459 = 128099960LL;
	uint16_t x460 = UINT16_MAX;
	volatile int64_t t99 = 92791875LL;

	t99 = (((x457+x458)|x459)|x460);

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

