#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -4488563290630015790LL;
int32_t x6 = INT32_MIN;
int64_t x9 = -106803871697673670LL;
uint8_t x10 = 53U;
uint16_t x12 = 26757U;
int16_t x13 = 0;
int64_t x15 = 63LL;
volatile int64_t t3 = -258927807124650LL;
int64_t x28 = 96349LL;
uint64_t x49 = UINT64_MAX;
uint64_t t9 = 5959907365LLU;
static int64_t t10 = 22656519317023LL;
static uint64_t x57 = 1LLU;
int64_t x58 = INT64_MIN;
uint64_t x61 = UINT64_MAX;
volatile int64_t x63 = INT64_MAX;
uint8_t x64 = UINT8_MAX;
volatile int32_t x68 = INT32_MAX;
volatile int64_t t14 = 241688855246LL;
volatile int16_t x80 = 56;
uint64_t t19 = 5501708LLU;
uint16_t x107 = 32032U;
static volatile int16_t x116 = INT16_MIN;
int32_t x117 = -1;
volatile int64_t x126 = INT64_MIN;
int8_t x129 = INT8_MIN;
int32_t x132 = 257084;
int16_t x135 = INT16_MIN;
volatile int32_t x137 = 1767;
uint64_t x139 = 237139584038LLU;
uint32_t x142 = UINT32_MAX;
volatile int16_t x157 = INT16_MIN;
int64_t t34 = -16060545661552747LL;
uint16_t x171 = 10114U;
int64_t x181 = 930950992133LL;
int32_t x183 = INT32_MAX;
uint8_t x191 = 23U;
uint32_t t37 = 521624U;
uint8_t x215 = UINT8_MAX;
static uint32_t x226 = 1U;
static int64_t t40 = 53635266071LL;
volatile uint64_t x229 = 586087132LLU;
volatile int64_t x243 = INT64_MAX;
int32_t x249 = INT32_MAX;
int32_t x259 = INT32_MIN;
volatile int16_t x260 = INT16_MIN;
uint16_t x264 = 62U;
uint32_t x271 = 1467040967U;
uint32_t t46 = 155863930U;
int8_t x276 = INT8_MIN;
int32_t x279 = -469881;
volatile int16_t x286 = -4;
uint32_t x297 = UINT32_MAX;
static volatile int64_t t53 = -127LL;
volatile int64_t t54 = 1LL;
int8_t x325 = -1;
static int64_t x327 = INT64_MIN;
int64_t t55 = 544276488515LL;
uint64_t x329 = UINT64_MAX;
int8_t x345 = -2;
int64_t x351 = -12319041409999904LL;
volatile int16_t x352 = INT16_MIN;
volatile int8_t x355 = -39;
uint16_t x361 = 101U;
int8_t x365 = 1;
int64_t x366 = -1LL;
uint32_t x370 = 403577U;
uint32_t x371 = 9598U;
uint64_t x384 = 654947177LLU;
static volatile int32_t x390 = 11742;
static volatile int8_t x391 = INT8_MAX;
int32_t x392 = -1;
int32_t x396 = INT32_MAX;
uint16_t x397 = 0U;
uint16_t x423 = 33U;
volatile uint64_t t75 = 5924123LLU;
static int32_t x429 = INT32_MAX;
volatile int32_t t77 = -3;
int32_t x439 = INT32_MAX;
volatile int32_t x440 = INT32_MIN;
int64_t x441 = INT64_MAX;
static uint32_t x455 = 350U;
volatile int64_t x458 = -32LL;
int8_t x459 = INT8_MIN;
volatile int64_t t82 = 1011610241248574393LL;
int64_t t83 = 243913736990LL;
volatile int32_t t84 = 400;
int64_t x473 = 559458LL;
int8_t x476 = -1;
int8_t x488 = -31;
volatile uint16_t x499 = 6U;
int32_t x509 = 929730810;
int16_t x511 = -61;
volatile int32_t t93 = 1633;
int16_t x517 = INT16_MAX;
volatile int64_t t94 = 10074964LL;
uint64_t x522 = 1042596136280604971LLU;
uint32_t x523 = 27046U;
uint64_t t97 = 17562872639862121LLU;


void f0(void) {
	int16_t x2 = INT16_MIN;
	static uint16_t x3 = UINT16_MAX;
	static int16_t x4 = INT16_MAX;
	volatile int64_t t0 = -50374LL;

	t0 = ((x1/(x2%x3))-x4);

	if (t0 != 136980080858041LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -933LL;
	volatile int16_t x7 = 1437;
	int8_t x8 = -1;
	int64_t t1 = -3493340LL;

	t1 = ((x5/(x6%x7))-x8);

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x11 = INT32_MIN;
	volatile int64_t t2 = 212335588005895LL;

	t2 = ((x9/(x10%x11))-x12);

	if (t2 != -2015167390548901LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	int16_t x16 = INT16_MIN;

	t3 = ((x13/(x14%x15))-x16);

	if (t3 != 32768LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -554758765400LL;
	uint64_t x26 = 6LLU;
	uint32_t x27 = 21334054U;
	volatile uint64_t t4 = 777228LLU;

	t4 = ((x25/(x26%x27))-x28);

	if (t4 != 3074457253158368020LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = -2;
	int32_t x30 = -1;
	static uint16_t x31 = 9U;
	int8_t x32 = 5;
	static volatile int32_t t5 = -9483;

	t5 = ((x29/(x30%x31))-x32);

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 7818U;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MAX;
	uint64_t x36 = 8504025798895021LLU;
	uint64_t t6 = 57LLU;

	t6 = ((x33/(x34%x35))-x36);

	if (t6 != 18438240047910664413LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -60;
	int8_t x38 = -1;
	static int64_t x39 = INT64_MIN;
	uint64_t x40 = 95LLU;
	uint64_t t7 = 2551189495733087496LLU;

	t7 = ((x37/(x38%x39))-x40);

	if (t7 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -1;
	uint8_t x46 = 61U;
	uint32_t x47 = 106083U;
	int32_t x48 = INT32_MAX;
	static uint32_t t8 = 30468365U;

	t8 = ((x45/(x46%x47))-x48);

	if (t8 != 2217892948U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x50 = 392919796543LLU;
	volatile uint16_t x51 = 104U;
	volatile int64_t x52 = -1LL;

	t9 = ((x49/(x50%x51))-x52);

	if (t9 != 233503089540627236LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = 666170097119LL;
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MAX;
	int8_t x56 = -11;

	t10 = ((x53/(x54%x55))-x56);

	if (t10 != -83271262128LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x59 = 15U;
	int16_t x60 = INT16_MIN;
	uint64_t t11 = 97651311809968265LLU;

	t11 = ((x57/(x58%x59))-x60);

	if (t11 != 32768LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x62 = 740190LLU;
	uint64_t t12 = 107611078253413598LLU;

	t12 = ((x61/(x62%x63))-x64);

	if (t12 != 24921633733934LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1082616;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	static uint64_t t13 = 31028971676076LLU;

	t13 = ((x65/(x66%x67))-x68);

	if (t13 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MIN;
	volatile uint16_t x71 = 13U;
	int32_t x72 = -2;

	t14 = ((x69/(x70%x71))-x72);

	if (t14 != 18LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 11341206U;
	int32_t x74 = -1;
	int32_t x75 = 2;
	int32_t x76 = 1490;
	uint32_t t15 = 178434081U;

	t15 = ((x73/(x74%x75))-x76);

	if (t15 != 4294965806U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -1;
	int16_t x78 = -123;
	uint8_t x79 = 76U;
	static int32_t t16 = 95404300;

	t16 = ((x77/(x78%x79))-x80);

	if (t16 != -56) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x85 = 78397LL;
	int8_t x86 = -5;
	volatile uint8_t x87 = 31U;
	uint32_t x88 = UINT32_MAX;
	int64_t t17 = 791154498668005LL;

	t17 = ((x85/(x86%x87))-x88);

	if (t17 != -4294982974LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MAX;
	int32_t x90 = -1949996;
	int16_t x91 = -15;
	static volatile int64_t x92 = -1LL;
	volatile int64_t t18 = 6155LL;

	t18 = ((x89/(x90%x91))-x92);

	if (t18 != -195225785LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MAX;
	volatile uint64_t x98 = 104988573260LLU;
	volatile int32_t x99 = INT32_MAX;
	int64_t x100 = INT64_MIN;

	t19 = ((x97/(x98%x99))-x100);

	if (t19 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	static int16_t x102 = 25;
	volatile int32_t x103 = INT32_MIN;
	int8_t x104 = -50;
	int32_t t20 = -2493082;

	t20 = ((x101/(x102%x103))-x104);

	if (t20 != -1260) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -1;
	int64_t x106 = INT64_MIN;
	static uint16_t x108 = 205U;
	static volatile int64_t t21 = -78045791658212792LL;

	t21 = ((x105/(x106%x107))-x108);

	if (t21 != -205LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MAX;
	volatile int32_t x114 = -1;
	int64_t x115 = INT64_MIN;
	volatile int64_t t22 = -980078LL;

	t22 = ((x113/(x114%x115))-x116);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x118 = 99U;
	uint64_t x119 = UINT64_MAX;
	static int64_t x120 = INT64_MIN;
	uint64_t t23 = 40784LLU;

	t23 = ((x117/(x118%x119))-x120);

	if (t23 != 9409702785074064208LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x125 = INT8_MAX;
	uint64_t x127 = UINT64_MAX;
	volatile int8_t x128 = 0;
	uint64_t t24 = 110LLU;

	t24 = ((x125/(x126%x127))-x128);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x130 = INT32_MIN;
	uint64_t x131 = UINT64_MAX;
	volatile uint64_t t25 = 126155997LLU;

	t25 = ((x129/(x130%x131))-x132);

	if (t25 != 18446744073709294533LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x133 = -800730;
	volatile int8_t x134 = -1;
	uint64_t x136 = 9324248205LLU;
	static uint64_t t26 = 4834LLU;

	t26 = ((x133/(x134%x135))-x136);

	if (t26 != 18446744064386104141LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x138 = -1;
	uint32_t x140 = 801219387U;
	volatile uint64_t t27 = 4060166883475LLU;

	t27 = ((x137/(x138%x139))-x140);

	if (t27 != 18446744072908332229LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x141 = 3U;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = 840;
	uint64_t t28 = 47355737LLU;

	t28 = ((x141/(x142%x143))-x144);

	if (t28 != 18446744073709550776LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MIN;
	uint64_t x147 = 997LLU;
	uint32_t x148 = 3U;
	volatile uint64_t t29 = 228723601LLU;

	t29 = ((x145/(x146%x147))-x148);

	if (t29 != 5156020LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x149 = UINT8_MAX;
	static int8_t x150 = INT8_MAX;
	static int16_t x151 = INT16_MAX;
	static uint16_t x152 = 3U;
	volatile int32_t t30 = 5;

	t30 = ((x149/(x150%x151))-x152);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x153 = -862104602;
	int16_t x154 = -13088;
	int16_t x155 = INT16_MAX;
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t31 = -1711;

	t31 = ((x153/(x154%x155))-x156);

	if (t31 != 65614) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x158 = 6087892213792577LLU;
	volatile int32_t x159 = -1;
	static uint32_t x160 = 7900U;
	static uint64_t t32 = 8676292236859LLU;

	t32 = ((x157/(x158%x159))-x160);

	if (t32 != 18446744073709546746LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -27;
	static uint16_t x162 = 45U;
	static int64_t x163 = INT64_MAX;
	static uint32_t x164 = 14428U;
	static int64_t t33 = -223LL;

	t33 = ((x161/(x162%x163))-x164);

	if (t33 != -14428LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = -4;
	uint8_t x166 = 20U;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = -1LL;

	t34 = ((x165/(x166%x167))-x168);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = 19892979294164LLU;
	int8_t x170 = -7;
	volatile int64_t x172 = INT64_MIN;
	volatile uint64_t t35 = 297038LLU;

	t35 = ((x169/(x170%x171))-x172);

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x182 = INT64_MIN;
	static uint32_t x184 = 1246U;
	volatile int64_t t36 = 45024808998235855LL;

	t36 = ((x181/(x182%x183))-x184);

	if (t36 != -465475497312LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = -1;
	static int32_t x190 = INT32_MIN;
	static uint32_t x192 = 259U;

	t37 = ((x189/(x190%x191))-x192);

	if (t37 != 4294967037U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x201 = 1542U;
	int16_t x202 = 184;
	volatile int16_t x203 = INT16_MIN;
	static volatile int16_t x204 = INT16_MIN;
	int32_t t38 = 995;

	t38 = ((x201/(x202%x203))-x204);

	if (t38 != 32776) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x213 = 47447U;
	int64_t x214 = INT64_MAX;
	int64_t x216 = -1LL;
	int64_t t39 = -905745559956358954LL;

	t39 = ((x213/(x214%x215))-x216);

	if (t39 != 374LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x225 = -1LL;
	int32_t x227 = -1;
	volatile uint32_t x228 = UINT32_MAX;

	t40 = ((x225/(x226%x227))-x228);

	if (t40 != -4294967296LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x230 = INT16_MIN;
	static int64_t x231 = INT64_MAX;
	volatile int8_t x232 = 10;
	uint64_t t41 = 100766364653252005LLU;

	t41 = ((x229/(x230%x231))-x232);

	if (t41 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x241 = INT32_MAX;
	int64_t x242 = -652128875532707420LL;
	int8_t x244 = -1;
	int64_t t42 = -21398483907043425LL;

	t42 = ((x241/(x242%x243))-x244);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x250 = -1;
	volatile int32_t x251 = INT32_MIN;
	int16_t x252 = -619;
	int32_t t43 = -30925;

	t43 = ((x249/(x250%x251))-x252);

	if (t43 != -2147483028) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x257 = 2U;
	volatile uint32_t x258 = 23U;
	static uint32_t t44 = 54734812U;

	t44 = ((x257/(x258%x259))-x260);

	if (t44 != 32768U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x261 = -1LL;
	uint64_t x262 = 3972LLU;
	int32_t x263 = INT32_MIN;
	uint64_t t45 = 161LLU;

	t45 = ((x261/(x262%x263))-x264);

	if (t45 != 4644195386130238LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x269 = 3505U;
	static int8_t x270 = INT8_MIN;
	volatile int32_t x272 = INT32_MIN;

	t46 = ((x269/(x270%x271))-x272);

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x273 = INT32_MIN;
	volatile int8_t x274 = INT8_MIN;
	uint8_t x275 = 121U;
	static int32_t t47 = -6529427;

	t47 = ((x273/(x274%x275))-x276);

	if (t47 != 306783506) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x277 = INT32_MIN;
	int64_t x278 = 27064163234625LL;
	int8_t x280 = -1;
	static int64_t t48 = 17919759802LL;

	t48 = ((x277/(x278%x279))-x280);

	if (t48 != -13782LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x281 = 2U;
	uint32_t x282 = 1437978U;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	int64_t t49 = -1601363837521493884LL;

	t49 = ((x281/(x282%x283))-x284);

	if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x285 = 257859197;
	static volatile int8_t x287 = INT8_MAX;
	int16_t x288 = -1;
	volatile int32_t t50 = 10;

	t50 = ((x285/(x286%x287))-x288);

	if (t50 != -64464798) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x298 = -3;
	int32_t x299 = INT32_MIN;
	static uint16_t x300 = 469U;
	volatile uint32_t t51 = 20U;

	t51 = ((x297/(x298%x299))-x300);

	if (t51 != 4294966828U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x301 = 1333U;
	volatile int16_t x302 = 102;
	volatile int16_t x303 = 684;
	volatile int8_t x304 = -1;
	uint32_t t52 = 202066388U;

	t52 = ((x301/(x302%x303))-x304);

	if (t52 != 14U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;

	t53 = ((x309/(x310%x311))-x312);

	if (t53 != 33024LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x321 = INT32_MIN;
	volatile int32_t x322 = INT32_MIN;
	int32_t x323 = -11;
	int64_t x324 = INT64_MAX;

	t54 = ((x321/(x322%x323))-x324);

	if (t54 != -9223372035781033983LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x326 = 2423249U;
	static uint16_t x328 = UINT16_MAX;

	t55 = ((x325/(x326%x327))-x328);

	if (t55 != -65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x330 = 13171217138596122LLU;
	static int32_t x331 = INT32_MAX;
	uint64_t x332 = UINT64_MAX;
	uint64_t t56 = 4393LLU;

	t56 = ((x329/(x330%x331))-x332);

	if (t56 != 9226325167LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x333 = 13004U;
	int64_t x334 = -1LL;
	uint16_t x335 = UINT16_MAX;
	static uint64_t x336 = 34319833197943249LLU;
	volatile uint64_t t57 = 3929490509684LLU;

	t57 = ((x333/(x334%x335))-x336);

	if (t57 != 18412424240511595363LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x341 = INT32_MAX;
	int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MIN;
	volatile int16_t x344 = -1;
	int32_t t58 = 814;

	t58 = ((x341/(x342%x343))-x344);

	if (t58 != 65539) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x346 = 7U;
	static uint16_t x347 = 3U;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t59 = 279415260210421LLU;

	t59 = ((x345/(x346%x347))-x348);

	if (t59 != 4294967295LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = 3;
	int64_t t60 = 143LL;

	t60 = ((x349/(x350%x351))-x352);

	if (t60 != 21846LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x353 = INT8_MIN;
	volatile int32_t x354 = INT32_MIN;
	uint32_t x356 = 22376359U;
	volatile uint32_t t61 = 3U;

	t61 = ((x353/(x354%x355))-x356);

	if (t61 != 4272590948U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MAX;
	volatile int64_t x364 = 850870446LL;
	volatile int64_t t62 = -384403148LL;

	t62 = ((x361/(x362%x363))-x364);

	if (t62 != -850870496LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x367 = 6U;
	static uint16_t x368 = UINT16_MAX;
	volatile int64_t t63 = -29393LL;

	t63 = ((x365/(x366%x367))-x368);

	if (t63 != -65536LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x369 = INT64_MAX;
	static int32_t x372 = -3989160;
	volatile int64_t t64 = -953546507564LL;

	t64 = ((x369/(x370%x371))-x372);

	if (t64 != 20007314617557003LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x373 = -1LL;
	int16_t x374 = 1836;
	int64_t x375 = INT64_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t65 = -61737842616LL;

	t65 = ((x373/(x374%x375))-x376);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	static int32_t x383 = INT32_MIN;
	volatile uint64_t t66 = 23831691427LLU;

	t66 = ((x381/(x382%x383))-x384);

	if (t66 != 18446744073071381655LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x385 = -334097LL;
	volatile uint8_t x386 = UINT8_MAX;
	uint8_t x387 = 7U;
	volatile int16_t x388 = 969;
	int64_t t67 = -836620012LL;

	t67 = ((x385/(x386%x387))-x388);

	if (t67 != -112334LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x389 = 5U;
	volatile int32_t t68 = 428;

	t68 = ((x389/(x390%x391))-x392);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MIN;
	uint16_t x395 = UINT16_MAX;
	static int32_t t69 = -1003777;

	t69 = ((x393/(x394%x395))-x396);

	if (t69 != -2130706431) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x398 = 36569237057982LLU;
	volatile uint16_t x399 = UINT16_MAX;
	int32_t x400 = -450488;
	volatile uint64_t t70 = 244806242162LLU;

	t70 = ((x397/(x398%x399))-x400);

	if (t70 != 450488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x401 = UINT8_MAX;
	volatile uint16_t x402 = 28U;
	int16_t x403 = INT16_MAX;
	int16_t x404 = INT16_MAX;
	int32_t t71 = -22;

	t71 = ((x401/(x402%x403))-x404);

	if (t71 != -32758) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x413 = UINT8_MAX;
	int64_t x414 = 81067368792877LL;
	static uint8_t x415 = UINT8_MAX;
	int16_t x416 = INT16_MAX;
	volatile int64_t t72 = 1172126LL;

	t72 = ((x413/(x414%x415))-x416);

	if (t72 != -32761LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x417 = 6296U;
	int8_t x418 = INT8_MIN;
	volatile int64_t x419 = -4358472228282LL;
	volatile int8_t x420 = 8;
	static int64_t t73 = 111336175LL;

	t73 = ((x417/(x418%x419))-x420);

	if (t73 != -57LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x421 = INT64_MIN;
	static volatile uint32_t x422 = 228268635U;
	static int8_t x424 = -1;
	volatile int64_t t74 = 3LL;

	t74 = ((x421/(x422%x423))-x424);

	if (t74 != -768614336404564649LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MAX;
	volatile uint64_t x427 = 11LLU;
	uint8_t x428 = 26U;

	t75 = ((x425/(x426%x427))-x428);

	if (t75 != 2049638230412168734LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x430 = UINT64_MAX;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	volatile uint64_t t76 = 1524LLU;

	t76 = ((x429/(x430%x431))-x432);

	if (t76 != 16909448LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x433 = UINT8_MAX;
	volatile int8_t x434 = INT8_MIN;
	int8_t x435 = -59;
	int16_t x436 = 17;

	t77 = ((x433/(x434%x435))-x436);

	if (t77 != -42) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x437 = INT16_MAX;
	static int64_t x438 = INT64_MIN;
	static volatile int64_t t78 = -11LL;

	t78 = ((x437/(x438%x439))-x440);

	if (t78 != 2147467265LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x442 = -1;
	int32_t x443 = INT32_MAX;
	static int32_t x444 = -1;
	int64_t t79 = 66LL;

	t79 = ((x441/(x442%x443))-x444);

	if (t79 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x449 = -150;
	uint64_t x450 = 173415LLU;
	int64_t x451 = INT64_MIN;
	int16_t x452 = 344;
	volatile uint64_t t80 = 8082LLU;

	t80 = ((x449/(x450%x451))-x452);

	if (t80 != 106373405262808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x453 = 56LLU;
	static int32_t x454 = INT32_MIN;
	int16_t x456 = INT16_MIN;
	uint64_t t81 = 152LLU;

	t81 = ((x453/(x454%x455))-x456);

	if (t81 != 32768LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x457 = 6;
	static int32_t x460 = -1;

	t82 = ((x457/(x458%x459))-x460);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x461 = INT16_MAX;
	int16_t x462 = INT16_MIN;
	int8_t x463 = 6;
	int64_t x464 = -1LL;

	t83 = ((x461/(x462%x463))-x464);

	if (t83 != -16382LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x465 = 85U;
	volatile uint8_t x466 = 1U;
	int16_t x467 = INT16_MIN;
	static int16_t x468 = 0;

	t84 = ((x465/(x466%x467))-x468);

	if (t84 != 85) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x474 = 2U;
	uint32_t x475 = 31571543U;
	int64_t t85 = 2903LL;

	t85 = ((x473/(x474%x475))-x476);

	if (t85 != 279730LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x477 = 0;
	uint16_t x478 = 436U;
	static int64_t x479 = -1547LL;
	static int64_t x480 = INT64_MAX;
	volatile int64_t t86 = 121114243580708LL;

	t86 = ((x477/(x478%x479))-x480);

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x481 = -1;
	int64_t x482 = -76510588741936LL;
	static int16_t x483 = INT16_MIN;
	static int64_t x484 = -1LL;
	volatile int64_t t87 = 3260221296828431726LL;

	t87 = ((x481/(x482%x483))-x484);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MAX;
	uint32_t x487 = UINT32_MAX;
	uint32_t t88 = 58797U;

	t88 = ((x485/(x486%x487))-x488);

	if (t88 != 33818670U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x497 = -2;
	uint8_t x498 = UINT8_MAX;
	int8_t x500 = INT8_MAX;
	volatile int32_t t89 = 1864003;

	t89 = ((x497/(x498%x499))-x500);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x501 = 0U;
	int8_t x502 = -1;
	int64_t x503 = INT64_MIN;
	uint16_t x504 = 14U;
	volatile int64_t t90 = 451LL;

	t90 = ((x501/(x502%x503))-x504);

	if (t90 != -14LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x505 = 7U;
	int32_t x506 = 615422;
	int64_t x507 = 870442873221662LL;
	int8_t x508 = INT8_MIN;
	static int64_t t91 = 3LL;

	t91 = ((x505/(x506%x507))-x508);

	if (t91 != 128LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x510 = 416184188LLU;
	uint8_t x512 = 0U;
	volatile uint64_t t92 = 251LLU;

	t92 = ((x509/(x510%x511))-x512);

	if (t92 != 2LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x513 = INT8_MAX;
	volatile int8_t x514 = 5;
	int8_t x515 = -7;
	static int16_t x516 = -90;

	t93 = ((x513/(x514%x515))-x516);

	if (t93 != 115) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x518 = INT32_MIN;
	int64_t x519 = INT64_MIN;
	volatile uint16_t x520 = UINT16_MAX;

	t94 = ((x517/(x518%x519))-x520);

	if (t94 != -65535LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x521 = 106U;
	int32_t x524 = 5;
	volatile uint64_t t95 = 1797842737364448552LLU;

	t95 = ((x521/(x522%x523))-x524);

	if (t95 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x525 = UINT32_MAX;
	int8_t x526 = -1;
	uint32_t x527 = 112U;
	uint8_t x528 = UINT8_MAX;
	uint32_t t96 = 8U;

	t96 = ((x525/(x526%x527))-x528);

	if (t96 != 138547077U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x529 = INT8_MIN;
	volatile int16_t x530 = INT16_MAX;
	uint64_t x531 = 27862543058LLU;
	volatile int64_t x532 = INT64_MIN;

	t97 = ((x529/(x530%x531))-x532);

	if (t97 != 9223935003988590607LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x537 = UINT32_MAX;
	static int8_t x538 = INT8_MIN;
	int64_t x539 = INT64_MIN;
	static uint8_t x540 = 13U;
	volatile int64_t t98 = 997823930909358LL;

	t98 = ((x537/(x538%x539))-x540);

	if (t98 != -33554444LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = INT16_MIN;
	static uint64_t x546 = 5519LLU;
	int8_t x547 = 22;
	uint32_t x548 = 6956311U;
	volatile uint64_t t99 = 867435LLU;

	t99 = ((x545/(x546%x547))-x548);

	if (t99 != 970881267030386786LLU) { NG(); } else { ; }
	
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

