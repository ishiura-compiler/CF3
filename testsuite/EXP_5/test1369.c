#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x2 = UINT16_MAX;
uint64_t x5 = UINT64_MAX;
static uint8_t x6 = 7U;
static volatile uint16_t x11 = UINT16_MAX;
int64_t t4 = 4750301636563980LL;
static int32_t x32 = 5037943;
int8_t x40 = INT8_MAX;
int32_t t7 = 2521064;
int64_t x42 = INT64_MIN;
uint64_t x45 = UINT64_MAX;
int16_t x48 = -1;
volatile int16_t x56 = INT16_MIN;
int16_t x64 = INT16_MIN;
int8_t x71 = 42;
volatile int32_t t15 = -1627617;
volatile uint16_t x78 = UINT16_MAX;
uint16_t x93 = 2U;
static int32_t x95 = -1;
static volatile int32_t t17 = -912187;
volatile uint8_t x116 = 10U;
int16_t x120 = INT16_MAX;
uint16_t x131 = 98U;
int64_t x133 = -8345464578LL;
volatile uint16_t x134 = 0U;
int8_t x136 = INT8_MIN;
static volatile uint64_t t27 = 2934506LLU;
uint32_t x148 = 3386U;
volatile int32_t x153 = -45781590;
int16_t x154 = -1;
static volatile int16_t x155 = 905;
static int8_t x157 = 0;
int32_t x160 = -1;
int8_t x161 = INT8_MIN;
uint8_t x163 = 111U;
volatile int8_t x167 = -1;
int32_t t34 = -42;
int32_t x177 = -151164;
uint32_t x179 = 10457U;
uint16_t x182 = 31950U;
int32_t x185 = -1;
int32_t x186 = -1;
volatile int32_t x187 = INT32_MIN;
static int16_t x192 = -1;
volatile int32_t x199 = -75820360;
int16_t x209 = -9;
static int16_t x211 = INT16_MAX;
uint8_t x215 = 48U;
int16_t x223 = 43;
volatile int8_t x226 = 17;
uint16_t x230 = UINT16_MAX;
volatile int64_t t48 = -77193LL;
static uint8_t x237 = 1U;
int8_t x243 = INT8_MIN;
uint64_t x247 = UINT64_MAX;
int32_t x249 = INT32_MIN;
static volatile int8_t x258 = 1;
uint16_t x277 = 712U;
int32_t x278 = INT32_MAX;
int8_t x281 = 3;
int32_t x282 = INT32_MIN;
volatile int32_t x285 = INT32_MIN;
int32_t t61 = 892;
int64_t x289 = -1LL;
static int16_t x296 = INT16_MAX;
int16_t x297 = INT16_MIN;
static int32_t x298 = INT32_MIN;
volatile int16_t x299 = INT16_MIN;
int8_t x300 = -1;
static volatile int16_t x311 = -1;
int16_t x321 = -1;
volatile uint32_t x322 = 324581643U;
static uint64_t x328 = 186LLU;
uint64_t t71 = 31008697263003LLU;
static int8_t x342 = 45;
uint8_t x351 = 112U;
int8_t x352 = INT8_MIN;
int64_t x353 = INT64_MIN;
int64_t x359 = INT64_MAX;
int64_t t80 = -16686097LL;
uint32_t x379 = UINT32_MAX;
int32_t t84 = 64848496;
uint64_t x381 = 3891112581773LLU;
int8_t x385 = INT8_MIN;
static int32_t x386 = INT32_MIN;
uint64_t t86 = 4183314636LLU;
int64_t x389 = -65673317902822460LL;
int16_t x391 = -1;
volatile int64_t t87 = 27467213425LL;
volatile uint8_t x395 = UINT8_MAX;
static int32_t x396 = INT32_MAX;
static int32_t t92 = -122209759;
volatile uint32_t x442 = UINT32_MAX;
static volatile int64_t x444 = -924590667010665817LL;
int64_t t95 = -1303713LL;
static int16_t x454 = INT16_MIN;
int64_t x460 = -1LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint16_t x3 = 5U;
	static volatile int8_t x4 = 1;
	static int32_t t0 = 1971;

	t0 = (x1/((x2<x3)-x4));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x7 = 91190U;
	volatile uint8_t x8 = 2U;
	uint64_t t1 = 14704456168LLU;

	t1 = (x5/((x6<x7)-x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint8_t x10 = UINT8_MAX;
	static int16_t x12 = -1;
	volatile int32_t t2 = 1042283010;

	t2 = (x9/((x10<x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 67319123U;
	int32_t x18 = INT32_MAX;
	int8_t x19 = -1;
	uint64_t x20 = 3119197684049336583LLU;
	uint64_t t3 = 11778932827946LLU;

	t3 = (x17/((x18<x19)-x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 1;
	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MAX;

	t4 = (x25/((x26<x27)-x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = -8297817;
	int64_t x30 = INT64_MIN;
	static int32_t x31 = 9074;
	int32_t t5 = 616;

	t5 = (x29/((x30<x31)-x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = -1LL;
	static int16_t x34 = INT16_MIN;
	static volatile uint16_t x35 = 16323U;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t6 = 2575LLU;

	t6 = (x33/((x34<x35)-x36));

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = UINT8_MAX;
	uint16_t x38 = UINT16_MAX;
	uint32_t x39 = 1011273030U;

	t7 = (x37/((x38<x39)-x40));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MAX;
	static int16_t x43 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	uint64_t t8 = 42269097738819LLU;

	t8 = (x41/((x42<x43)-x44));

	if (t8 != 1073741823LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = INT16_MAX;
	volatile int8_t x47 = INT8_MIN;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x45/((x46<x47)-x48));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 1;
	static volatile int32_t x50 = -1;
	static int16_t x51 = 37;
	int32_t x52 = 20465;
	static int32_t t10 = 288;

	t10 = (x49/((x50<x51)-x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x53 = 71485269138816819LLU;
	int64_t x54 = -1LL;
	int32_t x55 = INT32_MIN;
	uint64_t t11 = 807758182566486820LLU;

	t11 = (x53/((x54<x55)-x56));

	if (t11 != 2181557285730LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	uint8_t x58 = 9U;
	volatile int32_t x59 = INT32_MAX;
	uint32_t x60 = 54450035U;
	static uint32_t t12 = 466113605U;

	t12 = (x57/((x58<x59)-x60));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = INT16_MIN;
	uint32_t x62 = UINT32_MAX;
	uint32_t x63 = 9304057U;
	volatile int32_t t13 = 34587;

	t13 = (x61/((x62<x63)-x64));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x69 = 2741292685943643826LLU;
	uint32_t x70 = 1124U;
	volatile uint16_t x72 = UINT16_MAX;
	static uint64_t t14 = 70979340080LLU;

	t14 = (x69/((x70<x71)-x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	static volatile int16_t x74 = INT16_MAX;
	int16_t x75 = 15;
	static uint8_t x76 = UINT8_MAX;

	t15 = (x73/((x74<x75)-x76));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -1;
	static volatile int64_t x79 = -1LL;
	static int16_t x80 = INT16_MIN;
	int32_t t16 = -3470;

	t16 = (x77/((x78<x79)-x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x94 = INT32_MIN;
	int32_t x96 = INT32_MAX;

	t17 = (x93/((x94<x95)-x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = -2092830875981254827LL;
	int32_t x98 = -11323;
	static volatile int64_t x99 = -1LL;
	int8_t x100 = -1;
	int64_t t18 = -102019993353LL;

	t18 = (x97/((x98<x99)-x100));

	if (t18 != -1046415437990627413LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x101 = -22;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = -3504767760534645LL;
	volatile uint8_t x104 = 5U;
	volatile int32_t t19 = -967498595;

	t19 = (x101/((x102<x103)-x104));

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = UINT16_MAX;
	uint8_t x106 = UINT8_MAX;
	static volatile uint8_t x107 = UINT8_MAX;
	int32_t x108 = -1;
	volatile int32_t t20 = 9;

	t20 = (x105/((x106<x107)-x108));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = INT64_MIN;
	volatile int8_t x114 = INT8_MIN;
	volatile int64_t x115 = 49608763495548LL;
	static int64_t t21 = 2095782792LL;

	t21 = (x113/((x114<x115)-x116));

	if (t21 != 1024819115206086200LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 476312245023LLU;
	int32_t x118 = -1;
	volatile uint32_t x119 = UINT32_MAX;
	uint64_t t22 = 4138306175915351288LLU;

	t22 = (x117/((x118<x119)-x120));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = INT64_MAX;
	static uint32_t x127 = 973U;
	uint16_t x128 = 913U;
	volatile uint32_t t23 = 186286U;

	t23 = (x125/((x126<x127)-x128));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = 105141640U;
	uint64_t x130 = 390164205737LLU;
	int32_t x132 = INT32_MAX;
	static volatile uint32_t t24 = 49791142U;

	t24 = (x129/((x130<x131)-x132));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x135 = 3250LL;
	volatile int64_t t25 = 59227740535LL;

	t25 = (x133/((x134<x135)-x136));

	if (t25 != -64693523LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x137 = UINT8_MAX;
	int16_t x138 = 10355;
	static volatile uint8_t x139 = 1U;
	uint8_t x140 = 14U;
	int32_t t26 = 1014678;

	t26 = (x137/((x138<x139)-x140));

	if (t26 != -18) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x141 = UINT64_MAX;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MAX;
	int16_t x144 = -1;

	t27 = (x141/((x142<x143)-x144));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x145 = INT64_MAX;
	uint8_t x146 = UINT8_MAX;
	int16_t x147 = INT16_MIN;
	int64_t t28 = -316LL;

	t28 = (x145/((x146<x147)-x148));

	if (t28 != 2147485341LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = 33U;
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = -5882;
	int16_t x152 = -7;
	volatile int32_t t29 = -153374921;

	t29 = (x149/((x150<x151)-x152));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x156 = INT8_MAX;
	volatile int32_t t30 = -272;

	t30 = (x153/((x154<x155)-x156));

	if (t30 != 363345) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x158 = INT32_MIN;
	uint8_t x159 = 38U;
	volatile int32_t t31 = 372628;

	t31 = (x157/((x158<x159)-x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x162 = 374;
	volatile uint32_t x164 = 94662556U;
	volatile uint32_t t32 = 774093U;

	t32 = (x161/((x162<x163)-x164));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = INT32_MAX;
	volatile uint8_t x166 = 2U;
	int8_t x168 = -47;
	volatile int32_t t33 = 7911;

	t33 = (x165/((x166<x167)-x168));

	if (t33 != 45691141) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 12U;
	volatile uint16_t x174 = 31675U;
	volatile uint64_t x175 = UINT64_MAX;
	int16_t x176 = 0;

	t34 = (x173/((x174<x175)-x176));

	if (t34 != 12) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x178 = 4950634434LL;
	uint64_t x180 = 377202105853332LLU;
	uint64_t t35 = 391745008123412LLU;

	t35 = (x177/((x178<x179)-x180));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x181 = 0;
	int32_t x183 = INT32_MIN;
	int8_t x184 = -1;
	volatile int32_t t36 = 895;

	t36 = (x181/((x182<x183)-x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x188 = UINT8_MAX;
	volatile int32_t t37 = -90340;

	t37 = (x185/((x186<x187)-x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = INT64_MIN;
	static int32_t x190 = -1;
	volatile int64_t x191 = 505935060598612LL;
	int64_t t38 = -211416LL;

	t38 = (x189/((x190<x191)-x192));

	if (t38 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x193 = INT64_MAX;
	static uint32_t x194 = 1812570U;
	int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	static int64_t t39 = -1527347908845548175LL;

	t39 = (x193/((x194<x195)-x196));

	if (t39 != 71499008037633920LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = INT32_MIN;
	static int16_t x198 = -1683;
	uint64_t x200 = 5536467701940058291LLU;
	volatile uint64_t t40 = 8922207250LLU;

	t40 = (x197/((x198<x199)-x200));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MAX;
	static uint64_t x203 = UINT64_MAX;
	int64_t x204 = INT64_MAX;
	volatile int64_t t41 = -138569682684322345LL;

	t41 = (x201/((x202<x203)-x204));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x210 = INT8_MIN;
	uint64_t x212 = 3LLU;
	uint64_t t42 = 1328484718465511016LLU;

	t42 = (x209/((x210<x211)-x212));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = 1;
	uint32_t x216 = 290616953U;
	volatile uint32_t t43 = 0U;

	t43 = (x213/((x214<x215)-x216));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = INT32_MIN;
	volatile uint32_t x218 = 32206890U;
	int8_t x219 = INT8_MIN;
	static int16_t x220 = 61;
	static volatile int32_t t44 = 4;

	t44 = (x217/((x218<x219)-x220));

	if (t44 != 35791394) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = 43879095973688LL;
	volatile uint32_t x222 = 404U;
	uint8_t x224 = 105U;
	volatile int64_t t45 = 472324LL;

	t45 = (x221/((x222<x223)-x224));

	if (t45 != -417896152130LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x225 = 1803U;
	volatile int64_t x227 = -14LL;
	uint16_t x228 = 1882U;
	static int32_t t46 = -174156;

	t46 = (x225/((x226<x227)-x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x229 = -1;
	int64_t x231 = -1LL;
	static int16_t x232 = -11963;
	volatile int32_t t47 = -2009380;

	t47 = (x229/((x230<x231)-x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = -1;
	volatile uint64_t x234 = 8145189016869LLU;
	static int64_t x235 = 344036LL;
	int64_t x236 = 58985248011LL;

	t48 = (x233/((x234<x235)-x236));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x238 = 263891;
	int32_t x239 = INT32_MIN;
	int32_t x240 = -1;
	volatile int32_t t49 = -152;

	t49 = (x237/((x238<x239)-x240));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = -1;
	int8_t x242 = 0;
	static uint32_t x244 = 1876U;
	static uint32_t t50 = 6360U;

	t50 = (x241/((x242<x243)-x244));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x245 = 863LL;
	int8_t x246 = -8;
	static volatile int8_t x248 = -1;
	volatile int64_t t51 = 55997169LL;

	t51 = (x245/((x246<x247)-x248));

	if (t51 != 431LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x250 = 49081523538532LLU;
	uint16_t x251 = 0U;
	static volatile uint8_t x252 = 11U;
	volatile int32_t t52 = 5671;

	t52 = (x249/((x250<x251)-x252));

	if (t52 != 195225786) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = INT32_MAX;
	int16_t x254 = -1;
	uint16_t x255 = 3857U;
	int8_t x256 = 51;
	volatile int32_t t53 = 63624;

	t53 = (x253/((x254<x255)-x256));

	if (t53 != -42949672) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x257 = -85;
	int32_t x259 = -161954;
	static int64_t x260 = 1LL;
	int64_t t54 = -4510851LL;

	t54 = (x257/((x258<x259)-x260));

	if (t54 != 85LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = 14;
	int64_t x262 = 0LL;
	int32_t x263 = INT32_MAX;
	static uint64_t x264 = UINT64_MAX;
	volatile uint64_t t55 = 4101225049142LLU;

	t55 = (x261/((x262<x263)-x264));

	if (t55 != 7LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = 1;
	uint32_t x266 = 15813988U;
	int8_t x267 = 0;
	int32_t x268 = 24547;
	int32_t t56 = -17509440;

	t56 = (x265/((x266<x267)-x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = 1;
	int16_t x270 = 4814;
	volatile int32_t x271 = 185969;
	uint64_t x272 = 89917315484LLU;
	uint64_t t57 = 12LLU;

	t57 = (x269/((x270<x271)-x272));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = -73913LL;
	volatile int32_t x275 = INT32_MIN;
	volatile int16_t x276 = INT16_MAX;
	volatile int64_t t58 = 1227821LL;

	t58 = (x273/((x274<x275)-x276));

	if (t58 != 281483566907400LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MAX;
	volatile int32_t t59 = -1531;

	t59 = (x277/((x278<x279)-x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x283 = INT8_MAX;
	uint64_t x284 = 1677167199LLU;
	static uint64_t t60 = 6339621124967LLU;

	t60 = (x281/((x282<x283)-x284));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x286 = 126211LL;
	int64_t x287 = 122927428889716LL;
	int16_t x288 = -1;

	t61 = (x285/((x286<x287)-x288));

	if (t61 != -1073741824) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x290 = INT32_MAX;
	int8_t x291 = -1;
	uint16_t x292 = 3U;
	int64_t t62 = -11247283435934LL;

	t62 = (x289/((x290<x291)-x292));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x293 = 1;
	static uint8_t x294 = 60U;
	int64_t x295 = INT64_MIN;
	volatile int32_t t63 = -3802363;

	t63 = (x293/((x294<x295)-x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t t64 = -4806;

	t64 = (x297/((x298<x299)-x300));

	if (t64 != -16384) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x301 = 146U;
	static uint64_t x302 = UINT64_MAX;
	int64_t x303 = INT64_MAX;
	uint8_t x304 = 55U;
	static uint32_t t65 = 576882331U;

	t65 = (x301/((x302<x303)-x304));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = -1;
	volatile int16_t x306 = INT16_MAX;
	volatile int64_t x307 = -2539LL;
	volatile int8_t x308 = -1;
	int32_t t66 = -344;

	t66 = (x305/((x306<x307)-x308));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MIN;
	static uint32_t x312 = 0U;
	volatile uint32_t t67 = 527U;

	t67 = (x309/((x310<x311)-x312));

	if (t67 != 2147483648U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 26692459U;
	int64_t x314 = INT64_MIN;
	int8_t x315 = -50;
	volatile uint8_t x316 = UINT8_MAX;
	static uint32_t t68 = 2218076U;

	t68 = (x313/((x314<x315)-x316));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int32_t x318 = INT32_MAX;
	uint64_t x319 = 7920LLU;
	uint32_t x320 = UINT32_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (x317/((x318<x319)-x320));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x323 = INT32_MAX;
	int8_t x324 = -6;
	int32_t t70 = 36;

	t70 = (x321/((x322<x323)-x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = -1;
	static uint64_t x326 = 54LLU;
	static int32_t x327 = -1;

	t71 = (x325/((x326<x327)-x328));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x329 = 415U;
	int32_t x330 = -153;
	int32_t x331 = -15;
	int8_t x332 = INT8_MIN;
	uint32_t t72 = 51270U;

	t72 = (x329/((x330<x331)-x332));

	if (t72 != 3U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = INT16_MIN;
	uint8_t x334 = UINT8_MAX;
	static int32_t x335 = 294499884;
	int64_t x336 = INT64_MAX;
	static int64_t t73 = 52651459697LL;

	t73 = (x333/((x334<x335)-x336));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = INT32_MIN;
	int64_t x338 = -1LL;
	static int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x337/((x338<x339)-x340));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = 29U;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MAX;
	volatile int32_t t75 = 1061028;

	t75 = (x341/((x342<x343)-x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x345 = 81U;
	volatile uint8_t x346 = UINT8_MAX;
	static int32_t x347 = -11990558;
	uint64_t x348 = UINT64_MAX;
	static volatile uint64_t t76 = 126965434811LLU;

	t76 = (x345/((x346<x347)-x348));

	if (t76 != 81LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x349 = 15U;
	int8_t x350 = INT8_MIN;
	static volatile int32_t t77 = 85683162;

	t77 = (x349/((x350<x351)-x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x354 = 67964916330542LLU;
	static volatile int16_t x355 = -21;
	static volatile int64_t x356 = -1LL;
	int64_t t78 = 10750LL;

	t78 = (x353/((x354<x355)-x356));

	if (t78 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MIN;
	int16_t x360 = -11599;
	int32_t t79 = -30091;

	t79 = (x357/((x358<x359)-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x361 = 99518566599911577LL;
	int32_t x362 = -1233;
	uint64_t x363 = 15993848LLU;
	static int8_t x364 = INT8_MIN;

	t80 = (x361/((x362<x363)-x364));

	if (t80 != 777488801561809LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = -1;
	int8_t x367 = -1;
	static int16_t x368 = INT16_MIN;
	static uint64_t t81 = 535960488LLU;

	t81 = (x365/((x366<x367)-x368));

	if (t81 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MAX;
	uint8_t x370 = 31U;
	uint16_t x371 = 15385U;
	int32_t x372 = INT32_MAX;
	int32_t t82 = 68486854;

	t82 = (x369/((x370<x371)-x372));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x373 = -1;
	volatile int64_t x374 = -7522254LL;
	int8_t x375 = INT8_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t83 = 1;

	t83 = (x373/((x374<x375)-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x377 = 3U;
	uint16_t x378 = UINT16_MAX;
	int16_t x380 = -1;

	t84 = (x377/((x378<x379)-x380));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x382 = -469;
	static int16_t x383 = -161;
	int8_t x384 = INT8_MIN;
	uint64_t t85 = 33282836557068LLU;

	t85 = (x381/((x382<x383)-x384));

	if (t85 != 30163663424LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x387 = INT32_MAX;
	volatile uint64_t x388 = UINT64_MAX;

	t86 = (x385/((x386<x387)-x388));

	if (t86 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x390 = UINT32_MAX;
	static int64_t x392 = 6645LL;

	t87 = (x389/((x390<x391)-x392));

	if (t87 != 9883117818332LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = -1297;
	int64_t x394 = -133343100LL;
	int32_t t88 = -1069361;

	t88 = (x393/((x394<x395)-x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = INT16_MAX;
	volatile int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	static int32_t t89 = -49128333;

	t89 = (x401/((x402<x403)-x404));

	if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x405 = UINT64_MAX;
	volatile int64_t x406 = INT64_MIN;
	volatile int32_t x407 = INT32_MAX;
	int64_t x408 = INT64_MAX;
	volatile uint64_t t90 = 102180274306LLU;

	t90 = (x405/((x406<x407)-x408));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x409 = 1575898U;
	volatile int16_t x410 = -1264;
	uint64_t x411 = 1652720259507LLU;
	volatile uint64_t x412 = UINT64_MAX;
	volatile uint64_t t91 = 8701211254185231LLU;

	t91 = (x409/((x410<x411)-x412));

	if (t91 != 1575898LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MIN;
	uint32_t x427 = 196U;
	static volatile int16_t x428 = -210;

	t92 = (x425/((x426<x427)-x428));

	if (t92 != -10226112) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = -15913;
	int64_t x430 = INT64_MAX;
	int16_t x431 = INT16_MIN;
	static int32_t x432 = INT32_MAX;
	static volatile int32_t t93 = 256990682;

	t93 = (x429/((x430<x431)-x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MIN;
	static int16_t x434 = -127;
	int64_t x435 = INT64_MAX;
	int16_t x436 = INT16_MAX;
	int32_t t94 = -193;

	t94 = (x433/((x434<x435)-x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x441 = INT32_MIN;
	volatile int16_t x443 = INT16_MIN;

	t95 = (x441/((x442<x443)-x444));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MIN;
	static volatile int32_t x446 = INT32_MAX;
	static volatile int64_t x447 = -785745981LL;
	int16_t x448 = -1;
	int32_t t96 = -467;

	t96 = (x445/((x446<x447)-x448));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x449 = -1;
	int8_t x450 = INT8_MIN;
	static int8_t x451 = INT8_MIN;
	uint8_t x452 = 31U;
	volatile int32_t t97 = -599997;

	t97 = (x449/((x450<x451)-x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x453 = UINT64_MAX;
	static int8_t x455 = INT8_MIN;
	int16_t x456 = INT16_MIN;
	volatile uint64_t t98 = 1653298391469414639LLU;

	t98 = (x453/((x454<x455)-x456));

	if (t98 != 562932774076400LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = -1LL;
	static int32_t x458 = INT32_MIN;
	int8_t x459 = INT8_MAX;
	volatile int64_t t99 = 1926569LL;

	t99 = (x457/((x458<x459)-x460));

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

