#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile uint32_t t0 = 466913241U;
static uint16_t x5 = 8U;
static uint64_t x11 = 4030972783LLU;
uint16_t x12 = 220U;
static uint64_t x20 = UINT64_MAX;
volatile int32_t t5 = -164916901;
int8_t x35 = INT8_MAX;
static uint8_t x41 = 31U;
uint8_t x44 = 15U;
static volatile int64_t x45 = INT64_MIN;
int16_t x48 = -1;
volatile uint16_t x63 = 360U;
int64_t x71 = INT64_MIN;
static int16_t x72 = -1;
uint32_t x73 = UINT32_MAX;
int8_t x83 = INT8_MIN;
static int32_t x88 = INT32_MAX;
int8_t x107 = -11;
volatile uint64_t t26 = 1LLU;
volatile int16_t x112 = 206;
int8_t x114 = 50;
static int16_t x120 = -987;
volatile int64_t t30 = -98828616263049205LL;
static int32_t x133 = INT32_MIN;
int32_t x137 = -1;
static volatile int64_t x138 = -1305253111LL;
uint16_t x144 = 58U;
int32_t x146 = INT32_MIN;
int32_t x148 = -1;
int64_t x150 = INT64_MIN;
volatile int32_t t38 = -1039517828;
static int16_t x158 = INT16_MAX;
volatile uint64_t t39 = 625746742582LLU;
int16_t x176 = -1;
uint64_t x181 = UINT64_MAX;
int16_t x185 = -1;
uint16_t x186 = 8598U;
static int64_t x190 = INT64_MIN;
int16_t x192 = INT16_MAX;
volatile int64_t x196 = -2698059969LL;
volatile uint64_t t48 = 540950999968448849LLU;
int64_t x198 = INT64_MIN;
static int64_t x201 = INT64_MIN;
uint16_t x212 = 1U;
static int32_t t52 = -73144;
int64_t x216 = -5598552461054963LL;
volatile int64_t t53 = 42726LL;
volatile int64_t t54 = -25LL;
int16_t x222 = INT16_MIN;
int8_t x223 = -1;
static uint32_t x225 = UINT32_MAX;
int8_t x228 = -1;
uint8_t x230 = UINT8_MAX;
int32_t x236 = -505;
static int8_t x247 = INT8_MIN;
int64_t x252 = 162133149192489259LL;
int16_t x254 = -183;
int32_t x259 = INT32_MIN;
int8_t x261 = -1;
static uint16_t x263 = 1301U;
volatile uint8_t x274 = 1U;
int64_t x279 = INT64_MIN;
int64_t x281 = INT64_MIN;
int16_t x289 = INT16_MAX;
int32_t x290 = INT32_MIN;
uint32_t x294 = 11U;
int64_t x295 = INT64_MIN;
volatile int64_t t73 = -273040586989441319LL;
uint64_t x298 = 189357001537096LLU;
volatile uint32_t t74 = 67526378U;
volatile uint64_t x302 = 8137725282505LLU;
uint8_t x306 = 12U;
uint32_t x308 = 788636667U;
uint64_t x311 = 2086LLU;
int32_t t77 = -186122;
int64_t x315 = -2658776LL;
int32_t x317 = -1;
volatile int8_t x330 = 1;
uint16_t x342 = UINT16_MAX;
int8_t x343 = 32;
volatile int64_t t85 = -20576869LL;
int32_t x347 = INT32_MIN;
volatile int32_t t87 = 4076;
uint32_t x357 = UINT32_MAX;
int32_t x358 = -1;
int16_t x361 = INT16_MIN;
uint32_t x370 = UINT32_MAX;
uint64_t t93 = 8046235129962957312LLU;
static int32_t x378 = -1;
int64_t t95 = 472203139249LL;
uint16_t x389 = UINT16_MAX;
int64_t x391 = -1LL;
volatile uint64_t t98 = 365835554113757LLU;
static volatile int32_t t99 = -59;


void f0(void) {
	int32_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	static uint32_t x4 = 1U;

	t0 = (x1^((x2<x3)|x4));

	if (t0 != 4294967169U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = 26LLU;
	int16_t x7 = INT16_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -58;

	t1 = (x5^((x6<x7)|x8));

	if (t1 != -2147483639) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 7676478855LLU;
	int64_t x10 = INT64_MIN;
	volatile uint64_t t2 = 104LLU;

	t2 = (x9^((x10<x11)|x12));

	if (t2 != 7676478811LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;
	int16_t x16 = -1;
	int32_t t3 = 939615110;

	t3 = (x13^((x14<x15)|x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -93463;
	int32_t x18 = INT32_MIN;
	uint16_t x19 = 18U;
	volatile uint64_t t4 = 5851LLU;

	t4 = (x17^((x18<x19)|x20));

	if (t4 != 93462LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static uint16_t x22 = UINT16_MAX;
	uint64_t x23 = 157624788704799LLU;
	volatile uint8_t x24 = UINT8_MAX;

	t5 = (x21^((x22<x23)|x24));

	if (t5 != -256) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x26 = 289341342U;
	static uint32_t x27 = 23U;
	int32_t x28 = INT32_MAX;
	static int32_t t6 = 1;

	t6 = (x25^((x26<x27)|x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int64_t x30 = INT64_MAX;
	static int64_t x31 = 2745130250084LL;
	int32_t x32 = 15103849;
	uint64_t t7 = 10721728204LLU;

	t7 = (x29^((x30<x31)|x32));

	if (t7 != 18446744073694447766LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 3U;
	uint8_t x34 = 1U;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = -120259460;

	t8 = (x33^((x34<x35)|x36));

	if (t8 != -32766) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 20584U;
	int16_t x38 = INT16_MIN;
	int32_t x39 = -10133;
	uint8_t x40 = 56U;
	uint32_t t9 = 2190U;

	t9 = (x37^((x38<x39)|x40));

	if (t9 != 20561U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 17149995LLU;
	uint16_t x43 = 82U;
	volatile int32_t t10 = 29177;

	t10 = (x41^((x42<x43)|x44));

	if (t10 != 16) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = -1;
	uint8_t x47 = UINT8_MAX;
	static int64_t t11 = INT64_MAX;

	t11 = (x45^((x46<x47)|x48));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x50 = UINT16_MAX;
	static uint32_t x51 = 1U;
	int64_t x52 = INT64_MIN;
	static volatile int64_t t12 = 13653444093LL;

	t12 = (x49^((x50<x51)|x52));

	if (t12 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 26106268LL;
	volatile int32_t x54 = 118538329;
	int16_t x55 = INT16_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 280LLU;

	t13 = (x53^((x54<x55)|x56));

	if (t13 != 18446744073683445347LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 934U;
	uint64_t x58 = 352383LLU;
	uint64_t x59 = 9181161LLU;
	static int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -2337;

	t14 = (x57^((x58<x59)|x60));

	if (t14 != -2147482713) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MIN;
	int8_t x64 = -3;
	volatile int64_t t15 = -138149535577608763LL;

	t15 = (x61^((x62<x63)|x64));

	if (t15 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int64_t x66 = INT64_MIN;
	uint8_t x67 = 54U;
	static uint32_t x68 = 5U;
	uint32_t t16 = 3U;

	t16 = (x65^((x66<x67)|x68));

	if (t16 != 4294967290U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	static int8_t x70 = INT8_MIN;
	int32_t t17 = -109940530;

	t17 = (x69^((x70<x71)|x72));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MIN;
	int8_t x75 = 11;
	static int8_t x76 = 3;
	uint32_t t18 = 4U;

	t18 = (x73^((x74<x75)|x76));

	if (t18 != 4294967292U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 130213114265LL;
	volatile int16_t x78 = -5191;
	int16_t x79 = INT16_MIN;
	volatile int16_t x80 = -11711;
	volatile int64_t t19 = -2607333205200689LL;

	t19 = (x77^((x78<x79)|x80));

	if (t19 != -130213108776LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	static int16_t x82 = 0;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 957484629;

	t20 = (x81^((x82<x83)|x84));

	if (t20 != -32513) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 0U;
	int32_t x86 = -1;
	static int32_t x87 = INT32_MIN;
	static int32_t t21 = INT32_MAX;

	t21 = (x85^((x86<x87)|x88));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -15079;
	int16_t x90 = INT16_MIN;
	int8_t x91 = 3;
	static uint32_t x92 = 2428815U;
	volatile uint32_t t22 = 0U;

	t22 = (x89^((x90<x91)|x92));

	if (t22 != 4292528790U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 7512LLU;
	volatile int16_t x94 = 1;
	static uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;
	uint64_t t23 = 157906338LLU;

	t23 = (x93^((x94<x95)|x96));

	if (t23 != 18446744073709544153LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	volatile int16_t x98 = -1;
	static volatile int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -2137077;

	t24 = (x97^((x98<x99)|x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	int64_t x102 = -106026LL;
	int32_t x103 = INT32_MIN;
	static volatile int16_t x104 = INT16_MIN;
	static int64_t t25 = -9732773379117LL;

	t25 = (x101^((x102<x103)|x104));

	if (t25 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -1;
	static int64_t x106 = INT64_MIN;
	static uint64_t x108 = UINT64_MAX;

	t26 = (x105^((x106<x107)|x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 1;
	int64_t x110 = INT64_MIN;
	uint64_t x111 = 65452LLU;
	volatile int32_t t27 = -1132;

	t27 = (x109^((x110<x111)|x112));

	if (t27 != 207) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x113 = INT8_MIN;
	uint64_t x115 = 3656341293745LLU;
	int8_t x116 = INT8_MAX;
	volatile int32_t t28 = -2090596;

	t28 = (x113^((x114<x115)|x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	volatile int32_t x118 = INT32_MIN;
	volatile int64_t x119 = INT64_MIN;
	volatile int64_t t29 = -11279LL;

	t29 = (x117^((x118<x119)|x120));

	if (t29 != -9223372036854774822LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -3016736963035LL;
	uint8_t x122 = 57U;
	int8_t x123 = INT8_MAX;
	int64_t x124 = -37541LL;

	t30 = (x121^((x122<x123)|x124));

	if (t30 != 3016736926590LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -12;
	uint16_t x126 = 335U;
	int32_t x127 = INT32_MIN;
	static int16_t x128 = -59;
	int32_t t31 = 84463613;

	t31 = (x125^((x126<x127)|x128));

	if (t31 != 49) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = -1;
	int64_t x131 = INT64_MIN;
	volatile int16_t x132 = INT16_MIN;
	static volatile int64_t t32 = -30691LL;

	t32 = (x129^((x130<x131)|x132));

	if (t32 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x134 = -1;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = -1;
	static volatile int32_t t33 = INT32_MAX;

	t33 = (x133^((x134<x135)|x136));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x139 = INT64_MAX;
	int32_t x140 = 40;
	volatile int32_t t34 = -895296;

	t34 = (x137^((x138<x139)|x140));

	if (t34 != -42) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = INT64_MAX;
	int8_t x142 = -13;
	int64_t x143 = INT64_MIN;
	int64_t t35 = 216975974155LL;

	t35 = (x141^((x142<x143)|x144));

	if (t35 != 9223372036854775749LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MAX;
	static int8_t x147 = INT8_MIN;
	volatile int32_t t36 = INT32_MIN;

	t36 = (x145^((x146<x147)|x148));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int32_t x151 = 474965;
	int64_t x152 = -3982LL;
	int64_t t37 = -445662684563177LL;

	t37 = (x149^((x150<x151)|x152));

	if (t37 != -4294963316LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = UINT8_MAX;
	int64_t x154 = 0LL;
	int32_t x155 = -1;
	static int16_t x156 = INT16_MIN;

	t38 = (x153^((x154<x155)|x156));

	if (t38 != -32513) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static uint64_t x159 = UINT64_MAX;
	uint64_t x160 = 341LLU;

	t39 = (x157^((x158<x159)|x160));

	if (t39 != 18446744071562068309LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -4897;
	int32_t x162 = -629;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -261220005;

	t40 = (x161^((x162<x163)|x164));

	if (t40 != 4958) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 0U;
	int16_t x166 = -16049;
	static uint16_t x167 = 0U;
	uint64_t x168 = 9248639497442LLU;
	static volatile uint64_t t41 = 2089840872697518538LLU;

	t41 = (x165^((x166<x167)|x168));

	if (t41 != 9248639497443LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 82648141474LLU;
	static int8_t x170 = INT8_MAX;
	int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MIN;
	uint64_t t42 = 3812966LLU;

	t42 = (x169^((x170<x171)|x172));

	if (t42 != 18446743991001452194LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 90U;
	int32_t x174 = INT32_MIN;
	static int64_t x175 = INT64_MAX;
	volatile int32_t t43 = 1;

	t43 = (x173^((x174<x175)|x176));

	if (t43 != -91) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x178 = UINT32_MAX;
	static volatile int16_t x179 = INT16_MIN;
	int8_t x180 = -1;
	int32_t t44 = INT32_MAX;

	t44 = (x177^((x178<x179)|x180));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x182 = -1;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	uint64_t t45 = 40LLU;

	t45 = (x181^((x182<x183)|x184));

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x187 = 500155244404LL;
	static int16_t x188 = INT16_MAX;
	static volatile int32_t t46 = 18546;

	t46 = (x185^((x186<x187)|x188));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	static volatile int32_t x191 = INT32_MIN;
	int32_t t47 = 35;

	t47 = (x189^((x190<x191)|x192));

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MAX;

	t48 = (x193^((x194<x195)|x196));

	if (t48 != 2698059968LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	static int32_t x199 = 10;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t49 = -5004;

	t49 = (x197^((x198<x199)|x200));

	if (t49 != 2147483646) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = -1;
	volatile int32_t x203 = 458;
	uint32_t x204 = 842210612U;
	int64_t t50 = -133692LL;

	t50 = (x201^((x202<x203)|x204));

	if (t50 != -9223372036012565195LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	static int32_t x206 = INT32_MAX;
	volatile int32_t x207 = INT32_MIN;
	static int32_t x208 = INT32_MAX;
	volatile int64_t t51 = 35644760090LL;

	t51 = (x205^((x206<x207)|x208));

	if (t51 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x210 = 26U;
	static int64_t x211 = 51495107949LL;

	t52 = (x209^((x210<x211)|x212));

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 3709;
	volatile int16_t x214 = INT16_MIN;
	uint32_t x215 = UINT32_MAX;

	t53 = (x213^((x214<x215)|x216));

	if (t53 != -5598552461057424LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = INT8_MAX;
	uint16_t x218 = 5934U;
	static int8_t x219 = -53;
	volatile int64_t x220 = INT64_MIN;

	t54 = (x217^((x218<x219)|x220));

	if (t54 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 46U;
	static uint8_t x224 = UINT8_MAX;
	static int32_t t55 = -133391288;

	t55 = (x221^((x222<x223)|x224));

	if (t55 != 209) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = 0;
	int16_t x227 = 109;
	static volatile uint32_t t56 = 1391935U;

	t56 = (x225^((x226<x227)|x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int64_t x231 = 1974621093080970LL;
	uint32_t x232 = UINT32_MAX;
	static uint32_t t57 = 149006965U;

	t57 = (x229^((x230<x231)|x232));

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	volatile int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	volatile int32_t t58 = 24445244;

	t58 = (x233^((x234<x235)|x236));

	if (t58 != 2147483143) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	volatile int8_t x238 = INT8_MAX;
	uint8_t x239 = 0U;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x237^((x238<x239)|x240));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	uint16_t x242 = 1898U;
	int32_t x243 = INT32_MAX;
	int8_t x244 = -11;
	int32_t t60 = -461352080;

	t60 = (x241^((x242<x243)|x244));

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	int64_t x246 = INT64_MIN;
	uint64_t x248 = 15LLU;
	static uint64_t t61 = 875LLU;

	t61 = (x245^((x246<x247)|x248));

	if (t61 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = 405U;
	static int16_t x250 = -1;
	int64_t x251 = INT64_MAX;
	static int64_t t62 = -98011724911LL;

	t62 = (x249^((x250<x251)|x252));

	if (t62 != 162133149192489150LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 200496448LL;
	int32_t x255 = INT32_MIN;
	int32_t x256 = 90480052;
	volatile int64_t t63 = -90913282003509LL;

	t63 = (x253^((x254<x255)|x256));

	if (t63 != 244828404LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = UINT64_MAX;
	volatile uint8_t x258 = UINT8_MAX;
	uint64_t x260 = UINT64_MAX;
	uint64_t t64 = 498233946LLU;

	t64 = (x257^((x258<x259)|x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MAX;
	uint16_t x264 = 53U;
	int32_t t65 = 497360316;

	t65 = (x261^((x262<x263)|x264));

	if (t65 != -54) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MIN;
	static int8_t x267 = 6;
	int64_t x268 = 789106808855LL;
	volatile int64_t t66 = 6630111023LL;

	t66 = (x265^((x266<x267)|x268));

	if (t66 != 789106796520LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	int32_t x270 = 32681820;
	int32_t x271 = 3580;
	int8_t x272 = -1;
	static volatile int32_t t67 = 6831;

	t67 = (x269^((x270<x271)|x272));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 30;
	volatile uint16_t x275 = 4U;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = 456434715;

	t68 = (x273^((x274<x275)|x276));

	if (t68 != 65505) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 3U;
	static int16_t x278 = -227;
	static int8_t x280 = 1;
	int32_t t69 = -57517829;

	t69 = (x277^((x278<x279)|x280));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = -5;
	uint64_t x283 = 762391471306703793LLU;
	uint32_t x284 = UINT32_MAX;
	int64_t t70 = -3138LL;

	t70 = (x281^((x282<x283)|x284));

	if (t70 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = 0LL;
	static int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -288608962622LL;
	int64_t t71 = 79152070224662LL;

	t71 = (x285^((x286<x287)|x288));

	if (t71 != -288608962622LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x291 = 1;
	uint16_t x292 = 1U;
	volatile int32_t t72 = 60;

	t72 = (x289^((x290<x291)|x292));

	if (t72 != 32766) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -1LL;
	volatile int8_t x296 = INT8_MAX;

	t73 = (x293^((x294<x295)|x296));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 12857U;
	int16_t x299 = -34;
	static int8_t x300 = INT8_MIN;

	t74 = (x297^((x298<x299)|x300));

	if (t74 != 4294954424U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 1815044LL;
	int8_t x303 = INT8_MIN;
	int64_t x304 = INT64_MIN;
	volatile int64_t t75 = -15645126LL;

	t75 = (x301^((x302<x303)|x304));

	if (t75 != -9223372036852960763LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 15421044249LL;
	int64_t x307 = 120737469562680176LL;
	volatile int64_t t76 = -88LL;

	t76 = (x305^((x306<x307)|x308));

	if (t76 != 15974782434LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int32_t x310 = INT32_MIN;
	int32_t x312 = INT32_MIN;

	t77 = (x309^((x310<x311)|x312));

	if (t77 != -2147483521) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 27268LLU;
	int8_t x314 = -1;
	uint64_t x316 = UINT64_MAX;
	uint64_t t78 = 1488105628170798LLU;

	t78 = (x313^((x314<x315)|x316));

	if (t78 != 18446744073709524347LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x318 = INT16_MIN;
	int64_t x319 = 974057LL;
	static int16_t x320 = -1;
	int32_t t79 = -112;

	t79 = (x317^((x318<x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = INT16_MAX;
	int16_t x322 = 25;
	int32_t x323 = -27053;
	int32_t x324 = INT32_MIN;
	int32_t t80 = -40696223;

	t80 = (x321^((x322<x323)|x324));

	if (t80 != -2147450881) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 2U;
	volatile int16_t x326 = INT16_MIN;
	int8_t x327 = -1;
	uint64_t x328 = UINT64_MAX;
	static volatile uint64_t t81 = 472291944260LLU;

	t81 = (x325^((x326<x327)|x328));

	if (t81 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	volatile uint64_t x331 = UINT64_MAX;
	uint16_t x332 = 3U;
	volatile int32_t t82 = 9231;

	t82 = (x329^((x330<x331)|x332));

	if (t82 != -32765) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 532485LLU;
	static uint16_t x334 = UINT16_MAX;
	static int64_t x335 = INT64_MAX;
	int8_t x336 = -1;
	volatile uint64_t t83 = 9202252079984268526LLU;

	t83 = (x333^((x334<x335)|x336));

	if (t83 != 18446744073709019130LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 12090216052LLU;
	volatile uint32_t x338 = 38858U;
	static int8_t x339 = -1;
	volatile int16_t x340 = -1;
	volatile uint64_t t84 = 6075131246563655994LLU;

	t84 = (x337^((x338<x339)|x340));

	if (t84 != 18446744061619335563LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -1LL;
	int32_t x344 = -1;

	t85 = (x341^((x342<x343)|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 380LLU;
	uint64_t x346 = 1195774327299575LLU;
	uint64_t x348 = 4293LLU;
	volatile uint64_t t86 = 62720537071LLU;

	t86 = (x345^((x346<x347)|x348));

	if (t86 != 4537LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = 287;
	volatile int16_t x350 = -1;
	static uint64_t x351 = 12LLU;
	volatile int32_t x352 = INT32_MIN;

	t87 = (x349^((x350<x351)|x352));

	if (t87 != -2147483361) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint16_t x354 = 21U;
	uint64_t x355 = 1LLU;
	int8_t x356 = -1;
	volatile int32_t t88 = 7663;

	t88 = (x353^((x354<x355)|x356));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x359 = -565209265;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t89 = 92U;

	t89 = (x357^((x358<x359)|x360));

	if (t89 != 32767U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = -436338225;
	volatile int32_t x364 = INT32_MAX;
	int32_t t90 = -2;

	t90 = (x361^((x362<x363)|x364));

	if (t90 != -2147450881) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	volatile int16_t x366 = 0;
	uint16_t x367 = 44U;
	static uint64_t x368 = UINT64_MAX;
	uint64_t t91 = 120510768595717909LLU;

	t91 = (x365^((x366<x367)|x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x371 = -1LL;
	volatile uint64_t x372 = 7892440019056193LLU;
	volatile uint64_t t92 = 3069921LLU;

	t92 = (x369^((x370<x371)|x372));

	if (t92 != 7892436672104894LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	int8_t x374 = INT8_MIN;
	volatile int64_t x375 = -1LL;
	uint64_t x376 = UINT64_MAX;

	t93 = (x373^((x374<x375)|x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 9LLU;
	static uint64_t x379 = 1569331765571471267LLU;
	volatile int64_t x380 = -233906731099022LL;
	static uint64_t t94 = 261706165365236LLU;

	t94 = (x377^((x378<x379)|x380));

	if (t94 != 18446510166978452603LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 978LL;
	uint32_t x382 = 1474662U;
	volatile uint16_t x383 = 2386U;
	int16_t x384 = -1;

	t95 = (x381^((x382<x383)|x384));

	if (t95 != -979LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	volatile int32_t x388 = INT32_MIN;
	volatile int64_t t96 = 206620558008806LL;

	t96 = (x385^((x386<x387)|x388));

	if (t96 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x390 = -1;
	volatile int64_t x392 = -1LL;
	int64_t t97 = -1LL;

	t97 = (x389^((x390<x391)|x392));

	if (t97 != -65536LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = 480836876026071094LLU;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MAX;
	volatile int64_t x396 = INT64_MAX;

	t98 = (x393^((x394<x395)|x396));

	if (t98 != 8742535160828704713LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -3093;
	int32_t x398 = 285233144;
	volatile int64_t x399 = -53LL;
	int8_t x400 = -2;

	t99 = (x397^((x398<x399)|x400));

	if (t99 != 3093) { NG(); } else { ; }
	
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

