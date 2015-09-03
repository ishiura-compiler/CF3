#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MIN;
int32_t t2 = -465822916;
int64_t x13 = INT64_MIN;
volatile int32_t t3 = -57168;
int64_t x23 = INT64_MIN;
uint16_t x29 = UINT16_MAX;
uint16_t x36 = 25U;
uint16_t x42 = 19U;
volatile uint8_t x49 = 0U;
int32_t t12 = 0;
static uint8_t x58 = UINT8_MAX;
int64_t x64 = INT64_MIN;
uint8_t x66 = 73U;
volatile int32_t t16 = 3;
int32_t x72 = -1036;
static volatile int32_t t17 = 5766492;
int32_t x78 = INT32_MIN;
int16_t x91 = INT16_MIN;
volatile int8_t x94 = INT8_MAX;
uint64_t x106 = 206895450LLU;
static int16_t x109 = -1;
int32_t t27 = -767290;
static int32_t x116 = INT32_MIN;
volatile int32_t t28 = -1779;
int8_t x121 = -6;
int32_t x123 = INT32_MIN;
volatile int8_t x124 = INT8_MIN;
volatile int32_t x134 = -903;
uint64_t x137 = 4219514727LLU;
static volatile int32_t t35 = -2468;
uint16_t x148 = UINT16_MAX;
int32_t t37 = 1247280;
int32_t x154 = -1;
int16_t x155 = INT16_MIN;
static int32_t t38 = 107392;
int16_t x157 = INT16_MAX;
int32_t x160 = INT32_MIN;
int8_t x162 = INT8_MAX;
int32_t x166 = -259;
static uint8_t x169 = 70U;
int8_t x170 = INT8_MAX;
int32_t x174 = 2292515;
volatile int16_t x175 = -15;
int32_t x177 = 3287;
volatile int32_t t46 = -950895;
volatile int32_t t47 = -1045518;
int64_t x208 = -1LL;
volatile int16_t x211 = 7;
int16_t x212 = -3639;
volatile int8_t x213 = -1;
int64_t x215 = INT64_MIN;
int32_t t53 = 2584;
int16_t x217 = INT16_MAX;
int8_t x221 = -1;
int16_t x231 = -1;
int64_t x232 = INT64_MAX;
int32_t t57 = -1862576;
int32_t t58 = -20;
int16_t x240 = INT16_MIN;
static int8_t x241 = INT8_MIN;
static uint32_t x242 = 102857U;
uint8_t x244 = 7U;
int32_t t61 = -19051595;
uint64_t x249 = 4826540216680365LLU;
int16_t x251 = -1;
int64_t x253 = INT64_MIN;
int32_t x254 = 27534716;
int32_t t66 = -15;
int32_t t67 = 2;
volatile int32_t t68 = 1025599000;
static int32_t t69 = -2654;
int16_t x284 = -1;
int32_t t70 = 6221762;
volatile int32_t t72 = -18257;
int16_t x294 = 13539;
int32_t x296 = -1;
int32_t x298 = -6;
int8_t x299 = INT8_MIN;
int64_t x301 = INT64_MIN;
static int64_t x310 = -1LL;
static volatile int64_t x324 = -99451309683321888LL;
int32_t x335 = INT32_MIN;
int8_t x338 = INT8_MAX;
static int64_t x342 = -1971087802839160183LL;
int16_t x348 = -1904;
uint32_t x353 = 1836222U;
volatile int16_t x355 = INT16_MAX;
uint8_t x356 = 0U;
int32_t x369 = INT32_MAX;
int32_t t92 = 449171;
int64_t x373 = -1LL;
volatile uint64_t x375 = 8LLU;
static int8_t x382 = -1;
volatile uint32_t x384 = UINT32_MAX;
uint8_t x398 = 0U;
int8_t x400 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 12U;
	int64_t x2 = INT64_MIN;
	static uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 409351;

	t0 = ((x1&x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	uint32_t x6 = UINT32_MAX;
	static int16_t x7 = 1;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 130029;

	t1 = ((x5&x6)<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	uint16_t x12 = 2140U;

	t2 = ((x9&x10)<(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 70U;
	int64_t x15 = -1638LL;
	volatile uint8_t x16 = 9U;

	t3 = ((x13&x14)<(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1619U;
	uint32_t x18 = 27828070U;
	volatile int64_t x19 = -234680747891316272LL;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 358914620;

	t4 = ((x17&x18)<(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	volatile uint16_t x22 = 881U;
	static int8_t x24 = -1;
	static int32_t t5 = 1838;

	t5 = ((x21&x22)<(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 654LL;
	int64_t x26 = -1LL;
	int16_t x27 = INT16_MAX;
	volatile int8_t x28 = INT8_MIN;
	int32_t t6 = 9165;

	t6 = ((x25&x26)<(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 4283305U;
	volatile int32_t t7 = -62442;

	t7 = ((x29&x30)<(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	volatile int32_t x35 = INT32_MIN;
	volatile int32_t t8 = -697718;

	t8 = ((x33&x34)<(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	volatile uint32_t x38 = 1367767721U;
	volatile uint16_t x39 = UINT16_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -70;

	t9 = ((x37&x38)<(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 1860613LLU;
	static int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MAX;
	static volatile int32_t t10 = -5;

	t10 = ((x41&x42)<(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = INT16_MIN;
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = 88567;

	t11 = ((x45&x46)<(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = 16860559561853LL;
	static volatile int8_t x51 = INT8_MAX;
	static int32_t x52 = INT32_MAX;

	t12 = ((x49&x50)<(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int64_t x54 = 3561945378671LL;
	int64_t x55 = -1675110024966780LL;
	static uint32_t x56 = 62603977U;
	volatile int32_t t13 = -8107188;

	t13 = ((x53&x54)<(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = UINT32_MAX;
	static uint16_t x59 = 0U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t14 = 26675;

	t14 = ((x57&x58)<(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	int32_t x62 = -411126460;
	static int16_t x63 = INT16_MIN;
	volatile int32_t t15 = -614;

	t15 = ((x61&x62)<(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	static uint64_t x67 = UINT64_MAX;
	int16_t x68 = INT16_MIN;

	t16 = ((x65&x66)<(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	static int32_t x70 = -1;
	int32_t x71 = INT32_MIN;

	t17 = ((x69&x70)<(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int32_t x74 = -1;
	static int8_t x75 = INT8_MIN;
	int32_t x76 = -292039393;
	volatile int32_t t18 = -737877657;

	t18 = ((x73&x74)<(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = UINT32_MAX;
	static int8_t x79 = INT8_MAX;
	static volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 47638881;

	t19 = ((x77&x78)<(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int32_t x82 = INT32_MIN;
	static volatile uint16_t x83 = 3U;
	int64_t x84 = -1LL;
	volatile int32_t t20 = 1002736560;

	t20 = ((x81&x82)<(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -59049818;
	int32_t x86 = INT32_MAX;
	uint16_t x87 = 7850U;
	uint8_t x88 = 0U;
	volatile int32_t t21 = 55633;

	t21 = ((x85&x86)<(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	static uint8_t x90 = 13U;
	int8_t x92 = INT8_MAX;
	int32_t t22 = 39037;

	t22 = ((x89&x90)<(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = INT16_MIN;
	static volatile uint32_t x95 = 5475U;
	uint8_t x96 = 115U;
	static volatile int32_t t23 = 14911;

	t23 = ((x93&x94)<(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	uint64_t x98 = 8464848253343740LLU;
	int16_t x99 = INT16_MIN;
	static uint32_t x100 = 445907987U;
	int32_t t24 = 86;

	t24 = ((x97&x98)<(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 30U;
	static volatile uint64_t x102 = 35455LLU;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = -1;
	int32_t t25 = 5509;

	t25 = ((x101&x102)<(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static uint32_t x107 = 13310U;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = -24536744;

	t26 = ((x105&x106)<(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MAX;
	int32_t x111 = INT32_MIN;
	volatile uint64_t x112 = 2246901304755636024LLU;

	t27 = ((x109&x110)<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	uint32_t x114 = 25074792U;
	volatile int8_t x115 = INT8_MAX;

	t28 = ((x113&x114)<(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x118 = 2U;
	uint16_t x119 = 17649U;
	int16_t x120 = 11183;
	volatile int32_t t29 = 6;

	t29 = ((x117&x118)<(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = 4446204393306158LLU;
	static int32_t t30 = -254892502;

	t30 = ((x121&x122)<(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = 1U;
	int16_t x126 = -1;
	int64_t x127 = INT64_MIN;
	int32_t x128 = -1053432;
	volatile int32_t t31 = -38039;

	t31 = ((x125&x126)<(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 2611;
	int8_t x130 = -1;
	volatile uint16_t x131 = 19076U;
	int64_t x132 = -902272585695138LL;
	int32_t t32 = -114;

	t32 = ((x129&x130)<(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -39;
	uint32_t x135 = 2U;
	static volatile int32_t x136 = 0;
	volatile int32_t t33 = -27850625;

	t33 = ((x133&x134)<(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MIN;
	static int16_t x139 = -379;
	int64_t x140 = -1LL;
	volatile int32_t t34 = 1711;

	t34 = ((x137&x138)<(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = 992495LL;
	int64_t x142 = -1LL;
	static uint64_t x143 = UINT64_MAX;
	static uint16_t x144 = 1U;

	t35 = ((x141&x142)<(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 8U;
	static int64_t x146 = INT64_MIN;
	uint8_t x147 = UINT8_MAX;
	int32_t t36 = 1050743139;

	t36 = ((x145&x146)<(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MAX;
	static volatile int32_t x152 = INT32_MIN;

	t37 = ((x149&x150)<(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	volatile uint8_t x156 = 16U;

	t38 = ((x153&x154)<(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 112U;
	int64_t x159 = INT64_MIN;
	static int32_t t39 = -21632;

	t39 = ((x157&x158)<(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 16522609;

	t40 = ((x161&x162)<(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 4935485928730608335LLU;
	volatile int64_t x167 = INT64_MIN;
	static int64_t x168 = -1LL;
	volatile int32_t t41 = -829;

	t41 = ((x165&x166)<(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x171 = 11926676622013LLU;
	uint64_t x172 = 147778619127LLU;
	static volatile int32_t t42 = -98620499;

	t42 = ((x169&x170)<(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 79LLU;
	int64_t x176 = -309314LL;
	int32_t t43 = -13626030;

	t43 = ((x173&x174)<(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MIN;
	static int64_t x179 = 466LL;
	int16_t x180 = INT16_MAX;
	static int32_t t44 = -466268;

	t44 = ((x177&x178)<(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 15044866165LLU;
	int8_t x182 = 30;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = -119629;
	int32_t t45 = 273117;

	t45 = ((x181&x182)<(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MIN;
	int64_t x186 = 1561495874482626450LL;
	int16_t x187 = -97;
	int32_t x188 = INT32_MIN;

	t46 = ((x185&x186)<(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static volatile uint32_t x190 = 7780316U;
	int64_t x191 = -1LL;
	int16_t x192 = -19;

	t47 = ((x189&x190)<(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -15;
	volatile int32_t x194 = INT32_MIN;
	int16_t x195 = 52;
	uint32_t x196 = 396U;
	int32_t t48 = -2004214;

	t48 = ((x193&x194)<(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	int8_t x199 = 0;
	uint64_t x200 = UINT64_MAX;
	int32_t t49 = 7809;

	t49 = ((x197&x198)<(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 0U;
	int32_t x202 = -1;
	static volatile int32_t x203 = -1;
	volatile uint64_t x204 = UINT64_MAX;
	volatile int32_t t50 = -120136845;

	t50 = ((x201&x202)<(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	volatile int8_t x206 = -1;
	volatile uint64_t x207 = UINT64_MAX;
	int32_t t51 = -15;

	t51 = ((x205&x206)<(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x209 = INT16_MAX;
	int64_t x210 = INT64_MAX;
	int32_t t52 = -5274;

	t52 = ((x209&x210)<(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = -6;
	int8_t x216 = INT8_MIN;

	t53 = ((x213&x214)<(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x218 = UINT16_MAX;
	int32_t x219 = -1;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 2496;

	t54 = ((x217&x218)<(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MAX;
	volatile int32_t x223 = INT32_MAX;
	int64_t x224 = -167374837471338563LL;
	int32_t t55 = -224;

	t55 = ((x221&x222)<(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1;
	int8_t x226 = INT8_MIN;
	uint32_t x227 = 9619543U;
	uint16_t x228 = 228U;
	int32_t t56 = -595479265;

	t56 = ((x225&x226)<(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int16_t x230 = INT16_MIN;

	t57 = ((x229&x230)<(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	static volatile uint64_t x236 = UINT64_MAX;

	t58 = ((x233&x234)<(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MIN;
	static int64_t x238 = -53114LL;
	volatile uint64_t x239 = 16323153599594LLU;
	static volatile int32_t t59 = -198111963;

	t59 = ((x237&x238)<(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x243 = INT8_MIN;
	int32_t t60 = 326791626;

	t60 = ((x241&x242)<(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = 10U;
	int64_t x246 = INT64_MAX;
	uint32_t x247 = 70466U;
	int32_t x248 = -1;

	t61 = ((x245&x246)<(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 9U;
	uint32_t x252 = 4U;
	volatile int32_t t62 = -36586;

	t62 = ((x249&x250)<(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x255 = -1940;
	static uint32_t x256 = UINT32_MAX;
	volatile int32_t t63 = 975;

	t63 = ((x253&x254)<(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = 52;
	uint16_t x258 = 5081U;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = -1;
	int32_t t64 = -6773;

	t64 = ((x257&x258)<(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	volatile int8_t x262 = -1;
	static uint8_t x263 = 19U;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t65 = -44211784;

	t65 = ((x261&x262)<(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MAX;
	uint32_t x267 = 1830201U;
	int8_t x268 = INT8_MIN;

	t66 = ((x265&x266)<(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MIN;
	static int16_t x271 = -20;
	int64_t x272 = INT64_MIN;

	t67 = ((x269&x270)<(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x273 = 2;
	static uint8_t x274 = UINT8_MAX;
	uint8_t x275 = UINT8_MAX;
	int8_t x276 = INT8_MIN;

	t68 = ((x273&x274)<(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = -1;
	static int64_t x278 = -1LL;
	int16_t x279 = INT16_MIN;
	uint32_t x280 = 5877335U;

	t69 = ((x277&x278)<(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	static int8_t x282 = INT8_MIN;
	volatile int32_t x283 = -422508;

	t70 = ((x281&x282)<(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	uint64_t x286 = 653750352621603LLU;
	int64_t x287 = 16218482446047LL;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 38889067;

	t71 = ((x285&x286)<(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MIN;
	int8_t x290 = -1;
	static int8_t x291 = INT8_MIN;
	int16_t x292 = 220;

	t72 = ((x289&x290)<(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -8780961477LL;
	static int64_t x295 = -1LL;
	static volatile int32_t t73 = -16883;

	t73 = ((x293&x294)<(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -16159;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = 394;

	t74 = ((x297&x298)<(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 1550728U;
	int8_t x303 = -1;
	int32_t x304 = -1;
	static volatile int32_t t75 = 3346;

	t75 = ((x301&x302)<(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -5022;
	volatile uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MAX;
	int32_t x308 = -1;
	static volatile int32_t t76 = 9722;

	t76 = ((x305&x306)<(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -218072491225947LL;
	static volatile uint32_t x311 = UINT32_MAX;
	static int8_t x312 = INT8_MIN;
	int32_t t77 = -6;

	t77 = ((x309&x310)<(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	uint16_t x314 = 154U;
	int64_t x315 = -222666351870895LL;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 200731799;

	t78 = ((x313&x314)<(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	static int32_t x318 = 81146;
	uint32_t x319 = 0U;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = -380;

	t79 = ((x317&x318)<(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int64_t x322 = -8604126306226737LL;
	uint8_t x323 = 8U;
	int32_t t80 = -1868105;

	t80 = ((x321&x322)<(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 3U;
	int8_t x326 = INT8_MAX;
	static volatile int16_t x327 = 0;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = 256;

	t81 = ((x325&x326)<(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -162465449;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = 1315429018587LLU;
	static int32_t x332 = -121;
	int32_t t82 = 2148039;

	t82 = ((x329&x330)<(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 23U;
	volatile uint16_t x334 = 752U;
	volatile int64_t x336 = -16380400166278630LL;
	int32_t t83 = 7628;

	t83 = ((x333&x334)<(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	uint8_t x339 = UINT8_MAX;
	volatile int32_t x340 = INT32_MAX;
	int32_t t84 = -1127;

	t84 = ((x337&x338)<(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	int64_t x343 = -1LL;
	uint16_t x344 = UINT16_MAX;
	int32_t t85 = -6;

	t85 = ((x341&x342)<(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;
	volatile int32_t x346 = 6;
	int8_t x347 = INT8_MIN;
	int32_t t86 = -2318210;

	t86 = ((x345&x346)<(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 62388597006LLU;
	int32_t x350 = 5590338;
	volatile int16_t x351 = 60;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = 0;

	t87 = ((x349&x350)<(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1LL;
	static volatile int32_t t88 = -1002;

	t88 = ((x353&x354)<(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = -1;
	uint8_t x359 = 1U;
	uint8_t x360 = 0U;
	volatile int32_t t89 = -285;

	t89 = ((x357&x358)<(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 54833584U;
	volatile int32_t x362 = -5;
	int8_t x363 = INT8_MAX;
	int64_t x364 = 13373118673LL;
	volatile int32_t t90 = 0;

	t90 = ((x361&x362)<(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -13327593LL;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = INT64_MIN;
	static uint16_t x368 = 491U;
	volatile int32_t t91 = 3218166;

	t91 = ((x365&x366)<(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -1;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MAX;

	t92 = ((x369&x370)<(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = UINT16_MAX;
	int32_t x376 = -15009;
	volatile int32_t t93 = -32;

	t93 = ((x373&x374)<(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	volatile int8_t x378 = -1;
	volatile int8_t x379 = 1;
	static int64_t x380 = INT64_MIN;
	static int32_t t94 = -2721;

	t94 = ((x377&x378)<(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -445355;
	int8_t x383 = 23;
	int32_t t95 = 1;

	t95 = ((x381&x382)<(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = -1;
	int64_t x388 = INT64_MAX;
	volatile int32_t t96 = -30;

	t96 = ((x385&x386)<(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	static int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MIN;
	int8_t x392 = 0;
	int32_t t97 = -44789022;

	t97 = ((x389&x390)<(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -1;
	uint16_t x394 = 2U;
	int32_t x395 = INT32_MAX;
	static int64_t x396 = -52838545313LL;
	volatile int32_t t98 = 31664;

	t98 = ((x393&x394)<(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = -3;
	uint8_t x399 = UINT8_MAX;
	int32_t t99 = 90566;

	t99 = ((x397&x398)<(x399<=x400));

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

