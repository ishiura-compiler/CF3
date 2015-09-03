#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -341900119LL;
int64_t t0 = 8563636LL;
int16_t x5 = INT16_MAX;
int8_t x7 = INT8_MAX;
static int32_t x10 = INT32_MIN;
static int64_t x11 = 8793254002153766LL;
static int64_t t2 = 3143428554LL;
int16_t x15 = -2;
int16_t x21 = INT16_MIN;
int64_t x22 = 216822LL;
int64_t x26 = 9257701833LL;
uint32_t x31 = 52480912U;
uint64_t x35 = UINT64_MAX;
static int32_t x43 = 199624;
static int16_t x51 = -1;
int64_t x68 = -79709040082744LL;
volatile uint32_t t16 = 6U;
uint16_t x95 = 5864U;
int32_t x98 = 22;
static int16_t x119 = INT16_MIN;
uint64_t x121 = 100225498951375LLU;
int16_t x124 = INT16_MAX;
uint64_t t25 = 97442918921LLU;
volatile int64_t t26 = INT64_MIN;
uint32_t x130 = 247699U;
int32_t t28 = 2393;
volatile int64_t t32 = 261482007319668228LL;
uint8_t x155 = 4U;
static volatile uint64_t x164 = UINT64_MAX;
int32_t x165 = 122559620;
uint16_t x171 = 561U;
int16_t x174 = INT16_MAX;
uint8_t x175 = 20U;
int16_t x185 = INT16_MIN;
int32_t x195 = -1;
int16_t x196 = -7;
uint32_t x197 = UINT32_MAX;
static int16_t x200 = -8;
uint64_t x201 = UINT64_MAX;
int32_t x202 = INT32_MIN;
volatile int32_t x203 = INT32_MIN;
int8_t x206 = INT8_MAX;
static int32_t x208 = 7989;
int32_t x209 = 2845006;
uint8_t x219 = 0U;
int64_t x227 = 2874416371166LL;
int16_t x232 = INT16_MAX;
static int16_t x234 = INT16_MIN;
int8_t x236 = INT8_MAX;
int32_t x237 = 13118;
int8_t x238 = -1;
int16_t x239 = INT16_MAX;
uint16_t x240 = 779U;
int32_t x241 = -2149;
static int16_t x250 = INT16_MAX;
static int16_t x251 = 49;
int8_t x254 = -1;
int32_t x256 = INT32_MIN;
volatile int64_t x259 = -692LL;
int32_t x267 = INT32_MIN;
volatile int8_t x276 = INT8_MAX;
volatile int64_t t63 = 316525639847939LL;
int32_t x283 = -563086834;
volatile int8_t x287 = -1;
int64_t x290 = 212239127450968LL;
static uint64_t t66 = 18064089715LLU;
int16_t x293 = -780;
int32_t x300 = 27;
int16_t x318 = -3;
uint8_t x331 = UINT8_MAX;
static uint64_t x334 = 8618565088722679LLU;
int8_t x335 = -61;
static volatile int16_t x343 = INT16_MIN;
volatile uint64_t t78 = 19953815289LLU;
int32_t x345 = INT32_MIN;
volatile int16_t x351 = INT16_MIN;
uint32_t x353 = UINT32_MAX;
static int8_t x354 = INT8_MIN;
volatile int64_t t81 = -3193225094331250294LL;
static volatile uint64_t t83 = 8110206768858713211LLU;
int8_t x367 = -4;
int32_t x370 = 4361;
int64_t x387 = 62LL;
int8_t x392 = -1;
volatile uint32_t x393 = 89U;
int64_t x398 = INT64_MIN;
int64_t x399 = INT64_MIN;
uint64_t x402 = 73156571LLU;
volatile uint64_t x403 = UINT64_MAX;
static int8_t x404 = INT8_MIN;
int16_t x416 = INT16_MIN;
volatile int64_t x424 = INT64_MAX;


void f0(void) {
	volatile uint16_t x1 = 24162U;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = INT16_MIN;

	t0 = (((x1%x2)-x3)^x4);

	if (t0 != 56931LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 1U;
	int64_t x8 = -1LL;
	int64_t t1 = -1721162784068304LL;

	t1 = (((x5%x6)-x7)^x8);

	if (t1 != -4294967170LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 27;
	uint8_t x12 = 126U;

	t2 = (((x9%x10)-x11)^x12);

	if (t2 != -8793254002153845LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 3174U;
	static int64_t x14 = -991845811015339LL;
	volatile uint16_t x16 = UINT16_MAX;
	int64_t t3 = -156044166723852503LL;

	t3 = (((x13%x14)-x15)^x16);

	if (t3 != 62359LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x23 = -194237342;
	static int64_t x24 = 448LL;
	int64_t t4 = 3136LL;

	t4 = (((x21%x22)-x23)^x24);

	if (t4 != 194204254LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 528U;
	static uint64_t x27 = 1966922513164LLU;
	int8_t x28 = INT8_MAX;
	static volatile uint64_t t5 = 19081LLU;

	t5 = (((x25%x26)-x27)^x28);

	if (t5 != 18446742106787039099LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 4U;
	static volatile int8_t x30 = INT8_MIN;
	volatile int8_t x32 = -1;
	volatile uint32_t t6 = 208U;

	t6 = (((x29%x30)-x31)^x32);

	if (t6 != 52480907U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = -1LL;
	uint8_t x34 = 95U;
	int64_t x36 = 4320LL;
	static uint64_t t7 = 839223LLU;

	t7 = (((x33%x34)-x35)^x36);

	if (t7 != 4320LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	static int16_t x38 = INT16_MIN;
	uint16_t x39 = UINT16_MAX;
	uint8_t x40 = 0U;
	static volatile int32_t t8 = -274711;

	t8 = (((x37%x38)-x39)^x40);

	if (t8 != -65663) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 226175182U;
	int16_t x44 = INT16_MAX;
	uint32_t t9 = 138U;

	t9 = (((x41%x42)-x43)^x44);

	if (t9 != 4294806472U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	static volatile int64_t x46 = INT64_MIN;
	int8_t x47 = 1;
	int16_t x48 = -5537;
	int64_t t10 = -3160LL;

	t10 = (((x45%x46)-x47)^x48);

	if (t10 != 5408LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	static int64_t x50 = 37376013417LL;
	volatile int64_t x52 = INT64_MAX;
	int64_t t11 = INT64_MAX;

	t11 = (((x49%x50)-x51)^x52);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -387955;
	int16_t x58 = -1;
	int8_t x59 = INT8_MAX;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t12 = 13172366;

	t12 = (((x57%x58)-x59)^x60);

	if (t12 != -130) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MAX;
	static int64_t x63 = 2188591748694301LL;
	int8_t x64 = 1;
	volatile int64_t t13 = 364245LL;

	t13 = (((x61%x62)-x63)^x64);

	if (t13 != -2188591748694297LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x65 = UINT32_MAX;
	int16_t x66 = -1940;
	int32_t x67 = -494538841;
	int64_t t14 = 1527256418863224LL;

	t14 = (((x65%x66)-x67)^x68);

	if (t14 != -79708829968604LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x69 = 218716000725518102LL;
	int8_t x70 = -1;
	volatile int8_t x71 = -8;
	volatile uint64_t x72 = 182LLU;
	static volatile uint64_t t15 = 19LLU;

	t15 = (((x69%x70)-x71)^x72);

	if (t15 != 190LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	static volatile uint32_t x74 = 3510432U;
	int32_t x75 = -1712;
	uint32_t x76 = UINT32_MAX;

	t16 = (((x73%x74)-x75)^x76);

	if (t16 != 4293289391U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x81 = 2605602U;
	int64_t x82 = INT64_MIN;
	volatile int16_t x83 = -1;
	int32_t x84 = INT32_MIN;
	int64_t t17 = -316LL;

	t17 = (((x81%x82)-x83)^x84);

	if (t17 != -2144878045LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MAX;
	static uint8_t x86 = 8U;
	static uint64_t x87 = 340146LLU;
	int16_t x88 = -1;
	static uint64_t t18 = 387224376131776LLU;

	t18 = (((x85%x86)-x87)^x88);

	if (t18 != 340138LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	uint64_t x90 = 644018164618924980LLU;
	volatile int32_t x91 = INT32_MAX;
	uint8_t x92 = UINT8_MAX;
	static uint64_t t19 = 806109565LLU;

	t19 = (((x89%x90)-x91)^x92);

	if (t19 != 18446744071562133759LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = 0LL;
	int16_t x94 = INT16_MIN;
	volatile uint8_t x96 = 75U;
	volatile int64_t t20 = 760780247578520LL;

	t20 = (((x93%x94)-x95)^x96);

	if (t20 != -5805LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 7U;
	volatile uint8_t x99 = 37U;
	uint8_t x100 = 2U;
	volatile int32_t t21 = -572411;

	t21 = (((x97%x98)-x99)^x100);

	if (t21 != -32) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = 3171;
	int32_t x102 = 1041639;
	uint8_t x103 = 94U;
	static int16_t x104 = INT16_MIN;
	static int32_t t22 = -7229626;

	t22 = (((x101%x102)-x103)^x104);

	if (t22 != -29691) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = 11;
	int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int16_t x116 = -1618;
	volatile int32_t t23 = 3;

	t23 = (((x113%x114)-x115)^x116);

	if (t23 != -34395) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 57U;
	static uint64_t x118 = 12961927915LLU;
	int64_t x120 = INT64_MAX;
	volatile uint64_t t24 = 235691820116LLU;

	t24 = (((x117%x118)-x119)^x120);

	if (t24 != 9223372036854742982LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x122 = UINT8_MAX;
	uint16_t x123 = 267U;

	t25 = (((x121%x122)-x123)^x124);

	if (t25 != 18446744073709519029LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x125 = INT8_MAX;
	volatile int32_t x126 = INT32_MAX;
	int8_t x127 = INT8_MAX;
	int64_t x128 = INT64_MIN;

	t26 = (((x125%x126)-x127)^x128);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int8_t x131 = 2;
	uint16_t x132 = 40U;
	volatile uint64_t t27 = 353325924569LLU;

	t27 = (((x129%x130)-x131)^x132);

	if (t27 != 177521LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x133 = INT32_MIN;
	uint8_t x134 = UINT8_MAX;
	volatile int8_t x135 = 0;
	volatile int32_t x136 = 5222228;

	t28 = (((x133%x134)-x135)^x136);

	if (t28 != -5222188) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = INT64_MIN;
	static int32_t x138 = -1;
	int64_t x139 = -1LL;
	static int64_t x140 = INT64_MIN;
	int64_t t29 = -912490314LL;

	t29 = (((x137%x138)-x139)^x140);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 20021557LLU;
	static uint8_t x143 = UINT8_MAX;
	int32_t x144 = -193752454;
	volatile uint64_t t30 = 6935LLU;

	t30 = (((x141%x142)-x143)^x144);

	if (t30 != 18446744073517269308LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = 915687569783054972LL;
	static int32_t x146 = -1;
	uint8_t x147 = UINT8_MAX;
	volatile int32_t x148 = INT32_MIN;
	int64_t t31 = -66404502LL;

	t31 = (((x145%x146)-x147)^x148);

	if (t31 != 2147483393LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = 1U;
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	int8_t x152 = 3;

	t32 = (((x149%x150)-x151)^x152);

	if (t32 != 2147483650LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x153 = INT16_MAX;
	static int32_t x154 = -1;
	int32_t x156 = INT32_MAX;
	int32_t t33 = -3;

	t33 = (((x153%x154)-x155)^x156);

	if (t33 != -2147483645) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -1;
	static volatile int16_t x158 = -89;
	int64_t x159 = -7746066LL;
	uint8_t x160 = 0U;
	int64_t t34 = 12LL;

	t34 = (((x157%x158)-x159)^x160);

	if (t34 != 7746065LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = INT64_MAX;
	uint16_t x162 = 10U;
	uint16_t x163 = 13097U;
	static volatile uint64_t t35 = 1835LLU;

	t35 = (((x161%x162)-x163)^x164);

	if (t35 != 13089LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = INT64_MIN;
	int32_t x167 = -1;
	uint16_t x168 = 8451U;
	volatile int64_t t36 = 7435LL;

	t36 = (((x165%x166)-x167)^x168);

	if (t36 != 122568070LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int32_t x170 = INT32_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t37 = 22471406;

	t37 = (((x169%x170)-x171)^x172);

	if (t37 != -2147418674) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = 1LL;
	static int16_t x176 = INT16_MIN;
	volatile int64_t t38 = 4842LL;

	t38 = (((x173%x174)-x175)^x176);

	if (t38 != 32749LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x177 = INT8_MIN;
	static uint64_t x178 = 8008062980868LLU;
	static int32_t x179 = 1;
	volatile int32_t x180 = -103823713;
	volatile uint64_t t39 = 6626316201LLU;

	t39 = (((x177%x178)-x179)^x180);

	if (t39 != 18446741245853758820LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = UINT8_MAX;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	int64_t t40 = INT64_MIN;

	t40 = (((x181%x182)-x183)^x184);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x186 = INT16_MAX;
	volatile int16_t x187 = INT16_MAX;
	int16_t x188 = -1;
	volatile int32_t t41 = -23;

	t41 = (((x185%x186)-x187)^x188);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MAX;
	int32_t t42 = 0;

	t42 = (((x193%x194)-x195)^x196);

	if (t42 != 32760) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x198 = -2;
	int16_t x199 = INT16_MIN;
	volatile uint32_t t43 = 1346939U;

	t43 = (((x197%x198)-x199)^x200);

	if (t43 != 4294934521U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x204 = 14889;
	uint64_t t44 = 132874823935904843LLU;

	t44 = (((x201%x202)-x203)^x204);

	if (t44 != 4294952406LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = INT64_MAX;
	volatile int64_t x207 = -1LL;
	int64_t t45 = -7066370680LL;

	t45 = (((x205%x206)-x207)^x208);

	if (t45 != 7988LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x210 = -1;
	int32_t x211 = INT32_MAX;
	int64_t x212 = INT64_MIN;
	volatile int64_t t46 = 3513889150LL;

	t46 = (((x209%x210)-x211)^x212);

	if (t46 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -8766;
	int16_t x214 = -1;
	static int16_t x215 = -9912;
	int8_t x216 = -1;
	static volatile int32_t t47 = 1983;

	t47 = (((x213%x214)-x215)^x216);

	if (t47 != -9913) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = 463U;
	int16_t x218 = INT16_MIN;
	static int16_t x220 = 207;
	volatile int32_t t48 = -266847;

	t48 = (((x217%x218)-x219)^x220);

	if (t48 != 256) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MIN;
	uint64_t x222 = 2873801130LLU;
	static uint16_t x223 = UINT16_MAX;
	volatile uint32_t x224 = 127459894U;
	uint64_t t49 = 82669389350441902LLU;

	t49 = (((x221%x222)-x223)^x224);

	if (t49 != 1659913435LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = -1;
	int32_t x226 = 30468;
	static int64_t x228 = 352053771631LL;
	int64_t t50 = -47217LL;

	t50 = (((x225%x226)-x227)^x228);

	if (t50 != -3078293760178LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = 4U;
	uint8_t x230 = 7U;
	uint8_t x231 = 104U;
	volatile int32_t t51 = 59033;

	t51 = (((x229%x230)-x231)^x232);

	if (t51 != -32669) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = 6;
	int8_t x235 = INT8_MIN;
	int32_t t52 = -18;

	t52 = (((x233%x234)-x235)^x236);

	if (t52 != 249) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t t53 = -9;

	t53 = (((x237%x238)-x239)^x240);

	if (t53 != -31990) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x242 = 791U;
	int32_t x243 = -1;
	static uint8_t x244 = UINT8_MAX;
	uint32_t t54 = 1U;

	t54 = (((x241%x242)-x243)^x244);

	if (t54 != 300U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 431694450U;
	int16_t x246 = INT16_MIN;
	uint64_t x247 = 11760LLU;
	uint8_t x248 = UINT8_MAX;
	volatile uint64_t t55 = 5511930069LLU;

	t55 = (((x245%x246)-x247)^x248);

	if (t55 != 431682685LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MAX;
	int16_t x252 = 7;
	int32_t t56 = -27755;

	t56 = (((x249%x250)-x251)^x252);

	if (t56 != 73) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MIN;
	int64_t x255 = INT64_MAX;
	int64_t t57 = -2006506596841459LL;

	t57 = (((x253%x254)-x255)^x256);

	if (t57 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x257 = 129427U;
	static uint8_t x258 = 6U;
	static uint32_t x260 = 332350U;
	volatile int64_t t58 = 12142LL;

	t58 = (((x257%x258)-x259)^x260);

	if (t58 != 331915LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int64_t x262 = -4111115LL;
	int16_t x263 = INT16_MIN;
	uint8_t x264 = UINT8_MAX;
	int64_t t59 = 4113458408LL;

	t59 = (((x261%x262)-x263)^x264);

	if (t59 != 2996188LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = -17546916LL;
	static int16_t x268 = -114;
	int64_t t60 = 771674741934798LL;

	t60 = (((x265%x266)-x267)^x268);

	if (t60 != -2147483791LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = 6;
	static volatile int8_t x270 = -1;
	volatile int32_t x271 = 114592467;
	static volatile int32_t x272 = INT32_MAX;
	int32_t t61 = 0;

	t61 = (((x269%x270)-x271)^x272);

	if (t61 != -2032891182) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = 12162269293LLU;
	int64_t x274 = INT64_MIN;
	int32_t x275 = -1;
	volatile uint64_t t62 = 27276129181LLU;

	t62 = (((x273%x274)-x275)^x276);

	if (t62 != 12162269201LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = -1;
	static int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;
	uint8_t x280 = 6U;

	t63 = (((x277%x278)-x279)^x280);

	if (t63 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = INT8_MIN;
	volatile uint32_t x282 = 1924U;
	volatile int8_t x284 = INT8_MIN;
	uint32_t t64 = 1973355928U;

	t64 = (((x281%x282)-x283)^x284);

	if (t64 != 3731879574U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x285 = 1020090337U;
	uint8_t x286 = UINT8_MAX;
	uint32_t x288 = UINT32_MAX;
	uint32_t t65 = 3U;

	t65 = (((x285%x286)-x287)^x288);

	if (t65 != 4294967227U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x289 = UINT32_MAX;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = 64428267399LLU;

	t66 = (((x289%x290)-x291)^x292);

	if (t66 != 62273267832LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x294 = 7163136767144LL;
	int16_t x295 = INT16_MIN;
	static int32_t x296 = -1;
	static volatile int64_t t67 = -1560346286843615LL;

	t67 = (((x293%x294)-x295)^x296);

	if (t67 != -31989LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MAX;
	volatile int8_t x298 = -7;
	int8_t x299 = 19;
	int64_t t68 = 10LL;

	t68 = (((x297%x298)-x299)^x300);

	if (t68 != -10LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x301 = 1660671U;
	volatile uint64_t x302 = 309603603LLU;
	int16_t x303 = -1;
	uint8_t x304 = 29U;
	uint64_t t69 = 9329LLU;

	t69 = (((x301%x302)-x303)^x304);

	if (t69 != 1660701LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x309 = INT8_MAX;
	int64_t x310 = INT64_MIN;
	static uint32_t x311 = UINT32_MAX;
	int16_t x312 = 198;
	static int64_t t70 = 24774187LL;

	t70 = (((x309%x310)-x311)^x312);

	if (t70 != -4294967226LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x313 = 11267U;
	static uint32_t x314 = UINT32_MAX;
	int8_t x315 = -1;
	int32_t x316 = 95558844;
	uint32_t t71 = 0U;

	t71 = (((x313%x314)-x315)^x316);

	if (t71 != 95563960U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x317 = -129136;
	int32_t x319 = INT32_MIN;
	int16_t x320 = -6900;
	int32_t t72 = 209742;

	t72 = (((x317%x318)-x319)^x320);

	if (t72 != -2147476749) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x321 = 5U;
	uint32_t x322 = 182895916U;
	static int32_t x323 = INT32_MAX;
	volatile uint8_t x324 = 13U;
	uint32_t t73 = 25U;

	t73 = (((x321%x322)-x323)^x324);

	if (t73 != 2147483659U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = -190638;
	int32_t x326 = -1005055821;
	uint16_t x327 = 54U;
	int32_t x328 = INT32_MIN;
	volatile int32_t t74 = -1659;

	t74 = (((x325%x326)-x327)^x328);

	if (t74 != 2147292956) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MIN;
	int64_t x332 = 43022361016LL;
	volatile uint64_t t75 = 238403244LLU;

	t75 = (((x329%x330)-x331)^x332);

	if (t75 != 43022376632LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x333 = 21U;
	uint16_t x336 = 1174U;
	volatile uint64_t t76 = 131544371971513850LLU;

	t76 = (((x333%x334)-x335)^x336);

	if (t76 != 1220LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = INT32_MIN;
	uint64_t x338 = 3937006414LLU;
	static uint64_t x339 = 1017432953378833LLU;
	int32_t x340 = -623;
	volatile uint64_t t77 = 11868439168825LLU;

	t77 = (((x337%x338)-x339)^x340);

	if (t77 != 1017429973235012LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x341 = INT64_MIN;
	uint8_t x342 = UINT8_MAX;
	uint64_t x344 = 3369848LLU;

	t78 = (((x341%x342)-x343)^x344);

	if (t78 != 3347704LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x346 = UINT64_MAX;
	static int16_t x347 = INT16_MAX;
	int64_t x348 = 966388107159103LL;
	uint64_t t79 = 223778258658235LLU;

	t79 = (((x345%x346)-x347)^x348);

	if (t79 != 18445777687749862974LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x349 = 586U;
	int16_t x350 = -6;
	static int32_t x352 = 5643;
	static volatile uint32_t t80 = 4634U;

	t80 = (((x349%x350)-x351)^x352);

	if (t80 != 37953U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x355 = -1LL;
	volatile int8_t x356 = INT8_MIN;

	t81 = (((x353%x354)-x355)^x356);

	if (t81 != -256LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = 1;
	int16_t x358 = INT16_MIN;
	volatile int16_t x359 = -354;
	volatile uint32_t x360 = 56732U;
	volatile uint32_t t82 = 1417213364U;

	t82 = (((x357%x358)-x359)^x360);

	if (t82 != 56575U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MIN;
	static uint64_t x362 = 5866983290LLU;
	int8_t x363 = -1;
	static volatile int64_t x364 = INT64_MIN;

	t83 = (((x361%x362)-x363)^x364);

	if (t83 != 9223372041463600127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x365 = 6;
	volatile int32_t x366 = INT32_MIN;
	int32_t x368 = -1;
	volatile int32_t t84 = -95190;

	t84 = (((x365%x366)-x367)^x368);

	if (t84 != -11) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = -1;
	int32_t t85 = -21;

	t85 = (((x369%x370)-x371)^x372);

	if (t85 != 65662) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x373 = -1LL;
	int32_t x374 = INT32_MAX;
	int8_t x375 = -1;
	static uint16_t x376 = 31036U;
	volatile int64_t t86 = 258790566LL;

	t86 = (((x373%x374)-x375)^x376);

	if (t86 != 31036LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x377 = INT32_MAX;
	static int64_t x378 = 985LL;
	uint32_t x379 = 3694114U;
	static volatile int64_t x380 = 743412LL;
	int64_t t87 = -3LL;

	t87 = (((x377%x378)-x379)^x380);

	if (t87 != -3345305LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x381 = 31794;
	volatile uint32_t x382 = 8925880U;
	uint16_t x383 = 265U;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t88 = 178711LL;

	t88 = (((x381%x382)-x383)^x384);

	if (t88 != -9223372036854744279LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x385 = -23;
	int16_t x386 = INT16_MIN;
	volatile int16_t x388 = INT16_MIN;
	int64_t t89 = 333447196381653805LL;

	t89 = (((x385%x386)-x387)^x388);

	if (t89 != 32683LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x389 = -3957550579100LL;
	uint64_t x390 = 2LLU;
	int64_t x391 = 24LL;
	volatile uint64_t t90 = 510LLU;

	t90 = (((x389%x390)-x391)^x392);

	if (t90 != 23LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x394 = 357052LL;
	int8_t x395 = 23;
	int32_t x396 = 754006689;
	volatile int64_t t91 = 6LL;

	t91 = (((x393%x394)-x395)^x396);

	if (t91 != 754006755LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x397 = -1;
	uint16_t x400 = UINT16_MAX;
	int64_t t92 = 2740287LL;

	t92 = (((x397%x398)-x399)^x400);

	if (t92 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = 33625878799488646LLU;
	static volatile uint64_t t93 = 20757LLU;

	t93 = (((x401%x402)-x403)^x404);

	if (t93 != 18446744073679441162LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = INT64_MIN;
	static int64_t x406 = -1LL;
	uint16_t x407 = UINT16_MAX;
	uint16_t x408 = 0U;
	volatile int64_t t94 = -2821648965359026926LL;

	t94 = (((x405%x406)-x407)^x408);

	if (t94 != -65535LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x409 = 0U;
	uint16_t x410 = 6052U;
	volatile int64_t x411 = 87LL;
	int16_t x412 = INT16_MAX;
	static volatile int64_t t95 = 1891044LL;

	t95 = (((x409%x410)-x411)^x412);

	if (t95 != -32682LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x413 = INT16_MAX;
	int64_t x414 = -1LL;
	int64_t x415 = -551LL;
	int64_t t96 = 100018002215177LL;

	t96 = (((x413%x414)-x415)^x416);

	if (t96 != -32217LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x417 = 0U;
	int32_t x418 = -113281;
	static int8_t x419 = -1;
	volatile int32_t x420 = INT32_MIN;
	int32_t t97 = 118715019;

	t97 = (((x417%x418)-x419)^x420);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x421 = 2078941LL;
	int16_t x422 = 9;
	uint16_t x423 = 1838U;
	volatile int64_t t98 = -32759865669LL;

	t98 = (((x421%x422)-x423)^x424);

	if (t98 != -9223372036854773975LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x425 = 2810U;
	int8_t x426 = INT8_MAX;
	volatile uint64_t x427 = 18515738723279578LLU;
	int64_t x428 = INT64_MAX;
	static volatile uint64_t t99 = 29514LLU;

	t99 = (((x425%x426)-x427)^x428);

	if (t99 != 9241887775578055369LLU) { NG(); } else { ; }
	
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

