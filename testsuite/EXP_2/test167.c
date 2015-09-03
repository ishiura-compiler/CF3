#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = INT16_MIN;
volatile int32_t x15 = -458;
static uint8_t x18 = 3U;
static uint8_t x20 = 4U;
volatile uint16_t x21 = UINT16_MAX;
volatile uint32_t t5 = 3U;
uint16_t x36 = 17U;
volatile int64_t t8 = 94LL;
int64_t x46 = INT64_MAX;
int16_t x48 = INT16_MIN;
int16_t x49 = INT16_MIN;
uint16_t x50 = 7777U;
volatile int64_t x58 = INT64_MAX;
int16_t x62 = -1;
int8_t x78 = 42;
int64_t x89 = INT64_MIN;
uint16_t x90 = 2888U;
volatile uint64_t t17 = 2656984363LLU;
int64_t t18 = INT64_MIN;
uint16_t x105 = UINT16_MAX;
int16_t x107 = INT16_MAX;
int32_t x111 = INT32_MAX;
volatile uint16_t x127 = 1389U;
int32_t x131 = 768858360;
static int8_t x137 = -1;
int32_t x143 = INT32_MAX;
uint64_t t27 = 1302LLU;
int8_t x146 = INT8_MIN;
int64_t x152 = -1LL;
uint64_t x170 = UINT64_MAX;
uint64_t x175 = 7678935808380LLU;
int32_t x189 = INT32_MIN;
uint64_t x190 = UINT64_MAX;
int8_t x210 = -1;
volatile int64_t t41 = 9949215454583001LL;
static int32_t x213 = -1;
volatile int8_t x215 = INT8_MIN;
static volatile int32_t x218 = -1;
static volatile uint32_t x219 = 356U;
volatile uint32_t t43 = 7096U;
volatile int64_t t44 = -12841250LL;
int8_t x225 = INT8_MIN;
int16_t x226 = -1;
int64_t t45 = 119691816LL;
static int64_t x230 = 219482589413321197LL;
int32_t x235 = INT32_MIN;
uint64_t x236 = 92536279600LLU;
uint32_t x237 = 157U;
volatile int64_t x244 = INT64_MIN;
volatile int32_t x250 = -1;
int64_t t51 = -955423568052609933LL;
uint64_t x259 = 38240431016380037LLU;
static int16_t x263 = INT16_MIN;
uint8_t x266 = UINT8_MAX;
uint32_t x269 = 12829357U;
volatile int8_t x271 = 28;
int32_t x272 = -54047;
int16_t x274 = INT16_MIN;
volatile int64_t t58 = 3367456777LL;
int8_t x288 = -1;
static int32_t x290 = 36;
int16_t x307 = 1;
uint32_t x310 = 513885U;
volatile uint32_t x312 = 2U;
uint8_t x313 = 50U;
int8_t x315 = INT8_MAX;
int32_t x323 = 0;
int64_t t67 = INT64_MIN;
static int64_t t69 = -72460673858343LL;
int32_t x337 = INT32_MIN;
int64_t x338 = -1544857LL;
int8_t x341 = 0;
static uint64_t x345 = 244898020682630519LLU;
static uint64_t x346 = 13503680430284492LLU;
uint64_t x356 = 2354821475638LLU;
volatile uint64_t t75 = 99807828LLU;
static volatile uint32_t t76 = 1U;
int64_t x363 = INT64_MIN;
uint64_t x371 = UINT64_MAX;
int16_t x373 = -2208;
static volatile int64_t x374 = INT64_MIN;
volatile int64_t t79 = 26171823595LL;
volatile uint32_t x380 = UINT32_MAX;
static volatile uint32_t t80 = 176676U;
static uint16_t x384 = UINT16_MAX;
volatile uint64_t t83 = 5083223470LLU;
int16_t x412 = 3577;
int32_t x417 = -334794424;
int64_t x423 = -1LL;
int16_t x433 = INT16_MIN;
static int32_t t91 = -62888019;
static int16_t x438 = INT16_MIN;
uint64_t x439 = 1460238LLU;
uint64_t x445 = 7072723LLU;
int32_t x446 = 1043733732;
static volatile int16_t x448 = INT16_MIN;
int64_t x461 = INT64_MAX;
static uint16_t x464 = 363U;


void f0(void) {
	uint16_t x5 = 0U;
	uint64_t x6 = 5157179364LLU;
	uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MIN;
	uint64_t t0 = 254190189063064LLU;

	t0 = ((x5^(x6+x7))&x8);

	if (t0 != 4294967296LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MIN;
	uint64_t x11 = 1081533293LLU;
	int64_t x12 = 263276LL;
	static uint64_t t1 = 1517009LLU;

	t1 = ((x9^(x10+x11))&x12);

	if (t1 != 108LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	static int16_t x14 = -1;
	int8_t x16 = INT8_MIN;
	int32_t t2 = -171803;

	t2 = ((x13^(x14+x15))&x16);

	if (t2 != -512) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -1;
	int64_t x19 = 1996857763498085956LL;
	int64_t t3 = -13454LL;

	t3 = ((x17^(x18+x19))&x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = INT16_MAX;
	int16_t x23 = -1;
	volatile int16_t x24 = -1;
	int32_t t4 = -242122014;

	t4 = ((x21^(x22+x23))&x24);

	if (t4 != 32769) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 18U;
	int16_t x26 = -199;
	uint32_t x27 = 219541U;
	int32_t x28 = INT32_MIN;

	t5 = ((x25^(x26+x27))&x28);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	static int8_t x30 = INT8_MAX;
	int32_t x31 = -889;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = -301859;

	t6 = ((x29^(x30+x31))&x32);

	if (t6 != 32000) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	volatile uint16_t x34 = 1U;
	int16_t x35 = 190;
	static volatile int32_t t7 = 33171134;

	t7 = ((x33^(x34+x35))&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 899624;
	volatile int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MAX;
	int64_t x44 = -62110196LL;

	t8 = ((x41^(x42+x43))&x44);

	if (t8 != -62897148LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	int8_t x47 = INT8_MIN;
	uint64_t t9 = 218LLU;

	t9 = ((x45^(x46+x47))&x48);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x51 = 25819841560LL;
	int16_t x52 = INT16_MIN;
	volatile int64_t t10 = -43348811987254843LL;

	t10 = ((x49^(x50+x51))&x52);

	if (t10 != -25819873280LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 2139;
	int8_t x54 = INT8_MAX;
	int16_t x55 = INT16_MIN;
	static int16_t x56 = -1144;
	volatile int32_t t11 = 6;

	t11 = ((x53^(x54+x55))&x56);

	if (t11 != -30720) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 13530095618210LL;
	int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;
	volatile int64_t t12 = -43149204866LL;

	t12 = ((x57^(x58+x59))&x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	int8_t x63 = 9;
	static uint8_t x64 = 76U;
	int64_t t13 = 7060708235LL;

	t13 = ((x61^(x62+x63))&x64);

	if (t13 != 68LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 273U;
	volatile uint16_t x79 = 0U;
	volatile uint8_t x80 = UINT8_MAX;
	static volatile uint32_t t14 = 24429U;

	t14 = ((x77^(x78+x79))&x80);

	if (t14 != 59U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x81 = UINT64_MAX;
	uint16_t x82 = 4U;
	volatile int16_t x83 = -1;
	volatile int8_t x84 = INT8_MIN;
	volatile uint64_t t15 = 3992818113342LLU;

	t15 = ((x81^(x82+x83))&x84);

	if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MAX;
	static volatile int64_t t16 = -11516555LL;

	t16 = ((x89^(x90+x91))&x92);

	if (t16 != 71LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x93 = 14536215106640LLU;
	uint8_t x94 = 61U;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MIN;

	t17 = ((x93^(x94+x95))&x96);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MIN;
	int32_t x98 = -1;
	static int8_t x99 = INT8_MAX;
	int32_t x100 = INT32_MIN;

	t18 = ((x97^(x98+x99))&x100);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = UINT8_MAX;
	uint64_t x102 = 102274LLU;
	static uint16_t x103 = 534U;
	uint32_t x104 = UINT32_MAX;
	volatile uint64_t t19 = 202724333LLU;

	t19 = ((x101^(x102+x103))&x104);

	if (t19 != 102759LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x106 = 0;
	int16_t x108 = 465;
	int32_t t20 = -833717;

	t20 = ((x105^(x106+x107))&x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MAX;
	uint64_t x110 = UINT64_MAX;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t21 = 3889913668LLU;

	t21 = ((x109^(x110+x111))&x112);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = -57615754LL;
	static volatile int64_t t22 = -4030LL;

	t22 = ((x113^(x114+x115))&x116);

	if (t22 != -57671680LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	int8_t x123 = 19;
	int64_t x124 = -1LL;
	int64_t t23 = -31174227237LL;

	t23 = ((x121^(x122+x123))&x124);

	if (t23 != 2147450899LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = INT16_MIN;
	int32_t x126 = -1;
	static int64_t x128 = INT64_MIN;
	static int64_t t24 = INT64_MIN;

	t24 = ((x125^(x126+x127))&x128);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x129 = UINT64_MAX;
	static uint64_t x130 = UINT64_MAX;
	static int16_t x132 = -62;
	uint64_t t25 = 724LLU;

	t25 = ((x129^(x130+x131))&x132);

	if (t25 != 18446744072940693248LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x138 = 23U;
	volatile uint16_t x139 = 2084U;
	static uint16_t x140 = 7U;
	int32_t t26 = -157679982;

	t26 = ((x137^(x138+x139))&x140);

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x141 = 12LLU;
	int8_t x142 = -1;
	int16_t x144 = 1;

	t27 = ((x141^(x142+x143))&x144);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = INT64_MAX;
	int32_t x147 = -459;
	int16_t x148 = -26;
	int64_t t28 = 0LL;

	t28 = ((x145^(x146+x147))&x148);

	if (t28 != -9223372036854775230LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	static uint16_t x150 = 7965U;
	uint64_t x151 = UINT64_MAX;
	static uint64_t t29 = 4151262730LLU;

	t29 = ((x149^(x150+x151))&x152);

	if (t29 != 18446744071562075932LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = 0;
	int32_t x154 = -146252417;
	volatile uint8_t x155 = UINT8_MAX;
	volatile int16_t x156 = 3816;
	volatile int32_t t30 = 3;

	t30 = ((x153^(x154+x155))&x156);

	if (t30 != 3688) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = -695;
	static int8_t x158 = INT8_MIN;
	uint64_t x159 = 29270937054749LLU;
	uint64_t x160 = 27574391673LLU;
	volatile uint64_t t31 = 2LLU;

	t31 = ((x157^(x158+x159))&x160);

	if (t31 != 1073860688LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = 18;
	int32_t x162 = -517209;
	uint16_t x163 = 6187U;
	int16_t x164 = -1;
	volatile int32_t t32 = -217;

	t32 = ((x161^(x162+x163))&x164);

	if (t32 != -511040) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x169 = 1U;
	int8_t x171 = 27;
	int64_t x172 = INT64_MAX;
	volatile uint64_t t33 = 113056LLU;

	t33 = ((x169^(x170+x171))&x172);

	if (t33 != 27LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x173 = UINT16_MAX;
	int64_t x174 = INT64_MIN;
	int64_t x176 = -3LL;
	volatile uint64_t t34 = 2919747610166196502LLU;

	t34 = ((x173^(x174+x175))&x176);

	if (t34 != 9223379715790554753LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = 44;
	volatile int8_t x178 = -1;
	volatile int8_t x179 = 15;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t35 = 13420464;

	t35 = ((x177^(x178+x179))&x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = -1;
	int32_t x182 = INT32_MIN;
	uint8_t x183 = UINT8_MAX;
	uint16_t x184 = 2523U;
	volatile int32_t t36 = 3;

	t36 = ((x181^(x182+x183))&x184);

	if (t36 != 2304) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x185 = 127U;
	int32_t x186 = INT32_MIN;
	uint64_t x187 = UINT64_MAX;
	volatile int32_t x188 = INT32_MAX;
	static volatile uint64_t t37 = 14009398875206LLU;

	t37 = ((x185^(x186+x187))&x188);

	if (t37 != 2147483520LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x191 = INT64_MIN;
	int8_t x192 = 2;
	uint64_t t38 = 462675LLU;

	t38 = ((x189^(x190+x191))&x192);

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x197 = 1;
	int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MAX;
	int64_t x200 = 1077426441545030LL;
	volatile int64_t t39 = 898225739665476140LL;

	t39 = ((x197^(x198+x199))&x200);

	if (t39 != 1077426441545030LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x205 = -1;
	int64_t x206 = INT64_MAX;
	int32_t x207 = -494595;
	uint16_t x208 = 1U;
	volatile int64_t t40 = -4LL;

	t40 = ((x205^(x206+x207))&x208);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = 126852685550532LL;
	uint8_t x211 = 8U;
	volatile uint16_t x212 = 10U;

	t41 = ((x209^(x210+x211))&x212);

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x214 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t42 = -55818046424LL;

	t42 = ((x213^(x214+x215))&x216);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x217 = -1;
	int8_t x220 = INT8_MAX;

	t43 = ((x217^(x218+x219))&x220);

	if (t43 != 28U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x221 = 27U;
	volatile uint32_t x222 = UINT32_MAX;
	uint16_t x223 = 0U;
	int64_t x224 = INT64_MIN;

	t44 = ((x221^(x222+x223))&x224);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x227 = INT64_MAX;
	static int32_t x228 = -357;

	t45 = ((x225^(x226+x227))&x228);

	if (t45 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x229 = INT8_MIN;
	static int8_t x231 = INT8_MAX;
	volatile uint32_t x232 = 26U;
	int64_t t46 = 26799LL;

	t46 = ((x229^(x230+x231))&x232);

	if (t46 != 8LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x233 = 18883U;
	volatile int32_t x234 = INT32_MAX;
	volatile uint64_t t47 = 86622274LLU;

	t47 = ((x233^(x234+x235))&x236);

	if (t47 != 92536279600LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 1513619791LLU;
	int8_t x240 = INT8_MIN;
	volatile uint64_t t48 = 832LLU;

	t48 = ((x237^(x238+x239))&x240);

	if (t48 != 18446744073075687808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x241 = INT64_MIN;
	static uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 5531U;
	static volatile int64_t t49 = INT64_MIN;

	t49 = ((x241^(x242+x243))&x244);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = -35;
	uint16_t x247 = 1725U;
	int32_t x248 = -6;
	static volatile int32_t t50 = -80760400;

	t50 = ((x245^(x246+x247))&x248);

	if (t50 != -2147481958) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x251 = 5279LL;
	int16_t x252 = INT16_MIN;

	t51 = ((x249^(x250+x251))&x252);

	if (t51 != 32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x253 = 6U;
	uint8_t x254 = 46U;
	uint16_t x255 = 101U;
	int16_t x256 = 2945;
	volatile int32_t t52 = -31887;

	t52 = ((x253^(x254+x255))&x256);

	if (t52 != 129) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x257 = 441U;
	static volatile int32_t x258 = -1;
	volatile int32_t x260 = INT32_MAX;
	static uint64_t t53 = 3841006LLU;

	t53 = ((x257^(x258+x259))&x260);

	if (t53 != 717883197LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = -2;
	uint64_t x262 = 3242757LLU;
	uint64_t x264 = 42203895074782965LLU;
	volatile uint64_t t54 = 53004123021989709LLU;

	t54 = ((x261^(x262+x263))&x264);

	if (t54 != 42203895073670385LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = INT16_MAX;
	uint32_t x267 = 57804U;
	static int8_t x268 = -1;
	static volatile uint32_t t55 = 44563470U;

	t55 = ((x265^(x266+x267))&x268);

	if (t55 != 40244U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x270 = -943525LL;
	volatile int64_t t56 = 4LL;

	t56 = ((x269^(x270+x271))&x272);

	if (t56 != -13498176LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MIN;
	int8_t x275 = 16;
	volatile uint8_t x276 = 0U;
	volatile int64_t t57 = 798LL;

	t57 = ((x273^(x274+x275))&x276);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x277 = 123;
	uint32_t x278 = 3264883U;
	volatile int8_t x279 = INT8_MAX;
	static volatile int64_t x280 = -136689103443983LL;

	t58 = ((x277^(x278+x279))&x280);

	if (t58 != 82305LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x281 = 0LLU;
	int32_t x282 = -1;
	uint64_t x283 = 80823265LLU;
	volatile int64_t x284 = -1LL;
	uint64_t t59 = 569487985523658LLU;

	t59 = ((x281^(x282+x283))&x284);

	if (t59 != 80823264LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = INT32_MIN;
	static volatile int64_t x286 = 318218313374LL;
	int8_t x287 = INT8_MIN;
	static int64_t t60 = -557429383029583LL;

	t60 = ((x285^(x286+x287))&x288);

	if (t60 != -319584330210LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = INT8_MIN;
	int8_t x291 = -25;
	int64_t x292 = INT64_MIN;
	int64_t t61 = INT64_MIN;

	t61 = ((x289^(x290+x291))&x292);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MIN;
	static uint8_t x295 = 1U;
	volatile int16_t x296 = INT16_MAX;
	static uint64_t t62 = 0LLU;

	t62 = ((x293^(x294+x295))&x296);

	if (t62 != 32766LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x297 = 7459U;
	static uint32_t x298 = 448962U;
	int16_t x299 = 1;
	static uint64_t x300 = 1256235111166LLU;
	uint64_t t63 = 1587LLU;

	t63 = ((x297^(x298+x299))&x300);

	if (t63 != 164064LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -6;
	int16_t x306 = -42;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t64 = -38400638;

	t64 = ((x305^(x306+x307))&x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = INT8_MIN;
	volatile uint16_t x311 = 26205U;
	uint32_t t65 = 0U;

	t65 = ((x309^(x310+x311))&x312);

	if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x314 = -1;
	int32_t x316 = INT32_MIN;
	volatile int32_t t66 = -1069097;

	t66 = ((x313^(x314+x315))&x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x321 = -3840;
	volatile int32_t x322 = 29338793;
	static int64_t x324 = INT64_MIN;

	t67 = ((x321^(x322+x323))&x324);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x325 = 3317690672123920077LL;
	int32_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -4199081;
	int64_t t68 = 2811631LL;

	t68 = ((x325^(x326+x327))&x328);

	if (t68 != -3317690672128114414LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x329 = 144220488089LL;
	int8_t x330 = -1;
	int32_t x331 = -7725;
	int64_t x332 = -69518194278LL;

	t69 = ((x329^(x330+x331))&x332);

	if (t69 != -213670395894LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x333 = 21U;
	uint32_t x334 = 1209U;
	volatile uint8_t x335 = UINT8_MAX;
	volatile int16_t x336 = 1;
	volatile uint32_t t70 = 0U;

	t70 = ((x333^(x334+x335))&x336);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x339 = INT32_MIN;
	static volatile uint8_t x340 = UINT8_MAX;
	volatile int64_t t71 = -15628631034476149LL;

	t71 = ((x337^(x338+x339))&x340);

	if (t71 != 103LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x342 = UINT16_MAX;
	static volatile int8_t x343 = -61;
	int16_t x344 = INT16_MIN;
	volatile int32_t t72 = 97291902;

	t72 = ((x341^(x342+x343))&x344);

	if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x347 = 104U;
	static uint16_t x348 = UINT16_MAX;
	volatile uint64_t t73 = 143591248LLU;

	t73 = ((x345^(x346+x347))&x348);

	if (t73 != 6723LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x349 = 950809486U;
	volatile int16_t x350 = 3;
	volatile uint64_t x351 = UINT64_MAX;
	static int32_t x352 = 1659590;
	uint64_t t74 = 215681433693649012LLU;

	t74 = ((x349^(x350+x351))&x352);

	if (t74 != 529028LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = INT64_MIN;
	uint32_t x354 = 623U;
	uint64_t x355 = UINT64_MAX;

	t75 = ((x353^(x354+x355))&x356);

	if (t75 != 38LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x357 = -18130;
	int32_t x358 = -1;
	static uint32_t x359 = UINT32_MAX;
	static int16_t x360 = -1;

	t76 = ((x357^(x358+x359))&x360);

	if (t76 != 18128U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = -1;
	volatile uint32_t x362 = 13080U;
	static uint8_t x364 = 27U;
	static volatile int64_t t77 = 6904LL;

	t77 = ((x361^(x362+x363))&x364);

	if (t77 != 3LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x369 = INT64_MAX;
	int8_t x370 = -1;
	int8_t x372 = INT8_MIN;
	volatile uint64_t t78 = 2197534545081959210LLU;

	t78 = ((x369^(x370+x371))&x372);

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x375 = 3U;
	int16_t x376 = -177;

	t79 = ((x373^(x374+x375))&x376);

	if (t79 != 9223372036854773571LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x377 = INT16_MIN;
	static int16_t x378 = INT16_MAX;
	static volatile uint16_t x379 = 31874U;

	t80 = ((x377^(x378+x379))&x380);

	if (t80 != 4294933633U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x381 = -1LL;
	int32_t x382 = 1720;
	int64_t x383 = INT64_MIN;
	int64_t t81 = 1LL;

	t81 = ((x381^(x382+x383))&x384);

	if (t81 != 63815LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MIN;
	int16_t x386 = -1;
	int8_t x387 = INT8_MIN;
	int32_t x388 = -415150;
	static int32_t t82 = 893870347;

	t82 = ((x385^(x386+x387))&x388);

	if (t82 != 2147068498) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x393 = 1555430206283LLU;
	int64_t x394 = -3099902125553020LL;
	volatile uint64_t x395 = 2869941880739658LLU;
	static uint64_t x396 = 21539LLU;

	t83 = ((x393^(x394+x395))&x396);

	if (t83 != 16385LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = INT64_MIN;
	uint16_t x398 = UINT16_MAX;
	static int16_t x399 = INT16_MIN;
	uint32_t x400 = 1009U;
	static volatile int64_t t84 = -873279560240963LL;

	t84 = ((x397^(x398+x399))&x400);

	if (t84 != 1009LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x405 = 30U;
	int32_t x406 = -1;
	int32_t x407 = -1;
	int8_t x408 = INT8_MAX;
	int32_t t85 = -3149;

	t85 = ((x405^(x406+x407))&x408);

	if (t85 != 96) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = -1;
	int8_t x410 = -1;
	static int32_t x411 = 2178;
	static int32_t t86 = 32;

	t86 = ((x409^(x410+x411))&x412);

	if (t86 != 1400) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x413 = INT64_MIN;
	int8_t x414 = INT8_MIN;
	int16_t x415 = -1;
	volatile uint16_t x416 = 9838U;
	volatile int64_t t87 = 1937563309LL;

	t87 = ((x413^(x414+x415))&x416);

	if (t87 != 9838LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x418 = 368054;
	int8_t x419 = -1;
	int32_t x420 = 123071;
	int32_t t88 = -173583026;

	t88 = ((x417^(x418+x419))&x420);

	if (t88 != 57533) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x421 = INT16_MIN;
	static uint32_t x422 = UINT32_MAX;
	uint64_t x424 = UINT64_MAX;
	uint64_t t89 = 4788LLU;

	t89 = ((x421^(x422+x423))&x424);

	if (t89 != 18446744069414617086LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = INT16_MIN;
	volatile uint16_t x430 = 197U;
	static volatile int8_t x431 = INT8_MIN;
	volatile uint16_t x432 = 10161U;
	volatile int32_t t90 = -557;

	t90 = ((x429^(x430+x431))&x432);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x434 = INT32_MIN;
	static int32_t x435 = 1138;
	int16_t x436 = INT16_MIN;

	t91 = ((x433^(x434+x435))&x436);

	if (t91 != 2147450880) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = INT64_MAX;
	int64_t x440 = -716503LL;
	volatile uint64_t t92 = 196250700LLU;

	t92 = ((x437^(x438+x439))&x440);

	if (t92 != 9223372036852683041LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x441 = UINT16_MAX;
	static int8_t x442 = -2;
	int8_t x443 = INT8_MAX;
	int32_t x444 = -1;
	volatile int32_t t93 = 3684394;

	t93 = ((x441^(x442+x443))&x444);

	if (t93 != 65410) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x447 = UINT8_MAX;
	volatile uint64_t t94 = 2076427779730311LLU;

	t94 = ((x445^(x446+x447))&x448);

	if (t94 != 1046315008LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x449 = 1876265315112261104LLU;
	int64_t x450 = -1LL;
	int16_t x451 = -2024;
	uint16_t x452 = UINT16_MAX;
	uint64_t t95 = 14439217618553996LLU;

	t95 = ((x449^(x450+x451))&x452);

	if (t95 != 60903LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = 65U;
	static int16_t x454 = -1;
	int32_t x455 = INT32_MAX;
	uint8_t x456 = UINT8_MAX;
	int32_t t96 = 25023765;

	t96 = ((x453^(x454+x455))&x456);

	if (t96 != 191) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = 4;
	uint32_t x458 = 452300873U;
	int32_t x459 = -389;
	int64_t x460 = 958752562254550LL;
	volatile int64_t t97 = -208973431943781640LL;

	t97 = ((x457^(x458+x459))&x460);

	if (t97 != 417628864LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x462 = INT8_MIN;
	int32_t x463 = -17026;
	int64_t t98 = 245268859724LL;

	t98 = ((x461^(x462+x463))&x464);

	if (t98 != 257LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = 0;
	int8_t x466 = 0;
	static uint16_t x467 = UINT16_MAX;
	volatile uint32_t x468 = 527U;
	static volatile uint32_t t99 = 3731U;

	t99 = ((x465^(x466+x467))&x468);

	if (t99 != 527U) { NG(); } else { ; }
	
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

