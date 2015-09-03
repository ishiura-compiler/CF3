#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x12 = INT64_MIN;
uint64_t t4 = 10736085612612340LLU;
volatile int64_t x22 = INT64_MIN;
int64_t x26 = -1LL;
static int16_t x29 = INT16_MIN;
uint32_t x31 = UINT32_MAX;
int8_t x32 = INT8_MIN;
uint64_t x35 = 19174935134634471LLU;
volatile int32_t t8 = INT32_MIN;
uint32_t x37 = UINT32_MAX;
int64_t x41 = 15667LL;
int64_t t10 = 1095570151196364392LL;
int8_t x49 = INT8_MIN;
int8_t x61 = INT8_MIN;
uint64_t x62 = 255935436778549LLU;
uint8_t x64 = UINT8_MAX;
int64_t x65 = INT64_MAX;
int64_t t17 = -474639LL;
volatile int8_t x82 = 2;
static uint8_t x91 = 32U;
volatile uint16_t x97 = UINT16_MAX;
uint8_t x100 = UINT8_MAX;
int32_t x106 = 1714;
int8_t x113 = INT8_MIN;
int16_t x114 = 62;
int64_t x121 = -1149900820032724243LL;
int16_t x122 = INT16_MIN;
static int16_t x125 = INT16_MIN;
volatile int64_t x132 = -1LL;
static int8_t x137 = 59;
uint16_t x145 = 20U;
volatile uint8_t x149 = 65U;
int32_t x150 = -1;
uint32_t x152 = 1006U;
uint32_t x153 = 2095595281U;
static int64_t x161 = INT64_MIN;
int8_t x164 = INT8_MAX;
uint16_t x165 = UINT16_MAX;
static int16_t x169 = 32;
volatile int32_t x173 = INT32_MIN;
int8_t x197 = INT8_MAX;
volatile int32_t t46 = -215;
int64_t x206 = INT64_MIN;
uint64_t x211 = UINT64_MAX;
int16_t x215 = -791;
int16_t x224 = INT16_MIN;
static volatile uint16_t x228 = 28U;
int64_t x233 = -64761124870670630LL;
volatile int64_t x237 = INT64_MAX;
static int8_t x241 = 4;
int8_t x242 = -1;
int64_t x246 = -32628485519914799LL;
volatile uint8_t x249 = 53U;
uint64_t x256 = 91751307643LLU;
volatile int32_t t61 = -15520555;
int16_t x269 = 1;
static int16_t x272 = -1;
uint8_t x280 = 53U;
volatile int32_t t66 = 0;
uint32_t x281 = UINT32_MAX;
static int16_t x284 = INT16_MIN;
int32_t x286 = -1;
static uint64_t x297 = 3874951LLU;
static uint16_t x306 = 1U;
int16_t x307 = INT16_MAX;
int32_t t73 = 30331381;
int16_t x313 = INT16_MIN;
int8_t x318 = -1;
int32_t x319 = INT32_MIN;
uint16_t x328 = 3U;
int8_t x329 = -3;
int16_t x332 = INT16_MIN;
static uint32_t x334 = 17860U;
volatile int16_t x337 = -3;
volatile uint8_t x341 = UINT8_MAX;
static volatile uint8_t x351 = 1U;
int64_t x352 = -1LL;
uint8_t x355 = 0U;
int32_t t84 = -768960972;
uint32_t x363 = 5225954U;
uint64_t x365 = 135678905274LLU;
volatile int64_t x380 = 61988681728LL;
volatile int8_t x386 = 36;
int8_t x412 = -2;
static uint32_t x416 = UINT32_MAX;
int8_t x417 = -1;
static volatile int32_t t99 = -14663319;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static uint16_t x2 = 2U;
	static int32_t x3 = 36545;
	static int32_t x4 = -1;
	static volatile int32_t t0 = -28314513;

	t0 = (x1*(x2<=(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	int64_t x6 = -246950904023001LL;
	static int8_t x7 = 4;
	volatile int64_t x8 = -1LL;
	static uint32_t t1 = UINT32_MAX;

	t1 = (x5*(x6<=(x7%x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 307U;
	static volatile uint64_t x10 = 735523644777LLU;
	static uint64_t x11 = UINT64_MAX;
	volatile uint32_t t2 = 47649074U;

	t2 = (x9*(x10<=(x11%x12)));

	if (t2 != 307U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -14;
	volatile int8_t x14 = INT8_MAX;
	int32_t x15 = INT32_MIN;
	volatile uint8_t x16 = 3U;
	volatile int32_t t3 = 26;

	t3 = (x13*(x14<=(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 4LLU;
	uint16_t x18 = 14606U;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = INT64_MIN;

	t4 = (x17*(x18<=(x19%x20)));

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int16_t x24 = -13;
	int32_t t5 = INT32_MIN;

	t5 = (x21*(x22<=(x23%x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 25412U;
	int32_t x27 = -1406;
	static int64_t x28 = INT64_MAX;
	volatile uint32_t t6 = 9U;

	t6 = (x25*(x26<=(x27%x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MAX;
	int32_t t7 = 1082;

	t7 = (x29*(x30<=(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static uint32_t x34 = UINT32_MAX;
	static volatile int16_t x36 = INT16_MIN;

	t8 = (x33*(x34<=(x35%x36)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MAX;
	uint16_t x39 = 8908U;
	static int64_t x40 = -11052LL;
	static uint32_t t9 = 31332U;

	t9 = (x37*(x38<=(x39%x40)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 15U;
	int32_t x43 = INT32_MIN;
	volatile int16_t x44 = INT16_MAX;

	t10 = (x41*(x42<=(x43%x44)));

	if (t10 != 15667LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = INT16_MAX;
	volatile uint32_t x48 = 43U;
	static volatile int64_t t11 = INT64_MIN;

	t11 = (x45*(x46<=(x47%x48)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 12U;
	int32_t x51 = -4233;
	int16_t x52 = -8497;
	int32_t t12 = -28627548;

	t12 = (x49*(x50<=(x51%x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 58U;
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MIN;
	static int32_t x56 = INT32_MIN;
	int32_t t13 = -5430587;

	t13 = (x53*(x54<=(x55%x56)));

	if (t13 != 58) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 1U;
	int64_t x58 = INT64_MAX;
	int8_t x59 = 19;
	uint8_t x60 = 1U;
	int32_t t14 = -13015031;

	t14 = (x57*(x58<=(x59%x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = 103729072993LL;
	int32_t t15 = 2446430;

	t15 = (x61*(x62<=(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 8861523121602233LLU;
	int16_t x67 = -1;
	volatile int16_t x68 = INT16_MIN;
	int64_t t16 = INT64_MAX;

	t16 = (x65*(x66<=(x67%x68)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = 9305LL;
	uint16_t x70 = 284U;
	volatile int8_t x71 = -1;
	int64_t x72 = INT64_MIN;

	t17 = (x69*(x70<=(x71%x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 2627892;
	uint64_t x78 = 1217553114691377LLU;
	int16_t x79 = -1;
	int8_t x80 = -1;
	static volatile int32_t t18 = 472761898;

	t18 = (x77*(x78<=(x79%x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 749U;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = 7U;
	int32_t t19 = -56743;

	t19 = (x81*(x82<=(x83%x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	static int64_t x86 = INT64_MIN;
	volatile uint64_t x87 = 498410428789440012LLU;
	int32_t x88 = INT32_MIN;
	static int32_t t20 = -19420299;

	t20 = (x85*(x86<=(x87%x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	static volatile int32_t x90 = INT32_MIN;
	static uint8_t x92 = 3U;
	volatile int32_t t21 = 3070131;

	t21 = (x89*(x90<=(x91%x92)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x98 = 4784;
	uint16_t x99 = 7122U;
	int32_t t22 = -8;

	t22 = (x97*(x98<=(x99%x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = INT16_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	int16_t x104 = 17;
	int32_t t23 = -84;

	t23 = (x101*(x102<=(x103%x104)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -1LL;
	uint8_t x107 = 0U;
	int32_t x108 = INT32_MIN;
	int64_t t24 = 32084247655488LL;

	t24 = (x105*(x106<=(x107%x108)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 41064709957211LLU;
	int16_t x110 = -1;
	int64_t x111 = -1LL;
	int64_t x112 = INT64_MAX;
	volatile uint64_t t25 = 314347099293LLU;

	t25 = (x109*(x110<=(x111%x112)));

	if (t25 != 41064709957211LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x115 = UINT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t26 = -195;

	t26 = (x113*(x114<=(x115%x116)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;
	uint16_t x120 = UINT16_MAX;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x117*(x118<=(x119%x120)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x123 = 485U;
	int64_t x124 = INT64_MAX;
	static volatile int64_t t28 = -3339851975977836LL;

	t28 = (x121*(x122<=(x123%x124)));

	if (t28 != -1149900820032724243LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x126 = INT16_MIN;
	static int64_t x127 = INT64_MAX;
	int32_t x128 = -1670;
	volatile int32_t t29 = -660;

	t29 = (x125*(x126<=(x127%x128)));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 1690364155814LLU;
	static int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	volatile uint64_t t30 = 582177750090546408LLU;

	t30 = (x129*(x130<=(x131%x132)));

	if (t30 != 1690364155814LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	int8_t x135 = 12;
	int32_t x136 = -53526636;
	int32_t t31 = INT32_MIN;

	t31 = (x133*(x134<=(x135%x136)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x138 = -16145;
	uint64_t x139 = UINT64_MAX;
	uint32_t x140 = 507315098U;
	static volatile int32_t t32 = 518471;

	t32 = (x137*(x138<=(x139%x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x146 = 612229235899139961LL;
	volatile uint8_t x147 = 35U;
	int16_t x148 = -1;
	volatile int32_t t33 = -99954;

	t33 = (x145*(x146<=(x147%x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x151 = INT16_MIN;
	int32_t t34 = 19991494;

	t34 = (x149*(x150<=(x151%x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x154 = INT16_MIN;
	uint16_t x155 = 5821U;
	int32_t x156 = INT32_MIN;
	uint32_t t35 = 51U;

	t35 = (x153*(x154<=(x155%x156)));

	if (t35 != 2095595281U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = 4453425688195293755LLU;
	uint64_t x158 = 11397989191615317LLU;
	int64_t x159 = -1LL;
	int64_t x160 = INT64_MAX;
	volatile uint64_t t36 = 263949031456LLU;

	t36 = (x157*(x158<=(x159%x160)));

	if (t36 != 4453425688195293755LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x162 = 24131U;
	volatile int32_t x163 = INT32_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = (x161*(x162<=(x163%x164)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x166 = INT64_MAX;
	volatile int8_t x167 = 0;
	int8_t x168 = INT8_MIN;
	static int32_t t38 = -4232;

	t38 = (x165*(x166<=(x167%x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x170 = INT32_MIN;
	volatile int8_t x171 = INT8_MAX;
	int16_t x172 = -1;
	int32_t t39 = -2655131;

	t39 = (x169*(x170<=(x171%x172)));

	if (t39 != 32) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = -1LL;
	int16_t x175 = INT16_MIN;
	volatile uint32_t x176 = 3030U;
	int32_t t40 = INT32_MIN;

	t40 = (x173*(x174<=(x175%x176)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = INT32_MIN;
	int64_t x178 = -640411447570328LL;
	volatile int8_t x179 = -3;
	uint64_t x180 = 1990958089148855297LLU;
	volatile int32_t t41 = 29;

	t41 = (x177*(x178<=(x179%x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	static int32_t x182 = -51405;
	int16_t x183 = INT16_MIN;
	static int64_t x184 = -1LL;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x181*(x182<=(x183%x184)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	uint64_t x188 = 3911622780773524015LLU;
	volatile int32_t t43 = -1;

	t43 = (x185*(x186<=(x187%x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MAX;
	uint32_t x192 = 23212323U;
	static volatile int32_t t44 = -22;

	t44 = (x189*(x190<=(x191%x192)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -912172941;
	int16_t x194 = INT16_MAX;
	int8_t x195 = -7;
	int64_t x196 = -933014947735411730LL;
	static int32_t t45 = -719;

	t45 = (x193*(x194<=(x195%x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x198 = UINT64_MAX;
	int64_t x199 = INT64_MIN;
	static volatile int64_t x200 = INT64_MAX;

	t46 = (x197*(x198<=(x199%x200)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -1;
	int16_t x202 = 1;
	int16_t x203 = INT16_MAX;
	int8_t x204 = -1;
	volatile int32_t t47 = -31327077;

	t47 = (x201*(x202<=(x203%x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MAX;
	int16_t x207 = -1;
	uint16_t x208 = 1U;
	volatile int64_t t48 = INT64_MAX;

	t48 = (x205*(x206<=(x207%x208)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = 226U;
	static volatile int16_t x210 = INT16_MIN;
	static volatile int16_t x212 = -1;
	int32_t t49 = 172935;

	t49 = (x209*(x210<=(x211%x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x213 = 123961162160776LL;
	static uint64_t x214 = 115241127501144755LLU;
	static int32_t x216 = -451203632;
	volatile int64_t t50 = 636138498178LL;

	t50 = (x213*(x214<=(x215%x216)));

	if (t50 != 123961162160776LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x217 = 115632U;
	uint8_t x218 = UINT8_MAX;
	int64_t x219 = -1LL;
	int64_t x220 = INT64_MAX;
	uint32_t t51 = 145269887U;

	t51 = (x217*(x218<=(x219%x220)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = 23786LLU;
	int8_t x222 = -1;
	volatile uint32_t x223 = 245708U;
	volatile uint64_t t52 = 40500LLU;

	t52 = (x221*(x222<=(x223%x224)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = -1;
	int8_t x226 = -1;
	int64_t x227 = 2LL;
	int32_t t53 = -114;

	t53 = (x225*(x226<=(x227%x228)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MAX;
	volatile int32_t x230 = 5376;
	volatile int64_t x231 = INT64_MAX;
	static int8_t x232 = INT8_MIN;
	int32_t t54 = 835;

	t54 = (x229*(x230<=(x231%x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x234 = -12908143903602101LL;
	uint32_t x235 = 627U;
	int32_t x236 = -483;
	int64_t t55 = -8794857LL;

	t55 = (x233*(x234<=(x235%x236)));

	if (t55 != -64761124870670630LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x238 = -1;
	volatile int8_t x239 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t56 = -10155262214LL;

	t56 = (x237*(x238<=(x239%x240)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x243 = -1;
	static int16_t x244 = 6761;
	volatile int32_t t57 = -18926;

	t57 = (x241*(x242<=(x243%x244)));

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MIN;
	static uint8_t x247 = UINT8_MAX;
	volatile int16_t x248 = -14;
	volatile int32_t t58 = 48081321;

	t58 = (x245*(x246<=(x247%x248)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x250 = UINT8_MAX;
	volatile uint32_t x251 = UINT32_MAX;
	uint32_t x252 = UINT32_MAX;
	static volatile int32_t t59 = 12011;

	t59 = (x249*(x250<=(x251%x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	static int32_t x254 = INT32_MIN;
	static int16_t x255 = -4886;
	volatile int32_t t60 = -230698;

	t60 = (x253*(x254<=(x255%x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = UINT8_MAX;
	static volatile int8_t x258 = INT8_MAX;
	int8_t x259 = -1;
	static volatile uint32_t x260 = 874U;

	t61 = (x257*(x258<=(x259%x260)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x261 = -1;
	volatile int64_t x262 = INT64_MIN;
	static uint32_t x263 = 1438526U;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t62 = -207;

	t62 = (x261*(x262<=(x263%x264)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = 764;
	int64_t x266 = -1LL;
	volatile int16_t x267 = 1;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t63 = 21100134;

	t63 = (x265*(x266<=(x267%x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x270 = -1;
	static int64_t x271 = INT64_MIN;
	int32_t t64 = 2;

	t64 = (x269*(x270<=(x271%x272)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MAX;
	int8_t x275 = 1;
	int16_t x276 = INT16_MIN;
	int64_t t65 = -23815244634LL;

	t65 = (x273*(x274<=(x275%x276)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x277 = INT16_MIN;
	volatile int8_t x278 = 14;
	uint32_t x279 = 4000U;

	t66 = (x277*(x278<=(x279%x280)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x282 = 3061359765731LLU;
	volatile int16_t x283 = INT16_MAX;
	static uint32_t t67 = 839278974U;

	t67 = (x281*(x282<=(x283%x284)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x285 = 8U;
	int32_t x287 = 236576230;
	volatile uint16_t x288 = UINT16_MAX;
	volatile uint32_t t68 = 63247U;

	t68 = (x285*(x286<=(x287%x288)));

	if (t68 != 8U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = 0;
	static int16_t x294 = -1;
	static volatile uint8_t x295 = 11U;
	static int32_t x296 = -5;
	static volatile int32_t t69 = 2327021;

	t69 = (x293*(x294<=(x295%x296)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x298 = UINT32_MAX;
	static int32_t x299 = 24;
	uint32_t x300 = 125063808U;
	uint64_t t70 = 3119997345605LLU;

	t70 = (x297*(x298<=(x299%x300)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x301 = 884U;
	int64_t x302 = -913LL;
	volatile uint64_t x303 = 7058LLU;
	int64_t x304 = 2LL;
	volatile uint32_t t71 = 5U;

	t71 = (x301*(x302<=(x303%x304)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 6038611163517LLU;
	volatile int16_t x308 = -50;
	volatile uint64_t t72 = 119119581858LLU;

	t72 = (x305*(x306<=(x307%x308)));

	if (t72 != 6038611163517LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = -14;
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = 117640LL;
	volatile int16_t x312 = INT16_MIN;

	t73 = (x309*(x310<=(x311%x312)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x314 = INT32_MAX;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = 2;
	int32_t t74 = -1044;

	t74 = (x313*(x314<=(x315%x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = 439LL;
	static uint16_t x320 = UINT16_MAX;
	volatile int64_t t75 = 19271LL;

	t75 = (x317*(x318<=(x319%x320)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MIN;
	volatile int64_t x322 = -2972183781LL;
	uint16_t x323 = 15219U;
	static uint32_t x324 = 4579U;
	volatile int32_t t76 = -1783;

	t76 = (x321*(x322<=(x323%x324)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x325 = 2U;
	int16_t x326 = 27;
	static int8_t x327 = -1;
	int32_t t77 = -2893;

	t77 = (x325*(x326<=(x327%x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x330 = INT16_MIN;
	uint8_t x331 = 91U;
	volatile int32_t t78 = 50773955;

	t78 = (x329*(x330<=(x331%x332)));

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = 5U;
	uint64_t x335 = 593152LLU;
	volatile int64_t x336 = INT64_MIN;
	int32_t t79 = -510;

	t79 = (x333*(x334<=(x335%x336)));

	if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x338 = 902112931LLU;
	int32_t x339 = INT32_MAX;
	int32_t x340 = 261;
	volatile int32_t t80 = 215559;

	t80 = (x337*(x338<=(x339%x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x342 = UINT16_MAX;
	volatile int8_t x343 = INT8_MIN;
	uint64_t x344 = 1289LLU;
	int32_t t81 = 0;

	t81 = (x341*(x342<=(x343%x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x345 = -1;
	int8_t x346 = INT8_MIN;
	int8_t x347 = -1;
	static int32_t x348 = -176440432;
	volatile int32_t t82 = 4010;

	t82 = (x345*(x346<=(x347%x348)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = -82;
	static int32_t x350 = 464692555;
	static volatile int32_t t83 = -1;

	t83 = (x349*(x350<=(x351%x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x353 = UINT16_MAX;
	static volatile uint16_t x354 = 2U;
	int64_t x356 = -1LL;

	t84 = (x353*(x354<=(x355%x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = -1;
	uint8_t x358 = 3U;
	uint64_t x359 = 0LLU;
	static int16_t x360 = INT16_MAX;
	volatile int32_t t85 = 229862;

	t85 = (x357*(x358<=(x359%x360)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = 1;
	volatile uint16_t x362 = UINT16_MAX;
	int32_t x364 = -1;
	volatile int32_t t86 = -502100610;

	t86 = (x361*(x362<=(x363%x364)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 3U;
	uint64_t t87 = 65643034755374LLU;

	t87 = (x365*(x366<=(x367%x368)));

	if (t87 != 135678905274LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x369 = 8;
	int64_t x370 = INT64_MIN;
	uint16_t x371 = 0U;
	static int64_t x372 = -1LL;
	int32_t t88 = 1685665;

	t88 = (x369*(x370<=(x371%x372)));

	if (t88 != 8) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x377 = INT64_MAX;
	uint32_t x378 = 53235613U;
	uint64_t x379 = 226LLU;
	static volatile int64_t t89 = -63766289076967LL;

	t89 = (x377*(x378<=(x379%x380)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = INT64_MAX;
	int64_t x382 = INT64_MIN;
	static int8_t x383 = INT8_MIN;
	uint64_t x384 = UINT64_MAX;
	static int64_t t90 = INT64_MAX;

	t90 = (x381*(x382<=(x383%x384)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -1;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;
	volatile int32_t t91 = -82400848;

	t91 = (x385*(x386<=(x387%x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = -1LL;
	int8_t x390 = INT8_MIN;
	int8_t x391 = 40;
	volatile int16_t x392 = 261;
	volatile int64_t t92 = 8670125406744LL;

	t92 = (x389*(x390<=(x391%x392)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = -1;
	int32_t x394 = 41884735;
	static uint16_t x395 = UINT16_MAX;
	volatile uint32_t x396 = 412U;
	volatile int32_t t93 = -875040;

	t93 = (x393*(x394<=(x395%x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MAX;
	volatile int16_t x398 = INT16_MIN;
	uint32_t x399 = UINT32_MAX;
	int32_t x400 = 3;
	volatile int64_t t94 = -2700766267804LL;

	t94 = (x397*(x398<=(x399%x400)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = UINT16_MAX;
	uint8_t x402 = 50U;
	volatile int32_t x403 = INT32_MIN;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t95 = 452048;

	t95 = (x401*(x402<=(x403%x404)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = -1;
	static uint16_t x406 = 9U;
	uint16_t x407 = UINT16_MAX;
	int32_t x408 = INT32_MIN;
	volatile int32_t t96 = 0;

	t96 = (x405*(x406<=(x407%x408)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x409 = -23;
	int32_t x410 = INT32_MIN;
	int16_t x411 = -843;
	int32_t t97 = -63120;

	t97 = (x409*(x410<=(x411%x412)));

	if (t97 != -23) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = INT64_MAX;
	static int16_t x414 = INT16_MIN;
	static volatile uint16_t x415 = 0U;
	volatile int64_t t98 = 818LL;

	t98 = (x413*(x414<=(x415%x416)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x418 = 27U;
	int64_t x419 = -267734721293LL;
	int16_t x420 = -1;

	t99 = (x417*(x418<=(x419%x420)));

	if (t99 != 0) { NG(); } else { ; }
	
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

