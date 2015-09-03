#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static volatile int64_t x2 = INT64_MIN;
uint64_t x4 = 11952093LLU;
uint32_t x7 = 33094156U;
int8_t x18 = -1;
int32_t x23 = INT32_MIN;
uint16_t x24 = 8U;
uint16_t x26 = 12209U;
int16_t x41 = INT16_MAX;
int64_t x42 = -15695944787590547LL;
int64_t x45 = 1559525297778446LL;
static volatile int16_t x47 = INT16_MIN;
static volatile uint32_t x49 = 7147084U;
int16_t x54 = -1;
int64_t x55 = -4LL;
int32_t x58 = INT32_MIN;
volatile uint16_t x62 = 6U;
static int64_t x88 = INT64_MIN;
volatile int32_t t21 = 1;
int32_t t22 = -64530;
int32_t x95 = -1;
int32_t t23 = 28928;
int8_t x106 = 7;
volatile int64_t x108 = INT64_MIN;
static volatile int32_t t25 = 10804;
uint8_t x122 = 0U;
static volatile int16_t x123 = -1;
int16_t x128 = 0;
volatile uint32_t x129 = 3U;
uint8_t x131 = 52U;
uint64_t x134 = 3632354933668549459LLU;
int32_t x148 = 9;
int32_t x150 = INT32_MIN;
int32_t x164 = INT32_MAX;
int8_t x165 = 23;
volatile int64_t x187 = -8585136LL;
uint8_t x190 = UINT8_MAX;
int32_t x192 = -1;
int64_t x193 = INT64_MIN;
int16_t x196 = 41;
uint16_t x199 = 581U;
int16_t x202 = -1;
int64_t x204 = -1LL;
int32_t t49 = -36;
uint32_t x205 = 283U;
static volatile int8_t x211 = INT8_MIN;
static volatile int32_t t51 = 28;
int32_t t52 = -159939;
int8_t x218 = INT8_MAX;
int32_t x222 = 1158;
int8_t x225 = 0;
int8_t x235 = 2;
volatile int32_t t57 = 50206;
volatile int32_t x240 = -1;
int8_t x241 = -1;
volatile int64_t x244 = 143225529503009LL;
int32_t x246 = INT32_MAX;
int32_t t60 = -1927212;
int16_t x255 = 464;
uint8_t x256 = 7U;
int32_t t63 = 0;
int8_t x261 = -1;
uint8_t x264 = UINT8_MAX;
volatile uint16_t x265 = UINT16_MAX;
static uint32_t x267 = UINT32_MAX;
volatile uint32_t x270 = 6538215U;
int32_t t66 = 0;
int8_t x280 = -1;
int8_t x286 = INT8_MIN;
volatile int32_t t69 = 332368;
int32_t t70 = -656562258;
uint64_t x305 = 284636140031048LLU;
int8_t x318 = -2;
int8_t x319 = -1;
int16_t x320 = 1;
volatile int32_t x332 = 116;
int8_t x337 = 1;
int16_t x345 = -8;
int32_t t84 = -803583;
int8_t x357 = -1;
volatile int16_t x360 = -63;
int16_t x362 = -4;
int32_t x367 = 197108;
int32_t t88 = -1412052;
volatile int8_t x382 = INT8_MIN;
int8_t x385 = -5;
int16_t x386 = INT16_MAX;
int8_t x388 = INT8_MIN;
static volatile int16_t x392 = 1;
uint8_t x397 = 16U;
int64_t x409 = 417748836LL;
uint32_t x410 = 19171094U;
static volatile int32_t t98 = 489;
static int32_t x417 = 3831052;


void f0(void) {
	int32_t x3 = INT32_MAX;
	static int32_t t0 = 1;

	t0 = (x1==(x2+(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -49;
	uint8_t x6 = 62U;
	volatile int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -553540368;

	t1 = (x5==(x6+(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 5U;
	int16_t x10 = -1;
	static volatile uint16_t x11 = UINT16_MAX;
	int32_t x12 = -371989137;
	static int32_t t2 = 14571;

	t2 = (x9==(x10+(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	static uint16_t x14 = UINT16_MAX;
	int8_t x15 = INT8_MIN;
	int32_t x16 = -523;
	int32_t t3 = 42900442;

	t3 = (x13==(x14+(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint64_t x19 = UINT64_MAX;
	uint16_t x20 = 39U;
	int32_t t4 = -284643637;

	t4 = (x17==(x18+(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint64_t x22 = 7972924896857808316LLU;
	volatile int32_t t5 = 129060;

	t5 = (x21==(x22+(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static uint16_t x27 = 0U;
	static int32_t x28 = -1;
	int32_t t6 = 10368062;

	t6 = (x25==(x26+(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static int16_t x30 = -15;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 502806605U;
	int32_t t7 = 1;

	t7 = (x29==(x30+(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -485584;
	uint16_t x34 = UINT16_MAX;
	volatile uint32_t x35 = UINT32_MAX;
	static int32_t x36 = -1;
	volatile int32_t t8 = -39086539;

	t8 = (x33==(x34+(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int64_t x38 = INT64_MIN;
	volatile int16_t x39 = INT16_MIN;
	uint64_t x40 = 1508556723LLU;
	int32_t t9 = -1;

	t9 = (x37==(x38+(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x43 = 13550;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 5;

	t10 = (x41==(x42+(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 176781760;

	t11 = (x45==(x46+(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x50 = UINT8_MAX;
	uint8_t x51 = 0U;
	static uint8_t x52 = UINT8_MAX;
	static int32_t t12 = -44;

	t12 = (x49==(x50+(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	volatile int64_t x56 = 3402930812277416LL;
	volatile int32_t t13 = 225;

	t13 = (x53==(x54+(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 0;
	int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MIN;
	int32_t t14 = -3;

	t14 = (x57==(x58+(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 29;
	uint8_t x63 = UINT8_MAX;
	static int8_t x64 = -1;
	int32_t t15 = -2;

	t15 = (x61==(x62+(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 7830U;
	volatile uint8_t x66 = UINT8_MAX;
	volatile int64_t x67 = INT64_MAX;
	uint64_t x68 = 2194577062830516698LLU;
	volatile int32_t t16 = -1023524;

	t16 = (x65==(x66+(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 20;
	int32_t x70 = INT32_MIN;
	int32_t x71 = -141240782;
	int16_t x72 = INT16_MAX;
	int32_t t17 = -1;

	t17 = (x69==(x70+(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 3489346LL;
	static int64_t x74 = -1LL;
	int16_t x75 = INT16_MAX;
	volatile int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 278546986;

	t18 = (x73==(x74+(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int64_t x78 = -1LL;
	static volatile uint8_t x79 = 0U;
	volatile uint64_t x80 = UINT64_MAX;
	int32_t t19 = -171879;

	t19 = (x77==(x78+(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = INT32_MIN;
	int32_t x82 = 1;
	static volatile uint16_t x83 = 0U;
	int16_t x84 = INT16_MAX;
	int32_t t20 = -496230805;

	t20 = (x81==(x82+(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MAX;
	static uint16_t x87 = 1828U;

	t21 = (x85==(x86+(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = -21308251;
	int8_t x91 = 29;
	static volatile int64_t x92 = 266409707163088288LL;

	t22 = (x89==(x90+(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int32_t x94 = -2433924;
	volatile uint8_t x96 = 1U;

	t23 = (x93==(x94+(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -30;
	int8_t x98 = INT8_MIN;
	static uint8_t x99 = 8U;
	int8_t x100 = -1;
	static volatile int32_t t24 = -127558;

	t24 = (x97==(x98+(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	volatile int16_t x107 = INT16_MAX;

	t25 = (x105==(x106+(x107<=x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -954;
	uint32_t x110 = 131U;
	uint8_t x111 = 23U;
	static volatile int8_t x112 = INT8_MIN;
	int32_t t26 = -4;

	t26 = (x109==(x110+(x111<=x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x113 = UINT32_MAX;
	uint64_t x114 = UINT64_MAX;
	static int8_t x115 = 31;
	int8_t x116 = 51;
	volatile int32_t t27 = 2601404;

	t27 = (x113==(x114+(x115<=x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 0U;
	volatile uint16_t x118 = 27U;
	int16_t x119 = 0;
	int8_t x120 = INT8_MIN;
	int32_t t28 = -116711;

	t28 = (x117==(x118+(x119<=x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t29 = 418374;

	t29 = (x121==(x122+(x123<=x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = -1;
	static int32_t x126 = -36763716;
	static int32_t x127 = INT32_MAX;
	volatile int32_t t30 = 3;

	t30 = (x125==(x126+(x127<=x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x130 = -1;
	int32_t x132 = INT32_MAX;
	static volatile int32_t t31 = -34599103;

	t31 = (x129==(x130+(x131<=x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 1066U;
	volatile int32_t x135 = 780796841;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = 519311887;

	t32 = (x133==(x134+(x135<=x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;
	volatile uint16_t x139 = 21U;
	volatile int16_t x140 = INT16_MIN;
	static int32_t t33 = 46;

	t33 = (x137==(x138+(x139<=x140)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -224709636599LL;
	int16_t x143 = -15419;
	volatile int64_t x144 = INT64_MAX;
	int32_t t34 = 291584;

	t34 = (x141==(x142+(x143<=x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1;
	volatile uint8_t x146 = UINT8_MAX;
	static int16_t x147 = INT16_MAX;
	volatile int32_t t35 = -1;

	t35 = (x145==(x146+(x147<=x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x149 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = UINT8_MAX;
	static int32_t t36 = 859709845;

	t36 = (x149==(x150+(x151<=x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x153 = INT32_MIN;
	int8_t x154 = -6;
	volatile uint16_t x155 = 6U;
	volatile int8_t x156 = INT8_MAX;
	int32_t t37 = 457276413;

	t37 = (x153==(x154+(x155<=x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x157 = 12U;
	uint16_t x158 = 6867U;
	volatile int32_t x159 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;
	int32_t t38 = 16;

	t38 = (x157==(x158+(x159<=x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x161 = 34127368U;
	uint32_t x162 = 3833U;
	int16_t x163 = -1;
	int32_t t39 = 246;

	t39 = (x161==(x162+(x163<=x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = INT64_MAX;
	volatile int8_t x167 = 0;
	volatile int32_t x168 = INT32_MIN;
	volatile int32_t t40 = -2195;

	t40 = (x165==(x166+(x167<=x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x170 = -449781770;
	static uint8_t x171 = 0U;
	int32_t x172 = INT32_MIN;
	volatile int32_t t41 = -45376540;

	t41 = (x169==(x170+(x171<=x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x173 = 85LL;
	int64_t x174 = -1LL;
	uint16_t x175 = 430U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t42 = -11903;

	t42 = (x173==(x174+(x175<=x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -397138LL;
	uint64_t x178 = 23577LLU;
	uint64_t x179 = 43LLU;
	volatile int32_t x180 = INT32_MIN;
	int32_t t43 = -30490;

	t43 = (x177==(x178+(x179<=x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = INT8_MIN;
	static int32_t x183 = INT32_MAX;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t44 = -259992;

	t44 = (x181==(x182+(x183<=x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	static int16_t x186 = -1;
	uint64_t x188 = 52972501279856323LLU;
	volatile int32_t t45 = -15688;

	t45 = (x185==(x186+(x187<=x188)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -10;
	int32_t x191 = 14925;
	static volatile int32_t t46 = 31364961;

	t46 = (x189==(x190+(x191<=x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x194 = UINT32_MAX;
	static uint64_t x195 = 1702502LLU;
	int32_t t47 = -26;

	t47 = (x193==(x194+(x195<=x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = 2;
	int32_t x198 = INT32_MIN;
	int64_t x200 = INT64_MIN;
	int32_t t48 = -16163;

	t48 = (x197==(x198+(x199<=x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = -1;
	uint64_t x203 = 0LLU;

	t49 = (x201==(x202+(x203<=x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = -1;
	static int64_t x207 = 205207720416394LL;
	int8_t x208 = INT8_MIN;
	volatile int32_t t50 = -1;

	t50 = (x205==(x206+(x207<=x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	volatile uint8_t x210 = 60U;
	volatile uint32_t x212 = 4U;

	t51 = (x209==(x210+(x211<=x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = 1673990LLU;
	uint32_t x215 = 257908U;
	int32_t x216 = INT32_MAX;

	t52 = (x213==(x214+(x215<=x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = 2702U;
	int8_t x219 = INT8_MAX;
	int64_t x220 = 1602LL;
	int32_t t53 = 40;

	t53 = (x217==(x218+(x219<=x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 80U;
	static int16_t x223 = -100;
	int32_t x224 = INT32_MIN;
	volatile int32_t t54 = 65842217;

	t54 = (x221==(x222+(x223<=x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x226 = 31702061229384LLU;
	static volatile uint64_t x227 = UINT64_MAX;
	volatile int16_t x228 = -1;
	volatile int32_t t55 = -4145;

	t55 = (x225==(x226+(x227<=x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = UINT8_MAX;
	uint64_t x230 = UINT64_MAX;
	uint64_t x231 = UINT64_MAX;
	int8_t x232 = -60;
	int32_t t56 = -148154971;

	t56 = (x229==(x230+(x231<=x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -1LL;
	uint16_t x234 = UINT16_MAX;
	int16_t x236 = 1618;

	t57 = (x233==(x234+(x235<=x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x237 = INT16_MIN;
	uint32_t x238 = UINT32_MAX;
	static volatile uint64_t x239 = 1457736835216LLU;
	static volatile int32_t t58 = -177532264;

	t58 = (x237==(x238+(x239<=x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x242 = INT64_MIN;
	int32_t x243 = INT32_MAX;
	volatile int32_t t59 = 6094;

	t59 = (x241==(x242+(x243<=x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = -1LL;
	static int8_t x247 = 1;
	static int64_t x248 = INT64_MIN;

	t60 = (x245==(x246+(x247<=x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MIN;
	uint16_t x251 = 0U;
	int64_t x252 = -1LL;
	volatile int32_t t61 = 100946;

	t61 = (x249==(x250+(x251<=x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x253 = INT8_MIN;
	volatile int32_t x254 = INT32_MIN;
	int32_t t62 = -1708;

	t62 = (x253==(x254+(x255<=x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 194124LLU;
	int32_t x258 = INT32_MIN;
	int16_t x259 = 1;
	static int16_t x260 = INT16_MIN;

	t63 = (x257==(x258+(x259<=x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x262 = -1;
	int8_t x263 = INT8_MIN;
	static int32_t t64 = 59;

	t64 = (x261==(x262+(x263<=x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x266 = INT16_MIN;
	int16_t x268 = INT16_MAX;
	int32_t t65 = 7963466;

	t65 = (x265==(x266+(x267<=x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x269 = 2858U;
	uint8_t x271 = 32U;
	int64_t x272 = -2026791LL;

	t66 = (x269==(x270+(x271<=x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 29504U;
	static int32_t x274 = -32762;
	uint16_t x275 = 15845U;
	static int16_t x276 = 41;
	int32_t t67 = -16481094;

	t67 = (x273==(x274+(x275<=x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = 13263U;
	int16_t x278 = -2977;
	volatile uint8_t x279 = UINT8_MAX;
	volatile int32_t t68 = 7674;

	t68 = (x277==(x278+(x279<=x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x285 = -1;
	static volatile int8_t x287 = 1;
	uint32_t x288 = 3U;

	t69 = (x285==(x286+(x287<=x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MIN;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MAX;

	t70 = (x289==(x290+(x291<=x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x293 = INT8_MIN;
	int8_t x294 = -1;
	int32_t x295 = -126683050;
	uint16_t x296 = 0U;
	int32_t t71 = -984798568;

	t71 = (x293==(x294+(x295<=x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = -64419224;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = 1055887U;
	int64_t x304 = -1229882949LL;
	int32_t t72 = 11207;

	t72 = (x301==(x302+(x303<=x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x306 = -1;
	uint16_t x307 = 91U;
	volatile int64_t x308 = INT64_MIN;
	volatile int32_t t73 = 819274;

	t73 = (x305==(x306+(x307<=x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = 3047U;
	int8_t x310 = -1;
	uint64_t x311 = 1261591570470LLU;
	int64_t x312 = 1453541520992912825LL;
	int32_t t74 = 368894;

	t74 = (x309==(x310+(x311<=x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = -403;
	static volatile uint8_t x314 = 0U;
	int8_t x315 = -5;
	int64_t x316 = INT64_MIN;
	int32_t t75 = -10336161;

	t75 = (x313==(x314+(x315<=x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	static volatile int32_t t76 = 0;

	t76 = (x317==(x318+(x319<=x320)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MAX;
	static uint64_t x322 = 71LLU;
	uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t77 = 0;

	t77 = (x321==(x322+(x323<=x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x325 = -3;
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MAX;
	volatile int8_t x328 = INT8_MIN;
	int32_t t78 = 1;

	t78 = (x325==(x326+(x327<=x328)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x329 = INT32_MIN;
	int8_t x330 = -1;
	int32_t x331 = 6393;
	static volatile int32_t t79 = -1000642747;

	t79 = (x329==(x330+(x331<=x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = 1521454451922LLU;
	volatile int16_t x334 = 149;
	uint32_t x335 = 326050616U;
	int64_t x336 = INT64_MAX;
	volatile int32_t t80 = -2492169;

	t80 = (x333==(x334+(x335<=x336)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x338 = 85U;
	int64_t x339 = INT64_MIN;
	uint64_t x340 = 1157195242236269270LLU;
	int32_t t81 = 0;

	t81 = (x337==(x338+(x339<=x340)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x346 = -1;
	static int32_t x347 = -164713215;
	int32_t x348 = -182;
	int32_t t82 = 11916;

	t82 = (x345==(x346+(x347<=x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x349 = 27U;
	int8_t x350 = INT8_MAX;
	int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MAX;
	volatile int32_t t83 = 7012248;

	t83 = (x349==(x350+(x351<=x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = 1144U;
	int32_t x354 = INT32_MAX;
	static volatile uint32_t x355 = 1271918016U;
	volatile int32_t x356 = 68446855;

	t84 = (x353==(x354+(x355<=x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x358 = -1;
	int32_t x359 = -1;
	int32_t t85 = -223805545;

	t85 = (x357==(x358+(x359<=x360)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -1599LL;
	int16_t x363 = INT16_MIN;
	int64_t x364 = 2LL;
	volatile int32_t t86 = -2;

	t86 = (x361==(x362+(x363<=x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MIN;
	static volatile int64_t x366 = 2029028496245905LL;
	static uint32_t x368 = UINT32_MAX;
	volatile int32_t t87 = -1350;

	t87 = (x365==(x366+(x367<=x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x369 = 11589040U;
	uint8_t x370 = 0U;
	uint8_t x371 = UINT8_MAX;
	uint8_t x372 = 3U;

	t88 = (x369==(x370+(x371<=x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MIN;
	int32_t x375 = 7;
	volatile uint16_t x376 = UINT16_MAX;
	int32_t t89 = 220;

	t89 = (x373==(x374+(x375<=x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int8_t x383 = -1;
	uint64_t x384 = UINT64_MAX;
	int32_t t90 = -6514;

	t90 = (x381==(x382+(x383<=x384)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x387 = 4U;
	int32_t t91 = -44;

	t91 = (x385==(x386+(x387<=x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x389 = INT32_MAX;
	static uint64_t x390 = 4LLU;
	int8_t x391 = INT8_MAX;
	volatile int32_t t92 = -18603;

	t92 = (x389==(x390+(x391<=x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = INT32_MIN;
	static int64_t x394 = -1LL;
	int8_t x395 = INT8_MAX;
	uint8_t x396 = 5U;
	static volatile int32_t t93 = -25886583;

	t93 = (x393==(x394+(x395<=x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x398 = INT8_MAX;
	volatile int16_t x399 = -1;
	int16_t x400 = INT16_MIN;
	int32_t t94 = -75361;

	t94 = (x397==(x398+(x399<=x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = -903;
	int64_t x402 = -30353LL;
	uint64_t x403 = 2614LLU;
	static volatile int64_t x404 = INT64_MIN;
	volatile int32_t t95 = 790173565;

	t95 = (x401==(x402+(x403<=x404)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x405 = 279513LLU;
	static uint8_t x406 = 40U;
	uint32_t x407 = 205258577U;
	volatile int32_t x408 = INT32_MIN;
	static int32_t t96 = -57385;

	t96 = (x405==(x406+(x407<=x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x411 = 0U;
	int64_t x412 = INT64_MAX;
	volatile int32_t t97 = -46324353;

	t97 = (x409==(x410+(x411<=x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MIN;
	static volatile uint8_t x414 = 33U;
	static volatile uint32_t x415 = UINT32_MAX;
	static int64_t x416 = INT64_MIN;

	t98 = (x413==(x414+(x415<=x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x418 = 25046261970638LLU;
	volatile int32_t x419 = 7876;
	volatile int64_t x420 = -599564011454LL;
	volatile int32_t t99 = -166623;

	t99 = (x417==(x418+(x419<=x420)));

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

