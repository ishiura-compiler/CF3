#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
static volatile int32_t t3 = -42;
volatile int32_t t5 = -1851337;
uint64_t x29 = 137893178LLU;
int16_t x33 = 2419;
int64_t x37 = INT64_MIN;
uint64_t x40 = 362438749858LLU;
static int8_t x46 = 17;
uint32_t x48 = 10552906U;
int32_t t10 = 16168;
static volatile int32_t t11 = 18;
uint64_t x59 = 242261733LLU;
int32_t t13 = 1568;
static uint32_t x68 = 975999U;
int8_t x72 = INT8_MIN;
uint32_t x76 = 256274U;
int8_t x78 = INT8_MIN;
int32_t t17 = -13003653;
int32_t x90 = -1;
static volatile int16_t x93 = 7316;
int32_t t21 = 61383;
static int8_t x105 = INT8_MIN;
int8_t x108 = -1;
static uint16_t x109 = UINT16_MAX;
volatile int64_t x111 = -4919267554058LL;
volatile uint64_t x115 = UINT64_MAX;
static int32_t t25 = -7;
int64_t x122 = -1LL;
volatile int32_t t26 = -1045830007;
volatile int16_t x126 = -1;
static volatile int8_t x131 = -1;
int16_t x133 = -2309;
int16_t x135 = INT16_MIN;
int16_t x137 = -1;
uint8_t x151 = 65U;
volatile uint32_t x152 = 53243U;
int16_t x157 = INT16_MAX;
volatile int32_t t34 = -87;
uint8_t x163 = 49U;
int16_t x164 = -1;
static volatile int64_t x171 = INT64_MIN;
static uint64_t x173 = 4935LLU;
int32_t x176 = 98300413;
static int8_t x177 = -7;
int32_t x178 = -27562;
int64_t x179 = 89010LL;
int32_t t38 = -8598;
uint64_t x186 = 3174LLU;
int32_t t40 = 19202;
volatile int32_t t41 = -111088948;
volatile int64_t x197 = INT64_MAX;
volatile int64_t x198 = -1LL;
int32_t x201 = INT32_MAX;
int16_t x203 = INT16_MIN;
static int32_t t44 = 231692;
volatile int8_t x213 = -1;
uint64_t x222 = UINT64_MAX;
int16_t x225 = -1;
static int8_t x228 = INT8_MIN;
volatile int8_t x231 = -1;
int16_t x235 = 39;
volatile int16_t x239 = INT16_MIN;
uint32_t x243 = 950461U;
volatile int32_t t52 = -122;
static volatile int32_t t53 = 1;
static uint32_t x262 = 246U;
int32_t x265 = -7302456;
static volatile uint32_t x267 = 14U;
volatile uint32_t x271 = 70072015U;
volatile int32_t t58 = 32452;
int64_t x283 = 1LL;
volatile uint64_t x284 = 53069923230203LLU;
volatile int32_t t60 = -1;
uint32_t x295 = 25U;
uint64_t x300 = 673031386777LLU;
int64_t x315 = -305137LL;
int32_t t68 = 6460455;
uint64_t x319 = 21352930LLU;
uint64_t x320 = 3701LLU;
static uint32_t x338 = UINT32_MAX;
static int16_t x349 = INT16_MIN;
int16_t x352 = 15221;
volatile int32_t t76 = 16035763;
uint32_t x358 = 1436657997U;
static uint32_t x371 = 136U;
volatile uint64_t x374 = 1146LLU;
volatile uint16_t x375 = UINT16_MAX;
static int64_t x382 = -1LL;
uint16_t x394 = 5670U;
int16_t x397 = INT16_MIN;
volatile int32_t t85 = -10;
static uint8_t x409 = 1U;
int16_t x412 = -5062;
uint16_t x416 = 18U;
uint8_t x423 = 0U;
static volatile int32_t t90 = 697127;
int32_t t91 = 472;
int16_t x430 = 4789;
uint16_t x433 = UINT16_MAX;
static int16_t x439 = -1;
static uint64_t x444 = 56LLU;
static volatile int32_t t95 = -12969;
volatile int64_t x454 = -1LL;
volatile int32_t t98 = 1089513;
volatile uint16_t x458 = 4U;
volatile int64_t x459 = -1LL;
volatile int16_t x460 = INT16_MIN;


void f0(void) {
	int32_t x1 = 3809;
	int32_t x2 = -1;
	static int16_t x3 = 13;
	int16_t x4 = -1;
	static int32_t t0 = -398;

	t0 = (x1==(x2^(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 5U;
	int64_t x6 = 7119200645227LL;
	uint64_t x7 = 2LLU;
	static volatile int32_t t1 = 0;

	t1 = (x5==(x6^(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MAX;
	static int8_t x11 = INT8_MIN;
	uint8_t x12 = 2U;
	volatile int32_t t2 = 213340628;

	t2 = (x9==(x10^(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	static int64_t x18 = INT64_MIN;
	int64_t x19 = 9929036270539169LL;
	static int32_t x20 = INT32_MAX;

	t3 = (x17==(x18^(x19-x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = 2800083593LL;
	volatile uint16_t x23 = 26822U;
	static int8_t x24 = 0;
	volatile int32_t t4 = -238278;

	t4 = (x21==(x22^(x23-x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MIN;
	volatile int16_t x26 = INT16_MIN;
	uint16_t x27 = 890U;
	uint32_t x28 = 755685934U;

	t5 = (x25==(x26^(x27-x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = 0;
	uint32_t x31 = 7441U;
	int16_t x32 = INT16_MAX;
	volatile int32_t t6 = 124644;

	t6 = (x29==(x30^(x31-x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x34 = 7U;
	static int64_t x35 = -259016771652949176LL;
	int8_t x36 = -31;
	volatile int32_t t7 = 4046;

	t7 = (x33==(x34^(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x38 = INT64_MIN;
	static uint16_t x39 = UINT16_MAX;
	int32_t t8 = 131358800;

	t8 = (x37==(x38^(x39-x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MAX;
	int64_t x42 = -1LL;
	static int16_t x43 = INT16_MIN;
	int16_t x44 = 34;
	int32_t t9 = 510;

	t9 = (x41==(x42^(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	int32_t x47 = -107402300;

	t10 = (x45==(x46^(x47-x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x53 = 1424766U;
	int64_t x54 = INT64_MIN;
	volatile uint16_t x55 = UINT16_MAX;
	uint32_t x56 = UINT32_MAX;

	t11 = (x53==(x54^(x55-x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = INT8_MIN;
	uint8_t x58 = 20U;
	int32_t x60 = INT32_MAX;
	volatile int32_t t12 = 773;

	t12 = (x57==(x58^(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = -1LL;
	int8_t x62 = INT8_MAX;
	uint16_t x63 = 3U;
	int32_t x64 = 342991730;

	t13 = (x61==(x62^(x63-x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 0;
	uint8_t x66 = 3U;
	static int16_t x67 = -1;
	int32_t t14 = -6;

	t14 = (x65==(x66^(x67-x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = 36;
	static int64_t x70 = -1LL;
	static int16_t x71 = -1;
	int32_t t15 = -196635526;

	t15 = (x69==(x70^(x71-x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 48550462404770LL;
	uint32_t x74 = UINT32_MAX;
	int8_t x75 = 7;
	volatile int32_t t16 = -55610061;

	t16 = (x73==(x74^(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	uint8_t x79 = 41U;
	int8_t x80 = INT8_MIN;

	t17 = (x77==(x78^(x79-x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = 2;
	uint8_t x82 = UINT8_MAX;
	uint8_t x83 = UINT8_MAX;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t18 = -361987;

	t18 = (x81==(x82^(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = -1;
	static int16_t x86 = -1;
	volatile int64_t x87 = INT64_MAX;
	int64_t x88 = INT64_MAX;
	static volatile int32_t t19 = 380519;

	t19 = (x85==(x86^(x87-x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 33623664U;
	int64_t x91 = 8005171511LL;
	static uint16_t x92 = 1U;
	int32_t t20 = 315006;

	t20 = (x89==(x90^(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = 116197LL;
	uint64_t x95 = 53891730LLU;
	int8_t x96 = -1;

	t21 = (x93==(x94^(x95-x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = 8604;
	static volatile uint8_t x102 = UINT8_MAX;
	volatile int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MIN;
	volatile int32_t t22 = -311;

	t22 = (x101==(x102^(x103-x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x106 = -11049;
	int8_t x107 = -21;
	volatile int32_t t23 = 1916;

	t23 = (x105==(x106^(x107-x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x110 = -6279608LL;
	uint32_t x112 = 125U;
	static int32_t t24 = -263737320;

	t24 = (x109==(x110^(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = 5347LL;
	uint32_t x114 = UINT32_MAX;
	uint8_t x116 = 3U;

	t25 = (x113==(x114^(x115-x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = 828;
	static uint8_t x123 = UINT8_MAX;
	int32_t x124 = 950071;

	t26 = (x121==(x122^(x123-x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 52U;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -2050;
	int32_t t27 = 7167263;

	t27 = (x125==(x126^(x127-x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MAX;
	uint8_t x130 = UINT8_MAX;
	volatile int64_t x132 = -42919982LL;
	int32_t t28 = -5120769;

	t28 = (x129==(x130^(x131-x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x134 = INT64_MIN;
	uint32_t x136 = 931338U;
	volatile int32_t t29 = 2751448;

	t29 = (x133==(x134^(x135-x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x138 = 1040U;
	int8_t x139 = 0;
	int16_t x140 = 1017;
	volatile int32_t t30 = -93;

	t30 = (x137==(x138^(x139-x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MIN;
	uint32_t x142 = UINT32_MAX;
	int8_t x143 = -5;
	int16_t x144 = INT16_MIN;
	volatile int32_t t31 = -4;

	t31 = (x141==(x142^(x143-x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;
	volatile int32_t t32 = 24;

	t32 = (x149==(x150^(x151-x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x154 = 1697U;
	int8_t x155 = INT8_MIN;
	volatile int16_t x156 = -1;
	volatile int32_t t33 = 1791169;

	t33 = (x153==(x154^(x155-x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x158 = INT32_MAX;
	static uint8_t x159 = 10U;
	int8_t x160 = INT8_MIN;

	t34 = (x157==(x158^(x159-x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = UINT16_MAX;
	int32_t x162 = INT32_MAX;
	int32_t t35 = 56;

	t35 = (x161==(x162^(x163-x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 2LLU;
	int16_t x170 = 40;
	static int64_t x172 = INT64_MIN;
	static int32_t t36 = 0;

	t36 = (x169==(x170^(x171-x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x174 = INT16_MIN;
	int16_t x175 = -57;
	volatile int32_t t37 = 5025;

	t37 = (x173==(x174^(x175-x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x180 = 0U;

	t38 = (x177==(x178^(x179-x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = INT64_MIN;
	volatile int64_t x187 = -1LL;
	static int8_t x188 = 31;
	int32_t t39 = -783388228;

	t39 = (x185==(x186^(x187-x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = -1;
	volatile int8_t x190 = 1;
	int16_t x191 = INT16_MAX;
	volatile int8_t x192 = INT8_MIN;

	t40 = (x189==(x190^(x191-x192)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x193 = INT64_MAX;
	int64_t x194 = INT64_MIN;
	int8_t x195 = 1;
	int32_t x196 = -1;

	t41 = (x193==(x194^(x195-x196)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MIN;
	static int32_t t42 = 881;

	t42 = (x197==(x198^(x199-x200)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x202 = -1;
	volatile int32_t x204 = 1810514;
	volatile int32_t t43 = 35305;

	t43 = (x201==(x202^(x203-x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = -1;
	int64_t x207 = -1LL;
	int16_t x208 = INT16_MAX;

	t44 = (x205==(x206^(x207-x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x214 = UINT16_MAX;
	uint32_t x215 = 465740U;
	int32_t x216 = INT32_MIN;
	int32_t t45 = 99;

	t45 = (x213==(x214^(x215-x216)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x217 = INT8_MIN;
	volatile int8_t x218 = INT8_MIN;
	uint16_t x219 = 1033U;
	uint8_t x220 = 4U;
	volatile int32_t t46 = -293099704;

	t46 = (x217==(x218^(x219-x220)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x221 = 19LLU;
	volatile uint8_t x223 = 73U;
	int64_t x224 = -222LL;
	volatile int32_t t47 = 322312;

	t47 = (x221==(x222^(x223-x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x226 = -283;
	uint8_t x227 = 3U;
	int32_t t48 = -721232793;

	t48 = (x225==(x226^(x227-x228)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	volatile uint32_t x232 = 34U;
	int32_t t49 = 1;

	t49 = (x229==(x230^(x231-x232)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = 23U;
	static volatile int32_t x234 = INT32_MIN;
	int64_t x236 = -1LL;
	volatile int32_t t50 = -30414728;

	t50 = (x233==(x234^(x235-x236)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = 224407561LLU;
	int16_t x238 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	int32_t t51 = -802185930;

	t51 = (x237==(x238^(x239-x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = INT8_MIN;
	int32_t x242 = -1;
	int16_t x244 = -1;

	t52 = (x241==(x242^(x243-x244)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = -1LL;
	static int16_t x246 = INT16_MAX;
	int8_t x247 = -1;
	int16_t x248 = -1;

	t53 = (x245==(x246^(x247-x248)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = -1;
	uint64_t x250 = 156587LLU;
	int8_t x251 = -43;
	static int8_t x252 = -7;
	int32_t t54 = -1309;

	t54 = (x249==(x250^(x251-x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x257 = INT8_MIN;
	volatile uint16_t x258 = UINT16_MAX;
	static int8_t x259 = INT8_MIN;
	static volatile int64_t x260 = -2073LL;
	volatile int32_t t55 = -1;

	t55 = (x257==(x258^(x259-x260)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MIN;
	static uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 76538424187969214LLU;
	int32_t t56 = -6799;

	t56 = (x261==(x262^(x263-x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x266 = INT16_MAX;
	int16_t x268 = 0;
	volatile int32_t t57 = -10;

	t57 = (x265==(x266^(x267-x268)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = -1LL;
	uint8_t x270 = 0U;
	static uint64_t x272 = 87LLU;

	t58 = (x269==(x270^(x271-x272)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = -6;
	int32_t x278 = INT32_MIN;
	int32_t x279 = -1;
	int32_t x280 = INT32_MAX;
	volatile int32_t t59 = -318365;

	t59 = (x277==(x278^(x279-x280)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x281 = INT64_MIN;
	uint64_t x282 = 369820LLU;

	t60 = (x281==(x282^(x283-x284)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = INT64_MAX;
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = INT16_MIN;
	static int32_t x288 = -1;
	int32_t t61 = 535421518;

	t61 = (x285==(x286^(x287-x288)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x289 = UINT32_MAX;
	uint8_t x290 = UINT8_MAX;
	int64_t x291 = -1LL;
	uint32_t x292 = 0U;
	volatile int32_t t62 = -728010053;

	t62 = (x289==(x290^(x291-x292)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x293 = 27621713994945LL;
	int8_t x294 = 1;
	static int32_t x296 = -1;
	int32_t t63 = 5;

	t63 = (x293==(x294^(x295-x296)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x297 = INT64_MIN;
	int8_t x298 = -1;
	static int16_t x299 = -1;
	int32_t t64 = -6724876;

	t64 = (x297==(x298^(x299-x300)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x301 = 1025U;
	int64_t x302 = INT64_MIN;
	static int64_t x303 = -290LL;
	int64_t x304 = INT64_MIN;
	int32_t t65 = -36;

	t65 = (x301==(x302^(x303-x304)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = -17LL;
	int8_t x306 = INT8_MIN;
	int16_t x307 = -1;
	int8_t x308 = -1;
	static volatile int32_t t66 = -86348700;

	t66 = (x305==(x306^(x307-x308)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = -9;
	int8_t x310 = -1;
	static int16_t x311 = INT16_MIN;
	static uint8_t x312 = UINT8_MAX;
	static int32_t t67 = -5449;

	t67 = (x309==(x310^(x311-x312)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = -3310;
	int32_t x314 = -1;
	uint16_t x316 = 182U;

	t68 = (x313==(x314^(x315-x316)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int16_t x318 = 154;
	volatile int32_t t69 = -111525367;

	t69 = (x317==(x318^(x319-x320)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x325 = UINT64_MAX;
	int64_t x326 = 225177674LL;
	uint64_t x327 = UINT64_MAX;
	uint64_t x328 = UINT64_MAX;
	static volatile int32_t t70 = 31584;

	t70 = (x325==(x326^(x327-x328)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = INT64_MAX;
	static int16_t x330 = INT16_MAX;
	uint8_t x331 = 28U;
	int32_t x332 = -292;
	volatile int32_t t71 = -926;

	t71 = (x329==(x330^(x331-x332)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	int8_t x339 = INT8_MIN;
	static int64_t x340 = 3LL;
	volatile int32_t t72 = -1;

	t72 = (x337==(x338^(x339-x340)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = 1028339449834LL;
	uint32_t x342 = 51U;
	int8_t x343 = INT8_MAX;
	int16_t x344 = -1;
	static volatile int32_t t73 = -16;

	t73 = (x341==(x342^(x343-x344)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = -1;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MIN;
	int32_t t74 = -64;

	t74 = (x345==(x346^(x347-x348)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x350 = -155231LL;
	static volatile uint64_t x351 = 135394101LLU;
	volatile int32_t t75 = -15631;

	t75 = (x349==(x350^(x351-x352)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x353 = INT64_MIN;
	volatile uint64_t x354 = 1LLU;
	uint64_t x355 = 528LLU;
	uint16_t x356 = 55U;

	t76 = (x353==(x354^(x355-x356)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	uint8_t x359 = UINT8_MAX;
	static uint64_t x360 = UINT64_MAX;
	volatile int32_t t77 = 14266254;

	t77 = (x357==(x358^(x359-x360)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = -1LL;
	uint32_t x362 = UINT32_MAX;
	uint32_t x363 = UINT32_MAX;
	volatile int64_t x364 = INT64_MAX;
	int32_t t78 = -61416920;

	t78 = (x361==(x362^(x363-x364)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x369 = INT64_MIN;
	int16_t x370 = INT16_MIN;
	int32_t x372 = INT32_MAX;
	volatile int32_t t79 = -10777;

	t79 = (x369==(x370^(x371-x372)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = UINT8_MAX;
	static volatile int16_t x376 = INT16_MIN;
	int32_t t80 = 33534;

	t80 = (x373==(x374^(x375-x376)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = 1;
	uint64_t x379 = UINT64_MAX;
	volatile int64_t x380 = -1LL;
	volatile int32_t t81 = 219203546;

	t81 = (x377==(x378^(x379-x380)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x383 = INT8_MAX;
	static volatile int16_t x384 = 18;
	int32_t t82 = 0;

	t82 = (x381==(x382^(x383-x384)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x385 = 860016743LLU;
	volatile uint16_t x386 = 1U;
	volatile int16_t x387 = INT16_MIN;
	static volatile int32_t x388 = -1;
	int32_t t83 = -1;

	t83 = (x385==(x386^(x387-x388)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = 106U;
	int32_t x395 = -1;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t84 = -63422505;

	t84 = (x393==(x394^(x395-x396)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x398 = -1;
	int32_t x399 = 6486;
	static int8_t x400 = INT8_MIN;

	t85 = (x397==(x398^(x399-x400)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x405 = 420840727103LLU;
	int8_t x406 = INT8_MIN;
	uint16_t x407 = UINT16_MAX;
	volatile uint64_t x408 = 25663713812LLU;
	static volatile int32_t t86 = -1;

	t86 = (x405==(x406^(x407-x408)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x410 = 1230456256U;
	int64_t x411 = 16678991253LL;
	volatile int32_t t87 = -18992554;

	t87 = (x409==(x410^(x411-x412)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x413 = 372316255LLU;
	int8_t x414 = 0;
	uint8_t x415 = UINT8_MAX;
	volatile int32_t t88 = 3459017;

	t88 = (x413==(x414^(x415-x416)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = 1;
	int16_t x419 = INT16_MIN;
	uint32_t x420 = 266484077U;
	int32_t t89 = 0;

	t89 = (x417==(x418^(x419-x420)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x421 = 419974LLU;
	int8_t x422 = INT8_MIN;
	int8_t x424 = -4;

	t90 = (x421==(x422^(x423-x424)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x425 = 3;
	int64_t x426 = -1LL;
	static uint32_t x427 = 1U;
	volatile int16_t x428 = 279;

	t91 = (x425==(x426^(x427-x428)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = -1;
	int8_t x431 = INT8_MIN;
	static int64_t x432 = 7820LL;
	int32_t t92 = -15;

	t92 = (x429==(x430^(x431-x432)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x434 = 465U;
	static volatile int32_t x435 = -1;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t93 = -218;

	t93 = (x433==(x434^(x435-x436)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = INT16_MIN;
	uint16_t x438 = 15U;
	static volatile uint64_t x440 = 17006589362LLU;
	volatile int32_t t94 = -6629;

	t94 = (x437==(x438^(x439-x440)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x441 = 3U;
	int32_t x442 = -2124566;
	static uint8_t x443 = 1U;

	t95 = (x441==(x442^(x443-x444)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = -1;
	static uint64_t x446 = 6198375245LLU;
	int8_t x447 = INT8_MIN;
	int64_t x448 = -343463215593LL;
	volatile int32_t t96 = -1631;

	t96 = (x445==(x446^(x447-x448)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x449 = INT8_MAX;
	int8_t x450 = INT8_MIN;
	int64_t x451 = 19824630990386818LL;
	int32_t x452 = INT32_MIN;
	volatile int32_t t97 = -80352800;

	t97 = (x449==(x450^(x451-x452)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x453 = 10536U;
	int8_t x455 = -1;
	int32_t x456 = INT32_MIN;

	t98 = (x453==(x454^(x455-x456)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x457 = -20628432LL;
	volatile int32_t t99 = -2;

	t99 = (x457==(x458^(x459-x460)));

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

