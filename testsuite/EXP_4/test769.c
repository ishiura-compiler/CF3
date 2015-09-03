#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 4U;
int32_t x6 = INT32_MIN;
static int16_t x7 = -197;
volatile int32_t x13 = INT32_MAX;
int32_t x18 = -17838423;
int8_t x25 = INT8_MIN;
int8_t x31 = INT8_MIN;
int64_t x42 = INT64_MIN;
int16_t x47 = 15;
int8_t x49 = INT8_MAX;
int64_t x50 = INT64_MAX;
volatile int32_t t12 = 58707078;
static int32_t t13 = 81908617;
int32_t t14 = -1;
int16_t x61 = 0;
static volatile int32_t t15 = -5960;
static int64_t x65 = INT64_MIN;
static int64_t x66 = INT64_MAX;
volatile int64_t t16 = INT64_MIN;
static int32_t x73 = -1;
int32_t x75 = 6263152;
uint32_t x77 = UINT32_MAX;
static uint64_t x81 = UINT64_MAX;
static int8_t x83 = INT8_MIN;
static int64_t x91 = 3923140241LL;
int16_t x93 = INT16_MAX;
volatile int32_t x96 = 2250407;
uint8_t x98 = UINT8_MAX;
int64_t x99 = -1LL;
int8_t x100 = -1;
int32_t t24 = 1712896;
static volatile uint32_t t26 = 959029411U;
int8_t x110 = INT8_MAX;
int8_t x115 = INT8_MIN;
static int64_t x123 = INT64_MIN;
volatile uint8_t x129 = 0U;
int32_t x131 = -1;
int32_t x134 = -192;
int32_t x136 = INT32_MAX;
static int32_t t33 = 1;
int8_t x138 = 0;
int32_t x139 = INT32_MIN;
static uint16_t x148 = 118U;
volatile int64_t t35 = INT64_MIN;
int32_t x149 = -233377;
volatile int32_t t36 = -13;
int32_t x153 = INT32_MIN;
uint64_t x161 = 7699LLU;
uint64_t t39 = 386905115LLU;
static int8_t x165 = INT8_MIN;
int64_t x174 = INT64_MAX;
static volatile int64_t t42 = INT64_MAX;
int64_t x177 = INT64_MIN;
static uint8_t x180 = UINT8_MAX;
uint64_t x181 = 393625317872LLU;
int64_t x186 = -1LL;
int64_t x188 = INT64_MIN;
int32_t t45 = -6985999;
int32_t x189 = INT32_MAX;
volatile uint16_t x190 = 0U;
int32_t x191 = INT32_MIN;
static int64_t x195 = INT64_MIN;
uint8_t x199 = UINT8_MAX;
static volatile uint32_t x201 = UINT32_MAX;
int64_t x206 = 2157941753145LL;
int8_t x207 = INT8_MIN;
volatile int32_t t54 = -347400777;
static uint8_t x226 = UINT8_MAX;
volatile int64_t x230 = INT64_MIN;
int8_t x240 = -1;
volatile int64_t t59 = -8695986413298LL;
static int32_t x248 = -16195;
uint64_t x251 = UINT64_MAX;
int64_t x252 = -1317257759744104644LL;
volatile int32_t t61 = -32;
uint16_t x260 = 365U;
int16_t x261 = INT16_MIN;
uint8_t x263 = 6U;
volatile int32_t t64 = 488;
int64_t x265 = INT64_MIN;
volatile int64_t t65 = INT64_MIN;
volatile int32_t t66 = -1597231;
static int8_t x273 = INT8_MIN;
volatile int32_t t68 = 55844092;
int16_t x281 = INT16_MAX;
static uint16_t x285 = UINT16_MAX;
volatile uint8_t x287 = UINT8_MAX;
int32_t t70 = -2739024;
uint64_t x291 = UINT64_MAX;
volatile int64_t x297 = INT64_MIN;
uint16_t x307 = 4042U;
volatile int8_t x309 = INT8_MIN;
static int32_t t76 = 58;
static volatile uint32_t t77 = UINT32_MAX;
uint8_t x321 = UINT8_MAX;
uint32_t x338 = 3U;
static int16_t x340 = INT16_MIN;
int64_t x351 = INT64_MIN;
uint16_t x352 = 1U;
volatile int32_t t87 = 682947359;
int8_t x359 = INT8_MAX;
static int64_t x364 = -1LL;
int8_t x367 = 0;
int8_t x369 = INT8_MIN;
static uint16_t x373 = 0U;
static int32_t x376 = -9666860;
uint8_t x391 = UINT8_MAX;
volatile int8_t x392 = INT8_MAX;
int64_t t97 = 14289012042898869LL;
int64_t t98 = 981835483LL;
volatile int32_t t99 = INT32_MAX;


void f0(void) {
	int8_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	uint64_t x4 = 334622689758474LLU;
	int32_t t0 = -226467203;

	t0 = (x1-(x2==(x3%x4)));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 1987099;

	t1 = (x5-(x6==(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int8_t x10 = INT8_MIN;
	uint16_t x11 = 2649U;
	uint32_t x12 = UINT32_MAX;
	static volatile int32_t t2 = INT32_MAX;

	t2 = (x9-(x10==(x11%x12)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	static volatile uint64_t x15 = 502558653103681585LLU;
	int16_t x16 = 14;
	int32_t t3 = INT32_MAX;

	t3 = (x13-(x14==(x15%x16)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x19 = -1;
	int64_t x20 = -1LL;
	volatile int32_t t4 = INT32_MIN;

	t4 = (x17-(x18==(x19%x20)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 30582U;
	volatile uint16_t x22 = 76U;
	int64_t x23 = 7814321706LL;
	uint64_t x24 = UINT64_MAX;
	volatile uint32_t t5 = 5511072U;

	t5 = (x21-(x22==(x23%x24)));

	if (t5 != 30582U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	int8_t x27 = INT8_MAX;
	static int64_t x28 = -1LL;
	int32_t t6 = -1;

	t6 = (x25-(x26==(x27%x28)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 17;
	int32_t x30 = -166794453;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 1702233;

	t7 = (x29-(x30==(x31%x32)));

	if (t7 != 17) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 23363397839317958LLU;
	volatile int32_t x34 = -1;
	int32_t x35 = -1;
	int8_t x36 = INT8_MAX;
	static volatile uint64_t t8 = 21386786102914LLU;

	t8 = (x33-(x34==(x35%x36)));

	if (t8 != 23363397839317957LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -3;
	uint16_t x38 = UINT16_MAX;
	static int8_t x39 = -2;
	static int8_t x40 = -1;
	volatile int32_t t9 = 1576;

	t9 = (x37-(x38==(x39%x40)));

	if (t9 != -3) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 363;
	int32_t x43 = -20750;
	int64_t x44 = 117583040LL;
	static int32_t t10 = -82299;

	t10 = (x41-(x42==(x43%x44)));

	if (t10 != 363) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 4021901U;
	int64_t x46 = INT64_MAX;
	static volatile int64_t x48 = 303993866251LL;
	volatile uint32_t t11 = 34043030U;

	t11 = (x45-(x46==(x47%x48)));

	if (t11 != 4021901U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x51 = 3U;
	int16_t x52 = INT16_MAX;

	t12 = (x49-(x50==(x51%x52)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 22U;
	int64_t x54 = -139441411532497LL;
	static uint32_t x55 = 386360474U;
	int8_t x56 = INT8_MIN;

	t13 = (x53-(x54==(x55%x56)));

	if (t13 != 22) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 14U;
	uint8_t x58 = 31U;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = -4;

	t14 = (x57-(x58==(x59%x60)));

	if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MIN;
	static int32_t x63 = INT32_MIN;
	static int8_t x64 = INT8_MIN;

	t15 = (x61-(x62==(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x67 = -8646;
	uint8_t x68 = 3U;

	t16 = (x65-(x66==(x67%x68)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 29U;
	static volatile uint64_t x70 = UINT64_MAX;
	int16_t x71 = -164;
	uint32_t x72 = 247U;
	static volatile int32_t t17 = 610145;

	t17 = (x69-(x70==(x71%x72)));

	if (t17 != 29) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	static int64_t x76 = INT64_MIN;
	int32_t t18 = 819534211;

	t18 = (x73-(x74==(x75%x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x78 = UINT16_MAX;
	volatile int8_t x79 = -1;
	int16_t x80 = -1;
	uint32_t t19 = UINT32_MAX;

	t19 = (x77-(x78==(x79%x80)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 121369709144LLU;
	volatile int32_t x84 = -1;
	static volatile uint64_t t20 = UINT64_MAX;

	t20 = (x81-(x82==(x83%x84)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MAX;
	volatile int64_t x87 = -1LL;
	int32_t x88 = INT32_MIN;
	int32_t t21 = 1221;

	t21 = (x85-(x86==(x87%x88)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 34U;
	uint16_t x90 = 1U;
	static uint8_t x92 = UINT8_MAX;
	volatile uint32_t t22 = 307942456U;

	t22 = (x89-(x90==(x91%x92)));

	if (t22 != 34U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = 3;
	volatile int64_t x95 = -467005069LL;
	int32_t t23 = -1;

	t23 = (x93-(x94==(x95%x96)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;

	t24 = (x97-(x98==(x99%x100)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int64_t x102 = INT64_MAX;
	volatile int64_t x103 = INT64_MIN;
	int64_t x104 = -2608666950251050LL;
	static int32_t t25 = 1;

	t25 = (x101-(x102==(x103%x104)));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 4U;
	static int64_t x106 = -41LL;
	int32_t x107 = -1;
	uint64_t x108 = 1036329005484LLU;

	t26 = (x105-(x106==(x107%x108)));

	if (t26 != 4U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	int32_t x111 = -1;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t27 = -7283;

	t27 = (x109-(x110==(x111%x112)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 100841800607885764LLU;
	uint64_t x114 = UINT64_MAX;
	uint64_t x116 = 113LLU;
	uint64_t t28 = 7724612455LLU;

	t28 = (x113-(x114==(x115%x116)));

	if (t28 != 100841800607885764LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 5U;
	int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	volatile uint32_t t29 = 7U;

	t29 = (x117-(x118==(x119%x120)));

	if (t29 != 5U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int16_t x122 = -6;
	int16_t x124 = INT16_MAX;
	int32_t t30 = 7761182;

	t30 = (x121-(x122==(x123%x124)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	int32_t x126 = INT32_MIN;
	static int32_t x127 = INT32_MIN;
	static uint16_t x128 = 18227U;
	static volatile int32_t t31 = INT32_MAX;

	t31 = (x125-(x126==(x127%x128)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x130 = 98;
	uint64_t x132 = 721LLU;
	int32_t t32 = -129622463;

	t32 = (x129-(x130==(x131%x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	volatile uint8_t x135 = UINT8_MAX;

	t33 = (x133-(x134==(x135%x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 233U;
	static volatile uint16_t x140 = 233U;
	volatile int32_t t34 = 1;

	t34 = (x137-(x138==(x139%x140)));

	if (t34 != 233) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	uint16_t x146 = 366U;
	int32_t x147 = INT32_MAX;

	t35 = (x145-(x146==(x147%x148)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x150 = UINT64_MAX;
	int8_t x151 = INT8_MIN;
	int64_t x152 = -1LL;

	t36 = (x149-(x150==(x151%x152)));

	if (t36 != -233377) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x154 = -2;
	int64_t x155 = 36LL;
	uint64_t x156 = UINT64_MAX;
	static volatile int32_t t37 = INT32_MIN;

	t37 = (x153-(x154==(x155%x156)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -15;
	int64_t x158 = -11404824033713244LL;
	volatile uint8_t x159 = 7U;
	uint8_t x160 = 3U;
	volatile int32_t t38 = -1883;

	t38 = (x157-(x158==(x159%x160)));

	if (t38 != -15) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x162 = INT16_MIN;
	volatile int16_t x163 = INT16_MAX;
	uint16_t x164 = 29U;

	t39 = (x161-(x162==(x163%x164)));

	if (t39 != 7699LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = INT64_MAX;
	int64_t x167 = -4577902164426211388LL;
	uint8_t x168 = 3U;
	volatile int32_t t40 = 4248;

	t40 = (x165-(x166==(x167%x168)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = 46;
	int8_t x170 = INT8_MAX;
	int64_t x171 = 1789135650LL;
	static int16_t x172 = 3;
	static volatile int32_t t41 = -1168640;

	t41 = (x169-(x170==(x171%x172)));

	if (t41 != 46) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x173 = INT64_MAX;
	volatile uint16_t x175 = 125U;
	int64_t x176 = 2420796846LL;

	t42 = (x173-(x174==(x175%x176)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x178 = -1;
	volatile uint8_t x179 = 29U;
	volatile int64_t t43 = INT64_MIN;

	t43 = (x177-(x178==(x179%x180)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MIN;
	static int32_t x184 = 33062;
	uint64_t t44 = 1316413875LLU;

	t44 = (x181-(x182==(x183%x184)));

	if (t44 != 393625317872LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 8126235;
	int32_t x187 = -747442;

	t45 = (x185-(x186==(x187%x188)));

	if (t45 != 8126235) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x192 = 1;
	int32_t t46 = 187321879;

	t46 = (x189-(x190==(x191%x192)));

	if (t46 != 2147483646) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x193 = 504033577018385309LLU;
	static int32_t x194 = INT32_MIN;
	int32_t x196 = INT32_MIN;
	volatile uint64_t t47 = 47LLU;

	t47 = (x193-(x194==(x195%x196)));

	if (t47 != 504033577018385309LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = 1011827524;
	uint16_t x198 = UINT16_MAX;
	uint32_t x200 = UINT32_MAX;
	int32_t t48 = -86138;

	t48 = (x197-(x198==(x199%x200)));

	if (t48 != 1011827524) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x202 = 190U;
	static int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	uint32_t t49 = UINT32_MAX;

	t49 = (x201-(x202==(x203%x204)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 1U;
	int32_t x208 = 11;
	volatile uint32_t t50 = 4U;

	t50 = (x205-(x206==(x207%x208)));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MIN;
	uint32_t x211 = 1721076570U;
	int16_t x212 = INT16_MAX;
	int32_t t51 = -7914537;

	t51 = (x209-(x210==(x211%x212)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -380904;
	volatile uint16_t x214 = 934U;
	int32_t x215 = INT32_MIN;
	static uint8_t x216 = UINT8_MAX;
	volatile int32_t t52 = 27143124;

	t52 = (x213-(x214==(x215%x216)));

	if (t52 != -380904) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 1202587964442065LL;
	static int64_t x218 = -17067484149417LL;
	static int32_t x219 = -11270324;
	int64_t x220 = -2466239222931LL;
	volatile int64_t t53 = -99396730LL;

	t53 = (x217-(x218==(x219%x220)));

	if (t53 != 1202587964442065LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = UINT8_MAX;
	int64_t x222 = -1LL;
	int16_t x223 = 7838;
	uint32_t x224 = 5U;

	t54 = (x221-(x222==(x223%x224)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x225 = UINT64_MAX;
	uint32_t x227 = 30484496U;
	int32_t x228 = 1660578;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x225-(x226==(x227%x228)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -2991;
	int8_t x231 = INT8_MIN;
	int64_t x232 = -1LL;
	int32_t t56 = -5168;

	t56 = (x229-(x230==(x231%x232)));

	if (t56 != -2991) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 634U;
	volatile uint64_t x234 = 15487614LLU;
	uint64_t x235 = 146720385288048LLU;
	volatile int64_t x236 = 1LL;
	uint32_t t57 = 4200726U;

	t57 = (x233-(x234==(x235%x236)));

	if (t57 != 634U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -18298446245540593LL;
	static int64_t x238 = INT64_MIN;
	static uint64_t x239 = 1797798374740181123LLU;
	volatile int64_t t58 = 7127931083599LL;

	t58 = (x237-(x238==(x239%x240)));

	if (t58 != -18298446245540593LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = 66435464LL;
	int8_t x242 = 3;
	static int64_t x243 = -1LL;
	int8_t x244 = 2;

	t59 = (x241-(x242==(x243%x244)));

	if (t59 != 66435464LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MAX;
	int32_t x246 = -2;
	uint32_t x247 = UINT32_MAX;
	static volatile int32_t t60 = 20;

	t60 = (x245-(x246==(x247%x248)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x249 = UINT8_MAX;
	static uint16_t x250 = UINT16_MAX;

	t61 = (x249-(x250==(x251%x252)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x254 = 99;
	uint16_t x255 = UINT16_MAX;
	uint32_t x256 = 14U;
	volatile int32_t t62 = -9;

	t62 = (x253-(x254==(x255%x256)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x257 = INT16_MAX;
	volatile int8_t x258 = -1;
	volatile int32_t x259 = INT32_MAX;
	static volatile int32_t t63 = -5944798;

	t63 = (x257-(x258==(x259%x260)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x262 = INT32_MIN;
	static uint16_t x264 = 47U;

	t64 = (x261-(x262==(x263%x264)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x266 = -68LL;
	static int32_t x267 = INT32_MIN;
	volatile int16_t x268 = INT16_MIN;

	t65 = (x265-(x266==(x267%x268)));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	volatile uint32_t x270 = UINT32_MAX;
	uint64_t x271 = 9597814020LLU;
	int32_t x272 = INT32_MAX;

	t66 = (x269-(x270==(x271%x272)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x274 = INT64_MIN;
	uint32_t x275 = 6716735U;
	int64_t x276 = INT64_MIN;
	static int32_t t67 = 858916917;

	t67 = (x273-(x274==(x275%x276)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x277 = -1;
	int8_t x278 = 0;
	static uint64_t x279 = 18434038855683470LLU;
	uint32_t x280 = 5428904U;

	t68 = (x277-(x278==(x279%x280)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x282 = UINT16_MAX;
	static int32_t x283 = -1;
	uint8_t x284 = 43U;
	int32_t t69 = -1;

	t69 = (x281-(x282==(x283%x284)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x286 = 3U;
	uint8_t x288 = 5U;

	t70 = (x285-(x286==(x287%x288)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = 1;
	volatile uint16_t x290 = UINT16_MAX;
	uint32_t x292 = 32519805U;
	int32_t t71 = 2982;

	t71 = (x289-(x290==(x291%x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = INT16_MAX;
	uint64_t x294 = UINT64_MAX;
	static int64_t x295 = INT64_MAX;
	int64_t x296 = INT64_MIN;
	int32_t t72 = -45822347;

	t72 = (x293-(x294==(x295%x296)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x298 = UINT32_MAX;
	int8_t x299 = INT8_MIN;
	static int16_t x300 = -1;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x297-(x298==(x299%x300)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = -6552;
	int64_t x302 = -1LL;
	int64_t x303 = 33287996LL;
	int64_t x304 = INT64_MIN;
	int32_t t74 = 7683323;

	t74 = (x301-(x302==(x303%x304)));

	if (t74 != -6552) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	static int16_t x306 = INT16_MAX;
	static int16_t x308 = -1;
	volatile int32_t t75 = 3599;

	t75 = (x305-(x306==(x307%x308)));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x310 = -90249684LL;
	static volatile uint32_t x311 = 619574057U;
	int16_t x312 = -2;

	t76 = (x309-(x310==(x311%x312)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = 1U;
	static int16_t x315 = INT16_MIN;
	static uint8_t x316 = 7U;

	t77 = (x313-(x314==(x315%x316)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 11750U;
	int16_t x318 = INT16_MAX;
	static uint8_t x319 = 0U;
	uint64_t x320 = 29LLU;
	volatile uint32_t t78 = 409165U;

	t78 = (x317-(x318==(x319%x320)));

	if (t78 != 11750U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x322 = 1U;
	int8_t x323 = 19;
	int16_t x324 = INT16_MIN;
	volatile int32_t t79 = 990598659;

	t79 = (x321-(x322==(x323%x324)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = 0;
	int64_t x326 = 108984096231LL;
	volatile int32_t x327 = INT32_MIN;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t80 = -5;

	t80 = (x325-(x326==(x327%x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = -3641155;
	uint8_t x331 = 31U;
	uint8_t x332 = 1U;
	int32_t t81 = 1;

	t81 = (x329-(x330==(x331%x332)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x333 = INT64_MIN;
	uint16_t x334 = 125U;
	uint64_t x335 = 120085977982LLU;
	static int32_t x336 = INT32_MAX;
	volatile int64_t t82 = INT64_MIN;

	t82 = (x333-(x334==(x335%x336)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -1;
	int64_t x339 = INT64_MIN;
	volatile int32_t t83 = 7716264;

	t83 = (x337-(x338==(x339%x340)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x341 = INT8_MIN;
	uint32_t x342 = 919U;
	volatile int8_t x343 = 63;
	int16_t x344 = -1;
	volatile int32_t t84 = -2873;

	t84 = (x341-(x342==(x343%x344)));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x345 = UINT64_MAX;
	uint8_t x346 = 1U;
	static uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (x345-(x346==(x347%x348)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x349 = 28U;
	static int8_t x350 = -1;
	volatile int32_t t86 = 247496040;

	t86 = (x349-(x350==(x351%x352)));

	if (t86 != 28) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x353 = 1U;
	volatile int32_t x354 = -1;
	int16_t x355 = 401;
	int8_t x356 = 57;

	t87 = (x353-(x354==(x355%x356)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x357 = 27U;
	int64_t x358 = -1LL;
	int32_t x360 = -1430780;
	volatile int32_t t88 = 117395;

	t88 = (x357-(x358==(x359%x360)));

	if (t88 != 27) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x361 = 594U;
	volatile int8_t x362 = INT8_MAX;
	static uint64_t x363 = UINT64_MAX;
	int32_t t89 = 356;

	t89 = (x361-(x362==(x363%x364)));

	if (t89 != 594) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x365 = 0;
	uint32_t x366 = 1U;
	int64_t x368 = 6LL;
	static volatile int32_t t90 = 612290;

	t90 = (x365-(x366==(x367%x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x370 = 100337U;
	int16_t x371 = INT16_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t91 = 0;

	t91 = (x369-(x370==(x371%x372)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x374 = -1;
	int64_t x375 = 7205LL;
	static volatile int32_t t92 = 73;

	t92 = (x373-(x374==(x375%x376)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x377 = 740U;
	uint32_t x378 = 2768U;
	int8_t x379 = -17;
	uint8_t x380 = 22U;
	volatile int32_t t93 = -3352;

	t93 = (x377-(x378==(x379%x380)));

	if (t93 != 740) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = INT32_MIN;
	uint16_t x382 = 10U;
	int64_t x383 = 272589252033098418LL;
	int8_t x384 = INT8_MAX;
	static volatile int32_t t94 = INT32_MIN;

	t94 = (x381-(x382==(x383%x384)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = 125U;
	int8_t x388 = INT8_MAX;
	static int32_t t95 = -23777;

	t95 = (x385-(x386==(x387%x388)));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x389 = 70341067837643LLU;
	static uint8_t x390 = 8U;
	static uint64_t t96 = 49LLU;

	t96 = (x389-(x390==(x391%x392)));

	if (t96 != 70341067837643LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x393 = -58199802LL;
	int64_t x394 = 7417041364LL;
	int8_t x395 = 0;
	volatile int8_t x396 = -1;

	t97 = (x393-(x394==(x395%x396)));

	if (t97 != -58199802LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x397 = 840842586278923LL;
	static volatile uint8_t x398 = 5U;
	uint8_t x399 = 16U;
	static uint16_t x400 = 1U;

	t98 = (x397-(x398==(x399%x400)));

	if (t98 != 840842586278923LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MAX;
	volatile int32_t x402 = INT32_MAX;
	static int16_t x403 = -7;
	int64_t x404 = INT64_MIN;

	t99 = (x401-(x402==(x403%x404)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

