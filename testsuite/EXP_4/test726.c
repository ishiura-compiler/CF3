#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = 0LL;
uint64_t x10 = UINT64_MAX;
static uint16_t x16 = 306U;
static volatile int32_t t2 = -467564791;
int8_t x22 = INT8_MIN;
uint64_t t3 = 1369356901772140119LLU;
volatile uint32_t x25 = 819598006U;
uint32_t x51 = 16U;
static int64_t x52 = INT64_MIN;
static uint16_t x78 = UINT16_MAX;
int16_t x80 = -6;
static int16_t x81 = 903;
volatile int8_t x89 = INT8_MIN;
static volatile int8_t x96 = INT8_MAX;
volatile uint64_t x97 = UINT64_MAX;
static volatile uint64_t t19 = 99662532625186055LLU;
static uint32_t x109 = 28318633U;
volatile uint8_t x112 = 2U;
int64_t x116 = INT64_MAX;
volatile int64_t x120 = -581171LL;
int64_t t23 = -41LL;
int64_t x125 = 4086854483LL;
volatile uint8_t x127 = UINT8_MAX;
int32_t x128 = INT32_MAX;
int16_t x140 = INT16_MIN;
uint32_t t25 = 2020042869U;
int8_t x145 = 46;
int64_t t26 = 68734681553851LL;
volatile uint64_t t28 = 2055LLU;
int32_t x157 = INT32_MIN;
int32_t x163 = -1;
int32_t t30 = -1;
int16_t x165 = -1;
uint64_t x180 = 49391747LLU;
int64_t x187 = INT64_MAX;
uint64_t x201 = UINT64_MAX;
int16_t x203 = INT16_MIN;
uint64_t x205 = 2LLU;
volatile uint64_t t36 = 2243758667085861LLU;
static volatile uint16_t x215 = UINT16_MAX;
volatile int32_t x216 = -829243;
int64_t x220 = INT64_MIN;
int64_t t39 = INT64_MAX;
uint32_t x225 = 14187U;
static int16_t x227 = 1021;
int32_t x231 = 161;
static volatile int64_t t43 = 627508732235999386LL;
int32_t x252 = -11492;
int64_t x260 = 1700336026073537LL;
volatile uint32_t x266 = UINT32_MAX;
int64_t x267 = INT64_MIN;
int8_t x285 = INT8_MAX;
uint8_t x291 = 1U;
int64_t t52 = 1818LL;
volatile int64_t t53 = 3822022LL;
static volatile int32_t t54 = -2;
volatile int32_t t56 = -106086304;
static uint8_t x330 = UINT8_MAX;
volatile int8_t x356 = INT8_MIN;
volatile uint8_t x365 = 28U;
int64_t x367 = -225728212720513945LL;
static uint16_t x369 = 30U;
int64_t x371 = -1LL;
int16_t x377 = INT16_MIN;
int8_t x389 = -1;
int64_t x390 = INT64_MIN;
uint32_t x391 = 155U;
uint64_t x392 = 3138LLU;
volatile uint8_t x408 = 6U;
int32_t x411 = -281294912;
static uint8_t x416 = 7U;
uint8_t x418 = 102U;
uint32_t x419 = 5U;
volatile uint32_t t71 = 2432U;
int16_t x422 = INT16_MIN;
int32_t x426 = -5488;
int64_t x440 = 25LL;
static volatile uint8_t x441 = 3U;
int16_t x445 = INT16_MAX;
static int8_t x455 = 5;
uint32_t x456 = 14390522U;
int32_t t80 = -7;
static int16_t x470 = INT16_MIN;
int8_t x473 = -42;
volatile int32_t t82 = 0;
int32_t x488 = -111104;
int64_t t84 = 30067LL;
static int16_t x494 = -31;
uint64_t t86 = 21084094LLU;
static volatile int16_t x506 = 15258;
volatile uint16_t x515 = UINT16_MAX;
int64_t x519 = INT64_MIN;
volatile uint8_t x521 = UINT8_MAX;
volatile uint8_t x522 = UINT8_MAX;
volatile int8_t x526 = -8;
uint16_t x529 = 2771U;
int64_t x532 = 242415418476506LL;
int32_t x534 = -7;
int32_t t95 = -8;
int32_t x547 = -18468573;
volatile int8_t x554 = INT8_MIN;
static volatile int32_t x555 = -1;


void f0(void) {
	static int64_t x11 = INT64_MIN;
	uint32_t x12 = UINT32_MAX;
	static volatile uint64_t t0 = 381228474LLU;

	t0 = (x9&(x10/(x11%x12)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	int32_t t1 = -300277647;

	t1 = (x13&(x14/(x15%x16)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x17 = INT16_MIN;
	volatile uint16_t x18 = 1915U;
	volatile int8_t x19 = -3;
	int8_t x20 = 13;

	t2 = (x17&(x18/(x19%x20)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	int32_t x23 = -4074026;
	uint64_t x24 = UINT64_MAX;

	t3 = (x21&(x22/(x23%x24)));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x26 = -1893;
	int64_t x27 = INT64_MAX;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t4 = -15848LL;

	t4 = (x25&(x26/(x27%x28)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = UINT8_MAX;
	uint16_t x30 = 1222U;
	int32_t x31 = INT32_MAX;
	volatile uint64_t x32 = 79316032948LLU;
	volatile uint64_t t5 = 1667402868892LLU;

	t5 = (x29&(x30/(x31%x32)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = -1LL;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = INT8_MAX;
	uint64_t x36 = 2125501873LLU;
	volatile uint64_t t6 = 8526792662692143798LLU;

	t6 = (x33&(x34/(x35%x36)));

	if (t6 != 33818640LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	uint64_t x38 = 6733174496989985302LLU;
	static int64_t x39 = INT64_MAX;
	int8_t x40 = 8;
	volatile uint64_t t7 = 15962001157323LLU;

	t7 = (x37&(x38/(x39%x40)));

	if (t7 != 961882070998569328LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 12262U;
	int64_t x42 = INT64_MAX;
	uint64_t x43 = 7959911678185LLU;
	uint64_t x44 = 122896LLU;
	volatile uint64_t t8 = 13301369483LLU;

	t8 = (x41&(x42/(x43%x44)));

	if (t8 != 2598LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = 1570469;
	static volatile uint32_t x47 = 25U;
	static int16_t x48 = INT16_MIN;
	volatile uint32_t t9 = 566676770U;

	t9 = (x45&(x46/(x47%x48)));

	if (t9 != 30050U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 4;
	int8_t x50 = INT8_MAX;
	static volatile int64_t t10 = 3106680314803583260LL;

	t10 = (x49&(x50/(x51%x52)));

	if (t10 != 4LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 1U;
	uint8_t x54 = 64U;
	volatile int16_t x55 = 166;
	int16_t x56 = INT16_MIN;
	int32_t t11 = -1;

	t11 = (x53&(x54/(x55%x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	uint64_t x58 = 181267997407942136LLU;
	int8_t x59 = 1;
	static int16_t x60 = INT16_MIN;
	uint64_t t12 = 1400921334844769961LLU;

	t12 = (x57&(x58/(x59%x60)));

	if (t12 != 181267997407942136LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x77 = INT16_MIN;
	int16_t x79 = -1;
	int32_t t13 = 0;

	t13 = (x77&(x78/(x79%x80)));

	if (t13 != -65536) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x82 = -40;
	int8_t x83 = 1;
	static int64_t x84 = -86LL;
	int64_t t14 = 56663252065148LL;

	t14 = (x81&(x82/(x83%x84)));

	if (t14 != 896LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x85 = 2;
	static int16_t x86 = 407;
	int64_t x87 = -1LL;
	int16_t x88 = INT16_MAX;
	int64_t t15 = 0LL;

	t15 = (x85&(x86/(x87%x88)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x90 = INT8_MIN;
	static volatile int16_t x91 = INT16_MAX;
	int16_t x92 = 46;
	int32_t t16 = -98;

	t16 = (x89&(x90/(x91%x92)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x93 = -2;
	uint8_t x94 = 0U;
	int16_t x95 = INT16_MIN;
	volatile int32_t t17 = 18791930;

	t17 = (x93&(x94/(x95%x96)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x98 = INT16_MIN;
	volatile int64_t x99 = INT64_MAX;
	static int32_t x100 = INT32_MAX;
	uint64_t t18 = 100315615459LLU;

	t18 = (x97&(x98/(x99%x100)));

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x101 = INT64_MIN;
	static volatile uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MIN;
	int8_t x104 = 61;

	t19 = (x101&(x102/(x103%x104)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x110 = 56;
	int32_t x111 = -1;
	volatile uint32_t t20 = 11U;

	t20 = (x109&(x110/(x111%x112)));

	if (t20 != 28318600U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	uint32_t x115 = 351203U;
	int64_t t21 = 158485986LL;

	t21 = (x113&(x114/(x115%x116)));

	if (t21 != -6144LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -43;
	uint64_t x118 = UINT64_MAX;
	uint64_t x119 = UINT64_MAX;
	uint64_t t22 = 63434559LLU;

	t22 = (x117&(x118/(x119%x120)));

	if (t22 != 31740702503060LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = -16988651;
	volatile int32_t x124 = INT32_MIN;

	t23 = (x121&(x122/(x123%x124)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x126 = -1LL;
	volatile int64_t t24 = -4651046460LL;

	t24 = (x125&(x126/(x127%x128)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x137 = 50U;
	uint32_t x138 = UINT32_MAX;
	volatile int16_t x139 = 464;

	t25 = (x137&(x138/(x139%x140)));

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MAX;

	t26 = (x145&(x146/(x147%x148)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = -1;
	static uint32_t x150 = UINT32_MAX;
	int32_t x151 = 1;
	static volatile uint64_t x152 = 7096778724379781LLU;
	uint64_t t27 = 16452596LLU;

	t27 = (x149&(x150/(x151%x152)));

	if (t27 != 4294967295LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = 2513287138981LLU;
	static uint32_t x154 = UINT32_MAX;
	int64_t x155 = INT64_MIN;
	int32_t x156 = 161748077;

	t28 = (x153&(x154/(x155%x156)));

	if (t28 != 2513287138817LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x158 = 337U;
	uint8_t x159 = 48U;
	static uint16_t x160 = UINT16_MAX;
	static volatile uint32_t t29 = 364049U;

	t29 = (x157&(x158/(x159%x160)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x161 = UINT16_MAX;
	int32_t x162 = 0;
	static int32_t x164 = INT32_MAX;

	t30 = (x161&(x162/(x163%x164)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x166 = -1;
	static int64_t x167 = -323590664855969131LL;
	int32_t x168 = INT32_MAX;
	int64_t t31 = -46973932751546234LL;

	t31 = (x165&(x166/(x167%x168)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x177 = -7963;
	volatile int64_t x178 = -5525885LL;
	uint64_t x179 = UINT64_MAX;
	static volatile uint64_t t32 = 0LLU;

	t32 = (x177&(x178/(x179%x180)));

	if (t32 != 391628873956LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x185 = -45;
	uint16_t x186 = 4U;
	static volatile int16_t x188 = -4125;
	int64_t t33 = -13959LL;

	t33 = (x185&(x186/(x187%x188)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x197 = 1220U;
	int64_t x198 = INT64_MIN;
	int8_t x199 = -42;
	uint32_t x200 = 2682U;
	int64_t t34 = 334LL;

	t34 = (x197&(x198/(x199%x200)));

	if (t34 != 64LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x202 = -1LL;
	int32_t x204 = INT32_MIN;
	uint64_t t35 = 8066007345LLU;

	t35 = (x201&(x202/(x203%x204)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x206 = INT16_MIN;
	volatile uint32_t x207 = 1237060U;
	uint8_t x208 = 6U;

	t36 = (x205&(x206/(x207%x208)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x209 = INT64_MIN;
	static int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MIN;
	uint64_t x212 = UINT64_MAX;
	static volatile uint64_t t37 = 0LLU;

	t37 = (x209&(x210/(x211%x212)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = INT8_MIN;
	static int32_t x214 = INT32_MAX;
	int32_t t38 = 7;

	t38 = (x213&(x214/(x215%x216)));

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = INT64_MAX;
	int8_t x218 = -2;
	uint8_t x219 = 2U;

	t39 = (x217&(x218/(x219%x220)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x226 = INT8_MIN;
	volatile int8_t x228 = INT8_MIN;
	volatile uint32_t t40 = 2021870046U;

	t40 = (x225&(x226/(x227%x228)));

	if (t40 != 14187U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = INT8_MIN;
	volatile uint64_t x230 = 2LLU;
	int32_t x232 = INT32_MIN;
	uint64_t t41 = 87850LLU;

	t41 = (x229&(x230/(x231%x232)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x233 = UINT32_MAX;
	volatile int16_t x234 = -1;
	int8_t x235 = 1;
	int32_t x236 = INT32_MIN;
	static uint32_t t42 = UINT32_MAX;

	t42 = (x233&(x234/(x235%x236)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x237 = INT32_MAX;
	int64_t x238 = 421020785LL;
	int32_t x239 = INT32_MIN;
	int16_t x240 = 3784;

	t43 = (x237&(x238/(x239%x240)));

	if (t43 != 2147348010LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x249 = INT64_MAX;
	int64_t x250 = INT64_MIN;
	uint32_t x251 = 4101U;
	volatile int64_t t44 = 0LL;

	t44 = (x249&(x250/(x251%x252)));

	if (t44 != 9221122982468807807LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x257 = 7;
	int32_t x258 = -1;
	int64_t x259 = INT64_MIN;
	volatile int64_t t45 = -501696333LL;

	t45 = (x257&(x258/(x259%x260)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x265 = UINT32_MAX;
	static int64_t x268 = -19033084178LL;
	volatile int64_t t46 = 37583740582LL;

	t46 = (x265&(x266/(x267%x268)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x269 = 9U;
	static volatile int8_t x270 = INT8_MIN;
	int16_t x271 = 1;
	uint16_t x272 = 6U;
	int32_t t47 = 768;

	t47 = (x269&(x270/(x271%x272)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x273 = INT16_MIN;
	uint16_t x274 = 160U;
	int8_t x275 = -1;
	uint32_t x276 = 57265389U;
	static volatile uint32_t t48 = 79500U;

	t48 = (x273&(x274/(x275%x276)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x277 = 1;
	int64_t x278 = INT64_MIN;
	static volatile uint64_t x279 = 944384112839023LLU;
	int16_t x280 = 11;
	uint64_t t49 = 55250070951444663LLU;

	t49 = (x277&(x278/(x279%x280)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x286 = INT32_MAX;
	uint16_t x287 = UINT16_MAX;
	uint16_t x288 = 176U;
	int32_t t50 = 24;

	t50 = (x285&(x286/(x287%x288)));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = -1;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t51 = 24638U;

	t51 = (x289&(x290/(x291%x292)));

	if (t51 != 2147483648U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x305 = INT32_MIN;
	static int32_t x306 = -1;
	int16_t x307 = INT16_MAX;
	volatile int64_t x308 = INT64_MAX;

	t52 = (x305&(x306/(x307%x308)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x310 = 1679246LL;
	volatile int64_t x311 = INT64_MIN;
	int8_t x312 = INT8_MAX;

	t53 = (x309&(x310/(x311%x312)));

	if (t53 != 24690LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x313 = 2U;
	volatile int32_t x314 = -5109;
	static int32_t x315 = INT32_MAX;
	static int32_t x316 = -131;

	t54 = (x313&(x314/(x315%x316)));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x321 = 56U;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = 1;
	uint16_t x324 = 3U;
	volatile uint64_t t55 = 779362650LLU;

	t55 = (x321&(x322/(x323%x324)));

	if (t55 != 56LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x325 = 118U;
	uint16_t x326 = 4U;
	static int16_t x327 = -1;
	int32_t x328 = INT32_MIN;

	t56 = (x325&(x326/(x327%x328)));

	if (t56 != 116) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x329 = INT32_MAX;
	uint32_t x331 = 2290652U;
	uint16_t x332 = 16U;
	volatile uint32_t t57 = 24U;

	t57 = (x329&(x330/(x331%x332)));

	if (t57 != 21U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x341 = INT32_MIN;
	volatile int32_t x342 = INT32_MAX;
	int8_t x343 = INT8_MAX;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t58 = -17731;

	t58 = (x341&(x342/(x343%x344)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x345 = 0;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = 102884970LLU;
	static int64_t x348 = -1LL;
	volatile uint64_t t59 = 102849220301LLU;

	t59 = (x345&(x346/(x347%x348)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x353 = -659;
	volatile int32_t x354 = -25;
	int8_t x355 = -1;
	static volatile int32_t t60 = -44;

	t60 = (x353&(x354/(x355%x356)));

	if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x357 = INT32_MIN;
	int16_t x358 = 74;
	int16_t x359 = -1;
	uint32_t x360 = 86U;
	volatile uint32_t t61 = 8369954U;

	t61 = (x357&(x358/(x359%x360)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x366 = 7;
	uint16_t x368 = 12U;
	static volatile int64_t t62 = 33775776LL;

	t62 = (x365&(x366/(x367%x368)));

	if (t62 != 24LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x370 = 15;
	int32_t x372 = INT32_MIN;
	int64_t t63 = -220LL;

	t63 = (x369&(x370/(x371%x372)));

	if (t63 != 16LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x373 = 744U;
	static int64_t x374 = INT64_MAX;
	static int8_t x375 = INT8_MAX;
	static int64_t x376 = INT64_MAX;
	int64_t t64 = 491LL;

	t64 = (x373&(x374/(x375%x376)));

	if (t64 != 128LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x378 = 42U;
	int8_t x379 = -1;
	int64_t x380 = 3LL;
	static volatile int64_t t65 = 179LL;

	t65 = (x377&(x378/(x379%x380)));

	if (t65 != -32768LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x381 = INT32_MAX;
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = -1;
	static uint16_t x384 = 8770U;
	static int32_t t66 = -33539622;

	t66 = (x381&(x382/(x383%x384)));

	if (t66 != 2147483393) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t t67 = 464260419936916LLU;

	t67 = (x389&(x390/(x391%x392)));

	if (t67 != 59505626044224360LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x405 = INT32_MAX;
	int32_t x406 = -528880;
	uint16_t x407 = UINT16_MAX;
	int32_t t68 = 1694;

	t68 = (x405&(x406/(x407%x408)));

	if (t68 != 2147307355) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x409 = 1U;
	volatile uint16_t x410 = 941U;
	static int64_t x412 = 116802145973025LL;
	static volatile int64_t t69 = -2879054LL;

	t69 = (x409&(x410/(x411%x412)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x413 = -3;
	int8_t x414 = 3;
	uint32_t x415 = 27U;
	volatile uint32_t t70 = 81559U;

	t70 = (x413&(x414/(x415%x416)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x417 = 7U;
	int8_t x420 = INT8_MAX;

	t71 = (x417&(x418/(x419%x420)));

	if (t71 != 4U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x421 = INT8_MAX;
	int16_t x423 = -9;
	uint16_t x424 = 168U;
	static int32_t t72 = -912446;

	t72 = (x421&(x422/(x423%x424)));

	if (t72 != 56) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x425 = -1;
	volatile int8_t x427 = INT8_MIN;
	static int64_t x428 = -26613116LL;
	static volatile int64_t t73 = 113139486724LL;

	t73 = (x425&(x426/(x427%x428)));

	if (t73 != 42LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x429 = -9475;
	static int8_t x430 = -1;
	volatile uint16_t x431 = 378U;
	static int8_t x432 = INT8_MIN;
	static int32_t t74 = -1;

	t74 = (x429&(x430/(x431%x432)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x437 = UINT64_MAX;
	int32_t x438 = INT32_MAX;
	volatile int32_t x439 = -63;
	uint64_t t75 = 24629526050LLU;

	t75 = (x437&(x438/(x439%x440)));

	if (t75 != 18446744073544360567LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x442 = -9286;
	int64_t x443 = INT64_MIN;
	volatile uint8_t x444 = 29U;
	volatile int64_t t76 = 732222876414213LL;

	t76 = (x441&(x442/(x443%x444)));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x446 = INT16_MIN;
	volatile int32_t x447 = -1;
	int64_t x448 = INT64_MIN;
	volatile int64_t t77 = -1742200LL;

	t77 = (x445&(x446/(x447%x448)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x449 = INT8_MIN;
	uint32_t x450 = UINT32_MAX;
	int16_t x451 = -1;
	int16_t x452 = INT16_MIN;
	uint32_t t78 = 846762U;

	t78 = (x449&(x450/(x451%x452)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x453 = INT32_MIN;
	int32_t x454 = INT32_MIN;
	volatile uint32_t t79 = 245140U;

	t79 = (x453&(x454/(x455%x456)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x457 = INT8_MIN;
	int32_t x458 = INT32_MIN;
	volatile int16_t x459 = -69;
	static volatile int32_t x460 = 28587;

	t80 = (x457&(x458/(x459%x460)));

	if (t80 != 31122944) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x469 = 19256591545472026LL;
	int64_t x471 = INT64_MAX;
	int32_t x472 = 93975;
	volatile int64_t t81 = -122LL;

	t81 = (x469&(x470/(x471%x472)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x474 = 156;
	static int8_t x475 = -1;
	int32_t x476 = -4367;

	t82 = (x473&(x474/(x475%x476)));

	if (t82 != -188) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x477 = -9873;
	static uint32_t x478 = 408U;
	uint32_t x479 = 163464U;
	int16_t x480 = -48;
	volatile uint32_t t83 = 6498U;

	t83 = (x477&(x478/(x479%x480)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x485 = 8577U;
	volatile int64_t x486 = INT64_MIN;
	int32_t x487 = 75672931;

	t84 = (x485&(x486/(x487%x488)));

	if (t84 != 8448LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x489 = 220215;
	int32_t x490 = INT32_MIN;
	static uint8_t x491 = 9U;
	int16_t x492 = 15;
	static volatile int32_t t85 = 11004133;

	t85 = (x489&(x490/(x491%x492)));

	if (t85 != 203826) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x493 = 379280LLU;
	int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MIN;

	t86 = (x493&(x494/(x495%x496)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x501 = 244;
	int32_t x502 = -1;
	int32_t x503 = INT32_MIN;
	static int64_t x504 = INT64_MIN;
	volatile int64_t t87 = -23228326LL;

	t87 = (x501&(x502/(x503%x504)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x505 = INT8_MIN;
	int64_t x507 = 15539135LL;
	int16_t x508 = -1304;
	volatile int64_t t88 = -592148013LL;

	t88 = (x505&(x506/(x507%x508)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x513 = 61U;
	volatile int64_t x514 = -1LL;
	volatile uint32_t x516 = 194245469U;
	int64_t t89 = -3105356451359833436LL;

	t89 = (x513&(x514/(x515%x516)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x517 = 2214U;
	static int32_t x518 = -1;
	uint8_t x520 = UINT8_MAX;
	int64_t t90 = 759294440377399LL;

	t90 = (x517&(x518/(x519%x520)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x523 = UINT32_MAX;
	int16_t x524 = INT16_MAX;
	volatile uint32_t t91 = 1U;

	t91 = (x521&(x522/(x523%x524)));

	if (t91 != 85U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x525 = UINT32_MAX;
	uint8_t x527 = UINT8_MAX;
	int32_t x528 = 26014;
	uint32_t t92 = 3678U;

	t92 = (x525&(x526/(x527%x528)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x530 = INT8_MIN;
	volatile int32_t x531 = 53794067;
	volatile int64_t t93 = 16461782571LL;

	t93 = (x529&(x530/(x531%x532)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x533 = 3550U;
	volatile uint8_t x535 = 77U;
	volatile uint8_t x536 = 10U;
	int32_t t94 = 4;

	t94 = (x533&(x534/(x535%x536)));

	if (t94 != 3550) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x537 = INT16_MIN;
	static int8_t x538 = INT8_MIN;
	int8_t x539 = INT8_MAX;
	int8_t x540 = INT8_MIN;

	t95 = (x537&(x538/(x539%x540)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x541 = INT64_MIN;
	static int32_t x542 = INT32_MIN;
	volatile int64_t x543 = INT64_MIN;
	int64_t x544 = -3744756137797804920LL;
	int64_t t96 = 27417924LL;

	t96 = (x541&(x542/(x543%x544)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x545 = 2225885760984265843LLU;
	static volatile uint8_t x546 = 3U;
	volatile int16_t x548 = INT16_MIN;
	uint64_t t97 = 149263319145377LLU;

	t97 = (x545&(x546/(x547%x548)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x549 = -1LL;
	volatile int64_t x550 = INT64_MAX;
	int8_t x551 = 17;
	int64_t x552 = -250LL;
	int64_t t98 = -29124389439LL;

	t98 = (x549&(x550/(x551%x552)));

	if (t98 != 542551296285575047LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x553 = INT8_MIN;
	volatile int32_t x556 = 50430159;
	static volatile int32_t t99 = 31156;

	t99 = (x553&(x554/(x555%x556)));

	if (t99 != 128) { NG(); } else { ; }
	
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

