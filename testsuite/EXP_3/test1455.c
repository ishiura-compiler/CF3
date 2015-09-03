#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -1LL;
static volatile int16_t x2 = INT16_MAX;
int64_t x5 = -1LL;
static int64_t x12 = INT64_MAX;
volatile int32_t t4 = -207791;
static int8_t x25 = INT8_MIN;
int8_t x27 = INT8_MAX;
int32_t t6 = -4753288;
uint32_t x29 = 44932U;
volatile uint32_t x30 = UINT32_MAX;
static volatile int32_t x32 = INT32_MAX;
uint16_t x33 = 12248U;
uint64_t x34 = 1LLU;
static int32_t t9 = -63362;
volatile int64_t x52 = INT64_MIN;
static volatile int32_t t12 = -506;
static int16_t x59 = -1;
int8_t x64 = -44;
static int32_t t16 = -497851;
uint32_t x73 = 615U;
int8_t x83 = INT8_MIN;
uint8_t x87 = 123U;
int8_t x89 = -1;
static volatile int32_t t22 = -23220911;
static volatile int32_t t23 = -33;
int8_t x101 = -26;
volatile int8_t x102 = 44;
volatile int16_t x103 = 0;
int8_t x108 = -1;
static int8_t x110 = 1;
static int32_t x114 = INT32_MIN;
int8_t x118 = -1;
int64_t x126 = -1LL;
static volatile int32_t t31 = -154;
int32_t t32 = -867684704;
volatile uint32_t x140 = UINT32_MAX;
volatile int32_t x141 = INT32_MAX;
volatile uint16_t x143 = 6U;
uint8_t x149 = 1U;
int16_t x152 = -1;
int32_t t37 = 18129962;
static uint16_t x164 = UINT16_MAX;
int16_t x167 = 552;
static int32_t x168 = -1;
volatile uint16_t x172 = 4777U;
volatile int32_t t42 = -10;
int32_t t43 = 0;
static int16_t x181 = INT16_MAX;
static int64_t x183 = INT64_MIN;
uint16_t x184 = 6U;
int32_t x188 = 86363203;
static int8_t x192 = INT8_MIN;
volatile int16_t x194 = INT16_MIN;
static int64_t x200 = -1LL;
int32_t t49 = -7038420;
int8_t x203 = 6;
int32_t x204 = INT32_MAX;
int64_t x208 = INT64_MIN;
volatile int32_t t52 = -75994;
static uint64_t x222 = 90774395553530363LLU;
static int64_t x223 = -1LL;
int32_t x225 = 107196;
volatile int32_t x228 = -3243;
volatile int32_t t56 = 29;
int32_t x230 = INT32_MAX;
volatile uint16_t x231 = 9U;
static uint64_t x232 = 631314663337LLU;
int32_t t57 = 186553913;
int32_t t58 = -19273136;
int8_t x237 = -1;
int8_t x240 = 5;
int8_t x243 = 0;
int64_t x248 = -1LL;
uint16_t x249 = UINT16_MAX;
uint8_t x251 = 28U;
uint64_t x252 = 8859312353859305508LLU;
volatile int32_t x257 = -1;
volatile uint16_t x258 = 28U;
int8_t x271 = -1;
int8_t x272 = INT8_MIN;
int8_t x274 = -1;
static int64_t x275 = INT64_MIN;
static volatile int32_t x282 = INT32_MAX;
uint8_t x283 = 31U;
volatile int32_t t70 = -93944;
int8_t x295 = 33;
int16_t x296 = INT16_MIN;
static int32_t t74 = 0;
int32_t x306 = INT32_MIN;
volatile int32_t x318 = INT32_MIN;
static int32_t x327 = INT32_MAX;
volatile int32_t t81 = 1;
uint32_t x330 = 1551968U;
int8_t x335 = INT8_MAX;
volatile int32_t t83 = 1;
int32_t x354 = INT32_MIN;
int32_t t89 = -10945579;
uint8_t x362 = 11U;
uint16_t x367 = UINT16_MAX;
static volatile int32_t t92 = -8166;
static int16_t x374 = -1;
uint16_t x376 = 1U;
volatile int32_t t93 = 481492677;
static uint32_t x378 = 35U;
uint64_t x384 = 12LLU;
int8_t x389 = INT8_MIN;
volatile int16_t x390 = -1;
volatile int16_t x395 = 0;
volatile int32_t t98 = 520222029;
volatile uint32_t x397 = UINT32_MAX;


void f0(void) {
	int64_t x3 = -1LL;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = 32;

	t0 = ((x1==x2)|(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 0U;
	int64_t x7 = -1LL;
	uint16_t x8 = 3U;
	static int32_t t1 = 255455093;

	t1 = ((x5==x6)|(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 1659416265355LLU;
	static volatile uint64_t x10 = UINT64_MAX;
	uint64_t x11 = 12291422972267867LLU;
	volatile int32_t t2 = -10;

	t2 = ((x9==x10)|(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint8_t x14 = 23U;
	int8_t x15 = 1;
	uint32_t x16 = 8685U;
	int32_t t3 = 139;

	t3 = ((x13==x14)|(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1;
	static uint16_t x18 = UINT16_MAX;
	static uint32_t x19 = UINT32_MAX;
	static uint64_t x20 = 11254430942LLU;

	t4 = ((x17==x18)|(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static int64_t x22 = 73508481362LL;
	static uint16_t x23 = 22U;
	uint32_t x24 = 4U;
	volatile int32_t t5 = -53158309;

	t5 = ((x21==x22)|(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = -1;
	int32_t x28 = -1;

	t6 = ((x25==x26)|(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x31 = 1798470852LLU;
	volatile int32_t t7 = 115;

	t7 = ((x29==x30)|(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = 13176512813181LL;
	volatile int64_t x36 = 1478048508140829909LL;
	int32_t t8 = 208604612;

	t8 = ((x33==x34)|(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 2;
	uint64_t x38 = 917475478968056997LLU;
	int8_t x39 = INT8_MAX;
	static int64_t x40 = 16979466989LL;

	t9 = ((x37==x38)|(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 0LL;
	int32_t x42 = -1;
	int16_t x43 = -661;
	static volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 458;

	t10 = ((x41==x42)|(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MIN;
	volatile uint64_t x47 = 4431688734089116LLU;
	volatile int64_t x48 = -2196161405649051LL;
	static int32_t t11 = 43417071;

	t11 = ((x45==x46)|(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 3623U;
	uint64_t x50 = 800905567984256144LLU;
	volatile uint16_t x51 = 1571U;

	t12 = ((x49==x50)|(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 52U;
	volatile int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	static int64_t x56 = -1962LL;
	volatile int32_t t13 = 433205;

	t13 = ((x53==x54)|(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MAX;
	static volatile int16_t x58 = INT16_MIN;
	static int8_t x60 = 34;
	volatile int32_t t14 = -55121226;

	t14 = ((x57==x58)|(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static int8_t x62 = 0;
	uint64_t x63 = UINT64_MAX;
	int32_t t15 = 217423193;

	t15 = ((x61==x62)|(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int8_t x66 = -4;
	int32_t x67 = -1;
	static int16_t x68 = INT16_MIN;

	t16 = ((x65==x66)|(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -441685735492793LL;
	int16_t x70 = 1;
	uint32_t x71 = 8973U;
	int8_t x72 = -6;
	static int32_t t17 = -683135368;

	t17 = ((x69==x70)|(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = 12556;
	int32_t x75 = 3385;
	int8_t x76 = -1;
	int32_t t18 = 8042;

	t18 = ((x73==x74)|(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MIN;
	static int16_t x79 = INT16_MAX;
	int64_t x80 = INT64_MIN;
	static int32_t t19 = 1484;

	t19 = ((x77==x78)|(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int64_t x82 = INT64_MIN;
	static int32_t x84 = -1;
	volatile int32_t t20 = -2375405;

	t20 = ((x81==x82)|(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x85 = 59183023U;
	uint32_t x86 = 252118U;
	uint32_t x88 = 1007444U;
	static volatile int32_t t21 = 8242538;

	t21 = ((x85==x86)|(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	int32_t x91 = -1;
	uint16_t x92 = 79U;

	t22 = ((x89==x90)|(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	int16_t x94 = -1;
	static volatile uint32_t x95 = 1614605277U;
	int64_t x96 = -6737077171LL;

	t23 = ((x93==x94)|(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;
	int32_t t24 = -101;

	t24 = ((x97==x98)|(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x104 = 0;
	int32_t t25 = -5;

	t25 = ((x101==x102)|(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	uint16_t x106 = UINT16_MAX;
	volatile int16_t x107 = 3;
	volatile int32_t t26 = 104715;

	t26 = ((x105==x106)|(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	static int32_t x111 = INT32_MIN;
	static int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -46459897;

	t27 = ((x109==x110)|(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	static int8_t x115 = INT8_MIN;
	int64_t x116 = -1LL;
	volatile int32_t t28 = -190966817;

	t28 = ((x113==x114)|(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int32_t x120 = INT32_MAX;
	volatile int32_t t29 = -687560;

	t29 = ((x117==x118)|(x119<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static int16_t x122 = 0;
	int32_t x123 = INT32_MIN;
	static int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -1849988;

	t30 = ((x121==x122)|(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = 1;
	int32_t x127 = -1;
	static volatile int32_t x128 = 17800113;

	t31 = ((x125==x126)|(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = 3U;
	int16_t x131 = INT16_MAX;
	volatile uint64_t x132 = 86363LLU;

	t32 = ((x129==x130)|(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x134 = UINT8_MAX;
	uint8_t x135 = 0U;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = -91379;

	t33 = ((x133==x134)|(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int8_t x138 = -1;
	int16_t x139 = INT16_MIN;
	static int32_t t34 = 4499;

	t34 = ((x137==x138)|(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = 0;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -5254400;

	t35 = ((x141==x142)|(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 9;
	static int8_t x146 = 5;
	static int16_t x147 = 380;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t36 = 7;

	t36 = ((x145==x146)|(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x150 = INT64_MIN;
	uint16_t x151 = 26718U;

	t37 = ((x149==x150)|(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MAX;
	static volatile int32_t x155 = INT32_MAX;
	static volatile uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = -14563195;

	t38 = ((x153==x154)|(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -1;
	int8_t x158 = 11;
	static int32_t x159 = -1;
	static volatile int64_t x160 = INT64_MAX;
	static int32_t t39 = -9516236;

	t39 = ((x157==x158)|(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -1;
	volatile int32_t t40 = -212540965;

	t40 = ((x161==x162)|(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	int64_t x166 = 1LL;
	int32_t t41 = 7481517;

	t41 = ((x165==x166)|(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 1192U;
	static int32_t x170 = -15709;
	static int8_t x171 = -1;

	t42 = ((x169==x170)|(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int32_t x174 = INT32_MAX;
	static volatile int16_t x175 = INT16_MIN;
	static volatile int32_t x176 = INT32_MIN;

	t43 = ((x173==x174)|(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 251;
	int8_t x178 = -1;
	static int32_t x179 = INT32_MIN;
	uint64_t x180 = 733647482650983630LLU;
	int32_t t44 = 5;

	t44 = ((x177==x178)|(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = 64840484093749980LLU;
	static int32_t t45 = 0;

	t45 = ((x181==x182)|(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -48;
	int32_t x186 = -1;
	int32_t x187 = INT32_MIN;
	int32_t t46 = -85;

	t46 = ((x185==x186)|(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = 3;
	uint16_t x191 = UINT16_MAX;
	int32_t t47 = -485616157;

	t47 = ((x189==x190)|(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	static volatile int32_t x196 = -12071721;
	volatile int32_t t48 = 2;

	t48 = ((x193==x194)|(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	uint8_t x198 = 61U;
	volatile int32_t x199 = -1;

	t49 = ((x197==x198)|(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 7U;
	int64_t x202 = INT64_MAX;
	int32_t t50 = -16876829;

	t50 = ((x201==x202)|(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 2965422543294136LLU;
	int8_t x206 = 0;
	int32_t x207 = INT32_MIN;
	int32_t t51 = 11340670;

	t51 = ((x205==x206)|(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x209 = 5U;
	uint8_t x210 = UINT8_MAX;
	int64_t x211 = -2855830LL;
	uint8_t x212 = 11U;

	t52 = ((x209==x210)|(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	uint32_t x216 = 229501U;
	int32_t t53 = 416551;

	t53 = ((x213==x214)|(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = 1U;
	volatile int8_t x218 = INT8_MAX;
	int32_t x219 = INT32_MIN;
	volatile int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = -110;

	t54 = ((x217==x218)|(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile int64_t x224 = -557657927532276151LL;
	volatile int32_t t55 = -488;

	t55 = ((x221==x222)|(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x226 = -1LL;
	uint8_t x227 = 25U;

	t56 = ((x225==x226)|(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;

	t57 = ((x229==x230)|(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	volatile int8_t x234 = INT8_MIN;
	static int8_t x235 = INT8_MAX;
	int64_t x236 = 1608574310LL;

	t58 = ((x233==x234)|(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = -123;
	uint32_t x239 = 84114911U;
	int32_t t59 = -469179;

	t59 = ((x237==x238)|(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MAX;
	volatile int8_t x242 = 51;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = -8077;

	t60 = ((x241==x242)|(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 2470LL;
	int8_t x246 = INT8_MAX;
	int16_t x247 = -13178;
	int32_t t61 = 231566;

	t61 = ((x245==x246)|(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = 2;
	int32_t t62 = 1417;

	t62 = ((x249==x250)|(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = INT16_MAX;
	int64_t x254 = INT64_MIN;
	uint16_t x255 = 96U;
	uint32_t x256 = 72565U;
	int32_t t63 = -852513769;

	t63 = ((x253==x254)|(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MAX;
	int32_t t64 = 72343;

	t64 = ((x257==x258)|(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 53U;
	uint64_t x262 = 1586105188LLU;
	uint32_t x263 = 1126U;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t65 = 1;

	t65 = ((x261==x262)|(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	static int8_t x266 = INT8_MAX;
	int64_t x267 = 190331340690804812LL;
	int64_t x268 = -8428891686449250LL;
	volatile int32_t t66 = 7;

	t66 = ((x265==x266)|(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 1;
	int64_t x270 = INT64_MIN;
	int32_t t67 = 7594;

	t67 = ((x269==x270)|(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int16_t x276 = INT16_MAX;
	volatile int32_t t68 = 0;

	t68 = ((x273==x274)|(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 3704U;
	static int8_t x278 = 28;
	int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MAX;
	static volatile int32_t t69 = 27881;

	t69 = ((x277==x278)|(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 76693300U;
	volatile uint64_t x284 = 244749931787614LLU;

	t70 = ((x281==x282)|(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	static int8_t x286 = -27;
	int64_t x287 = 679746896LL;
	volatile uint8_t x288 = 41U;
	int32_t t71 = -2953;

	t71 = ((x285==x286)|(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MIN;
	static int64_t x290 = INT64_MIN;
	volatile int32_t x291 = INT32_MIN;
	static uint16_t x292 = UINT16_MAX;
	int32_t t72 = -93630;

	t72 = ((x289==x290)|(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 8U;
	int32_t x294 = -1;
	volatile int32_t t73 = -507;

	t73 = ((x293==x294)|(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 4084U;
	uint32_t x298 = 32583U;
	static volatile int32_t x299 = 1903;
	int64_t x300 = -104245LL;

	t74 = ((x297==x298)|(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	volatile uint16_t x302 = 615U;
	volatile uint64_t x303 = 7LLU;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = 424436;

	t75 = ((x301==x302)|(x303<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	static volatile int64_t x307 = -1LL;
	int64_t x308 = INT64_MIN;
	int32_t t76 = -4;

	t76 = ((x305==x306)|(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	uint16_t x311 = 5972U;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = -1028;

	t77 = ((x309==x310)|(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = 192;
	uint32_t x315 = 324U;
	static int8_t x316 = -1;
	int32_t t78 = 1;

	t78 = ((x313==x314)|(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 302678394U;
	int16_t x319 = -1;
	int64_t x320 = -1LL;
	volatile int32_t t79 = 126;

	t79 = ((x317==x318)|(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -1;
	int8_t x322 = INT8_MIN;
	int16_t x323 = 7;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 6;

	t80 = ((x321==x322)|(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 7046U;
	static int64_t x326 = 699289888832938985LL;
	volatile uint32_t x328 = 66397U;

	t81 = ((x325==x326)|(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 1U;
	static int64_t x331 = -1LL;
	static int64_t x332 = INT64_MIN;
	volatile int32_t t82 = -10144;

	t82 = ((x329==x330)|(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 10U;
	int8_t x334 = INT8_MIN;
	uint16_t x336 = UINT16_MAX;

	t83 = ((x333==x334)|(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	int32_t x338 = -76064201;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t84 = 698;

	t84 = ((x337==x338)|(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = 14LLU;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 674664843;

	t85 = ((x341==x342)|(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MAX;
	static int32_t x347 = -19498675;
	static int8_t x348 = INT8_MIN;
	int32_t t86 = 3;

	t86 = ((x345==x346)|(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = UINT16_MAX;
	static int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -128599;

	t87 = ((x349==x350)|(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 17U;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -1;
	volatile int32_t t88 = -872168618;

	t88 = ((x353==x354)|(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	int8_t x359 = -1;
	volatile int64_t x360 = 408614623527LL;

	t89 = ((x357==x358)|(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 11U;
	uint32_t x363 = 3563U;
	static volatile int32_t x364 = INT32_MIN;
	int32_t t90 = -22930;

	t90 = ((x361==x362)|(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	static uint16_t x366 = 1542U;
	uint32_t x368 = 247061618U;
	int32_t t91 = 93;

	t91 = ((x365==x366)|(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -354171616951100726LL;
	int16_t x370 = INT16_MAX;
	int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MAX;

	t92 = ((x369==x370)|(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MAX;
	int64_t x375 = -1LL;

	t93 = ((x373==x374)|(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = UINT16_MAX;
	uint64_t x379 = 3637700496LLU;
	int64_t x380 = INT64_MAX;
	int32_t t94 = 198;

	t94 = ((x377==x378)|(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MIN;
	static int16_t x383 = 4;
	volatile int32_t t95 = -7195335;

	t95 = ((x381==x382)|(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	volatile int32_t x386 = -10053415;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 2862074;

	t96 = ((x385==x386)|(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x391 = 19403531LLU;
	int64_t x392 = -1LL;
	volatile int32_t t97 = 12481;

	t97 = ((x389==x390)|(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = INT8_MAX;
	int16_t x394 = INT16_MIN;
	uint8_t x396 = 4U;

	t98 = ((x393==x394)|(x395<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MAX;
	uint16_t x399 = 10U;
	int8_t x400 = INT8_MIN;
	int32_t t99 = 409554;

	t99 = ((x397==x398)|(x399<x400));

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

