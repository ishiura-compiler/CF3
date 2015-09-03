#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
static volatile int32_t x6 = INT32_MIN;
volatile uint32_t x8 = 60U;
uint32_t x11 = UINT32_MAX;
volatile int32_t t2 = 3888633;
static int32_t t3 = -7;
uint16_t x18 = 1U;
uint16_t x21 = UINT16_MAX;
int16_t x22 = INT16_MIN;
int8_t x23 = 29;
volatile int8_t x25 = -1;
static volatile uint16_t x28 = 7931U;
int64_t x30 = INT64_MIN;
int16_t x32 = -1;
volatile int32_t t7 = 123647649;
static uint8_t x36 = 7U;
int32_t x39 = -1;
int32_t t9 = 233112;
int16_t x52 = -1;
uint32_t x53 = 4497U;
uint16_t x55 = UINT16_MAX;
int8_t x60 = 6;
int32_t t13 = -23;
volatile uint64_t x63 = UINT64_MAX;
int32_t x66 = 7915;
volatile int16_t x68 = 435;
volatile uint8_t x70 = 126U;
int32_t x71 = -1;
int32_t x78 = INT32_MAX;
int8_t x79 = -5;
int8_t x80 = -19;
static int32_t t17 = 17;
int64_t x82 = -1LL;
int32_t x83 = INT32_MIN;
volatile int32_t t18 = 9;
int64_t x85 = INT64_MAX;
int16_t x100 = INT16_MIN;
uint16_t x105 = 229U;
int64_t x106 = INT64_MIN;
volatile uint8_t x117 = 86U;
int32_t x122 = 1;
int8_t x136 = 1;
volatile int32_t t28 = 616;
uint8_t x139 = 0U;
int8_t x142 = INT8_MIN;
uint8_t x148 = 95U;
uint32_t x155 = 7753U;
volatile int32_t t34 = 3117;
int64_t x161 = INT64_MIN;
volatile int8_t x172 = 0;
uint64_t x173 = 2037LLU;
static volatile uint64_t x187 = 528200023LLU;
int64_t x201 = -15342037920953064LL;
uint16_t x209 = 0U;
int32_t x210 = -29104362;
static volatile int32_t t45 = 16091944;
int8_t x214 = INT8_MIN;
int8_t x217 = -1;
uint8_t x218 = 107U;
uint8_t x222 = UINT8_MAX;
volatile int32_t t48 = -57;
static int32_t x225 = -1;
int8_t x231 = -1;
static volatile int16_t x233 = -1;
uint16_t x237 = 2479U;
int16_t x238 = INT16_MIN;
int32_t x239 = 2374868;
volatile int32_t t52 = 229067;
int8_t x250 = 1;
uint64_t x251 = 415278135597LLU;
int16_t x256 = INT16_MIN;
volatile int32_t t57 = 111619;
static uint16_t x263 = 46U;
uint8_t x264 = 1U;
uint16_t x268 = UINT16_MAX;
volatile uint8_t x272 = 3U;
static volatile int32_t t61 = 26658597;
static volatile uint32_t x277 = UINT32_MAX;
static int16_t x283 = INT16_MAX;
static uint64_t x285 = 695003826025229LLU;
int32_t x293 = INT32_MAX;
static uint32_t x294 = 369194U;
int8_t x295 = INT8_MIN;
uint8_t x297 = UINT8_MAX;
volatile int32_t t67 = -3;
uint64_t x303 = UINT64_MAX;
volatile int16_t x310 = 7190;
uint32_t x314 = 12124U;
int32_t t70 = 48352;
volatile int32_t x318 = INT32_MIN;
volatile int64_t x319 = INT64_MIN;
volatile int32_t t71 = 0;
uint8_t x329 = 0U;
int64_t x336 = -1LL;
uint16_t x338 = 30054U;
int32_t t75 = 7;
int32_t x342 = INT32_MIN;
int32_t t76 = 308805;
int64_t x346 = 77LL;
volatile int32_t t78 = 127704621;
static uint8_t x355 = UINT8_MAX;
static int16_t x357 = INT16_MAX;
uint16_t x360 = 4267U;
volatile uint16_t x363 = 0U;
uint32_t x367 = UINT32_MAX;
int32_t x375 = -106778596;
int64_t x377 = 2137723508306LL;
int32_t t86 = 1550018;
int16_t x388 = INT16_MIN;
static volatile int8_t x395 = INT8_MAX;
int16_t x399 = INT16_MAX;
volatile uint32_t x404 = UINT32_MAX;
int64_t x409 = INT64_MAX;
uint8_t x426 = 1U;
int32_t t96 = 1890010;
volatile int32_t x429 = 9143236;
uint16_t x433 = 10940U;
volatile int32_t t98 = -268;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x2 = UINT64_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 101034;

	t0 = (x1==(x2<=(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 12;
	int8_t x7 = -43;
	int32_t t1 = 1855;

	t1 = (x5==(x6<=(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int16_t x10 = 48;
	uint32_t x12 = 1516347238U;

	t2 = (x9==(x10<=(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int64_t x14 = 109552063695743LL;
	uint8_t x15 = 41U;
	uint32_t x16 = 445423767U;

	t3 = (x13==(x14<=(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 5854999;
	int16_t x19 = -1;
	volatile int32_t x20 = -1;
	int32_t t4 = 3029;

	t4 = (x17==(x18<=(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x24 = INT16_MAX;
	static volatile int32_t t5 = 1057198645;

	t5 = (x21==(x22<=(x23+x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	volatile int8_t x27 = -58;
	volatile int32_t t6 = 128;

	t6 = (x25==(x26<=(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint32_t x31 = 1965U;

	t7 = (x29==(x30<=(x31+x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = 26193234580LL;
	volatile uint16_t x34 = 110U;
	int32_t x35 = -1;
	int32_t t8 = 530186180;

	t8 = (x33==(x34<=(x35+x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -1;
	static volatile uint16_t x38 = 1755U;
	static int64_t x40 = 3850553795586742LL;

	t9 = (x37==(x38<=(x39+x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 1U;
	int8_t x46 = INT8_MIN;
	int8_t x47 = -60;
	volatile int64_t x48 = 2428736LL;
	volatile int32_t t10 = -1;

	t10 = (x45==(x46<=(x47+x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 817U;
	int16_t x50 = INT16_MAX;
	int32_t x51 = 59;
	int32_t t11 = -2808;

	t11 = (x49==(x50<=(x51+x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x54 = UINT16_MAX;
	static int16_t x56 = -1;
	int32_t t12 = -28;

	t12 = (x53==(x54<=(x55+x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = -1;
	int64_t x59 = 932863686682LL;

	t13 = (x57==(x58<=(x59+x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	volatile uint16_t x62 = 2019U;
	static int16_t x64 = -518;
	volatile int32_t t14 = 389154;

	t14 = (x61==(x62<=(x63+x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	volatile int8_t x67 = INT8_MIN;
	static int32_t t15 = 209372113;

	t15 = (x65==(x66<=(x67+x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x69 = -1;
	uint64_t x72 = 91445572799854562LLU;
	volatile int32_t t16 = 1;

	t16 = (x69==(x70<=(x71+x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 14131;

	t17 = (x77==(x78<=(x79+x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = UINT8_MAX;
	int32_t x84 = 113;

	t18 = (x81==(x82<=(x83+x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = INT16_MIN;
	int64_t x87 = -1LL;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t19 = 1608;

	t19 = (x85==(x86<=(x87+x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = 26U;
	int8_t x98 = -8;
	uint64_t x99 = 2573LLU;
	static int32_t t20 = -1;

	t20 = (x97==(x98<=(x99+x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x107 = 1;
	int32_t x108 = 756760;
	int32_t t21 = 7456175;

	t21 = (x105==(x106<=(x107+x108)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 0;
	int8_t x110 = INT8_MAX;
	volatile int16_t x111 = -1;
	int64_t x112 = -1LL;
	int32_t t22 = -371439873;

	t22 = (x109==(x110<=(x111+x112)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = 1903803615LLU;
	static volatile uint16_t x115 = 11U;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t23 = 229512;

	t23 = (x113==(x114<=(x115+x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x118 = -1LL;
	int64_t x119 = -8787255361170757LL;
	volatile int32_t x120 = INT32_MAX;
	int32_t t24 = -12553968;

	t24 = (x117==(x118<=(x119+x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = 212627148;
	volatile int64_t x123 = INT64_MAX;
	volatile int8_t x124 = INT8_MIN;
	int32_t t25 = 7;

	t25 = (x121==(x122<=(x123+x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MAX;
	uint8_t x126 = UINT8_MAX;
	uint64_t x127 = 467029357LLU;
	int32_t x128 = -264224448;
	int32_t t26 = 68544;

	t26 = (x125==(x126<=(x127+x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x129 = 1182100610705239796LLU;
	static int16_t x130 = INT16_MAX;
	uint32_t x131 = UINT32_MAX;
	uint32_t x132 = 14U;
	int32_t t27 = -46;

	t27 = (x129==(x130<=(x131+x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = -5;
	volatile int64_t x134 = 4492875448990835LL;
	volatile uint8_t x135 = 69U;

	t28 = (x133==(x134<=(x135+x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = -1;
	static int64_t x138 = INT64_MIN;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t29 = -58911609;

	t29 = (x137==(x138<=(x139+x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x141 = INT8_MIN;
	volatile uint64_t x143 = 4LLU;
	volatile int8_t x144 = -1;
	static int32_t t30 = 203069051;

	t30 = (x141==(x142<=(x143+x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x145 = UINT64_MAX;
	int32_t x146 = INT32_MIN;
	volatile uint32_t x147 = UINT32_MAX;
	int32_t t31 = 279090641;

	t31 = (x145==(x146<=(x147+x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MAX;
	volatile int64_t x150 = INT64_MIN;
	static uint8_t x151 = UINT8_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t32 = 2282535;

	t32 = (x149==(x150<=(x151+x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MIN;
	uint64_t x156 = 116124566246035LLU;
	static volatile int32_t t33 = -1833;

	t33 = (x153==(x154<=(x155+x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = -516566523LL;
	int8_t x158 = INT8_MIN;
	int32_t x159 = -1;
	uint32_t x160 = UINT32_MAX;

	t34 = (x157==(x158<=(x159+x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x162 = -15323LL;
	uint64_t x163 = 772014695LLU;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t35 = 11597772;

	t35 = (x161==(x162<=(x163+x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = -2;
	int64_t x166 = INT64_MAX;
	int64_t x167 = -945LL;
	int64_t x168 = -2583460LL;
	int32_t t36 = 1286;

	t36 = (x165==(x166<=(x167+x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -1;
	static int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	volatile int32_t t37 = -1098;

	t37 = (x169==(x170<=(x171+x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x174 = INT64_MIN;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = -1;
	int32_t t38 = 66094205;

	t38 = (x173==(x174<=(x175+x176)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x177 = 39284051049360LLU;
	volatile int32_t x178 = -108929345;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = UINT16_MAX;
	int32_t t39 = -6810558;

	t39 = (x177==(x178<=(x179+x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = -723987421273807581LL;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = -1;
	int32_t t40 = 0;

	t40 = (x181==(x182<=(x183+x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = INT8_MAX;
	volatile int8_t x186 = -1;
	int8_t x188 = 3;
	volatile int32_t t41 = 1;

	t41 = (x185==(x186<=(x187+x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 22628194U;
	int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MAX;
	volatile uint16_t x196 = 209U;
	volatile int32_t t42 = -186232845;

	t42 = (x193==(x194<=(x195+x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x197 = -1LL;
	uint16_t x198 = 1U;
	volatile int8_t x199 = INT8_MIN;
	int16_t x200 = -3;
	int32_t t43 = -176682;

	t43 = (x197==(x198<=(x199+x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x202 = UINT8_MAX;
	int32_t x203 = INT32_MIN;
	static uint32_t x204 = 63250973U;
	int32_t t44 = -26298;

	t44 = (x201==(x202<=(x203+x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x211 = 3;
	volatile int16_t x212 = -1;

	t45 = (x209==(x210<=(x211+x212)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x213 = 127;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 93U;
	volatile int32_t t46 = 2599997;

	t46 = (x213==(x214<=(x215+x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MIN;
	int32_t t47 = 163757448;

	t47 = (x217==(x218<=(x219+x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = -10436;
	int64_t x223 = 1554401430332698272LL;
	int64_t x224 = -1LL;

	t48 = (x221==(x222<=(x223+x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x226 = -1LL;
	int32_t x227 = INT32_MIN;
	static int16_t x228 = 1;
	volatile int32_t t49 = -15969;

	t49 = (x225==(x226<=(x227+x228)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x229 = INT16_MIN;
	int16_t x230 = INT16_MAX;
	uint8_t x232 = UINT8_MAX;
	static int32_t t50 = -4499;

	t50 = (x229==(x230<=(x231+x232)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x234 = INT16_MIN;
	int8_t x235 = 3;
	volatile int32_t x236 = INT32_MIN;
	volatile int32_t t51 = -155;

	t51 = (x233==(x234<=(x235+x236)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x240 = INT32_MIN;

	t52 = (x237==(x238<=(x239+x240)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 15U;
	static uint16_t x242 = UINT16_MAX;
	static volatile int64_t x243 = INT64_MIN;
	volatile uint32_t x244 = 16641425U;
	int32_t t53 = 0;

	t53 = (x241==(x242<=(x243+x244)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x245 = INT32_MIN;
	static int32_t x246 = 74498373;
	volatile uint32_t x247 = 110606937U;
	uint32_t x248 = 925842U;
	int32_t t54 = 2350;

	t54 = (x245==(x246<=(x247+x248)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x249 = 6U;
	int8_t x252 = -1;
	volatile int32_t t55 = 16648;

	t55 = (x249==(x250<=(x251+x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = -1;
	int32_t x254 = 13024083;
	int64_t x255 = -1LL;
	int32_t t56 = -681886;

	t56 = (x253==(x254<=(x255+x256)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x257 = 14U;
	volatile int8_t x258 = 33;
	int16_t x259 = -1;
	int8_t x260 = INT8_MIN;

	t57 = (x257==(x258<=(x259+x260)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x261 = -1LL;
	static uint16_t x262 = UINT16_MAX;
	int32_t t58 = -7369405;

	t58 = (x261==(x262<=(x263+x264)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x265 = INT32_MIN;
	int8_t x266 = -1;
	int8_t x267 = INT8_MIN;
	int32_t t59 = -7;

	t59 = (x265==(x266<=(x267+x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -61;
	static int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	int32_t t60 = 774850737;

	t60 = (x269==(x270<=(x271+x272)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x273 = 678;
	uint64_t x274 = 74832LLU;
	static int64_t x275 = 1819001113LL;
	volatile int32_t x276 = -132;

	t61 = (x273==(x274<=(x275+x276)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x278 = -1LL;
	volatile uint32_t x279 = 1088U;
	int16_t x280 = INT16_MAX;
	int32_t t62 = -287;

	t62 = (x277==(x278<=(x279+x280)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x281 = -1;
	volatile int64_t x282 = 174LL;
	int8_t x284 = -1;
	static int32_t t63 = 1477;

	t63 = (x281==(x282<=(x283+x284)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x286 = INT16_MIN;
	static uint16_t x287 = 227U;
	int32_t x288 = -827;
	int32_t t64 = -1604;

	t64 = (x285==(x286<=(x287+x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x289 = INT8_MAX;
	int16_t x290 = INT16_MIN;
	uint32_t x291 = 12745432U;
	static int16_t x292 = -61;
	int32_t t65 = -21052354;

	t65 = (x289==(x290<=(x291+x292)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x296 = -15418LL;
	static volatile int32_t t66 = -2203;

	t66 = (x293==(x294<=(x295+x296)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x298 = 115;
	uint16_t x299 = 27U;
	int64_t x300 = INT64_MIN;

	t67 = (x297==(x298<=(x299+x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x301 = 15U;
	int32_t x302 = -4429027;
	volatile int8_t x304 = 25;
	volatile int32_t t68 = -8385242;

	t68 = (x301==(x302<=(x303+x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = 19896U;
	static volatile int16_t x311 = -2;
	int64_t x312 = -6LL;
	int32_t t69 = 371440;

	t69 = (x309==(x310<=(x311+x312)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x313 = 2U;
	static int64_t x315 = INT64_MAX;
	int16_t x316 = INT16_MIN;

	t70 = (x313==(x314<=(x315+x316)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x320 = 151U;

	t71 = (x317==(x318<=(x319+x320)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = 36174099LLU;
	int32_t x323 = -1;
	int16_t x324 = 260;
	volatile int32_t t72 = 54298;

	t72 = (x321==(x322<=(x323+x324)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MAX;
	static volatile int32_t x332 = INT32_MIN;
	int32_t t73 = 177461;

	t73 = (x329==(x330<=(x331+x332)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x333 = 150U;
	static int64_t x334 = -1LL;
	int8_t x335 = INT8_MIN;
	int32_t t74 = -15;

	t74 = (x333==(x334<=(x335+x336)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = 7926;
	int16_t x339 = INT16_MIN;
	uint32_t x340 = UINT32_MAX;

	t75 = (x337==(x338<=(x339+x340)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = -1;
	uint16_t x343 = UINT16_MAX;
	int32_t x344 = INT32_MIN;

	t76 = (x341==(x342<=(x343+x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x345 = 104U;
	int32_t x347 = INT32_MIN;
	uint64_t x348 = 440034778733240604LLU;
	volatile int32_t t77 = 63984791;

	t77 = (x345==(x346<=(x347+x348)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = -1;
	uint8_t x350 = 42U;
	volatile uint32_t x351 = UINT32_MAX;
	static volatile uint8_t x352 = 91U;

	t78 = (x349==(x350<=(x351+x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = INT32_MAX;
	volatile uint8_t x354 = 114U;
	int32_t x356 = INT32_MIN;
	int32_t t79 = -91;

	t79 = (x353==(x354<=(x355+x356)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x358 = -3715671100624LL;
	int32_t x359 = -1;
	volatile int32_t t80 = -1391;

	t80 = (x357==(x358<=(x359+x360)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = -130056722666LL;
	int8_t x362 = INT8_MIN;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t81 = -225347;

	t81 = (x361==(x362<=(x363+x364)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x365 = INT64_MAX;
	int32_t x366 = 745;
	int8_t x368 = INT8_MAX;
	static int32_t t82 = 4631779;

	t82 = (x365==(x366<=(x367+x368)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = INT8_MIN;
	uint8_t x370 = 14U;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = INT8_MAX;
	volatile int32_t t83 = 890589133;

	t83 = (x369==(x370<=(x371+x372)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = 1U;
	int8_t x374 = INT8_MAX;
	volatile uint16_t x376 = 29293U;
	static volatile int32_t t84 = 32706083;

	t84 = (x373==(x374<=(x375+x376)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x378 = INT8_MAX;
	int16_t x379 = -3;
	uint32_t x380 = UINT32_MAX;
	static int32_t t85 = -7671;

	t85 = (x377==(x378<=(x379+x380)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x381 = 338175U;
	volatile uint32_t x382 = UINT32_MAX;
	static uint32_t x383 = UINT32_MAX;
	uint8_t x384 = 31U;

	t86 = (x381==(x382<=(x383+x384)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x386 = INT32_MIN;
	static uint64_t x387 = 1630077806301684514LLU;
	int32_t t87 = -98370;

	t87 = (x385==(x386<=(x387+x388)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = 5;
	int8_t x390 = 1;
	volatile int8_t x391 = INT8_MIN;
	int32_t x392 = -1;
	volatile int32_t t88 = -1;

	t88 = (x389==(x390<=(x391+x392)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x393 = -1LL;
	int64_t x394 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	volatile int32_t t89 = 13;

	t89 = (x393==(x394<=(x395+x396)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x397 = INT16_MIN;
	volatile int64_t x398 = INT64_MIN;
	volatile int8_t x400 = 4;
	int32_t t90 = 313306;

	t90 = (x397==(x398<=(x399+x400)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 1524U;
	volatile int32_t x403 = -1;
	int32_t t91 = -3221;

	t91 = (x401==(x402<=(x403+x404)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = -1;
	static volatile int64_t x406 = -891078738142394489LL;
	static uint32_t x407 = UINT32_MAX;
	volatile uint64_t x408 = 1300775092LLU;
	int32_t t92 = 1999205;

	t92 = (x405==(x406<=(x407+x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x410 = INT32_MIN;
	static volatile int8_t x411 = -1;
	volatile uint32_t x412 = UINT32_MAX;
	int32_t t93 = 26658830;

	t93 = (x409==(x410<=(x411+x412)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x417 = 0U;
	uint32_t x418 = 853023U;
	int16_t x419 = INT16_MIN;
	volatile uint32_t x420 = 940293U;
	volatile int32_t t94 = -21646;

	t94 = (x417==(x418<=(x419+x420)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x421 = 14791U;
	uint64_t x422 = UINT64_MAX;
	int32_t x423 = -1;
	uint16_t x424 = UINT16_MAX;
	int32_t t95 = -58818;

	t95 = (x421==(x422<=(x423+x424)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x425 = UINT8_MAX;
	volatile uint8_t x427 = 3U;
	volatile int8_t x428 = INT8_MIN;

	t96 = (x425==(x426<=(x427+x428)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x430 = 46U;
	static volatile int8_t x431 = -1;
	volatile uint32_t x432 = UINT32_MAX;
	volatile int32_t t97 = 1;

	t97 = (x429==(x430<=(x431+x432)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x434 = 1;
	static int32_t x435 = INT32_MIN;
	volatile uint32_t x436 = UINT32_MAX;

	t98 = (x433==(x434<=(x435+x436)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x437 = 334131368LLU;
	uint8_t x438 = 3U;
	uint32_t x439 = 29339358U;
	static volatile uint8_t x440 = UINT8_MAX;
	static int32_t t99 = -147572;

	t99 = (x437==(x438<=(x439+x440)));

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

