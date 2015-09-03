#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 171582664LL;
int16_t x10 = INT16_MIN;
uint16_t x11 = 3U;
int32_t x13 = -1;
static volatile int64_t x15 = -1LL;
int64_t x17 = -1LL;
int16_t x22 = -1;
static uint16_t x36 = 140U;
int16_t x40 = -1;
static uint8_t x42 = UINT8_MAX;
uint8_t x44 = 40U;
int64_t x51 = 14330807LL;
int64_t x53 = 138796012342683104LL;
int32_t x55 = INT32_MIN;
int16_t x56 = 792;
int32_t x57 = -9711;
int8_t x62 = INT8_MAX;
volatile int32_t t15 = 921250;
static volatile int8_t x65 = INT8_MAX;
static int64_t t16 = 97915598LL;
int64_t x82 = 6134490764559577LL;
static volatile uint64_t x83 = UINT64_MAX;
static volatile uint64_t t20 = 110325LLU;
volatile int8_t x87 = -1;
int64_t t21 = 27766LL;
uint64_t x90 = UINT64_MAX;
static volatile uint8_t x93 = 15U;
int64_t x94 = INT64_MIN;
static volatile int64_t t23 = 68LL;
int16_t x99 = INT16_MAX;
int8_t x100 = INT8_MAX;
uint8_t x112 = 5U;
uint16_t x119 = 1U;
uint64_t x127 = UINT64_MAX;
volatile uint64_t t31 = 506544LLU;
int16_t x130 = -1;
uint32_t x131 = 1U;
static int16_t x132 = -1;
static uint8_t x134 = 3U;
int64_t x135 = 122LL;
int32_t x142 = INT32_MIN;
volatile int8_t x143 = 8;
static int32_t t35 = -15;
uint8_t x145 = UINT8_MAX;
int8_t x150 = INT8_MAX;
static int16_t x152 = INT16_MIN;
volatile int16_t x154 = INT16_MIN;
volatile int64_t x155 = -4279578952141408LL;
uint64_t x160 = UINT64_MAX;
int16_t x162 = 38;
volatile int32_t t40 = -89;
int16_t x165 = -1;
uint64_t t41 = 1937264LLU;
volatile uint16_t x185 = 15U;
uint8_t x188 = 12U;
int8_t x194 = INT8_MIN;
int8_t x195 = -3;
int16_t x197 = INT16_MAX;
int32_t x212 = -1;
int32_t x213 = INT32_MAX;
volatile int64_t x215 = -1546621135303940945LL;
uint16_t x225 = 4852U;
int8_t x234 = INT8_MIN;
int8_t x237 = -1;
int16_t x240 = -1;
int8_t x247 = INT8_MIN;
int8_t x253 = 23;
static volatile int64_t x256 = 2792008351345912LL;
static volatile int16_t x276 = -1;
int32_t t68 = -25784578;
uint32_t x281 = 572349U;
int64_t x282 = INT64_MAX;
static volatile int32_t x288 = INT32_MIN;
static int16_t x298 = -1;
int8_t x300 = INT8_MIN;
uint32_t t74 = 65U;
int16_t x305 = INT16_MIN;
uint32_t t75 = 5060503U;
int8_t x310 = INT8_MIN;
uint8_t x323 = UINT8_MAX;
uint64_t t79 = 9172249LLU;
volatile uint32_t x330 = UINT32_MAX;
uint8_t x331 = 4U;
uint64_t x332 = UINT64_MAX;
int32_t x336 = INT32_MIN;
static int8_t x337 = 1;
int64_t x339 = -18590LL;
int64_t x345 = -110080550154599LL;
volatile int64_t t84 = -8997867LL;
volatile uint64_t x358 = UINT64_MAX;
int16_t x372 = INT16_MIN;
int64_t x380 = INT64_MIN;
volatile uint64_t t93 = 32842204665LLU;
static uint8_t x395 = 30U;
volatile uint64_t x397 = 2210029277492097665LLU;
static int32_t x400 = INT32_MIN;


void f0(void) {
	static volatile int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -18779LL;

	t0 = ((x1^x2)&(x3%x4));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int8_t x7 = -3;
	volatile int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -3472994684365721158LL;

	t1 = ((x5^x6)&(x7%x8));

	if (t1 != 9223372036683193141LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = UINT8_MAX;
	uint16_t x12 = 13U;
	int32_t t2 = 35;

	t2 = ((x9^x10)&(x11%x12));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 40U;
	uint16_t x16 = 5620U;
	static volatile int64_t t3 = -239330312861093626LL;

	t3 = ((x13^x14)&(x15%x16));

	if (t3 != -41LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = INT8_MIN;
	static int64_t x19 = 25136879567969041LL;
	int16_t x20 = -1;
	int64_t t4 = -30128587117772179LL;

	t4 = ((x17^x18)&(x19%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int16_t x23 = INT16_MIN;
	volatile uint64_t x24 = 118092980538LLU;
	uint64_t t5 = 193617156429166150LLU;

	t5 = ((x21^x22)&(x23%x24));

	if (t5 != 19748LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int32_t x26 = -1;
	int64_t x27 = INT64_MAX;
	uint8_t x28 = UINT8_MAX;
	volatile int64_t t6 = -2414876407760188LL;

	t6 = ((x25^x26)&(x27%x28));

	if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static volatile int16_t x30 = INT16_MIN;
	int32_t x31 = 5806202;
	static int8_t x32 = 1;
	int32_t t7 = -896857;

	t7 = ((x29^x30)&(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	int16_t x34 = -236;
	int8_t x35 = 49;
	volatile int32_t t8 = -14;

	t8 = ((x33^x34)&(x35%x36));

	if (t8 != 16) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	volatile int32_t x38 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	volatile uint32_t t9 = 64902U;

	t9 = ((x37^x38)&(x39%x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int32_t x43 = INT32_MIN;
	static int64_t t10 = 419LL;

	t10 = ((x41^x42)&(x43%x44));

	if (t10 != -9223372036854775560LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 1;
	int64_t x46 = -1LL;
	uint16_t x47 = 2U;
	uint8_t x48 = 127U;
	volatile int64_t t11 = 47314615087059380LL;

	t11 = ((x45^x46)&(x47%x48));

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = 495410189LL;
	int8_t x52 = -1;
	int64_t t12 = -2666887136LL;

	t12 = ((x49^x50)&(x51%x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 0;
	volatile int64_t t13 = -42294773108401LL;

	t13 = ((x53^x54)&(x55%x56));

	if (t13 != 138796012342682912LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x58 = UINT16_MAX;
	static int64_t x59 = -7941034706LL;
	static int64_t x60 = INT64_MAX;
	static volatile int64_t t14 = -375756LL;

	t14 = ((x57^x58)&(x59%x60));

	if (t14 != -7941053138LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 0;
	int32_t x63 = INT32_MIN;
	int8_t x64 = -1;

	t15 = ((x61^x62)&(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 959LL;
	static uint32_t x67 = 0U;
	uint16_t x68 = 220U;

	t16 = ((x65^x66)&(x67%x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 51U;
	volatile int16_t x70 = INT16_MIN;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -18327;

	t17 = ((x69^x70)&(x71%x72));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = INT64_MAX;
	int64_t x75 = -459757LL;
	static int8_t x76 = -44;
	volatile uint64_t t18 = 2301742515001070LLU;

	t18 = ((x73^x74)&(x75%x76));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 25U;
	static int16_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile uint64_t t19 = 12511953777LLU;

	t19 = ((x77^x78)&(x79%x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 0U;
	static int64_t x84 = INT64_MAX;

	t20 = ((x81^x82)&(x83%x84));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int64_t x86 = -2LL;
	uint8_t x88 = 18U;

	t21 = ((x85^x86)&(x87%x88));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 3U;
	static uint32_t x91 = UINT32_MAX;
	uint32_t x92 = UINT32_MAX;
	static uint64_t t22 = 268481LLU;

	t22 = ((x89^x90)&(x91%x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x95 = -1LL;
	static volatile uint16_t x96 = 184U;

	t23 = ((x93^x94)&(x95%x96));

	if (t23 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -67195LL;
	uint8_t x98 = UINT8_MAX;
	int64_t t24 = -2965230382LL;

	t24 = ((x97^x98)&(x99%x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 75532LLU;
	int8_t x102 = -1;
	uint16_t x103 = 14641U;
	volatile uint8_t x104 = 3U;
	uint64_t t25 = 568431452878276934LLU;

	t25 = ((x101^x102)&(x103%x104));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = -10;
	int8_t x107 = INT8_MAX;
	int32_t x108 = -1;
	volatile uint32_t t26 = 1274279U;

	t26 = ((x105^x106)&(x107%x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 303599881121713LLU;
	int8_t x110 = INT8_MIN;
	int16_t x111 = 6671;
	static uint64_t t27 = 1132093803139LLU;

	t27 = ((x109^x110)&(x111%x112));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	volatile int32_t x114 = INT32_MIN;
	static uint8_t x115 = 2U;
	static volatile int16_t x116 = 5467;
	volatile int32_t t28 = 90;

	t28 = ((x113^x114)&(x115%x116));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -987;
	volatile uint8_t x118 = 0U;
	uint64_t x120 = 247LLU;
	uint64_t t29 = 40LLU;

	t29 = ((x117^x118)&(x119%x120));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = -176LL;
	int32_t x123 = 186;
	int64_t x124 = -12113248092552822LL;
	static volatile int64_t t30 = 3692712988225LL;

	t30 = ((x121^x122)&(x123%x124));

	if (t30 != 42LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 267105210645LLU;
	uint64_t x126 = UINT64_MAX;
	uint16_t x128 = UINT16_MAX;

	t31 = ((x125^x126)&(x127%x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	uint32_t t32 = 15719U;

	t32 = ((x129^x130)&(x131%x132));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = -9289;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t33 = 113846LL;

	t33 = ((x133^x134)&(x135%x136));

	if (t33 != 48LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 7349U;
	volatile int64_t x138 = -1LL;
	uint8_t x139 = 11U;
	volatile int64_t x140 = -1LL;
	int64_t t34 = -3367LL;

	t34 = ((x137^x138)&(x139%x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -601;
	int32_t x144 = -35;

	t35 = ((x141^x142)&(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x146 = UINT64_MAX;
	static volatile int32_t x147 = -3;
	int32_t x148 = -114165;
	volatile uint64_t t36 = 3145250223316588LLU;

	t36 = ((x145^x146)&(x147%x148));

	if (t36 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 1318;
	int64_t x151 = 4105356175756750LL;
	int64_t t37 = 72499982971118863LL;

	t37 = ((x149^x150)&(x151%x152));

	if (t37 != 1352LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	static int16_t x156 = -1;
	volatile int64_t t38 = -51LL;

	t38 = ((x153^x154)&(x155%x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 3LL;
	static uint8_t x158 = 2U;
	static int64_t x159 = -20LL;
	volatile uint64_t t39 = 1557365808996778248LLU;

	t39 = ((x157^x158)&(x159%x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -4;
	static int32_t x163 = INT32_MIN;
	int8_t x164 = -1;

	t40 = ((x161^x162)&(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MIN;
	int16_t x167 = -1;
	static volatile uint64_t x168 = 38588088LLU;

	t41 = ((x165^x166)&(x167%x168));

	if (t41 != 4159LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	volatile int64_t x170 = -1LL;
	int16_t x171 = INT16_MIN;
	static uint32_t x172 = UINT32_MAX;
	int64_t t42 = -2826397LL;

	t42 = ((x169^x170)&(x171%x172));

	if (t42 != 2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -5;
	int16_t x174 = INT16_MIN;
	int16_t x175 = -1;
	volatile uint16_t x176 = 6U;
	volatile int32_t t43 = -201513736;

	t43 = ((x173^x174)&(x175%x176));

	if (t43 != 32763) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = -1;
	static int64_t x179 = INT64_MIN;
	int8_t x180 = 1;
	volatile int64_t t44 = 3632442263986284LL;

	t44 = ((x177^x178)&(x179%x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x186 = 2U;
	int16_t x187 = INT16_MIN;
	static int32_t t45 = -18700;

	t45 = ((x185^x186)&(x187%x188));

	if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	static uint32_t x191 = UINT32_MAX;
	uint8_t x192 = 12U;
	static volatile uint32_t t46 = 6115531U;

	t46 = ((x189^x190)&(x191%x192));

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = 1269714LL;
	uint64_t x196 = 126850044434855879LLU;
	volatile uint64_t t47 = 0LLU;

	t47 = ((x193^x194)&(x195%x196));

	if (t47 != 53487630654382146LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x198 = INT64_MIN;
	static int16_t x199 = INT16_MIN;
	uint64_t x200 = 5LLU;
	static uint64_t t48 = 308788491572LLU;

	t48 = ((x197^x198)&(x199%x200));

	if (t48 != 3LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = 5593560214629397LL;
	static volatile int32_t x202 = INT32_MAX;
	static volatile int8_t x203 = INT8_MIN;
	int64_t x204 = -1LL;
	volatile int64_t t49 = 30662626LL;

	t49 = ((x201^x202)&(x203%x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MAX;
	volatile int32_t x206 = INT32_MIN;
	volatile uint64_t x207 = 115LLU;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t50 = 13196201158004LLU;

	t50 = ((x205^x206)&(x207%x208));

	if (t50 != 115LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MAX;
	int16_t x210 = INT16_MIN;
	static int64_t x211 = -1LL;
	int64_t t51 = 345414087829663LL;

	t51 = ((x209^x210)&(x211%x212));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x214 = -5;
	uint8_t x216 = 1U;
	volatile int64_t t52 = -7421LL;

	t52 = ((x213^x214)&(x215%x216));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MAX;
	int16_t x218 = 1;
	volatile uint64_t x219 = 1952302247786LLU;
	uint64_t x220 = 9567620424568004LLU;
	uint64_t t53 = 1337LLU;

	t53 = ((x217^x218)&(x219%x220));

	if (t53 != 12138LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x221 = 3948U;
	static uint32_t x222 = 54030067U;
	int16_t x223 = -1;
	static uint64_t x224 = 6504010753022LLU;
	uint64_t t54 = 847150416378830227LLU;

	t54 = ((x221^x222)&(x223%x224));

	if (t54 != 51904899LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x226 = 31U;
	int64_t x227 = INT64_MAX;
	static int32_t x228 = INT32_MAX;
	volatile int64_t t55 = -799357711229LL;

	t55 = ((x225^x226)&(x227%x228));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = UINT64_MAX;
	volatile int32_t x230 = -381163;
	uint8_t x231 = UINT8_MAX;
	int8_t x232 = INT8_MIN;
	static volatile uint64_t t56 = 1LLU;

	t56 = ((x229^x230)&(x231%x232));

	if (t56 != 106LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x233 = -1500;
	volatile uint8_t x235 = 15U;
	volatile int8_t x236 = -1;
	volatile int32_t t57 = 118;

	t57 = ((x233^x234)&(x235%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x238 = UINT8_MAX;
	uint16_t x239 = 107U;
	int32_t t58 = 106;

	t58 = ((x237^x238)&(x239%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MAX;
	static int16_t x242 = -1;
	volatile int32_t x243 = -1;
	volatile uint8_t x244 = 4U;
	volatile int32_t t59 = 0;

	t59 = ((x241^x242)&(x243%x244));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = -1;
	uint64_t x246 = 11LLU;
	uint32_t x248 = UINT32_MAX;
	volatile uint64_t t60 = 4147914130414581323LLU;

	t60 = ((x245^x246)&(x247%x248));

	if (t60 != 4294967168LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -15;
	volatile int32_t x250 = INT32_MIN;
	int32_t x251 = -148;
	static volatile int32_t x252 = 36252359;
	volatile int32_t t61 = 221;

	t61 = ((x249^x250)&(x251%x252));

	if (t61 != 2147483488) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = INT64_MIN;
	volatile int64_t t62 = 2845123565516020LL;

	t62 = ((x253^x254)&(x255%x256));

	if (t62 != 1530688456LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -56;
	uint16_t x259 = 392U;
	static volatile int64_t x260 = 1488322720741LL;
	volatile int64_t t63 = 3905549LL;

	t63 = ((x257^x258)&(x259%x260));

	if (t63 != 392LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = 27623089803318687LLU;
	static uint8_t x263 = 0U;
	int32_t x264 = 16368;
	uint64_t t64 = 5894LLU;

	t64 = ((x261^x262)&(x263%x264));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x265 = 606U;
	int16_t x266 = -110;
	volatile uint16_t x267 = 7085U;
	volatile int8_t x268 = INT8_MIN;
	static volatile int32_t t65 = 6591;

	t65 = ((x265^x266)&(x267%x268));

	if (t65 != 12) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x269 = INT8_MIN;
	volatile uint64_t x270 = 2816LLU;
	static volatile int64_t x271 = INT64_MIN;
	volatile int64_t x272 = 168LL;
	uint64_t t66 = 9704LLU;

	t66 = ((x269^x270)&(x271%x272));

	if (t66 != 18446744073709548672LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x273 = -1;
	int64_t x274 = 247LL;
	volatile uint16_t x275 = 44U;
	int64_t t67 = 672LL;

	t67 = ((x273^x274)&(x275%x276));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MAX;
	static int16_t x278 = -1146;
	int8_t x279 = INT8_MAX;
	uint8_t x280 = UINT8_MAX;

	t68 = ((x277^x278)&(x279%x280));

	if (t68 != 121) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x283 = 18363689548889LL;
	int32_t x284 = INT32_MAX;
	int64_t t69 = -1118128LL;

	t69 = ((x281^x282)&(x283%x284));

	if (t69 != 556876864LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MAX;
	int8_t x286 = 1;
	int16_t x287 = 0;
	int32_t t70 = 0;

	t70 = ((x285^x286)&(x287%x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MAX;
	int8_t x291 = 3;
	int64_t x292 = 12334166LL;
	int64_t t71 = 7403756794LL;

	t71 = ((x289^x290)&(x291%x292));

	if (t71 != 3LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = -1;
	static int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MIN;
	static int32_t x296 = INT32_MIN;
	int64_t t72 = INT64_MIN;

	t72 = ((x293^x294)&(x295%x296));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x297 = INT64_MAX;
	uint32_t x299 = 675095U;
	static int64_t t73 = -2LL;

	t73 = ((x297^x298)&(x299%x300));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x301 = UINT32_MAX;
	uint16_t x302 = 319U;
	uint32_t x303 = 633376908U;
	uint32_t x304 = 2760U;

	t74 = ((x301^x302)&(x303%x304));

	if (t74 != 1024U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x306 = -21;
	static uint32_t x307 = 48U;
	int8_t x308 = INT8_MIN;

	t75 = ((x305^x306)&(x307%x308));

	if (t75 != 32U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = 9U;
	int16_t x311 = -353;
	volatile uint8_t x312 = 3U;
	volatile int32_t t76 = -35249446;

	t76 = ((x309^x310)&(x311%x312));

	if (t76 != -120) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = UINT8_MAX;
	uint8_t x314 = 3U;
	int32_t x315 = INT32_MIN;
	static uint16_t x316 = UINT16_MAX;
	int32_t t77 = -1;

	t77 = ((x313^x314)&(x315%x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x317 = 1036661437U;
	uint16_t x318 = 23097U;
	int8_t x319 = -2;
	static int32_t x320 = -532127195;
	uint32_t t78 = 847095U;

	t78 = ((x317^x318)&(x319%x320));

	if (t78 != 1036675204U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x321 = 4308299526168409114LLU;
	volatile uint64_t x322 = 30052601286131LLU;
	static int64_t x324 = -1LL;

	t79 = ((x321^x322)&(x323%x324));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = -575121LL;
	static uint16_t x326 = UINT16_MAX;
	int8_t x327 = 16;
	uint64_t x328 = 750LLU;
	volatile uint64_t t80 = 35470126277LLU;

	t80 = ((x325^x326)&(x327%x328));

	if (t80 != 16LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = INT8_MIN;
	static volatile uint64_t t81 = 9630976356LLU;

	t81 = ((x329^x330)&(x331%x332));

	if (t81 != 4LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x333 = INT8_MAX;
	uint32_t x334 = UINT32_MAX;
	int64_t x335 = INT64_MIN;
	static volatile int64_t t82 = -137517201LL;

	t82 = ((x333^x334)&(x335%x336));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x338 = INT8_MAX;
	int64_t x340 = -1LL;
	static int64_t t83 = 3278078399522524LL;

	t83 = ((x337^x338)&(x339%x340));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x346 = UINT8_MAX;
	static int64_t x347 = -1LL;
	static int32_t x348 = 11118431;

	t84 = ((x345^x346)&(x347%x348));

	if (t84 != -110080550154650LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = 3U;
	int64_t x350 = 14136LL;
	uint8_t x351 = UINT8_MAX;
	uint32_t x352 = 1634583345U;
	volatile int64_t t85 = -26LL;

	t85 = ((x349^x350)&(x351%x352));

	if (t85 != 59LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = UINT32_MAX;
	int32_t x354 = -2054946;
	int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	static volatile uint32_t t86 = 741480U;

	t86 = ((x353^x354)&(x355%x356));

	if (t86 != 23329U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MAX;
	uint16_t x359 = 479U;
	int32_t x360 = 13;
	uint64_t t87 = 14601357397LLU;

	t87 = ((x357^x358)&(x359%x360));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = 41162;
	static int16_t x362 = 43;
	uint32_t x363 = 130965960U;
	uint8_t x364 = UINT8_MAX;
	uint32_t t88 = 5213U;

	t88 = ((x361^x362)&(x363%x364));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = -1;
	int8_t x366 = INT8_MIN;
	volatile int32_t x367 = INT32_MIN;
	int32_t x368 = -1;
	int32_t t89 = 5;

	t89 = ((x365^x366)&(x367%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MIN;
	volatile int32_t t90 = 228660817;

	t90 = ((x369^x370)&(x371%x372));

	if (t90 != 2147483520) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = 71487585U;
	uint64_t x374 = 4264261102486684LLU;
	int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t91 = 1183372245961LLU;

	t91 = ((x373^x374)&(x375%x376));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x377 = 0U;
	int32_t x378 = -15477608;
	uint32_t x379 = UINT32_MAX;
	static int64_t t92 = -260635LL;

	t92 = ((x377^x378)&(x379%x380));

	if (t92 != 4279489688LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = 15;
	static int16_t x382 = 993;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;

	t93 = ((x381^x382)&(x383%x384));

	if (t93 != 1006LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = INT64_MAX;
	static uint16_t x386 = 14776U;
	uint32_t x387 = 313945U;
	uint32_t x388 = UINT32_MAX;
	static int64_t t94 = -501646LL;

	t94 = ((x385^x386)&(x387%x388));

	if (t94 != 311873LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x389 = INT32_MIN;
	static int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	int64_t x392 = 13LL;
	static volatile int64_t t95 = -20LL;

	t95 = ((x389^x390)&(x391%x392));

	if (t95 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MAX;
	volatile int32_t x394 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t96 = -7249;

	t96 = ((x393^x394)&(x395%x396));

	if (t96 != 30) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = -1;
	int8_t x399 = -1;
	uint64_t t97 = 222LLU;

	t97 = ((x397^x398)&(x399%x400));

	if (t97 != 16236714796217453950LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MAX;
	static int8_t x402 = -1;
	int64_t x403 = -364924024523585069LL;
	static uint64_t x404 = 3LLU;
	static uint64_t t98 = 95LLU;

	t98 = ((x401^x402)&(x403%x404));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = -1;
	volatile int32_t x406 = 1017602101;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = INT16_MIN;
	static int32_t t99 = -231336;

	t99 = ((x405^x406)&(x407%x408));

	if (t99 != 8138) { NG(); } else { ; }
	
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

