#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
uint8_t x4 = 45U;
int32_t x6 = INT32_MAX;
static uint64_t x10 = UINT64_MAX;
uint16_t x12 = 223U;
int16_t x15 = INT16_MIN;
int16_t x25 = -1;
static volatile int32_t t5 = -4;
volatile uint64_t t9 = 64554416LLU;
int32_t x51 = INT32_MIN;
uint8_t x62 = 0U;
volatile uint32_t t16 = 2U;
static int32_t x92 = INT32_MAX;
volatile int8_t x103 = INT8_MAX;
uint32_t x107 = UINT32_MAX;
static int16_t x110 = INT16_MIN;
volatile int16_t x112 = INT16_MAX;
int32_t x124 = -1;
int8_t x129 = INT8_MAX;
uint32_t x135 = 17093U;
uint16_t x137 = UINT16_MAX;
volatile int32_t t32 = 247230;
volatile uint64_t t33 = 3455063919LLU;
int32_t x145 = -2;
volatile int64_t t34 = 47LL;
volatile uint64_t x155 = UINT64_MAX;
int16_t x156 = INT16_MAX;
static int64_t x159 = INT64_MAX;
uint32_t x165 = 287268U;
volatile int16_t x169 = -1;
int32_t x174 = INT32_MIN;
int64_t x183 = INT64_MAX;
static uint8_t x186 = 57U;
uint32_t x190 = UINT32_MAX;
volatile uint64_t x191 = UINT64_MAX;
volatile uint64_t t45 = 4411289761062LLU;
int16_t x195 = INT16_MAX;
int8_t x220 = -1;
int32_t x221 = INT32_MIN;
static int32_t x229 = 123348273;
int16_t x232 = INT16_MIN;
int64_t x235 = 1757999788027068713LL;
static int8_t x240 = INT8_MAX;
uint64_t x244 = 3476981509487LLU;
uint16_t x247 = 22U;
uint64_t t58 = 2209470790785175LLU;
int8_t x251 = INT8_MIN;
int64_t x252 = INT64_MAX;
int64_t t59 = -186455535041145478LL;
uint32_t x254 = UINT32_MAX;
volatile int8_t x258 = INT8_MIN;
int64_t x259 = INT64_MIN;
static volatile int64_t x261 = INT64_MIN;
volatile uint32_t x262 = 658303501U;
int64_t x263 = -26797LL;
int8_t x268 = INT8_MAX;
int16_t x279 = -134;
static uint64_t t65 = 173397590142822LLU;
volatile uint16_t x298 = 9664U;
volatile uint64_t x306 = 556389977327172LLU;
uint64_t x309 = 6882736436224LLU;
static int8_t x320 = 3;
int32_t t74 = -117725;
int16_t x326 = INT16_MIN;
int8_t x331 = -1;
static int32_t x347 = 784;
uint32_t x359 = UINT32_MAX;
int16_t x363 = INT16_MAX;
int16_t x365 = -1;
int8_t x368 = INT8_MIN;
int64_t x377 = INT64_MIN;
static int64_t x387 = INT64_MAX;
volatile int64_t t90 = -25LL;
int8_t x389 = INT8_MAX;
uint64_t x395 = 3342628748984LLU;
int32_t x399 = INT32_MAX;
int64_t x401 = -11962260932LL;
uint64_t t94 = 115907255LLU;
volatile uint32_t t95 = 32U;
volatile int64_t x419 = 113851557LL;
static int8_t x421 = 0;
uint64_t x424 = 689127729746LLU;
uint16_t x425 = 7U;
static int8_t x426 = -3;


void f0(void) {
	static volatile int32_t x2 = 179082997;
	int64_t x3 = 2442657LL;
	int64_t t0 = 10880816380001LL;

	t0 = (x1|(x2-(x3|x4)));

	if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile int16_t x7 = -1;
	uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = UINT64_MAX;

	t1 = (x5|(x6-(x7|x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 2540;
	int16_t x11 = 4041;
	volatile uint64_t t2 = 257LLU;

	t2 = (x9|(x10-(x11|x12)));

	if (t2 != 18446744073709550060LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MIN;
	int32_t x16 = 65;
	static int32_t t3 = -1131086;

	t3 = (x13|(x14-(x15|x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MAX;
	static int8_t x22 = 41;
	volatile int64_t x23 = INT64_MAX;
	uint16_t x24 = UINT16_MAX;
	int64_t t4 = 34LL;

	t4 = (x21|(x22-(x23|x24)));

	if (t4 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = -1;
	static volatile int32_t x27 = -1;
	int16_t x28 = -191;

	t5 = (x25|(x26-(x27|x28)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	static volatile uint64_t x30 = 17LLU;
	static uint64_t x31 = 139465LLU;
	int16_t x32 = 540;
	volatile uint64_t t6 = 736343LLU;

	t6 = (x29|(x30-(x31|x32)));

	if (t6 != 18446744073709411636LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1808720;
	int8_t x34 = INT8_MIN;
	uint64_t x35 = 43632687777LLU;
	uint16_t x36 = UINT16_MAX;
	volatile uint64_t t7 = 8871477642636029LLU;

	t7 = (x33|(x34-(x35|x36)));

	if (t7 != 18446744073708371889LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	volatile uint16_t x38 = 125U;
	volatile uint32_t x39 = UINT32_MAX;
	int8_t x40 = -1;
	volatile uint32_t t8 = 10U;

	t8 = (x37|(x38-(x39|x40)));

	if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 237LLU;
	uint8_t x43 = UINT8_MAX;
	uint64_t x44 = 24048LLU;

	t9 = (x41|(x42-(x43|x44)));

	if (t9 != 18446744073709527807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	static uint64_t x46 = 967298060525354046LLU;
	int8_t x47 = 15;
	static int8_t x48 = INT8_MAX;
	volatile uint64_t t10 = 244260LLU;

	t10 = (x45|(x46-(x47|x48)));

	if (t10 != 18446744073709534143LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 1U;
	static int16_t x50 = 114;
	int8_t x52 = -8;
	volatile int32_t t11 = 0;

	t11 = (x49|(x50-(x51|x52)));

	if (t11 != 123) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 253857770LL;
	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MIN;
	volatile int8_t x56 = -1;
	static int64_t t12 = -139789668440578754LL;

	t12 = (x53|(x54-(x55|x56)));

	if (t12 != -9223372036600918037LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	uint16_t x58 = 33U;
	volatile int64_t x59 = -1771153LL;
	int8_t x60 = -3;
	volatile int64_t t13 = -3475222092446176063LL;

	t13 = (x57|(x58-(x59|x60)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	volatile int16_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	int64_t t14 = INT64_MAX;

	t14 = (x61|(x62-(x63|x64)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x65 = UINT8_MAX;
	static int64_t x66 = -1LL;
	int32_t x67 = -1;
	uint16_t x68 = 3421U;
	int64_t t15 = -1905003029742LL;

	t15 = (x65|(x66-(x67|x68)));

	if (t15 != 255LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = -1424;
	uint32_t x70 = 5931035U;
	int16_t x71 = -239;
	int8_t x72 = INT8_MIN;

	t16 = (x69|(x70-(x71|x72)));

	if (t16 != 4294966010U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	static int8_t x74 = -6;
	volatile int64_t x75 = -40047LL;
	int64_t x76 = -4040LL;
	int64_t t17 = -108854167LL;

	t17 = (x73|(x74-(x75|x76)));

	if (t17 != 3199LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 26;
	volatile int16_t x78 = -1;
	static int16_t x79 = -1;
	int16_t x80 = INT16_MIN;
	int32_t t18 = -26;

	t18 = (x77|(x78-(x79|x80)));

	if (t18 != 26) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 3;
	int32_t x82 = -700;
	volatile int16_t x83 = INT16_MIN;
	static int64_t x84 = INT64_MIN;
	static int64_t t19 = 170041LL;

	t19 = (x81|(x82-(x83|x84)));

	if (t19 != 32071LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	uint32_t x86 = 2U;
	uint64_t x87 = 48732662360LLU;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t20 = 4780LLU;

	t20 = (x85|(x86-(x87|x88)));

	if (t20 != 18446744071562068010LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	static int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MIN;
	static int32_t t21 = -1242;

	t21 = (x89|(x90-(x91|x92)));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -1;
	int32_t x98 = -1;
	volatile uint8_t x99 = 3U;
	int32_t x100 = 60368547;
	volatile int32_t t22 = -122;

	t22 = (x97|(x98-(x99|x100)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = UINT32_MAX;
	int8_t x102 = -1;
	int64_t x104 = -1LL;
	int64_t t23 = -1478847171LL;

	t23 = (x101|(x102-(x103|x104)));

	if (t23 != 4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 0LLU;
	static int32_t x106 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	uint64_t t24 = 512994089LLU;

	t24 = (x105|(x106-(x107|x108)));

	if (t24 != 2147483649LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	static uint32_t x111 = 1250812U;
	uint32_t t25 = 7864U;

	t25 = (x109|(x110-(x111|x112)));

	if (t25 != 4293656577U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -1;
	static uint32_t x114 = 232U;
	static int64_t x115 = -1LL;
	int8_t x116 = INT8_MAX;
	volatile int64_t t26 = 495875728879428793LL;

	t26 = (x113|(x114-(x115|x116)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -1;
	int32_t x118 = INT32_MIN;
	static int8_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	static volatile int32_t t27 = -18312495;

	t27 = (x117|(x118-(x119|x120)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 3U;
	int16_t x123 = INT16_MIN;
	uint64_t t28 = UINT64_MAX;

	t28 = (x121|(x122-(x123|x124)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x125 = 3013U;
	volatile int64_t x126 = -468191893470473LL;
	volatile int8_t x127 = INT8_MAX;
	int64_t x128 = -185LL;
	int64_t t29 = 11LL;

	t29 = (x125|(x126-(x127|x128)));

	if (t29 != -468191893468163LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x130 = INT8_MAX;
	static uint16_t x131 = 91U;
	static int16_t x132 = -1;
	volatile int32_t t30 = -110471;

	t30 = (x129|(x130-(x131|x132)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x133 = -1;
	int8_t x134 = INT8_MIN;
	volatile int32_t x136 = INT32_MAX;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (x133|(x134-(x135|x136)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x138 = UINT16_MAX;
	static int8_t x139 = -1;
	uint8_t x140 = 0U;

	t32 = (x137|(x138-(x139|x140)));

	if (t32 != 131071) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 38040599LLU;
	int16_t x142 = INT16_MAX;
	int64_t x143 = -1LL;
	int8_t x144 = INT8_MIN;

	t33 = (x141|(x142-(x143|x144)));

	if (t33 != 38073367LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = INT64_MAX;
	uint32_t x147 = 0U;
	int32_t x148 = -1;

	t34 = (x145|(x146-(x147|x148)));

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = 0;
	int16_t x150 = -1;
	volatile int8_t x151 = -1;
	volatile uint16_t x152 = 1601U;
	volatile int32_t t35 = 282;

	t35 = (x149|(x150-(x151|x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = 12389741384897379LL;
	int16_t x154 = 0;
	uint64_t t36 = 553406070294635452LLU;

	t36 = (x153|(x154-(x155|x156)));

	if (t36 != 12389741384897379LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 998LLU;
	int8_t x158 = 0;
	uint8_t x160 = 10U;
	uint64_t t37 = 1954795945587LLU;

	t37 = (x157|(x158-(x159|x160)));

	if (t37 != 9223372036854776807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = INT64_MAX;
	int16_t x162 = INT16_MAX;
	uint32_t x163 = 0U;
	int64_t x164 = INT64_MAX;
	static volatile int64_t t38 = 7221273LL;

	t38 = (x161|(x162-(x163|x164)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x166 = -1LL;
	uint32_t x167 = UINT32_MAX;
	uint64_t x168 = 190042LLU;
	volatile uint64_t t39 = 746222690688LLU;

	t39 = (x165|(x166-(x167|x168)));

	if (t39 != 18446744069414871588LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x170 = INT32_MIN;
	volatile int64_t x171 = INT64_MAX;
	int64_t x172 = -1LL;
	static volatile int64_t t40 = 2053960086193LL;

	t40 = (x169|(x170-(x171|x172)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 95U;
	int8_t x175 = INT8_MIN;
	static volatile uint8_t x176 = UINT8_MAX;
	volatile uint32_t t41 = 122688U;

	t41 = (x173|(x174-(x175|x176)));

	if (t41 != 2147483743U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 5U;
	uint64_t x178 = 224LLU;
	int8_t x179 = INT8_MIN;
	volatile int16_t x180 = INT16_MIN;
	uint64_t t42 = 30878386LLU;

	t42 = (x177|(x178-(x179|x180)));

	if (t42 != 357LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int8_t x182 = INT8_MIN;
	volatile uint64_t x184 = 1984629119228809616LLU;
	uint64_t t43 = UINT64_MAX;

	t43 = (x181|(x182-(x183|x184)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 40U;
	int16_t x187 = -169;
	int64_t x188 = 793LL;
	volatile int64_t t44 = -104893LL;

	t44 = (x185|(x186-(x187|x188)));

	if (t44 != 250LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile uint64_t x192 = 857LLU;

	t45 = (x189|(x190-(x191|x192)));

	if (t45 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = UINT32_MAX;
	int64_t x194 = -62199578933LL;
	volatile int16_t x196 = -1;
	static int64_t t46 = 7753LL;

	t46 = (x193|(x194-(x195|x196)));

	if (t46 != -60129542145LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x197 = 32322U;
	int16_t x198 = INT16_MIN;
	uint64_t x199 = UINT64_MAX;
	volatile uint16_t x200 = 7251U;
	uint64_t t47 = 44312554435LLU;

	t47 = (x197|(x198-(x199|x200)));

	if (t47 != 18446744073709551171LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 2323U;
	uint8_t x202 = 2U;
	int8_t x203 = 8;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t48 = -176804719;

	t48 = (x201|(x202-(x203|x204)));

	if (t48 != -237) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -99715463586846118LL;
	volatile int32_t x206 = 33064622;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = -199LL;
	volatile uint64_t t49 = 1675534666065197233LLU;

	t49 = (x205|(x206-(x207|x208)));

	if (t49 != 18347028610151018239LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = INT64_MAX;
	int8_t x214 = 3;
	int32_t x215 = -7;
	static int16_t x216 = -557;
	volatile int64_t t50 = INT64_MAX;

	t50 = (x213|(x214-(x215|x216)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = 3;
	uint32_t t51 = UINT32_MAX;

	t51 = (x217|(x218-(x219|x220)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x222 = -29LL;
	int8_t x223 = INT8_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	int64_t t52 = 2518043016845LL;

	t52 = (x221|(x222-(x223|x224)));

	if (t52 != -28LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = 3303926LL;
	volatile uint32_t x226 = 413951728U;
	volatile uint16_t x227 = 1354U;
	static int32_t x228 = INT32_MAX;
	static volatile int64_t t53 = -118LL;

	t53 = (x225|(x226-(x227|x228)));

	if (t53 != 2562617335LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x230 = -1;
	int16_t x231 = 1064;
	volatile int32_t t54 = -3;

	t54 = (x229|(x230-(x231|x232)));

	if (t54 != 123371511) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = UINT64_MAX;
	int16_t x234 = INT16_MAX;
	volatile uint32_t x236 = UINT32_MAX;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x233|(x234-(x235|x236)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = UINT8_MAX;
	int16_t x238 = -4577;
	volatile uint16_t x239 = 100U;
	int32_t t56 = 339216;

	t56 = (x237|(x238-(x239|x240)));

	if (t56 != -4609) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = 551988136643LL;
	int8_t x242 = -1;
	int16_t x243 = INT16_MIN;
	uint64_t t57 = 6512LLU;

	t57 = (x241|(x242-(x243|x244)));

	if (t57 != 551988140755LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x245 = 578;
	uint64_t x246 = 88LLU;
	int16_t x248 = INT16_MIN;

	t58 = (x245|(x246-(x247|x248)));

	if (t58 != 33346LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x249 = UINT32_MAX;
	static int32_t x250 = INT32_MAX;

	t59 = (x249|(x250-(x251|x252)));

	if (t59 != 4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x253 = INT16_MAX;
	int64_t x255 = INT64_MAX;
	int32_t x256 = INT32_MIN;
	int64_t t60 = 50LL;

	t60 = (x253|(x254-(x255|x256)));

	if (t60 != 4295000063LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = 118U;
	uint32_t x260 = UINT32_MAX;
	volatile int64_t t61 = 701258617323142922LL;

	t61 = (x257|(x258-(x259|x260)));

	if (t61 != 9223372032559808503LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x264 = INT16_MAX;
	int64_t t62 = -123431LL;

	t62 = (x261|(x262-(x263|x264)));

	if (t62 != -9223372036196472306LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = 259808302844278LLU;
	static int32_t x266 = -1;
	int16_t x267 = -1;
	uint64_t t63 = 172660019275352LLU;

	t63 = (x265|(x266-(x267|x268)));

	if (t63 != 259808302844278LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = -126744572697LL;
	static volatile uint64_t x278 = 6120541575012002134LLU;
	int64_t x280 = INT64_MAX;
	volatile uint64_t t64 = 587414791291303940LLU;

	t64 = (x277|(x278-(x279|x280)));

	if (t64 != 18446743947008011767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x281 = 179515285596LLU;
	static int8_t x282 = -1;
	uint16_t x283 = UINT16_MAX;
	volatile int8_t x284 = -1;

	t65 = (x281|(x282-(x283|x284)));

	if (t65 != 179515285596LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x285 = 41U;
	static uint64_t x286 = 32634544995LLU;
	volatile int64_t x287 = INT64_MAX;
	int32_t x288 = INT32_MIN;
	volatile uint64_t t66 = 123881LLU;

	t66 = (x285|(x286-(x287|x288)));

	if (t66 != 32634545005LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x289 = INT64_MIN;
	volatile int32_t x290 = INT32_MIN;
	int64_t x291 = -1LL;
	volatile int64_t x292 = INT64_MAX;
	int64_t t67 = 1905861529LL;

	t67 = (x289|(x290-(x291|x292)));

	if (t67 != -2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = INT8_MIN;
	static int32_t x294 = INT32_MIN;
	volatile int64_t x295 = 5938441452005LL;
	int64_t x296 = -1LL;
	static int64_t t68 = 2214LL;

	t68 = (x293|(x294-(x295|x296)));

	if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x297 = -7;
	int64_t x299 = -1LL;
	static int32_t x300 = INT32_MAX;
	volatile int64_t t69 = 8677199LL;

	t69 = (x297|(x298-(x299|x300)));

	if (t69 != -7LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = INT8_MIN;
	static int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	int8_t x304 = 17;
	volatile int64_t t70 = -513706851003449488LL;

	t70 = (x301|(x302-(x303|x304)));

	if (t70 != -17LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x305 = 41629LLU;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = UINT8_MAX;
	volatile uint64_t t71 = 2281LLU;

	t71 = (x305|(x306-(x307|x308)));

	if (t71 != 556392124819421LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x310 = UINT32_MAX;
	static volatile int8_t x311 = 1;
	static uint32_t x312 = 43669055U;
	volatile uint64_t t72 = 6589025159983250LLU;

	t72 = (x309|(x310-(x311|x312)));

	if (t72 != 6884823137728LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x313 = INT8_MAX;
	int16_t x314 = 0;
	int32_t x315 = INT32_MAX;
	volatile int16_t x316 = INT16_MAX;
	volatile int32_t t73 = 738;

	t73 = (x313|(x314-(x315|x316)));

	if (t73 != -2147483521) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = 1U;
	static volatile int32_t x318 = -1;
	int16_t x319 = -1;

	t74 = (x317|(x318-(x319|x320)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x321 = 2454810U;
	static uint16_t x322 = 0U;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile uint32_t t75 = 21841U;

	t75 = (x321|(x322-(x323|x324)));

	if (t75 != 2147483419U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = -1LL;
	static int64_t x327 = -4767LL;
	int64_t x328 = INT64_MAX;
	int64_t t76 = -749428LL;

	t76 = (x325|(x326-(x327|x328)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = INT8_MIN;
	int8_t x330 = -6;
	static int16_t x332 = -2;
	volatile int32_t t77 = -648858050;

	t77 = (x329|(x330-(x331|x332)));

	if (t77 != -5) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	uint64_t x334 = UINT64_MAX;
	static int32_t x335 = INT32_MIN;
	volatile int8_t x336 = -1;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x333|(x334-(x335|x336)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = INT8_MIN;
	static int16_t x342 = -3605;
	int16_t x343 = INT16_MAX;
	int16_t x344 = -1;
	volatile int32_t t79 = -2331644;

	t79 = (x341|(x342-(x343|x344)));

	if (t79 != -20) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x346 = 30U;
	int8_t x348 = 0;
	int32_t t80 = 878283;

	t80 = (x345|(x346-(x347|x348)));

	if (t80 != -754) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x349 = INT8_MIN;
	uint8_t x350 = 63U;
	volatile int16_t x351 = INT16_MIN;
	int8_t x352 = -25;
	static int32_t t81 = -24624;

	t81 = (x349|(x350-(x351|x352)));

	if (t81 != -40) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = -1;
	volatile uint32_t x355 = 714437U;
	uint32_t x356 = 1733660960U;
	static uint32_t t82 = 1128U;

	t82 = (x353|(x354-(x355|x356)));

	if (t82 != 4294967194U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = INT16_MAX;
	int32_t x358 = -39324825;
	int8_t x360 = -7;
	volatile uint32_t t83 = 604656U;

	t83 = (x357|(x358-(x359|x360)));

	if (t83 != 4255645695U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = 256316995;
	static int8_t x362 = INT8_MIN;
	int32_t x364 = -28940;
	int32_t t84 = 7743;

	t84 = (x361|(x362-(x363|x364)));

	if (t84 != -61) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	volatile int32_t t85 = -22407484;

	t85 = (x365|(x366-(x367|x368)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x369 = UINT32_MAX;
	static int32_t x370 = -1;
	uint32_t x371 = 1859989514U;
	volatile uint16_t x372 = 5U;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x369|(x370-(x371|x372)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = 11175LL;
	uint64_t x374 = 563525531286068689LLU;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	uint64_t t87 = 324164756LLU;

	t87 = (x373|(x374-(x375|x376)));

	if (t87 != 563525531286110199LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x378 = INT32_MAX;
	uint16_t x379 = UINT16_MAX;
	static uint64_t x380 = 32334671956172497LLU;
	static volatile uint64_t t88 = 11LLU;

	t88 = (x377|(x378-(x379|x380)));

	if (t88 != 18414409403900821504LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x381 = -2330523833LL;
	int16_t x382 = INT16_MIN;
	int16_t x383 = 0;
	int16_t x384 = INT16_MIN;
	volatile int64_t t89 = 477719LL;

	t89 = (x381|(x382-(x383|x384)));

	if (t89 != -2330523833LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x385 = INT32_MIN;
	int64_t x386 = -1LL;
	volatile int64_t x388 = INT64_MIN;

	t90 = (x385|(x386-(x387|x388)));

	if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x390 = 22LLU;
	int32_t x391 = -1;
	static uint32_t x392 = 1665U;
	volatile uint64_t t91 = 0LLU;

	t91 = (x389|(x390-(x391|x392)));

	if (t91 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = 11;
	volatile uint8_t x396 = 3U;
	static volatile uint64_t t92 = 105865459145250885LLU;

	t92 = (x393|(x394-(x395|x396)));

	if (t92 != 18446740731080802640LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x397 = 205U;
	int16_t x398 = INT16_MIN;
	static uint32_t x400 = 102857U;
	uint32_t t93 = 1949617U;

	t93 = (x397|(x398-(x399|x400)));

	if (t93 != 2147451085U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x402 = -1;
	uint64_t x403 = 8888153080279016LLU;
	static uint8_t x404 = UINT8_MAX;

	t94 = (x401|(x402-(x403|x404)));

	if (t94 != 18446744064029028924LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = INT8_MIN;
	int8_t x406 = 5;
	uint32_t x407 = 6658003U;
	volatile uint8_t x408 = UINT8_MAX;

	t95 = (x405|(x406-(x407|x408)));

	if (t95 != 4294967174U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = INT64_MAX;
	int8_t x410 = 9;
	volatile int16_t x411 = -1;
	int8_t x412 = -6;
	int64_t t96 = INT64_MAX;

	t96 = (x409|(x410-(x411|x412)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x417 = UINT32_MAX;
	uint8_t x418 = 9U;
	int32_t x420 = INT32_MIN;
	volatile int64_t t97 = -60485561784864982LL;

	t97 = (x417|(x418-(x419|x420)));

	if (t97 != 4294967295LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x422 = INT64_MIN;
	int8_t x423 = -1;
	static volatile uint64_t t98 = 121LLU;

	t98 = (x421|(x422-(x423|x424)));

	if (t98 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x427 = INT8_MIN;
	uint32_t x428 = 0U;
	uint32_t t99 = 249211U;

	t99 = (x425|(x426-(x427|x428)));

	if (t99 != 127U) { NG(); } else { ; }
	
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

