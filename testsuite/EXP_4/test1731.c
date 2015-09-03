#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = INT16_MIN;
static uint8_t x13 = UINT8_MAX;
int32_t t2 = -1;
volatile int8_t x18 = -1;
uint8_t x21 = UINT8_MAX;
int32_t x24 = INT32_MIN;
volatile uint64_t t4 = 10LLU;
static uint8_t x26 = 95U;
int64_t x29 = INT64_MIN;
volatile int32_t t8 = 633298;
int8_t x49 = 27;
static volatile int64_t x51 = 15214403363LL;
int64_t t10 = 8710LL;
int16_t x57 = INT16_MAX;
uint16_t x69 = UINT16_MAX;
int64_t x73 = -11354988337LL;
static volatile int8_t x75 = -5;
static uint64_t x80 = 3037LLU;
int16_t x82 = INT16_MIN;
int16_t x84 = -13545;
static volatile int8_t x85 = INT8_MIN;
static uint32_t x86 = 2003U;
volatile int16_t x87 = 626;
int16_t x102 = INT16_MAX;
static int32_t x103 = INT32_MIN;
static int16_t x106 = -82;
static volatile uint64_t t23 = UINT64_MAX;
static int16_t x122 = 10;
uint32_t t25 = 374331267U;
int16_t x129 = -304;
int16_t x130 = INT16_MIN;
volatile uint32_t t28 = 36984847U;
int64_t x145 = INT64_MIN;
uint8_t x147 = 10U;
int64_t x148 = 6LL;
int16_t x149 = -197;
volatile int32_t t30 = -1597;
uint8_t x155 = UINT8_MAX;
volatile uint64_t t33 = 6LLU;
uint32_t x165 = 0U;
volatile uint32_t t34 = 78U;
uint16_t x169 = 1012U;
int32_t x175 = -1;
uint64_t t36 = 1788077666042123063LLU;
static uint16_t x179 = UINT16_MAX;
static int64_t x181 = INT64_MAX;
int8_t x186 = INT8_MIN;
volatile int64_t t42 = -106LL;
int32_t x214 = -131386;
volatile uint32_t x217 = 22002U;
static int64_t x218 = -1LL;
volatile int64_t t44 = 58454907258518814LL;
volatile int16_t x223 = INT16_MAX;
static int64_t x231 = 22850664503611584LL;
int8_t x233 = -1;
int32_t x235 = INT32_MIN;
static int8_t x251 = INT8_MAX;
static uint64_t x252 = 4LLU;
int8_t x254 = INT8_MIN;
static volatile int16_t x259 = -1;
int16_t x262 = INT16_MAX;
int64_t x263 = -1086910378435LL;
volatile int32_t t56 = 20;
int64_t x277 = -608886LL;
static int8_t x285 = INT8_MIN;
int16_t x288 = -1;
int8_t x294 = 1;
volatile int32_t x309 = INT32_MIN;
int8_t x310 = INT8_MAX;
uint32_t x321 = 6517U;
uint8_t x323 = UINT8_MAX;
uint64_t t66 = 341486787026LLU;
int16_t x333 = INT16_MAX;
int64_t x335 = -1LL;
uint32_t x359 = 5443U;
int64_t x368 = INT64_MIN;
uint64_t x370 = UINT64_MAX;
volatile int16_t x371 = INT16_MAX;
int64_t t75 = -2738008LL;
volatile int32_t x401 = 147601;
int16_t x419 = INT16_MIN;
static int32_t x423 = -773628;
int16_t x444 = 55;
int8_t x448 = -1;
static int16_t x451 = INT16_MIN;
volatile uint64_t t88 = 7248721815962526736LLU;
uint8_t x460 = 2U;
volatile uint64_t x480 = 76LLU;
uint64_t t93 = 4450121091LLU;
int16_t x491 = INT16_MAX;
int16_t x500 = INT16_MAX;
volatile int32_t t96 = 2855922;
uint32_t x503 = UINT32_MAX;
int64_t t98 = 581569LL;
int8_t x512 = INT8_MAX;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	static int64_t x2 = 9083854LL;
	int32_t x3 = 46;
	uint32_t x4 = UINT32_MAX;
	volatile int64_t t0 = -1039514LL;

	t0 = (x1-(x2/(x3&x4)));

	if (t0 != -164708LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	int32_t x11 = -1;
	uint16_t x12 = UINT16_MAX;
	static int32_t t1 = 61074;

	t1 = (x9-(x10/(x11&x12)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = -3;
	int32_t x15 = -2851269;
	int8_t x16 = INT8_MIN;

	t2 = (x13-(x14/(x15&x16)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 0U;
	volatile uint8_t x19 = 110U;
	static volatile uint8_t x20 = 63U;
	static int32_t t3 = -53;

	t3 = (x17-(x18/(x19&x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = 0;
	static uint64_t x23 = 219627497352707LLU;

	t4 = (x21-(x22/(x23&x24)));

	if (t4 != 255LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	uint32_t x27 = UINT32_MAX;
	uint32_t x28 = 1U;
	uint32_t t5 = 8925779U;

	t5 = (x25-(x26/(x27&x28)));

	if (t5 != 32U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	int8_t x31 = 1;
	uint64_t x32 = UINT64_MAX;
	uint64_t t6 = 31188264LLU;

	t6 = (x29-(x30/(x31&x32)));

	if (t6 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MAX;
	int32_t x35 = -1;
	uint64_t x36 = 61429922719316219LLU;
	volatile uint64_t t7 = 63852971183613LLU;

	t7 = (x33-(x34/(x35&x36)));

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int8_t x42 = 31;
	int8_t x43 = INT8_MAX;
	volatile int8_t x44 = INT8_MAX;

	t8 = (x41-(x42/(x43&x44)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = -1;
	volatile uint64_t x46 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	int8_t x48 = -1;
	uint64_t t9 = 64378931840LLU;

	t9 = (x45-(x46/(x47&x48)));

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = INT16_MAX;
	static uint8_t x52 = UINT8_MAX;

	t10 = (x49-(x50/(x51&x52)));

	if (t10 != -909LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	int64_t x60 = -42LL;
	volatile int64_t t11 = 99914562275LL;

	t11 = (x57-(x58/(x59&x60)));

	if (t11 != -281474976677889LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 47U;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MIN;
	int32_t x68 = -1;
	volatile int32_t t12 = 10;

	t12 = (x65-(x66/(x67&x68)));

	if (t12 != 47) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x70 = INT32_MAX;
	int8_t x71 = -1;
	uint32_t x72 = 54757U;
	uint32_t t13 = 31241U;

	t13 = (x69-(x70/(x71&x72)));

	if (t13 != 26317U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x74 = INT8_MIN;
	static int16_t x76 = -1;
	int64_t t14 = -101629364639869286LL;

	t14 = (x73-(x74/(x75&x76)));

	if (t14 != -11354988362LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x77 = 3U;
	int8_t x78 = 1;
	uint32_t x79 = UINT32_MAX;
	volatile uint64_t t15 = 1475732762047819753LLU;

	t15 = (x77-(x78/(x79&x80)));

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = 9;
	int64_t x83 = -21722381164657LL;
	volatile int64_t t16 = -116460559LL;

	t16 = (x81-(x82/(x83&x84)));

	if (t16 != 9LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x88 = -3716726128LL;
	static volatile int64_t t17 = -7756215LL;

	t17 = (x85-(x86/(x87&x88)));

	if (t17 != -131LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x93 = 385;
	static uint32_t x94 = 0U;
	static int64_t x95 = 653993506814777LL;
	volatile uint64_t x96 = 5136856838149209829LLU;
	uint64_t t18 = 8353228171045139259LLU;

	t18 = (x93-(x94/(x95&x96)));

	if (t18 != 385LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = -1;
	int32_t x98 = -454;
	int32_t x99 = -25;
	int16_t x100 = -1;
	int32_t t19 = -4777;

	t19 = (x97-(x98/(x99&x100)));

	if (t19 != -19) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = 6U;
	int32_t x104 = -128614;
	volatile int32_t t20 = -503;

	t20 = (x101-(x102/(x103&x104)));

	if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x105 = 50U;
	volatile uint16_t x107 = 1738U;
	int64_t x108 = -1LL;
	int64_t t21 = -3LL;

	t21 = (x105-(x106/(x107&x108)));

	if (t21 != 50LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 62;
	volatile int64_t x110 = -2035498377524LL;
	int64_t x111 = INT64_MIN;
	int16_t x112 = -10;
	int64_t t22 = -28239711942770LL;

	t22 = (x109-(x110/(x111&x112)));

	if (t22 != 62LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x114 = -1;
	volatile int64_t x115 = INT64_MAX;
	int8_t x116 = 12;

	t23 = (x113-(x114/(x115&x116)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x117 = -9;
	static int64_t x118 = 1LL;
	static int16_t x119 = INT16_MAX;
	volatile int8_t x120 = INT8_MIN;
	int64_t t24 = -241953749061925128LL;

	t24 = (x117-(x118/(x119&x120)));

	if (t24 != -9LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x121 = 270463U;
	int8_t x123 = 18;
	static int32_t x124 = INT32_MAX;

	t25 = (x121-(x122/(x123&x124)));

	if (t25 != 270463U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x131 = INT32_MAX;
	static int8_t x132 = -3;
	volatile int32_t t26 = 293;

	t26 = (x129-(x130/(x131&x132)));

	if (t26 != -304) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = 54836U;
	int64_t x138 = -54LL;
	uint64_t x139 = 86228449925840613LLU;
	static int8_t x140 = INT8_MIN;
	uint64_t t27 = 2281727LLU;

	t27 = (x137-(x138/(x139&x140)));

	if (t27 != 54623LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x141 = 18U;
	static int16_t x142 = INT16_MIN;
	int16_t x143 = -1875;
	static int32_t x144 = INT32_MIN;

	t28 = (x141-(x142/(x143&x144)));

	if (t28 != 18U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x146 = 33208042418501482LLU;
	volatile uint64_t t29 = 2660388225826943LLU;

	t29 = (x145-(x146/(x147&x148)));

	if (t29 != 9206768015645525067LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x150 = 1;
	int32_t x151 = INT32_MAX;
	int16_t x152 = -1;

	t30 = (x149-(x150/(x151&x152)));

	if (t30 != -197) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x153 = 2167291LLU;
	uint8_t x154 = UINT8_MAX;
	int16_t x156 = INT16_MAX;
	uint64_t t31 = 37630236LLU;

	t31 = (x153-(x154/(x155&x156)));

	if (t31 != 2167290LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x157 = UINT64_MAX;
	static int64_t x158 = 705563093254942159LL;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x157-(x158/(x159&x160)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x161 = 4U;
	int8_t x162 = 1;
	int8_t x163 = -1;
	uint64_t x164 = 170186939797708LLU;

	t33 = (x161-(x162/(x163&x164)));

	if (t33 != 4LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x166 = 0U;
	int32_t x167 = -1;
	uint8_t x168 = UINT8_MAX;

	t34 = (x165-(x166/(x167&x168)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x170 = INT32_MAX;
	int16_t x171 = -1;
	static volatile int8_t x172 = INT8_MIN;
	static int32_t t35 = 13241346;

	t35 = (x169-(x170/(x171&x172)));

	if (t35 != 16778227) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = 856158952325214597LL;
	uint64_t x174 = 479124LLU;
	uint32_t x176 = 4415699U;

	t36 = (x173-(x174/(x175&x176)));

	if (t36 != 856158952325214597LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MAX;
	static int16_t x178 = 5;
	int16_t x180 = INT16_MIN;
	volatile int32_t t37 = -74094;

	t37 = (x177-(x178/(x179&x180)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x182 = INT8_MAX;
	int16_t x183 = 76;
	int8_t x184 = -29;
	static volatile int64_t t38 = -43610098250542863LL;

	t38 = (x181-(x182/(x183&x184)));

	if (t38 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MAX;
	int32_t x187 = INT32_MAX;
	uint32_t x188 = 22U;
	uint32_t t39 = 8258U;

	t39 = (x185-(x186/(x187&x188)));

	if (t39 != 4099741643U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x189 = 11871U;
	static int16_t x190 = INT16_MIN;
	static volatile uint16_t x191 = 8173U;
	static volatile int16_t x192 = -1;
	volatile int32_t t40 = 1296;

	t40 = (x189-(x190/(x191&x192)));

	if (t40 != 11875) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x197 = -185837976953222727LL;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = 10U;
	int16_t x200 = -1;
	volatile int64_t t41 = -573692607600843378LL;

	t41 = (x197-(x198/(x199&x200)));

	if (t41 != -185837976953219451LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x209 = 24U;
	static int64_t x210 = -1LL;
	static uint32_t x211 = UINT32_MAX;
	volatile int32_t x212 = INT32_MIN;

	t42 = (x209-(x210/(x211&x212)));

	if (t42 != 24LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x213 = UINT64_MAX;
	volatile int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x213-(x214/(x215&x216)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x219 = INT16_MAX;
	volatile uint8_t x220 = 1U;

	t44 = (x217-(x218/(x219&x220)));

	if (t44 != 22003LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MIN;
	static volatile int64_t x222 = -7958LL;
	uint8_t x224 = 20U;
	static volatile int64_t t45 = -9346701151LL;

	t45 = (x221-(x222/(x223&x224)));

	if (t45 != -32371LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x225 = UINT16_MAX;
	uint32_t x226 = UINT32_MAX;
	volatile uint32_t x227 = 11U;
	int64_t x228 = -27910321466875518LL;
	volatile int64_t t46 = 949LL;

	t46 = (x225-(x226/(x227&x228)));

	if (t46 != -2147418112LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x229 = 22;
	uint16_t x230 = 9U;
	int8_t x232 = INT8_MIN;
	int64_t t47 = 4050399722LL;

	t47 = (x229-(x230/(x231&x232)));

	if (t47 != 22LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x234 = INT8_MAX;
	uint64_t x236 = 1387303386758091LLU;
	static volatile uint64_t t48 = UINT64_MAX;

	t48 = (x233-(x234/(x235&x236)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = INT64_MAX;
	int32_t x242 = INT32_MIN;
	int8_t x243 = -63;
	int16_t x244 = -1;
	static volatile int64_t t49 = 351449869644LL;

	t49 = (x241-(x242/(x243&x244)));

	if (t49 != 9223372036820688765LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x245 = 51;
	static uint32_t x246 = 81050U;
	static int64_t x247 = INT64_MIN;
	int8_t x248 = -1;
	int64_t t50 = 143940LL;

	t50 = (x245-(x246/(x247&x248)));

	if (t50 != 51LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MIN;
	static volatile uint64_t t51 = 390LLU;

	t51 = (x249-(x250/(x251&x252)));

	if (t51 != 13835058053134680096LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x253 = 8548965948197459LLU;
	int64_t x255 = INT64_MAX;
	volatile int8_t x256 = -1;
	static uint64_t t52 = 754555430251731LLU;

	t52 = (x253-(x254/(x255&x256)));

	if (t52 != 8548965948197459LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MAX;
	int8_t x258 = 0;
	uint8_t x260 = UINT8_MAX;
	static int64_t t53 = INT64_MAX;

	t53 = (x257-(x258/(x259&x260)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -7665717157LL;
	int64_t x264 = INT64_MAX;
	volatile int64_t t54 = 20042210LL;

	t54 = (x261-(x262/(x263&x264)));

	if (t54 != -7665717157LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = -1LL;
	int64_t x266 = 22579805243565279LL;
	volatile int32_t x267 = -25938;
	static uint32_t x268 = 3494U;
	volatile int64_t t55 = 2797348928LL;

	t55 = (x265-(x266/(x267&x268)));

	if (t55 != -10198647354818LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x269 = INT16_MAX;
	int8_t x270 = 0;
	int32_t x271 = -1;
	int16_t x272 = -1;

	t56 = (x269-(x270/(x271&x272)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x273 = INT16_MAX;
	static volatile int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	static uint64_t x276 = 734234LLU;
	volatile uint64_t t57 = 2770211679LLU;

	t57 = (x273-(x274/(x275&x276)));

	if (t57 != 18446718949025470741LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x278 = UINT16_MAX;
	static volatile uint32_t x279 = UINT32_MAX;
	static int32_t x280 = INT32_MIN;
	int64_t t58 = -505LL;

	t58 = (x277-(x278/(x279&x280)));

	if (t58 != -608886LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x286 = 3U;
	static int64_t x287 = -1LL;
	volatile int64_t t59 = -192526578471LL;

	t59 = (x285-(x286/(x287&x288)));

	if (t59 != -125LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x289 = 3168243LL;
	int64_t x290 = 8280484037991LL;
	int64_t x291 = -11LL;
	int8_t x292 = 29;
	int64_t t60 = 1862888875LL;

	t60 = (x289-(x290/(x291&x292)));

	if (t60 != -394305595470LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = 20;
	uint32_t x295 = 118306U;
	uint64_t x296 = UINT64_MAX;
	static uint64_t t61 = 31LLU;

	t61 = (x293-(x294/(x295&x296)));

	if (t61 != 20LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	volatile int64_t x303 = INT64_MIN;
	int32_t x304 = -99821;
	static int64_t t62 = -497LL;

	t62 = (x301-(x302/(x303&x304)));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x311 = UINT64_MAX;
	int32_t x312 = -93379812;
	uint64_t t63 = 138211218953434620LLU;

	t63 = (x309-(x310/(x311&x312)));

	if (t63 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x313 = -1LL;
	uint8_t x314 = 0U;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	volatile int64_t t64 = -88179913LL;

	t64 = (x313-(x314/(x315&x316)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x322 = -6;
	static int16_t x324 = -1;
	volatile uint32_t t65 = 110U;

	t65 = (x321-(x322/(x323&x324)));

	if (t65 != 6517U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x325 = 213193959;
	static int32_t x326 = -142604;
	int64_t x327 = INT64_MAX;
	uint64_t x328 = 875030318208LLU;

	t66 = (x325-(x326/(x327&x328)));

	if (t66 != 192112697LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x334 = UINT64_MAX;
	static uint16_t x336 = 6893U;
	volatile uint64_t t67 = 10LLU;

	t67 = (x333-(x334/(x335&x336)));

	if (t67 != 18444067917598499290LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = -1;
	uint64_t x338 = 184099131923LLU;
	int16_t x339 = -1;
	int16_t x340 = INT16_MAX;
	volatile uint64_t t68 = 371795039106LLU;

	t68 = (x337-(x338/(x339&x340)));

	if (t68 != 18446744073703933184LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x345 = 64229485U;
	volatile int64_t x346 = INT64_MAX;
	int64_t x347 = INT64_MIN;
	static int8_t x348 = -1;
	int64_t t69 = -16116349885814LL;

	t69 = (x345-(x346/(x347&x348)));

	if (t69 != 64229485LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x349 = 139U;
	int64_t x350 = 176525462306155LL;
	static uint8_t x351 = UINT8_MAX;
	uint64_t x352 = 1LLU;
	static uint64_t t70 = 2280025639827661602LLU;

	t70 = (x349-(x350/(x351&x352)));

	if (t70 != 18446567548247245600LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x357 = 0U;
	volatile uint32_t x358 = UINT32_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	uint64_t t71 = 16480252LLU;

	t71 = (x357-(x358/(x359&x360)));

	if (t71 != 18446744073708762536LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x365 = 31031538LLU;
	int64_t x366 = -20LL;
	volatile int32_t x367 = INT32_MIN;
	volatile uint64_t t72 = 3273665176515129344LLU;

	t72 = (x365-(x366/(x367&x368)));

	if (t72 != 31031538LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x369 = -4812;
	int8_t x372 = 1;
	static uint64_t t73 = 48LLU;

	t73 = (x369-(x370/(x371&x372)));

	if (t73 != 18446744073709546805LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x373 = -1LL;
	uint32_t x374 = 10494U;
	int32_t x375 = -1;
	uint64_t x376 = 511651849422168LLU;
	uint64_t t74 = UINT64_MAX;

	t74 = (x373-(x374/(x375&x376)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x385 = 0;
	int64_t x386 = INT64_MIN;
	int16_t x387 = -1;
	static uint8_t x388 = 122U;

	t75 = (x385-(x386/(x387&x388)));

	if (t75 != 75601410138153900LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x389 = INT16_MIN;
	static volatile uint64_t x390 = UINT64_MAX;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = -1;
	volatile uint64_t t76 = 1931LLU;

	t76 = (x389-(x390/(x391&x392)));

	if (t76 != 18374403900871442175LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x393 = INT8_MIN;
	volatile uint8_t x394 = UINT8_MAX;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = INT64_MAX;
	int64_t t77 = -1157423681848529369LL;

	t77 = (x393-(x394/(x395&x396)));

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x402 = INT32_MAX;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = -1;
	uint32_t t78 = 22907816U;

	t78 = (x401-(x402/(x403&x404)));

	if (t78 != 147601U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x405 = -6;
	uint64_t x406 = 37694166LLU;
	int64_t x407 = INT64_MAX;
	int8_t x408 = INT8_MIN;
	uint64_t t79 = 17461676LLU;

	t79 = (x405-(x406/(x407&x408)));

	if (t79 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x413 = 3746744827855385LL;
	volatile int16_t x414 = 58;
	volatile int8_t x415 = -13;
	static uint32_t x416 = 1640U;
	volatile int64_t t80 = 11282LL;

	t80 = (x413-(x414/(x415&x416)));

	if (t80 != 3746744827855385LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;
	uint64_t x420 = 211368158LLU;
	static uint64_t t81 = 8662138646511LLU;

	t81 = (x417-(x418/(x419&x420)));

	if (t81 != 18446743986430488943LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x421 = 3U;
	int8_t x422 = INT8_MIN;
	volatile uint32_t x424 = 616U;
	volatile uint32_t t82 = 6053012U;

	t82 = (x421-(x422/(x423&x424)));

	if (t82 != 4286578692U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MAX;
	uint64_t x431 = UINT64_MAX;
	int16_t x432 = INT16_MAX;
	volatile uint64_t t83 = 106LLU;

	t83 = (x429-(x430/(x431&x432)));

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x433 = UINT16_MAX;
	uint8_t x434 = 1U;
	int64_t x435 = INT64_MIN;
	int16_t x436 = -1;
	int64_t t84 = -7962042LL;

	t84 = (x433-(x434/(x435&x436)));

	if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x437 = -1;
	int64_t x438 = -10749823144LL;
	volatile int16_t x439 = 6223;
	int64_t x440 = 1909769500784LL;
	int64_t t85 = 19861170635636816LL;

	t85 = (x437-(x438/(x439&x440)));

	if (t85 != 1731607LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x441 = 143LL;
	static int8_t x442 = -2;
	int8_t x443 = 1;
	volatile int64_t t86 = 134130059LL;

	t86 = (x441-(x442/(x443&x444)));

	if (t86 != 145LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x445 = INT8_MIN;
	int64_t x446 = INT64_MIN;
	int8_t x447 = INT8_MIN;
	int64_t t87 = -49954602502189952LL;

	t87 = (x445-(x446/(x447&x448)));

	if (t87 != -72057594037928064LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x449 = 1LL;
	uint64_t x450 = 531672179244881736LLU;
	static volatile int8_t x452 = INT8_MIN;

	t88 = (x449-(x450/(x451&x452)));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x457 = -1;
	int64_t x458 = -1LL;
	int64_t x459 = INT64_MAX;
	static int64_t t89 = -1LL;

	t89 = (x457-(x458/(x459&x460)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x461 = 6070879LLU;
	int64_t x462 = INT64_MIN;
	int32_t x463 = INT32_MIN;
	volatile int64_t x464 = INT64_MIN;
	static volatile uint64_t t90 = 10397LLU;

	t90 = (x461-(x462/(x463&x464)));

	if (t90 != 6070878LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x469 = INT8_MIN;
	static uint32_t x470 = 4174U;
	static int16_t x471 = -2249;
	volatile int64_t x472 = -621137894323601LL;
	volatile int64_t t91 = -15LL;

	t91 = (x469-(x470/(x471&x472)));

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x473 = 1993174273133465127LLU;
	volatile uint64_t x474 = 29114926271LLU;
	static uint16_t x475 = 27185U;
	int32_t x476 = INT32_MAX;
	uint64_t t92 = 12490117908LLU;

	t92 = (x473-(x474/(x475&x476)));

	if (t92 != 1993174273132394135LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x477 = -256298832031343169LL;
	int32_t x478 = INT32_MIN;
	uint64_t x479 = 323708LLU;

	t93 = (x477-(x478/(x479&x480)));

	if (t93 != 17947724924947128606LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x485 = 2LLU;
	volatile int8_t x486 = INT8_MIN;
	static int64_t x487 = -1762267985730LL;
	int64_t x488 = 1010896LL;
	static volatile uint64_t t94 = 261854LLU;

	t94 = (x485-(x486/(x487&x488)));

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x489 = -195846557;
	uint8_t x490 = 7U;
	int64_t x492 = 30883LL;
	int64_t t95 = -540223330LL;

	t95 = (x489-(x490/(x491&x492)));

	if (t95 != -195846557LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x497 = 4U;
	static int8_t x498 = INT8_MIN;
	static volatile uint8_t x499 = 2U;

	t96 = (x497-(x498/(x499&x500)));

	if (t96 != 68) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x501 = UINT32_MAX;
	static int8_t x502 = INT8_MIN;
	uint32_t x504 = 379U;
	uint32_t t97 = 176771U;

	t97 = (x501-(x502/(x503&x504)));

	if (t97 != 4283634928U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x505 = INT32_MIN;
	int64_t x506 = -1LL;
	int32_t x507 = -1;
	uint8_t x508 = 4U;

	t98 = (x505-(x506/(x507&x508)));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x509 = -5;
	int16_t x510 = INT16_MAX;
	uint32_t x511 = 32091190U;
	static volatile uint32_t t99 = 2038U;

	t99 = (x509-(x510/(x511&x512)));

	if (t99 != 4294966685U) { NG(); } else { ; }
	
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

