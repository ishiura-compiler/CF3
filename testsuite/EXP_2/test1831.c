#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MAX;
volatile int32_t t0 = 1;
static int16_t x6 = 3;
static uint8_t x8 = UINT8_MAX;
static int16_t x10 = -11609;
int64_t x12 = -1LL;
int32_t x19 = INT32_MAX;
int16_t x21 = INT16_MIN;
int64_t t5 = -41LL;
uint16_t x26 = 1741U;
int8_t x31 = 9;
uint16_t x34 = 3U;
int16_t x41 = -6;
static int32_t x46 = -1;
static volatile int64_t x49 = INT64_MIN;
int64_t t13 = -494LL;
uint64_t x67 = UINT64_MAX;
uint32_t x68 = UINT32_MAX;
uint16_t x71 = 26U;
static volatile uint64_t x73 = UINT64_MAX;
volatile uint64_t x81 = UINT64_MAX;
static uint16_t x83 = 2U;
int16_t x88 = INT16_MIN;
static volatile uint64_t t22 = 42797350185124LLU;
int32_t x94 = INT32_MAX;
int8_t x97 = INT8_MIN;
int64_t x103 = 399067988474LL;
static uint16_t x107 = 136U;
volatile int32_t x110 = 262;
uint32_t x112 = 60U;
uint32_t x120 = 139107U;
uint16_t x125 = 280U;
int32_t x127 = -1;
uint32_t x128 = 438277565U;
int8_t x137 = INT8_MIN;
volatile int32_t t35 = 8648813;
static uint16_t x151 = 31241U;
uint64_t x154 = 348125621452196LLU;
uint64_t x163 = 8440235LLU;
int64_t t42 = 119107307626LL;
uint64_t x181 = 32042109LLU;
int32_t x183 = -3236;
volatile int64_t x187 = INT64_MIN;
volatile uint32_t x193 = UINT32_MAX;
uint16_t x199 = 13663U;
volatile uint16_t x201 = UINT16_MAX;
int8_t x206 = INT8_MAX;
int16_t x208 = INT16_MAX;
volatile uint16_t x211 = UINT16_MAX;
volatile int64_t t52 = 1685LL;
int32_t t54 = -57846320;
volatile int64_t x222 = -1LL;
static int64_t x226 = -159688475700366409LL;
volatile uint64_t t56 = 3903206185130280LLU;
volatile int16_t x232 = 12;
int16_t x234 = INT16_MIN;
static int64_t x235 = INT64_MAX;
int8_t x240 = INT8_MIN;
int32_t x248 = INT32_MIN;
int16_t x261 = INT16_MAX;
static uint16_t x262 = 0U;
volatile int64_t x265 = INT64_MIN;
static int32_t x266 = INT32_MIN;
static int8_t x268 = INT8_MIN;
volatile int64_t t66 = 1200158260490LL;
static int32_t t67 = 5960;
int8_t x277 = INT8_MIN;
uint64_t x281 = UINT64_MAX;
volatile uint64_t t70 = 798739686220115652LLU;
volatile int16_t x291 = INT16_MIN;
static uint16_t x295 = UINT16_MAX;
int16_t x296 = -1;
volatile int8_t x302 = -1;
volatile int64_t x305 = INT64_MIN;
static uint16_t x312 = 123U;
int16_t x313 = 474;
int32_t x314 = 1024;
uint64_t x327 = UINT64_MAX;
uint64_t t81 = 7380420LLU;
int32_t x329 = -1;
int32_t x330 = -1;
int16_t x331 = INT16_MIN;
uint64_t x332 = 1293319126761LLU;
volatile uint64_t t82 = 977923676LLU;
static int32_t x341 = INT32_MIN;
int64_t x345 = -1LL;
int8_t x347 = -1;
int64_t x352 = INT64_MIN;
int32_t x353 = -72333;
volatile int8_t x356 = 1;
uint8_t x359 = UINT8_MAX;
static int16_t x362 = -1;
static int32_t x363 = -8802;
static uint8_t x365 = UINT8_MAX;
int16_t x367 = -1;
volatile int64_t x373 = INT64_MIN;
int8_t x387 = -1;
uint16_t x390 = UINT16_MAX;
static uint16_t x392 = UINT16_MAX;
uint16_t x395 = UINT16_MAX;
int64_t t99 = 1682070399962901689LL;


void f0(void) {
	static int32_t x1 = 0;
	uint8_t x3 = 2U;
	static int16_t x4 = INT16_MIN;

	t0 = ((x1&(x2&x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2433U;
	uint32_t x7 = 720509339U;
	volatile uint32_t t1 = 2045494U;

	t1 = ((x5&(x6&x7))&x8);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	static volatile int64_t t2 = -15LL;

	t2 = ((x9&(x10&x11))&x12);

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = -30;
	uint32_t t3 = 1685476959U;

	t3 = ((x13&(x14&x15))&x16);

	if (t3 != 226U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = -165LL;
	int16_t x20 = -1;
	int64_t t4 = -739216777600003LL;

	t4 = ((x17&(x18&x19))&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	volatile int8_t x23 = INT8_MAX;
	static int32_t x24 = INT32_MAX;

	t5 = ((x21&(x22&x23))&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	int64_t x27 = -1LL;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 38LLU;

	t6 = ((x25&(x26&x27))&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -160;
	uint32_t x30 = 1327U;
	int32_t x32 = INT32_MIN;
	volatile uint32_t t7 = 9766U;

	t7 = ((x29&(x30&x31))&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	static int8_t x35 = INT8_MIN;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -1;

	t8 = ((x33&(x34&x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	static volatile int64_t x38 = INT64_MIN;
	uint32_t x39 = 1508U;
	uint64_t x40 = 557268917018268433LLU;
	volatile uint64_t t9 = 1812412443LLU;

	t9 = ((x37&(x38&x39))&x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MIN;
	volatile int8_t x44 = INT8_MIN;
	int32_t t10 = 593740;

	t10 = ((x41&(x42&x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 6;
	uint8_t x47 = 28U;
	static int64_t x48 = -1LL;
	int64_t t11 = 140592886669555LL;

	t11 = ((x45&(x46&x47))&x48);

	if (t11 != 4LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = 133U;
	volatile int64_t t12 = -2127438144779272LL;

	t12 = ((x49&(x50&x51))&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int32_t x54 = -6048;
	int64_t x55 = INT64_MAX;
	int16_t x56 = INT16_MIN;

	t13 = ((x53&(x54&x55))&x56);

	if (t13 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 46;
	uint32_t x58 = 25645932U;
	uint64_t x59 = 227LLU;
	int32_t x60 = -1;
	uint64_t t14 = 35987588422LLU;

	t14 = ((x57&(x58&x59))&x60);

	if (t14 != 32LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -15642770;
	int8_t x62 = INT8_MAX;
	volatile int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	static volatile int64_t t15 = -11661291595LL;

	t15 = ((x61&(x62&x63))&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static volatile uint32_t x66 = 448196U;
	volatile uint64_t t16 = 492431395222LLU;

	t16 = ((x65&(x66&x67))&x68);

	if (t16 != 448196LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = UINT16_MAX;
	uint32_t x72 = UINT32_MAX;
	uint32_t t17 = 2378U;

	t17 = ((x69&(x70&x71))&x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MAX;
	volatile uint64_t t18 = 261251146296814LLU;

	t18 = ((x73&(x74&x75))&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = 0;
	int8_t x80 = -1;
	volatile int32_t t19 = 3878829;

	t19 = ((x77&(x78&x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = UINT16_MAX;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t20 = 1629663715215685637LLU;

	t20 = ((x81&(x82&x83))&x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	volatile uint64_t x86 = 107570249LLU;
	int8_t x87 = INT8_MIN;
	volatile uint64_t t21 = 147134899LLU;

	t21 = ((x85&(x86&x87))&x88);

	if (t21 != 107544576LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;
	static uint64_t x92 = 1627254141574292LLU;

	t22 = ((x89&(x90&x91))&x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	uint8_t x95 = 27U;
	static volatile int64_t x96 = -1LL;
	static volatile int64_t t23 = 102297881337092370LL;

	t23 = ((x93&(x94&x95))&x96);

	if (t23 != 27LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x98 = -1;
	static int32_t x99 = 194374004;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -392739;

	t24 = ((x97&(x98&x99))&x100);

	if (t24 != 194373888) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = -1;
	static volatile int64_t x104 = -1LL;
	static volatile uint64_t t25 = 409251363391585500LLU;

	t25 = ((x101&(x102&x103))&x104);

	if (t25 != 399067988474LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 1761324;
	uint8_t x106 = 53U;
	volatile int64_t x108 = INT64_MAX;
	int64_t t26 = 329113LL;

	t26 = ((x105&(x106&x107))&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -105036507LL;
	volatile int8_t x111 = INT8_MIN;
	static volatile int64_t t27 = -529185LL;

	t27 = ((x109&(x110&x111))&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	volatile int16_t x114 = INT16_MIN;
	int64_t x115 = 15LL;
	uint16_t x116 = 346U;
	int64_t t28 = 84248603118LL;

	t28 = ((x113&(x114&x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x118 = 1692843957931LL;
	static int8_t x119 = -19;
	int64_t t29 = 17999568LL;

	t29 = ((x117&(x118&x119))&x120);

	if (t29 != 7713LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 29U;
	int32_t x122 = -1;
	int8_t x123 = INT8_MAX;
	volatile int8_t x124 = -18;
	int32_t t30 = -129655;

	t30 = ((x121&(x122&x123))&x124);

	if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x126 = 12U;
	volatile uint32_t t31 = 499U;

	t31 = ((x125&(x126&x127))&x128);

	if (t31 != 8U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MAX;
	int32_t x132 = 114215068;
	static volatile int64_t t32 = -7534534LL;

	t32 = ((x129&(x130&x131))&x132);

	if (t32 != 114196480LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MIN;
	int64_t x134 = -138038212371851686LL;
	int8_t x135 = 7;
	volatile int32_t x136 = -3;
	int64_t t33 = -691709612734010LL;

	t33 = ((x133&(x134&x135))&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 1903U;
	static int8_t x139 = 35;
	volatile int8_t x140 = -1;
	static int32_t t34 = -2;

	t34 = ((x137&(x138&x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = 21;
	volatile uint16_t x142 = 53U;
	int8_t x143 = INT8_MIN;
	static int32_t x144 = 943;

	t35 = ((x141&(x142&x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MIN;
	volatile uint32_t x146 = 61646387U;
	uint32_t x147 = 344386U;
	int64_t x148 = -641334100LL;
	int64_t t36 = -33025750700700LL;

	t36 = ((x145&(x146&x147))&x148);

	if (t36 != 262144LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -1;
	int16_t x150 = -1;
	uint32_t x152 = 41496867U;
	volatile uint32_t t37 = 7743959U;

	t37 = ((x149&(x150&x151))&x152);

	if (t37 != 12289U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	static uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t38 = 23142825LLU;

	t38 = ((x153&(x154&x155))&x156);

	if (t38 != 32128LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 5326290LL;
	int32_t x158 = INT32_MAX;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -17691029569680683LL;

	t39 = ((x157&(x158&x159))&x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 1;
	uint32_t x162 = UINT32_MAX;
	volatile uint8_t x164 = UINT8_MAX;
	uint64_t t40 = 1602211268992492676LLU;

	t40 = ((x161&(x162&x163))&x164);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 1367900922011342791LLU;
	int32_t x166 = -464;
	int32_t x167 = 1957465;
	static uint8_t x168 = 2U;
	uint64_t t41 = 4469062786542760LLU;

	t41 = ((x165&(x166&x167))&x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 1455638979227965342LL;
	int8_t x170 = INT8_MIN;
	static int16_t x171 = INT16_MIN;
	static int64_t x172 = INT64_MAX;

	t42 = ((x169&(x170&x171))&x172);

	if (t42 != 1455638979227942912LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	uint64_t x174 = UINT64_MAX;
	static volatile int32_t x175 = -701;
	volatile uint64_t x176 = UINT64_MAX;
	static uint64_t t43 = 1270LLU;

	t43 = ((x173&(x174&x175))&x176);

	if (t43 != 18446744073709550915LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = 89U;
	static int32_t x179 = INT32_MIN;
	uint8_t x180 = 2U;
	volatile uint32_t t44 = 480344015U;

	t44 = ((x177&(x178&x179))&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 698640U;
	volatile int32_t x184 = 391451033;
	uint64_t t45 = 13711289467LLU;

	t45 = ((x181&(x182&x183))&x184);

	if (t45 != 16LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -26687;
	volatile int8_t x186 = INT8_MIN;
	int16_t x188 = INT16_MAX;
	volatile int64_t t46 = -4LL;

	t46 = ((x185&(x186&x187))&x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	uint64_t x190 = 28402182985964126LLU;
	static uint8_t x191 = 112U;
	int16_t x192 = INT16_MAX;
	uint64_t t47 = 2LLU;

	t47 = ((x189&(x190&x191))&x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = 658260U;
	volatile int16_t x195 = INT16_MIN;
	uint16_t x196 = 128U;
	uint32_t t48 = 536279U;

	t48 = ((x193&(x194&x195))&x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 39U;
	static int64_t x198 = 13038213930LL;
	int8_t x200 = INT8_MIN;
	int64_t t49 = -206473913LL;

	t49 = ((x197&(x198&x199))&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x202 = 5LLU;
	static volatile uint32_t x203 = 51423U;
	volatile uint16_t x204 = 1029U;
	static volatile uint64_t t50 = 555018673308LLU;

	t50 = ((x201&(x202&x203))&x204);

	if (t50 != 5LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	volatile uint64_t t51 = 179486293659LLU;

	t51 = ((x205&(x206&x207))&x208);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 46U;
	volatile uint32_t x210 = 7534U;
	int64_t x212 = INT64_MIN;

	t52 = ((x209&(x210&x211))&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MAX;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = 15;

	t53 = ((x213&(x214&x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 3;
	uint16_t x218 = UINT16_MAX;
	volatile uint16_t x219 = UINT16_MAX;
	uint8_t x220 = 0U;

	t54 = ((x217&(x218&x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x223 = 3884826409724072346LLU;
	int64_t x224 = -64638388LL;
	uint64_t t55 = 2241296069514LLU;

	t55 = ((x221&(x222&x223))&x224);

	if (t55 != 3884826407750074368LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = INT32_MIN;
	static uint16_t x227 = UINT16_MAX;
	volatile uint64_t x228 = 608530496369521524LLU;

	t56 = ((x225&(x226&x227))&x228);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint16_t x230 = UINT16_MAX;
	uint16_t x231 = 0U;
	int32_t t57 = -481;

	t57 = ((x229&(x230&x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x236 = 17301U;
	int64_t t58 = -1LL;

	t58 = ((x233&(x234&x235))&x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = UINT64_MAX;
	volatile int8_t x238 = -2;
	uint64_t x239 = 1793LLU;
	uint64_t t59 = 3766621071531LLU;

	t59 = ((x237&(x238&x239))&x240);

	if (t59 != 1792LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int32_t x242 = -94;
	uint64_t x243 = 3855098833299LLU;
	static int16_t x244 = 6727;
	volatile uint64_t t60 = 131979LLU;

	t60 = ((x241&(x242&x243))&x244);

	if (t60 != 2050LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	volatile int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	int64_t t61 = INT64_MIN;

	t61 = ((x245&(x246&x247))&x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = -1LL;
	int64_t x251 = -16483897388721LL;
	uint32_t x252 = 1292000U;
	int64_t t62 = 9893374130181LL;

	t62 = ((x249&(x250&x251))&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = 12614041U;
	int64_t x254 = INT64_MAX;
	static uint8_t x255 = 48U;
	volatile uint32_t x256 = UINT32_MAX;
	volatile int64_t t63 = 4127578192LL;

	t63 = ((x253&(x254&x255))&x256);

	if (t63 != 16LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 144057806U;
	volatile uint64_t x258 = 20LLU;
	int8_t x259 = 3;
	int8_t x260 = -2;
	uint64_t t64 = 396685637148200709LLU;

	t64 = ((x257&(x258&x259))&x260);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x263 = INT32_MIN;
	static int8_t x264 = INT8_MIN;
	static volatile int32_t t65 = 34;

	t65 = ((x261&(x262&x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x267 = 6428695U;

	t66 = ((x265&(x266&x267))&x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = 1U;
	int8_t x270 = INT8_MIN;
	static int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;

	t67 = ((x269&(x270&x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = 5026LL;
	static uint32_t x274 = 10U;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = UINT16_MAX;
	static volatile int64_t t68 = -37617805629522626LL;

	t68 = ((x273&(x274&x275))&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MIN;
	volatile uint32_t x279 = 7U;
	static int8_t x280 = -1;
	volatile int64_t t69 = 684797LL;

	t69 = ((x277&(x278&x279))&x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x282 = INT16_MIN;
	uint16_t x283 = UINT16_MAX;
	volatile int8_t x284 = INT8_MIN;

	t70 = ((x281&(x282&x283))&x284);

	if (t70 != 32768LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	int8_t x286 = INT8_MIN;
	uint64_t x287 = 4391482LLU;
	int8_t x288 = INT8_MIN;
	static volatile uint64_t t71 = 4068880LLU;

	t71 = ((x285&(x286&x287))&x288);

	if (t71 != 4391424LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int64_t x290 = -1LL;
	static int16_t x292 = -58;
	volatile int64_t t72 = -24405370283LL;

	t72 = ((x289&(x290&x291))&x292);

	if (t72 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 3114LLU;
	int64_t x294 = INT64_MIN;
	volatile uint64_t t73 = 1329827693236817LLU;

	t73 = ((x293&(x294&x295))&x296);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	int8_t x299 = INT8_MAX;
	uint8_t x300 = 0U;
	volatile int32_t t74 = -260590;

	t74 = ((x297&(x298&x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x303 = -1;
	uint32_t x304 = 13U;
	static uint32_t t75 = 61518183U;

	t75 = ((x301&(x302&x303))&x304);

	if (t75 != 13U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = -1;
	volatile int32_t x307 = -28495;
	static int64_t x308 = -1LL;
	volatile int64_t t76 = INT64_MIN;

	t76 = ((x305&(x306&x307))&x308);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	volatile int32_t x310 = -1;
	int16_t x311 = -1;
	volatile int64_t t77 = -119LL;

	t77 = ((x309&(x310&x311))&x312);

	if (t77 != 123LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x315 = 2U;
	static int16_t x316 = 71;
	uint32_t t78 = 1046964187U;

	t78 = ((x313&(x314&x315))&x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MIN;
	uint8_t x319 = 0U;
	volatile int16_t x320 = 4151;
	volatile int32_t t79 = 1;

	t79 = ((x317&(x318&x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	static volatile uint8_t x322 = UINT8_MAX;
	int8_t x323 = INT8_MIN;
	static volatile uint8_t x324 = 1U;
	int32_t t80 = 1;

	t80 = ((x321&(x322&x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 46809542001LLU;
	int8_t x326 = INT8_MAX;
	uint32_t x328 = 519562U;

	t81 = ((x325&(x326&x327))&x328);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {


	t82 = ((x329&(x330&x331))&x332);

	if (t82 != 1293319110656LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 164365U;
	int32_t x334 = -429382;
	int64_t x335 = -1LL;
	volatile int64_t x336 = 1030018263197LL;
	int64_t t83 = -7194LL;

	t83 = ((x333&(x334&x335))&x336);

	if (t83 != 8LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = 0U;
	static volatile uint8_t x338 = 6U;
	volatile uint8_t x339 = 60U;
	int8_t x340 = 0;
	int32_t t84 = -1;

	t84 = ((x337&(x338&x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x342 = UINT8_MAX;
	uint64_t x343 = UINT64_MAX;
	uint64_t x344 = 3532269461096545447LLU;
	static volatile uint64_t t85 = 65831890505241LLU;

	t85 = ((x341&(x342&x343))&x344);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = 506107LL;
	int32_t x348 = INT32_MAX;
	volatile int64_t t86 = -160016139769433LL;

	t86 = ((x345&(x346&x347))&x348);

	if (t86 != 506107LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -191;
	uint8_t x350 = 49U;
	uint8_t x351 = 11U;
	volatile int64_t t87 = -50935464996LL;

	t87 = ((x349&(x350&x351))&x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MAX;
	uint8_t x355 = UINT8_MAX;
	int32_t t88 = -35;

	t88 = ((x353&(x354&x355))&x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -1LL;
	int32_t x358 = -2;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int64_t t89 = 3030LL;

	t89 = ((x357&(x358&x359))&x360);

	if (t89 != 254LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = UINT16_MAX;
	static volatile int64_t x364 = -1LL;
	volatile int64_t t90 = -837081039631LL;

	t90 = ((x361&(x362&x363))&x364);

	if (t90 != 56734LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x366 = UINT8_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t91 = 10913955177537LL;

	t91 = ((x365&(x366&x367))&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 6U;
	int16_t x370 = INT16_MAX;
	int64_t x371 = -1126804307247863438LL;
	int32_t x372 = INT32_MAX;
	volatile int64_t t92 = -4277281989LL;

	t92 = ((x369&(x370&x371))&x372);

	if (t92 != 2LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x374 = INT32_MIN;
	uint8_t x375 = 7U;
	static int64_t x376 = -24LL;
	int64_t t93 = 5LL;

	t93 = ((x373&(x374&x375))&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1453562LLU;
	int64_t x378 = -1LL;
	uint32_t x379 = UINT32_MAX;
	static uint32_t x380 = 67074U;
	volatile uint64_t t94 = 15157051091LLU;

	t94 = ((x377&(x378&x379))&x380);

	if (t94 != 1026LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = -1LL;
	volatile uint32_t x382 = UINT32_MAX;
	uint8_t x383 = 1U;
	static int8_t x384 = -3;
	volatile int64_t t95 = 815056LL;

	t95 = ((x381&(x382&x383))&x384);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = -1;
	volatile int8_t x386 = -49;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = -204199797;

	t96 = ((x385&(x386&x387))&x388);

	if (t96 != 79) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint8_t x391 = 1U;
	int32_t t97 = 333001;

	t97 = ((x389&(x390&x391))&x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int16_t x394 = -51;
	int64_t x396 = -9323345LL;
	int64_t t98 = 22182185458LL;

	t98 = ((x393&(x394&x395))&x396);

	if (t98 != 48269LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	int64_t x398 = 37015007LL;
	int16_t x399 = INT16_MAX;
	int32_t x400 = -20212;

	t99 = ((x397&(x398&x399))&x400);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

