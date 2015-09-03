#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = -2203LL;
uint16_t x18 = UINT16_MAX;
int8_t x20 = 2;
int64_t t4 = -1LL;
int32_t x25 = INT32_MAX;
uint16_t x31 = 118U;
static int16_t x32 = INT16_MAX;
int32_t x35 = 612;
static uint8_t x37 = 13U;
static int8_t x40 = -1;
int64_t t9 = -8255774447590437LL;
int64_t x49 = INT64_MIN;
volatile uint32_t x50 = UINT32_MAX;
int32_t x52 = INT32_MIN;
volatile int64_t t11 = 177102574232871LL;
int64_t x53 = 457798LL;
volatile int64_t x54 = -1LL;
static volatile int32_t x56 = INT32_MIN;
volatile uint8_t x57 = 7U;
int8_t x70 = INT8_MIN;
uint32_t x73 = 14U;
int32_t x96 = -3905;
volatile uint64_t t21 = 175406517059947882LLU;
uint8_t x106 = 75U;
int16_t x110 = -1;
int16_t x111 = INT16_MAX;
int16_t x120 = -1;
int16_t x131 = -3;
int16_t x132 = INT16_MAX;
volatile uint64_t x134 = UINT64_MAX;
uint64_t x136 = 47703443LLU;
int32_t x138 = -1;
volatile uint32_t t31 = 839573U;
static uint8_t x143 = UINT8_MAX;
int64_t x147 = 114464299857914LL;
static volatile int32_t x148 = -1;
static int64_t x149 = INT64_MIN;
int8_t x151 = INT8_MIN;
static volatile uint8_t x153 = 90U;
static uint64_t x163 = UINT64_MAX;
uint64_t x165 = 13284167159824LLU;
uint64_t x180 = 28976242556522LLU;
int16_t x195 = 2;
uint32_t x218 = UINT32_MAX;
uint64_t x229 = UINT64_MAX;
uint8_t x231 = 57U;
uint64_t x232 = UINT64_MAX;
uint16_t x241 = UINT16_MAX;
static uint8_t x245 = UINT8_MAX;
int8_t x246 = INT8_MIN;
int16_t x250 = -1;
uint64_t x257 = 8498266758438136286LLU;
static int32_t x260 = -370952;
volatile int8_t x261 = -1;
volatile int64_t x262 = 1296130554593733739LL;
static int64_t x263 = -6962194LL;
int8_t x277 = -1;
static int32_t x286 = INT32_MIN;
int16_t x288 = INT16_MAX;
int8_t x293 = INT8_MIN;
static int64_t x299 = -1LL;
volatile uint64_t x301 = 1165142923590LLU;
volatile int16_t x302 = INT16_MIN;
volatile uint64_t x303 = 442318813470278792LLU;
static volatile int16_t x309 = INT16_MIN;
static int64_t t71 = -10039394056694516LL;
int16_t x319 = 8;
uint32_t x320 = 26243U;
uint64_t x322 = 22700565LLU;
volatile uint64_t t74 = 29796248LLU;
volatile uint64_t x333 = 54583064188124030LLU;
static int64_t x336 = -1LL;
volatile int8_t x337 = INT8_MIN;
volatile uint64_t t78 = 405585LLU;
uint32_t t80 = 259312752U;
int8_t x357 = 47;
int16_t x364 = 1;
static int16_t x365 = 828;
static int32_t x366 = 173605186;
int32_t x367 = INT32_MIN;
int32_t x376 = INT32_MAX;
static int64_t x379 = -1LL;
uint8_t x380 = 1U;
static int16_t x386 = -1;
uint64_t t89 = 11947296613088LLU;
volatile int8_t x389 = INT8_MIN;
volatile uint8_t x393 = 1U;
int32_t t91 = 118167;
int16_t x400 = INT16_MAX;
volatile uint64_t t93 = 231751527630316LLU;
volatile int8_t x406 = -9;
int16_t x430 = INT16_MIN;
uint64_t t99 = 165271LLU;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MAX;
	int32_t x4 = -788982;
	volatile int32_t t0 = 520375;

	t0 = (x1&((x2+x3)|x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile uint32_t x6 = 1798376826U;
	uint16_t x7 = UINT16_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile uint32_t t1 = 8096U;

	t1 = (x5&((x6+x7)|x8));

	if (t1 != 1798438912U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int8_t x10 = -56;
	static int8_t x11 = INT8_MIN;
	int64_t t2 = -2006978799677192757LL;

	t2 = (x9&((x10+x11)|x12));

	if (t2 != 2147483501LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	volatile uint8_t x14 = 28U;
	static int16_t x15 = INT16_MIN;
	uint32_t x16 = UINT32_MAX;
	int64_t t3 = 0LL;

	t3 = (x13&((x14+x15)|x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x19 = -46;

	t4 = (x17&((x18+x19)|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = INT16_MIN;
	static int8_t x27 = -1;
	static int8_t x28 = INT8_MAX;
	static volatile int32_t t5 = 898032;

	t5 = (x25&((x26+x27)|x28));

	if (t5 != 2147450879) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -1;
	static volatile int32_t x30 = -13;
	volatile int32_t t6 = -240517934;

	t6 = (x29&((x30+x31)|x32));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int8_t x34 = INT8_MIN;
	int8_t x36 = INT8_MAX;
	static volatile int64_t t7 = -213444644970LL;

	t7 = (x33&((x34+x35)|x36));

	if (t7 != 511LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x38 = INT8_MAX;
	static uint16_t x39 = 93U;
	volatile int32_t t8 = 172;

	t8 = (x37&((x38+x39)|x40));

	if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 11435801985873134LL;
	int64_t x42 = -5985789801LL;
	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MAX;

	t9 = (x41&((x42+x43)|x44));

	if (t9 != 11435797153616110LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 222U;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	volatile int64_t x48 = INT64_MIN;
	static volatile int64_t t10 = 84144050LL;

	t10 = (x45&((x46+x47)|x48));

	if (t10 != 222LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x51 = INT8_MIN;

	t11 = (x49&((x50+x51)|x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x55 = 44476884848995211LL;
	int64_t t12 = -554108726LL;

	t12 = (x53&((x54+x55)|x56));

	if (t12 != 190466LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = -1;
	static volatile int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	int32_t t13 = 5969;

	t13 = (x57&((x58+x59)|x60));

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -654;
	volatile int64_t x62 = -69648404045LL;
	int32_t x63 = 24250;
	volatile uint32_t x64 = 380868U;
	volatile int64_t t14 = -610938468LL;

	t14 = (x61&((x62+x63)|x64));

	if (t14 != -69647999648LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = 0;
	static int8_t x66 = 45;
	int64_t x67 = INT64_MIN;
	int16_t x68 = -1;
	int64_t t15 = -2672549461000LL;

	t15 = (x65&((x66+x67)|x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 1;
	static int16_t x71 = INT16_MAX;
	int32_t x72 = -54;
	static volatile int32_t t16 = -241185711;

	t16 = (x69&((x70+x71)|x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 574U;
	static uint8_t x76 = 49U;
	volatile uint64_t t17 = 124337020366LLU;

	t17 = (x73&((x74+x75)|x76));

	if (t17 != 12LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x85 = -1884;
	uint64_t x86 = 455199773721LLU;
	volatile int64_t x87 = INT64_MIN;
	static int16_t x88 = -1;
	static volatile uint64_t t18 = 50865LLU;

	t18 = (x85&((x86+x87)|x88));

	if (t18 != 18446744073709549732LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 3857U;
	int16_t x91 = -1839;
	int32_t x92 = -264915;
	volatile uint32_t t19 = 0U;

	t19 = (x89&((x90+x91)|x92));

	if (t19 != 4294703087U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = -1;
	int64_t x94 = 120104LL;
	int16_t x95 = INT16_MIN;
	int64_t t20 = -12693LL;

	t20 = (x93&((x94+x95)|x96));

	if (t20 != -2625LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = INT16_MIN;
	static int16_t x98 = -1;
	static int8_t x99 = INT8_MAX;
	static uint64_t x100 = 8LLU;

	t21 = (x97&((x98+x99)|x100));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	static uint64_t x102 = 914410352495418296LLU;
	volatile uint8_t x103 = 113U;
	static uint32_t x104 = 91706476U;
	volatile uint64_t t22 = 2833751880893LLU;

	t22 = (x101&((x102+x103)|x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = UINT8_MAX;
	static int16_t x107 = -1;
	static uint64_t x108 = 179819851652LLU;
	uint64_t t23 = 34LLU;

	t23 = (x105&((x106+x107)|x108));

	if (t23 != 206LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	static int8_t x112 = INT8_MAX;
	volatile int32_t t24 = -3635636;

	t24 = (x109&((x110+x111)|x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 13377U;
	volatile int16_t x114 = INT16_MIN;
	int32_t x115 = -10;
	int8_t x116 = -1;
	int32_t t25 = -145627;

	t25 = (x113&((x114+x115)|x116));

	if (t25 != 13377) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = INT64_MAX;
	uint16_t x118 = 85U;
	int8_t x119 = INT8_MIN;
	static int64_t t26 = INT64_MAX;

	t26 = (x117&((x118+x119)|x120));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x121 = 9U;
	uint64_t x122 = 14LLU;
	volatile int8_t x123 = INT8_MIN;
	volatile int16_t x124 = -1;
	static uint64_t t27 = 571098093067997711LLU;

	t27 = (x121&((x122+x123)|x124));

	if (t27 != 9LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = 0U;
	static int64_t x126 = -1LL;
	uint32_t x127 = 8874U;
	int8_t x128 = -7;
	int64_t t28 = -40213762952LL;

	t28 = (x125&((x126+x127)|x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = -1;
	static int16_t x130 = 37;
	int32_t t29 = -1;

	t29 = (x129&((x130+x131)|x132));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MIN;
	int32_t x135 = 1590;
	volatile uint64_t t30 = 28396605936LLU;

	t30 = (x133&((x134+x135)|x136));

	if (t30 != 47677440LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	volatile int8_t x139 = INT8_MAX;
	volatile uint32_t x140 = UINT32_MAX;

	t31 = (x137&((x138+x139)|x140));

	if (t31 != 4294967168U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = UINT32_MAX;
	int8_t x142 = INT8_MIN;
	static int32_t x144 = INT32_MIN;
	volatile uint32_t t32 = 15407U;

	t32 = (x141&((x142+x143)|x144));

	if (t32 != 2147483775U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x145 = 3U;
	volatile int8_t x146 = INT8_MAX;
	volatile int64_t t33 = 1696501LL;

	t33 = (x145&((x146+x147)|x148));

	if (t33 != 3LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = INT8_MIN;
	int64_t x152 = INT64_MAX;
	int64_t t34 = INT64_MIN;

	t34 = (x149&((x150+x151)|x152));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x154 = 28510U;
	int32_t x155 = 3555;
	static uint32_t x156 = 6U;
	volatile uint32_t t35 = 961506999U;

	t35 = (x153&((x154+x155)|x156));

	if (t35 != 66U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = -1;
	static int8_t x158 = INT8_MIN;
	static uint32_t x159 = 1900U;
	static int32_t x160 = INT32_MAX;
	static uint32_t t36 = 20556533U;

	t36 = (x157&((x158+x159)|x160));

	if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = -1;
	static volatile uint8_t x162 = 7U;
	uint32_t x164 = UINT32_MAX;
	volatile uint64_t t37 = 1879LLU;

	t37 = (x161&((x162+x163)|x164));

	if (t37 != 4294967295LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x166 = -1;
	static int16_t x167 = -9202;
	int64_t x168 = INT64_MIN;
	static uint64_t t38 = 2043901118369LLU;

	t38 = (x165&((x166+x167)|x168));

	if (t38 != 13284167159808LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -1;
	int32_t x170 = -1;
	int64_t x171 = 14LL;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x169&((x170+x171)|x172));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x173 = -2;
	uint16_t x174 = UINT16_MAX;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = -1;
	uint32_t t40 = 19U;

	t40 = (x173&((x174+x175)|x176));

	if (t40 != 4294967294U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MAX;
	int32_t x179 = -1;
	uint64_t t41 = 165815266950264167LLU;

	t41 = (x177&((x178+x179)|x180));

	if (t41 != 28975996862464LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	int32_t x182 = 0;
	int64_t x183 = INT64_MAX;
	int64_t x184 = -1LL;
	static int64_t t42 = 237716631991688964LL;

	t42 = (x181&((x182+x183)|x184));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 3U;
	static volatile int16_t x186 = INT16_MIN;
	uint32_t x187 = 131036876U;
	static int8_t x188 = 58;
	volatile uint32_t t43 = 253U;

	t43 = (x185&((x186+x187)|x188));

	if (t43 != 2U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -14;
	static int64_t x190 = -91LL;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = INT64_MIN;
	int64_t t44 = -486619639381734692LL;

	t44 = (x189&((x190+x191)|x192));

	if (t44 != -9223372036854710368LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x193 = 1U;
	static int64_t x194 = -235LL;
	volatile uint32_t x196 = UINT32_MAX;
	int64_t t45 = -60430560636LL;

	t45 = (x193&((x194+x195)|x196));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MAX;
	uint64_t x199 = 139694429490802LLU;
	int8_t x200 = -2;
	volatile uint64_t t46 = 2013275506557906LLU;

	t46 = (x197&((x198+x199)|x200));

	if (t46 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -1;
	uint16_t x202 = 10671U;
	volatile int8_t x203 = INT8_MIN;
	static int32_t x204 = INT32_MIN;
	static int32_t t47 = -244;

	t47 = (x201&((x202+x203)|x204));

	if (t47 != -2147473105) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x205 = 41;
	int8_t x206 = 54;
	volatile int32_t x207 = -465;
	int16_t x208 = -1;
	volatile int32_t t48 = 1;

	t48 = (x205&((x206+x207)|x208));

	if (t48 != 41) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -1;
	int64_t x210 = -1LL;
	static volatile uint32_t x211 = 0U;
	static volatile int16_t x212 = INT16_MIN;
	volatile int64_t t49 = -20354652554416573LL;

	t49 = (x209&((x210+x211)|x212));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = -1;
	int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	int32_t t50 = -1807461;

	t50 = (x213&((x214+x215)|x216));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x217 = INT64_MIN;
	int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MIN;
	int64_t t51 = 183033LL;

	t51 = (x217&((x218+x219)|x220));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 5U;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = INT32_MIN;
	volatile int8_t x224 = INT8_MAX;
	uint32_t t52 = 37561892U;

	t52 = (x221&((x222+x223)|x224));

	if (t52 != 5U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 1U;
	int16_t x226 = 0;
	int64_t x227 = -1LL;
	uint16_t x228 = 7102U;
	volatile int64_t t53 = 103940555991LL;

	t53 = (x225&((x226+x227)|x228));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x230 = UINT16_MAX;
	static uint64_t t54 = UINT64_MAX;

	t54 = (x229&((x230+x231)|x232));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = 0;
	volatile uint64_t x235 = 105953622779606LLU;
	volatile int64_t x236 = INT64_MAX;
	static uint64_t t55 = 2503958272LLU;

	t55 = (x233&((x234+x235)|x236));

	if (t55 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x242 = 2751;
	int16_t x243 = INT16_MIN;
	uint64_t x244 = 1410492LLU;
	static volatile uint64_t t56 = 320782758808LLU;

	t56 = (x241&((x242+x243)|x244));

	if (t56 != 36799LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x247 = -32158LL;
	volatile int16_t x248 = INT16_MAX;
	int64_t t57 = -28320784869483264LL;

	t57 = (x245&((x246+x247)|x248));

	if (t57 != 255LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x249 = 206191987U;
	int32_t x251 = 730882;
	volatile int64_t x252 = INT64_MIN;
	int64_t t58 = -3901923338121326805LL;

	t58 = (x249&((x250+x251)|x252));

	if (t58 != 664833LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x258 = -1551LL;
	int8_t x259 = INT8_MAX;
	uint64_t t59 = 2151425939658085175LLU;

	t59 = (x257&((x258+x259)|x260));

	if (t59 != 8498266758438136024LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x264 = INT16_MAX;
	int64_t t60 = 60534416768415LL;

	t60 = (x261&((x262+x263)|x264));

	if (t60 != 1296130554586791935LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 359863129377LLU;
	volatile int16_t x267 = INT16_MIN;
	int8_t x268 = -1;
	uint64_t t61 = 2LLU;

	t61 = (x265&((x266+x267)|x268));

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = INT8_MIN;
	static int16_t x270 = -1;
	volatile uint16_t x271 = UINT16_MAX;
	static volatile int32_t x272 = -763083;
	volatile int32_t t62 = 39802079;

	t62 = (x269&((x270+x271)|x272));

	if (t62 != -721024) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x278 = 10;
	int64_t x279 = INT64_MIN;
	int16_t x280 = -3558;
	volatile int64_t t63 = -94866925408455826LL;

	t63 = (x277&((x278+x279)|x280));

	if (t63 != -3558LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = INT64_MIN;
	static uint8_t x282 = 1U;
	volatile int64_t x283 = -1LL;
	int32_t x284 = 5;
	static volatile int64_t t64 = -402776462560LL;

	t64 = (x281&((x282+x283)|x284));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x285 = UINT8_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	int32_t t65 = -553042;

	t65 = (x285&((x286+x287)|x288));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x289 = -11453392;
	static volatile int32_t x290 = INT32_MAX;
	static volatile int64_t x291 = 1050997018124LL;
	int16_t x292 = -347;
	volatile int64_t t66 = 436LL;

	t66 = (x289&((x290+x291)|x292));

	if (t66 != -11453408LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x294 = INT16_MIN;
	uint32_t x295 = 5U;
	int64_t x296 = 421LL;
	int64_t t67 = -31208685813226LL;

	t67 = (x293&((x294+x295)|x296));

	if (t67 != 4294934912LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x297 = INT64_MAX;
	static int32_t x298 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	volatile int64_t t68 = -914876567LL;

	t68 = (x297&((x298+x299)|x300));

	if (t68 != 2147483646LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x304 = -2;
	volatile uint64_t t69 = 6861179497LLU;

	t69 = (x301&((x302+x303)|x304));

	if (t69 != 1165142923590LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x305 = INT8_MAX;
	int16_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	static volatile int16_t x308 = INT16_MAX;
	int32_t t70 = 63059013;

	t70 = (x305&((x306+x307)|x308));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x310 = 3840LL;
	volatile int64_t x311 = 53LL;
	uint16_t x312 = 3U;

	t71 = (x309&((x310+x311)|x312));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x313 = INT64_MAX;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = 12963002737LL;
	static uint16_t x316 = 89U;
	int64_t t72 = -68803419633LL;

	t72 = (x313&((x314+x315)|x316));

	if (t72 != 12963068281LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x317 = -1LL;
	uint16_t x318 = UINT16_MAX;
	static int64_t t73 = -527319667243395670LL;

	t73 = (x317&((x318+x319)|x320));

	if (t73 != 91783LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x321 = UINT8_MAX;
	static int32_t x323 = -1;
	volatile int16_t x324 = -1;

	t74 = (x321&((x322+x323)|x324));

	if (t74 != 255LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = 852468U;
	volatile int64_t x326 = -1LL;
	int32_t x327 = INT32_MAX;
	static int8_t x328 = -19;
	int64_t t75 = -3LL;

	t75 = (x325&((x326+x327)|x328));

	if (t75 != 852468LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x334 = INT32_MAX;
	volatile int16_t x335 = -1;
	static volatile uint64_t t76 = 104LLU;

	t76 = (x333&((x334+x335)|x336));

	if (t76 != 54583064188124030LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x338 = 1786229104LLU;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MIN;
	static volatile uint64_t t77 = 16473411585681633LLU;

	t77 = (x337&((x338+x339)|x340));

	if (t77 != 18446744073709531392LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = 68LL;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = 9178LLU;
	volatile uint16_t x344 = UINT16_MAX;

	t78 = (x341&((x342+x343)|x344));

	if (t78 != 68LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = -4379746865LL;
	int32_t x346 = INT32_MIN;
	static int16_t x347 = INT16_MAX;
	static uint8_t x348 = UINT8_MAX;
	int64_t t79 = 8860160928118219LL;

	t79 = (x345&((x346+x347)|x348));

	if (t79 != -6442426929LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x349 = -46;
	uint32_t x350 = 15322684U;
	int16_t x351 = -645;
	static int8_t x352 = 4;

	t80 = (x349&((x350+x351)|x352));

	if (t80 != 15322002U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x353 = 427665965U;
	uint8_t x354 = 1U;
	volatile int32_t x355 = 1041;
	int32_t x356 = INT32_MIN;
	volatile uint32_t t81 = 15559U;

	t81 = (x353&((x354+x355)|x356));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x358 = INT8_MIN;
	static volatile uint32_t x359 = 382864303U;
	int64_t x360 = INT64_MIN;
	int64_t t82 = 2118911389827802953LL;

	t82 = (x357&((x358+x359)|x360));

	if (t82 != 47LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = -1;
	int8_t x363 = -7;
	static int32_t t83 = -5508649;

	t83 = (x361&((x362+x363)|x364));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x368 = INT64_MAX;
	int64_t t84 = 193440246522394LL;

	t84 = (x365&((x366+x367)|x368));

	if (t84 != 828LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x369 = 49081766719775LLU;
	uint32_t x370 = 16464111U;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = 1;
	volatile uint64_t t85 = 13209563839645120LLU;

	t85 = (x369&((x370+x371)|x372));

	if (t85 != 4272143LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x373 = 1U;
	uint8_t x374 = 7U;
	static int8_t x375 = INT8_MIN;
	int32_t t86 = 7183580;

	t86 = (x373&((x374+x375)|x376));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x377 = 25U;
	volatile int32_t x378 = INT32_MIN;
	int64_t t87 = -66833782LL;

	t87 = (x377&((x378+x379)|x380));

	if (t87 != 25LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x381 = -27546643170696LL;
	static uint16_t x382 = 3U;
	volatile uint16_t x383 = 7899U;
	uint8_t x384 = 29U;
	int64_t t88 = 117825157LL;

	t88 = (x381&((x382+x383)|x384));

	if (t88 != 6744LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = 1LLU;
	volatile uint8_t x387 = 0U;
	int8_t x388 = INT8_MIN;

	t89 = (x385&((x386+x387)|x388));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x390 = 267U;
	volatile uint32_t x391 = 782U;
	volatile uint8_t x392 = 44U;
	volatile uint32_t t90 = 1U;

	t90 = (x389&((x390+x391)|x392));

	if (t90 != 1024U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x394 = 2U;
	int32_t x395 = -1;
	uint8_t x396 = UINT8_MAX;

	t91 = (x393&((x394+x395)|x396));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x397 = 3;
	uint64_t x398 = 32LLU;
	static int32_t x399 = INT32_MAX;
	uint64_t t92 = 15LLU;

	t92 = (x397&((x398+x399)|x400));

	if (t92 != 3LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = -1;
	int8_t x402 = 0;
	uint64_t x403 = 1666363642937702621LLU;
	static volatile int64_t x404 = INT64_MIN;

	t93 = (x401&((x402+x403)|x404));

	if (t93 != 10889735679792478429LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = 1752U;
	int64_t x407 = 60051281145834LL;
	static uint64_t x408 = UINT64_MAX;
	volatile uint64_t t94 = 10490LLU;

	t94 = (x405&((x406+x407)|x408));

	if (t94 != 1752LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x409 = 3782177U;
	volatile int16_t x410 = 0;
	int64_t x411 = 27026LL;
	int8_t x412 = 3;
	volatile int64_t t95 = 30204780748LL;

	t95 = (x409&((x410+x411)|x412));

	if (t95 != 8193LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = 0LLU;
	int8_t x414 = INT8_MIN;
	int16_t x415 = 2952;
	uint16_t x416 = 0U;
	volatile uint64_t t96 = 86863147743965LLU;

	t96 = (x413&((x414+x415)|x416));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x417 = INT16_MIN;
	int8_t x418 = INT8_MAX;
	static int32_t x419 = INT32_MIN;
	uint8_t x420 = UINT8_MAX;
	int32_t t97 = INT32_MIN;

	t97 = (x417&((x418+x419)|x420));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x421 = 1U;
	int8_t x422 = INT8_MAX;
	uint32_t x423 = 14U;
	static int16_t x424 = INT16_MIN;
	uint32_t t98 = 982168U;

	t98 = (x421&((x422+x423)|x424));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = -1;
	uint64_t x431 = 181LLU;
	volatile uint64_t x432 = 1LLU;

	t99 = (x429&((x430+x431)|x432));

	if (t99 != 18446744073709519029LLU) { NG(); } else { ; }
	
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

