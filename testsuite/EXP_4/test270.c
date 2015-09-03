#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 7472;
volatile int8_t x6 = INT8_MAX;
volatile uint64_t x8 = UINT64_MAX;
static int8_t x9 = -1;
uint8_t x10 = 3U;
int16_t x16 = 8189;
static int16_t x20 = INT16_MIN;
int8_t x22 = INT8_MAX;
int32_t t7 = 18104999;
volatile int8_t x42 = INT8_MIN;
static volatile uint32_t x43 = UINT32_MAX;
uint16_t x47 = 248U;
volatile uint64_t x60 = 16100LLU;
int32_t t11 = -769;
int64_t x63 = -1LL;
int8_t x65 = INT8_MAX;
uint64_t x70 = UINT64_MAX;
volatile int64_t x71 = -1LL;
static volatile int16_t x74 = -8741;
int8_t x78 = -1;
uint8_t x83 = 0U;
uint16_t x85 = UINT16_MAX;
volatile int32_t t18 = 1;
int8_t x97 = -45;
static volatile uint64_t x100 = 6LLU;
static int8_t x107 = 13;
static int16_t x111 = 1713;
int64_t x125 = -1LL;
volatile int32_t t24 = 1;
static int64_t x131 = INT64_MIN;
volatile int16_t x134 = -200;
int32_t x135 = -1;
uint64_t x137 = UINT64_MAX;
static int16_t x143 = INT16_MIN;
uint64_t x144 = 21407637113LLU;
uint8_t x145 = UINT8_MAX;
volatile uint8_t x150 = 20U;
volatile uint16_t x151 = UINT16_MAX;
uint16_t x154 = 21U;
int64_t x157 = -282LL;
uint64_t x158 = 41LLU;
int8_t x165 = -1;
volatile int8_t x170 = INT8_MIN;
static volatile int32_t t35 = -6434;
int8_t x173 = INT8_MAX;
static uint64_t x179 = 13280352867LLU;
uint16_t x181 = 8U;
int64_t x182 = 7897LL;
uint64_t x183 = 42744746207LLU;
int8_t x187 = INT8_MIN;
static uint16_t x190 = 113U;
uint8_t x198 = 11U;
int16_t x209 = INT16_MIN;
int16_t x213 = -1;
uint64_t x215 = UINT64_MAX;
int64_t x219 = INT64_MAX;
volatile int16_t x221 = -978;
int8_t x222 = -61;
int64_t x224 = INT64_MAX;
volatile int16_t x226 = INT16_MIN;
int64_t x229 = -781060838LL;
volatile int8_t x231 = 1;
static int16_t x236 = 9955;
int8_t x248 = INT8_MIN;
uint16_t x249 = UINT16_MAX;
int32_t t55 = 445145;
static volatile int16_t x258 = -1;
uint32_t x260 = 1750037U;
int8_t x270 = 1;
int32_t x281 = -16;
volatile int64_t x292 = -1LL;
int32_t t64 = 0;
int64_t x297 = -178793LL;
uint64_t x298 = 363861856248452LLU;
static uint64_t x310 = 76943545907820499LLU;
uint8_t x313 = UINT8_MAX;
int32_t x317 = 0;
static int8_t x323 = -1;
static volatile int8_t x324 = INT8_MIN;
int16_t x328 = 103;
int16_t x332 = 5;
volatile int32_t t75 = -214514;
static uint16_t x356 = UINT16_MAX;
int64_t x364 = -1LL;
volatile int8_t x365 = -1;
int64_t x368 = 0LL;
int64_t x371 = 1464637673860587600LL;
uint16_t x374 = 0U;
int32_t x376 = INT32_MIN;
int8_t x377 = INT8_MIN;
int32_t t81 = 7031334;
int16_t x387 = -1;
static int8_t x392 = -1;
uint64_t x393 = 135969LLU;
int32_t t86 = 96;
int32_t x406 = -109;
int16_t x408 = 1004;
static int32_t t88 = -11;
volatile int32_t t89 = -497630746;
int32_t x417 = -1;
uint32_t x429 = UINT32_MAX;
volatile int32_t x433 = -445;
int8_t x436 = INT8_MIN;
volatile uint64_t x449 = 1302643LLU;
static int64_t x452 = -1LL;
static volatile int32_t t98 = -285703;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MAX;
	int16_t x4 = INT16_MIN;

	t0 = (x1<=(x2==(x3-x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 28380U;
	int16_t x7 = INT16_MIN;
	volatile int32_t t1 = -3;

	t1 = (x5<=(x6==(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = -7;
	uint8_t x12 = 1U;
	static volatile int32_t t2 = -14;

	t2 = (x9<=(x10==(x11-x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 94070587U;
	static int64_t x14 = -1LL;
	uint16_t x15 = 883U;
	volatile int32_t t3 = -30;

	t3 = (x13<=(x14==(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	int16_t x18 = 5210;
	int32_t x19 = INT32_MIN;
	static int32_t t4 = -1;

	t4 = (x17<=(x18==(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int16_t x23 = 0;
	static int32_t x24 = -1;
	static volatile int32_t t5 = 4279430;

	t5 = (x21<=(x22==(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 31U;
	volatile int8_t x26 = INT8_MAX;
	static uint16_t x27 = 1952U;
	static int64_t x28 = -1LL;
	int32_t t6 = -4;

	t6 = (x25<=(x26==(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1449038305038792LL;
	volatile int64_t x34 = -1LL;
	static volatile int64_t x35 = 615007522LL;
	uint8_t x36 = 79U;

	t7 = (x33<=(x34==(x35-x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = UINT8_MAX;
	volatile int16_t x38 = -78;
	volatile int8_t x39 = 62;
	int8_t x40 = INT8_MAX;
	static volatile int32_t t8 = 32;

	t8 = (x37<=(x38==(x39-x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 29;
	int16_t x44 = INT16_MAX;
	int32_t t9 = 102;

	t9 = (x41<=(x42==(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 370U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -394333577;

	t10 = (x45<=(x46==(x47-x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x57 = 135303038885846LLU;
	uint8_t x58 = 9U;
	int16_t x59 = 1;

	t11 = (x57<=(x58==(x59-x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x61 = 412168321LLU;
	volatile uint64_t x62 = 1412290518196181929LLU;
	static int32_t x64 = 311312972;
	int32_t t12 = -20453;

	t12 = (x61<=(x62==(x63-x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x66 = 1U;
	static int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MAX;
	volatile int32_t t13 = 1618614;

	t13 = (x65<=(x66==(x67-x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x69 = -52;
	static int64_t x72 = -76574670575381124LL;
	volatile int32_t t14 = 882375323;

	t14 = (x69<=(x70==(x71-x72)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	static int16_t x75 = INT16_MAX;
	int64_t x76 = 784069743578LL;
	volatile int32_t t15 = -103;

	t15 = (x73<=(x74==(x75-x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MAX;
	int32_t x79 = INT32_MAX;
	static int8_t x80 = INT8_MAX;
	volatile int32_t t16 = -449;

	t16 = (x77<=(x78==(x79-x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile uint32_t x82 = 4210U;
	int32_t x84 = 2988192;
	static volatile int32_t t17 = 488;

	t17 = (x81<=(x82==(x83-x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x86 = 1U;
	uint64_t x87 = 867350368457LLU;
	int8_t x88 = 5;

	t18 = (x85<=(x86==(x87-x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	volatile int32_t x90 = 79;
	volatile uint32_t x91 = UINT32_MAX;
	uint16_t x92 = UINT16_MAX;
	int32_t t19 = -735;

	t19 = (x89<=(x90==(x91-x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = 242100373156695LL;
	int8_t x94 = -1;
	volatile int8_t x95 = INT8_MAX;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t20 = 23;

	t20 = (x93<=(x94==(x95-x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x98 = INT16_MIN;
	static volatile uint64_t x99 = 14960700LLU;
	volatile int32_t t21 = -29416;

	t21 = (x97<=(x98==(x99-x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = INT32_MIN;
	int8_t x106 = -4;
	int16_t x108 = INT16_MAX;
	static volatile int32_t t22 = 0;

	t22 = (x105<=(x106==(x107-x108)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = 136LL;
	uint16_t x112 = 7628U;
	static int32_t t23 = -10894834;

	t23 = (x109<=(x110==(x111-x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x126 = -1;
	static int64_t x127 = 171939LL;
	int8_t x128 = INT8_MIN;

	t24 = (x125<=(x126==(x127-x128)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = -976349612;
	int8_t x130 = INT8_MIN;
	uint16_t x132 = 0U;
	volatile int32_t t25 = -2162993;

	t25 = (x129<=(x130==(x131-x132)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MAX;
	int32_t x136 = INT32_MAX;
	int32_t t26 = 8;

	t26 = (x133<=(x134==(x135-x136)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x138 = INT64_MIN;
	volatile int8_t x139 = 14;
	static int8_t x140 = 1;
	static volatile int32_t t27 = 487;

	t27 = (x137<=(x138==(x139-x140)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x141 = 18558U;
	int32_t x142 = 123577;
	volatile int32_t t28 = 33863386;

	t28 = (x141<=(x142==(x143-x144)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x146 = INT64_MIN;
	uint32_t x147 = 1472U;
	static uint8_t x148 = UINT8_MAX;
	static int32_t t29 = 1026;

	t29 = (x145<=(x146==(x147-x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 18U;
	static uint16_t x152 = UINT16_MAX;
	volatile int32_t t30 = 7;

	t30 = (x149<=(x150==(x151-x152)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MAX;
	int16_t x155 = 11;
	static uint32_t x156 = 3631U;
	volatile int32_t t31 = 37603483;

	t31 = (x153<=(x154==(x155-x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x159 = 206141062LL;
	uint16_t x160 = 27580U;
	static int32_t t32 = 89;

	t32 = (x157<=(x158==(x159-x160)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -1;
	uint16_t x162 = 133U;
	volatile int8_t x163 = 14;
	volatile int16_t x164 = -1;
	int32_t t33 = 1498;

	t33 = (x161<=(x162==(x163-x164)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x166 = 2U;
	int16_t x167 = -1;
	volatile int8_t x168 = INT8_MAX;
	volatile int32_t t34 = -107;

	t34 = (x165<=(x166==(x167-x168)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x169 = 7731958U;
	volatile uint16_t x171 = UINT16_MAX;
	static volatile uint32_t x172 = 488680U;

	t35 = (x169<=(x170==(x171-x172)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x174 = 1U;
	volatile int64_t x175 = -60LL;
	int64_t x176 = INT64_MIN;
	static int32_t t36 = 0;

	t36 = (x173<=(x174==(x175-x176)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MIN;
	static uint32_t x180 = 17788276U;
	static int32_t t37 = -1;

	t37 = (x177<=(x178==(x179-x180)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x184 = INT64_MIN;
	int32_t t38 = -30601;

	t38 = (x181<=(x182==(x183-x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x185 = 121U;
	uint8_t x186 = 0U;
	volatile int64_t x188 = INT64_MIN;
	volatile int32_t t39 = 87204181;

	t39 = (x185<=(x186==(x187-x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x189 = INT32_MIN;
	volatile uint16_t x191 = UINT16_MAX;
	uint16_t x192 = UINT16_MAX;
	static int32_t t40 = 0;

	t40 = (x189<=(x190==(x191-x192)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = -1LL;
	uint8_t x194 = 18U;
	static uint16_t x195 = UINT16_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t41 = 15094322;

	t41 = (x193<=(x194==(x195-x196)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = 63;
	uint64_t x199 = 3740398155287368LLU;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t42 = -18246;

	t42 = (x197<=(x198==(x199-x200)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x205 = 75589269LLU;
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = 2869;
	volatile int8_t x208 = -1;
	volatile int32_t t43 = -346545940;

	t43 = (x205<=(x206==(x207-x208)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x210 = UINT8_MAX;
	int64_t x211 = 108LL;
	int8_t x212 = INT8_MIN;
	volatile int32_t t44 = -66420503;

	t44 = (x209<=(x210==(x211-x212)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x214 = 91;
	int8_t x216 = INT8_MIN;
	int32_t t45 = -1808974;

	t45 = (x213<=(x214==(x215-x216)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = -8520;
	static uint8_t x218 = 44U;
	volatile uint8_t x220 = 5U;
	volatile int32_t t46 = -24;

	t46 = (x217<=(x218==(x219-x220)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x223 = -1;
	static int32_t t47 = 1;

	t47 = (x221<=(x222==(x223-x224)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = 146U;
	static uint16_t x227 = 1806U;
	uint16_t x228 = 29034U;
	volatile int32_t t48 = 0;

	t48 = (x225<=(x226==(x227-x228)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x230 = INT8_MIN;
	uint8_t x232 = 40U;
	volatile int32_t t49 = 8;

	t49 = (x229<=(x230==(x231-x232)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x233 = 0U;
	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	int32_t t50 = 14559;

	t50 = (x233<=(x234==(x235-x236)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = 1407156539016958872LLU;
	static uint64_t x239 = 268199497519LLU;
	static volatile int32_t x240 = 509623;
	volatile int32_t t51 = 372;

	t51 = (x237<=(x238==(x239-x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x241 = 10325;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 8365LLU;
	int64_t x244 = INT64_MIN;
	volatile int32_t t52 = 22523971;

	t52 = (x241<=(x242==(x243-x244)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x245 = 1022480789U;
	int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	volatile int32_t t53 = -58505889;

	t53 = (x245<=(x246==(x247-x248)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x250 = -434042767;
	uint16_t x251 = 42U;
	volatile int32_t x252 = INT32_MAX;
	static volatile int32_t t54 = 488;

	t54 = (x249<=(x250==(x251-x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -1LL;
	int64_t x254 = INT64_MAX;
	int32_t x255 = -14437;
	int16_t x256 = 10150;

	t55 = (x253<=(x254==(x255-x256)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x257 = UINT32_MAX;
	int8_t x259 = 0;
	volatile int32_t t56 = -4037;

	t56 = (x257<=(x258==(x259-x260)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x265 = 1214283LLU;
	static int32_t x266 = 14310526;
	volatile uint16_t x267 = 1948U;
	int8_t x268 = 0;
	int32_t t57 = -104217;

	t57 = (x265<=(x266==(x267-x268)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x269 = -1;
	volatile uint32_t x271 = UINT32_MAX;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t58 = -34826291;

	t58 = (x269<=(x270==(x271-x272)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x273 = 2U;
	static volatile int64_t x274 = 36756711LL;
	int32_t x275 = -2884146;
	int16_t x276 = INT16_MIN;
	volatile int32_t t59 = 3639;

	t59 = (x273<=(x274==(x275-x276)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = 0U;
	int16_t x279 = 1;
	int64_t x280 = 789LL;
	int32_t t60 = -4121787;

	t60 = (x277<=(x278==(x279-x280)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x282 = INT16_MIN;
	int32_t x283 = 1;
	uint16_t x284 = 120U;
	volatile int32_t t61 = 4966251;

	t61 = (x281<=(x282==(x283-x284)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int16_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	uint64_t x288 = 5249360LLU;
	int32_t t62 = -1;

	t62 = (x285<=(x286==(x287-x288)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = -1;
	uint64_t x290 = 26531866770337412LLU;
	static int64_t x291 = INT64_MIN;
	int32_t t63 = 14925828;

	t63 = (x289<=(x290==(x291-x292)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x293 = -1;
	int32_t x294 = INT32_MAX;
	int8_t x295 = -44;
	uint8_t x296 = 1U;

	t64 = (x293<=(x294==(x295-x296)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x299 = 1368U;
	int16_t x300 = -3;
	int32_t t65 = -3772949;

	t65 = (x297<=(x298==(x299-x300)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x301 = 31768885567032LLU;
	static uint8_t x302 = 14U;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = 23U;
	int32_t t66 = -361;

	t66 = (x301<=(x302==(x303-x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = INT16_MIN;
	volatile int16_t x311 = INT16_MIN;
	static uint8_t x312 = UINT8_MAX;
	static volatile int32_t t67 = -293412;

	t67 = (x309<=(x310==(x311-x312)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x314 = INT32_MIN;
	static uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 15074922509510839LLU;
	static volatile int32_t t68 = -10;

	t68 = (x313<=(x314==(x315-x316)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x318 = 0U;
	static uint32_t x319 = 1767264480U;
	uint64_t x320 = 32505939455LLU;
	static volatile int32_t t69 = -500534174;

	t69 = (x317<=(x318==(x319-x320)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = INT16_MIN;
	uint64_t x322 = UINT64_MAX;
	int32_t t70 = -336733786;

	t70 = (x321<=(x322==(x323-x324)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = -1;
	volatile int16_t x327 = 51;
	volatile int32_t t71 = -9144;

	t71 = (x325<=(x326==(x327-x328)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = 15U;
	volatile int64_t x330 = 11575319688074LL;
	int32_t x331 = -9701993;
	volatile int32_t t72 = 54;

	t72 = (x329<=(x330==(x331-x332)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 11U;
	int32_t x338 = 1428200;
	volatile uint8_t x339 = 6U;
	uint32_t x340 = 30066U;
	int32_t t73 = 17170106;

	t73 = (x337<=(x338==(x339-x340)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = 19057376;
	static uint8_t x342 = UINT8_MAX;
	int32_t x343 = INT32_MIN;
	static volatile int64_t x344 = -1LL;
	volatile int32_t t74 = 480782;

	t74 = (x341<=(x342==(x343-x344)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x345 = 4724LLU;
	int32_t x346 = INT32_MIN;
	static volatile int16_t x347 = -1;
	uint8_t x348 = 6U;

	t75 = (x345<=(x346==(x347-x348)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x353 = 0U;
	int32_t x354 = -503911;
	uint64_t x355 = 3160820264362571LLU;
	int32_t t76 = 0;

	t76 = (x353<=(x354==(x355-x356)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x361 = 10U;
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	volatile int32_t t77 = 631034288;

	t77 = (x361<=(x362==(x363-x364)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x366 = UINT8_MAX;
	static uint32_t x367 = 1466029U;
	volatile int32_t t78 = 1;

	t78 = (x365<=(x366==(x367-x368)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x369 = -533863058790260LL;
	int32_t x370 = -1;
	uint64_t x372 = 14852933155362076LLU;
	int32_t t79 = 17866;

	t79 = (x369<=(x370==(x371-x372)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x373 = INT16_MAX;
	volatile int32_t x375 = -1;
	int32_t t80 = 998;

	t80 = (x373<=(x374==(x375-x376)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = 11;
	uint8_t x380 = 3U;

	t81 = (x377<=(x378==(x379-x380)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x381 = -1;
	int16_t x382 = INT16_MAX;
	int16_t x383 = INT16_MIN;
	uint16_t x384 = 3U;
	int32_t t82 = -1791;

	t82 = (x381<=(x382==(x383-x384)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MIN;
	int32_t x388 = -1;
	static int32_t t83 = 2019;

	t83 = (x385<=(x386==(x387-x388)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x389 = -5;
	uint64_t x390 = 107251LLU;
	int8_t x391 = INT8_MAX;
	volatile int32_t t84 = -332;

	t84 = (x389<=(x390==(x391-x392)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x394 = 3669480306487634LLU;
	volatile int64_t x395 = INT64_MIN;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t85 = 7808;

	t85 = (x393<=(x394==(x395-x396)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -69769489681LL;
	int64_t x398 = -1030966587495LL;
	int16_t x399 = 7221;
	static volatile uint64_t x400 = 52LLU;

	t86 = (x397<=(x398==(x399-x400)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = INT16_MIN;
	uint64_t x402 = UINT64_MAX;
	volatile int64_t x403 = INT64_MAX;
	int64_t x404 = 1829460LL;
	int32_t t87 = 21495771;

	t87 = (x401<=(x402==(x403-x404)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = INT32_MAX;
	static int32_t x407 = 4;

	t88 = (x405<=(x406==(x407-x408)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x409 = -1;
	static uint32_t x410 = UINT32_MAX;
	volatile int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MIN;

	t89 = (x409<=(x410==(x411-x412)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x413 = INT32_MAX;
	volatile int8_t x414 = -58;
	volatile int32_t x415 = INT32_MIN;
	volatile uint64_t x416 = 65494507617167289LLU;
	int32_t t90 = -50;

	t90 = (x413<=(x414==(x415-x416)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x418 = 0U;
	uint32_t x419 = 36U;
	volatile uint32_t x420 = 188U;
	int32_t t91 = 20060;

	t91 = (x417<=(x418==(x419-x420)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x421 = 725U;
	volatile int64_t x422 = -1LL;
	int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MAX;
	int32_t t92 = 3459141;

	t92 = (x421<=(x422==(x423-x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x425 = 432594479LLU;
	int8_t x426 = -7;
	int16_t x427 = 42;
	int8_t x428 = INT8_MAX;
	volatile int32_t t93 = 13753;

	t93 = (x425<=(x426==(x427-x428)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x430 = 3U;
	volatile uint32_t x431 = 64U;
	static volatile uint64_t x432 = 333218167LLU;
	int32_t t94 = -41325069;

	t94 = (x429<=(x430==(x431-x432)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x434 = INT64_MAX;
	int8_t x435 = INT8_MIN;
	int32_t t95 = 0;

	t95 = (x433<=(x434==(x435-x436)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = INT32_MAX;
	int8_t x438 = 0;
	volatile uint8_t x439 = 7U;
	int16_t x440 = INT16_MIN;
	int32_t t96 = 3415308;

	t96 = (x437<=(x438==(x439-x440)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = -1LL;
	uint64_t x442 = 86LLU;
	int64_t x443 = -257170657014LL;
	uint32_t x444 = UINT32_MAX;
	int32_t t97 = -19889960;

	t97 = (x441<=(x442==(x443-x444)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x450 = UINT8_MAX;
	int32_t x451 = INT32_MAX;

	t98 = (x449<=(x450==(x451-x452)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = -1;
	int64_t x454 = -1LL;
	int32_t x455 = -1011122;
	static int32_t x456 = -1;
	volatile int32_t t99 = -896577;

	t99 = (x453<=(x454==(x455-x456)));

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

