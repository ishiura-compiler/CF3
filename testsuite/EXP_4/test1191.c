#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int32_t x12 = 226507005;
uint64_t x13 = 126LLU;
uint16_t x14 = 1233U;
int64_t x19 = -1LL;
int8_t x24 = -1;
volatile int32_t t5 = 1056885;
uint32_t x31 = 6549946U;
int64_t x32 = INT64_MIN;
static int32_t t7 = -756087;
static volatile int32_t t8 = -249981;
uint8_t x40 = 62U;
uint8_t x45 = 25U;
volatile int32_t t11 = -23352431;
int32_t t12 = 0;
volatile int32_t t13 = 8;
volatile uint8_t x59 = 1U;
volatile int8_t x74 = -1;
int8_t x78 = -1;
uint8_t x82 = UINT8_MAX;
int8_t x84 = INT8_MIN;
int64_t x85 = 829302739459568000LL;
uint8_t x89 = 47U;
static volatile int64_t x105 = 89140999LL;
int32_t x106 = INT32_MIN;
static int8_t x110 = INT8_MIN;
uint8_t x113 = 1U;
int8_t x121 = INT8_MIN;
static int32_t x139 = INT32_MIN;
int32_t t33 = 3125;
int32_t x160 = INT32_MAX;
int32_t x163 = -1;
int16_t x164 = 1;
int32_t x189 = INT32_MIN;
volatile int32_t x192 = -1;
uint32_t x201 = 27U;
volatile int32_t t50 = 6574;
static int8_t x212 = INT8_MIN;
uint8_t x228 = 35U;
volatile uint64_t x231 = 25940949LLU;
static int8_t x232 = 3;
int16_t x236 = 1378;
int32_t x238 = -23070662;
uint16_t x246 = 26779U;
int64_t x248 = INT64_MIN;
volatile int32_t t60 = 536;
int16_t x250 = 854;
static int32_t x253 = 1;
int32_t x256 = 25709;
int16_t x267 = INT16_MAX;
volatile int64_t x269 = -1LL;
uint16_t x280 = UINT16_MAX;
static int32_t t68 = 38530262;
int32_t x281 = -1;
uint16_t x304 = UINT16_MAX;
int64_t x305 = INT64_MAX;
uint64_t x306 = 52473717677898LLU;
static uint8_t x307 = 9U;
static int32_t t76 = -1;
uint8_t x318 = UINT8_MAX;
static uint64_t x323 = 94430163424883LLU;
int32_t t79 = 4921;
uint16_t x334 = 94U;
volatile int32_t t82 = -37;
uint32_t x338 = 641600U;
uint32_t x340 = UINT32_MAX;
int32_t t84 = -3208;
int8_t x356 = INT8_MAX;
volatile int32_t t88 = 1;
int16_t x361 = -1;
int32_t t89 = 173053118;
uint16_t x368 = 31U;
int32_t t90 = 0;
volatile uint8_t x371 = 19U;
static int16_t x375 = INT16_MAX;
int32_t t92 = -400405538;
static int64_t x378 = INT64_MAX;
int64_t x383 = -9925LL;
static int8_t x387 = -30;
int64_t x390 = -1LL;
static volatile int32_t t98 = -299;


void f0(void) {
	static volatile int16_t x1 = 23;
	int16_t x3 = INT16_MIN;
	int8_t x4 = 38;
	static volatile int32_t t0 = 54273;

	t0 = (x1==(x2+(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -3756767187398351LL;
	static volatile int64_t x6 = INT64_MIN;
	uint8_t x7 = 0U;
	volatile int16_t x8 = 1126;
	int32_t t1 = -28500509;

	t1 = (x5==(x6+(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 0U;
	int16_t x11 = INT16_MAX;
	int32_t t2 = 97;

	t2 = (x9==(x10+(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = INT32_MIN;
	int64_t x16 = 7393370647162969LL;
	static int32_t t3 = -454;

	t3 = (x13==(x14+(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x18 = 12;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 1;

	t4 = (x17==(x18+(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = 6392758;
	volatile uint16_t x22 = 82U;
	int16_t x23 = INT16_MAX;

	t5 = (x21==(x22+(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint32_t x26 = UINT32_MAX;
	volatile int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	int32_t t6 = 875037;

	t6 = (x25==(x26+(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 15472;
	int32_t x30 = INT32_MIN;

	t7 = (x29==(x30+(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 51U;
	volatile uint64_t x34 = 830779445162LLU;
	volatile int16_t x35 = INT16_MAX;
	static uint32_t x36 = 56158726U;

	t8 = (x33==(x34+(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static uint8_t x38 = 7U;
	int32_t x39 = -11783;
	int32_t t9 = -230;

	t9 = (x37==(x38+(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	uint32_t x42 = UINT32_MAX;
	int64_t x43 = -1LL;
	static int16_t x44 = 1;
	volatile int32_t t10 = 52;

	t10 = (x41==(x42+(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	int16_t x47 = -1;
	static uint64_t x48 = 5660LLU;

	t11 = (x45==(x46+(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 505;
	static volatile uint16_t x50 = 55U;
	static int16_t x51 = INT16_MIN;
	volatile uint64_t x52 = UINT64_MAX;

	t12 = (x49==(x50+(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = 1010;
	uint16_t x55 = UINT16_MAX;
	uint8_t x56 = UINT8_MAX;

	t13 = (x53==(x54+(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	int32_t x58 = -1;
	int64_t x60 = 7873747485972LL;
	volatile int32_t t14 = -30;

	t14 = (x57==(x58+(x59==x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int8_t x62 = -1;
	volatile int32_t x63 = INT32_MAX;
	uint32_t x64 = 501291U;
	int32_t t15 = 115193860;

	t15 = (x61==(x62+(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = 7;
	int8_t x71 = -1;
	static int64_t x72 = 68937205946646LL;
	volatile int32_t t16 = 725015;

	t16 = (x69==(x70+(x71==x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -26;
	int8_t x75 = INT8_MAX;
	volatile uint16_t x76 = 72U;
	volatile int32_t t17 = 6;

	t17 = (x73==(x74+(x75==x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = 20;
	uint32_t x79 = 7252U;
	volatile int64_t x80 = 12825292929LL;
	static volatile int32_t t18 = -3164;

	t18 = (x77==(x78+(x79==x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MAX;
	int32_t x83 = 30;
	static int32_t t19 = 0;

	t19 = (x81==(x82+(x83==x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	int32_t x88 = -28240292;
	static volatile int32_t t20 = 22;

	t20 = (x85==(x86+(x87==x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = -1;
	uint8_t x91 = 4U;
	int64_t x92 = -1LL;
	volatile int32_t t21 = -1;

	t21 = (x89==(x90+(x91==x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 8;
	int32_t x94 = INT32_MIN;
	uint64_t x95 = 108LLU;
	int64_t x96 = INT64_MIN;
	volatile int32_t t22 = -156;

	t22 = (x93==(x94+(x95==x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x98 = INT8_MIN;
	volatile int16_t x99 = INT16_MAX;
	int32_t x100 = -1;
	int32_t t23 = -4423;

	t23 = (x97==(x98+(x99==x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -2;
	volatile int64_t x102 = INT64_MAX;
	int32_t x103 = -1;
	uint8_t x104 = 2U;
	static int32_t t24 = -16743;

	t24 = (x101==(x102+(x103==x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x107 = 24082431;
	int64_t x108 = INT64_MIN;
	int32_t t25 = 5114235;

	t25 = (x105==(x106+(x107==x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	static uint16_t x111 = UINT16_MAX;
	static int16_t x112 = 46;
	int32_t t26 = -1;

	t26 = (x109==(x110+(x111==x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = -1;
	int32_t x115 = -4687;
	uint64_t x116 = 6129066216LLU;
	volatile int32_t t27 = -1;

	t27 = (x113==(x114+(x115==x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x117 = 46133948LLU;
	int32_t x118 = -1;
	int8_t x119 = 53;
	volatile int8_t x120 = -16;
	volatile int32_t t28 = 11;

	t28 = (x117==(x118+(x119==x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x122 = -1;
	int64_t x123 = 486LL;
	static int32_t x124 = INT32_MIN;
	static int32_t t29 = -2770;

	t29 = (x121==(x122+(x123==x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	volatile uint16_t x126 = UINT16_MAX;
	volatile int32_t x127 = INT32_MAX;
	int8_t x128 = -1;
	int32_t t30 = -12399;

	t30 = (x125==(x126+(x127==x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x129 = -739556996218826LL;
	static int32_t x130 = INT32_MIN;
	uint64_t x131 = 3545LLU;
	uint32_t x132 = 12961974U;
	volatile int32_t t31 = 1005588;

	t31 = (x129==(x130+(x131==x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 5U;
	int64_t x134 = INT64_MAX;
	int64_t x135 = INT64_MIN;
	static uint8_t x136 = 1U;
	static volatile int32_t t32 = 2069;

	t32 = (x133==(x134+(x135==x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MIN;
	volatile uint16_t x140 = 7296U;

	t33 = (x137==(x138+(x139==x140)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x141 = 56U;
	int32_t x142 = INT32_MIN;
	uint32_t x143 = UINT32_MAX;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t34 = -6;

	t34 = (x141==(x142+(x143==x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -1LL;
	volatile uint8_t x146 = UINT8_MAX;
	int32_t x147 = INT32_MAX;
	int64_t x148 = INT64_MAX;
	volatile int32_t t35 = 2093304;

	t35 = (x145==(x146+(x147==x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x149 = -875442010;
	static int8_t x150 = -46;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = 47273U;
	volatile int32_t t36 = 1400474;

	t36 = (x149==(x150+(x151==x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	static int8_t x154 = INT8_MIN;
	volatile int8_t x155 = 1;
	uint8_t x156 = 1U;
	volatile int32_t t37 = 5535;

	t37 = (x153==(x154+(x155==x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 85250151LLU;
	uint32_t x158 = 1U;
	static volatile uint8_t x159 = 61U;
	volatile int32_t t38 = -350507312;

	t38 = (x157==(x158+(x159==x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x161 = 2764U;
	static uint32_t x162 = UINT32_MAX;
	int32_t t39 = -18;

	t39 = (x161==(x162+(x163==x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = 373246569562264LL;
	static uint16_t x166 = UINT16_MAX;
	uint8_t x167 = 0U;
	uint32_t x168 = 1779881977U;
	int32_t t40 = -244038;

	t40 = (x165==(x166+(x167==x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 500U;
	volatile int16_t x170 = -1;
	uint32_t x171 = 159671U;
	static uint64_t x172 = 23589333LLU;
	volatile int32_t t41 = 507553201;

	t41 = (x169==(x170+(x171==x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MAX;
	int8_t x174 = -1;
	int64_t x175 = INT64_MIN;
	static int64_t x176 = -501705878543860LL;
	static volatile int32_t t42 = -21724;

	t42 = (x173==(x174+(x175==x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 786898056176LLU;
	int64_t x178 = INT64_MIN;
	volatile uint16_t x179 = 0U;
	int32_t x180 = INT32_MAX;
	volatile int32_t t43 = -511796154;

	t43 = (x177==(x178+(x179==x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = 90U;
	int8_t x182 = -1;
	static volatile uint8_t x183 = 6U;
	int16_t x184 = 15;
	volatile int32_t t44 = -60436889;

	t44 = (x181==(x182+(x183==x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MAX;
	volatile int8_t x186 = -1;
	uint16_t x187 = 411U;
	static int64_t x188 = 1490014889LL;
	int32_t t45 = 251;

	t45 = (x185==(x186+(x187==x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x190 = 2U;
	volatile int8_t x191 = INT8_MIN;
	int32_t t46 = -462740666;

	t46 = (x189==(x190+(x191==x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MIN;
	static volatile int8_t x195 = 50;
	static volatile int32_t x196 = INT32_MIN;
	int32_t t47 = -411;

	t47 = (x193==(x194+(x195==x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -265094LL;
	uint32_t x198 = 6208904U;
	int8_t x199 = -30;
	int32_t x200 = INT32_MAX;
	static volatile int32_t t48 = -73060;

	t48 = (x197==(x198+(x199==x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = 435289;
	int32_t x203 = INT32_MIN;
	static volatile int8_t x204 = INT8_MIN;
	static volatile int32_t t49 = 510;

	t49 = (x201==(x202+(x203==x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = 1182;
	static int8_t x206 = -1;
	volatile int64_t x207 = INT64_MIN;
	static int64_t x208 = INT64_MAX;

	t50 = (x205==(x206+(x207==x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = 0U;
	volatile uint8_t x210 = 71U;
	int16_t x211 = INT16_MAX;
	volatile int32_t t51 = -110;

	t51 = (x209==(x210+(x211==x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = -1LL;
	int64_t x215 = -1LL;
	int8_t x216 = -1;
	volatile int32_t t52 = -27;

	t52 = (x213==(x214+(x215==x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -3973;
	volatile int32_t x218 = -53509679;
	int32_t x219 = -1;
	int64_t x220 = -1LL;
	int32_t t53 = -3;

	t53 = (x217==(x218+(x219==x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x221 = UINT32_MAX;
	volatile int64_t x222 = -1LL;
	int64_t x223 = INT64_MIN;
	volatile int8_t x224 = -1;
	int32_t t54 = -8090;

	t54 = (x221==(x222+(x223==x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = 10;
	int32_t x227 = INT32_MAX;
	volatile int32_t t55 = -45145917;

	t55 = (x225==(x226+(x227==x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = UINT64_MAX;
	int8_t x230 = -1;
	static volatile int32_t t56 = -15622988;

	t56 = (x229==(x230+(x231==x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	int32_t t57 = 3;

	t57 = (x233==(x234+(x235==x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -28;
	int16_t x239 = -2;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t58 = -4042;

	t58 = (x237==(x238+(x239==x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = 5422;
	static uint64_t x242 = 8619289181LLU;
	int8_t x243 = -1;
	static int8_t x244 = INT8_MIN;
	static volatile int32_t t59 = -10;

	t59 = (x241==(x242+(x243==x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -1;
	int32_t x247 = INT32_MIN;

	t60 = (x245==(x246+(x247==x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x249 = 3;
	static volatile int8_t x251 = 0;
	static int64_t x252 = 1748384309989686LL;
	static int32_t t61 = -11;

	t61 = (x249==(x250+(x251==x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x254 = INT8_MIN;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t t62 = 145681764;

	t62 = (x253==(x254+(x255==x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = 384;
	uint16_t x258 = 4035U;
	int8_t x259 = 19;
	int16_t x260 = -107;
	volatile int32_t t63 = -27;

	t63 = (x257==(x258+(x259==x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 26921246662LLU;
	uint64_t x262 = 4649206987260371975LLU;
	uint16_t x263 = UINT16_MAX;
	volatile uint64_t x264 = UINT64_MAX;
	int32_t t64 = -878;

	t64 = (x261==(x262+(x263==x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 1U;
	uint16_t x266 = UINT16_MAX;
	int16_t x268 = -1;
	volatile int32_t t65 = -830;

	t65 = (x265==(x266+(x267==x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x270 = INT64_MIN;
	static int32_t x271 = -1;
	int32_t x272 = INT32_MAX;
	int32_t t66 = 12254483;

	t66 = (x269==(x270+(x271==x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	uint8_t x274 = 3U;
	volatile uint8_t x275 = UINT8_MAX;
	int32_t x276 = INT32_MIN;
	int32_t t67 = 273317515;

	t67 = (x273==(x274+(x275==x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x277 = 15U;
	uint8_t x278 = UINT8_MAX;
	int8_t x279 = -3;

	t68 = (x277==(x278+(x279==x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x282 = -1;
	uint8_t x283 = 8U;
	int64_t x284 = INT64_MIN;
	volatile int32_t t69 = 109;

	t69 = (x281==(x282+(x283==x284)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 193U;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = UINT16_MAX;
	int32_t t70 = -12;

	t70 = (x285==(x286+(x287==x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = -1;
	static volatile uint32_t x290 = 64776U;
	int64_t x291 = -748952LL;
	uint64_t x292 = 441LLU;
	int32_t t71 = -1618;

	t71 = (x289==(x290+(x291==x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MIN;
	uint8_t x294 = UINT8_MAX;
	volatile int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	int32_t t72 = -269;

	t72 = (x293==(x294+(x295==x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	static int16_t x298 = 0;
	uint64_t x299 = 142LLU;
	int64_t x300 = INT64_MIN;
	int32_t t73 = -329313156;

	t73 = (x297==(x298+(x299==x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x301 = UINT16_MAX;
	static volatile uint64_t x302 = UINT64_MAX;
	static volatile int16_t x303 = -1;
	volatile int32_t t74 = 1285;

	t74 = (x301==(x302+(x303==x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x308 = INT64_MIN;
	int32_t t75 = 1168273;

	t75 = (x305==(x306+(x307==x308)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x309 = INT32_MAX;
	int16_t x310 = -7596;
	uint16_t x311 = UINT16_MAX;
	volatile int8_t x312 = INT8_MAX;

	t76 = (x309==(x310+(x311==x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x313 = INT8_MIN;
	uint64_t x314 = UINT64_MAX;
	volatile int32_t x315 = INT32_MIN;
	int64_t x316 = -1LL;
	int32_t t77 = 464;

	t77 = (x313==(x314+(x315==x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 29U;
	static int8_t x319 = INT8_MAX;
	uint32_t x320 = 1156742612U;
	volatile int32_t t78 = 165455;

	t78 = (x317==(x318+(x319==x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = 316U;
	int64_t x322 = INT64_MIN;
	uint8_t x324 = 13U;

	t79 = (x321==(x322+(x323==x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x325 = INT16_MIN;
	int8_t x326 = -1;
	int16_t x327 = 9;
	volatile uint32_t x328 = 3U;
	static volatile int32_t t80 = -63328893;

	t80 = (x325==(x326+(x327==x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = 68U;
	volatile uint64_t x330 = 54747291847LLU;
	int16_t x331 = INT16_MAX;
	static int8_t x332 = INT8_MIN;
	int32_t t81 = -4750;

	t81 = (x329==(x330+(x331==x332)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x333 = -1;
	int16_t x335 = INT16_MIN;
	uint8_t x336 = 14U;

	t82 = (x333==(x334+(x335==x336)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x337 = 1;
	int8_t x339 = -4;
	volatile int32_t t83 = -39;

	t83 = (x337==(x338+(x339==x340)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	uint32_t x343 = 16627002U;
	static uint16_t x344 = 15694U;

	t84 = (x341==(x342+(x343==x344)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = -1LL;
	static int64_t x346 = INT64_MIN;
	static int32_t x347 = 16519915;
	uint16_t x348 = 3U;
	int32_t t85 = 1;

	t85 = (x345==(x346+(x347==x348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = 1980589407U;
	int8_t x350 = 0;
	volatile uint64_t x351 = 3LLU;
	int32_t x352 = INT32_MAX;
	volatile int32_t t86 = -252;

	t86 = (x349==(x350+(x351==x352)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MIN;
	uint32_t x355 = 5311U;
	int32_t t87 = -9651;

	t87 = (x353==(x354+(x355==x356)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = 0;
	uint32_t x358 = 5687U;
	int16_t x359 = -1;
	static uint8_t x360 = UINT8_MAX;

	t88 = (x357==(x358+(x359==x360)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x362 = 0;
	static int64_t x363 = INT64_MIN;
	static uint64_t x364 = UINT64_MAX;

	t89 = (x361==(x362+(x363==x364)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = -388732654769789LL;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;

	t90 = (x365==(x366+(x367==x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = 100U;
	int8_t x370 = 4;
	volatile int64_t x372 = -1LL;
	int32_t t91 = -199380150;

	t91 = (x369==(x370+(x371==x372)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x373 = 41435812LLU;
	volatile uint64_t x374 = 14682740LLU;
	volatile int16_t x376 = INT16_MAX;

	t92 = (x373==(x374+(x375==x376)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x377 = -1LL;
	int16_t x379 = 49;
	int32_t x380 = INT32_MIN;
	static int32_t t93 = -8;

	t93 = (x377==(x378+(x379==x380)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = INT8_MAX;
	volatile int64_t x382 = -44152142211LL;
	volatile uint64_t x384 = 34581LLU;
	volatile int32_t t94 = 3;

	t94 = (x381==(x382+(x383==x384)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MIN;
	volatile uint32_t x388 = UINT32_MAX;
	volatile int32_t t95 = -17943789;

	t95 = (x385==(x386+(x387==x388)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 1U;
	volatile int64_t x391 = INT64_MIN;
	volatile int8_t x392 = INT8_MAX;
	static int32_t t96 = -5390;

	t96 = (x389==(x390+(x391==x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = -1;
	uint64_t x395 = 440LLU;
	static uint32_t x396 = UINT32_MAX;
	int32_t t97 = -489949;

	t97 = (x393==(x394+(x395==x396)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = 973U;
	static volatile int8_t x398 = 3;
	int64_t x399 = 0LL;
	volatile int8_t x400 = -59;

	t98 = (x397==(x398+(x399==x400)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x401 = INT8_MIN;
	static int16_t x402 = INT16_MIN;
	static uint64_t x403 = UINT64_MAX;
	int64_t x404 = -1LL;
	volatile int32_t t99 = -50;

	t99 = (x401==(x402+(x403==x404)));

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

