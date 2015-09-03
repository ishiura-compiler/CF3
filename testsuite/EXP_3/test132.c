#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MIN;
volatile uint32_t x15 = 2587U;
int64_t t5 = -1LL;
static uint64_t t6 = 103468414117794LLU;
int32_t x31 = INT32_MIN;
volatile int64_t t7 = -64122256726949LL;
int16_t x40 = -1;
uint16_t x58 = 10032U;
int8_t x61 = -7;
int16_t x65 = 2;
int8_t x66 = -2;
uint64_t x67 = 11182448304961429LLU;
static uint16_t x71 = 567U;
volatile uint32_t x81 = 54U;
int32_t x82 = -1;
static volatile int16_t x87 = INT16_MAX;
int8_t x104 = INT8_MAX;
int64_t x112 = 3234LL;
volatile int16_t x121 = 32;
int64_t x124 = INT64_MIN;
int64_t t26 = 113902470375313LL;
uint32_t x125 = UINT32_MAX;
volatile int64_t x126 = -6LL;
int64_t x130 = INT64_MIN;
uint64_t t30 = 382336474LLU;
uint64_t t32 = 59258470LLU;
int8_t x150 = 40;
uint16_t x163 = 14778U;
uint16_t x189 = 31054U;
int32_t x195 = -1;
static uint64_t x202 = 13478961739LLU;
volatile uint8_t x204 = 0U;
static uint64_t t43 = 634847LLU;
static uint64_t x208 = 3798LLU;
volatile uint32_t x210 = 1491U;
uint64_t x214 = 4616299781LLU;
volatile uint8_t x216 = 0U;
uint64_t t46 = 7245031676310810LLU;
volatile int32_t x217 = INT32_MIN;
int64_t x218 = 1959935023325662LL;
int64_t x234 = 267443811179LL;
static volatile int64_t t50 = -30357106128994937LL;
static uint8_t x243 = UINT8_MAX;
int8_t x258 = INT8_MIN;
volatile uint64_t t54 = 17LLU;
uint16_t x270 = UINT16_MAX;
volatile int8_t x278 = -1;
static int64_t x285 = INT64_MIN;
volatile uint32_t x286 = 430873U;
int8_t x290 = -5;
uint64_t x297 = 371552883835LLU;
int8_t x298 = INT8_MIN;
static uint16_t x307 = UINT16_MAX;
int16_t x312 = INT16_MIN;
int16_t x317 = -1;
int32_t x320 = INT32_MAX;
volatile uint32_t t66 = 1647707U;
volatile int32_t x322 = INT32_MIN;
int64_t t68 = 9013477LL;
volatile int8_t x330 = INT8_MIN;
static uint32_t x332 = UINT32_MAX;
int32_t x338 = INT32_MIN;
int64_t x341 = INT64_MIN;
static int64_t x353 = INT64_MAX;
volatile uint16_t x357 = 22883U;
int16_t x362 = INT16_MIN;
uint32_t x397 = 40U;
int64_t x401 = 558LL;
static uint64_t x403 = 213719LLU;
static uint8_t x414 = 75U;
uint32_t x415 = UINT32_MAX;
static uint8_t x416 = 9U;
uint32_t x423 = 205336891U;
int32_t x425 = -106;
volatile int32_t t87 = 39549;
uint8_t x431 = 47U;
int8_t x432 = INT8_MAX;
volatile int32_t t88 = -2243770;
uint32_t x433 = UINT32_MAX;
int64_t x434 = INT64_MAX;
int8_t x437 = INT8_MAX;
volatile uint64_t x446 = 21267730LLU;
volatile uint64_t t92 = 1750548LLU;
uint16_t x456 = 866U;
volatile uint32_t t94 = 3U;
int64_t x459 = -47063584873264508LL;
uint32_t x478 = UINT32_MAX;
volatile int16_t x479 = -929;
volatile uint16_t x484 = 6U;
static uint8_t x486 = 4U;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	volatile int64_t x2 = INT64_MIN;
	int32_t x4 = INT32_MAX;
	int64_t t0 = 60843046LL;

	t0 = ((x1&x2)-(x3+x4));

	if (t0 != -2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -3;
	static int32_t x6 = 540;
	static volatile int8_t x7 = -14;
	int64_t x8 = 3990520LL;
	volatile int64_t t1 = 5287902LL;

	t1 = ((x5&x6)-(x7+x8));

	if (t1 != -3989966LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int8_t x10 = -1;
	int64_t x11 = 1LL;
	int32_t x12 = INT32_MAX;
	int64_t t2 = 108554LL;

	t2 = ((x9&x10)-(x11+x12));

	if (t2 != -4294967296LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 77U;
	static int8_t x14 = -54;
	uint8_t x16 = UINT8_MAX;
	uint32_t t3 = 24772U;

	t3 = ((x13&x14)-(x15+x16));

	if (t3 != 4294964526U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 4457;
	int32_t x18 = -12919519;
	uint8_t x19 = UINT8_MAX;
	static volatile uint16_t x20 = 17U;
	int32_t t4 = -79;

	t4 = ((x17&x18)-(x19+x20));

	if (t4 != 4113) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;

	t5 = ((x21&x22)-(x23+x24));

	if (t5 != 9223372036854710528LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 76141LLU;
	uint8_t x26 = UINT8_MAX;
	static volatile int32_t x27 = 874504566;
	int16_t x28 = INT16_MIN;

	t6 = ((x25&x26)-(x27+x28));

	if (t6 != 18446744072835079927LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	int64_t x30 = 28064146LL;
	uint32_t x32 = UINT32_MAX;

	t7 = ((x29&x30)-(x31+x32));

	if (t7 != -2119419501LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x37 = 13U;
	volatile int16_t x38 = INT16_MIN;
	int16_t x39 = -1;
	volatile int32_t t8 = -1785;

	t8 = ((x37&x38)-(x39+x40));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 3532381U;
	uint8_t x46 = 0U;
	uint16_t x47 = UINT16_MAX;
	volatile int64_t x48 = INT64_MIN;
	int64_t t9 = -113064829857089LL;

	t9 = ((x45&x46)-(x47+x48));

	if (t9 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	static int8_t x50 = INT8_MAX;
	uint64_t x51 = 3LLU;
	uint8_t x52 = 8U;
	uint64_t t10 = 1397LLU;

	t10 = ((x49&x50)-(x51+x52));

	if (t10 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x53 = UINT64_MAX;
	int64_t x54 = INT64_MIN;
	int16_t x55 = INT16_MAX;
	int64_t x56 = -1LL;
	volatile uint64_t t11 = 1477724649844563LLU;

	t11 = ((x53&x54)-(x55+x56));

	if (t11 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 117937043U;
	static volatile uint16_t x59 = UINT16_MAX;
	volatile int8_t x60 = INT8_MAX;
	static volatile uint32_t t12 = 564609U;

	t12 = ((x57&x58)-(x59+x60));

	if (t12 != 4294902418U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x62 = UINT64_MAX;
	static uint8_t x63 = 78U;
	int32_t x64 = 7;
	uint64_t t13 = 129682340251777LLU;

	t13 = ((x61&x62)-(x63+x64));

	if (t13 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x68 = INT16_MIN;
	static uint64_t t14 = 229843297787LLU;

	t14 = ((x65&x66)-(x67+x68));

	if (t14 != 18435561625404622957LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	static uint32_t x70 = 7765U;
	int64_t x72 = 2676LL;
	int64_t t15 = 222454610077LL;

	t15 = ((x69&x70)-(x71+x72));

	if (t15 != 4522LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	static uint64_t x74 = 211453LLU;
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 2782U;
	volatile uint64_t t16 = 8848847476449LLU;

	t16 = ((x73&x74)-(x75+x76));

	if (t16 != 29986LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	volatile uint16_t x78 = 457U;
	volatile uint16_t x79 = 3U;
	uint64_t x80 = 306778116787LLU;
	static uint64_t t17 = 2199894968727LLU;

	t17 = ((x77&x78)-(x79+x80));

	if (t17 != 18446743766931435283LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x83 = 1863U;
	static int16_t x84 = INT16_MAX;
	volatile uint32_t t18 = 4970279U;

	t18 = ((x81&x82)-(x83+x84));

	if (t18 != 4294932720U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 8;
	static int64_t x86 = INT64_MIN;
	uint64_t x88 = 12573651067887LLU;
	static volatile uint64_t t19 = 146164806974LLU;

	t19 = ((x85&x86)-(x87+x88));

	if (t19 != 18446731500058450962LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 1006LLU;
	int32_t x94 = INT32_MAX;
	int16_t x95 = 1;
	static int8_t x96 = -8;
	uint64_t t20 = 14908541849LLU;

	t20 = ((x93&x94)-(x95+x96));

	if (t20 != 1013LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = -1;
	static uint64_t x99 = 28415116911379893LLU;
	int64_t x100 = INT64_MAX;
	volatile uint64_t t21 = 66724217LLU;

	t21 = ((x97&x98)-(x99+x100));

	if (t21 != 18418328956798171723LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = INT16_MIN;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = -1LL;
	int64_t t22 = -2485073404540766584LL;

	t22 = ((x101&x102)-(x103+x104));

	if (t22 != -126LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	uint16_t x106 = 7131U;
	static int8_t x107 = INT8_MIN;
	volatile int64_t x108 = -1LL;
	int64_t t23 = -13764345LL;

	t23 = ((x105&x106)-(x107+x108));

	if (t23 != 7260LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x109 = INT8_MIN;
	uint8_t x110 = 6U;
	uint64_t x111 = 1361096LLU;
	uint64_t t24 = 457LLU;

	t24 = ((x109&x110)-(x111+x112));

	if (t24 != 18446744073708187286LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 0U;
	volatile int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	uint8_t x116 = 13U;
	int32_t t25 = 221;

	t25 = ((x113&x114)-(x115+x116));

	if (t25 != -32780) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x122 = INT32_MIN;
	static int32_t x123 = 1578;

	t26 = ((x121&x122)-(x123+x124));

	if (t26 != 9223372036854774230LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x127 = -1;
	static int32_t x128 = -1;
	int64_t t27 = -156481LL;

	t27 = ((x125&x126)-(x127+x128));

	if (t27 != 4294967292LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MAX;
	uint8_t x131 = 7U;
	int64_t x132 = INT64_MIN;
	int64_t t28 = 373300024LL;

	t28 = ((x129&x130)-(x131+x132));

	if (t28 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = 105240U;
	int32_t x135 = 2;
	uint64_t x136 = 2981863544LLU;
	volatile uint64_t t29 = 19885936LLU;

	t29 = ((x133&x134)-(x135+x136));

	if (t29 != 18446744070727688070LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = UINT64_MAX;
	volatile uint32_t x138 = 20775062U;
	static volatile uint16_t x139 = 15881U;
	int32_t x140 = INT32_MIN;

	t30 = ((x137&x138)-(x139+x140));

	if (t30 != 2168242829LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = 135;
	int16_t x142 = -1;
	static int16_t x143 = -65;
	uint8_t x144 = 21U;
	volatile int32_t t31 = -44;

	t31 = ((x141&x142)-(x143+x144));

	if (t31 != 179) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 11U;
	volatile int8_t x146 = INT8_MIN;
	volatile int32_t x147 = INT32_MIN;
	uint64_t x148 = UINT64_MAX;

	t32 = ((x145&x146)-(x147+x148));

	if (t32 != 2147483649LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = 5101174568LL;
	uint32_t x151 = UINT32_MAX;
	static int16_t x152 = -112;
	volatile int64_t t33 = 111LL;

	t33 = ((x149&x150)-(x151+x152));

	if (t33 != -4294967143LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = INT16_MIN;
	static int16_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	volatile int64_t x156 = 1107053563298821LL;
	volatile uint64_t t34 = 226LLU;

	t34 = ((x153&x154)-(x155+x156));

	if (t34 != 18445637020146220028LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x157 = INT32_MIN;
	int32_t x158 = 0;
	static int16_t x159 = -12;
	int16_t x160 = INT16_MAX;
	static int32_t t35 = -225285;

	t35 = ((x157&x158)-(x159+x160));

	if (t35 != -32755) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x161 = 13U;
	static int16_t x162 = -172;
	volatile int8_t x164 = -62;
	volatile int32_t t36 = -53700;

	t36 = ((x161&x162)-(x163+x164));

	if (t36 != -14712) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x173 = 228;
	int32_t x174 = -459;
	uint16_t x175 = 2033U;
	static int16_t x176 = INT16_MIN;
	int32_t t37 = -447717182;

	t37 = ((x173&x174)-(x175+x176));

	if (t37 != 30771) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x177 = 58U;
	static int32_t x178 = INT32_MIN;
	uint32_t x179 = 1U;
	int16_t x180 = INT16_MAX;
	uint32_t t38 = 1856842727U;

	t38 = ((x177&x178)-(x179+x180));

	if (t38 != 4294934528U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = UINT32_MAX;
	static int64_t x182 = -9483005436LL;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = 1182U;
	static int64_t t39 = 4060192206360757114LL;

	t39 = ((x181&x182)-(x183+x184));

	if (t39 != 3401928038LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x190 = -1;
	int32_t x191 = INT32_MIN;
	uint32_t x192 = 8548658U;
	uint32_t t40 = 925U;

	t40 = ((x189&x190)-(x191+x192));

	if (t40 != 2138966044U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x193 = 168596084U;
	int64_t x194 = INT64_MIN;
	int64_t x196 = -1LL;
	int64_t t41 = 592976232490LL;

	t41 = ((x193&x194)-(x195+x196));

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = 1;
	volatile int32_t x198 = 3;
	volatile int64_t x199 = INT64_MIN;
	int64_t x200 = 299068827LL;
	int64_t t42 = 1492LL;

	t42 = ((x197&x198)-(x199+x200));

	if (t42 != 9223372036555706982LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x201 = INT32_MAX;
	uint32_t x203 = 5U;

	t43 = ((x201&x202)-(x203+x204));

	if (t43 != 594059846LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = INT64_MAX;
	int64_t x206 = -1LL;
	int16_t x207 = INT16_MAX;
	static uint64_t t44 = 4554471286450384LLU;

	t44 = ((x205&x206)-(x207+x208));

	if (t44 != 9223372036854739242LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x209 = 17U;
	static int8_t x211 = -1;
	volatile int8_t x212 = -1;
	uint32_t t45 = 189U;

	t45 = ((x209&x210)-(x211+x212));

	if (t45 != 19U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = -27906LL;
	int64_t x215 = -1LL;

	t46 = ((x213&x214)-(x215+x216));

	if (t46 != 4616290309LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x219 = INT32_MIN;
	uint8_t x220 = 20U;
	int64_t t47 = -14047LL;

	t47 = ((x217&x218)-(x219+x220));

	if (t47 != 1959935311085548LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = 29928LL;
	volatile uint32_t x226 = 17U;
	uint64_t x227 = UINT64_MAX;
	uint64_t x228 = 10379381LLU;
	volatile uint64_t t48 = 116175665459584LLU;

	t48 = ((x225&x226)-(x227+x228));

	if (t48 != 18446744073699172236LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	volatile int16_t x231 = 288;
	int32_t x232 = -81;
	uint32_t t49 = 14U;

	t49 = ((x229&x230)-(x231+x232));

	if (t49 != 2147483441U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = -1;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = -1LL;

	t50 = ((x233&x234)-(x235+x236));

	if (t50 != 267443745645LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x241 = 39U;
	int32_t x242 = INT32_MIN;
	uint16_t x244 = 4U;
	static int32_t t51 = 10023315;

	t51 = ((x241&x242)-(x243+x244));

	if (t51 != -259) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = -1;
	uint32_t x250 = 426U;
	volatile int8_t x251 = -1;
	int32_t x252 = -32216790;
	static volatile uint32_t t52 = 25827U;

	t52 = ((x249&x250)-(x251+x252));

	if (t52 != 32217217U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MAX;
	uint32_t x255 = 50239422U;
	uint64_t x256 = 63466444183224781LLU;
	uint64_t t53 = 343545879428245510LLU;

	t53 = ((x253&x254)-(x255+x256));

	if (t53 != 18383277629476120053LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = INT32_MAX;
	uint16_t x259 = 5230U;
	volatile uint64_t x260 = 28173LLU;

	t54 = ((x257&x258)-(x259+x260));

	if (t54 != 2147450117LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = -4062;
	int64_t x266 = INT64_MAX;
	uint64_t x267 = 581539LLU;
	static volatile uint32_t x268 = 15090U;
	volatile uint64_t t55 = 2043581756841LLU;

	t55 = ((x265&x266)-(x267+x268));

	if (t55 != 9223372036854175117LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = -1;
	int64_t x271 = -35955473123709180LL;
	uint16_t x272 = 7U;
	static int64_t t56 = -1210464708762619LL;

	t56 = ((x269&x270)-(x271+x272));

	if (t56 != 35955473123774708LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x277 = 2;
	static int32_t x279 = -5270;
	uint16_t x280 = UINT16_MAX;
	int32_t t57 = -12732415;

	t57 = ((x277&x278)-(x279+x280));

	if (t57 != -60263) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x281 = 40745LLU;
	volatile int16_t x282 = INT16_MIN;
	volatile int16_t x283 = 0;
	uint8_t x284 = UINT8_MAX;
	static volatile uint64_t t58 = 22575578272872LLU;

	t58 = ((x281&x282)-(x283+x284));

	if (t58 != 32513LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x287 = 2956U;
	volatile uint64_t x288 = 4747933074620247LLU;
	static uint64_t t59 = 2731880LLU;

	t59 = ((x285&x286)-(x287+x288));

	if (t59 != 18441996140634928413LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x289 = 13115LL;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t60 = 109LLU;

	t60 = ((x289&x290)-(x291+x292));

	if (t60 != 2147496764LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = INT8_MIN;
	static uint64_t x294 = 52208780LLU;
	int64_t x295 = -1LL;
	uint16_t x296 = 13467U;
	static volatile uint64_t t61 = 2543607026LLU;

	t61 = ((x293&x294)-(x295+x296));

	if (t61 != 52195302LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x299 = 13U;
	int16_t x300 = INT16_MIN;
	static uint64_t t62 = 1LLU;

	t62 = ((x297&x298)-(x299+x300));

	if (t62 != 371552916467LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = 1;
	volatile int32_t x306 = -218353935;
	int16_t x308 = -1;
	volatile int32_t t63 = 317217;

	t63 = ((x305&x306)-(x307+x308));

	if (t63 != -65533) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = -1LL;
	volatile int8_t x310 = -54;
	int32_t x311 = INT32_MAX;
	int64_t t64 = 12LL;

	t64 = ((x309&x310)-(x311+x312));

	if (t64 != -2147450933LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = -174190165;
	volatile uint8_t x315 = UINT8_MAX;
	int16_t x316 = INT16_MIN;
	static int32_t t65 = -344260;

	t65 = ((x313&x314)-(x315+x316));

	if (t65 != -174157695) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x318 = INT16_MAX;
	volatile uint32_t x319 = 1520U;

	t66 = ((x317&x318)-(x319+x320));

	if (t66 != 2147514896U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = 41U;
	int64_t x323 = 4232LL;
	int32_t x324 = INT32_MIN;
	static int64_t t67 = -20374126820649LL;

	t67 = ((x321&x322)-(x323+x324));

	if (t67 != 2147479416LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x325 = UINT16_MAX;
	static int8_t x326 = -1;
	int8_t x327 = -32;
	static volatile int64_t x328 = -1LL;

	t68 = ((x325&x326)-(x327+x328));

	if (t68 != 65568LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = INT64_MAX;
	int32_t x331 = INT32_MAX;
	volatile int64_t t69 = 870467943356LL;

	t69 = ((x329&x330)-(x331+x332));

	if (t69 != 9223372034707292034LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = INT32_MIN;
	static int32_t x339 = INT32_MIN;
	static int32_t x340 = 622;
	int32_t t70 = -1896;

	t70 = ((x337&x338)-(x339+x340));

	if (t70 != -622) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x342 = 1U;
	int64_t x343 = INT64_MAX;
	int64_t x344 = INT64_MIN;
	int64_t t71 = -14LL;

	t71 = ((x341&x342)-(x343+x344));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x345 = INT32_MIN;
	int64_t x346 = -1LL;
	int16_t x347 = -1;
	int8_t x348 = INT8_MIN;
	volatile int64_t t72 = 30152530272344LL;

	t72 = ((x345&x346)-(x347+x348));

	if (t72 != -2147483519LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x354 = INT8_MIN;
	int16_t x355 = 1;
	static int16_t x356 = INT16_MAX;
	volatile int64_t t73 = 355994464760LL;

	t73 = ((x353&x354)-(x355+x356));

	if (t73 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x358 = INT16_MIN;
	static uint8_t x359 = 111U;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t74 = 57345U;

	t74 = ((x357&x358)-(x359+x360));

	if (t74 != 4294967186U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x361 = INT64_MAX;
	int16_t x363 = 1944;
	uint32_t x364 = 0U;
	volatile int64_t t75 = 1041218520680486LL;

	t75 = ((x361&x362)-(x363+x364));

	if (t75 != 9223372036854741096LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x365 = -1LL;
	int16_t x366 = 47;
	uint32_t x367 = 86U;
	int16_t x368 = 5913;
	volatile int64_t t76 = 24638LL;

	t76 = ((x365&x366)-(x367+x368));

	if (t76 != -5952LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x369 = -3;
	int64_t x370 = -1LL;
	volatile int8_t x371 = INT8_MAX;
	volatile int8_t x372 = INT8_MAX;
	int64_t t77 = 9478842014955708LL;

	t77 = ((x369&x370)-(x371+x372));

	if (t77 != -257LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x373 = 29U;
	uint32_t x374 = 183862482U;
	static int16_t x375 = INT16_MAX;
	uint32_t x376 = 156931169U;
	volatile uint32_t t78 = 3468U;

	t78 = ((x373&x374)-(x375+x376));

	if (t78 != 4138003376U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x389 = INT32_MAX;
	int32_t x390 = INT32_MIN;
	int64_t x391 = 25LL;
	int64_t x392 = INT64_MIN;
	volatile int64_t t79 = 428787975584642LL;

	t79 = ((x389&x390)-(x391+x392));

	if (t79 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x393 = 63423U;
	static int8_t x394 = INT8_MAX;
	int64_t x395 = -1LL;
	int16_t x396 = INT16_MIN;
	int64_t t80 = -188LL;

	t80 = ((x393&x394)-(x395+x396));

	if (t80 != 32832LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x398 = -2;
	volatile int16_t x399 = -1;
	uint8_t x400 = 5U;
	volatile uint32_t t81 = 5U;

	t81 = ((x397&x398)-(x399+x400));

	if (t81 != 36U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x402 = 3483617LL;
	uint8_t x404 = UINT8_MAX;
	static volatile uint64_t t82 = 1857LLU;

	t82 = ((x401&x402)-(x403+x404));

	if (t82 != 18446744073709338186LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x405 = 424;
	uint64_t x406 = 17130119607294LLU;
	uint64_t x407 = 48873921774718LLU;
	int64_t x408 = INT64_MAX;
	uint64_t t83 = 10994LLU;

	t83 = ((x405&x406)-(x407+x408));

	if (t83 != 9223323162933001515LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x413 = -44;
	uint32_t t84 = 617U;

	t84 = ((x413&x414)-(x415+x416));

	if (t84 != 56U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x417 = 2;
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = INT32_MAX;
	int8_t x420 = -1;
	uint32_t t85 = 25897U;

	t85 = ((x417&x418)-(x419+x420));

	if (t85 != 2147483652U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x421 = -1LL;
	uint64_t x422 = UINT64_MAX;
	uint32_t x424 = 151120U;
	static uint64_t t86 = 291370743690LLU;

	t86 = ((x421&x422)-(x423+x424));

	if (t86 != 18446744073504063604LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x426 = INT16_MAX;
	int16_t x427 = -1;
	int16_t x428 = 1816;

	t87 = ((x425&x426)-(x427+x428));

	if (t87 != 30847) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x429 = 13U;
	int16_t x430 = INT16_MAX;

	t88 = ((x429&x430)-(x431+x432));

	if (t88 != -161) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x435 = UINT16_MAX;
	volatile uint32_t x436 = UINT32_MAX;
	volatile int64_t t89 = 3111567177200LL;

	t89 = ((x433&x434)-(x435+x436));

	if (t89 != 4294901761LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x438 = INT64_MIN;
	volatile uint64_t x439 = UINT64_MAX;
	static int16_t x440 = 2;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x437&x438)-(x439+x440));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x441 = 105328365LLU;
	volatile uint64_t x442 = 1925LLU;
	int64_t x443 = -1LL;
	int16_t x444 = INT16_MAX;
	volatile uint64_t t91 = 1072564957LLU;

	t91 = ((x441&x442)-(x443+x444));

	if (t91 != 18446744073709520519LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x445 = UINT32_MAX;
	static int8_t x447 = 23;
	static uint64_t x448 = 784963345LLU;

	t92 = ((x445&x446)-(x447+x448));

	if (t92 != 18446744072945855978LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MIN;
	volatile int64_t x451 = -67093659550527LL;
	int8_t x452 = INT8_MAX;
	int64_t t93 = 12409LL;

	t93 = ((x449&x450)-(x451+x452));

	if (t93 != -9223304943195225408LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = 27;
	int32_t x454 = INT32_MIN;
	static uint32_t x455 = UINT32_MAX;

	t94 = ((x453&x454)-(x455+x456));

	if (t94 != 4294966431U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x457 = -3;
	int32_t x458 = INT32_MAX;
	uint64_t x460 = UINT64_MAX;
	uint64_t t95 = 1001990562LLU;

	t95 = ((x457&x458)-(x459+x460));

	if (t95 != 47063587020748154LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MIN;
	uint16_t x475 = 6807U;
	int32_t x476 = 714704;
	volatile int32_t t96 = -9;

	t96 = ((x473&x474)-(x475+x476));

	if (t96 != -754279) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x477 = INT8_MIN;
	uint64_t x480 = 3653501867366586LLU;
	volatile uint64_t t97 = 2194LLU;

	t97 = ((x477&x478)-(x479+x480));

	if (t97 != 18443090576137153127LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x481 = INT32_MIN;
	volatile int16_t x482 = -1;
	int64_t x483 = INT64_MIN;
	int64_t t98 = 214968LL;

	t98 = ((x481&x482)-(x483+x484));

	if (t98 != 9223372034707292154LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x485 = 10666LLU;
	int32_t x487 = -91686;
	static volatile int64_t x488 = 431184LL;
	volatile uint64_t t99 = 3717642357044LLU;

	t99 = ((x485&x486)-(x487+x488));

	if (t99 != 18446744073709212118LLU) { NG(); } else { ; }
	
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

