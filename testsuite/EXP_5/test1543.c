#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 25794085U;
static int16_t x7 = INT16_MIN;
static volatile int32_t t1 = 53796699;
volatile int64_t x17 = INT64_MAX;
int64_t x18 = INT64_MIN;
uint8_t x20 = 44U;
volatile int32_t t5 = 3612789;
volatile int32_t t6 = 27;
static int64_t x30 = INT64_MIN;
int64_t x39 = -302LL;
int32_t x40 = -2;
int64_t x42 = INT64_MIN;
int32_t t9 = -3706230;
int32_t t10 = -21;
uint32_t x51 = 473431713U;
volatile int32_t t11 = -11;
int8_t x55 = -1;
uint32_t x69 = 59453612U;
int64_t x86 = INT64_MIN;
volatile int32_t x87 = INT32_MIN;
uint8_t x95 = UINT8_MAX;
static uint16_t x109 = UINT16_MAX;
int32_t t23 = 8;
static int16_t x125 = INT16_MAX;
volatile uint32_t x131 = 10700262U;
int8_t x142 = INT8_MIN;
static volatile uint32_t x148 = 0U;
int16_t x152 = INT16_MIN;
uint8_t x156 = UINT8_MAX;
int16_t x158 = INT16_MIN;
int64_t x159 = -1LL;
volatile int32_t x166 = -1;
static int32_t x173 = INT32_MIN;
uint64_t x177 = UINT64_MAX;
uint16_t x178 = 3735U;
int32_t x179 = INT32_MIN;
volatile int32_t x180 = -864;
static uint32_t x183 = UINT32_MAX;
int16_t x185 = INT16_MAX;
uint8_t x188 = 0U;
volatile int16_t x190 = -1;
uint32_t x198 = 92731U;
uint32_t x207 = 46739U;
static int8_t x218 = INT8_MIN;
int32_t t46 = -39744;
uint64_t x221 = 27095344371632473LLU;
static volatile int16_t x226 = -5067;
int32_t x236 = INT32_MAX;
static int32_t t51 = 168;
int32_t x246 = 245512703;
int32_t t52 = 1;
uint8_t x251 = 18U;
int32_t x258 = INT32_MIN;
volatile int32_t t55 = -357989;
int8_t x261 = INT8_MAX;
int8_t x264 = -5;
static int32_t x265 = -229830496;
int16_t x273 = INT16_MAX;
int16_t x276 = -559;
static int16_t x278 = -1;
int32_t t59 = 18442014;
uint32_t x281 = 95U;
int64_t x283 = -1LL;
volatile int64_t x290 = INT64_MIN;
int16_t x298 = -1377;
static volatile int8_t x300 = INT8_MIN;
int64_t x307 = INT64_MIN;
int16_t x309 = INT16_MIN;
static int16_t x310 = -1;
static int16_t x315 = -658;
volatile uint16_t x325 = 5U;
static volatile int32_t x326 = 32576847;
volatile int32_t t70 = 14;
int32_t t74 = 6745;
static volatile int32_t t76 = -16964;
int32_t x362 = INT32_MAX;
volatile uint8_t x363 = 11U;
volatile int16_t x370 = INT16_MIN;
int16_t x372 = -1;
static int16_t x373 = INT16_MIN;
int32_t x382 = -947;
int32_t t82 = 0;
volatile int32_t t84 = -19;
int32_t x398 = 397113;
volatile int8_t x407 = -1;
volatile uint64_t x410 = UINT64_MAX;
int64_t x411 = INT64_MIN;
int32_t x419 = -2184468;
int32_t t90 = -541733457;
static int16_t x426 = 45;
static int64_t x436 = -1LL;
int64_t x442 = INT64_MIN;
uint16_t x444 = 117U;
int64_t x448 = INT64_MAX;
volatile int32_t t95 = -13256035;
static int16_t x450 = -1;
int8_t x452 = INT8_MAX;
int32_t t96 = 78;
int32_t x456 = INT32_MAX;
int64_t x460 = -1LL;
static int16_t x464 = -773;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x3 = INT16_MIN;
	volatile uint32_t x4 = 2494U;
	volatile int32_t t0 = 9739;

	t0 = (x1<((x2<=x3)-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	volatile uint8_t x8 = 103U;

	t1 = (x5<((x6<=x7)-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	uint16_t x10 = 5U;
	uint64_t x11 = 539095600821970LLU;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -478455847;

	t2 = (x9<((x10<=x11)-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	int64_t x14 = INT64_MIN;
	int8_t x15 = -3;
	static uint64_t x16 = 7LLU;
	int32_t t3 = -2447;

	t3 = (x13<((x14<=x15)-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x19 = UINT8_MAX;
	static int32_t t4 = 0;

	t4 = (x17<((x18<=x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int16_t x22 = INT16_MIN;
	uint8_t x23 = 9U;
	int32_t x24 = INT32_MAX;

	t5 = (x21<((x22<=x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	volatile uint64_t x26 = 140LLU;
	static int16_t x27 = -64;
	static int8_t x28 = INT8_MIN;

	t6 = (x25<((x26<=x27)-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int64_t x31 = INT64_MAX;
	static uint64_t x32 = 7LLU;
	static volatile int32_t t7 = -13953;

	t7 = (x29<((x30<=x31)-x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	uint32_t x38 = 6338U;
	volatile int32_t t8 = 0;

	t8 = (x37<((x38<=x39)-x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	static uint16_t x44 = UINT16_MAX;

	t9 = (x41<((x42<=x43)-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MAX;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = INT16_MAX;

	t10 = (x45<((x46<=x47)-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = UINT8_MAX;
	uint64_t x50 = 466LLU;
	uint8_t x52 = 0U;

	t11 = (x49<((x50<=x51)-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 58U;
	uint8_t x54 = UINT8_MAX;
	uint32_t x56 = 107U;
	static int32_t t12 = -17066;

	t12 = (x53<((x54<=x55)-x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	volatile uint64_t x58 = 1816392LLU;
	int16_t x59 = 29;
	uint8_t x60 = 37U;
	static int32_t t13 = -237;

	t13 = (x57<((x58<=x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	static uint64_t x66 = 613377867LLU;
	volatile int64_t x67 = -1LL;
	int16_t x68 = INT16_MIN;
	volatile int32_t t14 = 208170;

	t14 = (x65<((x66<=x67)-x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x70 = 2542;
	int64_t x71 = 4145008090LL;
	uint16_t x72 = 2211U;
	volatile int32_t t15 = 159922;

	t15 = (x69<((x70<=x71)-x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 26U;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -39;
	int32_t t16 = -332603586;

	t16 = (x73<((x74<=x75)-x76));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = -1;
	int32_t x78 = INT32_MIN;
	int8_t x79 = 1;
	uint32_t x80 = 27735U;
	int32_t t17 = 482103;

	t17 = (x77<((x78<=x79)-x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	volatile int16_t x88 = -11169;
	volatile int32_t t18 = 1;

	t18 = (x85<((x86<=x87)-x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = -1LL;
	int64_t x91 = INT64_MIN;
	volatile uint32_t x92 = UINT32_MAX;
	volatile int32_t t19 = 9;

	t19 = (x89<((x90<=x91)-x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = -15513694153163LL;
	volatile int16_t x94 = -463;
	volatile uint64_t x96 = 733507556LLU;
	volatile int32_t t20 = -11477389;

	t20 = (x93<((x94<=x95)-x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MAX;
	uint16_t x98 = UINT16_MAX;
	uint32_t x99 = 111825U;
	int16_t x100 = INT16_MAX;
	int32_t t21 = -8;

	t21 = (x97<((x98<=x99)-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = -1LL;
	static uint8_t x107 = 118U;
	int64_t x108 = 832751LL;
	int32_t t22 = 3;

	t22 = (x105<((x106<=x107)-x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = INT8_MAX;
	volatile uint16_t x111 = 9U;
	int16_t x112 = -1;

	t23 = (x109<((x110<=x111)-x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x117 = INT16_MIN;
	int64_t x118 = -1LL;
	int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MAX;
	int32_t t24 = 7894247;

	t24 = (x117<((x118<=x119)-x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x126 = -1;
	static volatile int64_t x127 = -1LL;
	uint32_t x128 = UINT32_MAX;
	static volatile int32_t t25 = -135232816;

	t25 = (x125<((x126<=x127)-x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MIN;
	static int8_t x130 = -1;
	int16_t x132 = INT16_MIN;
	int32_t t26 = -13937407;

	t26 = (x129<((x130<=x131)-x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x133 = 2;
	static int16_t x134 = 3;
	int32_t x135 = 73;
	int16_t x136 = 28;
	int32_t t27 = 7782985;

	t27 = (x133<((x134<=x135)-x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = INT32_MAX;
	static int32_t x143 = INT32_MAX;
	static uint8_t x144 = UINT8_MAX;
	int32_t t28 = 79673;

	t28 = (x141<((x142<=x143)-x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = -1;
	int16_t x146 = INT16_MIN;
	volatile int32_t x147 = -1;
	int32_t t29 = -14195;

	t29 = (x145<((x146<=x147)-x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = INT16_MAX;
	int64_t x150 = INT64_MIN;
	static uint32_t x151 = UINT32_MAX;
	int32_t t30 = -54;

	t30 = (x149<((x150<=x151)-x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = INT32_MAX;
	int16_t x154 = 251;
	int32_t x155 = -84;
	int32_t t31 = -82;

	t31 = (x153<((x154<=x155)-x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x157 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t32 = 168152118;

	t32 = (x157<((x158<=x159)-x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x161 = 18U;
	int64_t x162 = -1623890845715294459LL;
	static int32_t x163 = INT32_MIN;
	int32_t x164 = -1;
	static volatile int32_t t33 = -6;

	t33 = (x161<((x162<=x163)-x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x165 = INT8_MAX;
	int8_t x167 = 18;
	uint64_t x168 = 254714713482LLU;
	int32_t t34 = 6707;

	t34 = (x165<((x166<=x167)-x168));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 3222U;
	uint16_t x170 = UINT16_MAX;
	uint8_t x171 = 0U;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t35 = -2;

	t35 = (x169<((x170<=x171)-x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x174 = 13LLU;
	int8_t x175 = INT8_MAX;
	int16_t x176 = -1;
	int32_t t36 = -1;

	t36 = (x173<((x174<=x175)-x176));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t t37 = -1;

	t37 = (x177<((x178<=x179)-x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -26354LL;
	int8_t x182 = INT8_MAX;
	volatile int16_t x184 = -4182;
	volatile int32_t t38 = 5950661;

	t38 = (x181<((x182<=x183)-x184));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x186 = 178610U;
	uint64_t x187 = UINT64_MAX;
	volatile int32_t t39 = 12877282;

	t39 = (x185<((x186<=x187)-x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x189 = 305U;
	int8_t x191 = INT8_MIN;
	volatile uint32_t x192 = 4442275U;
	int32_t t40 = -808;

	t40 = (x189<((x190<=x191)-x192));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = 24293U;
	uint16_t x196 = 704U;
	int32_t t41 = -30983667;

	t41 = (x193<((x194<=x195)-x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x197 = -42;
	int8_t x199 = -17;
	int8_t x200 = -1;
	static int32_t t42 = -10795419;

	t42 = (x197<((x198<=x199)-x200));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = -379;
	uint8_t x208 = 31U;
	volatile int32_t t43 = 59;

	t43 = (x205<((x206<=x207)-x208));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = -575030387185LL;
	static uint16_t x210 = 3677U;
	uint32_t x211 = 76070770U;
	uint32_t x212 = 2613096U;
	static int32_t t44 = 1518012;

	t44 = (x209<((x210<=x211)-x212));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MAX;
	volatile int16_t x214 = -4004;
	uint64_t x215 = 896454389777688LLU;
	uint32_t x216 = 189U;
	int32_t t45 = -36;

	t45 = (x213<((x214<=x215)-x216));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = -171LL;
	int8_t x219 = INT8_MIN;
	int32_t x220 = -1;

	t46 = (x217<((x218<=x219)-x220));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x222 = -1LL;
	int16_t x223 = -1;
	int8_t x224 = -1;
	int32_t t47 = -14391;

	t47 = (x221<((x222<=x223)-x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x225 = -1LL;
	int32_t x227 = INT32_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t48 = -7633;

	t48 = (x225<((x226<=x227)-x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = INT64_MAX;
	static uint32_t x230 = 927162U;
	int32_t x231 = INT32_MAX;
	static int8_t x232 = INT8_MIN;
	static volatile int32_t t49 = 316739;

	t49 = (x229<((x230<=x231)-x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x233 = -246;
	uint8_t x234 = 21U;
	static int32_t x235 = -1;
	static volatile int32_t t50 = -6;

	t50 = (x233<((x234<=x235)-x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MAX;
	static int8_t x244 = INT8_MIN;

	t51 = (x241<((x242<=x243)-x244));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = 665U;
	int16_t x247 = INT16_MAX;
	volatile int32_t x248 = 847742871;

	t52 = (x245<((x246<=x247)-x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = 713;
	int8_t x250 = INT8_MAX;
	int32_t x252 = -1;
	volatile int32_t t53 = 124;

	t53 = (x249<((x250<=x251)-x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x253 = 45507LLU;
	uint8_t x254 = 21U;
	uint8_t x255 = UINT8_MAX;
	int32_t x256 = 124706524;
	static volatile int32_t t54 = -83149;

	t54 = (x253<((x254<=x255)-x256));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x257 = 25635U;
	int16_t x259 = -1;
	int8_t x260 = INT8_MIN;

	t55 = (x257<((x258<=x259)-x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x262 = UINT64_MAX;
	static int8_t x263 = INT8_MIN;
	int32_t t56 = -3195598;

	t56 = (x261<((x262<=x263)-x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x266 = -1;
	static uint16_t x267 = UINT16_MAX;
	int64_t x268 = INT64_MAX;
	int32_t t57 = 2;

	t57 = (x265<((x266<=x267)-x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x274 = 478189U;
	uint64_t x275 = 22142480000LLU;
	int32_t t58 = 1;

	t58 = (x273<((x274<=x275)-x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x277 = 0U;
	uint8_t x279 = UINT8_MAX;
	static uint32_t x280 = 1U;

	t59 = (x277<((x278<=x279)-x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x282 = 171064U;
	int16_t x284 = -1;
	static int32_t t60 = -878;

	t60 = (x281<((x282<=x283)-x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x285 = 7017381LLU;
	static int8_t x286 = -1;
	int16_t x287 = INT16_MIN;
	static uint32_t x288 = UINT32_MAX;
	static volatile int32_t t61 = 245347;

	t61 = (x285<((x286<=x287)-x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x289 = INT64_MAX;
	int16_t x291 = INT16_MIN;
	int8_t x292 = -8;
	int32_t t62 = -4870531;

	t62 = (x289<((x290<=x291)-x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x297 = 100U;
	int32_t x299 = INT32_MAX;
	volatile int32_t t63 = -29914;

	t63 = (x297<((x298<=x299)-x300));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = INT16_MIN;
	static volatile int8_t x302 = INT8_MAX;
	volatile int8_t x303 = -8;
	uint32_t x304 = 1543U;
	int32_t t64 = 223;

	t64 = (x301<((x302<=x303)-x304));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x305 = 1364676LLU;
	int64_t x306 = 1024697LL;
	int16_t x308 = INT16_MAX;
	volatile int32_t t65 = -3332;

	t65 = (x305<((x306<=x307)-x308));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x311 = INT8_MIN;
	volatile int64_t x312 = INT64_MAX;
	static int32_t t66 = -445880;

	t66 = (x309<((x310<=x311)-x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MIN;
	volatile uint8_t x314 = UINT8_MAX;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t67 = 17984;

	t67 = (x313<((x314<=x315)-x316));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = 103;
	int8_t x319 = -1;
	static int8_t x320 = -12;
	volatile int32_t t68 = 7;

	t68 = (x317<((x318<=x319)-x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = INT16_MIN;
	volatile int64_t x322 = INT64_MAX;
	uint64_t x323 = UINT64_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t69 = 83137;

	t69 = (x321<((x322<=x323)-x324));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x327 = INT16_MAX;
	uint32_t x328 = 87282U;

	t70 = (x325<((x326<=x327)-x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x329 = 529790;
	int32_t x330 = -56039;
	volatile int16_t x331 = INT16_MIN;
	int64_t x332 = -1LL;
	int32_t t71 = -1;

	t71 = (x329<((x330<=x331)-x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = -1;
	int16_t x334 = -180;
	int16_t x335 = -69;
	int64_t x336 = INT64_MAX;
	volatile int32_t t72 = 83095202;

	t72 = (x333<((x334<=x335)-x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x337 = 1;
	static int32_t x338 = -789;
	int64_t x339 = INT64_MAX;
	static volatile uint8_t x340 = 6U;
	int32_t t73 = -4073;

	t73 = (x337<((x338<=x339)-x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = -3;
	static uint64_t x346 = UINT64_MAX;
	static uint64_t x347 = 13897312931LLU;
	static int16_t x348 = -4942;

	t74 = (x345<((x346<=x347)-x348));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x350 = -1;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = UINT64_MAX;
	int32_t t75 = 115;

	t75 = (x349<((x350<=x351)-x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x353 = 1U;
	uint64_t x354 = 43LLU;
	int8_t x355 = -1;
	uint32_t x356 = 19U;

	t76 = (x353<((x354<=x355)-x356));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x357 = 4U;
	int32_t x358 = -1;
	uint32_t x359 = 60586323U;
	uint16_t x360 = 5U;
	volatile int32_t t77 = -184637;

	t77 = (x357<((x358<=x359)-x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x361 = -2;
	int32_t x364 = 4;
	volatile int32_t t78 = 0;

	t78 = (x361<((x362<=x363)-x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x369 = UINT8_MAX;
	volatile uint8_t x371 = 28U;
	int32_t t79 = -7;

	t79 = (x369<((x370<=x371)-x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x374 = 91334244U;
	volatile int16_t x375 = -1;
	int16_t x376 = INT16_MIN;
	int32_t t80 = -25942866;

	t80 = (x373<((x374<=x375)-x376));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MAX;
	uint8_t x379 = UINT8_MAX;
	uint16_t x380 = UINT16_MAX;
	static int32_t t81 = 18193;

	t81 = (x377<((x378<=x379)-x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x381 = -119;
	static int32_t x383 = -1;
	uint16_t x384 = 992U;

	t82 = (x381<((x382<=x383)-x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x385 = 5LLU;
	volatile int64_t x386 = -1LL;
	static volatile uint8_t x387 = 0U;
	static int32_t x388 = INT32_MAX;
	volatile int32_t t83 = 13902;

	t83 = (x385<((x386<=x387)-x388));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x393 = UINT16_MAX;
	static uint16_t x394 = UINT16_MAX;
	int64_t x395 = -1LL;
	int64_t x396 = 13940LL;

	t84 = (x393<((x394<=x395)-x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x397 = 1;
	volatile uint8_t x399 = UINT8_MAX;
	int16_t x400 = 27;
	volatile int32_t t85 = -315951;

	t85 = (x397<((x398<=x399)-x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x405 = INT32_MIN;
	int8_t x406 = -1;
	static int64_t x408 = -1LL;
	int32_t t86 = -28;

	t86 = (x405<((x406<=x407)-x408));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x409 = INT32_MAX;
	uint16_t x412 = 23U;
	static int32_t t87 = 8534230;

	t87 = (x409<((x410<=x411)-x412));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint16_t x414 = 22U;
	uint64_t x415 = 458777116LLU;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t88 = 7022;

	t88 = (x413<((x414<=x415)-x416));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x417 = -607529692;
	static volatile int16_t x418 = 996;
	int16_t x420 = INT16_MIN;
	int32_t t89 = -328744143;

	t89 = (x417<((x418<=x419)-x420));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -1;
	static int64_t x422 = INT64_MIN;
	volatile int8_t x423 = INT8_MAX;
	volatile int16_t x424 = INT16_MIN;

	t90 = (x421<((x422<=x423)-x424));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x425 = UINT16_MAX;
	volatile uint64_t x427 = 85LLU;
	int32_t x428 = -7332009;
	int32_t t91 = 485272970;

	t91 = (x425<((x426<=x427)-x428));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x429 = -1;
	static volatile int8_t x430 = -1;
	static volatile int8_t x431 = INT8_MIN;
	static volatile int64_t x432 = -1LL;
	volatile int32_t t92 = -27;

	t92 = (x429<((x430<=x431)-x432));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x433 = 1U;
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = -1;
	int32_t t93 = 1;

	t93 = (x433<((x434<=x435)-x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x441 = 204927LLU;
	int64_t x443 = -1LL;
	static int32_t t94 = 54364610;

	t94 = (x441<((x442<=x443)-x444));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = INT64_MIN;
	int64_t x446 = -5813023522LL;
	int8_t x447 = INT8_MIN;

	t95 = (x445<((x446<=x447)-x448));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x449 = UINT32_MAX;
	uint16_t x451 = 12U;

	t96 = (x449<((x450<=x451)-x452));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x453 = INT32_MAX;
	volatile uint16_t x454 = 45U;
	uint64_t x455 = 62387867430512308LLU;
	int32_t t97 = -248;

	t97 = (x453<((x454<=x455)-x456));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x457 = INT16_MIN;
	volatile int8_t x458 = INT8_MIN;
	volatile int16_t x459 = -1;
	int32_t t98 = 154;

	t98 = (x457<((x458<=x459)-x460));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x461 = INT32_MIN;
	int16_t x462 = -1;
	int8_t x463 = 1;
	volatile int32_t t99 = -388;

	t99 = (x461<((x462<=x463)-x464));

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

