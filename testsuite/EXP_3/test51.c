#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 2U;
int8_t x4 = INT8_MAX;
volatile int32_t x12 = INT32_MIN;
int32_t x24 = INT32_MAX;
static volatile int32_t t5 = INT32_MAX;
uint32_t x29 = 67831814U;
int8_t x30 = INT8_MIN;
uint32_t t6 = 43629741U;
uint8_t x34 = UINT8_MAX;
volatile uint64_t t9 = 63208149LLU;
int8_t x45 = -23;
uint32_t x51 = UINT32_MAX;
static volatile int64_t t12 = 633LL;
int8_t x66 = -1;
int16_t x73 = INT16_MIN;
int64_t t18 = 65349527LL;
int8_t x81 = INT8_MIN;
static volatile int8_t x84 = 1;
static volatile uint32_t t21 = 15U;
static volatile int64_t x96 = 1297196388LL;
volatile int64_t t22 = 117954218LL;
uint16_t x100 = 4185U;
volatile int64_t t24 = -2LL;
uint8_t x105 = 15U;
int64_t x112 = 47522LL;
int32_t x120 = 0;
uint8_t x121 = 123U;
static uint32_t x122 = 212U;
uint32_t x128 = 137U;
int32_t x140 = 229;
int32_t t32 = -252643246;
int8_t x143 = INT8_MIN;
int8_t x149 = INT8_MIN;
int64_t t34 = -14719949483698LL;
volatile int16_t x162 = INT16_MIN;
int8_t x163 = -1;
uint32_t t37 = 50013U;
uint32_t x174 = 3715171U;
int8_t x180 = INT8_MIN;
int64_t x190 = INT64_MIN;
uint32_t x199 = 1989818367U;
int16_t x203 = -1;
int32_t x207 = INT32_MIN;
uint32_t x215 = UINT32_MAX;
int32_t x220 = 0;
uint8_t x222 = 26U;
uint32_t x227 = UINT32_MAX;
int16_t x232 = INT16_MIN;
uint8_t x234 = 30U;
int64_t x236 = 3838131851410LL;
uint16_t x237 = 534U;
static uint64_t t56 = 56453564728685335LLU;
uint32_t x245 = 131534U;
int8_t x257 = INT8_MIN;
int16_t x259 = -11;
static volatile uint64_t t59 = UINT64_MAX;
int64_t x262 = -1LL;
uint32_t x266 = 408161U;
int32_t x282 = INT32_MIN;
static int16_t x286 = INT16_MIN;
uint64_t t65 = 16321LLU;
int8_t x308 = INT8_MIN;
volatile int64_t t70 = INT64_MAX;
int64_t x319 = 150163218351LL;
static uint16_t x328 = UINT16_MAX;
int64_t t73 = 118228LL;
int16_t x332 = INT16_MIN;
uint16_t x335 = UINT16_MAX;
uint32_t x337 = 1654178U;
uint32_t x340 = 123171U;
static int16_t x348 = -120;
uint8_t x350 = 15U;
static uint16_t x351 = UINT16_MAX;
volatile int64_t t79 = 11476521108956LL;
int16_t x355 = INT16_MIN;
volatile int64_t t82 = 1930413LL;
uint32_t x390 = 790156U;
int64_t t85 = -2416079LL;
static uint32_t x395 = UINT32_MAX;
uint64_t x396 = UINT64_MAX;
static volatile uint32_t t87 = 11632U;
int64_t t89 = -123444509570913292LL;
uint16_t x420 = UINT16_MAX;
volatile int8_t x423 = -2;
int32_t x427 = -1;
int32_t x428 = -14013;
volatile int64_t t95 = -4316347404552185871LL;
int8_t x442 = INT8_MAX;
int16_t x443 = -1;
int16_t x448 = 1;
int32_t t98 = 1;
uint64_t x459 = UINT64_MAX;
uint64_t t99 = 2167435LLU;


void f0(void) {
	int64_t x1 = 41453LL;
	uint32_t x3 = 216043U;
	static volatile int64_t t0 = -1LL;

	t0 = ((x1/x2)|(x3+x4));

	if (t0 != 220414LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -361502;
	int32_t x6 = -4752094;
	int16_t x7 = INT16_MAX;
	volatile int64_t x8 = -281147318452339637LL;
	volatile int64_t t1 = -155889LL;

	t1 = ((x5/x6)|(x7+x8));

	if (t1 != -281147318452306870LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint32_t x10 = 13389U;
	int32_t x11 = INT32_MAX;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = ((x9/x10)|(x11+x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -594LL;
	int32_t x14 = INT32_MIN;
	int32_t x15 = INT32_MIN;
	volatile int32_t x16 = 1969929;
	int64_t t3 = 142980811978LL;

	t3 = ((x13/x14)|(x15+x16));

	if (t3 != -2145513719LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint16_t x18 = UINT16_MAX;
	volatile int8_t x19 = -10;
	int8_t x20 = 29;
	volatile int32_t t4 = -1004579;

	t4 = ((x17/x18)|(x19+x20));

	if (t4 != 19) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	int8_t x22 = INT8_MIN;
	static int8_t x23 = 0;

	t5 = ((x21/x22)|(x23+x24));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = 63;

	t6 = ((x29/x30)|(x31+x32));

	if (t6 != 318U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = 6287;
	int8_t x35 = INT8_MAX;
	int32_t x36 = -1;
	int32_t t7 = 444;

	t7 = ((x33/x34)|(x35+x36));

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = 1479;
	int64_t x39 = 31LL;
	uint16_t x40 = UINT16_MAX;
	int64_t t8 = 14907LL;

	t8 = ((x37/x38)|(x39+x40));

	if (t8 != -6236221796385890LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	volatile uint64_t x42 = 801841599LLU;
	static volatile int8_t x43 = -1;
	int64_t x44 = INT64_MAX;

	t9 = ((x41/x42)|(x43+x44));

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x46 = 10U;
	volatile uint32_t x47 = 9U;
	int64_t x48 = 2LL;
	int64_t t10 = 1187140LL;

	t10 = ((x45/x46)|(x47+x48));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -8565LL;
	static int64_t x50 = INT64_MAX;
	int32_t x52 = INT32_MIN;
	int64_t t11 = 7897876679361985LL;

	t11 = ((x49/x50)|(x51+x52));

	if (t11 != 2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	int32_t x55 = 13;
	int32_t x56 = INT32_MIN;

	t12 = ((x53/x54)|(x55+x56));

	if (t12 != -2147483635LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	volatile int16_t x58 = 15031;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t13 = 14552;

	t13 = ((x57/x58)|(x59+x60));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	volatile int64_t x62 = INT64_MIN;
	volatile uint32_t x63 = 20610860U;
	int16_t x64 = -1;
	int64_t t14 = -2537215075157172LL;

	t14 = ((x61/x62)|(x63+x64));

	if (t14 != 20610859LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 1803U;
	int8_t x67 = -3;
	uint16_t x68 = 104U;
	volatile uint32_t t15 = 3U;

	t15 = ((x65/x66)|(x67+x68));

	if (t15 != 101U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	volatile int16_t x70 = 4;
	static uint16_t x71 = 386U;
	volatile int8_t x72 = INT8_MAX;
	int32_t t16 = 12669932;

	t16 = ((x69/x70)|(x71+x72));

	if (t16 != -7679) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x74 = -28;
	uint64_t x75 = UINT64_MAX;
	int64_t x76 = -1LL;
	static volatile uint64_t t17 = 198LLU;

	t17 = ((x73/x74)|(x75+x76));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 1;
	static int64_t x78 = 275454574141173842LL;
	volatile int16_t x79 = -1;
	static int16_t x80 = 0;

	t18 = ((x77/x78)|(x79+x80));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	volatile int64_t t19 = 314LL;

	t19 = ((x81/x82)|(x83+x84));

	if (t19 != -32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 58;
	static int16_t x86 = -1;
	volatile uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t20 = 38;

	t20 = ((x85/x86)|(x87+x88));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 1974034942U;
	static volatile int16_t x90 = INT16_MIN;
	static int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MAX;

	t21 = ((x89/x90)|(x91+x92));

	if (t21 != 4294934655U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile int32_t x94 = -1;
	static int8_t x95 = INT8_MIN;

	t22 = ((x93/x94)|(x95+x96));

	if (t22 != 1297196260LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = -2;
	static uint8_t x99 = UINT8_MAX;
	volatile int32_t t23 = 310;

	t23 = ((x97/x98)|(x99+x100));

	if (t23 != 20824) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	static int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MIN;

	t24 = ((x101/x102)|(x103+x104));

	if (t24 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x106 = INT64_MIN;
	int16_t x107 = -1;
	int8_t x108 = -1;
	int64_t t25 = -126963LL;

	t25 = ((x105/x106)|(x107+x108));

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 85U;
	int64_t x110 = INT64_MIN;
	static int64_t x111 = -1LL;
	volatile int64_t t26 = -8LL;

	t26 = ((x109/x110)|(x111+x112));

	if (t26 != 47521LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x113 = 10701911681377LLU;
	volatile int8_t x114 = INT8_MAX;
	int16_t x115 = INT16_MAX;
	uint64_t x116 = 6LLU;
	uint64_t t27 = 5736007210521422678LLU;

	t27 = ((x113/x114)|(x115+x116));

	if (t27 != 84267021117LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 48U;
	static int64_t x118 = 1212213LL;
	volatile int8_t x119 = -1;
	volatile int64_t t28 = -5LL;

	t28 = ((x117/x118)|(x119+x120));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x123 = UINT8_MAX;
	volatile int8_t x124 = INT8_MIN;
	static volatile uint32_t t29 = 17451134U;

	t29 = ((x121/x122)|(x123+x124));

	if (t29 != 127U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = 9U;
	int16_t x127 = INT16_MAX;
	volatile uint32_t t30 = 247379U;

	t30 = ((x125/x126)|(x127+x128));

	if (t30 != 4294967290U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -1;
	static int8_t x134 = INT8_MAX;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t31 = 1;

	t31 = ((x133/x134)|(x135+x136));

	if (t31 != 131070) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -45;
	static int16_t x138 = 9741;
	int16_t x139 = -1187;

	t32 = ((x137/x138)|(x139+x140));

	if (t32 != -958) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MAX;
	volatile uint16_t x142 = 10597U;
	static int64_t x144 = 0LL;
	volatile int64_t t33 = -2174895632LL;

	t33 = ((x141/x142)|(x143+x144));

	if (t33 != -102LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x150 = 19U;
	int64_t x151 = -6212755LL;
	static uint8_t x152 = 48U;

	t34 = ((x149/x150)|(x151+x152));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = 0;
	static uint8_t x154 = 1U;
	static volatile int32_t x155 = INT32_MAX;
	int32_t x156 = INT32_MIN;
	volatile int32_t t35 = -2537836;

	t35 = ((x153/x154)|(x155+x156));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = -6984;
	int32_t x158 = INT32_MIN;
	static uint64_t x159 = 160LLU;
	uint32_t x160 = UINT32_MAX;
	uint64_t t36 = 15174083654766136LLU;

	t36 = ((x157/x158)|(x159+x160));

	if (t36 != 4294967455LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	uint32_t x164 = 4842333U;

	t37 = ((x161/x162)|(x163+x164));

	if (t37 != 4842332U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = UINT64_MAX;
	int8_t x166 = 3;
	static int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MAX;
	uint64_t t38 = 4021338213696193LLU;

	t38 = ((x165/x166)|(x167+x168));

	if (t38 != 6148914691236527999LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = UINT32_MAX;
	int32_t x170 = -1;
	int16_t x171 = -78;
	int32_t x172 = -65343;
	volatile uint32_t t39 = 13057U;

	t39 = ((x169/x170)|(x171+x172));

	if (t39 != 4294901875U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x173 = INT64_MIN;
	volatile int32_t x175 = -791210693;
	static volatile int16_t x176 = -1;
	int64_t t40 = -3033937428659215178LL;

	t40 = ((x173/x174)|(x175+x176));

	if (t40 != -120078981LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x177 = 1LL;
	volatile int16_t x178 = 2;
	uint8_t x179 = UINT8_MAX;
	volatile int64_t t41 = -263419680LL;

	t41 = ((x177/x178)|(x179+x180));

	if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 47U;
	static int64_t x182 = -1LL;
	int16_t x183 = 157;
	static int16_t x184 = -1;
	volatile int64_t t42 = 530999980897642281LL;

	t42 = ((x181/x182)|(x183+x184));

	if (t42 != -35LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x189 = UINT16_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	int64_t x192 = -917982051583829LL;
	int64_t t43 = -53389LL;

	t43 = ((x189/x190)|(x191+x192));

	if (t43 != -917982051518294LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 7U;
	int32_t x194 = INT32_MAX;
	static uint16_t x195 = UINT16_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t44 = 487422U;

	t44 = ((x193/x194)|(x195+x196));

	if (t44 != 65534U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = UINT8_MAX;
	int32_t x198 = INT32_MAX;
	int32_t x200 = 907835;
	uint32_t t45 = 872151121U;

	t45 = ((x197/x198)|(x199+x200));

	if (t45 != 1990726202U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MIN;
	uint16_t x202 = UINT16_MAX;
	int32_t x204 = 1;
	int32_t t46 = -439345870;

	t46 = ((x201/x202)|(x203+x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = 65688332145625797LLU;
	uint64_t x206 = 1388401653LLU;
	int64_t x208 = -1LL;
	uint64_t t47 = 1390971LLU;

	t47 = ((x205/x206)|(x207+x208));

	if (t47 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MIN;
	volatile int8_t x211 = -1;
	int64_t x212 = INT64_MAX;
	volatile int64_t t48 = -24727685LL;

	t48 = ((x209/x210)|(x211+x212));

	if (t48 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MAX;
	int64_t x214 = INT64_MIN;
	static int16_t x216 = INT16_MIN;
	volatile int64_t t49 = -3LL;

	t49 = ((x213/x214)|(x215+x216));

	if (t49 != 4294934527LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = 14U;
	volatile int16_t x218 = INT16_MAX;
	int64_t x219 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = ((x217/x218)|(x219+x220));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 1963449LLU;
	int16_t x223 = 4;
	volatile int64_t x224 = INT64_MIN;
	volatile uint64_t t51 = 3053LLU;

	t51 = ((x221/x222)|(x223+x224));

	if (t51 != 9223372036854851325LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x225 = INT16_MIN;
	static uint32_t x226 = 61157922U;
	int16_t x228 = INT16_MIN;
	static volatile uint32_t t52 = 11U;

	t52 = ((x225/x226)|(x227+x228));

	if (t52 != 4294934527U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 1LLU;
	int8_t x230 = -1;
	uint64_t x231 = 1161992LLU;
	static uint64_t t53 = 88275896238LLU;

	t53 = ((x229/x230)|(x231+x232));

	if (t53 != 1129224LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MIN;
	static volatile int64_t x235 = -1LL;
	int64_t t54 = -17164LL;

	t54 = ((x233/x234)|(x235+x236));

	if (t54 != -67109955LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x238 = INT64_MAX;
	int32_t x239 = INT32_MIN;
	static int8_t x240 = INT8_MAX;
	volatile int64_t t55 = -11123LL;

	t55 = ((x237/x238)|(x239+x240));

	if (t55 != -2147483521LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x241 = UINT64_MAX;
	int64_t x242 = INT64_MAX;
	int64_t x243 = 1771916LL;
	int32_t x244 = INT32_MIN;

	t56 = ((x241/x242)|(x243+x244));

	if (t56 != 18446744071563839886LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x246 = UINT8_MAX;
	volatile uint64_t x247 = 44664929LLU;
	volatile int16_t x248 = INT16_MAX;
	volatile uint64_t t57 = 579993862235830LLU;

	t57 = ((x245/x246)|(x247+x248));

	if (t57 != 44698211LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = -1;
	uint8_t x250 = 20U;
	int64_t x251 = -112LL;
	static volatile int64_t x252 = -1LL;
	int64_t t58 = -14LL;

	t58 = ((x249/x250)|(x251+x252));

	if (t58 != -113LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x258 = INT8_MAX;
	uint64_t x260 = UINT64_MAX;

	t59 = ((x257/x258)|(x259+x260));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x261 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	volatile int32_t x264 = -60638821;
	static int64_t t60 = 2832698607974LL;

	t60 = ((x261/x262)|(x263+x264));

	if (t60 != -60638949LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 768273384U;
	uint32_t x267 = UINT32_MAX;
	volatile uint16_t x268 = UINT16_MAX;
	volatile uint32_t t61 = 1U;

	t61 = ((x265/x266)|(x267+x268));

	if (t61 != 65534U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x269 = 1121U;
	int32_t x270 = -1;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = 0U;
	int32_t t62 = -7405;

	t62 = ((x269/x270)|(x271+x272));

	if (t62 != -1121) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x273 = -1LL;
	int8_t x274 = -3;
	static int8_t x275 = -1;
	int8_t x276 = INT8_MAX;
	int64_t t63 = -45296996849480818LL;

	t63 = ((x273/x274)|(x275+x276));

	if (t63 != 126LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x281 = UINT16_MAX;
	volatile int16_t x283 = INT16_MAX;
	int16_t x284 = -1;
	static volatile int32_t t64 = 9085171;

	t64 = ((x281/x282)|(x283+x284));

	if (t64 != 32766) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = INT32_MIN;
	int64_t x287 = INT64_MIN;
	uint64_t x288 = 24910LLU;

	t65 = ((x285/x286)|(x287+x288));

	if (t65 != 9223372036854866254LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MAX;
	uint64_t x291 = 2014529LLU;
	static int64_t x292 = -1LL;
	static volatile uint64_t t66 = 54764205LLU;

	t66 = ((x289/x290)|(x291+x292));

	if (t66 != 2014528LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = INT32_MIN;
	uint16_t x299 = 239U;
	uint8_t x300 = UINT8_MAX;
	int32_t t67 = 56;

	t67 = ((x297/x298)|(x299+x300));

	if (t67 != 494) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x301 = -1LL;
	uint8_t x302 = 67U;
	volatile uint32_t x303 = 906320758U;
	static uint64_t x304 = UINT64_MAX;
	uint64_t t68 = 1406292LLU;

	t68 = ((x301/x302)|(x303+x304));

	if (t68 != 906320757LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x305 = 119U;
	uint32_t x306 = 21U;
	uint16_t x307 = 499U;
	uint32_t t69 = 134U;

	t69 = ((x305/x306)|(x307+x308));

	if (t69 != 375U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x313 = UINT8_MAX;
	volatile uint8_t x314 = UINT8_MAX;
	int8_t x315 = -1;
	int64_t x316 = INT64_MAX;

	t70 = ((x313/x314)|(x315+x316));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x317 = UINT64_MAX;
	uint32_t x318 = 10U;
	static int64_t x320 = -186040191702LL;
	static uint64_t t71 = 167633817386LLU;

	t71 = ((x317/x318)|(x319+x320));

	if (t71 != 18446744072595561945LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x321 = -1;
	static int64_t x322 = INT64_MIN;
	volatile uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 4175U;
	volatile uint64_t t72 = 110090416LLU;

	t72 = ((x321/x322)|(x323+x324));

	if (t72 != 4174LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x325 = 3875660LL;
	int64_t x326 = 7718169620473464LL;
	int64_t x327 = -2182155979421LL;

	t73 = ((x325/x326)|(x327+x328));

	if (t73 != -2182155913886LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x329 = 39U;
	uint64_t x330 = 29LLU;
	static volatile int8_t x331 = INT8_MAX;
	static uint64_t t74 = 183719380LLU;

	t74 = ((x329/x330)|(x331+x332));

	if (t74 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = -1LL;
	static uint32_t x334 = UINT32_MAX;
	static int16_t x336 = INT16_MIN;
	int64_t t75 = 2032443311LL;

	t75 = ((x333/x334)|(x335+x336));

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	uint32_t t76 = 1805570898U;

	t76 = ((x337/x338)|(x339+x340));

	if (t76 != 123426U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x342 = 102653;
	int64_t x343 = -346858178LL;
	static int8_t x344 = INT8_MIN;
	volatile int64_t t77 = 6LL;

	t77 = ((x341/x342)|(x343+x344));

	if (t77 != -346816513LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x345 = -1;
	int64_t x346 = -72654961483794LL;
	volatile int8_t x347 = INT8_MIN;
	int64_t t78 = -653626LL;

	t78 = ((x345/x346)|(x347+x348));

	if (t78 != -248LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = -131099125320LL;
	uint32_t x352 = 424U;

	t79 = ((x349/x350)|(x351+x352));

	if (t79 != -8739941393LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -1LL;
	uint8_t x354 = UINT8_MAX;
	int64_t x356 = -1LL;
	static volatile int64_t t80 = 20808270080425238LL;

	t80 = ((x353/x354)|(x355+x356));

	if (t80 != -32769LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x357 = 0U;
	static uint16_t x358 = UINT16_MAX;
	static volatile int8_t x359 = 1;
	uint16_t x360 = 596U;
	volatile uint32_t t81 = 1501273332U;

	t81 = ((x357/x358)|(x359+x360));

	if (t81 != 597U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 589181089U;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int64_t x380 = 768LL;

	t82 = ((x377/x378)|(x379+x380));

	if (t82 != -9223372036854775040LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = -1;
	int64_t x382 = INT64_MAX;
	volatile int32_t x383 = 15;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t83 = 313338LL;

	t83 = ((x381/x382)|(x383+x384));

	if (t83 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = -1;
	uint64_t x386 = 49LLU;
	static volatile int64_t x387 = INT64_MIN;
	volatile int8_t x388 = INT8_MAX;
	volatile uint64_t t84 = 2LLU;

	t84 = ((x385/x386)|(x387+x388));

	if (t84 != 9599836201624358527LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = -1;
	static int64_t x391 = INT64_MIN;
	volatile int16_t x392 = INT16_MAX;

	t85 = ((x389/x390)|(x391+x392));

	if (t85 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = UINT32_MAX;
	static volatile uint32_t x394 = 7479U;
	static volatile uint64_t t86 = 512563525104064587LLU;

	t86 = ((x393/x394)|(x395+x396));

	if (t86 != 4294967294LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x401 = 1U;
	uint32_t x402 = 27626U;
	int16_t x403 = -1;
	static int32_t x404 = -43533196;

	t87 = ((x401/x402)|(x403+x404));

	if (t87 != 4251434099U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x409 = INT64_MAX;
	int64_t x410 = INT64_MAX;
	static volatile uint64_t x411 = UINT64_MAX;
	uint64_t x412 = UINT64_MAX;
	static uint64_t t88 = UINT64_MAX;

	t88 = ((x409/x410)|(x411+x412));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = -3082301337964LL;
	int16_t x414 = -1;
	uint8_t x415 = UINT8_MAX;
	int16_t x416 = INT16_MIN;

	t89 = ((x413/x414)|(x415+x416));

	if (t89 != -3585LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = 1U;
	uint8_t x418 = 50U;
	uint64_t x419 = 9186825319675LLU;
	uint64_t t90 = 724518379255LLU;

	t90 = ((x417/x418)|(x419+x420));

	if (t90 != 9186825385210LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MIN;
	static uint64_t x422 = 496307545130LLU;
	int64_t x424 = -89556015LL;
	uint64_t t91 = 230LLU;

	t91 = ((x421/x422)|(x423+x424));

	if (t91 != 18446744073621437423LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x425 = 255254069;
	uint32_t x426 = UINT32_MAX;
	uint32_t t92 = 62689U;

	t92 = ((x425/x426)|(x427+x428));

	if (t92 != 4294953282U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = INT16_MAX;
	uint32_t x430 = 952U;
	int16_t x431 = 94;
	static int16_t x432 = -1;
	volatile uint32_t t93 = 3174342U;

	t93 = ((x429/x430)|(x431+x432));

	if (t93 != 127U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = -117;
	uint16_t x434 = 23610U;
	uint64_t x435 = UINT64_MAX;
	static int32_t x436 = INT32_MAX;
	volatile uint64_t t94 = 3300216LLU;

	t94 = ((x433/x434)|(x435+x436));

	if (t94 != 2147483646LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x437 = INT32_MIN;
	int64_t x438 = INT64_MIN;
	int16_t x439 = INT16_MAX;
	uint16_t x440 = UINT16_MAX;

	t95 = ((x437/x438)|(x439+x440));

	if (t95 != 98302LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x441 = -1;
	static int32_t x444 = -1;
	volatile int32_t t96 = 31;

	t96 = ((x441/x442)|(x443+x444));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = -6067;
	static int16_t x446 = 2;
	int16_t x447 = 85;
	int32_t t97 = -410028326;

	t97 = ((x445/x446)|(x447+x448));

	if (t97 != -2953) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x449 = INT32_MIN;
	int32_t x450 = 4417;
	int16_t x451 = -84;
	uint16_t x452 = 3229U;

	t98 = ((x449/x450)|(x451+x452));

	if (t98 != -484129) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x457 = 13099U;
	int64_t x458 = 914477941LL;
	int8_t x460 = INT8_MIN;

	t99 = ((x457/x458)|(x459+x460));

	if (t99 != 18446744073709551487LLU) { NG(); } else { ; }
	
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

