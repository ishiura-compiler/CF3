#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int64_t t0 = 3111LL;
uint32_t x10 = 166347U;
int16_t x11 = INT16_MAX;
volatile int64_t x12 = 194445LL;
int64_t t2 = -928978153322LL;
uint32_t x13 = UINT32_MAX;
int32_t x15 = 1;
uint32_t t3 = 56357644U;
static uint64_t x20 = UINT64_MAX;
static uint32_t t5 = 47U;
int32_t x26 = -1;
int64_t x28 = -1LL;
int64_t x33 = 804LL;
int64_t t9 = 557466LL;
volatile int64_t t10 = -2116LL;
uint64_t t11 = 11495366LLU;
int32_t x51 = 31;
volatile int16_t x58 = INT16_MIN;
int16_t x59 = INT16_MIN;
int8_t x64 = INT8_MAX;
volatile int64_t x76 = INT64_MAX;
static uint32_t x79 = 3U;
uint8_t x86 = UINT8_MAX;
uint64_t x90 = 144748LLU;
uint64_t t21 = 27047LLU;
static int16_t x93 = INT16_MAX;
int16_t x96 = 2;
static int64_t t23 = 42010LL;
uint8_t x114 = 10U;
uint64_t x125 = 13225994378071LLU;
int32_t x130 = -1;
uint64_t t29 = 31870960562031063LLU;
int64_t x134 = 28LL;
volatile uint32_t x146 = 947U;
static volatile int16_t x156 = -64;
int32_t x161 = INT32_MIN;
static uint8_t x165 = 32U;
int32_t x170 = 107307;
int32_t x181 = INT32_MIN;
uint16_t x183 = 2785U;
static uint64_t x186 = UINT64_MAX;
int64_t x187 = INT64_MAX;
volatile uint64_t t39 = 3030092740705LLU;
int8_t x192 = INT8_MIN;
static int8_t x193 = INT8_MAX;
uint64_t x196 = 6701775LLU;
volatile uint64_t t41 = 2168965038449553LLU;
uint8_t x199 = UINT8_MAX;
volatile int32_t t43 = 102562777;
uint64_t x209 = 17921753377550305LLU;
uint32_t x210 = 870U;
volatile uint64_t x217 = UINT64_MAX;
int64_t t49 = 230345956535405LL;
volatile int16_t x236 = 8;
volatile int16_t x238 = INT16_MAX;
int64_t x239 = INT64_MIN;
volatile int8_t x242 = INT8_MAX;
static int32_t x243 = 4570422;
uint16_t x244 = 2850U;
int8_t x255 = INT8_MIN;
int16_t x269 = -1;
static volatile int32_t x275 = -1;
int64_t x281 = INT64_MIN;
uint16_t x289 = UINT16_MAX;
uint64_t x296 = 208150077LLU;
int16_t x304 = INT16_MAX;
volatile int8_t x320 = INT8_MAX;
int64_t t68 = 53506640155LL;
uint8_t x322 = UINT8_MAX;
volatile int64_t x323 = -865539036446491563LL;
int64_t x336 = -3058247246929165LL;
uint64_t x337 = UINT64_MAX;
uint32_t x338 = 7495130U;
int32_t x339 = INT32_MAX;
static int64_t x348 = INT64_MAX;
static uint64_t x361 = 755445630441LLU;
volatile int32_t x363 = INT32_MIN;
int8_t x366 = INT8_MAX;
int32_t x374 = -1;
int32_t x379 = INT32_MAX;
static uint64_t t78 = 10LLU;
int16_t x385 = -1;
volatile uint32_t x392 = 12U;
int32_t x395 = INT32_MIN;
uint32_t x402 = 15111U;
volatile uint32_t t84 = 325052933U;
volatile uint16_t x408 = UINT16_MAX;
int16_t x414 = 14;
int64_t x431 = -1785701LL;
int8_t x432 = INT8_MAX;
volatile int64_t t91 = -294541255LL;
int64_t x439 = -1495089231LL;
volatile uint8_t x442 = 4U;
uint16_t x446 = 3U;
static uint32_t x448 = UINT32_MAX;
static volatile int64_t t96 = 55023420607618424LL;
int64_t x456 = INT64_MIN;
uint32_t x461 = UINT32_MAX;
static int8_t x462 = INT8_MIN;
volatile uint32_t t99 = 839945843U;


void f0(void) {
	int32_t x2 = INT32_MIN;
	volatile int64_t x3 = -1LL;
	static uint32_t x4 = 3163500U;

	t0 = (x1+((x2/x3)-x4));

	if (t0 != -9223372034710455660LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 57;
	int16_t x6 = -1;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 1409588LLU;

	t1 = (x5+((x6/x7)-x8));

	if (t1 != 58LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 48U;

	t2 = (x9+((x10/x11)-x12));

	if (t2 != -194392LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 31221U;
	uint8_t x16 = UINT8_MAX;

	t3 = (x13+((x14/x15)-x16));

	if (t3 != 30965U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int16_t x18 = 9933;
	int16_t x19 = INT16_MIN;
	volatile uint64_t t4 = 41404845960457692LLU;

	t4 = (x17+((x18/x19)-x20));

	if (t4 != 32768LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3U;
	static int16_t x22 = 1;
	uint32_t x23 = 5095U;
	static int32_t x24 = INT32_MAX;

	t5 = (x21+((x22/x23)-x24));

	if (t5 != 2147483652U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 17;
	static int8_t x27 = 47;
	static int64_t t6 = 1LL;

	t6 = (x25+((x26/x27)-x28));

	if (t6 != 18LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static int8_t x30 = INT8_MAX;
	static volatile int64_t x31 = INT64_MAX;
	uint16_t x32 = 11173U;
	volatile int64_t t7 = 102479447LL;

	t7 = (x29+((x30/x31)-x32));

	if (t7 != -11174LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	int8_t x35 = -1;
	uint64_t x36 = 30LLU;
	volatile uint64_t t8 = 12559LLU;

	t8 = (x33+((x34/x35)-x36));

	if (t8 != 775LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -1LL;
	volatile int8_t x38 = -1;
	volatile int8_t x39 = -9;
	int8_t x40 = INT8_MAX;

	t9 = (x37+((x38/x39)-x40));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 2;
	int64_t x42 = 978607LL;
	static int8_t x43 = 1;
	int32_t x44 = -1;

	t10 = (x41+((x42/x43)-x44));

	if (t10 != 978610LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 1492U;
	static int16_t x46 = 10604;
	volatile uint64_t x47 = 38737033698874LLU;
	static int8_t x48 = INT8_MAX;

	t11 = (x45+((x46/x47)-x48));

	if (t11 != 1365LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x52 = 0;
	int32_t t12 = -1893882;

	t12 = (x49+((x50/x51)-x52));

	if (t12 != -930) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -4;
	int8_t x54 = INT8_MIN;
	volatile int32_t x55 = -1;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 10;

	t13 = (x53+((x54/x55)-x56));

	if (t13 != 252) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 8612582542465022828LLU;
	static int32_t x60 = 34275617;
	uint64_t t14 = 7605211328LLU;

	t14 = (x57+((x58/x59)-x60));

	if (t14 != 8612582542430747212LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MAX;
	volatile int64_t x62 = 452LL;
	uint32_t x63 = 58929025U;
	volatile int64_t t15 = -1524029162071LL;

	t15 = (x61+((x62/x63)-x64));

	if (t15 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 1U;
	volatile int32_t x66 = -323878;
	int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MAX;
	volatile int64_t t16 = -4257384074251LL;

	t16 = (x65+((x66/x67)-x68));

	if (t16 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x70 = -549;
	int32_t x71 = 16328;
	static int64_t x72 = 339LL;
	volatile uint64_t t17 = 28231LLU;

	t17 = (x69+((x70/x71)-x72));

	if (t17 != 18446744073709551276LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	int16_t x74 = 571;
	uint16_t x75 = 7U;
	int64_t t18 = 764LL;

	t18 = (x73+((x74/x75)-x76));

	if (t18 != -9223372036854775727LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MIN;
	volatile uint32_t x78 = 1664775U;
	static volatile uint8_t x80 = 0U;
	static volatile int64_t t19 = 1840LL;

	t19 = (x77+((x78/x79)-x80));

	if (t19 != -9223372036854220883LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int16_t x87 = INT16_MAX;
	volatile uint8_t x88 = 28U;
	int32_t t20 = 47646784;

	t20 = (x85+((x86/x87)-x88));

	if (t20 != -32796) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = INT8_MIN;
	uint16_t x91 = 994U;
	int8_t x92 = INT8_MAX;

	t21 = (x89+((x90/x91)-x92));

	if (t21 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = 14982;
	uint64_t x95 = UINT64_MAX;
	volatile uint64_t t22 = 56LLU;

	t22 = (x93+((x94/x95)-x96));

	if (t22 != 32765LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	int64_t x102 = 1846LL;
	int64_t x103 = 3LL;
	int32_t x104 = INT32_MIN;

	t23 = (x101+((x102/x103)-x104));

	if (t23 != 615LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 10113U;
	int16_t x106 = -477;
	static int8_t x107 = INT8_MIN;
	static int8_t x108 = -1;
	static int32_t t24 = -1;

	t24 = (x105+((x106/x107)-x108));

	if (t24 != 10117) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 10;
	int16_t x110 = -13;
	int8_t x111 = INT8_MAX;
	uint64_t x112 = 41538161416226LLU;
	uint64_t t25 = 4395981325604LLU;

	t25 = (x109+((x110/x111)-x112));

	if (t25 != 18446702535548135400LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = -3;
	int32_t x115 = INT32_MIN;
	static uint32_t x116 = UINT32_MAX;
	static uint32_t t26 = 16032U;

	t26 = (x113+((x114/x115)-x116));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = INT8_MAX;
	volatile int64_t x118 = INT64_MIN;
	int16_t x119 = -123;
	static int8_t x120 = -1;
	int64_t t27 = 419128042700150357LL;

	t27 = (x117+((x118/x119)-x120));

	if (t27 != 74986764527274728LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x126 = 3135420U;
	static volatile int16_t x127 = INT16_MIN;
	static int8_t x128 = -31;
	uint64_t t28 = 57303LLU;

	t28 = (x125+((x126/x127)-x128));

	if (t28 != 13225994378102LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MAX;
	static int16_t x131 = -10;
	static uint64_t x132 = 21133184405970594LLU;

	t29 = (x129+((x130/x131)-x132));

	if (t29 != 18425610891451064669LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = 0;
	volatile uint16_t x135 = UINT16_MAX;
	volatile int32_t x136 = -1;
	volatile int64_t t30 = 2304079965LL;

	t30 = (x133+((x134/x135)-x136));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -1;
	int32_t x142 = -1;
	int64_t x143 = -1LL;
	static int8_t x144 = INT8_MIN;
	volatile int64_t t31 = 568807206LL;

	t31 = (x141+((x142/x143)-x144));

	if (t31 != 128LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 7U;
	int64_t x147 = -1LL;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t32 = 1608LLU;

	t32 = (x145+((x146/x147)-x148));

	if (t32 != 18446744073709550677LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = 101;
	int32_t x155 = 83951;
	volatile int32_t t33 = 166;

	t33 = (x153+((x154/x155)-x156));

	if (t33 != -2147483584) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x162 = 1LLU;
	static uint32_t x163 = 1753672U;
	static volatile int64_t x164 = INT64_MIN;
	volatile uint64_t t34 = 36270293026LLU;

	t34 = (x161+((x162/x163)-x164));

	if (t34 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = -5535892435LL;
	uint64_t x167 = 1525577304LLU;
	int16_t x168 = INT16_MIN;
	static uint64_t t35 = 2269LLU;

	t35 = (x165+((x166/x167)-x168));

	if (t35 != 12091681004LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -13;
	volatile int64_t x171 = 516934046276134LL;
	uint32_t x172 = 58547017U;
	int64_t t36 = 65721649693350782LL;

	t36 = (x169+((x170/x171)-x172));

	if (t36 != -58547030LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = -1LL;
	static volatile int64_t x174 = INT64_MIN;
	volatile uint64_t x175 = 7078209970206LLU;
	int64_t x176 = INT64_MIN;
	uint64_t t37 = 13011227LLU;

	t37 = (x173+((x174/x175)-x176));

	if (t37 != 9223372036856078872LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x182 = 0U;
	uint64_t x184 = 31LLU;
	static volatile uint64_t t38 = 17037299875141666LLU;

	t38 = (x181+((x182/x183)-x184));

	if (t38 != 18446744071562067937LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = -1223;
	volatile uint32_t x188 = 5461368U;

	t39 = (x185+((x186/x187)-x188));

	if (t39 != 18446744073704089027LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = 0;
	static uint64_t x190 = UINT64_MAX;
	uint16_t x191 = 16U;
	static volatile uint64_t t40 = 133738282LLU;

	t40 = (x189+((x190/x191)-x192));

	if (t40 != 1152921504606847103LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x194 = -250252334907573LL;
	int16_t x195 = INT16_MIN;

	t41 = (x193+((x194/x195)-x196));

	if (t41 != 7630393533LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = -17;
	static uint8_t x198 = 0U;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t42 = 2;

	t42 = (x197+((x198/x199)-x200));

	if (t42 != -272) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = 1;
	int16_t x202 = 43;
	int8_t x203 = INT8_MAX;
	uint16_t x204 = 127U;

	t43 = (x201+((x202/x203)-x204));

	if (t43 != -126) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -1;
	int16_t x206 = 28;
	int8_t x207 = INT8_MIN;
	static uint8_t x208 = UINT8_MAX;
	volatile int32_t t44 = -1;

	t44 = (x205+((x206/x207)-x208));

	if (t44 != -256) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x211 = INT32_MIN;
	volatile uint64_t x212 = 33484632465LLU;
	uint64_t t45 = 134717093855LLU;

	t45 = (x209+((x210/x211)-x212));

	if (t45 != 17921719892917840LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	static uint64_t t46 = 3863702431090LLU;

	t46 = (x217+((x218/x219)-x220));

	if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x221 = UINT16_MAX;
	int32_t x222 = -19;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MAX;
	int32_t t47 = -1791349;

	t47 = (x221+((x222/x223)-x224));

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x225 = 1741;
	volatile int32_t x226 = 10;
	int32_t x227 = 110542;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t48 = -10451424;

	t48 = (x225+((x226/x227)-x228));

	if (t48 != 1869) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 31U;
	volatile uint8_t x230 = 2U;
	int64_t x231 = INT64_MIN;
	volatile int32_t x232 = 44;

	t49 = (x229+((x230/x231)-x232));

	if (t49 != -13LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = 10U;
	volatile int8_t x234 = INT8_MIN;
	static uint32_t x235 = UINT32_MAX;
	uint32_t t50 = 541100U;

	t50 = (x233+((x234/x235)-x236));

	if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x240 = INT16_MAX;
	uint64_t t51 = 32128931LLU;

	t51 = (x237+((x238/x239)-x240));

	if (t51 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = INT64_MAX;
	volatile int64_t t52 = -6370420526LL;

	t52 = (x241+((x242/x243)-x244));

	if (t52 != 9223372036854772957LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = 1LL;
	uint8_t x246 = UINT8_MAX;
	static int64_t x247 = INT64_MIN;
	volatile uint8_t x248 = 1U;
	int64_t t53 = -862760LL;

	t53 = (x245+((x246/x247)-x248));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x253 = UINT32_MAX;
	static uint16_t x254 = 19U;
	int16_t x256 = -160;
	uint32_t t54 = 1262084511U;

	t54 = (x253+((x254/x255)-x256));

	if (t54 != 159U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = 1U;
	int8_t x262 = -1;
	uint8_t x263 = UINT8_MAX;
	int16_t x264 = 1505;
	int32_t t55 = -669;

	t55 = (x261+((x262/x263)-x264));

	if (t55 != -1504) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = 3LL;
	static volatile uint32_t x266 = 369U;
	volatile uint64_t x267 = 568216029LLU;
	int16_t x268 = INT16_MIN;
	static uint64_t t56 = 23LLU;

	t56 = (x265+((x266/x267)-x268));

	if (t56 != 32771LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x270 = -1LL;
	static int32_t x271 = 20712378;
	uint32_t x272 = 820123855U;
	volatile int64_t t57 = 3353961LL;

	t57 = (x269+((x270/x271)-x272));

	if (t57 != -820123856LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x273 = -10;
	volatile int8_t x274 = -1;
	uint8_t x276 = 120U;
	static int32_t t58 = 0;

	t58 = (x273+((x274/x275)-x276));

	if (t58 != -129) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x277 = 7U;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = INT64_MIN;
	volatile int64_t x280 = INT64_MAX;
	int64_t t59 = -2966LL;

	t59 = (x277+((x278/x279)-x280));

	if (t59 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x282 = INT8_MIN;
	volatile uint32_t x283 = 80809U;
	int16_t x284 = INT16_MAX;
	int64_t t60 = 5LL;

	t60 = (x281+((x282/x283)-x284));

	if (t60 != -9223372036854755426LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = INT16_MAX;
	int16_t x286 = INT16_MIN;
	volatile uint16_t x287 = UINT16_MAX;
	int64_t x288 = INT64_MAX;
	static int64_t t61 = -3787311037993728546LL;

	t61 = (x285+((x286/x287)-x288));

	if (t61 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x290 = 1166;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t62 = -4060;

	t62 = (x289+((x290/x291)-x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x293 = -117210366823LL;
	static int64_t x294 = -533569228763LL;
	uint64_t x295 = 102361LLU;
	uint64_t t63 = 2269970LLU;

	t63 = (x293+((x294/x295)-x296));

	if (t63 != 180095197031407LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x297 = 1U;
	static int16_t x298 = INT16_MIN;
	volatile uint8_t x299 = UINT8_MAX;
	int8_t x300 = 8;
	volatile int32_t t64 = -1;

	t64 = (x297+((x298/x299)-x300));

	if (t64 != -135) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = 1;
	volatile uint16_t x302 = UINT16_MAX;
	int32_t x303 = -1;
	volatile int32_t t65 = -24544291;

	t65 = (x301+((x302/x303)-x304));

	if (t65 != -98301) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MAX;
	volatile int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MIN;
	static volatile int64_t t66 = -3672022241LL;

	t66 = (x305+((x306/x307)-x308));

	if (t66 != 65535LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x313 = UINT8_MAX;
	int16_t x314 = -882;
	int32_t x315 = -1;
	volatile int16_t x316 = -30;
	int32_t t67 = 34;

	t67 = (x313+((x314/x315)-x316));

	if (t67 != 1167) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	uint32_t x319 = UINT32_MAX;

	t68 = (x317+((x318/x319)-x320));

	if (t68 != -2147516543LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x321 = 47U;
	int64_t x324 = -1LL;
	volatile int64_t t69 = -15703663688LL;

	t69 = (x321+((x322/x323)-x324));

	if (t69 != 48LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x333 = 18U;
	int32_t x334 = INT32_MAX;
	static uint32_t x335 = 64597U;
	volatile int64_t t70 = 206978508650254LL;

	t70 = (x333+((x334/x335)-x336));

	if (t70 != 3058247246962427LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x340 = INT32_MAX;
	uint64_t t71 = 43003034670781LLU;

	t71 = (x337+((x338/x339)-x340));

	if (t71 != 2147483648LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x341 = 193;
	volatile int32_t x342 = -5820;
	static int32_t x343 = -341583706;
	static int8_t x344 = 2;
	int32_t t72 = 12156;

	t72 = (x341+((x342/x343)-x344));

	if (t72 != 191) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = -49677;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 7LLU;
	uint64_t t73 = 6917711071889868LLU;

	t73 = (x345+((x346/x347)-x348));

	if (t73 != 10540996613548265533LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x358 = -1;
	int8_t x359 = INT8_MAX;
	static volatile int16_t x360 = 7;
	int32_t t74 = -36;

	t74 = (x357+((x358/x359)-x360));

	if (t74 != 65528) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x362 = 28152;
	int64_t x364 = 937865699339LL;
	static uint64_t t75 = 151333868149LLU;

	t75 = (x361+((x362/x363)-x364));

	if (t75 != 18446743891289482718LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x365 = -85;
	uint32_t x367 = 189U;
	volatile int32_t x368 = -975;
	static uint32_t t76 = 1209698U;

	t76 = (x365+((x366/x367)-x368));

	if (t76 != 890U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x373 = INT16_MAX;
	uint16_t x375 = 99U;
	int32_t x376 = -1;
	int32_t t77 = -179310;

	t77 = (x373+((x374/x375)-x376));

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int8_t x378 = -3;
	static uint8_t x380 = 15U;

	t78 = (x377+((x378/x379)-x380));

	if (t78 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x381 = -1;
	volatile int8_t x382 = INT8_MIN;
	static volatile int16_t x383 = 35;
	uint8_t x384 = 1U;
	int32_t t79 = 619466;

	t79 = (x381+((x382/x383)-x384));

	if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x386 = 1;
	int8_t x387 = INT8_MIN;
	static int16_t x388 = INT16_MIN;
	int32_t t80 = -3352;

	t80 = (x385+((x386/x387)-x388));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x389 = 53U;
	int32_t x390 = INT32_MIN;
	int8_t x391 = 4;
	static uint32_t t81 = 1055U;

	t81 = (x389+((x390/x391)-x392));

	if (t81 != 3758096425U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = -1;
	int32_t x394 = -74617380;
	uint64_t x396 = 413264455092LLU;
	static volatile uint64_t t82 = 669319604996LLU;

	t82 = (x393+((x394/x395)-x396));

	if (t82 != 18446743660445096523LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x397 = 1584U;
	static volatile uint64_t x398 = 908LLU;
	int32_t x399 = 95785092;
	uint64_t x400 = 1368LLU;
	volatile uint64_t t83 = 15351080821881209LLU;

	t83 = (x397+((x398/x399)-x400));

	if (t83 != 216LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x401 = UINT16_MAX;
	uint32_t x403 = UINT32_MAX;
	uint8_t x404 = 117U;

	t84 = (x401+((x402/x403)-x404));

	if (t84 != 65418U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x405 = 6622832244LLU;
	volatile int32_t x406 = INT32_MIN;
	uint64_t x407 = 6145982LLU;
	static volatile uint64_t t85 = 184871916468LLU;

	t85 = (x405+((x406/x407)-x408));

	if (t85 != 3008054282707LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x409 = 24U;
	int32_t x410 = -1;
	int16_t x411 = INT16_MAX;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t86 = 114209822798809LLU;

	t86 = (x409+((x410/x411)-x412));

	if (t86 != 25LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x413 = UINT8_MAX;
	int32_t x415 = -1;
	int8_t x416 = INT8_MIN;
	int32_t t87 = -15;

	t87 = (x413+((x414/x415)-x416));

	if (t87 != 369) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x417 = UINT16_MAX;
	volatile uint8_t x418 = 3U;
	volatile int64_t x419 = INT64_MAX;
	volatile int32_t x420 = INT32_MAX;
	volatile int64_t t88 = 1262560018LL;

	t88 = (x417+((x418/x419)-x420));

	if (t88 != -2147418112LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x421 = INT32_MIN;
	volatile uint64_t x422 = 531439513424727LLU;
	volatile uint64_t x423 = 455592LLU;
	int8_t x424 = INT8_MAX;
	volatile uint64_t t89 = 106546LLU;

	t89 = (x421+((x422/x423)-x424));

	if (t89 != 18446744072728549064LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x425 = INT8_MIN;
	volatile uint8_t x426 = UINT8_MAX;
	uint8_t x427 = 1U;
	static int8_t x428 = -1;
	int32_t t90 = -2160412;

	t90 = (x425+((x426/x427)-x428));

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x429 = INT32_MIN;
	uint16_t x430 = 1364U;

	t91 = (x429+((x430/x431)-x432));

	if (t91 != -2147483775LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x433 = UINT64_MAX;
	uint32_t x434 = 266318707U;
	static int8_t x435 = -1;
	uint32_t x436 = 737U;
	static uint64_t t92 = 11080LLU;

	t92 = (x433+((x434/x435)-x436));

	if (t92 != 4294966558LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = -23207LL;
	static uint32_t x438 = 1966826818U;
	static int64_t x440 = INT64_MIN;
	static volatile int64_t t93 = 14008484404952195LL;

	t93 = (x437+((x438/x439)-x440));

	if (t93 != 9223372036854752600LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = -1;
	int64_t x443 = INT64_MAX;
	uint8_t x444 = 57U;
	volatile int64_t t94 = 7023931310781LL;

	t94 = (x441+((x442/x443)-x444));

	if (t94 != -58LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x445 = -5628;
	uint32_t x447 = 1746905U;
	static uint32_t t95 = 21U;

	t95 = (x445+((x446/x447)-x448));

	if (t95 != 4294961669U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x449 = 12451;
	static int8_t x450 = 14;
	static uint32_t x451 = 3267U;
	int64_t x452 = -1LL;

	t96 = (x449+((x450/x451)-x452));

	if (t96 != 12452LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = -76856775LL;
	static uint8_t x454 = 9U;
	uint64_t x455 = 22405431919LLU;
	uint64_t t97 = 217LLU;

	t97 = (x453+((x454/x455)-x456));

	if (t97 != 9223372036777919033LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x457 = -281;
	uint64_t x458 = UINT64_MAX;
	volatile uint8_t x459 = UINT8_MAX;
	int8_t x460 = INT8_MIN;
	uint64_t t98 = 2276978551407LLU;

	t98 = (x457+((x458/x459)-x460));

	if (t98 != 72340172838076520LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x463 = 507537;
	uint16_t x464 = 2554U;

	t99 = (x461+((x462/x463)-x464));

	if (t99 != 4294964741U) { NG(); } else { ; }
	
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

