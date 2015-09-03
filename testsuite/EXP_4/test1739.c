#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -1LL;
static int16_t x2 = INT16_MIN;
int32_t t0 = -15093208;
int32_t x9 = INT32_MAX;
volatile uint32_t x13 = 1013U;
volatile int32_t t2 = 1;
volatile int8_t x42 = INT8_MIN;
volatile int32_t t6 = -232850;
uint16_t x51 = 163U;
int32_t t7 = -15436;
int64_t x53 = INT64_MIN;
int64_t x57 = -13377851099LL;
int64_t x64 = -1LL;
static int64_t x65 = 9608549LL;
static int32_t x66 = INT32_MAX;
static int8_t x71 = -1;
int32_t t13 = 33149;
volatile int32_t t15 = 50706541;
volatile int8_t x91 = INT8_MIN;
int8_t x96 = 4;
static int32_t t18 = -234411001;
volatile int32_t x97 = -1;
static int32_t t20 = -42;
static volatile int64_t x107 = -59040272288136125LL;
uint16_t x115 = 32024U;
int16_t x118 = -1;
volatile int8_t x119 = -17;
static int64_t x134 = INT64_MIN;
static int8_t x135 = 5;
volatile int32_t x149 = INT32_MIN;
volatile int32_t x158 = 3;
int32_t t33 = -223;
int8_t x179 = INT8_MIN;
int32_t x180 = INT32_MIN;
int32_t t35 = 0;
uint32_t x181 = 196298122U;
int32_t x187 = INT32_MIN;
int32_t x189 = INT32_MIN;
volatile uint8_t x190 = 15U;
int8_t x191 = -1;
int8_t x197 = -13;
int8_t x199 = 1;
int8_t x211 = -1;
uint16_t x219 = 172U;
int8_t x229 = 1;
int8_t x234 = 1;
static int16_t x238 = INT16_MIN;
uint64_t x242 = 1LLU;
static uint32_t x248 = 69119U;
volatile int32_t t50 = -535581;
int8_t x257 = INT8_MAX;
volatile int64_t x263 = -1LL;
int8_t x267 = -3;
int64_t x274 = -1LL;
int64_t x278 = INT64_MIN;
int32_t t57 = -107057645;
int8_t x291 = 7;
int32_t x292 = -1;
volatile int32_t t59 = 145560;
int64_t x298 = INT64_MIN;
int32_t x305 = 100;
uint64_t x306 = 57814537566460843LLU;
uint8_t x307 = 13U;
static volatile int8_t x312 = -4;
static int8_t x313 = INT8_MIN;
int64_t x331 = INT64_MAX;
volatile int8_t x332 = INT8_MIN;
static volatile int16_t x334 = -16;
int32_t t67 = 232755;
int8_t x342 = -1;
volatile int64_t x343 = 6236LL;
uint64_t x344 = 8LLU;
int64_t x345 = INT64_MAX;
uint64_t x360 = UINT64_MAX;
static int64_t x361 = 527LL;
uint32_t x370 = 8U;
volatile uint32_t x372 = 125837729U;
volatile uint64_t x375 = UINT64_MAX;
volatile int8_t x376 = 27;
static uint8_t x378 = 53U;
static int8_t x380 = INT8_MAX;
volatile int64_t x381 = -1LL;
static volatile int16_t x384 = INT16_MIN;
uint64_t x386 = 1468691837704LLU;
volatile uint8_t x397 = 37U;
uint8_t x400 = 1U;
static int32_t t81 = 243500;
uint16_t x402 = 43U;
int32_t x407 = 50;
static uint16_t x414 = UINT16_MAX;
uint32_t x422 = 218076280U;
int8_t x430 = 2;
uint32_t x432 = UINT32_MAX;
volatile int32_t t88 = -1;
volatile int8_t x436 = -14;
static volatile int8_t x440 = INT8_MAX;
int32_t t92 = -9571;
int16_t x451 = INT16_MAX;
int8_t x459 = INT8_MAX;
uint32_t x469 = 14U;


void f0(void) {
	int8_t x3 = -1;
	static uint8_t x4 = 25U;

	t0 = (x1<=(x2/(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = INT8_MAX;
	volatile int32_t x11 = 183;
	uint8_t x12 = 55U;
	int32_t t1 = 81;

	t1 = (x9<=(x10/(x11&x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = UINT32_MAX;
	int64_t x16 = INT64_MAX;

	t2 = (x13<=(x14/(x15&x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 486U;
	static uint64_t x26 = 14149616135LLU;
	int16_t x27 = -1;
	int8_t x28 = INT8_MAX;
	volatile int32_t t3 = -6;

	t3 = (x25<=(x26/(x27&x28)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x33 = INT64_MIN;
	int32_t x34 = 101;
	volatile uint32_t x35 = UINT32_MAX;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t4 = 94873;

	t4 = (x33<=(x34/(x35&x36)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = 318U;
	uint64_t x38 = UINT64_MAX;
	volatile uint64_t x39 = 48117615579752098LLU;
	uint64_t x40 = 91239LLU;
	volatile int32_t t5 = 8;

	t5 = (x37<=(x38/(x39&x40)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x41 = -736904838LL;
	int8_t x43 = -1;
	int64_t x44 = INT64_MIN;

	t6 = (x41<=(x42/(x43&x44)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x49 = 11354U;
	int8_t x50 = 37;
	static int16_t x52 = -65;

	t7 = (x49<=(x50/(x51&x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x54 = -3;
	static int32_t x55 = -1;
	static uint64_t x56 = 130442799437LLU;
	static int32_t t8 = -186922;

	t8 = (x53<=(x54/(x55&x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x58 = INT32_MIN;
	volatile int16_t x59 = INT16_MIN;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t9 = 1722576;

	t9 = (x57<=(x58/(x59&x60)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x61 = UINT8_MAX;
	volatile uint16_t x62 = 2U;
	int16_t x63 = INT16_MAX;
	volatile int32_t t10 = 6;

	t10 = (x61<=(x62/(x63&x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x67 = 188328654U;
	uint16_t x68 = UINT16_MAX;
	int32_t t11 = -162237;

	t11 = (x65<=(x66/(x67&x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MIN;
	static int16_t x72 = INT16_MAX;
	int32_t t12 = -1778314;

	t12 = (x69<=(x70/(x71&x72)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int64_t x74 = INT64_MIN;
	static volatile int8_t x75 = -1;
	int8_t x76 = INT8_MIN;

	t13 = (x73<=(x74/(x75&x76)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = 7;
	uint32_t x78 = 1342912127U;
	int64_t x79 = 2007519325296986LL;
	uint64_t x80 = UINT64_MAX;
	int32_t t14 = 28;

	t14 = (x77<=(x78/(x79&x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = 13291U;
	int32_t x82 = 464259894;
	int16_t x83 = 8;
	static int64_t x84 = INT64_MAX;

	t15 = (x81<=(x82/(x83&x84)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x85 = INT16_MIN;
	uint8_t x86 = 1U;
	volatile uint64_t x87 = 395236850481782LLU;
	int64_t x88 = -1LL;
	volatile int32_t t16 = 2;

	t16 = (x85<=(x86/(x87&x88)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MIN;
	int32_t x92 = -42;
	int32_t t17 = -38147099;

	t17 = (x89<=(x90/(x91&x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x93 = INT64_MAX;
	int16_t x94 = -1;
	static uint64_t x95 = UINT64_MAX;

	t18 = (x93<=(x94/(x95&x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x98 = 0U;
	volatile uint32_t x99 = 94U;
	uint64_t x100 = 1199512037311LLU;
	int32_t t19 = 335748938;

	t19 = (x97<=(x98/(x99&x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x101 = 46963016U;
	int16_t x102 = INT16_MAX;
	int32_t x103 = INT32_MAX;
	static int32_t x104 = 2338024;

	t20 = (x101<=(x102/(x103&x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	volatile uint16_t x106 = 3751U;
	static volatile int16_t x108 = INT16_MIN;
	int32_t t21 = -525121003;

	t21 = (x105<=(x106/(x107&x108)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	static int64_t x110 = INT64_MIN;
	static volatile int8_t x111 = INT8_MIN;
	int64_t x112 = INT64_MIN;
	int32_t t22 = -67;

	t22 = (x109<=(x110/(x111&x112)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = 245LLU;
	int16_t x114 = 5499;
	uint32_t x116 = 76U;
	volatile int32_t t23 = 3;

	t23 = (x113<=(x114/(x115&x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -72295672714686740LL;
	int32_t x120 = 16208187;
	volatile int32_t t24 = -40;

	t24 = (x117<=(x118/(x119&x120)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 7312444872748LLU;
	uint64_t x122 = 864507680LLU;
	static int32_t x123 = 3880852;
	uint64_t x124 = 953367315259LLU;
	int32_t t25 = 552050570;

	t25 = (x121<=(x122/(x123&x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x133 = INT64_MAX;
	static int64_t x136 = -1LL;
	volatile int32_t t26 = 12096277;

	t26 = (x133<=(x134/(x135&x136)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 3U;
	static int8_t x142 = 4;
	uint64_t x143 = 1717223869896939LLU;
	volatile int64_t x144 = -100025LL;
	volatile int32_t t27 = 6273;

	t27 = (x141<=(x142/(x143&x144)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x145 = 3U;
	uint8_t x146 = 4U;
	uint16_t x147 = 1U;
	volatile uint16_t x148 = UINT16_MAX;
	int32_t t28 = -267896543;

	t28 = (x145<=(x146/(x147&x148)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x150 = 45U;
	int8_t x151 = 34;
	static volatile int8_t x152 = -1;
	int32_t t29 = 0;

	t29 = (x149<=(x150/(x151&x152)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x153 = INT32_MIN;
	uint32_t x154 = 5U;
	int8_t x155 = -1;
	static uint32_t x156 = 1322274253U;
	int32_t t30 = -41485427;

	t30 = (x153<=(x154/(x155&x156)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x157 = 5U;
	static int16_t x159 = INT16_MAX;
	uint32_t x160 = UINT32_MAX;
	int32_t t31 = 3;

	t31 = (x157<=(x158/(x159&x160)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = 6U;
	int32_t x162 = INT32_MIN;
	uint64_t x163 = 554164242587416107LLU;
	int64_t x164 = INT64_MAX;
	int32_t t32 = 1;

	t32 = (x161<=(x162/(x163&x164)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = 536LL;
	static int16_t x170 = -3;
	static int32_t x171 = INT32_MIN;
	volatile int8_t x172 = -1;

	t33 = (x169<=(x170/(x171&x172)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = 9U;
	uint32_t x174 = 22U;
	static int16_t x175 = INT16_MIN;
	uint64_t x176 = 14302582905LLU;
	static volatile int32_t t34 = -35231980;

	t34 = (x173<=(x174/(x175&x176)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = -1;
	int64_t x178 = -1LL;

	t35 = (x177<=(x178/(x179&x180)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x182 = UINT64_MAX;
	static volatile int16_t x183 = -1;
	volatile uint16_t x184 = 7U;
	int32_t t36 = -2194296;

	t36 = (x181<=(x182/(x183&x184)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = 1423;
	int32_t x186 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	volatile int32_t t37 = -3826;

	t37 = (x185<=(x186/(x187&x188)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x192 = UINT32_MAX;
	int32_t t38 = 214;

	t38 = (x189<=(x190/(x191&x192)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MIN;
	int64_t x196 = -198LL;
	int32_t t39 = 1;

	t39 = (x193<=(x194/(x195&x196)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x198 = 2U;
	static volatile uint64_t x200 = 497585120690393LLU;
	int32_t t40 = -135243;

	t40 = (x197<=(x198/(x199&x200)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x205 = UINT32_MAX;
	static volatile uint32_t x206 = 286U;
	int32_t x207 = INT32_MIN;
	volatile int16_t x208 = -1;
	int32_t t41 = 12362262;

	t41 = (x205<=(x206/(x207&x208)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MIN;
	uint8_t x212 = UINT8_MAX;
	int32_t t42 = -953312;

	t42 = (x209<=(x210/(x211&x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile uint64_t x218 = 17690LLU;
	volatile int64_t x220 = INT64_MAX;
	int32_t t43 = 19212159;

	t43 = (x217<=(x218/(x219&x220)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 1138351168LLU;
	static int64_t x222 = INT64_MIN;
	volatile int8_t x223 = -1;
	volatile uint16_t x224 = UINT16_MAX;
	int32_t t44 = 225;

	t44 = (x221<=(x222/(x223&x224)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x230 = 11U;
	int32_t x231 = INT32_MAX;
	int64_t x232 = INT64_MAX;
	int32_t t45 = -15803;

	t45 = (x229<=(x230/(x231&x232)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x233 = 14403547LLU;
	volatile int8_t x235 = 3;
	uint32_t x236 = 290230U;
	static volatile int32_t t46 = 429;

	t46 = (x233<=(x234/(x235&x236)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = INT16_MIN;
	int16_t x239 = INT16_MAX;
	uint64_t x240 = 19120324659LLU;
	int32_t t47 = 14012;

	t47 = (x237<=(x238/(x239&x240)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x241 = INT8_MAX;
	volatile int8_t x243 = INT8_MIN;
	static int16_t x244 = INT16_MIN;
	int32_t t48 = 180;

	t48 = (x241<=(x242/(x243&x244)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = -1;
	uint8_t x246 = 20U;
	int64_t x247 = 13126820651879846LL;
	volatile int32_t t49 = 415535;

	t49 = (x245<=(x246/(x247&x248)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MAX;
	int8_t x252 = 12;

	t50 = (x249<=(x250/(x251&x252)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = -3;
	volatile uint8_t x254 = 89U;
	int32_t x255 = 51271;
	int64_t x256 = INT64_MAX;
	static int32_t t51 = 32514;

	t51 = (x253<=(x254/(x255&x256)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x258 = -6;
	int32_t x259 = -2846573;
	int16_t x260 = INT16_MIN;
	int32_t t52 = -8499345;

	t52 = (x257<=(x258/(x259&x260)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x261 = INT64_MAX;
	volatile uint8_t x262 = 10U;
	int64_t x264 = INT64_MAX;
	int32_t t53 = -9877;

	t53 = (x261<=(x262/(x263&x264)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x265 = 9446536U;
	volatile uint32_t x266 = UINT32_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t54 = -4320219;

	t54 = (x265<=(x266/(x267&x268)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = 255;
	uint16_t x275 = UINT16_MAX;
	uint32_t x276 = 40U;
	volatile int32_t t55 = -3721;

	t55 = (x273<=(x274/(x275&x276)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = -1;
	uint16_t x279 = 54U;
	int16_t x280 = 39;
	int32_t t56 = -3;

	t56 = (x277<=(x278/(x279&x280)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x281 = INT32_MAX;
	int8_t x282 = -1;
	int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MIN;

	t57 = (x281<=(x282/(x283&x284)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = 54;
	int64_t x287 = INT64_MIN;
	int8_t x288 = -31;
	volatile int32_t t58 = -92;

	t58 = (x285<=(x286/(x287&x288)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x289 = 1815U;
	uint8_t x290 = 93U;

	t59 = (x289<=(x290/(x291&x292)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x297 = 126738686685623649LLU;
	volatile int64_t x299 = -1LL;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t60 = 32755793;

	t60 = (x297<=(x298/(x299&x300)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x308 = -1;
	static int32_t t61 = -769110;

	t61 = (x305<=(x306/(x307&x308)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = INT16_MIN;
	uint8_t x310 = UINT8_MAX;
	volatile int32_t x311 = INT32_MIN;
	static int32_t t62 = 994900066;

	t62 = (x309<=(x310/(x311&x312)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x314 = 1U;
	int64_t x315 = -4423LL;
	int32_t x316 = -245;
	volatile int32_t t63 = 26516;

	t63 = (x313<=(x314/(x315&x316)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = -504362;
	volatile int16_t x322 = 7;
	int16_t x323 = -1518;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t64 = 87175;

	t64 = (x321<=(x322/(x323&x324)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x325 = 3717U;
	int32_t x326 = INT32_MIN;
	uint16_t x327 = 39U;
	int32_t x328 = -1;
	volatile int32_t t65 = -6456;

	t65 = (x325<=(x326/(x327&x328)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x329 = 229072207LLU;
	static uint64_t x330 = 935LLU;
	int32_t t66 = 34065;

	t66 = (x329<=(x330/(x331&x332)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x333 = UINT32_MAX;
	static int8_t x335 = INT8_MIN;
	int32_t x336 = 322207;

	t67 = (x333<=(x334/(x335&x336)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x341 = UINT8_MAX;
	volatile int32_t t68 = 389323;

	t68 = (x341<=(x342/(x343&x344)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x346 = INT32_MAX;
	int16_t x347 = -1;
	static uint32_t x348 = 219749U;
	volatile int32_t t69 = -23;

	t69 = (x345<=(x346/(x347&x348)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = 8126;
	int16_t x350 = -120;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MAX;
	static volatile int32_t t70 = -379448;

	t70 = (x349<=(x350/(x351&x352)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x353 = 2;
	uint64_t x354 = UINT64_MAX;
	static int16_t x355 = -1863;
	int32_t x356 = INT32_MIN;
	int32_t t71 = 20884399;

	t71 = (x353<=(x354/(x355&x356)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x357 = -15;
	int16_t x358 = -3;
	int32_t x359 = -93;
	int32_t t72 = -44282;

	t72 = (x357<=(x358/(x359&x360)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 194654840874227LLU;
	int8_t x364 = -1;
	volatile int32_t t73 = 47;

	t73 = (x361<=(x362/(x363&x364)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = INT64_MIN;
	volatile int64_t x371 = INT64_MAX;
	int32_t t74 = 344970;

	t74 = (x369<=(x370/(x371&x372)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x373 = -2;
	volatile int64_t x374 = INT64_MIN;
	volatile int32_t t75 = -213477;

	t75 = (x373<=(x374/(x375&x376)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x377 = -170924LL;
	volatile uint32_t x379 = UINT32_MAX;
	int32_t t76 = 347464;

	t76 = (x377<=(x378/(x379&x380)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x382 = INT32_MAX;
	volatile int32_t x383 = -1;
	volatile int32_t t77 = -12037;

	t77 = (x381<=(x382/(x383&x384)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x385 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	static volatile int8_t x388 = -1;
	volatile int32_t t78 = 19;

	t78 = (x385<=(x386/(x387&x388)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x389 = -1;
	static volatile int64_t x390 = INT64_MAX;
	int32_t x391 = -7904;
	int16_t x392 = INT16_MAX;
	int32_t t79 = 906;

	t79 = (x389<=(x390/(x391&x392)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x393 = INT8_MIN;
	volatile int16_t x394 = 19;
	int64_t x395 = -1LL;
	uint16_t x396 = 7U;
	int32_t t80 = 12500478;

	t80 = (x393<=(x394/(x395&x396)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x398 = INT64_MAX;
	int16_t x399 = -1;

	t81 = (x397<=(x398/(x399&x400)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x401 = INT8_MIN;
	uint64_t x403 = UINT64_MAX;
	uint8_t x404 = 12U;
	int32_t t82 = -13;

	t82 = (x401<=(x402/(x403&x404)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MAX;
	static volatile int16_t x408 = -1025;
	int32_t t83 = -1;

	t83 = (x405<=(x406/(x407&x408)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x413 = -1;
	int8_t x415 = -5;
	volatile int16_t x416 = INT16_MIN;
	int32_t t84 = -220664849;

	t84 = (x413<=(x414/(x415&x416)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x417 = INT8_MIN;
	volatile uint8_t x418 = 0U;
	int8_t x419 = -1;
	int32_t x420 = INT32_MIN;
	int32_t t85 = 1866;

	t85 = (x417<=(x418/(x419&x420)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x421 = -1;
	volatile uint8_t x423 = UINT8_MAX;
	uint16_t x424 = UINT16_MAX;
	static volatile int32_t t86 = -8;

	t86 = (x421<=(x422/(x423&x424)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = -1;
	int16_t x426 = INT16_MIN;
	static int32_t x427 = -413706136;
	int64_t x428 = INT64_MIN;
	volatile int32_t t87 = 49969944;

	t87 = (x425<=(x426/(x427&x428)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = INT8_MAX;
	volatile uint32_t x431 = 237U;

	t88 = (x429<=(x430/(x431&x432)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MAX;
	int64_t x435 = 344985340LL;
	int32_t t89 = -58996;

	t89 = (x433<=(x434/(x435&x436)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MAX;
	uint16_t x439 = 689U;
	volatile int32_t t90 = 15057606;

	t90 = (x437<=(x438/(x439&x440)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x441 = -25425395093756LL;
	static volatile uint16_t x442 = UINT16_MAX;
	uint64_t x443 = 1265807732550649LLU;
	int16_t x444 = -9604;
	int32_t t91 = 15748;

	t91 = (x441<=(x442/(x443&x444)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x445 = INT32_MIN;
	static volatile int8_t x446 = 1;
	int16_t x447 = INT16_MIN;
	int64_t x448 = INT64_MAX;

	t92 = (x445<=(x446/(x447&x448)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x449 = 2U;
	int16_t x450 = 13692;
	static volatile int64_t x452 = -729747260357477034LL;
	int32_t t93 = 7;

	t93 = (x449<=(x450/(x451&x452)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = INT32_MAX;
	uint64_t x454 = 842594871782279096LLU;
	volatile uint32_t x455 = 450832U;
	uint64_t x456 = 3717818725807LLU;
	static int32_t t94 = 72632640;

	t94 = (x453<=(x454/(x455&x456)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x457 = INT32_MIN;
	uint8_t x458 = UINT8_MAX;
	uint16_t x460 = 87U;
	volatile int32_t t95 = -920;

	t95 = (x457<=(x458/(x459&x460)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x461 = INT16_MAX;
	static int8_t x462 = INT8_MIN;
	static int64_t x463 = 31914LL;
	uint16_t x464 = 1887U;
	static int32_t t96 = -5404;

	t96 = (x461<=(x462/(x463&x464)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x465 = INT16_MIN;
	uint64_t x466 = UINT64_MAX;
	static int64_t x467 = INT64_MIN;
	static int64_t x468 = INT64_MIN;
	volatile int32_t t97 = -7;

	t97 = (x465<=(x466/(x467&x468)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x470 = -1LL;
	volatile int64_t x471 = 109706631278791089LL;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t98 = 2646631;

	t98 = (x469<=(x470/(x471&x472)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x473 = -7440;
	static int16_t x474 = INT16_MAX;
	int8_t x475 = -1;
	int8_t x476 = INT8_MIN;
	static volatile int32_t t99 = -943;

	t99 = (x473<=(x474/(x475&x476)));

	if (t99 != 1) { NG(); } else { ; }
	
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

