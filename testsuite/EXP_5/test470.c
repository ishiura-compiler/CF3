#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 6191984012463LLU;
int8_t x17 = 0;
volatile int64_t x44 = 1740277411LL;
int32_t t7 = 221254653;
uint32_t x61 = UINT32_MAX;
static uint64_t x70 = UINT64_MAX;
int64_t x81 = -1LL;
static volatile uint64_t x84 = 6417582900301LLU;
volatile int32_t x88 = -1;
volatile int8_t x90 = 0;
uint32_t x93 = UINT32_MAX;
uint16_t x102 = UINT16_MAX;
uint64_t t16 = 877689LLU;
int64_t x107 = -1LL;
volatile int32_t x113 = INT32_MIN;
volatile int32_t x121 = INT32_MAX;
int8_t x126 = -7;
volatile int64_t x127 = -142849797367057465LL;
int64_t t20 = -147948814825175410LL;
int8_t x136 = -1;
uint32_t x139 = 264415475U;
static int8_t x143 = INT8_MAX;
volatile uint32_t x158 = UINT32_MAX;
int32_t x161 = -1;
int16_t x164 = INT16_MIN;
static int64_t x165 = -7027LL;
uint32_t x167 = 347175944U;
uint8_t x169 = 0U;
int8_t x186 = -3;
int64_t x188 = INT64_MAX;
volatile uint32_t x195 = 1713856U;
volatile uint64_t t31 = 114LLU;
static int32_t x201 = INT32_MIN;
int32_t t33 = INT32_MIN;
uint64_t x212 = 506750209966074070LLU;
volatile int16_t x213 = -15586;
uint8_t x216 = 11U;
static volatile int32_t x217 = INT32_MIN;
static int16_t x218 = -1;
int32_t x225 = -75862;
uint16_t x226 = 57U;
uint32_t x241 = 22704U;
static int64_t x252 = -1LL;
static int16_t x254 = -295;
int8_t x262 = INT8_MIN;
int8_t x263 = -1;
int64_t x264 = INT64_MAX;
volatile int64_t t47 = -3583523006638979LL;
int16_t x267 = -1;
uint8_t x286 = UINT8_MAX;
volatile int8_t x299 = INT8_MIN;
volatile int8_t x300 = -3;
int8_t x306 = 4;
int64_t x309 = INT64_MAX;
static volatile int64_t t55 = -471499645758437LL;
int64_t x314 = 6959152053085LL;
volatile int64_t t56 = -191334LL;
volatile uint64_t x325 = UINT64_MAX;
volatile uint8_t x327 = 113U;
static volatile int64_t x329 = -53427914680342295LL;
uint32_t x334 = 625562U;
int32_t x337 = -15568;
int16_t x339 = -85;
int32_t x343 = -1;
int16_t x346 = -1;
int32_t x355 = -1;
uint8_t x362 = UINT8_MAX;
static int8_t x374 = 10;
uint32_t x378 = UINT32_MAX;
volatile uint32_t t69 = 26735146U;
volatile uint32_t t70 = 13561072U;
int8_t x386 = INT8_MAX;
int32_t x387 = -1;
uint64_t t71 = 1237771LLU;
uint64_t t72 = 790347LLU;
uint64_t x401 = 115861991289814288LLU;
int64_t x404 = -198554LL;
static volatile uint64_t t73 = 4733497818021LLU;
static volatile int16_t x410 = 45;
int64_t t74 = -2234LL;
static int16_t x421 = -1;
int8_t x426 = INT8_MIN;
uint16_t x427 = UINT16_MAX;
int8_t x429 = 1;
static int8_t x433 = 2;
int64_t x437 = -2675586832449829411LL;
uint8_t x439 = UINT8_MAX;
int32_t x441 = -1;
int64_t t80 = 496154299LL;
static int64_t t83 = INT64_MIN;
int32_t t85 = 144961;
volatile int8_t x473 = -1;
volatile int64_t t89 = INT64_MIN;
int64_t x492 = -1LL;
static int8_t x499 = -7;
uint16_t x515 = 29062U;
uint32_t x531 = 303823084U;
uint16_t x532 = 7095U;
uint16_t x554 = 38U;
uint64_t x556 = UINT64_MAX;


void f0(void) {
	volatile int32_t x2 = INT32_MIN;
	uint64_t x3 = 169LLU;
	volatile int8_t x4 = 0;
	volatile uint64_t t0 = 31527031LLU;

	t0 = (x1-((x2*x3)&x4));

	if (t0 != 6191984012463LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	volatile uint32_t x14 = 657143639U;
	uint8_t x15 = 121U;
	static int64_t x16 = INT64_MIN;
	static volatile int64_t t1 = -1986846372116LL;

	t1 = (x13-((x14*x15)&x16));

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x18 = 6668LLU;
	int32_t x19 = -1;
	static volatile uint64_t x20 = 3854895034LLU;
	static uint64_t t2 = 8277048554528905946LLU;

	t2 = (x17-((x18*x19)&x20));

	if (t2 != 18446744069854657104LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x29 = -1;
	uint8_t x30 = 11U;
	int64_t x31 = 3023494LL;
	int8_t x32 = INT8_MAX;
	int64_t t3 = 1503462923891888236LL;

	t3 = (x29-((x30*x31)&x32));

	if (t3 != -67LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MAX;
	volatile int16_t x34 = -1;
	int8_t x35 = 1;
	static volatile int32_t x36 = 409636725;
	int32_t t4 = -1;

	t4 = (x33-((x34*x35)&x36));

	if (t4 != 1737846922) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x37 = -1;
	volatile int16_t x38 = INT16_MIN;
	uint64_t x39 = 402637LLU;
	int32_t x40 = INT32_MIN;
	volatile uint64_t t5 = 129753424635LLU;

	t5 = (x37-((x38*x39)&x40));

	if (t5 != 15032385535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x41 = 10U;
	volatile int32_t x42 = -92414905;
	static volatile int8_t x43 = -1;
	int64_t t6 = -3LL;

	t6 = (x41-((x42*x43)&x44));

	if (t6 != -92406423LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -1;
	static int8_t x46 = INT8_MIN;
	int8_t x47 = 28;
	int16_t x48 = INT16_MIN;

	t7 = (x45-((x46*x47)&x48));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = 44U;
	volatile int64_t x50 = 35LL;
	volatile int8_t x51 = INT8_MAX;
	int16_t x52 = -1;
	volatile int64_t t8 = -1LL;

	t8 = (x49-((x50*x51)&x52));

	if (t8 != -4401LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x62 = INT32_MAX;
	uint8_t x63 = 1U;
	int16_t x64 = INT16_MAX;
	volatile uint32_t t9 = 8307U;

	t9 = (x61-((x62*x63)&x64));

	if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x69 = -1;
	static uint8_t x71 = UINT8_MAX;
	int16_t x72 = INT16_MIN;
	uint64_t t10 = 163753253LLU;

	t10 = (x69-((x70*x71)&x72));

	if (t10 != 32767LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	static volatile uint8_t x78 = 24U;
	uint64_t x79 = 505757LLU;
	static uint16_t x80 = 18U;
	uint64_t t11 = 1019577599154LLU;

	t11 = (x77-((x78*x79)&x80));

	if (t11 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x82 = 126435951;
	uint64_t x83 = 1388528LLU;
	volatile uint64_t t12 = 274640561962655153LLU;

	t12 = (x81-((x82*x83)&x84));

	if (t12 != 18446738016920961023LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x85 = 6036U;
	int64_t x86 = -249598293615LL;
	int16_t x87 = INT16_MIN;
	volatile int64_t t13 = 337LL;

	t13 = (x85-((x86*x87)&x88));

	if (t13 != -8178836885170284LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x89 = 4855U;
	int64_t x91 = -1LL;
	int32_t x92 = -1;
	volatile int64_t t14 = 4080183LL;

	t14 = (x89-((x90*x91)&x92));

	if (t14 != 4855LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x94 = 1760U;
	int64_t x95 = 27896LL;
	static uint8_t x96 = 0U;
	int64_t t15 = -416LL;

	t15 = (x93-((x94*x95)&x96));

	if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = INT32_MIN;
	uint16_t x103 = 2015U;
	uint64_t x104 = 1568LLU;

	t16 = (x101-((x102*x103)&x104));

	if (t16 != 18446744071562067936LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x105 = UINT64_MAX;
	int8_t x106 = -1;
	int16_t x108 = INT16_MIN;
	uint64_t t17 = UINT64_MAX;

	t17 = (x105-((x106*x107)&x108));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x114 = -1;
	uint32_t x115 = 7800U;
	int32_t x116 = -1;
	uint32_t t18 = 233102899U;

	t18 = (x113-((x114*x115)&x116));

	if (t18 != 2147491448U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x122 = UINT8_MAX;
	static volatile int8_t x123 = -1;
	uint8_t x124 = 1U;
	int32_t t19 = -176317462;

	t19 = (x121-((x122*x123)&x124));

	if (t19 != 2147483646) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x125 = 1037125470U;
	uint32_t x128 = 1445U;

	t20 = (x125-((x126*x127)&x128));

	if (t20 != 1037124057LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x133 = UINT32_MAX;
	uint8_t x134 = 86U;
	int64_t x135 = 1LL;
	int64_t t21 = 2LL;

	t21 = (x133-((x134*x135)&x136));

	if (t21 != 4294967209LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = 0;
	static int64_t x138 = -1LL;
	volatile int16_t x140 = INT16_MAX;
	int64_t t22 = -5386930048331LL;

	t22 = (x137-((x138*x139)&x140));

	if (t22 != -22285LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x141 = -34;
	uint16_t x142 = UINT16_MAX;
	static int64_t x144 = INT64_MIN;
	volatile int64_t t23 = 6229LL;

	t23 = (x141-((x142*x143)&x144));

	if (t23 != -34LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x153 = 12U;
	static int16_t x154 = INT16_MAX;
	uint64_t x155 = 15165708031LLU;
	volatile int64_t x156 = INT64_MIN;
	static volatile uint64_t t24 = 24841948700LLU;

	t24 = (x153-((x154*x155)&x156));

	if (t24 != 12LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x157 = INT64_MAX;
	int8_t x159 = 3;
	int64_t x160 = INT64_MIN;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x157-((x158*x159)&x160));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x162 = INT8_MAX;
	int16_t x163 = 50;
	volatile int32_t t26 = -7;

	t26 = (x161-((x162*x163)&x164));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x166 = INT8_MIN;
	int32_t x168 = -15;
	int64_t t27 = -3401787384LL;

	t27 = (x165-((x166*x167)&x168));

	if (t27 != -2806126451LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x170 = INT8_MIN;
	int16_t x171 = -1;
	uint16_t x172 = 5843U;
	int32_t t28 = -10;

	t28 = (x169-((x170*x171)&x172));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x185 = 867LLU;
	int64_t x187 = -44065606474LL;
	uint64_t t29 = 152397152348442LLU;

	t29 = (x185-((x186*x187)&x188));

	if (t29 != 18446743941512733061LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x189 = 26118U;
	int32_t x190 = -1;
	static uint64_t x191 = 638333697LLU;
	int8_t x192 = INT8_MAX;
	volatile uint64_t t30 = 0LLU;

	t30 = (x189-((x190*x191)&x192));

	if (t30 != 25991LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x193 = -1278;
	uint64_t x194 = 2903452LLU;
	uint8_t x196 = UINT8_MAX;

	t31 = (x193-((x194*x195)&x196));

	if (t31 != 18446744073709550338LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x197 = -128354LL;
	volatile int64_t x198 = 1868491132124LL;
	volatile int64_t x199 = -1611823LL;
	uint16_t x200 = 32150U;
	volatile int64_t t32 = 1872473369447772556LL;

	t32 = (x197-((x198*x199)&x200));

	if (t32 != -128758LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x202 = UINT8_MAX;
	static uint8_t x203 = 6U;
	static int32_t x204 = INT32_MIN;

	t33 = (x201-((x202*x203)&x204));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x205 = -1;
	int8_t x206 = -1;
	uint16_t x207 = 31275U;
	int32_t x208 = INT32_MIN;
	int32_t t34 = INT32_MAX;

	t34 = (x205-((x206*x207)&x208));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x210 = 2407LLU;
	int64_t x211 = INT64_MIN;
	uint64_t t35 = 2149074408LLU;

	t35 = (x209-((x210*x211)&x212));

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x214 = UINT32_MAX;
	volatile int32_t x215 = INT32_MIN;
	uint32_t t36 = 638252U;

	t36 = (x213-((x214*x215)&x216));

	if (t36 != 4294951710U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x219 = 32U;
	static volatile int32_t x220 = INT32_MIN;
	static volatile uint32_t t37 = 347623U;

	t37 = (x217-((x218*x219)&x220));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x227 = 0U;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t38 = 1341038LL;

	t38 = (x225-((x226*x227)&x228));

	if (t38 != -75862LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x229 = INT32_MIN;
	uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MIN;
	static volatile uint16_t x232 = 48U;
	static volatile uint32_t t39 = 12U;

	t39 = (x229-((x230*x231)&x232));

	if (t39 != 2147483648U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x234 = UINT32_MAX;
	volatile int16_t x235 = -44;
	uint32_t x236 = 1U;
	volatile uint32_t t40 = 230U;

	t40 = (x233-((x234*x235)&x236));

	if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x237 = INT16_MIN;
	uint8_t x238 = UINT8_MAX;
	uint16_t x239 = 5631U;
	volatile uint32_t x240 = 95U;
	volatile uint32_t t41 = 2U;

	t41 = (x237-((x238*x239)&x240));

	if (t41 != 4294934527U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x242 = 9U;
	int16_t x243 = 23;
	uint32_t x244 = 2U;
	uint32_t t42 = 7636U;

	t42 = (x241-((x242*x243)&x244));

	if (t42 != 22702U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x245 = 695U;
	int16_t x246 = 3;
	static uint8_t x247 = 71U;
	int32_t x248 = INT32_MAX;
	volatile uint32_t t43 = 761793178U;

	t43 = (x245-((x246*x247)&x248));

	if (t43 != 482U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x249 = 118295126U;
	static uint32_t x250 = 3648980U;
	int16_t x251 = 1;
	int64_t t44 = -189141631564890669LL;

	t44 = (x249-((x250*x251)&x252));

	if (t44 != 114646146LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x253 = UINT16_MAX;
	uint32_t x255 = 6950U;
	static int16_t x256 = 242;
	uint32_t t45 = 439338841U;

	t45 = (x253-((x254*x255)&x256));

	if (t45 != 65485U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x257 = UINT64_MAX;
	int64_t x258 = -480688LL;
	volatile uint16_t x259 = 1423U;
	int64_t x260 = -1LL;
	uint64_t t46 = 57LLU;

	t46 = (x257-((x258*x259)&x260));

	if (t46 != 684019023LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = INT32_MIN;

	t47 = (x261-((x262*x263)&x264));

	if (t47 != -2147483776LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x265 = INT8_MIN;
	int64_t x266 = INT64_MAX;
	int32_t x268 = -2;
	volatile int64_t t48 = -8871LL;

	t48 = (x265-((x266*x267)&x268));

	if (t48 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x274 = 30U;
	int8_t x275 = 1;
	static int64_t x276 = -4170267659LL;
	int64_t t49 = 1916LL;

	t49 = (x273-((x274*x275)&x276));

	if (t49 != -148LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = INT8_MIN;
	int32_t x287 = -76131;
	volatile int32_t x288 = -1;
	volatile int32_t t50 = 45656758;

	t50 = (x285-((x286*x287)&x288));

	if (t50 != 19413277) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x289 = -1;
	static int32_t x290 = 20;
	int64_t x291 = -1LL;
	volatile int8_t x292 = 21;
	int64_t t51 = -19418LL;

	t51 = (x289-((x290*x291)&x292));

	if (t51 != -5LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x297 = -1;
	volatile int16_t x298 = 1;
	volatile int32_t t52 = 1;

	t52 = (x297-((x298*x299)&x300));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x301 = 10U;
	int8_t x302 = -1;
	static uint32_t x303 = UINT32_MAX;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t53 = 32949243926LLU;

	t53 = (x301-((x302*x303)&x304));

	if (t53 != 9LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x305 = -53;
	volatile int32_t x307 = -1;
	uint64_t x308 = UINT64_MAX;
	static volatile uint64_t t54 = 1LLU;

	t54 = (x305-((x306*x307)&x308));

	if (t54 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x310 = -2090562515LL;
	uint8_t x311 = 4U;
	volatile uint16_t x312 = 15U;

	t55 = (x309-((x310*x311)&x312));

	if (t55 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x315 = 775617U;
	int32_t x316 = -37445205;

	t56 = (x313-((x314*x315)&x316));

	if (t56 != -5397636640103473161LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	volatile int8_t x323 = 1;
	volatile int16_t x324 = -1;
	static int64_t t57 = -41152LL;

	t57 = (x321-((x322*x323)&x324));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x326 = -1;
	static int64_t x328 = INT64_MIN;
	static uint64_t t58 = 169783346092LLU;

	t58 = (x325-((x326*x327)&x328));

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x330 = INT16_MAX;
	volatile uint32_t x331 = 19U;
	uint8_t x332 = UINT8_MAX;
	int64_t t59 = -647432203636084LL;

	t59 = (x329-((x330*x331)&x332));

	if (t59 != -53427914680342532LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x333 = INT32_MAX;
	int16_t x335 = -6;
	int64_t x336 = INT64_MIN;
	int64_t t60 = 1723623353484612LL;

	t60 = (x333-((x334*x335)&x336));

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x338 = INT16_MIN;
	int16_t x340 = -1;
	int32_t t61 = -1446;

	t61 = (x337-((x338*x339)&x340));

	if (t61 != -2800848) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x341 = 105U;
	int64_t x342 = -249132657989LL;
	int32_t x344 = INT32_MIN;
	int64_t t62 = 21063LL;

	t62 = (x341-((x342*x343)&x344));

	if (t62 != -249108103063LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x345 = UINT64_MAX;
	static int16_t x347 = INT16_MIN;
	volatile int16_t x348 = 0;
	static volatile uint64_t t63 = UINT64_MAX;

	t63 = (x345-((x346*x347)&x348));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x349 = INT16_MIN;
	static uint32_t x350 = 2781U;
	int8_t x351 = -3;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t64 = 509U;

	t64 = (x349-((x350*x351)&x352));

	if (t64 != 4294942871U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x353 = -1;
	int8_t x354 = -1;
	int8_t x356 = INT8_MIN;
	int32_t t65 = -1931;

	t65 = (x353-((x354*x355)&x356));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x357 = -1;
	volatile int16_t x358 = -1;
	volatile int32_t x359 = 3968;
	static uint8_t x360 = 28U;
	int32_t t66 = 398567676;

	t66 = (x357-((x358*x359)&x360));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x361 = 0U;
	uint16_t x363 = 6U;
	static int8_t x364 = 0;
	int32_t t67 = 15737;

	t67 = (x361-((x362*x363)&x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x373 = -1LL;
	uint8_t x375 = 0U;
	int32_t x376 = -1;
	volatile int64_t t68 = -143083299935218LL;

	t68 = (x373-((x374*x375)&x376));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = -142;
	int32_t x379 = 688230710;
	uint8_t x380 = 67U;

	t69 = (x377-((x378*x379)&x380));

	if (t69 != 4294967088U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x381 = 1U;
	uint8_t x382 = UINT8_MAX;
	uint16_t x383 = 6487U;
	uint8_t x384 = 15U;

	t70 = (x381-((x382*x383)&x384));

	if (t70 != 4294967288U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x385 = UINT8_MAX;
	static uint64_t x388 = 4481776637327316LLU;

	t71 = (x385-((x386*x387)&x388));

	if (t71 != 18442262297072224639LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x398 = 112LLU;
	static int8_t x399 = 0;
	static uint32_t x400 = UINT32_MAX;

	t72 = (x397-((x398*x399)&x400));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x402 = 1;
	volatile int8_t x403 = -1;

	t73 = (x401-((x402*x403)&x404));

	if (t73 != 115861991290012842LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x409 = INT16_MAX;
	int16_t x411 = INT16_MIN;
	static int64_t x412 = -4250855437300603041LL;

	t74 = (x409-((x410*x411)&x412));

	if (t74 != 4250855437300662271LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x422 = 14U;
	int32_t x423 = -1;
	int64_t x424 = INT64_MIN;
	int64_t t75 = INT64_MAX;

	t75 = (x421-((x422*x423)&x424));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x425 = 35U;
	volatile int8_t x428 = -1;
	int32_t t76 = -409910367;

	t76 = (x425-((x426*x427)&x428));

	if (t76 != 8388515) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x430 = 9U;
	int16_t x431 = INT16_MIN;
	uint64_t x432 = 612LLU;
	volatile uint64_t t77 = 26634LLU;

	t77 = (x429-((x430*x431)&x432));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x434 = 13U;
	volatile int32_t x435 = 28;
	int16_t x436 = 2;
	volatile int32_t t78 = -1;

	t78 = (x433-((x434*x435)&x436));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x438 = INT8_MIN;
	uint32_t x440 = 1732492U;
	int64_t t79 = -9446LL;

	t79 = (x437-((x438*x439)&x440));

	if (t79 != -2675586832451533475LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x442 = -1LL;
	int64_t x443 = -909LL;
	int64_t x444 = INT64_MIN;

	t80 = (x441-((x442*x443)&x444));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x445 = -59253;
	static uint16_t x446 = UINT16_MAX;
	static volatile int32_t x447 = -1;
	int32_t x448 = INT32_MAX;
	volatile int32_t t81 = 2;

	t81 = (x445-((x446*x447)&x448));

	if (t81 != -2147477366) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x449 = UINT64_MAX;
	int64_t x450 = -54788LL;
	uint64_t x451 = 141LLU;
	static int8_t x452 = INT8_MAX;
	uint64_t t82 = 451LLU;

	t82 = (x449-((x450*x451)&x452));

	if (t82 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x453 = INT64_MIN;
	int16_t x454 = -1;
	int16_t x455 = INT16_MAX;
	volatile uint16_t x456 = 0U;

	t83 = (x453-((x454*x455)&x456));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x457 = INT8_MIN;
	uint64_t x458 = UINT64_MAX;
	volatile uint16_t x459 = 69U;
	int64_t x460 = INT64_MIN;
	volatile uint64_t t84 = 26608LLU;

	t84 = (x457-((x458*x459)&x460));

	if (t84 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x461 = -1;
	volatile uint16_t x462 = 0U;
	static uint16_t x463 = 172U;
	int16_t x464 = 1;

	t85 = (x461-((x462*x463)&x464));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x465 = INT64_MAX;
	int16_t x466 = -1;
	int64_t x467 = -1LL;
	int64_t x468 = INT64_MIN;
	int64_t t86 = INT64_MAX;

	t86 = (x465-((x466*x467)&x468));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x469 = 776416379851LL;
	int32_t x470 = -1;
	int32_t x471 = INT32_MAX;
	int16_t x472 = INT16_MIN;
	static int64_t t87 = 3860LL;

	t87 = (x469-((x470*x471)&x472));

	if (t87 != 778563863499LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x474 = UINT16_MAX;
	static int16_t x475 = INT16_MAX;
	static volatile int64_t x476 = -1LL;
	volatile int64_t t88 = 3776647LL;

	t88 = (x473-((x474*x475)&x476));

	if (t88 != -2147385346LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x477 = INT64_MIN;
	int64_t x478 = 0LL;
	volatile int64_t x479 = INT64_MIN;
	volatile int32_t x480 = INT32_MAX;

	t89 = (x477-((x478*x479)&x480));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x481 = INT8_MIN;
	int64_t x482 = 14355131LL;
	uint16_t x483 = UINT16_MAX;
	volatile int8_t x484 = INT8_MAX;
	static volatile int64_t t90 = -493776LL;

	t90 = (x481-((x482*x483)&x484));

	if (t90 != -197LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x489 = INT8_MAX;
	int64_t x490 = 1LL;
	int8_t x491 = 0;
	volatile int64_t t91 = -29723LL;

	t91 = (x489-((x490*x491)&x492));

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x497 = 67592239754190LLU;
	volatile uint16_t x498 = 6232U;
	uint16_t x500 = 90U;
	uint64_t t92 = 1148765900167605679LLU;

	t92 = (x497-((x498*x499)&x500));

	if (t92 != 67592239754166LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x513 = INT32_MIN;
	int16_t x514 = 0;
	int16_t x516 = -84;
	volatile int32_t t93 = INT32_MIN;

	t93 = (x513-((x514*x515)&x516));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x525 = INT8_MIN;
	uint32_t x526 = 2U;
	uint16_t x527 = 45U;
	int16_t x528 = 24;
	volatile uint32_t t94 = 64066U;

	t94 = (x525-((x526*x527)&x528));

	if (t94 != 4294967144U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x529 = INT16_MIN;
	static uint16_t x530 = 41U;
	uint32_t t95 = 2U;

	t95 = (x529-((x530*x531)&x532));

	if (t95 != 4294927996U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x533 = INT16_MAX;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = -1;
	uint16_t x536 = UINT16_MAX;
	volatile int32_t t96 = 220;

	t96 = (x533-((x534*x535)&x536));

	if (t96 != -32514) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x537 = UINT32_MAX;
	volatile int8_t x538 = INT8_MAX;
	static int16_t x539 = INT16_MIN;
	uint64_t x540 = UINT64_MAX;
	uint64_t t97 = 308070LLU;

	t97 = (x537-((x538*x539)&x540));

	if (t97 != 4299128831LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = INT8_MIN;
	static int16_t x542 = 7;
	static uint64_t x543 = UINT64_MAX;
	int8_t x544 = -29;
	uint64_t t98 = 215050152366LLU;

	t98 = (x541-((x542*x543)&x544));

	if (t98 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x553 = INT64_MAX;
	uint32_t x555 = UINT32_MAX;
	uint64_t t99 = 545293917195888LLU;

	t99 = (x553-((x554*x555)&x556));

	if (t99 != 9223372032559808549LLU) { NG(); } else { ; }
	
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

