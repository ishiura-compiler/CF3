#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
int32_t t0 = -14477195;
int8_t x6 = INT8_MIN;
uint32_t x9 = UINT32_MAX;
int32_t t2 = -6;
uint16_t x17 = 3779U;
volatile uint8_t x21 = 48U;
static uint32_t x24 = 124112U;
static uint64_t x28 = 1520502806628LLU;
int16_t x34 = -1;
int16_t x39 = INT16_MIN;
int16_t x43 = INT16_MIN;
static int8_t x44 = INT8_MIN;
int32_t t10 = 1;
static int32_t x48 = -97;
static int64_t x54 = INT64_MIN;
int8_t x55 = 6;
static int16_t x58 = INT16_MIN;
int32_t x60 = INT32_MIN;
int32_t x61 = INT32_MIN;
volatile int32_t t17 = 0;
uint16_t x78 = 4117U;
int8_t x82 = INT8_MAX;
int64_t x89 = INT64_MAX;
int64_t x92 = INT64_MAX;
volatile uint64_t x93 = UINT64_MAX;
uint8_t x95 = UINT8_MAX;
volatile int16_t x98 = INT16_MIN;
uint8_t x105 = UINT8_MAX;
volatile int8_t x106 = INT8_MIN;
uint8_t x111 = 0U;
static uint32_t x124 = 60259284U;
static volatile uint16_t x126 = UINT16_MAX;
volatile int8_t x129 = INT8_MIN;
uint16_t x131 = 205U;
int32_t x133 = -1;
int32_t x136 = 880824033;
static int16_t x137 = INT16_MIN;
volatile int32_t t34 = 11914219;
volatile int32_t x152 = INT32_MIN;
static volatile int32_t t37 = -90262307;
int32_t x157 = -1;
volatile int16_t x164 = INT16_MIN;
int16_t x170 = INT16_MAX;
int32_t t44 = 1399682;
volatile int32_t t45 = -5335131;
int32_t x185 = -9672119;
volatile int32_t t46 = 122341;
int32_t t47 = -3966012;
int64_t x196 = INT64_MIN;
static int64_t x197 = -344405195LL;
volatile int32_t x201 = 494;
static int64_t x204 = INT64_MIN;
static int32_t t51 = 448181878;
static int32_t x210 = 2041;
uint16_t x212 = 4751U;
volatile uint16_t x227 = 204U;
int64_t x230 = INT64_MAX;
static volatile int32_t x234 = INT32_MIN;
volatile int8_t x236 = -4;
static int32_t t58 = 36350776;
uint32_t x237 = 2066286910U;
uint8_t x246 = 29U;
int8_t x247 = INT8_MAX;
int16_t x251 = -1355;
int8_t x258 = INT8_MIN;
uint16_t x266 = 8U;
int64_t x273 = INT64_MAX;
int16_t x279 = -1;
int32_t x280 = INT32_MIN;
int64_t x282 = INT64_MIN;
int16_t x283 = INT16_MIN;
volatile int32_t t70 = 3462;
static volatile uint8_t x288 = 57U;
static int32_t x292 = -1;
uint64_t x299 = UINT64_MAX;
static volatile uint8_t x307 = 19U;
int32_t t76 = 1;
volatile int16_t x311 = INT16_MAX;
int32_t t78 = 7872351;
static int16_t x328 = INT16_MIN;
int32_t t81 = -1;
int8_t x337 = -1;
static int16_t x338 = INT16_MIN;
uint32_t x340 = 88228U;
int16_t x341 = -137;
int8_t x345 = 55;
static int8_t x348 = 21;
uint32_t x349 = UINT32_MAX;
int16_t x350 = -1;
int64_t x354 = INT64_MIN;
int16_t x360 = INT16_MAX;
int32_t x363 = 16615248;
uint32_t x367 = UINT32_MAX;
int32_t t91 = 21565987;
uint32_t x374 = 270U;
int64_t x375 = INT64_MIN;
volatile int32_t t93 = -336275798;
int64_t x378 = -58LL;
static int16_t x389 = -1;
uint8_t x390 = UINT8_MAX;
uint8_t x396 = 8U;
int16_t x397 = INT16_MAX;


void f0(void) {
	int16_t x1 = -1;
	static int64_t x3 = -352LL;
	static volatile int8_t x4 = INT8_MAX;

	t0 = (x1==((x2&x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 525954906374613791LLU;
	uint32_t x7 = 60998U;
	static volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 3682023;

	t1 = (x5==((x6&x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 20806;
	uint64_t x11 = UINT64_MAX;
	static int64_t x12 = -1LL;

	t2 = (x9==((x10&x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -763;
	int8_t x14 = INT8_MAX;
	int64_t x15 = INT64_MAX;
	static int64_t x16 = INT64_MAX;
	int32_t t3 = 103518555;

	t3 = (x13==((x14&x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 1950623U;
	uint16_t x19 = 25U;
	volatile uint16_t x20 = 0U;
	static int32_t t4 = -37152;

	t4 = (x17==((x18&x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x22 = 7;
	static int32_t x23 = -1;
	volatile int32_t t5 = 161;

	t5 = (x21==((x22&x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	uint8_t x27 = 30U;
	static int32_t t6 = -3;

	t6 = (x25==((x26&x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MIN;
	int8_t x31 = 0;
	static volatile int64_t x32 = 109829890149639LL;
	int32_t t7 = 658;

	t7 = (x29==((x30&x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 71017831LLU;
	volatile int32_t x35 = INT32_MAX;
	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = 29;

	t8 = (x33==((x34&x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	volatile int16_t x38 = INT16_MIN;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = 15756320;

	t9 = (x37==((x38&x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static volatile uint64_t x42 = 206127LLU;

	t10 = (x41==((x42&x43)|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -980;
	uint16_t x46 = 18468U;
	int16_t x47 = INT16_MIN;
	volatile int32_t t11 = -153;

	t11 = (x45==((x46&x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	uint64_t x50 = 12507794LLU;
	volatile int16_t x51 = -10880;
	uint32_t x52 = 1913564U;
	int32_t t12 = 32689;

	t12 = (x49==((x50&x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 179125571191LLU;
	uint64_t x56 = 351584357LLU;
	int32_t t13 = -6318856;

	t13 = (x53==((x54&x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 0U;
	uint8_t x59 = UINT8_MAX;
	int32_t t14 = -29524;

	t14 = (x57==((x58&x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = -230;
	volatile int8_t x63 = -1;
	volatile uint16_t x64 = UINT16_MAX;
	int32_t t15 = 0;

	t15 = (x61==((x62&x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int64_t x66 = INT64_MAX;
	int32_t x67 = INT32_MIN;
	static uint64_t x68 = UINT64_MAX;
	int32_t t16 = -43282374;

	t16 = (x65==((x66&x67)|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int16_t x70 = INT16_MIN;
	int16_t x71 = -1;
	int8_t x72 = -1;

	t17 = (x69==((x70&x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = UINT32_MAX;
	int64_t x74 = -1LL;
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = -4237;

	t18 = (x73==((x74&x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	volatile int64_t x79 = INT64_MIN;
	volatile int32_t x80 = 34026931;
	static volatile int32_t t19 = -3416255;

	t19 = (x77==((x78&x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 2U;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = 1;

	t20 = (x81==((x82&x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static int8_t x86 = INT8_MAX;
	static volatile int32_t x87 = INT32_MIN;
	uint64_t x88 = UINT64_MAX;
	int32_t t21 = 1660735;

	t21 = (x85==((x86&x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = 15871083U;
	uint32_t x91 = UINT32_MAX;
	int32_t t22 = -5250049;

	t22 = (x89==((x90&x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	volatile int8_t x96 = 3;
	static int32_t t23 = 682;

	t23 = (x93==((x94&x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MAX;
	uint64_t x99 = 1652046LLU;
	volatile int8_t x100 = -25;
	int32_t t24 = 3;

	t24 = (x97==((x98&x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 751;
	uint64_t x102 = 152LLU;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t25 = 8634285;

	t25 = (x101==((x102&x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x107 = INT16_MIN;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = 101928252;

	t26 = (x105==((x106&x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 6;
	uint32_t x110 = UINT32_MAX;
	static volatile uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 149;

	t27 = (x109==((x110&x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = 2828545238018679LLU;
	int32_t x115 = -1;
	uint8_t x116 = UINT8_MAX;
	int32_t t28 = 263;

	t28 = (x113==((x114&x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = 152544LL;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	volatile int32_t x120 = -2042970;
	int32_t t29 = -464;

	t29 = (x117==((x118&x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 0LLU;
	volatile int64_t x122 = -155029633061547LL;
	int64_t x123 = INT64_MAX;
	volatile int32_t t30 = -5;

	t30 = (x121==((x122&x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -21;
	int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 1046145965;

	t31 = (x125==((x126&x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x130 = UINT8_MAX;
	uint32_t x132 = 4U;
	volatile int32_t t32 = -486;

	t32 = (x129==((x130&x131)|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -1;
	uint32_t x135 = 101116U;
	volatile int32_t t33 = 78344268;

	t33 = (x133==((x134&x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x138 = INT16_MIN;
	static int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MIN;

	t34 = (x137==((x138&x139)|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	uint64_t x142 = UINT64_MAX;
	volatile int32_t x143 = -1;
	volatile int16_t x144 = INT16_MAX;
	static volatile int32_t t35 = -83031;

	t35 = (x141==((x142&x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MAX;
	int32_t x146 = INT32_MAX;
	uint16_t x147 = 123U;
	int64_t x148 = 2703381394475LL;
	volatile int32_t t36 = 523986463;

	t36 = (x145==((x146&x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = -13;
	int32_t x150 = INT32_MAX;
	static int64_t x151 = INT64_MIN;

	t37 = (x149==((x150&x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 13065888914635392LLU;
	volatile int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -103;
	volatile int32_t t38 = 209765;

	t38 = (x153==((x154&x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MAX;
	uint64_t x159 = UINT64_MAX;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = 14;

	t39 = (x157==((x158&x159)|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -2533848255LL;
	uint64_t x162 = 2241019357075332LLU;
	int32_t x163 = INT32_MIN;
	volatile int32_t t40 = 1727;

	t40 = (x161==((x162&x163)|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	int64_t x168 = 1507060534514828679LL;
	int32_t t41 = 100315;

	t41 = (x165==((x166&x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	static int64_t x171 = -1LL;
	volatile int8_t x172 = -1;
	int32_t t42 = 0;

	t42 = (x169==((x170&x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 21069226173147878LL;
	static int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MIN;
	static volatile int64_t x176 = -1LL;
	int32_t t43 = -112;

	t43 = (x173==((x174&x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	volatile int16_t x178 = INT16_MIN;
	volatile int32_t x179 = INT32_MIN;
	static int8_t x180 = INT8_MAX;

	t44 = (x177==((x178&x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	volatile int8_t x182 = INT8_MIN;
	static volatile int8_t x183 = INT8_MAX;
	int64_t x184 = INT64_MAX;

	t45 = (x181==((x182&x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = UINT32_MAX;
	uint64_t x187 = 111938344486198LLU;
	int8_t x188 = INT8_MIN;

	t46 = (x185==((x186&x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MAX;
	int32_t x190 = -1;
	volatile uint16_t x191 = 208U;
	int32_t x192 = INT32_MAX;

	t47 = (x189==((x190&x191)|x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = 8617;
	volatile int32_t t48 = 676;

	t48 = (x193==((x194&x195)|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MIN;
	static int8_t x200 = -26;
	int32_t t49 = -1159;

	t49 = (x197==((x198&x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = 6;
	int32_t x203 = INT32_MIN;
	int32_t t50 = -295862;

	t50 = (x201==((x202&x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -9258;
	volatile int64_t x206 = INT64_MAX;
	volatile int64_t x207 = INT64_MAX;
	int64_t x208 = -3LL;

	t51 = (x205==((x206&x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 0;
	int32_t x211 = INT32_MAX;
	static int32_t t52 = -1014;

	t52 = (x209==((x210&x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 0;
	volatile int64_t x214 = -1249837762602265LL;
	uint64_t x215 = 67166521699LLU;
	volatile uint8_t x216 = UINT8_MAX;
	static int32_t t53 = -49469;

	t53 = (x213==((x214&x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = 22U;
	static volatile int32_t t54 = 3552;

	t54 = (x217==((x218&x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = UINT64_MAX;
	int64_t x222 = 289LL;
	int64_t x223 = -1LL;
	int8_t x224 = INT8_MAX;
	int32_t t55 = 2690762;

	t55 = (x221==((x222&x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = UINT64_MAX;
	static uint32_t x226 = 13U;
	uint16_t x228 = 77U;
	static volatile int32_t t56 = -37;

	t56 = (x225==((x226&x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	static int32_t x231 = 15;
	static uint64_t x232 = UINT64_MAX;
	int32_t t57 = 226649;

	t57 = (x229==((x230&x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = -1;
	int16_t x235 = -1;

	t58 = (x233==((x234&x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x238 = UINT32_MAX;
	uint16_t x239 = 0U;
	static uint8_t x240 = 39U;
	volatile int32_t t59 = 82305;

	t59 = (x237==((x238&x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MIN;
	static int16_t x243 = INT16_MIN;
	static uint16_t x244 = 31422U;
	int32_t t60 = -2;

	t60 = (x241==((x242&x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 54608LLU;
	int64_t x248 = -1LL;
	volatile int32_t t61 = 984584;

	t61 = (x245==((x246&x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 0U;
	volatile int16_t x250 = INT16_MAX;
	static int8_t x252 = INT8_MAX;
	volatile int32_t t62 = 3;

	t62 = (x249==((x250&x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = -274340150532311LL;
	int16_t x255 = INT16_MIN;
	static int64_t x256 = 635064472805708668LL;
	volatile int32_t t63 = 148065769;

	t63 = (x253==((x254&x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	int16_t x260 = -1;
	int32_t t64 = 81311815;

	t64 = (x257==((x258&x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	volatile int16_t x263 = -1;
	int32_t x264 = INT32_MAX;
	static volatile int32_t t65 = -19;

	t65 = (x261==((x262&x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int64_t x267 = 1LL;
	static volatile int8_t x268 = INT8_MIN;
	int32_t t66 = 303111;

	t66 = (x265==((x266&x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 0;
	int64_t x270 = 2953431262171289LL;
	static uint64_t x271 = UINT64_MAX;
	volatile int32_t x272 = INT32_MIN;
	static volatile int32_t t67 = -62334591;

	t67 = (x269==((x270&x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = INT64_MAX;
	volatile uint32_t x275 = 116184U;
	static int32_t x276 = 54;
	volatile int32_t t68 = -195;

	t68 = (x273==((x274&x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	int32_t t69 = -10;

	t69 = (x277==((x278&x279)|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int32_t x284 = 1356737;

	t70 = (x281==((x282&x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 50333937;
	int32_t x286 = INT32_MIN;
	static volatile uint16_t x287 = UINT16_MAX;
	volatile int32_t t71 = 124;

	t71 = (x285==((x286&x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 2644966968348552LLU;
	int16_t x290 = INT16_MAX;
	volatile int8_t x291 = 7;
	int32_t t72 = 28195682;

	t72 = (x289==((x290&x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = UINT8_MAX;
	int32_t x294 = INT32_MIN;
	volatile uint16_t x295 = UINT16_MAX;
	static int64_t x296 = -179053LL;
	int32_t t73 = -90;

	t73 = (x293==((x294&x295)|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = UINT32_MAX;
	volatile int32_t x298 = INT32_MAX;
	volatile int16_t x300 = -1;
	int32_t t74 = 431325501;

	t74 = (x297==((x298&x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 65U;
	int16_t x302 = 1;
	int64_t x303 = INT64_MIN;
	volatile uint32_t x304 = 1U;
	volatile int32_t t75 = 235;

	t75 = (x301==((x302&x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int16_t x306 = 0;
	uint16_t x308 = 80U;

	t76 = (x305==((x306&x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int8_t x310 = -1;
	uint8_t x312 = 2U;
	static volatile int32_t t77 = 2409532;

	t77 = (x309==((x310&x311)|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = -1;
	uint8_t x315 = 62U;
	volatile int16_t x316 = INT16_MAX;

	t78 = (x313==((x314&x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 970419574U;
	int32_t x318 = -1;
	static int8_t x319 = -1;
	int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -121283279;

	t79 = (x317==((x318&x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	int32_t x322 = 42162548;
	static uint32_t x323 = 201746447U;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 41989577;

	t80 = (x321==((x322&x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = 2;
	static int8_t x326 = INT8_MAX;
	uint16_t x327 = UINT16_MAX;

	t81 = (x325==((x326&x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	static uint64_t x330 = 30LLU;
	volatile int32_t x331 = -1;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t82 = -211;

	t82 = (x329==((x330&x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 0U;
	static int8_t x334 = 3;
	volatile uint64_t x335 = UINT64_MAX;
	int64_t x336 = 93LL;
	volatile int32_t t83 = -27;

	t83 = (x333==((x334&x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x339 = INT16_MIN;
	volatile int32_t t84 = 21306797;

	t84 = (x337==((x338&x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = -1;
	int64_t x343 = -1LL;
	int16_t x344 = INT16_MAX;
	int32_t t85 = 132191;

	t85 = (x341==((x342&x343)|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	uint64_t x347 = UINT64_MAX;
	int32_t t86 = -22;

	t86 = (x345==((x346&x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x351 = 83U;
	static int64_t x352 = -1LL;
	int32_t t87 = 4;

	t87 = (x349==((x350&x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 2293231LLU;
	int64_t x355 = INT64_MIN;
	static int32_t x356 = 204586107;
	volatile int32_t t88 = -31;

	t88 = (x353==((x354&x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = 17U;
	volatile int64_t x358 = -864811467LL;
	int8_t x359 = 10;
	static volatile int32_t t89 = 981380;

	t89 = (x357==((x358&x359)|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 17;
	uint64_t x362 = 3330073LLU;
	uint8_t x364 = 1U;
	static int32_t t90 = 5;

	t90 = (x361==((x362&x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MIN;
	int8_t x366 = 5;
	int8_t x368 = -1;

	t91 = (x365==((x366&x367)|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = -1;
	volatile int64_t x370 = INT64_MIN;
	static int64_t x371 = INT64_MIN;
	volatile int32_t x372 = INT32_MIN;
	volatile int32_t t92 = 0;

	t92 = (x369==((x370&x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 5U;
	uint16_t x376 = 32561U;

	t93 = (x373==((x374&x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	uint8_t x379 = 13U;
	uint8_t x380 = UINT8_MAX;
	static int32_t t94 = 93688;

	t94 = (x377==((x378&x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	volatile int16_t x382 = INT16_MAX;
	uint32_t x383 = 3U;
	int16_t x384 = 2;
	volatile int32_t t95 = 15849961;

	t95 = (x381==((x382&x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = 42;
	uint32_t x386 = 44880U;
	uint64_t x387 = 157LLU;
	int32_t x388 = INT32_MAX;
	volatile int32_t t96 = -18228082;

	t96 = (x385==((x386&x387)|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x391 = -3;
	int16_t x392 = -2196;
	volatile int32_t t97 = -990033149;

	t97 = (x389==((x390&x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -23108;
	static int32_t x394 = INT32_MAX;
	uint32_t x395 = UINT32_MAX;
	static volatile int32_t t98 = -30736797;

	t98 = (x393==((x394&x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = 586LL;
	volatile int32_t x399 = INT32_MAX;
	static volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = -1603;

	t99 = (x397==((x398&x399)|x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

