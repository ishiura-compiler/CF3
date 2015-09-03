#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x8 = 10;
uint8_t x11 = 6U;
uint16_t x22 = 1191U;
int32_t t4 = 2110050;
int8_t x25 = -1;
int16_t x30 = -6;
int32_t t6 = -20901280;
int32_t x34 = -313889;
int64_t x36 = INT64_MIN;
int64_t x40 = INT64_MAX;
static int64_t x42 = -1LL;
volatile uint64_t t9 = 648965013LLU;
int64_t x45 = INT64_MIN;
volatile int64_t x53 = INT64_MAX;
int32_t x54 = INT32_MAX;
volatile int64_t x56 = INT64_MIN;
volatile int32_t t14 = -40;
static int8_t x66 = -1;
int64_t t15 = 425781878514910259LL;
int64_t x73 = -770609680790LL;
uint32_t x77 = 3U;
int32_t x79 = INT32_MAX;
volatile uint16_t x81 = 417U;
uint32_t x89 = 158285349U;
uint16_t x92 = UINT16_MAX;
static volatile uint32_t x98 = 54U;
int16_t x105 = -1649;
volatile uint8_t x111 = UINT8_MAX;
uint32_t t28 = 1962152191U;
int32_t t29 = 30;
int64_t x129 = 7550LL;
int64_t x131 = INT64_MAX;
volatile int16_t x138 = INT16_MIN;
uint64_t x140 = UINT64_MAX;
uint64_t t32 = 680LLU;
int8_t x153 = -1;
uint64_t x154 = UINT64_MAX;
static uint32_t x156 = 397218714U;
int64_t t37 = 5657413LL;
uint32_t x166 = 103982774U;
int64_t x167 = -1LL;
volatile uint8_t x171 = 17U;
static int64_t x175 = -1LL;
uint64_t x176 = UINT64_MAX;
int32_t x179 = -489095;
static volatile uint64_t t42 = 257181558LLU;
volatile uint16_t x198 = 9U;
static volatile uint32_t t46 = 691U;
int8_t x201 = INT8_MIN;
volatile int16_t x206 = 0;
volatile uint64_t t48 = 1607124398630560841LLU;
static int64_t x212 = 3602272097410LL;
int64_t x221 = 2819133155998832797LL;
static int64_t x223 = 48589754516LL;
volatile int32_t x226 = INT32_MIN;
static int8_t x231 = INT8_MIN;
volatile int64_t x232 = INT64_MIN;
volatile int8_t x233 = INT8_MIN;
static int8_t x236 = -1;
uint64_t t56 = 7LLU;
int32_t x243 = INT32_MAX;
int32_t t59 = -49056;
uint32_t x254 = 113374U;
uint16_t x255 = 6862U;
volatile int8_t x256 = -1;
uint64_t x258 = 25929LLU;
volatile int32_t x260 = INT32_MAX;
uint64_t t61 = 216342161209424240LLU;
int64_t t62 = -11LL;
int32_t x282 = INT32_MIN;
uint64_t x285 = 65586134LLU;
volatile uint64_t t68 = 80925282109LLU;
int8_t x290 = INT8_MAX;
int8_t x292 = -6;
static int32_t t69 = -1120;
uint64_t x293 = 492865830726LLU;
uint16_t x298 = UINT16_MAX;
uint8_t x301 = 6U;
static int32_t x303 = 248538;
static uint32_t x304 = 10U;
static uint32_t x313 = 32U;
int8_t x324 = INT8_MIN;
volatile int32_t x327 = INT32_MIN;
uint64_t t77 = 68365856396950274LLU;
static uint64_t x336 = 1059088733979842839LLU;
uint64_t t79 = 4755169656127LLU;
uint8_t x339 = UINT8_MAX;
volatile uint32_t t80 = 9U;
uint16_t x342 = 155U;
int16_t x345 = -6050;
int32_t x364 = 24;
static volatile uint64_t t86 = 45424539129LLU;
uint8_t x368 = UINT8_MAX;
static uint32_t x371 = 25187006U;
uint64_t t88 = 6834031985777LLU;
static int32_t t90 = 1;
int32_t x381 = -50;
int64_t t92 = 42LL;
volatile int8_t x395 = 0;
int8_t x396 = -1;
int32_t x399 = -15558047;


void f0(void) {
	static volatile int16_t x1 = -117;
	int64_t x2 = INT64_MIN;
	volatile uint32_t x3 = 2U;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 5169971988511968LL;

	t0 = (x1&(x2+(x3%x4)));

	if (t0 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 896579786;
	uint8_t x6 = 4U;
	volatile int32_t x7 = -1;
	int32_t t1 = -660191;

	t1 = (x5&(x6+(x7%x8)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 21U;
	volatile int64_t x10 = 10434LL;
	int8_t x12 = 1;
	int64_t t2 = -40278450904LL;

	t2 = (x9&(x10+(x11%x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	uint64_t x18 = 603775594034LLU;
	static int8_t x19 = 54;
	volatile int8_t x20 = -14;
	uint64_t t3 = 12868LLU;

	t3 = (x17&(x18+(x19%x20)));

	if (t3 != 603775565824LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	int32_t x23 = 38400;
	static volatile int32_t x24 = INT32_MAX;

	t4 = (x21&(x22+(x23%x24)));

	if (t4 != 39591) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = -265922;

	t5 = (x25&(x26+(x27%x28)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 1;
	volatile int32_t x31 = 816;
	int8_t x32 = INT8_MIN;

	t6 = (x29&(x30+(x31%x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int16_t x35 = -2;
	int64_t t7 = -144027995809LL;

	t7 = (x33&(x34+(x35%x36)));

	if (t7 != 13789LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 0;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = INT16_MAX;
	volatile int64_t t8 = 14838456004819LL;

	t8 = (x37&(x38+(x39%x40)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 0U;
	uint8_t x43 = 10U;
	static uint64_t x44 = 1206648072204834LLU;

	t9 = (x41&(x42+(x43%x44)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MIN;
	int16_t x47 = 2;
	int32_t x48 = -280704;
	int64_t t10 = INT64_MIN;

	t10 = (x45&(x46+(x47%x48)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MIN;
	volatile uint16_t x51 = 8695U;
	int16_t x52 = -1;
	volatile uint64_t t11 = 3LLU;

	t11 = (x49&(x50+(x51%x52)));

	if (t11 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x55 = INT16_MAX;
	int64_t t12 = 669226427940567153LL;

	t12 = (x53&(x54+(x55%x56)));

	if (t12 != 2147516414LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MIN;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 8U;
	int32_t x60 = -91942;
	int32_t t13 = -52234;

	t13 = (x57&(x58+(x59%x60)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MIN;
	static int32_t x63 = INT32_MIN;
	int16_t x64 = 362;

	t14 = (x61&(x62+(x63%x64)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MAX;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MAX;

	t15 = (x65&(x66+(x67%x68)));

	if (t15 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	static uint32_t x70 = UINT32_MAX;
	int16_t x71 = -1;
	int64_t x72 = -1899660864LL;
	int64_t t16 = -6610433431LL;

	t16 = (x69&(x70+(x71%x72)));

	if (t16 != 254LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x74 = 58;
	uint32_t x75 = 3522468U;
	int8_t x76 = 10;
	int64_t t17 = 9411274778LL;

	t17 = (x73&(x74+(x75%x76)));

	if (t17 != 66LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x78 = 25;
	int8_t x80 = -1;
	volatile uint32_t t18 = 34733062U;

	t18 = (x77&(x78+(x79%x80)));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = INT16_MIN;
	static volatile int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	volatile int32_t t19 = -184;

	t19 = (x81&(x82+(x83%x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = INT64_MIN;
	static int32_t x86 = -14;
	static volatile int16_t x87 = -1;
	int32_t x88 = -1411590;
	int64_t t20 = INT64_MIN;

	t20 = (x85&(x86+(x87%x88)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x90 = -1;
	int64_t x91 = INT64_MIN;
	int64_t t21 = -54296144445684LL;

	t21 = (x89&(x90+(x91%x92)));

	if (t21 != 158285349LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MAX;
	int8_t x94 = -1;
	int8_t x95 = -11;
	int8_t x96 = 1;
	int64_t t22 = INT64_MAX;

	t22 = (x93&(x94+(x95%x96)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	uint64_t x99 = 531673210217LLU;
	int8_t x100 = INT8_MIN;
	uint64_t t23 = 1962499062194414LLU;

	t23 = (x97&(x98+(x99%x100)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = 113237002U;
	volatile int32_t x104 = -647470;
	int64_t t24 = -54894305799LL;

	t24 = (x101&(x102+(x103%x104)));

	if (t24 != 113204234LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = INT32_MIN;
	volatile uint16_t x107 = 9245U;
	int16_t x108 = -1;
	int32_t t25 = INT32_MIN;

	t25 = (x105&(x106+(x107%x108)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = -2071814623040897LL;
	uint64_t x112 = 2258LLU;
	volatile uint64_t t26 = 90167086LLU;

	t26 = (x109&(x110+(x111%x112)));

	if (t26 != 18444672258795372544LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 13U;
	static uint16_t x114 = 3U;
	static int16_t x115 = -1;
	static int16_t x116 = -1;
	volatile uint32_t t27 = 1U;

	t27 = (x113&(x114+(x115%x116)));

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -2;
	uint32_t x118 = 103720U;
	uint8_t x119 = 121U;
	static uint32_t x120 = 2U;

	t28 = (x117&(x118+(x119%x120)));

	if (t28 != 103720U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = -582;
	int8_t x126 = -1;
	uint8_t x127 = 0U;
	static int16_t x128 = INT16_MIN;

	t29 = (x125&(x126+(x127%x128)));

	if (t29 != -582) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = UINT8_MAX;
	static int8_t x132 = INT8_MIN;
	int64_t t30 = 1138829995037457LL;

	t30 = (x129&(x130+(x131%x132)));

	if (t30 != 382LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x133 = -1;
	volatile uint32_t x134 = UINT32_MAX;
	int64_t x135 = INT64_MAX;
	volatile uint64_t x136 = 8055588313977041LLU;
	volatile uint64_t t31 = 220363629408819LLU;

	t31 = (x133&(x134+(x135%x136)));

	if (t31 != 7779009960008198LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = 5;
	int8_t x139 = INT8_MAX;

	t32 = (x137&(x138+(x139%x140)));

	if (t32 != 5LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	static volatile int64_t x142 = -430011725773296855LL;
	static int16_t x143 = -1;
	static uint32_t x144 = 3337981U;
	static volatile int64_t t33 = -85062LL;

	t33 = (x141&(x142+(x143%x144)));

	if (t33 != -430011725770981376LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 3694704447332600LLU;
	static uint16_t x150 = UINT16_MAX;
	uint8_t x151 = 1U;
	static int16_t x152 = INT16_MAX;
	uint64_t t34 = 445350796595422241LLU;

	t34 = (x149&(x150+(x151%x152)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x155 = UINT32_MAX;
	volatile uint64_t t35 = 70713899743276002LLU;

	t35 = (x153&(x154+(x155%x156)));

	if (t35 != 322780154LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 0U;
	int32_t x158 = -1;
	volatile uint16_t x159 = 5594U;
	uint64_t x160 = 423LLU;
	volatile uint64_t t36 = 705LLU;

	t36 = (x157&(x158+(x159%x160)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 12U;
	volatile int64_t x162 = INT64_MAX;
	volatile int16_t x163 = -1;
	int8_t x164 = 2;

	t37 = (x161&(x162+(x163%x164)));

	if (t37 != 12LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x165 = 212U;
	int8_t x168 = INT8_MIN;
	volatile int64_t t38 = 11097028934LL;

	t38 = (x165&(x166+(x167%x168)));

	if (t38 != 148LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MIN;
	int8_t x172 = -39;
	static volatile int32_t t39 = 2788157;

	t39 = (x169&(x170+(x171%x172)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = INT32_MAX;
	volatile uint8_t x174 = 85U;
	static uint64_t t40 = 74616LLU;

	t40 = (x173&(x174+(x175%x176)));

	if (t40 != 85LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = INT64_MIN;
	static uint32_t x178 = 63420U;
	uint32_t x180 = 8328246U;
	static int64_t t41 = 32087758944LL;

	t41 = (x177&(x178+(x179%x180)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 296608U;
	uint8_t x182 = 0U;
	uint64_t x183 = UINT64_MAX;
	volatile uint8_t x184 = 6U;

	t42 = (x181&(x182+(x183%x184)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x185 = 682U;
	static int16_t x186 = INT16_MIN;
	uint8_t x187 = 28U;
	volatile int64_t x188 = INT64_MIN;
	volatile int64_t t43 = -14474132LL;

	t43 = (x185&(x186+(x187%x188)));

	if (t43 != 8LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = UINT64_MAX;
	uint8_t x190 = 29U;
	uint32_t x191 = 3U;
	volatile int8_t x192 = INT8_MAX;
	static uint64_t t44 = 95518588LLU;

	t44 = (x189&(x190+(x191%x192)));

	if (t44 != 32LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = UINT32_MAX;
	uint8_t x194 = 3U;
	volatile int8_t x195 = -62;
	static int16_t x196 = INT16_MIN;
	volatile uint32_t t45 = 1518091240U;

	t45 = (x193&(x194+(x195%x196)));

	if (t45 != 4294967237U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 792819764U;
	int16_t x199 = 443;
	int16_t x200 = 66;

	t46 = (x197&(x198+(x199%x200)));

	if (t46 != 48U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x202 = 948U;
	volatile int8_t x203 = 1;
	int8_t x204 = INT8_MIN;
	volatile int32_t t47 = -9781315;

	t47 = (x201&(x202+(x203%x204)));

	if (t47 != 896) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = UINT64_MAX;
	static int64_t x207 = -56867297LL;
	uint64_t x208 = 546271088LLU;

	t48 = (x205&(x206+(x207%x208)));

	if (t48 != 481825423LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x209 = 106616104875355LLU;
	int64_t x210 = -1507794193590227215LL;
	static volatile int64_t x211 = INT64_MIN;
	static volatile uint64_t t49 = 3333649404812693LLU;

	t49 = (x209&(x210+(x211%x212)));

	if (t49 != 35744614323531LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = -352717528LL;
	volatile int64_t x215 = 76383080542804LL;
	static volatile uint16_t x216 = 1U;
	volatile int64_t t50 = 0LL;

	t50 = (x213&(x214+(x215%x216)));

	if (t50 != 1794766120LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = 17718LLU;
	int64_t x218 = INT64_MAX;
	int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MAX;
	uint64_t t51 = 10LLU;

	t51 = (x217&(x218+(x219%x220)));

	if (t51 != 17718LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x222 = INT32_MIN;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t52 = 527985542LLU;

	t52 = (x221&(x222+(x223%x224)));

	if (t52 != 44023681172LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MIN;
	static int16_t x227 = INT16_MIN;
	static int64_t x228 = INT64_MIN;
	int64_t t53 = -6896181LL;

	t53 = (x225&(x226+(x227%x228)));

	if (t53 != -4294967296LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x229 = UINT64_MAX;
	volatile int8_t x230 = INT8_MIN;
	volatile uint64_t t54 = 23561LLU;

	t54 = (x229&(x230+(x231%x232)));

	if (t54 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x234 = 8713U;
	volatile int64_t x235 = 339958197673LL;
	volatile int64_t t55 = 8394893506LL;

	t55 = (x233&(x234+(x235%x236)));

	if (t55 != 8704LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -21;
	volatile int64_t x238 = -5982341LL;
	uint64_t x239 = 85LLU;
	uint64_t x240 = 7192LLU;

	t56 = (x237&(x238+(x239%x240)));

	if (t56 != 18446744073703569344LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -1;
	static uint8_t x242 = 0U;
	uint32_t x244 = 2177U;
	volatile uint32_t t57 = 56478599U;

	t57 = (x241&(x242+(x243%x244)));

	if (t57 != 1590U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = 3453153;
	uint32_t x246 = UINT32_MAX;
	int8_t x247 = INT8_MIN;
	volatile uint8_t x248 = 2U;
	uint32_t t58 = 240475838U;

	t58 = (x245&(x246+(x247%x248)));

	if (t58 != 3453153U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = -1;
	int16_t x251 = INT16_MIN;
	static uint16_t x252 = 561U;

	t59 = (x249&(x250+(x251%x252)));

	if (t59 != -256) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x253 = 4069839LL;
	volatile int64_t t60 = 1LL;

	t60 = (x253&(x254+(x255%x256)));

	if (t60 != 6350LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x257 = 6486U;
	volatile int64_t x259 = INT64_MIN;

	t61 = (x257&(x258+(x259%x260)));

	if (t61 != 326LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MAX;
	uint32_t x262 = 9081U;
	int8_t x263 = INT8_MIN;
	volatile int32_t x264 = INT32_MIN;

	t62 = (x261&(x262+(x263%x264)));

	if (t62 != 8953LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x265 = -12;
	static uint16_t x266 = 23798U;
	static uint8_t x267 = 96U;
	int64_t x268 = INT64_MIN;
	int64_t t63 = -634959017822179023LL;

	t63 = (x265&(x266+(x267%x268)));

	if (t63 != 23892LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = -161;
	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MAX;
	uint8_t x272 = 20U;
	static volatile int32_t t64 = 18835;

	t64 = (x269&(x270+(x271%x272)));

	if (t64 != -249) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = 17U;
	int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MAX;
	int16_t x276 = INT16_MIN;
	int32_t t65 = 0;

	t65 = (x273&(x274+(x275%x276)));

	if (t65 != 17) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = 185U;
	volatile uint32_t x278 = 161U;
	int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	static volatile int64_t t66 = 20LL;

	t66 = (x277&(x278+(x279%x280)));

	if (t66 != 161LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = -3537975471821LL;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	uint64_t t67 = 351LLU;

	t67 = (x281&(x282+(x283%x284)));

	if (t67 != 18446740535734075392LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x286 = INT8_MAX;
	uint64_t x287 = 5494699267236641LLU;
	volatile int64_t x288 = -1LL;

	t68 = (x285&(x286+(x287%x288)));

	if (t68 != 32015232LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x289 = 1U;
	uint16_t x291 = 195U;

	t69 = (x289&(x290+(x291%x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x294 = 3955044193847365LLU;
	uint16_t x295 = 1068U;
	volatile int64_t x296 = INT64_MIN;
	volatile uint64_t t70 = 29LLU;

	t70 = (x293&(x294+(x295%x296)));

	if (t70 != 78384630848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 1736108652971293468LLU;
	int64_t x299 = INT64_MIN;
	int32_t x300 = -1;
	uint64_t t71 = 5977790090878196201LLU;

	t71 = (x297&(x298+(x299%x300)));

	if (t71 != 64284LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x302 = INT8_MAX;
	static volatile uint32_t t72 = 389750610U;

	t72 = (x301&(x302+(x303%x304)));

	if (t72 != 6U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = 711926009769964808LL;
	int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MIN;
	volatile uint32_t x312 = 3263U;
	int64_t t73 = 1LL;

	t73 = (x309&(x310+(x311%x312)));

	if (t73 != 264LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x314 = INT32_MIN;
	volatile int32_t x315 = -2080634;
	int64_t x316 = INT64_MIN;
	int64_t t74 = 294209429224027018LL;

	t74 = (x313&(x314+(x315%x316)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = 1916;
	int8_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	int32_t t75 = -1;

	t75 = (x317&(x318+(x319%x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 5LLU;
	int8_t x322 = -13;
	int8_t x323 = INT8_MIN;
	volatile uint64_t t76 = 1LLU;

	t76 = (x321&(x322+(x323%x324)));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MIN;
	uint64_t x326 = 279866929909933LLU;
	int32_t x328 = -1;

	t77 = (x325&(x326+(x327%x328)));

	if (t77 != 279866929909888LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MAX;
	int16_t x331 = -1;
	uint32_t x332 = 1741318U;
	uint32_t t78 = 444U;

	t78 = (x329&(x330+(x331%x332)));

	if (t78 != 877234U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x333 = 15328995U;
	static int64_t x334 = -1LL;
	int8_t x335 = -1;

	t79 = (x333&(x334+(x335%x336)));

	if (t79 != 11125859LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x337 = 6;
	static uint32_t x338 = 178471190U;
	int8_t x340 = -1;

	t80 = (x337&(x338+(x339%x340)));

	if (t80 != 6U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = INT64_MIN;
	uint8_t x343 = 19U;
	static uint32_t x344 = 1U;
	int64_t t81 = 73136LL;

	t81 = (x341&(x342+(x343%x344)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = 223;
	int32_t x347 = INT32_MIN;
	static int64_t x348 = -1LL;
	int64_t t82 = 277843272LL;

	t82 = (x345&(x346+(x347%x348)));

	if (t82 != 94LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x349 = 23;
	int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	volatile uint8_t x352 = 1U;
	int32_t t83 = 238;

	t83 = (x349&(x350+(x351%x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x353 = -1;
	int64_t x354 = -1920680785182664LL;
	uint8_t x355 = 50U;
	int64_t x356 = -121497167977107258LL;
	volatile int64_t t84 = -4703476489875LL;

	t84 = (x353&(x354+(x355%x356)));

	if (t84 != -1920680785182614LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 9U;
	int8_t x358 = -1;
	int64_t x359 = INT64_MAX;
	int32_t x360 = -1;
	static int64_t t85 = 115131LL;

	t85 = (x357&(x358+(x359%x360)));

	if (t85 != 9LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x361 = 2221551671LLU;
	int64_t x362 = 737934LL;
	static uint8_t x363 = 7U;

	t86 = (x361&(x362+(x363%x364)));

	if (t86 != 655381LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -1;
	int16_t x366 = -1;
	int16_t x367 = INT16_MIN;
	volatile int32_t t87 = 10068154;

	t87 = (x365&(x366+(x367%x368)));

	if (t87 != -129) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x369 = 5765LLU;
	int16_t x370 = -1;
	uint32_t x372 = 5163U;

	t88 = (x369&(x370+(x371%x372)));

	if (t88 != 1537LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = INT64_MIN;
	uint8_t x374 = UINT8_MAX;
	int16_t x375 = INT16_MAX;
	int64_t x376 = 977LL;
	volatile int64_t t89 = -1959149249068056LL;

	t89 = (x373&(x374+(x375%x376)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = 12792U;
	static int8_t x378 = 62;
	uint16_t x379 = 97U;
	int8_t x380 = INT8_MAX;

	t90 = (x377&(x378+(x379%x380)));

	if (t90 != 152) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x382 = 699LLU;
	volatile int32_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	volatile uint64_t t91 = 194907LLU;

	t91 = (x381&(x382+(x383%x384)));

	if (t91 != 650LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = UINT16_MAX;
	volatile uint16_t x386 = UINT16_MAX;
	int64_t x387 = INT64_MAX;
	int16_t x388 = 1;

	t92 = (x385&(x386+(x387%x388)));

	if (t92 != 65535LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x389 = 200220652456924LLU;
	static int32_t x390 = -1;
	volatile int64_t x391 = INT64_MAX;
	int8_t x392 = INT8_MIN;
	uint64_t t93 = 4800840856529523865LLU;

	t93 = (x389&(x390+(x391%x392)));

	if (t93 != 92LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int32_t t94 = -2;

	t94 = (x393&(x394+(x395%x396)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -6763202;
	uint32_t x398 = 37123263U;
	volatile int8_t x400 = -2;
	uint32_t t95 = 10053210U;

	t95 = (x397&(x398+(x399%x400)));

	if (t95 != 34620478U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x401 = 4LLU;
	int16_t x402 = INT16_MIN;
	static int64_t x403 = INT64_MAX;
	int32_t x404 = INT32_MIN;
	volatile uint64_t t96 = 12369LLU;

	t96 = (x401&(x402+(x403%x404)));

	if (t96 != 4LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x405 = 89U;
	uint8_t x406 = 5U;
	volatile int64_t x407 = INT64_MAX;
	static uint8_t x408 = 24U;
	int64_t t97 = 6469277817211632LL;

	t97 = (x405&(x406+(x407%x408)));

	if (t97 != 8LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x413 = -1LL;
	uint16_t x414 = 581U;
	int32_t x415 = -1;
	int32_t x416 = INT32_MIN;
	volatile int64_t t98 = -28932456273074523LL;

	t98 = (x413&(x414+(x415%x416)));

	if (t98 != 580LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MIN;
	uint8_t x418 = 0U;
	int64_t x419 = -8334520095336660LL;
	volatile int16_t x420 = INT16_MAX;
	volatile int64_t t99 = 3201483998759838987LL;

	t99 = (x417&(x418+(x419%x420)));

	if (t99 != -13824LL) { NG(); } else { ; }
	
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

