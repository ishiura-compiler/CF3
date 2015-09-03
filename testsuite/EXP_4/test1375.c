#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MAX;
int64_t x11 = INT64_MIN;
uint16_t x18 = UINT16_MAX;
int16_t x19 = -19;
volatile int8_t x21 = 1;
static int16_t x24 = INT16_MAX;
static int64_t x26 = -104071593915LL;
volatile int64_t x37 = INT64_MIN;
static int8_t x39 = -3;
int8_t x42 = INT8_MIN;
int8_t x44 = -1;
int64_t x45 = 924744830079597LL;
volatile int32_t x55 = -1;
static int16_t x58 = INT16_MIN;
static uint64_t x82 = UINT64_MAX;
uint16_t x95 = UINT16_MAX;
int8_t x96 = -3;
int16_t x98 = INT16_MAX;
int32_t x100 = -95545;
int32_t t21 = -330427;
static volatile int8_t x108 = INT8_MIN;
volatile int16_t x110 = 338;
static volatile int8_t x114 = -1;
static uint32_t x116 = UINT32_MAX;
int32_t t24 = -85306354;
int8_t x120 = 3;
uint16_t x121 = 114U;
volatile uint64_t x123 = 799980873389LLU;
int32_t t26 = 111;
static int32_t x126 = -4136853;
volatile int64_t x132 = -2185LL;
int16_t x137 = 11;
int64_t x138 = -993525154415LL;
uint16_t x140 = 1U;
int32_t t31 = 388949725;
uint64_t x154 = 1526768LLU;
int64_t x155 = -1LL;
volatile uint64_t x162 = UINT64_MAX;
int16_t x169 = INT16_MIN;
int32_t t39 = 7;
int32_t t40 = 1191238;
int32_t t41 = 492104;
volatile int32_t x192 = INT32_MIN;
static volatile int32_t t42 = -493829145;
volatile int64_t x209 = INT64_MIN;
int16_t x212 = -1;
uint32_t x216 = 2U;
volatile int32_t t46 = -173806;
int16_t x218 = INT16_MIN;
int32_t t52 = -256;
static int32_t x254 = INT32_MIN;
volatile int32_t t54 = 104;
uint16_t x259 = UINT16_MAX;
int16_t x266 = -326;
uint8_t x268 = UINT8_MAX;
volatile uint64_t x270 = 8891389LLU;
volatile int32_t x277 = -26241;
int32_t x281 = 355219;
int32_t x282 = -1;
int32_t t61 = -14322250;
uint16_t x285 = UINT16_MAX;
static int16_t x286 = INT16_MIN;
volatile int32_t t63 = -99608549;
static volatile int32_t t66 = -10;
volatile int32_t x309 = INT32_MIN;
int32_t t69 = -120645433;
int32_t t75 = -420522818;
static int32_t t77 = -689807753;
int32_t t79 = -37174;
volatile int32_t t81 = -317123;
int16_t x376 = 9389;
int32_t t83 = 1848;
static int32_t t84 = -1337287;
volatile int32_t t85 = -149;
int16_t x393 = 2713;
int8_t x396 = 0;
int32_t t89 = -1;
uint64_t x409 = UINT64_MAX;
int32_t x423 = INT32_MIN;
static int32_t t95 = -451079166;
int16_t x429 = -1;
int64_t x430 = -40931LL;
volatile int32_t t96 = -6;
int32_t x435 = -29;
uint64_t x436 = 171643421641793139LLU;
int32_t t97 = 7;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MAX;
	int16_t x3 = 1210;
	int32_t t0 = 243374;

	t0 = (x1<=(x2-(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -1;
	volatile int8_t x10 = -3;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 15273;

	t1 = (x9<=(x10-(x11<x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MIN;
	uint16_t x14 = UINT16_MAX;
	int32_t x15 = -1;
	volatile int32_t x16 = -12956;
	volatile int32_t t2 = 326871624;

	t2 = (x13<=(x14-(x15<x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 183U;
	int32_t x20 = -55142888;
	volatile int32_t t3 = -19;

	t3 = (x17<=(x18-(x19<x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	static int64_t x23 = -1LL;
	int32_t t4 = 15;

	t4 = (x21<=(x22-(x23<x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x25 = 2468908LLU;
	uint64_t x27 = UINT64_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t5 = 170;

	t5 = (x25<=(x26-(x27<x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int64_t x30 = -1LL;
	int8_t x31 = -54;
	int16_t x32 = -34;
	static int32_t t6 = -478666425;

	t6 = (x29<=(x30-(x31<x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	volatile int16_t x34 = INT16_MAX;
	uint8_t x35 = UINT8_MAX;
	static int32_t x36 = INT32_MAX;
	int32_t t7 = -531;

	t7 = (x33<=(x34-(x35<x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = 20629;
	int64_t x40 = INT64_MIN;
	int32_t t8 = -6361;

	t8 = (x37<=(x38-(x39<x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 44080U;
	int8_t x43 = INT8_MIN;
	int32_t t9 = 327472;

	t9 = (x41<=(x42-(x43<x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x46 = INT32_MIN;
	uint16_t x47 = 17U;
	static int16_t x48 = -1;
	static volatile int32_t t10 = -355506879;

	t10 = (x45<=(x46-(x47<x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 10;
	static uint8_t x50 = 1U;
	uint8_t x51 = 6U;
	int32_t x52 = -6;
	volatile int32_t t11 = -21096260;

	t11 = (x49<=(x50-(x51<x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = 19U;
	volatile uint64_t x54 = 4623558197255052733LLU;
	int32_t x56 = 652710963;
	int32_t t12 = -40226192;

	t12 = (x53<=(x54-(x55<x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = 10;
	static int64_t x59 = INT64_MIN;
	uint8_t x60 = 11U;
	int32_t t13 = 8882790;

	t13 = (x57<=(x58-(x59<x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 3;
	static uint64_t x62 = UINT64_MAX;
	volatile int8_t x63 = -29;
	uint8_t x64 = UINT8_MAX;
	int32_t t14 = 212;

	t14 = (x61<=(x62-(x63<x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = 55952;
	volatile int16_t x67 = -1;
	int16_t x68 = INT16_MIN;
	volatile int32_t t15 = 47004346;

	t15 = (x65<=(x66-(x67<x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	static int64_t x70 = INT64_MIN;
	int8_t x71 = -3;
	static volatile uint64_t x72 = 4310803254LLU;
	int32_t t16 = 256979;

	t16 = (x69<=(x70-(x71<x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	int16_t x78 = 0;
	uint32_t x79 = 29U;
	static int16_t x80 = INT16_MIN;
	static volatile int32_t t17 = 1;

	t17 = (x77<=(x78-(x79<x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = 12246U;
	int8_t x83 = INT8_MAX;
	static uint16_t x84 = UINT16_MAX;
	volatile int32_t t18 = 947796481;

	t18 = (x81<=(x82-(x83<x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = -1LL;
	int8_t x86 = INT8_MAX;
	uint16_t x87 = UINT16_MAX;
	static int16_t x88 = -1;
	int32_t t19 = -326;

	t19 = (x85<=(x86-(x87<x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 11U;
	static int16_t x94 = 0;
	volatile int32_t t20 = 3382;

	t20 = (x93<=(x94-(x95<x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MAX;
	static uint8_t x99 = 107U;

	t21 = (x97<=(x98-(x99<x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MAX;
	volatile int32_t t22 = 946;

	t22 = (x105<=(x106-(x107<x108)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 14038661U;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	volatile int32_t t23 = 7648870;

	t23 = (x109<=(x110-(x111<x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x113 = 463U;
	int16_t x115 = -1;

	t24 = (x113<=(x114-(x115<x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x117 = 46;
	int64_t x118 = INT64_MAX;
	int16_t x119 = 1530;
	volatile int32_t t25 = -44;

	t25 = (x117<=(x118-(x119<x120)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x122 = UINT8_MAX;
	uint16_t x124 = UINT16_MAX;

	t26 = (x121<=(x122-(x123<x124)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x127 = 3;
	static int16_t x128 = INT16_MIN;
	static int32_t t27 = -2515;

	t27 = (x125<=(x126-(x127<x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x129 = 2877U;
	volatile uint64_t x130 = 4044870802405373752LLU;
	uint8_t x131 = UINT8_MAX;
	int32_t t28 = 229;

	t28 = (x129<=(x130-(x131<x132)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x139 = -477343478563704LL;
	volatile int32_t t29 = 2;

	t29 = (x137<=(x138-(x139<x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 12708U;
	static volatile int64_t x142 = -1LL;
	int32_t x143 = -1;
	static uint64_t x144 = UINT64_MAX;
	int32_t t30 = 80;

	t30 = (x141<=(x142-(x143<x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 115LLU;
	uint32_t x146 = 31910U;
	static int64_t x147 = -1LL;
	static uint16_t x148 = UINT16_MAX;

	t31 = (x145<=(x146-(x147<x148)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = -128542510839496815LL;
	static volatile int64_t x150 = 11340727323480LL;
	volatile int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MAX;
	int32_t t32 = 173;

	t32 = (x149<=(x150-(x151<x152)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 187456U;
	int64_t x156 = INT64_MIN;
	volatile int32_t t33 = 15;

	t33 = (x153<=(x154-(x155<x156)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x157 = 25;
	static int16_t x158 = INT16_MIN;
	int64_t x159 = -3311524941094729LL;
	uint64_t x160 = 1344170LLU;
	volatile int32_t t34 = 7020;

	t34 = (x157<=(x158-(x159<x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = UINT32_MAX;
	int32_t x163 = INT32_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t35 = 55315347;

	t35 = (x161<=(x162-(x163<x164)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = 55U;
	int64_t x168 = 2047391096223LL;
	int32_t t36 = -76129;

	t36 = (x165<=(x166-(x167<x168)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x170 = 1084104577218740200LLU;
	uint32_t x171 = UINT32_MAX;
	uint32_t x172 = UINT32_MAX;
	int32_t t37 = -82301315;

	t37 = (x169<=(x170-(x171<x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = 33;
	uint64_t x174 = 6727158971611175784LLU;
	static int64_t x175 = INT64_MAX;
	int8_t x176 = -1;
	int32_t t38 = -6;

	t38 = (x173<=(x174-(x175<x176)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = 2U;
	int8_t x178 = -1;
	volatile uint64_t x179 = 133706376426LLU;
	uint32_t x180 = UINT32_MAX;

	t39 = (x177<=(x178-(x179<x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 1LLU;
	uint64_t x182 = UINT64_MAX;
	static int64_t x183 = -1LL;
	uint64_t x184 = 4643077251916598787LLU;

	t40 = (x181<=(x182-(x183<x184)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 5557249017393217736LLU;
	volatile uint16_t x186 = UINT16_MAX;
	int64_t x187 = -117757274004721LL;
	static uint8_t x188 = 12U;

	t41 = (x185<=(x186-(x187<x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x189 = 2731U;
	volatile int8_t x190 = -1;
	int64_t x191 = INT64_MAX;

	t42 = (x189<=(x190-(x191<x192)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = UINT64_MAX;
	static int16_t x194 = INT16_MAX;
	int32_t x195 = -29;
	volatile int64_t x196 = INT64_MIN;
	volatile int32_t t43 = 85814;

	t43 = (x193<=(x194-(x195<x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x197 = 262543U;
	int8_t x198 = INT8_MAX;
	int64_t x199 = 1150799LL;
	uint32_t x200 = 1716U;
	volatile int32_t t44 = 414;

	t44 = (x197<=(x198-(x199<x200)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x210 = INT32_MAX;
	int16_t x211 = -4;
	int32_t t45 = 16502352;

	t45 = (x209<=(x210-(x211<x212)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x213 = INT64_MAX;
	static volatile uint8_t x214 = 41U;
	static int64_t x215 = -901273LL;

	t46 = (x213<=(x214-(x215<x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	int8_t x220 = 3;
	volatile int32_t t47 = 5531090;

	t47 = (x217<=(x218-(x219<x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	volatile int64_t x222 = -1LL;
	uint64_t x223 = 0LLU;
	uint16_t x224 = 12U;
	volatile int32_t t48 = -21510;

	t48 = (x221<=(x222-(x223<x224)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	volatile int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MIN;
	static int64_t x232 = -13494045462259509LL;
	int32_t t49 = -277361;

	t49 = (x229<=(x230-(x231<x232)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x233 = INT32_MAX;
	uint64_t x234 = 46574963101935LLU;
	static int16_t x235 = INT16_MIN;
	static uint8_t x236 = UINT8_MAX;
	static volatile int32_t t50 = 0;

	t50 = (x233<=(x234-(x235<x236)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = INT8_MIN;
	volatile int16_t x242 = -29;
	volatile int16_t x243 = INT16_MIN;
	uint32_t x244 = UINT32_MAX;
	static volatile int32_t t51 = -107312377;

	t51 = (x241<=(x242-(x243<x244)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = 0;
	int16_t x246 = -1;
	volatile int8_t x247 = -1;
	static uint16_t x248 = UINT16_MAX;

	t52 = (x245<=(x246-(x247<x248)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = -1;
	int16_t x250 = INT16_MIN;
	int32_t x251 = 185;
	int16_t x252 = INT16_MIN;
	static int32_t t53 = -1;

	t53 = (x249<=(x250-(x251<x252)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int16_t x255 = 37;
	static int16_t x256 = INT16_MIN;

	t54 = (x253<=(x254-(x255<x256)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = INT64_MAX;
	uint16_t x258 = 51U;
	int64_t x260 = INT64_MAX;
	volatile int32_t t55 = -147150341;

	t55 = (x257<=(x258-(x259<x260)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MIN;
	volatile int64_t x262 = INT64_MIN;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = -87110877152LL;
	static int32_t t56 = -57947;

	t56 = (x261<=(x262-(x263<x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x265 = 2670U;
	volatile int16_t x267 = -1;
	volatile int32_t t57 = 0;

	t57 = (x265<=(x266-(x267<x268)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = INT8_MAX;
	int8_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t58 = 8;

	t58 = (x269<=(x270-(x271<x272)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = -41;
	volatile int8_t x274 = 1;
	volatile uint32_t x275 = 1U;
	uint8_t x276 = 2U;
	int32_t t59 = 9623;

	t59 = (x273<=(x274-(x275<x276)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x278 = -1;
	uint16_t x279 = 30U;
	int16_t x280 = 114;
	static volatile int32_t t60 = 55585;

	t60 = (x277<=(x278-(x279<x280)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x283 = INT64_MIN;
	volatile int8_t x284 = INT8_MIN;

	t61 = (x281<=(x282-(x283<x284)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x287 = -17136682449LL;
	uint16_t x288 = 49U;
	volatile int32_t t62 = 3;

	t62 = (x285<=(x286-(x287<x288)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int16_t x294 = -1;
	int32_t x295 = -1;
	int8_t x296 = INT8_MIN;

	t63 = (x293<=(x294-(x295<x296)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	static uint8_t x298 = UINT8_MAX;
	int64_t x299 = -1LL;
	uint32_t x300 = 25246319U;
	static volatile int32_t t64 = 688598;

	t64 = (x297<=(x298-(x299<x300)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x301 = 34929013328449LLU;
	int16_t x302 = -1573;
	int32_t x303 = INT32_MAX;
	int16_t x304 = -1;
	volatile int32_t t65 = 8;

	t65 = (x301<=(x302-(x303<x304)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile uint16_t x306 = UINT16_MAX;
	volatile int16_t x307 = INT16_MIN;
	static int32_t x308 = INT32_MAX;

	t66 = (x305<=(x306-(x307<x308)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x310 = INT64_MAX;
	uint8_t x311 = 73U;
	uint8_t x312 = UINT8_MAX;
	int32_t t67 = -145380291;

	t67 = (x309<=(x310-(x311<x312)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = 1;
	uint64_t x315 = 21LLU;
	uint32_t x316 = 843818U;
	volatile int32_t t68 = -1;

	t68 = (x313<=(x314-(x315<x316)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x317 = 55;
	static volatile int8_t x318 = INT8_MAX;
	volatile int64_t x319 = -15979LL;
	int32_t x320 = 3186551;

	t69 = (x317<=(x318-(x319<x320)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x321 = INT32_MAX;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = UINT8_MAX;
	static uint32_t x324 = 540U;
	volatile int32_t t70 = 12;

	t70 = (x321<=(x322-(x323<x324)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x329 = UINT8_MAX;
	static int64_t x330 = -1LL;
	int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	static int32_t t71 = 62230;

	t71 = (x329<=(x330-(x331<x332)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x334 = INT8_MIN;
	static int8_t x335 = INT8_MIN;
	uint64_t x336 = 3676345686275312791LLU;
	int32_t t72 = 1961;

	t72 = (x333<=(x334-(x335<x336)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = -1827;
	int16_t x339 = INT16_MAX;
	int64_t x340 = INT64_MIN;
	int32_t t73 = -2;

	t73 = (x337<=(x338-(x339<x340)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x341 = 30082294U;
	int64_t x342 = 4279616827808LL;
	volatile int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	volatile int32_t t74 = -984601;

	t74 = (x341<=(x342-(x343<x344)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x345 = INT32_MIN;
	static uint16_t x346 = 9254U;
	volatile int16_t x347 = 1;
	int32_t x348 = 644744689;

	t75 = (x345<=(x346-(x347<x348)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x349 = INT64_MAX;
	static volatile int16_t x350 = -1;
	int16_t x351 = 387;
	int8_t x352 = INT8_MIN;
	int32_t t76 = -117892496;

	t76 = (x349<=(x350-(x351<x352)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x353 = UINT32_MAX;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = 34U;
	int8_t x356 = 4;

	t77 = (x353<=(x354-(x355<x356)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x357 = 0U;
	int8_t x358 = -4;
	int32_t x359 = -36;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t78 = 85;

	t78 = (x357<=(x358-(x359<x360)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = -1;
	volatile uint16_t x362 = 8304U;
	int64_t x363 = 2004201311613760LL;
	volatile uint64_t x364 = 1146396576107LLU;

	t79 = (x361<=(x362-(x363<x364)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = INT64_MIN;
	static int8_t x366 = -25;
	static int64_t x367 = -1LL;
	static int16_t x368 = 38;
	volatile int32_t t80 = -14917440;

	t80 = (x365<=(x366-(x367<x368)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x369 = 1U;
	int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;

	t81 = (x369<=(x370-(x371<x372)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x373 = UINT64_MAX;
	static uint16_t x374 = 18092U;
	volatile int8_t x375 = -9;
	volatile int32_t t82 = 12633;

	t82 = (x373<=(x374-(x375<x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = INT64_MAX;
	static uint64_t x378 = 1338211888718010921LLU;
	int64_t x379 = 65112611504908930LL;
	uint32_t x380 = 22U;

	t83 = (x377<=(x378-(x379<x380)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MAX;
	static int64_t x383 = INT64_MAX;
	int32_t x384 = 4191627;

	t84 = (x381<=(x382-(x383<x384)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = -54;
	static uint16_t x386 = 8395U;
	volatile int16_t x387 = -1;
	uint8_t x388 = 16U;

	t85 = (x385<=(x386-(x387<x388)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = -9;
	uint8_t x392 = 56U;
	volatile int32_t t86 = 7296;

	t86 = (x389<=(x390-(x391<x392)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x394 = 31U;
	int64_t x395 = 5953208984151540LL;
	static int32_t t87 = -6211;

	t87 = (x393<=(x394-(x395<x396)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = 9LLU;
	int64_t x399 = -1LL;
	int8_t x400 = -15;
	int32_t t88 = -2011227;

	t88 = (x397<=(x398-(x399<x400)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x401 = UINT8_MAX;
	int16_t x402 = 8;
	static uint16_t x403 = 2834U;
	volatile int64_t x404 = 124565952LL;

	t89 = (x401<=(x402-(x403<x404)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x405 = INT32_MAX;
	int64_t x406 = -2275287124977586993LL;
	static int32_t x407 = INT32_MAX;
	int64_t x408 = INT64_MIN;
	int32_t t90 = -248;

	t90 = (x405<=(x406-(x407<x408)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x410 = 59U;
	volatile int16_t x411 = -1;
	static uint8_t x412 = UINT8_MAX;
	volatile int32_t t91 = -31410;

	t91 = (x409<=(x410-(x411<x412)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x413 = INT8_MIN;
	uint64_t x414 = 256104153030790479LLU;
	static volatile uint8_t x415 = UINT8_MAX;
	static int32_t x416 = -59238469;
	volatile int32_t t92 = 271650163;

	t92 = (x413<=(x414-(x415<x416)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = 86U;
	int64_t x418 = -1LL;
	volatile uint8_t x419 = UINT8_MAX;
	static int8_t x420 = INT8_MIN;
	int32_t t93 = -6;

	t93 = (x417<=(x418-(x419<x420)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = 1558300749918839LLU;
	int16_t x422 = INT16_MIN;
	int32_t x424 = -2;
	int32_t t94 = -49;

	t94 = (x421<=(x422-(x423<x424)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = INT64_MIN;
	static int16_t x426 = 1;
	uint32_t x427 = UINT32_MAX;
	int32_t x428 = INT32_MIN;

	t95 = (x425<=(x426-(x427<x428)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x431 = 2U;
	int16_t x432 = INT16_MIN;

	t96 = (x429<=(x430-(x431<x432)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = INT64_MAX;
	static int64_t x434 = 202561753LL;

	t97 = (x433<=(x434-(x435<x436)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = INT64_MAX;
	volatile int16_t x438 = INT16_MIN;
	uint64_t x439 = 5734LLU;
	int32_t x440 = -1;
	volatile int32_t t98 = 5;

	t98 = (x437<=(x438-(x439<x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x441 = -2;
	int32_t x442 = INT32_MIN;
	int8_t x443 = -11;
	uint32_t x444 = 16U;
	volatile int32_t t99 = -731547;

	t99 = (x441<=(x442-(x443<x444)));

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

