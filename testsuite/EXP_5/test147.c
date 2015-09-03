#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = 1987461058497LLU;
int64_t x15 = INT64_MIN;
static int64_t x19 = -327501336750134LL;
int32_t x30 = -1;
static int16_t x35 = -1;
int32_t x36 = INT32_MIN;
uint32_t x39 = 21943327U;
int64_t x44 = -1967LL;
int32_t x46 = INT32_MIN;
int64_t x51 = 0LL;
uint32_t x56 = 18647623U;
uint16_t x57 = 27045U;
static volatile int64_t t13 = 9LL;
static uint16_t x74 = 3448U;
int64_t x76 = INT64_MAX;
static volatile uint16_t x78 = 12U;
static int8_t x79 = INT8_MIN;
int16_t x87 = 80;
volatile int32_t x89 = 0;
static volatile uint32_t x99 = 25U;
static uint64_t t18 = 329745497LLU;
uint8_t x102 = 36U;
static uint16_t x103 = 29279U;
int16_t x105 = INT16_MIN;
int64_t x106 = -94420396LL;
static int64_t t20 = 149715632917138LL;
int8_t x109 = -1;
static volatile int32_t t21 = 963;
int64_t x113 = INT64_MIN;
int32_t x115 = 24;
uint64_t x116 = UINT64_MAX;
uint64_t t22 = 105049008204097LLU;
int64_t x118 = INT64_MIN;
uint64_t x137 = UINT64_MAX;
int32_t x142 = -1;
volatile int32_t x147 = -7;
int32_t x151 = INT32_MAX;
static uint8_t x156 = 31U;
int16_t x163 = -1;
uint64_t x170 = 42LLU;
uint64_t x171 = 28502501893348840LLU;
volatile int8_t x174 = -1;
volatile uint64_t x179 = 57212851LLU;
int16_t x190 = 11140;
uint16_t x191 = UINT16_MAX;
uint16_t x198 = UINT16_MAX;
volatile uint16_t x205 = 1U;
int64_t x206 = -1LL;
static int32_t x208 = -88448472;
volatile int32_t x223 = 440276423;
volatile int64_t t46 = -458810209LL;
uint64_t x227 = 20LLU;
uint8_t x238 = 35U;
uint64_t t49 = 48323048560998LLU;
int16_t x247 = INT16_MIN;
static volatile int32_t t51 = -51;
uint16_t x253 = 11U;
int16_t x254 = INT16_MIN;
uint32_t x256 = UINT32_MAX;
static uint8_t x263 = 3U;
uint16_t x266 = 157U;
static volatile int8_t x281 = -1;
volatile int32_t x295 = 0;
static volatile int32_t x298 = -1036047;
int16_t x299 = INT16_MAX;
uint16_t x303 = 305U;
int16_t x310 = INT16_MIN;
uint64_t t63 = 7700635195404607618LLU;
static volatile int64_t x319 = -1LL;
int16_t x320 = INT16_MIN;
volatile int32_t x326 = INT32_MIN;
static int16_t x329 = -3;
volatile int16_t x331 = -27;
static int8_t x337 = -27;
uint16_t x338 = UINT16_MAX;
static uint16_t x340 = 325U;
uint32_t t69 = 4359U;
int64_t t72 = -41736LL;
int8_t x360 = INT8_MAX;
uint8_t x365 = 2U;
int32_t x371 = -1;
int32_t x372 = 24;
volatile uint32_t x377 = UINT32_MAX;
static int16_t x384 = -1;
static volatile uint8_t x392 = 36U;
static uint32_t x402 = 1U;
int64_t x403 = INT64_MIN;
uint64_t x404 = UINT64_MAX;
uint64_t x412 = 1967479520372LLU;
uint16_t x417 = 4785U;
int16_t x420 = -1;
volatile int16_t x423 = INT16_MIN;
int32_t t85 = -922;
volatile int64_t t91 = 71794552209592LL;
volatile int64_t x458 = -17143517713114874LL;
int16_t x465 = 0;
uint32_t x466 = 969710U;
static uint64_t x474 = 7782155672550LLU;


void f0(void) {
	int8_t x1 = 0;
	int32_t x2 = -182163;
	int8_t x4 = INT8_MAX;
	uint64_t t0 = 4537560603696897564LLU;

	t0 = (x1/((x2+x3)|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x13 = 0U;
	int16_t x14 = 1197;
	int8_t x16 = -1;
	int64_t t1 = 11851680LL;

	t1 = (x13/((x14+x15)|x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = -1LL;
	int16_t x18 = -1;
	uint64_t x20 = UINT64_MAX;
	uint64_t t2 = 693100798314LLU;

	t2 = (x17/((x18+x19)|x20));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x29 = INT16_MIN;
	uint8_t x31 = 104U;
	int8_t x32 = -1;
	volatile int32_t t3 = 1;

	t3 = (x29/((x30+x31)|x32));

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x33 = 107U;
	uint16_t x34 = 3140U;
	volatile int32_t t4 = 108;

	t4 = (x33/((x34+x35)|x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = UINT64_MAX;
	uint8_t x40 = UINT8_MAX;
	volatile uint64_t t5 = 73312545856401LLU;

	t5 = (x37/((x38+x39)|x40));

	if (t5 != 420322674158LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x41 = UINT8_MAX;
	uint32_t x42 = 0U;
	volatile uint64_t x43 = UINT64_MAX;
	uint64_t t6 = 207948753324684055LLU;

	t6 = (x41/((x42+x43)|x44));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MIN;
	volatile uint64_t x47 = 4774994678106LLU;
	int8_t x48 = -1;
	uint64_t t7 = 2666358238LLU;

	t7 = (x45/((x46+x47)|x48));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x49 = INT16_MIN;
	static int16_t x50 = 13251;
	uint64_t x52 = 80728769505830347LLU;
	static volatile uint64_t t8 = 20749977496031315LLU;

	t8 = (x49/((x50+x51)|x52));

	if (t8 != 228LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x53 = INT32_MIN;
	uint32_t x54 = 325U;
	volatile int32_t x55 = INT32_MAX;
	volatile uint32_t t9 = 3U;

	t9 = (x53/((x54+x55)|x56));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x58 = 179556527103552580LLU;
	uint64_t x59 = 51062LLU;
	volatile uint16_t x60 = UINT16_MAX;
	volatile uint64_t t10 = 118152360821LLU;

	t10 = (x57/((x58+x59)|x60));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = -522907810LL;
	int32_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	int32_t x64 = -1;
	static volatile int64_t t11 = -209LL;

	t11 = (x61/((x62+x63)|x64));

	if (t11 != 522907810LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = UINT8_MAX;
	static int64_t x66 = -1LL;
	static int32_t x67 = INT32_MIN;
	volatile int64_t x68 = -1LL;
	static volatile int64_t t12 = -16688304961261676LL;

	t12 = (x65/((x66+x67)|x68));

	if (t12 != -255LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = 1LL;
	static uint8_t x70 = UINT8_MAX;
	static int64_t x71 = INT64_MIN;
	volatile int32_t x72 = -19496289;

	t13 = (x69/((x70+x71)|x72));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x75 = INT8_MIN;
	static volatile uint64_t t14 = 22006LLU;

	t14 = (x73/((x74+x75)|x76));

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x80 = 0;
	volatile uint64_t t15 = 12LLU;

	t15 = (x77/((x78+x79)|x80));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x85 = 2257U;
	int16_t x86 = INT16_MIN;
	int16_t x88 = 3;
	static volatile uint32_t t16 = 86550U;

	t16 = (x85/((x86+x87)|x88));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x90 = -22601;
	static int16_t x91 = INT16_MIN;
	int32_t x92 = -1;
	int32_t t17 = -14344;

	t17 = (x89/((x90+x91)|x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x97 = UINT64_MAX;
	uint16_t x98 = 4896U;
	volatile int64_t x100 = INT64_MAX;

	t18 = (x97/((x98+x99)|x100));

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MAX;
	static int16_t x104 = -1;
	int32_t t19 = 2;

	t19 = (x101/((x102+x103)|x104));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x107 = 11513692949291LL;
	static volatile int16_t x108 = INT16_MIN;

	t20 = (x105/((x106+x107)|x108));

	if (t20 != 2LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x110 = INT32_MAX;
	int8_t x111 = 0;
	int32_t x112 = -1;

	t21 = (x109/((x110+x111)|x112));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x114 = UINT64_MAX;

	t22 = (x113/((x114+x115)|x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x117 = INT32_MAX;
	int16_t x119 = 15;
	volatile int8_t x120 = 1;
	volatile int64_t t23 = -596055LL;

	t23 = (x117/((x118+x119)|x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = INT16_MIN;
	uint64_t x123 = 108LLU;
	int32_t x124 = INT32_MIN;
	uint64_t t24 = 31461087819LLU;

	t24 = (x121/((x122+x123)|x124));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x125 = 6U;
	uint64_t x126 = UINT64_MAX;
	static uint16_t x127 = UINT16_MAX;
	uint32_t x128 = 1893783479U;
	uint64_t t25 = 18840462LLU;

	t25 = (x125/((x126+x127)|x128));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int16_t x130 = -29;
	static int8_t x131 = -1;
	int32_t x132 = INT32_MIN;
	static int32_t t26 = -30692883;

	t26 = (x129/((x130+x131)|x132));

	if (t26 != -8) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	static uint64_t x134 = 252511877410615LLU;
	uint64_t x135 = 8047316194705LLU;
	static int8_t x136 = -1;
	volatile uint64_t t27 = 243037LLU;

	t27 = (x133/((x134+x135)|x136));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x138 = -1;
	int16_t x139 = INT16_MAX;
	volatile uint64_t x140 = UINT64_MAX;
	uint64_t t28 = 22LLU;

	t28 = (x137/((x138+x139)|x140));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	static uint32_t x143 = 1811U;
	static int16_t x144 = 18;
	volatile int64_t t29 = -1167009721075280LL;

	t29 = (x141/((x142+x143)|x144));

	if (t29 != -5095785655720870LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x145 = INT16_MIN;
	uint64_t x146 = UINT64_MAX;
	uint8_t x148 = 1U;
	volatile uint64_t t30 = 16768603123475116LLU;

	t30 = (x145/((x146+x147)|x148));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int8_t x150 = -31;
	uint16_t x152 = 5182U;
	volatile int32_t t31 = 2184391;

	t31 = (x149/((x150+x151)|x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x153 = INT16_MIN;
	static int64_t x154 = -110441552352432192LL;
	static int8_t x155 = -22;
	volatile int64_t t32 = -766603LL;

	t32 = (x153/((x154+x155)|x156));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = 3U;
	static volatile int64_t x158 = 19020025948109742LL;
	static int8_t x159 = -3;
	static uint8_t x160 = UINT8_MAX;
	volatile int64_t t33 = -306402135655960LL;

	t33 = (x157/((x158+x159)|x160));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x161 = -1243316289642197860LL;
	uint32_t x162 = 11U;
	volatile uint16_t x164 = 498U;
	static int64_t t34 = -343LL;

	t34 = (x161/((x162+x163)|x164));

	if (t34 != -2457146817474699LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x165 = 246;
	volatile uint32_t x166 = UINT32_MAX;
	volatile int64_t x167 = INT64_MIN;
	static uint64_t x168 = 6602040612960033LLU;
	static uint64_t t35 = 151615227707884917LLU;

	t35 = (x165/((x166+x167)|x168));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 0U;
	uint8_t x172 = 1U;
	uint64_t t36 = 3519LLU;

	t36 = (x169/((x170+x171)|x172));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = -1;
	int32_t x175 = -1;
	int64_t x176 = INT64_MIN;
	int64_t t37 = 44LL;

	t37 = (x173/((x174+x175)|x176));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MAX;
	int64_t x178 = 1227902370220347LL;
	int64_t x180 = INT64_MIN;
	uint64_t t38 = 3484690583LLU;

	t38 = (x177/((x178+x179)|x180));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = -1;
	volatile uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	int64_t x188 = 927350LL;
	int64_t t39 = -188543052145964LL;

	t39 = (x185/((x186+x187)|x188));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = -11712903LL;
	uint8_t x192 = 0U;
	volatile int64_t t40 = -573939385564889768LL;

	t40 = (x189/((x190+x191)|x192));

	if (t40 != -152LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x197 = INT64_MIN;
	static volatile int8_t x199 = -31;
	volatile uint64_t x200 = 1701431341LLU;
	uint64_t t41 = 6262LLU;

	t41 = (x197/((x198+x199)|x200));

	if (t41 != 5420903240LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = -1;
	int8_t x202 = INT8_MIN;
	volatile int16_t x203 = 32;
	uint32_t x204 = 4326100U;
	uint32_t t42 = 14392U;

	t42 = (x201/((x202+x203)|x204));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x207 = -1;
	int64_t t43 = 7285LL;

	t43 = (x205/((x206+x207)|x208));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x213 = -1;
	volatile uint16_t x214 = UINT16_MAX;
	int64_t x215 = -2510955544481LL;
	uint32_t x216 = 100U;
	volatile int64_t t44 = 1125225877705LL;

	t44 = (x213/((x214+x215)|x216));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = -53;
	uint32_t x218 = UINT32_MAX;
	static uint8_t x219 = 18U;
	int32_t x220 = INT32_MIN;
	static uint32_t t45 = 1493748U;

	t45 = (x217/((x218+x219)|x220));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = -1;
	volatile int16_t x224 = INT16_MIN;

	t46 = (x221/((x222+x223)|x224));

	if (t46 != 339169376952812LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = -1;
	int64_t x226 = 7LL;
	int8_t x228 = 1;
	volatile uint64_t t47 = 45750408275LLU;

	t47 = (x225/((x226+x227)|x228));

	if (t47 != 683212743470724133LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x233 = -287;
	static uint64_t x234 = 4LLU;
	static int16_t x235 = INT16_MIN;
	static uint64_t x236 = 1495233LLU;
	static uint64_t t48 = 834LLU;

	t48 = (x233/((x234+x235)|x236));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = INT32_MIN;
	uint64_t x239 = 28LLU;
	uint32_t x240 = UINT32_MAX;

	t49 = (x237/((x238+x239)|x240));

	if (t49 != 4294967296LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x241 = UINT16_MAX;
	static int8_t x242 = -1;
	int16_t x243 = -13;
	int64_t x244 = INT64_MIN;
	int64_t t50 = 7879104769458LL;

	t50 = (x241/((x242+x243)|x244));

	if (t50 != -4681LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = INT16_MAX;
	static int8_t x246 = 3;
	static int16_t x248 = INT16_MAX;

	t51 = (x245/((x246+x247)|x248));

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x255 = 2U;
	uint32_t t52 = 1U;

	t52 = (x253/((x254+x255)|x256));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = 23;
	static int8_t x259 = -1;
	uint32_t x260 = 1746127U;
	uint32_t t53 = 6079709U;

	t53 = (x257/((x258+x259)|x260));

	if (t53 != 2459U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x261 = 411;
	uint32_t x262 = 672U;
	static int16_t x264 = INT16_MAX;
	static uint32_t t54 = 147888U;

	t54 = (x261/((x262+x263)|x264));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x265 = -1;
	uint8_t x267 = 15U;
	int8_t x268 = -1;
	volatile int32_t t55 = 22;

	t55 = (x265/((x266+x267)|x268));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x273 = 1850346941U;
	int16_t x274 = INT16_MIN;
	int8_t x275 = -3;
	uint32_t x276 = 4779U;
	volatile uint32_t t56 = 0U;

	t56 = (x273/((x274+x275)|x276));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = 22913;
	uint64_t x278 = 96LLU;
	volatile int8_t x279 = INT8_MIN;
	int16_t x280 = 30;
	volatile uint64_t t57 = 234895768894605058LLU;

	t57 = (x277/((x278+x279)|x280));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x282 = UINT8_MAX;
	volatile int8_t x283 = INT8_MAX;
	volatile int8_t x284 = 1;
	int32_t t58 = -2;

	t58 = (x281/((x282+x283)|x284));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x293 = 1U;
	volatile uint16_t x294 = 7109U;
	int8_t x296 = -1;
	int32_t t59 = -12620;

	t59 = (x293/((x294+x295)|x296));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = INT32_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t60 = 37547602;

	t60 = (x297/((x298+x299)|x300));

	if (t60 != 2140) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x301 = 172LLU;
	uint32_t x302 = 4899U;
	int64_t x304 = INT64_MAX;
	volatile uint64_t t61 = 24764517LLU;

	t61 = (x301/((x302+x303)|x304));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x305 = INT32_MIN;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = 7U;
	static int32_t t62 = 6155;

	t62 = (x305/((x306+x307)|x308));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x309 = INT16_MIN;
	volatile uint64_t x311 = 391LLU;
	int16_t x312 = -2204;

	t63 = (x309/((x310+x311)|x312));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x317 = 10U;
	int16_t x318 = INT16_MIN;
	int64_t t64 = 26183587LL;

	t64 = (x317/((x318+x319)|x320));

	if (t64 != -10LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x321 = INT16_MAX;
	int8_t x322 = -4;
	int8_t x323 = INT8_MIN;
	static int8_t x324 = -5;
	volatile int32_t t65 = 5160;

	t65 = (x321/((x322+x323)|x324));

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x325 = INT32_MAX;
	volatile int8_t x327 = INT8_MAX;
	uint32_t x328 = 24039599U;
	uint32_t t66 = 28U;

	t66 = (x325/((x326+x327)|x328));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x330 = -1;
	int16_t x332 = INT16_MAX;
	int32_t t67 = -34;

	t67 = (x329/((x330+x331)|x332));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x339 = -1;
	int32_t t68 = 551021190;

	t68 = (x337/((x338+x339)|x340));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x341 = INT32_MAX;
	volatile uint8_t x342 = 0U;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = 48;

	t69 = (x341/((x342+x343)|x344));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x345 = 29LLU;
	int32_t x346 = INT32_MIN;
	uint8_t x347 = 4U;
	static int32_t x348 = INT32_MIN;
	uint64_t t70 = 899394529169043082LLU;

	t70 = (x345/((x346+x347)|x348));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = 12331826LLU;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = UINT16_MAX;
	static uint64_t t71 = 244715241LLU;

	t71 = (x349/((x350+x351)|x352));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = 227209325909092824LL;
	static uint32_t x354 = 369U;
	int16_t x355 = INT16_MIN;
	uint8_t x356 = UINT8_MAX;

	t72 = (x353/((x354+x355)|x356));

	if (t72 != 52901690LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x357 = 17;
	uint16_t x358 = 10006U;
	int16_t x359 = -15;
	volatile int32_t t73 = -9375;

	t73 = (x357/((x358+x359)|x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x366 = -186201443LL;
	uint64_t x367 = 3285219546425123936LLU;
	volatile int32_t x368 = INT32_MAX;
	volatile uint64_t t74 = 10328462525LLU;

	t74 = (x365/((x366+x367)|x368));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x369 = INT64_MIN;
	uint32_t x370 = 2004U;
	static volatile int64_t t75 = -7932870723085LL;

	t75 = (x369/((x370+x371)|x372));

	if (t75 != -4586460485755731LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x373 = -1;
	uint32_t x374 = 95U;
	static uint8_t x375 = 19U;
	int16_t x376 = 468;
	static volatile uint32_t t76 = 0U;

	t76 = (x373/((x374+x375)|x376));

	if (t76 != 8555711U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x378 = 1248322960590LLU;
	uint8_t x379 = UINT8_MAX;
	static uint16_t x380 = 5247U;
	uint64_t t77 = 5002194518339035LLU;

	t77 = (x377/((x378+x379)|x380));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x381 = -382;
	uint16_t x382 = 164U;
	int32_t x383 = -1;
	volatile int32_t t78 = 1;

	t78 = (x381/((x382+x383)|x384));

	if (t78 != 382) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x385 = UINT16_MAX;
	uint64_t x386 = 41669766033LLU;
	int8_t x387 = INT8_MIN;
	int32_t x388 = -1;
	uint64_t t79 = 58477008448336LLU;

	t79 = (x385/((x386+x387)|x388));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = 5915545779LL;
	uint32_t x390 = UINT32_MAX;
	volatile uint64_t x391 = 737LLU;
	uint64_t t80 = 4325339661186429685LLU;

	t80 = (x389/((x390+x391)|x392));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x393 = -59356891;
	int64_t x394 = -206097772959LL;
	static int32_t x395 = 10785107;
	static uint8_t x396 = 44U;
	volatile int64_t t81 = -2065664807070474LL;

	t81 = (x393/((x394+x395)|x396));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x401 = INT8_MAX;
	uint64_t t82 = 2281LLU;

	t82 = (x401/((x402+x403)|x404));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MAX;
	static int16_t x411 = 54;
	volatile uint64_t t83 = 71170112LLU;

	t83 = (x409/((x410+x411)|x412));

	if (t83 != 9375825LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x418 = 158U;
	int16_t x419 = INT16_MIN;
	int32_t t84 = 0;

	t84 = (x417/((x418+x419)|x420));

	if (t84 != -4785) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x421 = 1;
	static int16_t x422 = INT16_MAX;
	int16_t x424 = INT16_MIN;

	t85 = (x421/((x422+x423)|x424));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x425 = INT32_MIN;
	static uint16_t x426 = 24837U;
	uint32_t x427 = 1494453932U;
	int32_t x428 = INT32_MIN;
	static uint32_t t86 = 53727282U;

	t86 = (x425/((x426+x427)|x428));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x429 = INT8_MIN;
	uint8_t x430 = 0U;
	uint64_t x431 = UINT64_MAX;
	int64_t x432 = 3331LL;
	static uint64_t t87 = 540471255340LLU;

	t87 = (x429/((x430+x431)|x432));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x433 = -62;
	volatile uint8_t x434 = 64U;
	int64_t x435 = INT64_MIN;
	uint16_t x436 = 3389U;
	static int64_t t88 = 453492137616LL;

	t88 = (x433/((x434+x435)|x436));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = 3180;
	uint8_t x439 = 9U;
	uint32_t x440 = 7747U;
	volatile uint32_t t89 = 23703U;

	t89 = (x437/((x438+x439)|x440));

	if (t89 != 550707U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x441 = INT8_MIN;
	uint64_t x442 = UINT64_MAX;
	int64_t x443 = -612126878857266LL;
	uint8_t x444 = UINT8_MAX;
	static uint64_t t90 = 195740939252LLU;

	t90 = (x441/((x442+x443)|x444));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x445 = -42997679976920413LL;
	uint16_t x446 = UINT16_MAX;
	int8_t x447 = -1;
	uint32_t x448 = UINT32_MAX;

	t91 = (x445/((x446+x447)|x448));

	if (t91 != -10011177LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = -1;
	int64_t x450 = -10277364252LL;
	volatile int64_t x451 = -265551483091215774LL;
	int16_t x452 = INT16_MAX;
	static int64_t t92 = 27LL;

	t92 = (x449/((x450+x451)|x452));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x453 = UINT64_MAX;
	volatile uint16_t x454 = UINT16_MAX;
	static uint32_t x455 = 181694004U;
	int32_t x456 = INT32_MAX;
	uint64_t t93 = 13433628672948LLU;

	t93 = (x453/((x454+x455)|x456));

	if (t93 != 8589934596LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x457 = 812879405243547482LLU;
	static int8_t x459 = -1;
	int8_t x460 = INT8_MIN;
	volatile uint64_t t94 = 0LLU;

	t94 = (x457/((x458+x459)|x460));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = INT32_MAX;
	int64_t x462 = -1LL;
	int64_t x463 = INT64_MAX;
	uint16_t x464 = 79U;
	volatile int64_t t95 = 3700378875330LL;

	t95 = (x461/((x462+x463)|x464));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x467 = INT64_MIN;
	volatile int32_t x468 = INT32_MIN;
	volatile int64_t t96 = -3129098407LL;

	t96 = (x465/((x466+x467)|x468));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x469 = UINT32_MAX;
	uint16_t x470 = 952U;
	int32_t x471 = -450758972;
	int32_t x472 = INT32_MAX;
	uint32_t t97 = 3096U;

	t97 = (x469/((x470+x471)|x472));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x473 = -1;
	int32_t x475 = INT32_MIN;
	int8_t x476 = -25;
	uint64_t t98 = 8546556356748870LLU;

	t98 = (x473/((x474+x475)|x476));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x477 = INT16_MIN;
	int32_t x478 = INT32_MAX;
	uint32_t x479 = UINT32_MAX;
	int16_t x480 = INT16_MAX;
	static uint32_t t99 = 0U;

	t99 = (x477/((x478+x479)|x480));

	if (t99 != 1U) { NG(); } else { ; }
	
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

