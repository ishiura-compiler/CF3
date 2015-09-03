#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 816724666120LLU;
static uint64_t t0 = 377LLU;
int32_t t1 = -1715;
static int64_t x16 = INT64_MIN;
int64_t t2 = 24029633223LL;
int16_t x20 = -1;
int32_t x21 = INT32_MIN;
static uint16_t x22 = 222U;
static uint8_t x23 = 111U;
int8_t x24 = INT8_MAX;
volatile uint64_t t5 = 2188743110184027872LLU;
int32_t x33 = INT32_MIN;
volatile int32_t t7 = -6058;
int64_t t9 = 353807079242LL;
static int16_t x51 = INT16_MAX;
int8_t x59 = INT8_MIN;
static volatile int32_t x68 = 55135;
int32_t t12 = -133738;
uint16_t x71 = 1488U;
uint32_t x72 = 14535U;
int16_t x87 = INT16_MAX;
uint32_t t15 = 6283U;
volatile int8_t x92 = INT8_MIN;
static int64_t t17 = 4101495346LL;
int8_t x98 = INT8_MAX;
uint32_t x103 = 103U;
volatile int16_t x114 = INT16_MAX;
uint64_t x124 = 16184LLU;
volatile uint64_t t23 = 177353823675909323LLU;
static uint64_t x132 = 3474266LLU;
uint64_t t25 = 2446585373739171397LLU;
uint32_t x147 = 7525U;
int8_t x152 = 0;
static int8_t x155 = INT8_MIN;
volatile uint32_t x164 = 847023U;
uint32_t t30 = 1693820U;
int64_t x170 = -1LL;
uint8_t x171 = 1U;
int16_t x189 = -11;
static int8_t x191 = -1;
volatile int64_t x192 = INT64_MIN;
int8_t x197 = INT8_MAX;
static int32_t x205 = INT32_MIN;
uint32_t x206 = UINT32_MAX;
static uint16_t x217 = 7U;
uint8_t x219 = UINT8_MAX;
uint16_t x224 = 473U;
uint32_t x228 = 747486U;
uint32_t t43 = 426238U;
static uint8_t x231 = UINT8_MAX;
int64_t x241 = INT64_MIN;
static int32_t x245 = -1;
int16_t x246 = -1;
static uint8_t x266 = 70U;
uint8_t x267 = 0U;
volatile int32_t x272 = -763650;
uint16_t x279 = 237U;
static int64_t t53 = 4208591481802522081LL;
int16_t x281 = INT16_MAX;
volatile int16_t x303 = -15;
static int16_t x311 = -1;
uint16_t x312 = 644U;
int64_t x313 = -1LL;
static int16_t x316 = -16;
volatile int64_t t57 = 1462678146LL;
volatile int32_t t60 = -622061;
static int8_t x339 = -6;
int8_t x343 = INT8_MIN;
int8_t x344 = -1;
int8_t x347 = 23;
int16_t x353 = -1;
volatile int32_t x368 = INT32_MIN;
uint64_t t65 = 107545236LLU;
static int16_t x369 = INT16_MIN;
uint64_t x385 = UINT64_MAX;
static volatile int32_t t69 = -439985951;
static int8_t x403 = INT8_MIN;
uint8_t x404 = 4U;
uint32_t t72 = 6357417U;
int16_t x411 = 3819;
int16_t x412 = 1;
volatile uint8_t x433 = UINT8_MAX;
volatile int64_t x435 = INT64_MIN;
static uint8_t x436 = UINT8_MAX;
volatile uint64_t x440 = 14LLU;
int16_t x447 = 6824;
static volatile int32_t x448 = -1;
volatile int32_t x449 = 6;
uint8_t x450 = UINT8_MAX;
int8_t x454 = INT8_MAX;
int64_t x455 = 51985988303196LL;
int8_t x456 = INT8_MIN;
int8_t x460 = INT8_MAX;
int16_t x463 = INT16_MIN;
volatile int16_t x464 = -1;
volatile int8_t x465 = INT8_MIN;
uint16_t x466 = 0U;
int32_t x469 = 53;
uint64_t t84 = 9LLU;
static int64_t x476 = -22410006971253LL;
int8_t x478 = 1;
volatile uint64_t x479 = 17140957082LLU;
volatile uint64_t t86 = 148387062599972LLU;
volatile int16_t x519 = 1;
int32_t x530 = -1;
int64_t t96 = -152891LL;
volatile int8_t x552 = 28;
volatile int64_t t99 = -443468LL;


void f0(void) {
	int64_t x1 = 610723148LL;
	uint32_t x2 = 7532322U;
	int64_t x4 = 27801LL;

	t0 = (x1^((x2*x3)+x4));

	if (t0 != 6151833171169015525LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = -33;
	uint16_t x6 = UINT16_MAX;
	int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MAX;

	t1 = (x5^((x6*x7)+x8));

	if (t1 != -2139095136) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = -1;
	int8_t x15 = -1;

	t2 = (x13^((x14*x15)+x16));

	if (t2 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = 12326;
	uint16_t x19 = UINT16_MAX;
	volatile int64_t t3 = -65210LL;

	t3 = (x17^((x18*x19)+x20));

	if (t3 != -9223372036046991399LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t t4 = -79390262;

	t4 = (x21^((x22*x23)+x24));

	if (t4 != -2147458879) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = INT8_MAX;
	volatile uint64_t x30 = 112774LLU;
	int16_t x31 = 1745;
	volatile int32_t x32 = INT32_MAX;

	t5 = (x29^((x30*x31)+x32));

	if (t5 != 2344274202LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x34 = UINT8_MAX;
	volatile uint8_t x35 = 12U;
	uint32_t x36 = UINT32_MAX;
	static uint32_t t6 = 1412565057U;

	t6 = (x33^((x34*x35)+x36));

	if (t6 != 2147486707U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 0;
	uint8_t x38 = 1U;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int16_t x40 = 0;

	t7 = (x37^((x38*x39)+x40));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t x42 = -1;
	volatile int8_t x43 = 23;
	int8_t x44 = INT8_MIN;
	int32_t t8 = -82;

	t8 = (x41^((x42*x43)+x44));

	if (t8 != -65386) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 5;
	static uint32_t x46 = 45U;
	static uint8_t x47 = 7U;
	static int64_t x48 = INT64_MIN;

	t9 = (x45^((x46*x47)+x48));

	if (t9 != -9223372036854775490LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	static int16_t x50 = INT16_MIN;
	static int32_t x52 = 40338;
	volatile int32_t t10 = -330752468;

	t10 = (x49^((x50*x51)+x52));

	if (t10 != 1073814930) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x58 = 58169U;
	static int32_t x60 = 19;
	volatile uint32_t t11 = 496929U;

	t11 = (x57^((x58*x59)+x60));

	if (t11 != 7445523U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -51246090;
	int16_t x66 = INT16_MIN;
	static int32_t x67 = -1;

	t12 = (x65^((x66*x67)+x68));

	if (t12 != -51159895) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 56484963LLU;
	static uint32_t x70 = UINT32_MAX;
	static uint64_t t13 = 750LLU;

	t13 = (x69^((x70*x71)+x72));

	if (t13 != 56481428LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x77 = 0U;
	int64_t x78 = INT64_MAX;
	uint64_t x79 = 33226576191LLU;
	uint64_t x80 = UINT64_MAX;
	uint64_t t14 = 0LLU;

	t14 = (x77^((x78*x79)+x80));

	if (t14 != 9223372003628199616LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = 1866;
	uint32_t x86 = 448U;
	int32_t x88 = INT32_MAX;

	t15 = (x85^((x86*x87)+x88));

	if (t15 != 2162162037U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x89 = INT16_MIN;
	int8_t x90 = -14;
	int64_t x91 = -1LL;
	static int64_t t16 = -55494541358730LL;

	t16 = (x89^((x90*x91)+x92));

	if (t16 != 32654LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = INT64_MAX;
	static int64_t x94 = -54LL;
	uint32_t x95 = 9U;
	volatile int16_t x96 = -1;

	t17 = (x93^((x94*x95)+x96));

	if (t17 != -9223372036854775322LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x97 = INT32_MIN;
	uint32_t x99 = 310U;
	static int8_t x100 = INT8_MIN;
	volatile uint32_t t18 = 19361268U;

	t18 = (x97^((x98*x99)+x100));

	if (t18 != 2147522890U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x101 = 110506608U;
	int16_t x102 = INT16_MIN;
	volatile int32_t x104 = INT32_MIN;
	volatile uint32_t t19 = 11U;

	t19 = (x101^((x102*x103)+x104));

	if (t19 != 2035987056U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x109 = 0U;
	int8_t x110 = -1;
	int32_t x111 = 377060086;
	int16_t x112 = -1;
	volatile int32_t t20 = 52577726;

	t20 = (x109^((x110*x111)+x112));

	if (t20 != -377060087) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x113 = -19;
	uint32_t x115 = UINT32_MAX;
	uint32_t x116 = 9U;
	static volatile uint32_t t21 = 5U;

	t21 = (x113^((x114*x115)+x116));

	if (t21 != 32743U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = UINT16_MAX;
	int32_t x122 = -1;
	uint32_t x123 = 1135438863U;
	volatile uint64_t t22 = 42951831LLU;

	t22 = (x121^((x122*x123)+x124));

	if (t22 != 3159502038LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 1862582765083893LLU;
	uint64_t x126 = 165347650836975LLU;
	uint8_t x127 = UINT8_MAX;
	static uint16_t x128 = 1U;

	t23 = (x125^((x126*x127)+x128));

	if (t23 != 41470965750172135LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = -1;
	static uint32_t x130 = 1993091505U;
	static volatile int64_t x131 = -393605608LL;
	uint64_t t24 = 420327560089477LLU;

	t24 = (x129^((x130*x131)+x132));

	if (t24 != 784491993621685773LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 2LLU;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = 32834490349LLU;
	uint8_t x136 = 20U;

	t25 = (x133^((x134*x135)+x136));

	if (t25 != 18446739870894786966LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x137 = INT16_MAX;
	int64_t x138 = -304019889820LL;
	int8_t x139 = 0;
	int64_t x140 = INT64_MAX;
	int64_t t26 = -2100108170279908LL;

	t26 = (x137^((x138*x139)+x140));

	if (t26 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x145 = 65477641U;
	int16_t x146 = 587;
	volatile uint64_t x148 = 1048202LLU;
	static volatile uint64_t t27 = 17649585694305LLU;

	t27 = (x145^((x146*x147)+x148));

	if (t27 != 62159144LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x149 = INT8_MIN;
	uint32_t x150 = 234U;
	int16_t x151 = -1;
	static uint32_t t28 = 509U;

	t28 = (x149^((x150*x151)+x152));

	if (t28 != 150U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x153 = INT32_MIN;
	volatile int16_t x154 = INT16_MIN;
	uint32_t x156 = 3U;
	uint32_t t29 = 187146U;

	t29 = (x153^((x154*x155)+x156));

	if (t29 != 2151677955U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x161 = 1353U;
	int32_t x162 = INT32_MAX;
	static uint32_t x163 = 2067U;

	t30 = (x161^((x162*x163)+x164));

	if (t30 != 2148327893U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x169 = 841U;
	int16_t x172 = INT16_MIN;
	volatile int64_t t31 = -720073LL;

	t31 = (x169^((x170*x171)+x172));

	if (t31 != -33610LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x173 = 102700LLU;
	volatile int16_t x174 = INT16_MAX;
	static int8_t x175 = -1;
	int64_t x176 = -1LL;
	uint64_t t32 = 61753LLU;

	t32 = (x173^((x174*x175)+x176));

	if (t32 != 18446744073709424940LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = 49;
	int32_t x178 = -1;
	uint32_t x179 = 151313U;
	volatile int64_t x180 = INT64_MIN;
	static volatile int64_t t33 = -3327671247620422042LL;

	t33 = (x177^((x178*x179)+x180));

	if (t33 != -9223372032559959842LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x190 = UINT32_MAX;
	static volatile int64_t t34 = -7529879LL;

	t34 = (x189^((x190*x191)+x192));

	if (t34 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = 54354LL;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = INT32_MIN;
	static volatile int64_t t35 = -6LL;

	t35 = (x193^((x194*x195)+x196));

	if (t35 != -9223138590349907026LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x198 = 841U;
	volatile int16_t x199 = -1;
	int8_t x200 = -17;
	int32_t t36 = -194062;

	t36 = (x197^((x198*x199)+x200));

	if (t36 != -807) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x201 = 28U;
	int16_t x202 = -2;
	static int64_t x203 = 345LL;
	static int16_t x204 = -1;
	volatile int64_t t37 = -601665658234012LL;

	t37 = (x201^((x202*x203)+x204));

	if (t37 != -687LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MAX;
	uint32_t t38 = 7754797U;

	t38 = (x205^((x206*x207)+x208));

	if (t38 != 2147483520U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = -1;
	volatile int64_t x210 = -1LL;
	volatile int8_t x211 = -1;
	int32_t x212 = 33;
	static volatile int64_t t39 = -2838163931LL;

	t39 = (x209^((x210*x211)+x212));

	if (t39 != -35LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x213 = INT16_MIN;
	volatile uint64_t x214 = UINT64_MAX;
	int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MAX;
	static uint64_t t40 = 47LLU;

	t40 = (x213^((x214*x215)+x216));

	if (t40 != 9223372036854743168LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x218 = -803;
	uint64_t x220 = 5229185649297LLU;
	uint64_t t41 = 10193348821LLU;

	t41 = (x217^((x218*x219)+x220));

	if (t41 != 5229185444531LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x221 = 9;
	int8_t x222 = INT8_MIN;
	static int32_t x223 = 3;
	volatile int32_t t42 = -13815;

	t42 = (x221^((x222*x223)+x224));

	if (t42 != 80) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x225 = UINT32_MAX;
	uint32_t x226 = UINT32_MAX;
	int32_t x227 = INT32_MIN;

	t43 = (x225^((x226*x227)+x228));

	if (t43 != 2146736161U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = -3;
	int8_t x230 = INT8_MIN;
	int8_t x232 = -6;
	volatile int32_t t44 = 0;

	t44 = (x229^((x230*x231)+x232));

	if (t44 != 32647) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x233 = 132;
	int8_t x234 = INT8_MIN;
	volatile uint16_t x235 = 696U;
	int8_t x236 = -1;
	int32_t t45 = -21124;

	t45 = (x233^((x234*x235)+x236));

	if (t45 != -89221) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x237 = -1;
	int8_t x238 = INT8_MIN;
	static int8_t x239 = INT8_MAX;
	int64_t x240 = -168780413121229LL;
	static volatile int64_t t46 = 347LL;

	t46 = (x237^((x238*x239)+x240));

	if (t46 != 168780413137484LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x242 = -543165849;
	static volatile uint32_t x243 = UINT32_MAX;
	static uint8_t x244 = 3U;
	volatile int64_t t47 = 997716783733663LL;

	t47 = (x241^((x242*x243)+x244));

	if (t47 != -9223372036311609956LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x247 = 98043827U;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t48 = 1U;

	t48 = (x245^((x246*x247)+x248));

	if (t48 != 98043827U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = INT16_MAX;
	int32_t x258 = INT32_MAX;
	static volatile uint8_t x259 = 0U;
	int32_t x260 = INT32_MIN;
	volatile int32_t t49 = 190427798;

	t49 = (x257^((x258*x259)+x260));

	if (t49 != -2147450881) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x261 = 7830197LLU;
	uint32_t x262 = 754778517U;
	static uint32_t x263 = UINT32_MAX;
	uint16_t x264 = UINT16_MAX;
	volatile uint64_t t50 = 200636LLU;

	t50 = (x261^((x262*x263)+x264));

	if (t50 != 3547628767LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x265 = INT32_MIN;
	static uint8_t x268 = UINT8_MAX;
	int32_t t51 = -7149689;

	t51 = (x265^((x266*x267)+x268));

	if (t51 != -2147483393) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = 51506388478678LL;
	int16_t x271 = INT16_MIN;
	int64_t t52 = 41855113626725LL;

	t52 = (x269^((x270*x271)+x272));

	if (t52 != -1687761337670097151LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = -1LL;
	int8_t x280 = 1;

	t53 = (x277^((x278*x279)+x280));

	if (t53 != 9223372036854775572LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x282 = 20U;
	static int16_t x283 = -1;
	int64_t x284 = INT64_MAX;
	int64_t t54 = 38871869LL;

	t54 = (x281^((x282*x283)+x284));

	if (t54 != 9223372036854743060LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x301 = 0U;
	uint64_t x302 = 33530775LLU;
	int32_t x304 = -1;
	volatile uint64_t t55 = 50LLU;

	t55 = (x301^((x302*x303)+x304));

	if (t55 != 18446744073206589990LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x309 = 5459U;
	uint16_t x310 = 8342U;
	volatile int32_t t56 = -7;

	t56 = (x309^((x310*x311)+x312));

	if (t56 != -2883) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x314 = INT16_MIN;
	int16_t x315 = -30;

	t57 = (x313^((x314*x315)+x316));

	if (t57 != -983025LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x317 = 4567402U;
	uint32_t x318 = 697640U;
	static int32_t x319 = -15369046;
	uint16_t x320 = 1991U;
	volatile uint32_t t58 = 439501U;

	t58 = (x317^((x318*x319)+x320));

	if (t58 != 2468128061U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x329 = -1;
	volatile int32_t x330 = 54;
	int32_t x331 = 14;
	volatile int32_t x332 = 1;
	int32_t t59 = -275;

	t59 = (x329^((x330*x331)+x332));

	if (t59 != -758) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x333 = -1;
	int16_t x334 = -1;
	int32_t x335 = -3787;
	int32_t x336 = 0;

	t60 = (x333^((x334*x335)+x336));

	if (t60 != -3788) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x337 = -103617LL;
	volatile uint64_t x338 = UINT64_MAX;
	static int32_t x340 = -345920303;
	volatile uint64_t t61 = 13138931522414LLU;

	t61 = (x337^((x338*x339)+x340));

	if (t61 != 346015720LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x341 = INT64_MAX;
	uint8_t x342 = 28U;
	int64_t t62 = -99301568272LL;

	t62 = (x341^((x342*x343)+x344));

	if (t62 != -9223372036854772224LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x345 = -1;
	int16_t x346 = -1;
	int8_t x348 = INT8_MIN;
	int32_t t63 = 58;

	t63 = (x345^((x346*x347)+x348));

	if (t63 != 150) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x354 = 510U;
	int16_t x355 = -1349;
	static int16_t x356 = -1;
	volatile uint32_t t64 = 20224U;

	t64 = (x353^((x354*x355)+x356));

	if (t64 != 687990U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x365 = 0;
	int16_t x366 = INT16_MIN;
	uint64_t x367 = 868LLU;

	t65 = (x365^((x366*x367)+x368));

	if (t65 != 18446744071533625344LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x370 = 23545782542LLU;
	int16_t x371 = INT16_MIN;
	int32_t x372 = INT32_MIN;
	uint64_t t66 = 47123992709858LLU;

	t66 = (x369^((x370*x371)+x372));

	if (t66 != 771550349787136LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x377 = 8059;
	volatile uint8_t x378 = UINT8_MAX;
	static uint8_t x379 = UINT8_MAX;
	volatile int8_t x380 = INT8_MIN;
	static int32_t t67 = 1517;

	t67 = (x377^((x378*x379)+x380));

	if (t67 != 58106) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x386 = INT8_MAX;
	uint32_t x387 = UINT32_MAX;
	volatile int64_t x388 = -1LL;
	volatile uint64_t t68 = 23565LLU;

	t68 = (x385^((x386*x387)+x388));

	if (t68 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x389 = INT32_MIN;
	static volatile int8_t x390 = -1;
	static volatile uint16_t x391 = 3U;
	uint16_t x392 = 1U;

	t69 = (x389^((x390*x391)+x392));

	if (t69 != 2147483646) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x397 = 0U;
	int64_t x398 = -13LL;
	int8_t x399 = -1;
	int8_t x400 = -1;
	int64_t t70 = 31455916050905247LL;

	t70 = (x397^((x398*x399)+x400));

	if (t70 != 12LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x401 = UINT8_MAX;
	volatile int64_t x402 = -1501515LL;
	volatile int64_t t71 = 756407101LL;

	t71 = (x401^((x402*x403)+x404));

	if (t71 != 192193915LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x405 = INT8_MIN;
	uint32_t x406 = UINT32_MAX;
	volatile int8_t x407 = -1;
	volatile uint16_t x408 = 45U;

	t72 = (x405^((x406*x407)+x408));

	if (t72 != 4294967214U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x409 = INT64_MIN;
	int16_t x410 = INT16_MIN;
	static int64_t t73 = -159274218945025354LL;

	t73 = (x409^((x410*x411)+x412));

	if (t73 != 9223372036729634817LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x413 = 1;
	volatile int16_t x414 = 1;
	volatile int64_t x415 = 10140LL;
	static int32_t x416 = INT32_MIN;
	volatile int64_t t74 = 1LL;

	t74 = (x413^((x414*x415)+x416));

	if (t74 != -2147473507LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x429 = 0;
	volatile int8_t x430 = INT8_MIN;
	uint8_t x431 = 5U;
	int8_t x432 = INT8_MIN;
	int32_t t75 = 1113;

	t75 = (x429^((x430*x431)+x432));

	if (t75 != -768) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x434 = UINT64_MAX;
	volatile uint64_t t76 = 1567041245770157LLU;

	t76 = (x433^((x434*x435)+x436));

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x437 = -1;
	uint16_t x438 = 14U;
	static uint32_t x439 = UINT32_MAX;
	volatile uint64_t t77 = 2358334091121375LLU;

	t77 = (x437^((x438*x439)+x440));

	if (t77 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x445 = INT8_MIN;
	uint32_t x446 = 40U;
	static uint32_t t78 = 4820054U;

	t78 = (x445^((x446*x447)+x448));

	if (t78 != 4294694335U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x451 = INT8_MIN;
	static volatile int32_t x452 = -455;
	volatile int32_t t79 = -1346;

	t79 = (x449^((x450*x451)+x452));

	if (t79 != -33089) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x453 = INT16_MAX;
	int64_t t80 = -658876507104LL;

	t80 = (x453^((x454*x455)+x456));

	if (t80 != 6602220514479067LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x457 = INT64_MIN;
	int32_t x458 = -1;
	static int64_t x459 = 1LL;
	static int64_t t81 = -14LL;

	t81 = (x457^((x458*x459)+x460));

	if (t81 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x461 = UINT8_MAX;
	int8_t x462 = -1;
	int32_t t82 = 6653316;

	t82 = (x461^((x462*x463)+x464));

	if (t82 != 32512) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x467 = -1;
	static int16_t x468 = -7591;
	int32_t t83 = 0;

	t83 = (x465^((x466*x467)+x468));

	if (t83 != 7641) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x470 = 15386004LLU;
	int8_t x471 = INT8_MAX;
	int32_t x472 = INT32_MIN;

	t84 = (x469^((x470*x471)+x472));

	if (t84 != 18446744073516090457LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x473 = 930921;
	volatile int64_t x474 = 588768560LL;
	uint64_t x475 = 128845567346247LLU;
	uint64_t t85 = 1506LLU;

	t85 = (x473^((x474*x475)+x476));

	if (t85 != 7207495329185028274LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x477 = INT16_MIN;
	int16_t x480 = -1;

	t86 = (x477^((x478*x479)+x480));

	if (t86 != 18446744056568594329LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x481 = 5325655085136575LL;
	uint32_t x482 = 33853312U;
	static int32_t x483 = INT32_MIN;
	static volatile uint8_t x484 = 6U;
	volatile int64_t t87 = -1348661789889LL;

	t87 = (x481^((x482*x483)+x484));

	if (t87 != 5325655085136569LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x489 = INT64_MIN;
	uint64_t x490 = 1462005791549LLU;
	int16_t x491 = INT16_MIN;
	int32_t x492 = 1969340;
	uint64_t t88 = 125LLU;

	t88 = (x489^((x490*x491)+x492));

	if (t88 != 9175465031079267516LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x493 = INT16_MIN;
	int8_t x494 = INT8_MIN;
	static uint32_t x495 = 60800U;
	int32_t x496 = INT32_MIN;
	static uint32_t t89 = 32U;

	t89 = (x493^((x494*x495)+x496));

	if (t89 != 2155266048U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x501 = -248;
	volatile uint64_t x502 = 1974578375546596044LLU;
	int64_t x503 = -1LL;
	static volatile int16_t x504 = -1;
	volatile uint64_t t90 = 204323859LLU;

	t90 = (x501^((x502*x503)+x504));

	if (t90 != 1974578375546595899LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x505 = 9;
	volatile int16_t x506 = -1;
	int32_t x507 = -19;
	uint16_t x508 = UINT16_MAX;
	static int32_t t91 = -85956188;

	t91 = (x505^((x506*x507)+x508));

	if (t91 != 65563) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x517 = 51;
	static uint32_t x518 = 6084U;
	int16_t x520 = 1;
	static volatile uint32_t t92 = 12U;

	t92 = (x517^((x518*x519)+x520));

	if (t92 != 6134U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x521 = INT16_MAX;
	int16_t x522 = INT16_MIN;
	int16_t x523 = INT16_MIN;
	int8_t x524 = INT8_MIN;
	static volatile int32_t t93 = -100;

	t93 = (x521^((x522*x523)+x524));

	if (t93 != 1073709183) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x525 = INT16_MIN;
	int32_t x526 = -1;
	static uint16_t x527 = 14876U;
	int32_t x528 = -1;
	static volatile int32_t t94 = 1304;

	t94 = (x525^((x526*x527)+x528));

	if (t94 != 17891) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x529 = INT32_MIN;
	int8_t x531 = 60;
	int16_t x532 = -1962;
	int32_t t95 = 35920394;

	t95 = (x529^((x530*x531)+x532));

	if (t95 != 2147481626) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x533 = INT64_MIN;
	int16_t x534 = 18;
	volatile uint8_t x535 = UINT8_MAX;
	volatile int32_t x536 = INT32_MIN;

	t96 = (x533^((x534*x535)+x536));

	if (t96 != 9223372034707296750LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x545 = 47U;
	int32_t x546 = INT32_MIN;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = -1;
	uint64_t t97 = 880810481557LLU;

	t97 = (x545^((x546*x547)+x548));

	if (t97 != 2147483600LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x549 = 300;
	uint32_t x550 = 584295767U;
	uint32_t x551 = UINT32_MAX;
	volatile uint32_t t98 = 247896495U;

	t98 = (x549^((x550*x551)+x552));

	if (t98 != 3710671849U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x561 = -1;
	static volatile int64_t x562 = -1LL;
	int32_t x563 = 40026;
	volatile int16_t x564 = INT16_MIN;

	t99 = (x561^((x562*x563)+x564));

	if (t99 != 72793LL) { NG(); } else { ; }
	
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

