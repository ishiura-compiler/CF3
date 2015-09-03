#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 11LLU;
uint64_t x2 = 1966316037255481078LLU;
volatile uint16_t x15 = 1703U;
int64_t x23 = -1LL;
volatile int64_t t4 = -10508LL;
int64_t x28 = -1LL;
int16_t x30 = -14785;
uint16_t x32 = 4702U;
uint32_t x37 = UINT32_MAX;
int64_t x42 = INT64_MIN;
volatile int64_t t9 = -132676317LL;
volatile int32_t x53 = INT32_MIN;
static volatile uint32_t x55 = 3820U;
static int64_t t13 = -326LL;
volatile int64_t x62 = -1LL;
static volatile int64_t t14 = -4013620617670179LL;
static int8_t x66 = -1;
volatile uint32_t x68 = 1236795U;
volatile uint64_t t15 = 1958827LLU;
int64_t t16 = -44149484958004276LL;
uint64_t x81 = 31430897952101LLU;
static volatile uint16_t x82 = 20U;
volatile uint16_t x85 = 12U;
int32_t x86 = -40956;
volatile int16_t x93 = INT16_MIN;
volatile uint32_t t20 = 79966586U;
int16_t x101 = INT16_MIN;
volatile int32_t x103 = -6289;
volatile int64_t t21 = -2457506784756467LL;
int8_t x105 = INT8_MAX;
static uint16_t x109 = UINT16_MAX;
uint64_t t23 = 9LLU;
uint64_t x116 = 72241694691429439LLU;
uint8_t x121 = 86U;
static int32_t x137 = -1;
static volatile int64_t t29 = -693376799658LL;
int32_t x141 = -13418950;
int32_t x145 = -1;
uint64_t x150 = 31386LLU;
int32_t x152 = INT32_MAX;
static volatile int16_t x168 = 30;
static volatile int32_t t34 = 528913234;
int8_t x173 = -22;
uint8_t x181 = UINT8_MAX;
volatile uint32_t x190 = 587521U;
int16_t x192 = INT16_MAX;
volatile int64_t t39 = -660161868908579764LL;
uint16_t x195 = 694U;
static volatile uint8_t x196 = UINT8_MAX;
static volatile int32_t t40 = 659431;
volatile uint64_t t41 = 24160409703827LLU;
uint64_t x201 = 91489030154LLU;
int16_t x210 = INT16_MIN;
volatile int32_t x217 = INT32_MIN;
uint64_t x224 = 3LLU;
uint64_t t47 = 332956575681LLU;
int64_t t50 = 227378167463106628LL;
uint32_t t52 = 399U;
int64_t t54 = 885680959LL;
static volatile int64_t x261 = INT64_MIN;
int16_t x269 = -23;
volatile int32_t t57 = 255944;
static uint64_t x277 = UINT64_MAX;
int32_t x279 = 202175711;
int16_t x282 = -674;
int8_t x293 = INT8_MAX;
int32_t x302 = -1;
int64_t x303 = -1LL;
uint16_t x313 = 584U;
volatile uint64_t x314 = 50752666245028LLU;
volatile int16_t x318 = -1;
volatile int16_t x320 = -1;
static int8_t x323 = -1;
static int16_t x324 = INT16_MAX;
int64_t x336 = INT64_MIN;
int8_t x351 = -1;
volatile int32_t t74 = 254364387;
int8_t x355 = -1;
int32_t t75 = 205166;
int16_t x358 = -1;
static volatile int64_t t76 = -56211445353650LL;
volatile uint32_t t78 = 2089367U;
int8_t x372 = INT8_MAX;
volatile int64_t x380 = -239749LL;
int16_t x383 = INT16_MIN;
uint64_t x390 = 79002035460621471LLU;
int16_t x392 = INT16_MIN;
volatile int64_t x394 = -1LL;
static uint8_t x399 = 2U;
int32_t x401 = -1;
volatile int16_t x403 = -3167;
int16_t x407 = -1;
uint8_t x408 = UINT8_MAX;
uint8_t x409 = 31U;
int32_t x411 = 82769;
int64_t x430 = -1LL;
int64_t t91 = 1579511625LL;
uint16_t x433 = 27137U;
int16_t x434 = -1;
static volatile int32_t t95 = -407661454;
int64_t t96 = 42150291715822LL;
int64_t x464 = -1LL;


void f0(void) {
	int16_t x3 = INT16_MIN;
	int32_t x4 = -1;
	volatile uint64_t t0 = 38010382511LLU;

	t0 = (x1^((x2+x3)|x4));

	if (t0 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = INT32_MAX;
	int16_t x8 = -1;
	volatile uint64_t t1 = 238885835846960LLU;

	t1 = (x5^((x6+x7)|x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 19062181910LLU;
	uint16_t x10 = 913U;
	uint32_t x11 = 25U;
	volatile int16_t x12 = 158;
	uint64_t t2 = 57770140088884LLU;

	t2 = (x9^((x10+x11)|x12));

	if (t2 != 19062182824LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 802697118702739160LLU;
	uint64_t x14 = 794225138012LLU;
	int64_t x16 = -3880994462326705LL;
	volatile uint64_t t3 = 17504LLU;

	t3 = (x13^((x14+x15)|x16));

	if (t3 != 17641151966387273367LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 13058U;
	static volatile int32_t x22 = -1;
	static int64_t x24 = INT64_MIN;

	t4 = (x21^((x22+x23)|x24));

	if (t4 != -13060LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 17099U;
	uint32_t x26 = UINT32_MAX;
	uint32_t x27 = 29U;
	int64_t t5 = 6822438LL;

	t5 = (x25^((x26+x27)|x28));

	if (t5 != -17100LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	int16_t x31 = 661;
	volatile int32_t t6 = 1132;

	t6 = (x29^((x30+x31)|x32));

	if (t6 != -2147474143) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 1U;
	int8_t x34 = INT8_MIN;
	volatile uint32_t x35 = 991715U;
	int32_t x36 = INT32_MAX;
	static volatile uint32_t t7 = 1995U;

	t7 = (x33^((x34+x35)|x36));

	if (t7 != 2147483646U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x38 = 708198180LLU;
	uint16_t x39 = 76U;
	volatile int64_t x40 = -22041980995LL;
	uint64_t t8 = 5041996681508LLU;

	t8 = (x37^((x38+x39)|x40));

	if (t8 != 18446744047969746946LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MAX;
	static int16_t x43 = INT16_MAX;
	int32_t x44 = INT32_MIN;

	t9 = (x41^((x42+x43)|x44));

	if (t9 != -2147451008LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 306;
	volatile uint8_t x46 = UINT8_MAX;
	uint32_t x47 = 437U;
	int32_t x48 = INT32_MIN;
	volatile uint32_t t10 = 22U;

	t10 = (x45^((x46+x47)|x48));

	if (t10 != 2147484550U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 17;
	int8_t x50 = 20;
	volatile uint32_t x51 = 1U;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t11 = 0U;

	t11 = (x49^((x50+x51)|x52));

	if (t11 != 4294967278U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -4800723;
	int8_t x56 = -23;
	static uint32_t t12 = 7U;

	t12 = (x53^((x54+x55)|x56));

	if (t12 != 2147483641U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 10;
	int64_t x58 = 111452202325606574LL;
	int8_t x59 = INT8_MAX;
	static int8_t x60 = INT8_MAX;

	t13 = (x57^((x58+x59)|x60));

	if (t13 != 111452202325606773LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 10U;
	static volatile int16_t x63 = 77;
	uint32_t x64 = 41035U;

	t14 = (x61^((x62+x63)|x64));

	if (t14 != 41029LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 10044414969760LLU;
	int16_t x67 = 255;

	t15 = (x65^((x66+x67)|x68));

	if (t15 != 10044416170079LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 7226U;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = 14089563LL;
	int32_t x72 = INT32_MAX;

	t16 = (x69^((x70+x71)|x72));

	if (t16 != 6442443717LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x83 = -1;
	volatile int64_t x84 = -1LL;
	uint64_t t17 = 1358659909LLU;

	t17 = (x81^((x82+x83)|x84));

	if (t17 != 18446712642811599514LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x87 = UINT8_MAX;
	int8_t x88 = -1;
	int32_t t18 = 100;

	t18 = (x85^((x86+x87)|x88));

	if (t18 != -13) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = 56719U;
	volatile int8_t x92 = INT8_MIN;
	static volatile uint32_t t19 = 25019U;

	t19 = (x89^((x90+x91)|x92));

	if (t19 != 4294901872U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x94 = INT16_MIN;
	uint32_t x95 = 2U;
	uint8_t x96 = 16U;

	t20 = (x93^((x94+x95)|x96));

	if (t20 != 18U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x102 = -24;
	static int64_t x104 = 15518742LL;

	t21 = (x101^((x102+x103)|x104));

	if (t21 != 28503LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x106 = UINT8_MAX;
	static uint16_t x107 = UINT16_MAX;
	uint16_t x108 = 10U;
	static int32_t t22 = 710825188;

	t22 = (x105^((x106+x107)|x108));

	if (t22 != 65665) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x110 = 50128292294252LLU;
	int64_t x111 = INT64_MIN;
	volatile int8_t x112 = INT8_MIN;

	t23 = (x109^((x110+x111)|x112));

	if (t23 != 18446744073709486099LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x113 = 2U;
	int64_t x114 = 13168936172LL;
	int64_t x115 = 0LL;
	volatile uint64_t t24 = 321763491LLU;

	t24 = (x113^((x114+x115)|x116));

	if (t24 != 72241707859447037LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x117 = -40086296098210548LL;
	static volatile int16_t x118 = INT16_MAX;
	volatile uint32_t x119 = 4706U;
	static volatile int16_t x120 = 0;
	volatile int64_t t25 = -7216765312LL;

	t25 = (x117^((x118+x119)|x120));

	if (t25 != -40086296098181267LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x122 = -1;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = 11248LLU;
	uint64_t t26 = 2332803263LLU;

	t26 = (x121^((x122+x123)|x124));

	if (t26 != 18446744073709518761LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x125 = 7817746U;
	int16_t x126 = INT16_MAX;
	volatile int64_t x127 = INT64_MIN;
	static int64_t x128 = 721609818LL;
	int64_t t27 = 590866565LL;

	t27 = (x125^((x126+x127)|x128));

	if (t27 != -9223372036125641235LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x129 = 3902159U;
	static int16_t x130 = 1;
	uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 0U;
	volatile uint32_t t28 = 33089450U;

	t28 = (x129^((x130+x131)|x132));

	if (t28 != 3902415U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x138 = 27U;
	static uint32_t x139 = 5U;
	int64_t x140 = -1LL;

	t29 = (x137^((x138+x139)|x140));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x142 = 1U;
	static int8_t x143 = -1;
	volatile int8_t x144 = 29;
	static volatile int32_t t30 = 101550189;

	t30 = (x141^((x142+x143)|x144));

	if (t30 != -13418969) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x146 = 0U;
	int32_t x147 = 1;
	volatile int16_t x148 = INT16_MIN;
	volatile uint32_t t31 = 1743U;

	t31 = (x145^((x146+x147)|x148));

	if (t31 != 32766U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x149 = INT64_MIN;
	uint16_t x151 = 0U;
	uint64_t t32 = 11244209LLU;

	t32 = (x149^((x150+x151)|x152));

	if (t32 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = UINT32_MAX;
	uint32_t x162 = 601744119U;
	int16_t x163 = INT16_MIN;
	uint16_t x164 = UINT16_MAX;
	volatile uint32_t t33 = 68939U;

	t33 = (x161^((x162+x163)|x164));

	if (t33 != 3693215744U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x165 = INT32_MIN;
	static int8_t x166 = -1;
	static uint8_t x167 = UINT8_MAX;

	t34 = (x165^((x166+x167)|x168));

	if (t34 != -2147483394) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x174 = INT8_MIN;
	int64_t x175 = -127LL;
	int16_t x176 = INT16_MAX;
	volatile int64_t t35 = 11626416432LL;

	t35 = (x173^((x174+x175)|x176));

	if (t35 != 21LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = -3;
	uint8_t x178 = UINT8_MAX;
	static int64_t x179 = 41LL;
	static volatile uint8_t x180 = UINT8_MAX;
	volatile int64_t t36 = -16428680621LL;

	t36 = (x177^((x178+x179)|x180));

	if (t36 != -510LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = 4;
	volatile int32_t t37 = 2;

	t37 = (x181^((x182+x183)|x184));

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = INT16_MIN;
	uint64_t x187 = UINT64_MAX;
	int16_t x188 = INT16_MIN;
	uint64_t t38 = 195569439101712LLU;

	t38 = (x185^((x186+x187)|x188));

	if (t38 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x189 = 654647U;
	static volatile int64_t x191 = INT64_MIN;

	t39 = (x189^((x190+x191)|x192));

	if (t39 != -9223372036854709560LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x193 = INT8_MIN;
	int16_t x194 = -1;

	t40 = (x193^((x194+x195)|x196));

	if (t40 != -641) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x197 = -1;
	uint8_t x198 = 1U;
	volatile int32_t x199 = -7;
	uint64_t x200 = UINT64_MAX;

	t41 = (x197^((x198+x199)|x200));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x202 = 0U;
	volatile int64_t x203 = INT64_MAX;
	int8_t x204 = INT8_MAX;
	uint64_t t42 = 473163LLU;

	t42 = (x201^((x202+x203)|x204));

	if (t42 != 9223371945365745653LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x205 = 271031493;
	uint16_t x206 = 19062U;
	volatile int32_t x207 = 5;
	uint32_t x208 = 156U;
	uint32_t t43 = 354490469U;

	t43 = (x205^((x206+x207)|x208));

	if (t43 != 271046202U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = INT16_MIN;
	static uint8_t x211 = 3U;
	static int32_t x212 = -1;
	static volatile int32_t t44 = -2001;

	t44 = (x209^((x210+x211)|x212));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = INT16_MAX;
	int8_t x214 = -1;
	uint16_t x215 = 253U;
	int16_t x216 = INT16_MAX;
	volatile int32_t t45 = -6;

	t45 = (x213^((x214+x215)|x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x218 = 1U;
	int32_t x219 = -1;
	static int16_t x220 = INT16_MAX;
	volatile int32_t t46 = 19883;

	t46 = (x217^((x218+x219)|x220));

	if (t46 != -2147450881) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = INT32_MAX;
	int16_t x222 = INT16_MAX;
	volatile int64_t x223 = -1LL;

	t47 = (x221^((x222+x223)|x224));

	if (t47 != 2147450880LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x225 = -221761;
	volatile int64_t x226 = -1LL;
	volatile int32_t x227 = 2955183;
	uint8_t x228 = 36U;
	int64_t t48 = 10LL;

	t48 = (x225^((x226+x227)|x228));

	if (t48 != -3044847LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = -1LL;
	int32_t x231 = INT32_MIN;
	int16_t x232 = -1;
	uint64_t t49 = 67LLU;

	t49 = (x229^((x230+x231)|x232));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = INT64_MIN;
	uint16_t x234 = 3U;
	static uint16_t x235 = UINT16_MAX;
	int64_t x236 = INT64_MIN;

	t50 = (x233^((x234+x235)|x236));

	if (t50 != 65538LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	int16_t x243 = -1;
	static int16_t x244 = -112;
	volatile int32_t t51 = -1;

	t51 = (x241^((x242+x243)|x244));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = INT32_MIN;
	int16_t x246 = 973;
	volatile int16_t x247 = INT16_MAX;
	uint32_t x248 = UINT32_MAX;

	t52 = (x245^((x246+x247)|x248));

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x249 = 27U;
	int16_t x250 = INT16_MIN;
	uint16_t x251 = UINT16_MAX;
	static int32_t x252 = INT32_MIN;
	static volatile int32_t t53 = -17248;

	t53 = (x249^((x250+x251)|x252));

	if (t53 != -2147450908) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = -1LL;
	volatile int8_t x255 = -1;
	uint8_t x256 = 2U;

	t54 = (x253^((x254+x255)|x256));

	if (t54 != -4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = -59389LL;
	static volatile uint64_t x258 = 5652760503572729LLU;
	volatile int64_t x259 = 2655426671896670882LL;
	volatile int16_t x260 = INT16_MIN;
	volatile uint64_t t55 = 18664080860965LLU;

	t55 = (x257^((x258+x259)|x260));

	if (t55 != 37784LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x262 = UINT64_MAX;
	int16_t x263 = -1;
	int64_t x264 = -30062009LL;
	uint64_t t56 = 217833LLU;

	t56 = (x261^((x262+x263)|x264));

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x270 = 4U;
	uint16_t x271 = 2293U;
	int32_t x272 = INT32_MIN;

	t57 = (x269^((x270+x271)|x272));

	if (t57 != 2147481360) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x278 = 1U;
	static volatile int8_t x280 = INT8_MAX;
	uint64_t t58 = 872617168379391LLU;

	t58 = (x277^((x278+x279)|x280));

	if (t58 != 18446744073507375872LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = INT64_MIN;
	volatile int16_t x283 = INT16_MIN;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int64_t t59 = -8412LL;

	t59 = (x281^((x282+x283)|x284));

	if (t59 != 9223372036854742527LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = -1;
	static int64_t x286 = 78390LL;
	uint32_t x287 = 419U;
	static int8_t x288 = -8;
	int64_t t60 = -16769LL;

	t60 = (x285^((x286+x287)|x288));

	if (t60 != 6LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x289 = INT8_MIN;
	uint64_t x290 = 27LLU;
	int32_t x291 = 430633;
	static int64_t x292 = INT64_MIN;
	volatile uint64_t t61 = 603921424806223505LLU;

	t61 = (x289^((x290+x291)|x292));

	if (t61 != 9223372036854345156LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x294 = UINT16_MAX;
	uint8_t x295 = UINT8_MAX;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t62 = -39;

	t62 = (x293^((x294+x295)|x296));

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MIN;
	uint16_t x299 = 7U;
	volatile int16_t x300 = INT16_MIN;
	int32_t t63 = -14038;

	t63 = (x297^((x298+x299)|x300));

	if (t63 != 32647) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = 7;
	int64_t x304 = -30738897620LL;
	static volatile int64_t t64 = -3945606797260736LL;

	t64 = (x301^((x302+x303)|x304));

	if (t64 != -7LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = INT64_MIN;
	uint8_t x306 = UINT8_MAX;
	static uint8_t x307 = UINT8_MAX;
	uint16_t x308 = 28U;
	volatile int64_t t65 = -938651356742967137LL;

	t65 = (x305^((x306+x307)|x308));

	if (t65 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = UINT16_MAX;
	static uint32_t x310 = 370U;
	int16_t x311 = -1;
	volatile uint64_t x312 = 37LLU;
	volatile uint64_t t66 = 221328367268203LLU;

	t66 = (x309^((x310+x311)|x312));

	if (t66 != 65162LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x315 = 7U;
	int8_t x316 = 56;
	volatile uint64_t t67 = 286889LLU;

	t67 = (x313^((x314+x315)|x316));

	if (t67 != 50752666244595LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = 871;
	static int32_t x319 = INT32_MAX;
	volatile int32_t t68 = -19439880;

	t68 = (x317^((x318+x319)|x320));

	if (t68 != -872) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x321 = 1498LL;
	int16_t x322 = -1;
	static volatile int64_t t69 = -209614592LL;

	t69 = (x321^((x322+x323)|x324));

	if (t69 != -1499LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x333 = 2U;
	int64_t x334 = INT64_MIN;
	volatile uint64_t x335 = 109128LLU;
	volatile uint64_t t70 = 1747371LLU;

	t70 = (x333^((x334+x335)|x336));

	if (t70 != 9223372036854884938LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MIN;
	volatile int64_t x339 = -1LL;
	static int32_t x340 = -462;
	int64_t t71 = 507614251LL;

	t71 = (x337^((x338+x339)|x340));

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = -1232693786812LL;
	int32_t x343 = INT32_MIN;
	int32_t x344 = -976098;
	volatile int64_t t72 = -1LL;

	t72 = (x341^((x342+x343)|x344));

	if (t72 != -4294549343LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x345 = -6;
	static volatile uint64_t x346 = 11468182954LLU;
	int16_t x347 = INT16_MIN;
	static uint32_t x348 = UINT32_MAX;
	uint64_t t73 = 5525LLU;

	t73 = (x345^((x346+x347)|x348));

	if (t73 != 18446744060824649733LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x349 = -1;
	int8_t x350 = -22;
	uint8_t x352 = 8U;

	t74 = (x349^((x350+x351)|x352));

	if (t74 != 22) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = -1;
	int8_t x354 = INT8_MIN;
	int32_t x356 = 0;

	t75 = (x353^((x354+x355)|x356));

	if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int64_t x359 = INT64_MAX;
	int8_t x360 = INT8_MAX;

	t76 = (x357^((x358+x359)|x360));

	if (t76 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = -20;
	uint16_t x362 = UINT16_MAX;
	int8_t x363 = 1;
	static int8_t x364 = INT8_MAX;
	int32_t t77 = -79;

	t77 = (x361^((x362+x363)|x364));

	if (t77 != -65645) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x365 = 169309U;
	int16_t x366 = 1;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MAX;

	t78 = (x365^((x366+x367)|x368));

	if (t78 != 4294797986U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x369 = -1;
	static volatile uint64_t x370 = 37848LLU;
	static int32_t x371 = INT32_MIN;
	volatile uint64_t t79 = 63930679886153LLU;

	t79 = (x369^((x370+x371)|x372));

	if (t79 != 2147445760LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x373 = 11381LLU;
	volatile uint64_t x374 = 9256682531181LLU;
	uint32_t x375 = 21U;
	int32_t x376 = -1;
	static uint64_t t80 = 645308081353565LLU;

	t80 = (x373^((x374+x375)|x376));

	if (t80 != 18446744073709540234LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = -2109;
	uint16_t x379 = 1U;
	volatile int64_t t81 = -34945890765LL;

	t81 = (x377^((x378+x379)|x380));

	if (t81 != 9223372036854773759LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int8_t x382 = 1;
	uint8_t x384 = 2U;
	uint32_t t82 = 153454193U;

	t82 = (x381^((x382+x383)|x384));

	if (t82 != 32764U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x389 = UINT8_MAX;
	int8_t x391 = INT8_MIN;
	uint64_t t83 = 10743974LLU;

	t83 = (x389^((x390+x391)|x392));

	if (t83 != 18446744073709536480LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x393 = 89U;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -1;
	volatile int64_t t84 = 86089287332558LL;

	t84 = (x393^((x394+x395)|x396));

	if (t84 != -90LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = 25651730;
	int8_t x398 = -2;
	static int8_t x400 = 10;
	static int32_t t85 = 268285295;

	t85 = (x397^((x398+x399)|x400));

	if (t85 != 25651736) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x402 = UINT16_MAX;
	static int16_t x404 = -1;
	volatile int32_t t86 = 27487740;

	t86 = (x401^((x402+x403)|x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x405 = UINT16_MAX;
	int16_t x406 = 4089;
	int32_t t87 = -1489;

	t87 = (x405^((x406+x407)|x408));

	if (t87 != 61440) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x410 = -1LL;
	uint64_t x412 = 8101LLU;
	uint64_t t88 = 8029LLU;

	t88 = (x409^((x410+x411)|x412));

	if (t88 != 90090LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x417 = -1;
	static int8_t x418 = -1;
	int32_t x419 = -1;
	static int8_t x420 = 1;
	int32_t t89 = -1;

	t89 = (x417^((x418+x419)|x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x421 = 1414120155U;
	volatile int32_t x422 = -1;
	int8_t x423 = INT8_MIN;
	uint16_t x424 = 767U;
	volatile uint32_t t90 = 118023819U;

	t90 = (x421^((x422+x423)|x424));

	if (t90 != 2880847140U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x429 = -15373;
	static int8_t x431 = INT8_MIN;
	int8_t x432 = 1;

	t91 = (x429^((x430+x431)|x432));

	if (t91 != 15500LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x435 = -1;
	uint32_t x436 = 1014076965U;
	volatile uint32_t t92 = 453870235U;

	t92 = (x433^((x434+x435)|x436));

	if (t92 != 4294940158U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = INT8_MAX;
	int16_t x438 = INT16_MIN;
	static uint16_t x439 = 18137U;
	int16_t x440 = -1;
	int32_t t93 = -657440662;

	t93 = (x437^((x438+x439)|x440));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x445 = INT64_MIN;
	volatile int16_t x446 = 427;
	uint32_t x447 = UINT32_MAX;
	int16_t x448 = 401;
	static int64_t t94 = -269344451964302753LL;

	t94 = (x445^((x446+x447)|x448));

	if (t94 != -9223372036854775365LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x449 = 1;
	int8_t x450 = -2;
	int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MAX;

	t95 = (x449^((x450+x451)|x452));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x453 = -26LL;
	int8_t x454 = INT8_MIN;
	uint16_t x455 = 14U;
	int32_t x456 = -550271775;

	t96 = (x453^((x454+x455)|x456));

	if (t96 != 9LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x457 = -1;
	static volatile int64_t x458 = INT64_MIN;
	uint8_t x459 = 14U;
	uint8_t x460 = UINT8_MAX;
	int64_t t97 = 2613367697LL;

	t97 = (x457^((x458+x459)|x460));

	if (t97 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x461 = UINT64_MAX;
	static uint32_t x462 = 153705U;
	static int8_t x463 = -8;
	volatile uint64_t t98 = 1621781547193289156LLU;

	t98 = (x461^((x462+x463)|x464));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x465 = 5U;
	int64_t x466 = -2849870646LL;
	volatile int8_t x467 = 13;
	int16_t x468 = -12780;
	int64_t t99 = 916040429115LL;

	t99 = (x465^((x466+x467)|x468));

	if (t99 != -4398LL) { NG(); } else { ; }
	
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

