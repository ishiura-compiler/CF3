#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x4 = 16406243450021779LLU;
volatile int64_t x9 = 11538438507LL;
uint32_t x10 = 6505U;
static volatile int32_t x12 = 914563;
static int64_t x13 = INT64_MIN;
int8_t x17 = -1;
int8_t x20 = INT8_MAX;
volatile int64_t x23 = INT64_MAX;
int32_t x25 = -1;
uint64_t x30 = 4610803751074430457LLU;
volatile uint64_t t7 = UINT64_MAX;
volatile uint16_t x40 = 9U;
volatile int16_t x42 = INT16_MIN;
volatile int64_t t13 = 16787746228880LL;
volatile int64_t x62 = INT64_MIN;
volatile int16_t x67 = INT16_MIN;
volatile int32_t t16 = -271448380;
uint8_t x70 = 15U;
static int32_t x73 = INT32_MAX;
volatile int32_t t18 = 520478120;
static volatile int32_t x86 = -1;
volatile uint32_t x92 = 15358U;
volatile uint32_t x97 = UINT32_MAX;
int64_t x98 = -25103529726LL;
static int32_t x99 = -1;
static uint8_t x100 = 41U;
int32_t x102 = -21583542;
int32_t x107 = INT32_MIN;
int16_t x114 = INT16_MIN;
int16_t x117 = -1;
int8_t x120 = INT8_MIN;
static int8_t x121 = INT8_MIN;
uint16_t x122 = UINT16_MAX;
int32_t t30 = -3;
uint32_t x125 = UINT32_MAX;
uint8_t x127 = UINT8_MAX;
static uint32_t t32 = UINT32_MAX;
volatile int64_t x135 = INT64_MIN;
uint32_t x145 = 326U;
int32_t x146 = INT32_MIN;
static uint8_t x152 = UINT8_MAX;
static uint32_t x153 = 41391365U;
volatile uint16_t x157 = 245U;
uint32_t x158 = 89270U;
int8_t x160 = INT8_MIN;
uint32_t x168 = 231U;
uint32_t t41 = 57U;
uint8_t x177 = 7U;
int64_t x184 = -1LL;
int8_t x187 = INT8_MIN;
static uint8_t x188 = 3U;
uint64_t x192 = UINT64_MAX;
volatile int8_t x202 = INT8_MIN;
int16_t x206 = -1;
int32_t x210 = -2872;
int8_t x216 = INT8_MIN;
uint64_t x219 = 1394173283488009872LLU;
static volatile uint64_t t54 = UINT64_MAX;
uint64_t x226 = 6LLU;
static int32_t x227 = 121;
static uint8_t x228 = 75U;
int64_t x236 = -7343220368899LL;
volatile uint64_t x237 = 3080018179113060225LLU;
volatile int64_t x240 = -27984073LL;
static int64_t x242 = INT64_MIN;
uint16_t x246 = 14354U;
static int64_t t62 = -57023423041516129LL;
int64_t x256 = INT64_MIN;
static volatile int64_t t64 = 4787565986LL;
static int64_t x262 = -1LL;
static uint8_t x275 = 13U;
uint16_t x282 = 22U;
int8_t x283 = -8;
volatile int64_t x288 = INT64_MIN;
static int32_t x296 = INT32_MAX;
int16_t x300 = -510;
static uint32_t t75 = UINT32_MAX;
int8_t x305 = -1;
static uint8_t x310 = 3U;
volatile uint32_t t77 = UINT32_MAX;
int32_t x319 = INT32_MAX;
volatile uint32_t t79 = UINT32_MAX;
int16_t x323 = INT16_MIN;
uint64_t t80 = UINT64_MAX;
int32_t t82 = -23900460;
uint16_t x333 = 1U;
int64_t x336 = -1458548765441521436LL;
int64_t t83 = 32958356LL;
uint32_t x338 = 3963U;
static int32_t x345 = INT32_MIN;
static volatile int32_t t86 = -2605196;
volatile int64_t x351 = INT64_MIN;
int16_t x353 = INT16_MIN;
uint64_t t88 = UINT64_MAX;
int32_t x357 = -1;
uint64_t t89 = UINT64_MAX;
int64_t x370 = 1254721371LL;
static uint16_t x372 = 1U;
int64_t t92 = 0LL;
static int64_t x375 = -44770857LL;
int64_t t93 = -34LL;
int64_t x380 = -1LL;
static int64_t x391 = 9875118945LL;
volatile int64_t t97 = -67544223693196411LL;
static uint32_t x395 = UINT32_MAX;
int16_t x397 = INT16_MIN;
volatile int16_t x400 = 39;


void f0(void) {
	volatile uint8_t x1 = 14U;
	int32_t x2 = -1;
	static uint16_t x3 = 19U;
	static volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2|x3)|x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = -1LL;
	volatile int64_t x7 = INT64_MIN;
	int16_t x8 = -58;
	static int64_t t1 = 3262LL;

	t1 = (x5|((x6|x7)|x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x11 = 9171U;
	int64_t t2 = 114360109LL;

	t2 = (x9|((x10|x11)|x12));

	if (t2 != 11538530299LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = 0;
	volatile int64_t x15 = INT64_MIN;
	volatile int32_t x16 = -1;
	volatile int64_t t3 = -7005460LL;

	t3 = (x13|((x14|x15)|x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 1LLU;
	int32_t x19 = -1;
	uint64_t t4 = UINT64_MAX;

	t4 = (x17|((x18|x19)|x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 210;
	static int8_t x22 = -1;
	volatile int8_t x24 = INT8_MIN;
	volatile int64_t t5 = -654588LL;

	t5 = (x21|((x22|x23)|x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -224321;
	uint32_t x27 = 2709153U;
	static int32_t x28 = INT32_MIN;
	uint32_t t6 = UINT32_MAX;

	t6 = (x25|((x26|x27)|x28));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile int8_t x31 = INT8_MAX;
	uint32_t x32 = 72984571U;

	t7 = (x29|((x30|x31)|x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	uint64_t x34 = UINT64_MAX;
	int64_t x35 = -335LL;
	int64_t x36 = -1LL;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x33|((x34|x35)|x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 3U;
	uint16_t x38 = UINT16_MAX;
	uint32_t x39 = 446581985U;
	uint32_t t9 = 104U;

	t9 = (x37|((x38|x39)|x40));

	if (t9 != 446627839U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int32_t x43 = 0;
	int16_t x44 = 0;
	volatile int32_t t10 = -658;

	t10 = (x41|((x42|x43)|x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = INT16_MIN;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = 19592811;
	int64_t t11 = 8693024LL;

	t11 = (x45|((x46|x47)|x48));

	if (t11 != -2453LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 180937257692LLU;
	static uint16_t x50 = 558U;
	int16_t x51 = INT16_MAX;
	int16_t x52 = -4947;
	uint64_t t12 = UINT64_MAX;

	t12 = (x49|((x50|x51)|x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -24LL;
	int64_t x54 = INT64_MIN;
	uint8_t x55 = 11U;
	int64_t x56 = -1LL;

	t13 = (x53|((x54|x55)|x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 8740LLU;
	static int32_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = UINT16_MAX;
	static volatile uint64_t t14 = UINT64_MAX;

	t14 = (x57|((x58|x59)|x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 8088615LL;
	volatile uint32_t x63 = 22190160U;
	uint64_t x64 = 112314503197LLU;
	static uint64_t t15 = 379LLU;

	t15 = (x61|((x62|x63)|x64));

	if (t15 != 9223372149186624639LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	uint16_t x66 = UINT16_MAX;
	static int32_t x68 = INT32_MAX;

	t16 = (x65|((x66|x67)|x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -82;
	uint64_t x71 = 230LLU;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t17 = 533243268581941345LLU;

	t17 = (x69|((x70|x71)|x72));

	if (t17 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	int16_t x75 = 13272;
	volatile int16_t x76 = INT16_MIN;

	t18 = (x73|((x74|x75)|x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = INT16_MAX;
	int32_t x78 = INT32_MIN;
	static int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MIN;
	volatile int64_t t19 = 14991696457LL;

	t19 = (x77|((x78|x79)|x80));

	if (t19 != -2147450881LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int64_t x82 = INT64_MIN;
	volatile int64_t x83 = INT64_MIN;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t20 = -227195953612LL;

	t20 = (x81|((x82|x83)|x84));

	if (t20 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x85 = 0;
	int8_t x87 = -1;
	int32_t x88 = 3647980;
	static int32_t t21 = 46;

	t21 = (x85|((x86|x87)|x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	int8_t x90 = 0;
	int16_t x91 = INT16_MIN;
	volatile int64_t t22 = 6729LL;

	t22 = (x89|((x90|x91)|x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = 14;
	uint16_t x94 = UINT16_MAX;
	uint8_t x95 = 54U;
	int8_t x96 = 2;
	static int32_t t23 = -3149139;

	t23 = (x93|((x94|x95)|x96));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t t24 = -1942481353298153980LL;

	t24 = (x97|((x98|x99)|x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 4LLU;
	int8_t x103 = INT8_MIN;
	uint16_t x104 = UINT16_MAX;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (x101|((x102|x103)|x104));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -1LL;
	volatile int16_t x106 = INT16_MAX;
	int16_t x108 = INT16_MIN;
	volatile int64_t t26 = -2134668766679LL;

	t26 = (x105|((x106|x107)|x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -2;
	uint16_t x110 = UINT16_MAX;
	static int32_t x111 = 241;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = -490558;

	t27 = (x109|((x110|x111)|x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = 1;
	static volatile uint16_t x115 = 8539U;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 28;

	t28 = (x113|((x114|x115)|x116));

	if (t28 != -37) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 52;
	int64_t x119 = 1261414599LL;
	volatile int64_t t29 = 102125178470482LL;

	t29 = (x117|((x118|x119)|x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x123 = 4;
	int16_t x124 = 72;

	t30 = (x121|((x122|x123)|x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x126 = UINT32_MAX;
	int64_t x128 = INT64_MAX;
	int64_t t31 = INT64_MAX;

	t31 = (x125|((x126|x127)|x128));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 6007U;
	uint32_t x130 = 727U;
	volatile uint8_t x131 = 9U;
	int8_t x132 = INT8_MIN;

	t32 = (x129|((x130|x131)|x132));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = -422636LL;
	static uint16_t x136 = 24699U;
	volatile int64_t t33 = -244593LL;

	t33 = (x133|((x134|x135)|x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 2126U;
	int64_t x138 = INT64_MIN;
	volatile uint16_t x139 = 3U;
	volatile int8_t x140 = INT8_MIN;
	static int64_t t34 = 6011LL;

	t34 = (x137|((x138|x139)|x140));

	if (t34 != -49LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = 525615913LL;
	int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MAX;
	int64_t x144 = -1LL;
	volatile int64_t t35 = 227149498489570918LL;

	t35 = (x141|((x142|x143)|x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x147 = -1;
	uint8_t x148 = 5U;
	static uint32_t t36 = UINT32_MAX;

	t36 = (x145|((x146|x147)|x148));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	int64_t x150 = -193638LL;
	static int16_t x151 = INT16_MIN;
	int64_t t37 = 2824134805LL;

	t37 = (x149|((x150|x151)|x152));

	if (t37 != -29697LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = 523467842;
	uint16_t x155 = 3687U;
	static volatile int32_t x156 = -1;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = (x153|((x154|x155)|x156));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x159 = -1;
	static volatile uint32_t t39 = UINT32_MAX;

	t39 = (x157|((x158|x159)|x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 23986318729LLU;
	int64_t x164 = INT64_MIN;
	uint64_t t40 = 53744658LLU;

	t40 = (x161|((x162|x163)|x164));

	if (t40 != 18446744073709530505LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint32_t x166 = 130570092U;
	int8_t x167 = 1;

	t41 = (x165|((x166|x167)|x168));

	if (t41 != 4294957039U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 31LLU;
	int8_t x170 = -1;
	int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (x169|((x170|x171)|x172));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint16_t x174 = 21642U;
	volatile uint16_t x175 = 108U;
	uint32_t x176 = UINT32_MAX;
	uint32_t t43 = UINT32_MAX;

	t43 = (x173|((x174|x175)|x176));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = 4256498246447LLU;
	volatile uint16_t x179 = 20030U;
	volatile int64_t x180 = -1LL;
	uint64_t t44 = UINT64_MAX;

	t44 = (x177|((x178|x179)|x180));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	static int16_t x182 = -2;
	uint16_t x183 = UINT16_MAX;
	volatile int64_t t45 = 598697LL;

	t45 = (x181|((x182|x183)|x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = INT16_MIN;
	int32_t t46 = 177502325;

	t46 = (x185|((x186|x187)|x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -12;
	int64_t x190 = -3112900730177LL;
	uint16_t x191 = 1U;
	static uint64_t t47 = UINT64_MAX;

	t47 = (x189|((x190|x191)|x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = 1;
	volatile int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MIN;
	static volatile uint32_t t48 = UINT32_MAX;

	t48 = (x193|((x194|x195)|x196));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile int16_t x198 = INT16_MIN;
	static uint32_t x199 = 3626U;
	int16_t x200 = INT16_MAX;
	int64_t t49 = -30887213362832LL;

	t49 = (x197|((x198|x199)|x200));

	if (t49 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -516421288;
	static int16_t x203 = INT16_MIN;
	volatile int16_t x204 = 58;
	volatile int32_t t50 = 7994;

	t50 = (x201|((x202|x203)|x204));

	if (t50 != -6) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	uint8_t x207 = 57U;
	int8_t x208 = INT8_MIN;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x205|((x206|x207)|x208));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 168896958121209LL;
	int8_t x211 = 21;
	uint8_t x212 = UINT8_MAX;
	int64_t t52 = -783230683LL;

	t52 = (x209|((x210|x211)|x212));

	if (t52 != -2817LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MAX;
	volatile int16_t x214 = INT16_MIN;
	static volatile int8_t x215 = INT8_MIN;
	int32_t t53 = 823358248;

	t53 = (x213|((x214|x215)|x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = 130;
	int8_t x218 = -1;
	int16_t x220 = -1;

	t54 = (x217|((x218|x219)|x220));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 791729U;
	static int64_t x222 = INT64_MAX;
	volatile int32_t x223 = 653580874;
	int32_t x224 = INT32_MAX;
	int64_t t55 = INT64_MAX;

	t55 = (x221|((x222|x223)|x224));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 6U;
	static uint64_t t56 = 339966LLU;

	t56 = (x225|((x226|x227)|x228));

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 4U;
	volatile int8_t x230 = -1;
	int8_t x231 = INT8_MIN;
	static uint64_t x232 = 204LLU;
	uint64_t t57 = UINT64_MAX;

	t57 = (x229|((x230|x231)|x232));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 1U;
	static uint64_t x234 = UINT64_MAX;
	uint32_t x235 = UINT32_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (x233|((x234|x235)|x236));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x238 = 44959606932LLU;
	uint64_t x239 = UINT64_MAX;
	static uint64_t t59 = UINT64_MAX;

	t59 = (x237|((x238|x239)|x240));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 52U;
	uint32_t x243 = 45350U;
	uint16_t x244 = UINT16_MAX;
	int64_t t60 = -7LL;

	t60 = (x241|((x242|x243)|x244));

	if (t60 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -81LL;
	int32_t x247 = -1;
	uint8_t x248 = 23U;
	volatile int64_t t61 = -2LL;

	t61 = (x245|((x246|x247)|x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	static int32_t x250 = INT32_MIN;
	int16_t x251 = -1;
	uint16_t x252 = UINT16_MAX;

	t62 = (x249|((x250|x251)|x252));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MIN;
	static uint32_t x255 = UINT32_MAX;
	static volatile int64_t t63 = 218690079447LL;

	t63 = (x253|((x254|x255)|x256));

	if (t63 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	static int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	static int64_t x260 = 158LL;

	t64 = (x257|((x258|x259)|x260));

	if (t64 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	static volatile int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	volatile int64_t t65 = -747142819LL;

	t65 = (x261|((x262|x263)|x264));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 106U;
	uint8_t x266 = 70U;
	int32_t x267 = 55;
	int32_t x268 = INT32_MIN;
	static int32_t t66 = 35659193;

	t66 = (x265|((x266|x267)|x268));

	if (t66 != -2147483521) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	static int32_t x270 = 78100;
	static int64_t x271 = -1LL;
	int64_t x272 = 2290491507741209695LL;
	int64_t t67 = -2380988524596LL;

	t67 = (x269|((x270|x271)|x272));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int64_t x276 = -1LL;
	int64_t t68 = -8LL;

	t68 = (x273|((x274|x275)|x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 9740508LLU;
	int8_t x278 = INT8_MAX;
	volatile int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	uint64_t t69 = 8529LLU;

	t69 = (x277|((x278|x279)|x280));

	if (t69 != 18446744073709527295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 14U;
	static int64_t x284 = INT64_MAX;
	static volatile int64_t t70 = -3LL;

	t70 = (x281|((x282|x283)|x284));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 1311432383U;
	int32_t x286 = -1;
	int16_t x287 = -58;
	int64_t t71 = -233180081LL;

	t71 = (x285|((x286|x287)|x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int32_t x290 = -1;
	uint16_t x291 = UINT16_MAX;
	volatile uint16_t x292 = UINT16_MAX;
	static volatile int32_t t72 = -46889374;

	t72 = (x289|((x290|x291)|x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	static int8_t x294 = -3;
	uint8_t x295 = 79U;
	static volatile int32_t t73 = 461;

	t73 = (x293|((x294|x295)|x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = 18;
	uint16_t x299 = UINT16_MAX;
	volatile int32_t t74 = -407563048;

	t74 = (x297|((x298|x299)|x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int32_t x302 = INT32_MIN;
	int16_t x303 = INT16_MIN;
	static int16_t x304 = INT16_MAX;

	t75 = (x301|((x302|x303)|x304));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MIN;
	static uint16_t x307 = 9085U;
	uint32_t x308 = UINT32_MAX;
	int64_t t76 = -20LL;

	t76 = (x305|((x306|x307)|x308));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	uint32_t x311 = UINT32_MAX;
	uint32_t x312 = 19U;

	t77 = (x309|((x310|x311)|x312));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	volatile int32_t x314 = INT32_MAX;
	int32_t x315 = INT32_MIN;
	static int8_t x316 = -5;
	volatile int64_t t78 = -966650328122455937LL;

	t78 = (x313|((x314|x315)|x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -1;
	int32_t x318 = -1;
	uint32_t x320 = 458972U;

	t79 = (x317|((x318|x319)|x320));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int16_t x322 = INT16_MIN;
	int8_t x324 = INT8_MIN;

	t80 = (x321|((x322|x323)|x324));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 7847318071LL;
	volatile int16_t x326 = INT16_MIN;
	volatile uint16_t x327 = 23U;
	static int32_t x328 = INT32_MAX;
	static int64_t t81 = 54LL;

	t81 = (x325|((x326|x327)|x328));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = UINT8_MAX;
	static uint16_t x330 = UINT16_MAX;
	static int32_t x331 = INT32_MAX;
	int32_t x332 = -5;

	t82 = (x329|((x330|x331)|x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = -1LL;
	int64_t x335 = INT64_MAX;

	t83 = (x333|((x334|x335)|x336));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	volatile int16_t x339 = INT16_MAX;
	int64_t x340 = INT64_MAX;
	static volatile int64_t t84 = -1418310856074707LL;

	t84 = (x337|((x338|x339)|x340));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 6U;
	uint64_t x342 = 4346117526LLU;
	int32_t x343 = INT32_MAX;
	int16_t x344 = -1;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x341|((x342|x343)|x344));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x346 = INT16_MAX;
	uint16_t x347 = 28U;
	uint16_t x348 = UINT16_MAX;

	t86 = (x345|((x346|x347)|x348));

	if (t86 != -2147418113) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MAX;
	int16_t x350 = 105;
	int8_t x352 = INT8_MIN;
	static volatile int64_t t87 = -1266LL;

	t87 = (x349|((x350|x351)|x352));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x354 = -1;
	static volatile int8_t x355 = 3;
	uint64_t x356 = UINT64_MAX;

	t88 = (x353|((x354|x355)|x356));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -744513795404689176LL;
	int64_t x359 = 54012263LL;
	uint64_t x360 = UINT64_MAX;

	t89 = (x357|((x358|x359)|x360));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -13299080739686037LL;
	int16_t x362 = 7;
	static uint16_t x363 = UINT16_MAX;
	int32_t x364 = 15247046;
	volatile int64_t t90 = 1187432393LL;

	t90 = (x361|((x362|x363)|x364));

	if (t90 != -13299080735490049LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = -3;
	volatile uint8_t x367 = 5U;
	volatile int64_t x368 = INT64_MIN;
	volatile int64_t t91 = -462848LL;

	t91 = (x365|((x366|x367)|x368));

	if (t91 != -3LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x371 = INT8_MIN;

	t92 = (x369|((x370|x371)|x372));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int32_t x374 = INT32_MAX;
	uint8_t x376 = UINT8_MAX;

	t93 = (x373|((x374|x375)|x376));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = 44734380886LLU;
	uint16_t x378 = 5U;
	volatile int64_t x379 = -6LL;
	uint64_t t94 = UINT64_MAX;

	t94 = (x377|((x378|x379)|x380));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	uint32_t x382 = 8U;
	static uint8_t x383 = UINT8_MAX;
	int64_t x384 = -99492993463535LL;
	int64_t t95 = -691364093LL;

	t95 = (x381|((x382|x383)|x384));

	if (t95 != -29697LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 81345226809204LLU;
	volatile int32_t x386 = INT32_MIN;
	uint16_t x387 = 1U;
	volatile int64_t x388 = INT64_MIN;
	uint64_t t96 = 1624518LLU;

	t96 = (x385|((x386|x387)|x388));

	if (t96 != 18446744072255774581LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = INT16_MIN;
	uint16_t x390 = UINT16_MAX;
	int32_t x392 = -75168554;

	t97 = (x389|((x390|x391)|x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = 4U;
	volatile int32_t x396 = INT32_MAX;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x393|((x394|x395)|x396));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x398 = 3U;
	uint64_t x399 = 7769071749633698LLU;
	static volatile uint64_t t99 = 1932459038979554LLU;

	t99 = (x397|((x398|x399)|x400));

	if (t99 != 18446744073709524647LLU) { NG(); } else { ; }
	
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

