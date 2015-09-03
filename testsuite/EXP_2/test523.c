#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MIN;
uint8_t x16 = 3U;
int64_t x20 = INT64_MIN;
uint64_t x22 = 150160LLU;
uint32_t x24 = UINT32_MAX;
uint8_t x36 = 9U;
static int16_t x59 = INT16_MIN;
static int64_t t13 = -525176LL;
volatile uint16_t x85 = UINT16_MAX;
int64_t t16 = -83856LL;
int8_t x90 = INT8_MAX;
static volatile uint64_t t18 = 16LLU;
volatile int64_t t19 = 202727LL;
volatile int64_t x101 = -1LL;
int64_t x103 = INT64_MIN;
volatile int64_t x107 = 1203433418002LL;
uint64_t x122 = 3LLU;
volatile uint64_t x123 = UINT64_MAX;
volatile uint64_t t26 = 13699399LLU;
int8_t x144 = INT8_MIN;
static int64_t t30 = 25561LL;
volatile uint64_t x153 = 123LLU;
static uint64_t x155 = 925456482383777LLU;
uint32_t t33 = 0U;
volatile int8_t x168 = -1;
uint64_t x173 = 4749LLU;
volatile uint64_t t35 = 52148LLU;
volatile uint32_t x179 = 350U;
uint64_t t37 = 911404835043864905LLU;
static int32_t x189 = -1;
int32_t x191 = INT32_MIN;
static int64_t x197 = INT64_MIN;
static uint64_t x203 = 2519422LLU;
volatile int8_t x208 = INT8_MAX;
uint64_t x209 = UINT64_MAX;
uint8_t x229 = UINT8_MAX;
int32_t x230 = INT32_MIN;
uint8_t x239 = 3U;
static int32_t x251 = 30038;
uint64_t t51 = 8080029602100244LLU;
uint16_t x261 = 150U;
static int64_t x266 = 35318LL;
volatile uint64_t x285 = UINT64_MAX;
uint64_t t57 = 65097036140LLU;
volatile int16_t x298 = INT16_MAX;
int32_t x313 = -1;
int8_t x314 = INT8_MIN;
int32_t x318 = 111479694;
volatile int64_t x327 = INT64_MIN;
int16_t x331 = INT16_MAX;
uint32_t t65 = 0U;
static int32_t x334 = INT32_MIN;
uint64_t x340 = 4487715475997824LLU;
int64_t x357 = INT64_MIN;
uint16_t x358 = UINT16_MAX;
volatile int16_t x367 = INT16_MIN;
static volatile uint64_t t74 = 8249LLU;
int64_t x374 = 0LL;
int32_t x385 = INT32_MIN;
static uint32_t x387 = UINT32_MAX;
int64_t t78 = -658524923LL;
int16_t x397 = INT16_MAX;
volatile int64_t x402 = INT64_MIN;
int64_t x403 = INT64_MAX;
uint8_t x414 = UINT8_MAX;
int16_t x416 = 208;
volatile uint16_t x421 = UINT16_MAX;
int8_t x422 = -1;
uint16_t x423 = 300U;
int8_t x424 = INT8_MAX;
int32_t t83 = -688805;
int32_t x426 = INT32_MIN;
static volatile int32_t x433 = INT32_MAX;
uint8_t x437 = 19U;
int32_t x439 = -1;
int16_t x441 = INT16_MIN;
static volatile int16_t x461 = INT16_MIN;
int32_t x462 = 13;
uint64_t t89 = 121387745LLU;
uint16_t x468 = 13523U;
uint8_t x470 = 2U;
int32_t t91 = -54;
static uint32_t x473 = 21156U;
int16_t x477 = -1;
uint32_t x479 = UINT32_MAX;
int32_t x480 = -1;
uint32_t t93 = 289591543U;
int32_t x487 = -20408;
int8_t x489 = INT8_MIN;
int16_t x493 = INT16_MAX;
int32_t x494 = -120;
int32_t x496 = 1;
volatile int16_t x497 = -2887;


void f0(void) {
	static volatile uint64_t x1 = 446781851399640884LLU;
	volatile int32_t x2 = 9154;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 435576254LLU;

	t0 = ((x1-(x2/x3))*x4);

	if (t0 != 4865786498406918348LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 229408;
	int16_t x6 = INT16_MIN;
	uint16_t x7 = 1U;
	int32_t x8 = 562;
	int32_t t1 = 3454;

	t1 = ((x5-(x6/x7))*x8);

	if (t1 != 147342912) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	static int8_t x10 = -14;
	static int32_t x12 = -1;
	int32_t t2 = -207;

	t2 = ((x9-(x10/x11))*x12);

	if (t2 != -255) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile int8_t x14 = INT8_MIN;
	uint64_t x15 = 7LLU;
	uint64_t t3 = 498263817581LLU;

	t3 = ((x13-(x14/x15))*x16);

	if (t3 != 10540996613548216960LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 27LLU;
	uint8_t x18 = 1U;
	uint64_t x19 = 1284536791579117742LLU;
	static volatile uint64_t t4 = 603600452415LLU;

	t4 = ((x17-(x18/x19))*x20);

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x23 = UINT64_MAX;
	uint64_t t5 = 2148360369536LLU;

	t5 = ((x21-(x22/x23))*x24);

	if (t5 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x26 = INT64_MAX;
	int64_t x27 = -771221786198823LL;
	volatile uint16_t x28 = 1U;
	int64_t t6 = -41669696583503LL;

	t6 = ((x25-(x26/x27))*x28);

	if (t6 != 11958LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x29 = 13U;
	int16_t x30 = -30;
	int8_t x31 = INT8_MAX;
	int64_t x32 = -1LL;
	static int64_t t7 = -3191655908649821001LL;

	t7 = ((x29-(x30/x31))*x32);

	if (t7 != -13LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	volatile int32_t t8 = -43;

	t8 = ((x33-(x34/x35))*x36);

	if (t8 != -294921) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x45 = INT64_MAX;
	static uint64_t x46 = UINT64_MAX;
	volatile uint32_t x47 = 1282699U;
	int16_t x48 = -1;
	volatile uint64_t t9 = 431628492LLU;

	t9 = ((x45-(x46/x47))*x48);

	if (t9 != 9223386418049486110LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = -198;
	static uint64_t x51 = 21798209767LLU;
	static volatile int32_t x52 = 20208;
	uint64_t t10 = 2948042065946927LLU;

	t10 = ((x49-(x50/x51))*x52);

	if (t10 != 18446726972018989552LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 2157208U;
	int8_t x54 = INT8_MAX;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t11 = 897483546390882LLU;

	t11 = ((x53-(x54/x55))*x56);

	if (t11 != 18446744073707394408LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = UINT8_MAX;
	int32_t x58 = 238884156;
	int8_t x60 = -12;
	volatile int32_t t12 = -419127;

	t12 = ((x57-(x58/x59))*x60);

	if (t12 != -90540) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = -1LL;
	uint16_t x66 = 28478U;
	int16_t x67 = -31;
	volatile int8_t x68 = INT8_MIN;

	t13 = ((x65-(x66/x67))*x68);

	if (t13 != -117376LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MAX;
	volatile uint16_t x74 = 11740U;
	static volatile int64_t x75 = -65518548831LL;
	static int32_t x76 = -5539710;
	volatile int64_t t14 = -51902095646LL;

	t14 = ((x73-(x74/x75))*x76);

	if (t14 != -703543170LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = -1;
	static volatile uint8_t x78 = 1U;
	volatile int32_t x79 = -1;
	uint8_t x80 = UINT8_MAX;
	int32_t t15 = -67365;

	t15 = ((x77-(x78/x79))*x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x86 = -5620001108LL;
	uint32_t x87 = 706U;
	int8_t x88 = -11;

	t16 = ((x85-(x86/x87))*x88);

	if (t16 != -88284636LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MAX;
	volatile int32_t t17 = -8;

	t17 = ((x89-(x90/x91))*x92);

	if (t17 != -4161536) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x93 = 24U;
	static int64_t x94 = 491450084732000713LL;
	uint16_t x95 = UINT16_MAX;
	uint64_t x96 = 419259472907LLU;

	t18 = ((x93-(x94/x95))*x96);

	if (t18 != 16314151259890524202LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = 56355376350LL;
	volatile int16_t x98 = 0;
	int8_t x99 = INT8_MAX;
	volatile int64_t x100 = -1LL;

	t19 = ((x97-(x98/x99))*x100);

	if (t19 != -56355376350LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x102 = 3;
	int32_t x104 = -1;
	volatile int64_t t20 = -267003955118LL;

	t20 = ((x101-(x102/x103))*x104);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -2;
	int64_t x106 = 26535722LL;
	volatile int16_t x108 = INT16_MIN;
	int64_t t21 = -708LL;

	t21 = ((x105-(x106/x107))*x108);

	if (t21 != 65536LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	int64_t x110 = -1LL;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	int64_t t22 = 597967916950802LL;

	t22 = ((x109-(x110/x111))*x112);

	if (t22 != 2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	static uint64_t x114 = 238424442080266LLU;
	static int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MIN;
	volatile uint64_t t23 = 1819245172LLU;

	t23 = ((x113-(x114/x115))*x116);

	if (t23 != 931373900032LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 1U;
	int8_t x118 = -1;
	uint32_t x119 = 164808470U;
	int64_t x120 = -1LL;
	volatile int64_t t24 = -60939574093LL;

	t24 = ((x117-(x118/x119))*x120);

	if (t24 != -4294967271LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 152LLU;
	uint32_t x124 = UINT32_MAX;
	volatile uint64_t t25 = 7640304LLU;

	t25 = ((x121-(x122/x123))*x124);

	if (t25 != 652835028840LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	volatile uint8_t x126 = 41U;
	uint32_t x127 = UINT32_MAX;
	static volatile uint64_t x128 = 477711593LLU;

	t26 = ((x125-(x126/x127))*x128);

	if (t26 != 2051740015201583104LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = 744631391049LLU;
	static uint64_t x130 = UINT64_MAX;
	static int32_t x131 = -1;
	uint64_t x132 = 4721802610151LLU;
	volatile uint64_t t27 = 102599394243204744LLU;

	t27 = ((x129-(x130/x131))*x132);

	if (t27 != 16131913628418215416LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x137 = -1;
	int16_t x138 = INT16_MIN;
	uint8_t x139 = 90U;
	static int64_t x140 = -26024LL;
	int64_t t28 = 11476597048LL;

	t28 = ((x137-(x138/x139))*x140);

	if (t28 != -9446712LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x141 = -7475365;
	int8_t x142 = INT8_MIN;
	int32_t x143 = -969;
	int32_t t29 = -1;

	t29 = ((x141-(x142/x143))*x144);

	if (t29 != 956846720) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x145 = 4949LL;
	volatile int32_t x146 = INT32_MAX;
	static uint8_t x147 = 11U;
	uint8_t x148 = 50U;

	t30 = ((x145-(x146/x147))*x148);

	if (t30 != -9761041850LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x149 = -4929;
	int16_t x150 = INT16_MIN;
	static uint64_t x151 = 9LLU;
	static int16_t x152 = INT16_MIN;
	uint64_t t31 = 2272248430695081209LLU;

	t31 = ((x149-(x150/x151))*x152);

	if (t31 != 16397105843339558912LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x154 = -62638376;
	static uint32_t x156 = UINT32_MAX;
	volatile uint64_t t32 = 8535344958028406774LLU;

	t32 = ((x153-(x154/x155))*x156);

	if (t32 != 18446658994702404961LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	volatile int32_t x162 = INT32_MIN;
	uint32_t x163 = 422U;
	static int32_t x164 = -5039;

	t33 = ((x161-(x162/x163))*x164);

	if (t33 != 4168387609U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 2036177128LLU;
	uint8_t x166 = 1U;
	int8_t x167 = -9;
	volatile uint64_t t34 = 395LLU;

	t34 = ((x165-(x166/x167))*x168);

	if (t34 != 18446744071673374488LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x174 = UINT16_MAX;
	uint8_t x175 = 62U;
	volatile uint64_t x176 = UINT64_MAX;

	t35 = ((x173-(x174/x175))*x176);

	if (t35 != 18446744073709547924LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = -55;
	int64_t x178 = -1LL;
	int8_t x180 = -15;
	volatile int64_t t36 = 11677257871LL;

	t36 = ((x177-(x178/x179))*x180);

	if (t36 != 825LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = -3351;
	uint32_t x182 = 13031U;
	static uint64_t x183 = 175692492LLU;
	static uint16_t x184 = 0U;

	t37 = ((x181-(x182/x183))*x184);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x185 = -1;
	int16_t x186 = 18;
	volatile int32_t x187 = INT32_MIN;
	static uint8_t x188 = 42U;
	volatile int32_t t38 = 13352;

	t38 = ((x185-(x186/x187))*x188);

	if (t38 != -42) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x190 = 2938U;
	int32_t x192 = 11188322;
	static int32_t t39 = -875536;

	t39 = ((x189-(x190/x191))*x192);

	if (t39 != -11188322) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x198 = UINT64_MAX;
	int16_t x199 = -1;
	uint64_t x200 = 218053249970022519LLU;
	uint64_t t40 = 151147LLU;

	t40 = ((x197-(x198/x199))*x200);

	if (t40 != 9005318786884753289LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = 3;
	int8_t x202 = -1;
	int8_t x204 = -1;
	uint64_t t41 = 4550326LLU;

	t41 = ((x201-(x202/x203))*x204);

	if (t41 != 7321815906069LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = 1;
	uint32_t x207 = 1U;
	volatile uint32_t t42 = 104007369U;

	t42 = ((x205-(x206/x207))*x208);

	if (t42 != 8322818U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x210 = INT32_MIN;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = -39;
	volatile uint64_t t43 = 750771285887LLU;

	t43 = ((x209-(x210/x211))*x212);

	if (t43 != 39LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x217 = 1050816251;
	volatile int16_t x218 = -1;
	int32_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t44 = 2051705091U;

	t44 = ((x217-(x218/x219))*x220);

	if (t44 != 3244151046U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = INT32_MAX;
	static volatile uint64_t x222 = 102LLU;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MAX;
	volatile uint64_t t45 = 9102951119847046205LLU;

	t45 = ((x221-(x222/x223))*x224);

	if (t45 != 272730423169LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x225 = UINT64_MAX;
	uint8_t x226 = 9U;
	volatile int16_t x227 = INT16_MIN;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t46 = 2179221LLU;

	t46 = ((x225-(x226/x227))*x228);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x231 = INT32_MAX;
	uint64_t x232 = 137603792869LLU;
	uint64_t t47 = 343904316LLU;

	t47 = ((x229-(x230/x231))*x232);

	if (t47 != 35226570974464LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x238 = -1LL;
	static volatile int16_t x240 = INT16_MIN;
	volatile uint64_t t48 = 423979547962LLU;

	t48 = ((x237-(x238/x239))*x240);

	if (t48 != 32768LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x241 = UINT32_MAX;
	static uint64_t x242 = 195803811978LLU;
	static int64_t x243 = -1030987922LL;
	int64_t x244 = 92362498327469LL;
	volatile uint64_t t49 = 45LLU;

	t49 = ((x241-(x242/x243))*x244);

	if (t49 != 15125039921357175891LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = -1;
	uint8_t x250 = 3U;
	volatile int8_t x252 = -1;
	int32_t t50 = -237378562;

	t50 = ((x249-(x250/x251))*x252);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x253 = 2039365049398LLU;
	static int32_t x254 = INT32_MIN;
	static volatile int16_t x255 = INT16_MIN;
	int64_t x256 = -1LL;

	t51 = ((x253-(x254/x255))*x256);

	if (t51 != 18446742034344567754LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x262 = INT16_MIN;
	uint64_t x263 = 23502283013LLU;
	int16_t x264 = INT16_MIN;
	uint64_t t52 = 18187484522629593LLU;

	t52 = ((x261-(x262/x263))*x264);

	if (t52 != 25719322411008LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x265 = 61U;
	int16_t x267 = -475;
	int32_t x268 = INT32_MIN;
	static volatile int64_t t53 = -214930LL;

	t53 = ((x265-(x266/x267))*x268);

	if (t53 != -289910292480LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 8446025559640331LLU;
	int32_t x271 = -1;
	int16_t x272 = -1;
	volatile uint64_t t54 = 8521601406464LLU;

	t54 = ((x269-(x270/x271))*x272);

	if (t54 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x277 = 1797U;
	static int64_t x278 = 7238LL;
	int64_t x279 = INT64_MIN;
	int8_t x280 = 25;
	static int64_t t55 = 7772140LL;

	t55 = ((x277-(x278/x279))*x280);

	if (t55 != 44925LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x281 = UINT64_MAX;
	volatile int8_t x282 = -20;
	uint64_t x283 = 5845182539265083056LLU;
	int16_t x284 = -1;
	volatile uint64_t t56 = 30298924LLU;

	t56 = ((x281-(x282/x283))*x284);

	if (t56 != 4LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile uint32_t x288 = 1740353U;

	t57 = ((x285-(x286/x287))*x288);

	if (t57 != 18446744073707811263LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x297 = 6833560441071LLU;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = -1;
	static volatile uint64_t t58 = 7530648184LLU;

	t58 = ((x297-(x298/x299))*x300);

	if (t58 != 18446737240149110545LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = INT8_MAX;
	uint16_t x302 = 0U;
	int8_t x303 = INT8_MIN;
	int8_t x304 = -1;
	static volatile int32_t t59 = -1620784;

	t59 = ((x301-(x302/x303))*x304);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x309 = -1LL;
	int8_t x310 = INT8_MIN;
	int16_t x311 = 50;
	uint64_t x312 = 3516795647238LLU;
	volatile uint64_t t60 = 434007LLU;

	t60 = ((x309-(x310/x311))*x312);

	if (t60 != 3516795647238LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x315 = 2109753198U;
	int8_t x316 = -1;
	volatile uint32_t t61 = 604105U;

	t61 = ((x313-(x314/x315))*x316);

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x317 = INT16_MAX;
	int64_t x319 = INT64_MIN;
	volatile uint32_t x320 = 1072U;
	volatile int64_t t62 = 37002LL;

	t62 = ((x317-(x318/x319))*x320);

	if (t62 != 35126224LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MIN;
	int64_t x323 = -476645389907628863LL;
	static int16_t x324 = -1;
	int64_t t63 = -3742212543840LL;

	t63 = ((x321-(x322/x323))*x324);

	if (t63 != 147LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x325 = INT16_MAX;
	static volatile int16_t x326 = INT16_MIN;
	uint32_t x328 = 53473U;
	int64_t t64 = 850922293854208LL;

	t64 = ((x325-(x326/x327))*x328);

	if (t64 != 1752149791LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x329 = UINT32_MAX;
	uint16_t x330 = UINT16_MAX;
	static uint32_t x332 = UINT32_MAX;

	t65 = ((x329-(x330/x331))*x332);

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x333 = 328729171622613LLU;
	volatile uint32_t x335 = 157927398U;
	int64_t x336 = INT64_MIN;
	uint64_t t66 = 33078144885LLU;

	t66 = ((x333-(x334/x335))*x336);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x337 = INT16_MIN;
	uint8_t x338 = UINT8_MAX;
	volatile int32_t x339 = -7699639;
	static volatile uint64_t t67 = 986658115004456LLU;

	t67 = ((x337-(x338/x339))*x340);

	if (t67 != 520491872179716096LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x341 = 832197U;
	volatile int8_t x342 = 45;
	int32_t x343 = INT32_MIN;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t68 = 11798172245943LLU;

	t68 = ((x341-(x342/x343))*x344);

	if (t68 != 18446744073708719419LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x345 = 20148768U;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MIN;
	int8_t x348 = -13;
	int64_t t69 = 40181416851328173LL;

	t69 = ((x345-(x346/x347))*x348);

	if (t69 != -261933984LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x349 = 1543642206LLU;
	int16_t x350 = -2198;
	volatile int32_t x351 = INT32_MIN;
	uint8_t x352 = UINT8_MAX;
	uint64_t t70 = 11586LLU;

	t70 = ((x349-(x350/x351))*x352);

	if (t70 != 393628762530LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x353 = UINT8_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	volatile int8_t x355 = -21;
	int64_t x356 = 1940LL;
	volatile uint64_t t71 = 1804629711440LLU;

	t71 = ((x353-(x354/x355))*x356);

	if (t71 != 492760LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x359 = 144676LLU;
	int64_t x360 = INT64_MIN;
	uint64_t t72 = 7LLU;

	t72 = ((x357-(x358/x359))*x360);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = INT16_MAX;
	int16_t x362 = -10;
	volatile int16_t x363 = 7583;
	uint64_t x364 = 32546561LLU;
	uint64_t t73 = 555967117783617596LLU;

	t73 = ((x361-(x362/x363))*x364);

	if (t73 != 1066453164287LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x365 = -1;
	static uint64_t x366 = 1035LLU;
	int16_t x368 = INT16_MIN;

	t74 = ((x365-(x366/x367))*x368);

	if (t74 != 32768LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x373 = UINT16_MAX;
	static int16_t x375 = INT16_MIN;
	volatile int8_t x376 = INT8_MIN;
	volatile int64_t t75 = -4LL;

	t75 = ((x373-(x374/x375))*x376);

	if (t75 != -8388480LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = INT16_MAX;
	int16_t x384 = 31;
	int64_t t76 = 133621695877LL;

	t76 = ((x381-(x382/x383))*x384);

	if (t76 != 8725990573113592LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x386 = INT64_MIN;
	uint16_t x388 = 1U;
	volatile int64_t t77 = -3079375LL;

	t77 = ((x385-(x386/x387))*x388);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;
	uint16_t x396 = 1U;

	t78 = ((x393-(x394/x395))*x396);

	if (t78 != 32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t79 = -78;

	t79 = ((x397-(x398/x399))*x400);

	if (t79 != -1073709056) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x401 = -9;
	static int64_t x404 = 8116775349516241LL;
	volatile int64_t t80 = 115LL;

	t80 = ((x401-(x402/x403))*x404);

	if (t80 != -64934202796129928LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x405 = 12003575LL;
	uint32_t x406 = UINT32_MAX;
	int64_t x407 = -126LL;
	volatile int16_t x408 = INT16_MIN;
	int64_t t81 = 2015601LL;

	t81 = ((x405-(x406/x407))*x408);

	if (t81 != -1510297337856LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x413 = 2893718058257269LLU;
	static int32_t x415 = -58909763;
	static volatile uint64_t t82 = 12700241283LLU;

	t82 = ((x413-(x414/x415))*x416);

	if (t82 != 601893356117511952LLU) { NG(); } else { ; }
	
}

void f83(void) {


	t83 = ((x421-(x422/x423))*x424);

	if (t83 != 8322945) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x425 = INT8_MAX;
	static volatile int16_t x427 = INT16_MIN;
	int64_t x428 = -1LL;
	static volatile int64_t t84 = 10018384LL;

	t84 = ((x425-(x426/x427))*x428);

	if (t84 != 65409LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x434 = -1;
	uint64_t x435 = 2055503992281613LLU;
	int32_t x436 = 1;
	uint64_t t85 = 2076240424286LLU;

	t85 = ((x433-(x434/x435))*x436);

	if (t85 != 2147474673LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x438 = INT8_MIN;
	uint16_t x440 = 82U;
	static int32_t t86 = 621997;

	t86 = ((x437-(x438/x439))*x440);

	if (t86 != -8938) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x442 = 5U;
	static int8_t x443 = INT8_MIN;
	uint8_t x444 = UINT8_MAX;
	int32_t t87 = -580;

	t87 = ((x441-(x442/x443))*x444);

	if (t87 != -8355840) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x449 = 2;
	int8_t x450 = INT8_MIN;
	volatile int8_t x451 = INT8_MIN;
	int32_t x452 = INT32_MAX;
	static int32_t t88 = INT32_MAX;

	t88 = ((x449-(x450/x451))*x452);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x463 = INT8_MIN;
	uint64_t x464 = 20802332081LLU;

	t89 = ((x461-(x462/x463))*x464);

	if (t89 != 18446062422891921408LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x465 = 10U;
	int16_t x466 = -1;
	int8_t x467 = INT8_MAX;
	volatile int32_t t90 = -1347;

	t90 = ((x465-(x466/x467))*x468);

	if (t90 != 135230) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x469 = -1;
	volatile uint8_t x471 = 27U;
	int8_t x472 = 3;

	t91 = ((x469-(x470/x471))*x472);

	if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x474 = -1;
	int16_t x475 = INT16_MAX;
	static uint64_t x476 = 33458785044622LLU;
	uint64_t t92 = 5052037859908518LLU;

	t92 = ((x473-(x474/x475))*x476);

	if (t92 != 707854056404023032LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x478 = INT8_MAX;

	t93 = ((x477-(x478/x479))*x480);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x481 = -1;
	uint32_t x482 = 33U;
	int64_t x483 = INT64_MIN;
	int16_t x484 = INT16_MAX;
	int64_t t94 = 439103230781494090LL;

	t94 = ((x481-(x482/x483))*x484);

	if (t94 != -32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x485 = INT16_MIN;
	int8_t x486 = INT8_MAX;
	uint8_t x488 = UINT8_MAX;
	static int32_t t95 = 12;

	t95 = ((x485-(x486/x487))*x488);

	if (t95 != -8355840) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	int16_t x492 = INT16_MIN;
	volatile int64_t t96 = -16257430737962LL;

	t96 = ((x489-(x490/x491))*x492);

	if (t96 != 4194304LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x495 = -28;
	volatile int32_t t97 = 1465;

	t97 = ((x493-(x494/x495))*x496);

	if (t97 != 32763) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x498 = 6U;
	static int8_t x499 = -1;
	static uint16_t x500 = 379U;
	int32_t t98 = 3459;

	t98 = ((x497-(x498/x499))*x500);

	if (t98 != -1091899) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x501 = 841175U;
	uint32_t x502 = UINT32_MAX;
	int32_t x503 = INT32_MAX;
	int32_t x504 = -1;
	volatile uint32_t t99 = 1635895962U;

	t99 = ((x501-(x502/x503))*x504);

	if (t99 != 4294126123U) { NG(); } else { ; }
	
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

