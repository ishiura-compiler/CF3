#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t8 = 0LLU;
static volatile uint64_t t10 = 62612736079LLU;
int16_t x54 = 127;
volatile int64_t x70 = INT64_MIN;
volatile int16_t x72 = 4782;
uint64_t t14 = 5LLU;
int16_t x74 = INT16_MAX;
uint16_t x79 = UINT16_MAX;
int8_t x83 = -1;
uint16_t x94 = UINT16_MAX;
int64_t t22 = 6321941LL;
static int16_t x117 = INT16_MIN;
uint64_t x118 = 157523849LLU;
int32_t x119 = -124;
uint32_t x122 = 3006093U;
static uint16_t x124 = 34U;
static int16_t x127 = 654;
static uint64_t x128 = 110443576679351593LLU;
volatile int32_t x140 = INT32_MAX;
uint64_t t28 = 2201937026LLU;
int32_t t29 = 0;
int32_t t30 = 14;
int64_t x149 = INT64_MIN;
uint32_t x167 = 916498817U;
int64_t t34 = -1390803LL;
volatile uint64_t t36 = 36919LLU;
int32_t x197 = INT32_MIN;
int16_t x198 = INT16_MAX;
volatile int8_t x206 = -36;
volatile int8_t x211 = INT8_MIN;
int32_t t41 = 2584059;
int64_t x219 = -219355LL;
uint16_t x221 = UINT16_MAX;
volatile int64_t x228 = INT64_MIN;
int8_t x236 = 2;
static volatile uint64_t t46 = 481071LLU;
int32_t x241 = 8;
static uint16_t x246 = 2U;
static int64_t t50 = -29721897558638758LL;
int32_t t52 = -1;
volatile uint32_t x269 = 22532U;
uint16_t x272 = 881U;
static int8_t x284 = INT8_MAX;
int32_t x285 = INT32_MIN;
uint64_t x304 = 2LLU;
uint64_t t58 = 2711751241LLU;
uint16_t x305 = 16U;
int64_t x308 = 7487LL;
uint64_t t60 = 8923754157534LLU;
static volatile int8_t x313 = -1;
int8_t x314 = INT8_MIN;
int64_t x326 = -3432826LL;
int64_t t63 = 1876842834559290LL;
uint16_t x335 = 1761U;
volatile int64_t x337 = 14213623LL;
int64_t t65 = -3246725681764771LL;
int16_t x354 = 2555;
volatile int16_t x363 = 5;
int32_t x367 = 105944;
volatile int64_t x368 = 31LL;
uint32_t t69 = 817745U;
volatile int64_t x373 = INT64_MIN;
int32_t t72 = 1924819;
volatile uint64_t t73 = 1436107612160711LLU;
uint8_t x397 = 1U;
uint64_t x398 = 55554832902862LLU;
uint64_t x414 = UINT64_MAX;
int64_t x416 = -296278894953LL;
volatile uint32_t t78 = 25339U;
int64_t t79 = 28LL;
int64_t x439 = 4093127989957998LL;
uint64_t x444 = UINT64_MAX;
uint16_t x455 = 12U;
volatile int64_t x456 = INT64_MIN;
int16_t x457 = INT16_MIN;
uint8_t x458 = UINT8_MAX;
volatile int8_t x460 = INT8_MAX;
static volatile int32_t t84 = -64405192;
static int16_t x463 = -35;
int32_t t85 = -3909;
int16_t x467 = INT16_MIN;
int8_t x469 = INT8_MIN;
int64_t x470 = -1LL;
int16_t x472 = INT16_MIN;
static int64_t x478 = INT64_MIN;
volatile int32_t x485 = INT32_MIN;
static int64_t x489 = -1LL;
int8_t x495 = -1;
int8_t x499 = 2;
static volatile uint64_t t98 = UINT64_MAX;
static volatile int16_t x526 = INT16_MIN;


void f0(void) {
	int32_t x1 = 11583;
	volatile uint8_t x2 = UINT8_MAX;
	static uint64_t x3 = 877LLU;
	static uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 397798027LLU;

	t0 = (((x1&x2)*x3)+x4);

	if (t0 != 120786LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = 5157357592699792LLU;
	volatile uint32_t x8 = 3273U;
	volatile uint64_t t1 = 103104214328359998LLU;

	t1 = (((x5&x6)*x7)+x8);

	if (t1 != 15471147139508735177LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MAX;
	uint8_t x11 = 2U;
	volatile int16_t x12 = 6589;
	int32_t t2 = 23;

	t2 = (((x9&x10)*x11)+x12);

	if (t2 != 6843) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	int8_t x18 = -10;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t3 = -50478;

	t3 = (((x17&x18)*x19)+x20);

	if (t3 != -8387073) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -3222;
	uint8_t x22 = 14U;
	uint64_t x23 = UINT64_MAX;
	volatile int16_t x24 = 477;
	volatile uint64_t t4 = 68021701664LLU;

	t4 = (((x21&x22)*x23)+x24);

	if (t4 != 467LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = UINT16_MAX;
	static int16_t x30 = INT16_MIN;
	int8_t x31 = 20;
	uint64_t x32 = 13210459485256359LLU;
	volatile uint64_t t5 = 2115541522450LLU;

	t5 = (((x29&x30)*x31)+x32);

	if (t5 != 13210459485911719LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x33 = -1867307;
	uint16_t x34 = 3247U;
	static int8_t x35 = 0;
	int16_t x36 = 0;
	static int32_t t6 = -106044597;

	t6 = (((x33&x34)*x35)+x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	volatile int8_t x38 = -1;
	uint16_t x39 = 472U;
	int16_t x40 = 0;
	volatile int32_t t7 = 730;

	t7 = (((x37&x38)*x39)+x40);

	if (t7 != -15466496) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int64_t x42 = -7LL;
	uint16_t x43 = 331U;
	int16_t x44 = -1;

	t8 = (((x41&x42)*x43)+x44);

	if (t8 != 18446744073709549298LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	int32_t x46 = -1;
	volatile int8_t x47 = 0;
	int32_t x48 = INT32_MAX;
	static uint64_t t9 = 90437278214LLU;

	t9 = (((x45&x46)*x47)+x48);

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	volatile uint64_t x50 = 6482865080751LLU;
	uint8_t x51 = 0U;
	int8_t x52 = INT8_MIN;

	t10 = (((x49&x50)*x51)+x52);

	if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 30U;
	static uint32_t x55 = 8648369U;
	static uint16_t x56 = 10392U;
	volatile uint32_t t11 = 8278228U;

	t11 = (((x53&x54)*x55)+x56);

	if (t11 != 259461462U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = -1LL;
	uint32_t x58 = 647361871U;
	static volatile uint8_t x59 = UINT8_MAX;
	uint64_t x60 = UINT64_MAX;
	uint64_t t12 = 876990332366324LLU;

	t12 = (((x57&x58)*x59)+x60);

	if (t12 != 165077277104LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	static uint8_t x62 = 0U;
	int32_t x63 = -22;
	uint8_t x64 = 6U;
	volatile int32_t t13 = -1164;

	t13 = (((x61&x62)*x63)+x64);

	if (t13 != 6) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1LL;
	uint64_t x71 = UINT64_MAX;

	t14 = (((x69&x70)*x71)+x72);

	if (t14 != 9223372036854780590LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = INT64_MIN;
	uint32_t x75 = 709686266U;
	int64_t x76 = INT64_MIN;
	volatile int64_t t15 = INT64_MIN;

	t15 = (((x73&x74)*x75)+x76);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x77 = 0U;
	static uint16_t x78 = 28U;
	int16_t x80 = 1847;
	volatile int32_t t16 = 624749;

	t16 = (((x77&x78)*x79)+x80);

	if (t16 != 1847) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = UINT32_MAX;
	int32_t x82 = INT32_MIN;
	uint64_t x84 = UINT64_MAX;
	static uint64_t t17 = 16439344LLU;

	t17 = (((x81&x82)*x83)+x84);

	if (t17 != 2147483647LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 6184470347LLU;
	uint64_t x90 = 1040312LLU;
	int8_t x91 = 9;
	static int16_t x92 = -7;
	uint64_t t18 = 1367025LLU;

	t18 = (((x89&x90)*x91)+x92);

	if (t18 != 9158465LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 15286543374LLU;
	int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MAX;
	volatile uint64_t t19 = 15208LLU;

	t19 = (((x93&x94)*x95)+x96);

	if (t19 != 9223372036853594367LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x101 = INT8_MIN;
	volatile int32_t x102 = -1;
	static int16_t x103 = -10;
	int16_t x104 = -1;
	volatile int32_t t20 = -6754;

	t20 = (((x101&x102)*x103)+x104);

	if (t20 != 1279) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x105 = INT8_MIN;
	uint8_t x106 = 0U;
	uint64_t x107 = 32746236022LLU;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t21 = 299071293521LLU;

	t21 = (((x105&x106)*x107)+x108);

	if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MIN;
	int64_t x111 = -1LL;
	uint16_t x112 = 5U;

	t22 = (((x109&x110)*x111)+x112);

	if (t22 != 2147483653LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x113 = UINT8_MAX;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = 8022148998LLU;
	uint32_t x116 = 2785U;
	volatile uint64_t t23 = 86LLU;

	t23 = (((x113&x114)*x115)+x116);

	if (t23 != 2045647997275LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x120 = INT16_MIN;
	volatile uint64_t t24 = 428801539LLU;

	t24 = (((x117&x118)*x119)+x120);

	if (t24 != 18446744054177562624LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MAX;
	int8_t x123 = -1;
	int64_t t25 = 6302LL;

	t25 = (((x121&x122)*x123)+x124);

	if (t25 != -3006059LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MIN;
	uint64_t t26 = 47625LLU;

	t26 = (((x125&x126)*x127)+x128);

	if (t26 != 110443576679267881LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 6U;
	static int32_t x134 = INT32_MIN;
	volatile int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MIN;
	volatile int32_t t27 = 159968;

	t27 = (((x133&x134)*x135)+x136);

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 115LLU;
	int16_t x138 = -1;
	uint64_t x139 = UINT64_MAX;

	t28 = (((x137&x138)*x139)+x140);

	if (t28 != 2147483532LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = 184;
	int32_t x142 = INT32_MIN;
	int8_t x143 = 8;
	int32_t x144 = -1;

	t29 = (((x141&x142)*x143)+x144);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = INT16_MAX;
	uint8_t x146 = 49U;
	volatile uint8_t x147 = UINT8_MAX;
	static volatile uint16_t x148 = 242U;

	t30 = (((x145&x146)*x147)+x148);

	if (t30 != 12737) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x150 = INT16_MAX;
	int32_t x151 = -1;
	int32_t x152 = 6932;
	volatile int64_t t31 = 256668124769LL;

	t31 = (((x149&x150)*x151)+x152);

	if (t31 != 6932LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = -1221;
	volatile uint8_t x154 = 21U;
	int64_t x155 = 2585307LL;
	int8_t x156 = 1;
	static int64_t t32 = 979600379LL;

	t32 = (((x153&x154)*x155)+x156);

	if (t32 != 43950220LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int16_t x166 = -55;
	int8_t x168 = INT8_MAX;
	uint32_t t33 = 0U;

	t33 = (((x165&x166)*x167)+x168);

	if (t33 != 3827635912U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = -1LL;
	int8_t x187 = 22;
	uint8_t x188 = 4U;

	t34 = (((x185&x186)*x187)+x188);

	if (t34 != -2812LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = 5;
	int8_t x190 = -1;
	int32_t x191 = 6970539;
	uint8_t x192 = 6U;
	volatile int32_t t35 = -2984926;

	t35 = (((x189&x190)*x191)+x192);

	if (t35 != 34852701) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x193 = -1;
	int16_t x194 = -111;
	volatile uint64_t x195 = 46841100LLU;
	volatile int8_t x196 = INT8_MIN;

	t36 = (((x193&x194)*x195)+x196);

	if (t36 != 18446744068510189388LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x199 = INT64_MAX;
	uint8_t x200 = 7U;
	int64_t t37 = 265422644990266049LL;

	t37 = (((x197&x198)*x199)+x200);

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = INT8_MAX;
	volatile int32_t x202 = -2429627;
	volatile uint32_t x203 = UINT32_MAX;
	static int8_t x204 = INT8_MIN;
	volatile uint32_t t38 = 7U;

	t38 = (((x201&x202)*x203)+x204);

	if (t38 != 4294967099U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = INT16_MIN;
	int8_t x207 = INT8_MAX;
	uint64_t x208 = 13LLU;
	volatile uint64_t t39 = 6LLU;

	t39 = (((x205&x206)*x207)+x208);

	if (t39 != 18446744073705390093LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x209 = 28U;
	volatile int64_t x210 = -105LL;
	static int16_t x212 = -2;
	volatile int64_t t40 = 34850505465LL;

	t40 = (((x209&x210)*x211)+x212);

	if (t40 != -2562LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x213 = 223;
	int32_t x214 = INT32_MIN;
	static int32_t x215 = 61;
	volatile int16_t x216 = INT16_MAX;

	t41 = (((x213&x214)*x215)+x216);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x217 = 384351;
	static uint32_t x218 = 1568833610U;
	int64_t x220 = 83239365LL;
	int64_t t42 = 13341490995498LL;

	t42 = (((x217&x218)*x219)+x220);

	if (t42 != -7120817545LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x222 = INT64_MIN;
	uint32_t x223 = 239U;
	int8_t x224 = INT8_MAX;
	int64_t t43 = -26824492922LL;

	t43 = (((x221&x222)*x223)+x224);

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x225 = 26141053112222939LLU;
	static int16_t x226 = INT16_MIN;
	static int8_t x227 = 7;
	uint64_t t44 = 307838LLU;

	t44 = (((x225&x226)*x227)+x228);

	if (t44 != 9406359408640327680LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x229 = 537U;
	int64_t x230 = INT64_MAX;
	static uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t45 = 63445154540LL;

	t45 = (((x229&x230)*x231)+x232);

	if (t45 != 104167LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x233 = -1;
	uint16_t x234 = 91U;
	uint64_t x235 = 1938646064291193LLU;

	t46 = (((x233&x234)*x235)+x236);

	if (t46 != 176416791850498565LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MAX;
	int32_t x239 = INT32_MAX;
	int16_t x240 = -1;
	static volatile int32_t t47 = 1;

	t47 = (((x237&x238)*x239)+x240);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x242 = 0U;
	volatile int32_t x243 = 245618204;
	int64_t x244 = 73827195LL;
	static int64_t t48 = -131341206LL;

	t48 = (((x241&x242)*x243)+x244);

	if (t48 != 73827195LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x245 = 19038761478LL;
	int32_t x247 = INT32_MAX;
	int64_t x248 = INT64_MIN;
	volatile int64_t t49 = -4533199483682027912LL;

	t49 = (((x245&x246)*x247)+x248);

	if (t49 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x249 = INT64_MAX;
	int32_t x250 = INT32_MAX;
	static uint32_t x251 = 1923U;
	int32_t x252 = 6;

	t50 = (((x249&x250)*x251)+x252);

	if (t50 != 4129611053187LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x257 = UINT64_MAX;
	int64_t x258 = INT64_MAX;
	static volatile int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MIN;
	uint64_t t51 = 819984LLU;

	t51 = (((x257&x258)*x259)+x260);

	if (t51 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = INT8_MIN;
	volatile uint16_t x262 = 280U;
	int16_t x263 = 7;
	static int8_t x264 = INT8_MIN;

	t52 = (((x261&x262)*x263)+x264);

	if (t52 != 1664) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x265 = 1U;
	int16_t x266 = INT16_MIN;
	int32_t x267 = 0;
	uint32_t x268 = 212216559U;
	uint32_t t53 = 76652815U;

	t53 = (((x265&x266)*x267)+x268);

	if (t53 != 212216559U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x270 = -1;
	uint16_t x271 = 17706U;
	uint32_t t54 = 3U;

	t54 = (((x269&x270)*x271)+x272);

	if (t54 != 398952473U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = INT64_MAX;
	uint64_t x274 = 13247715935425LLU;
	static int32_t x275 = INT32_MIN;
	uint64_t x276 = 1747LLU;
	uint64_t t55 = 4224668770689717764LLU;

	t55 = (((x273&x274)*x275)+x276);

	if (t55 != 14072761059626714835LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x281 = 26U;
	int32_t x282 = INT32_MIN;
	static volatile uint16_t x283 = 108U;
	static int32_t t56 = -41;

	t56 = (((x281&x282)*x283)+x284);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x286 = 0;
	uint32_t x287 = 21724134U;
	static int64_t x288 = INT64_MAX;
	int64_t t57 = INT64_MAX;

	t57 = (((x285&x286)*x287)+x288);

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x301 = UINT64_MAX;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = INT32_MIN;

	t58 = (((x301&x302)*x303)+x304);

	if (t58 != 2147483650LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x306 = 2482U;
	uint32_t x307 = UINT32_MAX;
	volatile int64_t t59 = -143685LL;

	t59 = (((x305&x306)*x307)+x308);

	if (t59 != 4294974767LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x309 = 105LLU;
	volatile uint8_t x310 = 8U;
	int32_t x311 = 30;
	int64_t x312 = 23LL;

	t60 = (((x309&x310)*x311)+x312);

	if (t60 != 263LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x315 = 13U;
	int16_t x316 = INT16_MAX;
	static volatile int32_t t61 = -9250303;

	t61 = (((x313&x314)*x315)+x316);

	if (t61 != 31103) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x321 = 0U;
	volatile int32_t x322 = 593392675;
	int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MAX;
	int64_t t62 = INT64_MAX;

	t62 = (((x321&x322)*x323)+x324);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x325 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	volatile uint8_t x328 = 1U;

	t63 = (((x325&x326)*x327)+x328);

	if (t63 != 7388718138654721LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x333 = INT32_MIN;
	uint16_t x334 = 76U;
	int8_t x336 = INT8_MIN;
	volatile int32_t t64 = -17799706;

	t64 = (((x333&x334)*x335)+x336);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x338 = INT16_MAX;
	uint32_t x339 = 15071U;
	volatile int64_t x340 = INT64_MIN;

	t65 = (((x337&x338)*x339)+x340);

	if (t65 != -9223372036476810199LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x353 = -256134LL;
	int8_t x355 = INT8_MAX;
	volatile int16_t x356 = INT16_MIN;
	volatile int64_t t66 = 5907529351238LL;

	t66 = (((x353&x354)*x355)+x356);

	if (t66 != 15238LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x361 = -5814246LL;
	static volatile uint32_t x362 = 40431U;
	int16_t x364 = INT16_MIN;
	volatile int64_t t67 = -1862347682614LL;

	t67 = (((x361&x362)*x363)+x364);

	if (t67 != -22478LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MAX;
	int64_t t68 = 1065090904947LL;

	t68 = (((x365&x366)*x367)+x368);

	if (t68 != 13454919LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x369 = INT8_MAX;
	uint32_t x370 = 973397U;
	uint16_t x371 = 7995U;
	int16_t x372 = INT16_MAX;

	t69 = (((x369&x370)*x371)+x372);

	if (t69 != 712342U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x374 = 169754393;
	volatile uint8_t x375 = 26U;
	uint16_t x376 = 9U;
	int64_t t70 = -9365LL;

	t70 = (((x373&x374)*x375)+x376);

	if (t70 != 9LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x381 = 6721;
	int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	int64_t x384 = -91473575LL;
	volatile int64_t t71 = -1313541295920963592LL;

	t71 = (((x381&x382)*x383)+x384);

	if (t71 != -91473575LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x389 = 51;
	int32_t x390 = -1589126;
	volatile uint8_t x391 = 19U;
	volatile int32_t x392 = -347422638;

	t72 = (((x389&x390)*x391)+x392);

	if (t72 != -347421688) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x393 = 9892121942806036LLU;
	static volatile int32_t x394 = -1;
	int32_t x395 = INT32_MAX;
	int32_t x396 = -1;

	t73 = (((x393&x394)*x395)+x396);

	if (t73 != 10311486354219217387LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x399 = INT32_MIN;
	static int8_t x400 = INT8_MIN;
	static volatile uint64_t t74 = 2472009882352455LLU;

	t74 = (((x397&x398)*x399)+x400);

	if (t74 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x405 = UINT8_MAX;
	int32_t x406 = INT32_MAX;
	uint8_t x407 = UINT8_MAX;
	uint32_t x408 = 236U;
	uint32_t t75 = 144U;

	t75 = (((x405&x406)*x407)+x408);

	if (t75 != 65261U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x413 = INT16_MIN;
	uint32_t x415 = 7U;
	volatile uint64_t t76 = 53885149LLU;

	t76 = (((x413&x414)*x415)+x416);

	if (t76 != 18446743777430427287LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x421 = INT16_MAX;
	static uint64_t x422 = 192LLU;
	int16_t x423 = 134;
	uint32_t x424 = 43979579U;
	volatile uint64_t t77 = 1630097897696783LLU;

	t77 = (((x421&x422)*x423)+x424);

	if (t77 != 44005307LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x429 = 537478627U;
	int16_t x430 = -1846;
	uint16_t x431 = 31350U;
	int16_t x432 = INT16_MAX;

	t78 = (((x429&x430)*x431)+x432);

	if (t78 != 757124459U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x433 = 219LL;
	int64_t x434 = -2544842215LL;
	int16_t x435 = INT16_MAX;
	int16_t x436 = INT16_MIN;

	t79 = (((x433&x434)*x435)+x436);

	if (t79 != 786407LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = -1;
	static volatile uint16_t x438 = 24U;
	int64_t x440 = INT64_MIN;
	static volatile int64_t t80 = 318570093900262557LL;

	t80 = (((x437&x438)*x439)+x440);

	if (t80 != -9125136965095783856LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x441 = INT64_MIN;
	volatile int64_t x442 = 0LL;
	static uint64_t x443 = 1LLU;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (((x441&x442)*x443)+x444);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x445 = UINT64_MAX;
	uint8_t x446 = 5U;
	static int8_t x447 = INT8_MIN;
	volatile int8_t x448 = INT8_MIN;
	volatile uint64_t t82 = 12742LLU;

	t82 = (((x445&x446)*x447)+x448);

	if (t82 != 18446744073709550848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x453 = 6LL;
	int64_t x454 = 616983621402393363LL;
	volatile int64_t t83 = -461169113724LL;

	t83 = (((x453&x454)*x455)+x456);

	if (t83 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x459 = 4739U;

	t84 = (((x457&x458)*x459)+x460);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x461 = INT8_MIN;
	int16_t x462 = 274;
	uint8_t x464 = UINT8_MAX;

	t85 = (((x461&x462)*x463)+x464);

	if (t85 != -8705) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x465 = INT64_MIN;
	int8_t x466 = 12;
	int8_t x468 = INT8_MIN;
	static volatile int64_t t86 = 601601743528LL;

	t86 = (((x465&x466)*x467)+x468);

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x471 = INT16_MIN;
	int64_t t87 = -118200364699LL;

	t87 = (((x469&x470)*x471)+x472);

	if (t87 != 4161536LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x473 = 18U;
	int32_t x474 = INT32_MIN;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 4603650U;
	uint32_t t88 = 325U;

	t88 = (((x473&x474)*x475)+x476);

	if (t88 != 4603650U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x477 = INT32_MAX;
	static int16_t x479 = INT16_MAX;
	int32_t x480 = -2;
	volatile int64_t t89 = -66177LL;

	t89 = (((x477&x478)*x479)+x480);

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x481 = -82351;
	volatile uint64_t x482 = 17563631508110654LLU;
	int8_t x483 = INT8_MIN;
	volatile uint64_t x484 = 121007LLU;
	uint64_t t90 = 3325045891493LLU;

	t90 = (((x481&x482)*x483)+x484);

	if (t90 != 16198599240679936175LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x486 = 14U;
	int16_t x487 = INT16_MIN;
	static int64_t x488 = 3LL;
	volatile int64_t t91 = -1875599292LL;

	t91 = (((x485&x486)*x487)+x488);

	if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x490 = 3U;
	volatile int32_t x491 = -1;
	int32_t x492 = 1;
	volatile int64_t t92 = 216181301LL;

	t92 = (((x489&x490)*x491)+x492);

	if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x493 = -1LL;
	static volatile int32_t x494 = -6;
	static uint32_t x496 = 380999801U;
	int64_t t93 = -3590157115855LL;

	t93 = (((x493&x494)*x495)+x496);

	if (t93 != 380999807LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x497 = UINT32_MAX;
	int16_t x498 = INT16_MIN;
	uint8_t x500 = 1U;
	uint32_t t94 = 1065151802U;

	t94 = (((x497&x498)*x499)+x500);

	if (t94 != 4294901761U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x505 = 33;
	uint16_t x506 = 1762U;
	int32_t x507 = 2870648;
	int64_t x508 = INT64_MIN;
	int64_t t95 = -8062676534LL;

	t95 = (((x505&x506)*x507)+x508);

	if (t95 != -9223372036762915072LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x513 = INT32_MAX;
	int16_t x514 = -1;
	uint64_t x515 = UINT64_MAX;
	int8_t x516 = INT8_MIN;
	static uint64_t t96 = 17112565528LLU;

	t96 = (((x513&x514)*x515)+x516);

	if (t96 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x517 = INT8_MIN;
	uint16_t x518 = 46U;
	volatile uint32_t x519 = 29197357U;
	static int8_t x520 = 12;
	uint32_t t97 = 5U;

	t97 = (((x517&x518)*x519)+x520);

	if (t97 != 12U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x521 = UINT32_MAX;
	static int8_t x522 = 0;
	uint64_t x523 = 1525294264LLU;
	int16_t x524 = -1;

	t98 = (((x521&x522)*x523)+x524);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x525 = INT8_MIN;
	volatile uint16_t x527 = UINT16_MAX;
	uint32_t x528 = 2U;
	uint32_t t99 = 1298U;

	t99 = (((x525&x526)*x527)+x528);

	if (t99 != 2147516418U) { NG(); } else { ; }
	
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

