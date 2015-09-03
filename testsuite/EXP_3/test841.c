#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
static volatile int16_t x4 = -12;
uint8_t x8 = UINT8_MAX;
int32_t x15 = 27;
int8_t x20 = -1;
volatile int32_t t6 = -909792300;
uint16_t x30 = 5875U;
volatile uint16_t x33 = 821U;
volatile uint64_t x34 = 496049010708LLU;
int32_t t9 = 133627;
uint32_t x42 = 285908U;
uint32_t x55 = 149443469U;
volatile uint64_t x57 = UINT64_MAX;
volatile int32_t x62 = 10931;
int32_t x64 = -1;
int16_t x68 = INT16_MIN;
int32_t t17 = -108763566;
uint8_t x85 = UINT8_MAX;
static int32_t x88 = INT32_MIN;
int8_t x92 = 1;
volatile int64_t x93 = INT64_MAX;
static int64_t x101 = INT64_MIN;
int32_t t25 = 89765;
int8_t x117 = -1;
int64_t x119 = 10559700523714831LL;
int32_t t29 = -583963883;
volatile int32_t t30 = 569076486;
int32_t t31 = -4851;
uint8_t x131 = UINT8_MAX;
static volatile int8_t x140 = -1;
int32_t t35 = -5673;
int32_t x147 = INT32_MAX;
volatile int32_t t36 = -86489672;
int32_t x153 = INT32_MAX;
int16_t x154 = 6;
uint16_t x155 = UINT16_MAX;
int32_t t38 = 3471591;
int64_t x157 = 46392125LL;
volatile int32_t x158 = 23;
uint32_t x167 = 626539788U;
int64_t x179 = -58621573136212LL;
static int32_t t43 = -7135;
int32_t t44 = -999;
int32_t x200 = -880643216;
int32_t t49 = 93736045;
int8_t x210 = INT8_MIN;
volatile int16_t x211 = INT16_MAX;
static volatile int32_t t51 = -4302655;
uint8_t x220 = 58U;
uint8_t x223 = 0U;
volatile int32_t t53 = -479754;
volatile int32_t t54 = -28325;
static volatile int32_t x236 = -1;
static volatile int32_t t56 = 0;
int8_t x238 = -6;
volatile int32_t t57 = -490646;
static volatile int32_t t58 = -1244605;
int64_t x249 = -1LL;
int8_t x258 = INT8_MAX;
static int32_t x259 = INT32_MIN;
int8_t x260 = 1;
int32_t x274 = -412003876;
int16_t x275 = INT16_MIN;
volatile int16_t x276 = INT16_MIN;
int8_t x283 = 3;
uint16_t x284 = 8595U;
volatile uint64_t x289 = UINT64_MAX;
static volatile int32_t x295 = -1;
uint64_t x297 = 360349930LLU;
static volatile int32_t t73 = -1;
int64_t x306 = INT64_MIN;
int8_t x307 = -45;
int16_t x309 = -1;
static uint64_t x314 = 2549LLU;
static int32_t x315 = 199;
int32_t t77 = 5;
int8_t x321 = INT8_MIN;
volatile uint32_t x325 = 59U;
volatile int64_t x328 = -1148291208580LL;
static int64_t x332 = INT64_MAX;
volatile int32_t t80 = 34973259;
int32_t t82 = 6071;
int32_t t83 = -4095;
uint32_t x350 = 198U;
uint64_t x353 = 7004372621LLU;
int32_t t87 = 12;
volatile uint64_t x361 = 578095776630468314LLU;
int64_t x367 = INT64_MIN;
int32_t x368 = INT32_MIN;
int32_t t89 = -80;
static volatile uint8_t x369 = 32U;
uint8_t x371 = 3U;
int64_t x380 = -2685684079198793LL;
static volatile int32_t t98 = -124797755;
int32_t x406 = 13;
static volatile int8_t x408 = 20;


void f0(void) {
	uint8_t x2 = 1U;
	uint32_t x3 = UINT32_MAX;
	volatile int32_t t0 = -15576608;

	t0 = ((x1^x2)<(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	volatile uint64_t x6 = 3834889602734LLU;
	int8_t x7 = -7;
	volatile int32_t t1 = 580387969;

	t1 = ((x5^x6)<(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 962;
	int8_t x10 = INT8_MIN;
	int16_t x11 = 139;
	int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = 14263;

	t2 = ((x9^x10)<(x11%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int16_t x14 = -13;
	volatile int64_t x16 = INT64_MAX;
	int32_t t3 = -231086993;

	t3 = ((x13^x14)<(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -3219;
	static int64_t x18 = INT64_MAX;
	volatile int64_t x19 = -404018921194063LL;
	int32_t t4 = -396663;

	t4 = ((x17^x18)<(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MAX;
	volatile uint8_t x23 = 26U;
	volatile uint64_t x24 = 38LLU;
	int32_t t5 = -157250652;

	t5 = ((x21^x22)<(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static volatile uint8_t x26 = 13U;
	static volatile int16_t x27 = 11;
	int8_t x28 = 32;

	t6 = ((x25^x26)<(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 1799071223552526LLU;
	uint64_t x31 = 1309514261LLU;
	static volatile int64_t x32 = 49856LL;
	int32_t t7 = -620024;

	t7 = ((x29^x30)<(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x35 = 13U;
	int64_t x36 = INT64_MAX;
	int32_t t8 = -54432;

	t8 = ((x33^x34)<(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x38 = -1LL;
	int8_t x39 = -1;
	int16_t x40 = -1;

	t9 = ((x37^x38)<(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	static int32_t x43 = -1;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 172085004;

	t10 = ((x41^x42)<(x43%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int64_t x46 = -1LL;
	int64_t x47 = INT64_MIN;
	volatile uint64_t x48 = 28012564099164LLU;
	volatile int32_t t11 = 97;

	t11 = ((x45^x46)<(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -543LL;
	uint16_t x50 = 7414U;
	uint16_t x51 = 5776U;
	int8_t x52 = -22;
	int32_t t12 = 1;

	t12 = ((x49^x50)<(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	static uint64_t x54 = 12345LLU;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = 17071;

	t13 = ((x53^x54)<(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	static uint64_t x59 = 1006904LLU;
	static uint8_t x60 = UINT8_MAX;
	int32_t t14 = -22;

	t14 = ((x57^x58)<(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	volatile int32_t t15 = 1488;

	t15 = ((x61^x62)<(x63%x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static uint16_t x66 = 7295U;
	uint16_t x67 = 2988U;
	int32_t t16 = 5;

	t16 = ((x65^x66)<(x67%x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	uint16_t x70 = UINT16_MAX;
	int64_t x71 = -1LL;
	static uint64_t x72 = 640210547960489LLU;

	t17 = ((x69^x70)<(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint16_t x74 = 423U;
	uint16_t x75 = UINT16_MAX;
	volatile uint16_t x76 = 18216U;
	volatile int32_t t18 = 113559680;

	t18 = ((x73^x74)<(x75%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 1062127036U;
	int16_t x78 = INT16_MIN;
	uint16_t x79 = UINT16_MAX;
	uint32_t x80 = UINT32_MAX;
	int32_t t19 = 15909;

	t19 = ((x77^x78)<(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	int8_t x82 = -1;
	static int32_t x83 = INT32_MIN;
	uint64_t x84 = 519854047837780299LLU;
	static volatile int32_t t20 = -160750182;

	t20 = ((x81^x82)<(x83%x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -17171005733147LL;
	uint16_t x87 = 319U;
	int32_t t21 = -61;

	t21 = ((x85^x86)<(x87%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 942U;
	int32_t x90 = INT32_MIN;
	uint64_t x91 = UINT64_MAX;
	static volatile int32_t t22 = -28348;

	t22 = ((x89^x90)<(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 20110;
	static volatile int8_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	int32_t t23 = 48;

	t23 = ((x93^x94)<(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -129264;
	int64_t x98 = -1LL;
	uint32_t x99 = 24574U;
	static int64_t x100 = -1LL;
	int32_t t24 = 2163819;

	t24 = ((x97^x98)<(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	static uint32_t x104 = 11991U;

	t25 = ((x101^x102)<(x103%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -6LL;
	volatile int32_t x106 = INT32_MAX;
	volatile uint64_t x107 = 1079742669564257LLU;
	static int32_t x108 = -1;
	int32_t t26 = -3007803;

	t26 = ((x105^x106)<(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	static int32_t x110 = 100624009;
	uint16_t x111 = UINT16_MAX;
	volatile int32_t x112 = -1;
	int32_t t27 = -1;

	t27 = ((x109^x110)<(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 24553U;
	int8_t x114 = 2;
	uint32_t x115 = UINT32_MAX;
	volatile int64_t x116 = -1LL;
	int32_t t28 = 242;

	t28 = ((x113^x114)<(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	int64_t x120 = 472833435409486LL;

	t29 = ((x117^x118)<(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -28;
	static int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MIN;

	t30 = ((x121^x122)<(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = 4U;
	uint16_t x126 = 2U;
	int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;

	t31 = ((x125^x126)<(x127%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 2456;
	int16_t x130 = INT16_MAX;
	uint8_t x132 = UINT8_MAX;
	static volatile int32_t t32 = -254;

	t32 = ((x129^x130)<(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MIN;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 1;

	t33 = ((x133^x134)<(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 0;
	volatile int16_t x138 = -5;
	uint64_t x139 = UINT64_MAX;
	volatile int32_t t34 = 0;

	t34 = ((x137^x138)<(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 765652035230259LLU;
	int32_t x142 = INT32_MAX;
	uint64_t x143 = 279121820332617LLU;
	int32_t x144 = INT32_MIN;

	t35 = ((x141^x142)<(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 15U;
	int64_t x146 = INT64_MIN;
	int32_t x148 = INT32_MIN;

	t36 = ((x145^x146)<(x147%x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 2074252767U;
	uint64_t x150 = 111LLU;
	int32_t x151 = 53509;
	int64_t x152 = 6293370232494311LL;
	volatile int32_t t37 = -5;

	t37 = ((x149^x150)<(x151%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x156 = 608;

	t38 = ((x153^x154)<(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x159 = 4U;
	volatile uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = 1;

	t39 = ((x157^x158)<(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = -235;
	static uint8_t x166 = UINT8_MAX;
	volatile uint8_t x168 = 11U;
	volatile int32_t t40 = -1214;

	t40 = ((x165^x166)<(x167%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x169 = UINT8_MAX;
	static int64_t x170 = INT64_MIN;
	static int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;
	static int32_t t41 = 13383;

	t41 = ((x169^x170)<(x171%x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x173 = 7LL;
	int64_t x174 = -69LL;
	int64_t x175 = 669LL;
	int64_t x176 = -1LL;
	int32_t t42 = 1530;

	t42 = ((x173^x174)<(x175%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -99;
	int64_t x178 = -983796503032LL;
	static volatile int64_t x180 = 73626634234161328LL;

	t43 = ((x177^x178)<(x179%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 9U;
	uint16_t x182 = 8089U;
	int64_t x183 = INT64_MIN;
	static volatile uint32_t x184 = UINT32_MAX;

	t44 = ((x181^x182)<(x183%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 377U;
	static uint16_t x186 = UINT16_MAX;
	int32_t x187 = INT32_MAX;
	static volatile int64_t x188 = 59LL;
	static int32_t t45 = -71520;

	t45 = ((x185^x186)<(x187%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x189 = INT32_MIN;
	volatile int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MAX;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t46 = 237482192;

	t46 = ((x189^x190)<(x191%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = 36U;
	int32_t x195 = -38;
	int8_t x196 = -1;
	int32_t t47 = 859237;

	t47 = ((x193^x194)<(x195%x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	static int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MAX;
	static int32_t t48 = -70735;

	t48 = ((x197^x198)<(x199%x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	int8_t x206 = -1;
	uint64_t x207 = 22711LLU;
	static uint32_t x208 = 49631U;

	t49 = ((x205^x206)<(x207%x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x209 = UINT32_MAX;
	uint8_t x212 = 2U;
	int32_t t50 = -108021;

	t50 = ((x209^x210)<(x211%x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = UINT16_MAX;

	t51 = ((x213^x214)<(x215%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x217 = INT64_MIN;
	uint64_t x218 = 187818285793074LLU;
	volatile int64_t x219 = INT64_MIN;
	volatile int32_t t52 = -11;

	t52 = ((x217^x218)<(x219%x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	int64_t x222 = INT64_MAX;
	uint64_t x224 = 50217077192881LLU;

	t53 = ((x221^x222)<(x223%x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = INT32_MAX;
	volatile uint64_t x226 = 1005196928LLU;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = INT8_MIN;

	t54 = ((x225^x226)<(x227%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	volatile uint64_t x230 = UINT64_MAX;
	uint64_t x231 = 12941LLU;
	volatile int8_t x232 = INT8_MAX;
	volatile int32_t t55 = 12079646;

	t55 = ((x229^x230)<(x231%x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 1741334723698LLU;
	uint16_t x234 = 34U;
	int32_t x235 = -3;

	t56 = ((x233^x234)<(x235%x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MAX;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -1;

	t57 = ((x237^x238)<(x239%x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = 5125232;
	volatile uint8_t x242 = 1U;
	static int8_t x243 = -1;
	int16_t x244 = -95;

	t58 = ((x241^x242)<(x243%x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 1U;
	int16_t x246 = -1;
	int32_t x247 = INT32_MIN;
	volatile int8_t x248 = -1;
	volatile int32_t t59 = 206;

	t59 = ((x245^x246)<(x247%x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x250 = UINT64_MAX;
	int8_t x251 = INT8_MAX;
	uint64_t x252 = UINT64_MAX;
	int32_t t60 = -7;

	t60 = ((x249^x250)<(x251%x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = 280850598;
	static int8_t x255 = 27;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t61 = -66658385;

	t61 = ((x253^x254)<(x255%x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	int32_t t62 = 13165073;

	t62 = ((x257^x258)<(x259%x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x261 = 0;
	int16_t x262 = 95;
	int64_t x263 = -10551629LL;
	int64_t x264 = INT64_MIN;
	int32_t t63 = -2687780;

	t63 = ((x261^x262)<(x263%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 1484U;
	uint8_t x266 = 1U;
	int64_t x267 = INT64_MIN;
	int16_t x268 = INT16_MAX;
	static volatile int32_t t64 = -2;

	t64 = ((x265^x266)<(x267%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x269 = INT64_MIN;
	volatile int8_t x270 = -1;
	int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MAX;
	volatile int32_t t65 = 0;

	t65 = ((x269^x270)<(x271%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x273 = INT8_MIN;
	int32_t t66 = 8;

	t66 = ((x273^x274)<(x275%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 0U;
	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t67 = -3691;

	t67 = ((x277^x278)<(x279%x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = INT32_MIN;
	uint64_t x282 = 8540951607LLU;
	volatile int32_t t68 = 1;

	t68 = ((x281^x282)<(x283%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x285 = -223;
	uint64_t x286 = 128371386756811815LLU;
	int64_t x287 = -405510993422831993LL;
	static uint8_t x288 = 71U;
	int32_t t69 = -3;

	t69 = ((x285^x286)<(x287%x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x290 = 98;
	volatile int32_t x291 = INT32_MAX;
	int8_t x292 = -2;
	volatile int32_t t70 = 200244894;

	t70 = ((x289^x290)<(x291%x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 12;
	int8_t x294 = 57;
	uint16_t x296 = 905U;
	volatile int32_t t71 = -1269554;

	t71 = ((x293^x294)<(x295%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x298 = INT32_MIN;
	static int8_t x299 = -4;
	uint16_t x300 = 2U;
	volatile int32_t t72 = -316329;

	t72 = ((x297^x298)<(x299%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MAX;
	volatile int16_t x302 = -1;
	int64_t x303 = INT64_MAX;
	int8_t x304 = INT8_MIN;

	t73 = ((x301^x302)<(x303%x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x305 = 72027176U;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t74 = 1;

	t74 = ((x305^x306)<(x307%x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x310 = UINT64_MAX;
	volatile uint64_t x311 = UINT64_MAX;
	volatile uint64_t x312 = 13646982LLU;
	volatile int32_t t75 = 490702;

	t75 = ((x309^x310)<(x311%x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = 254896194;
	uint16_t x316 = UINT16_MAX;
	int32_t t76 = -46;

	t76 = ((x313^x314)<(x315%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -2;
	static int8_t x318 = -1;
	uint64_t x319 = 226133966372LLU;
	uint64_t x320 = 64862733929LLU;

	t77 = ((x317^x318)<(x319%x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x322 = 59149678493LLU;
	int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t78 = -118;

	t78 = ((x321^x322)<(x323%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x326 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	static int32_t t79 = 6;

	t79 = ((x325^x326)<(x327%x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x329 = 12430U;
	static int64_t x330 = -1LL;
	int8_t x331 = 1;

	t80 = ((x329^x330)<(x331%x332));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -132;
	int32_t x334 = INT32_MAX;
	static int32_t x335 = -153;
	static volatile int8_t x336 = INT8_MAX;
	static volatile int32_t t81 = -55;

	t81 = ((x333^x334)<(x335%x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = -1;
	volatile int16_t x339 = INT16_MAX;
	volatile uint32_t x340 = 1U;

	t82 = ((x337^x338)<(x339%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = -1LL;
	int32_t x343 = -1;
	int32_t x344 = INT32_MIN;

	t83 = ((x341^x342)<(x343%x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MAX;
	int32_t x346 = INT32_MIN;
	static volatile uint32_t x347 = 3337U;
	int64_t x348 = -3LL;
	volatile int32_t t84 = -1080;

	t84 = ((x345^x346)<(x347%x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 1U;
	volatile int32_t x351 = -24;
	static int8_t x352 = INT8_MAX;
	int32_t t85 = -2247;

	t85 = ((x349^x350)<(x351%x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x354 = INT32_MAX;
	uint64_t x355 = UINT64_MAX;
	static uint64_t x356 = UINT64_MAX;
	static int32_t t86 = 3;

	t86 = ((x353^x354)<(x355%x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	uint8_t x359 = 22U;
	int8_t x360 = 7;

	t87 = ((x357^x358)<(x359%x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x362 = 27081LLU;
	static uint16_t x363 = UINT16_MAX;
	static int64_t x364 = INT64_MAX;
	static volatile int32_t t88 = 866;

	t88 = ((x361^x362)<(x363%x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = -3;
	volatile int32_t x366 = INT32_MIN;

	t89 = ((x365^x366)<(x367%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x370 = -1;
	uint32_t x372 = UINT32_MAX;
	int32_t t90 = 7358612;

	t90 = ((x369^x370)<(x371%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x374 = -89;
	static int16_t x375 = INT16_MIN;
	volatile int16_t x376 = INT16_MIN;
	int32_t t91 = -1;

	t91 = ((x373^x374)<(x375%x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 3970169585LLU;
	uint32_t x378 = 3U;
	volatile int64_t x379 = 2766LL;
	volatile int32_t t92 = -27;

	t92 = ((x377^x378)<(x379%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = UINT64_MAX;
	volatile int16_t x382 = 1;
	uint8_t x383 = 109U;
	volatile int32_t x384 = INT32_MIN;
	int32_t t93 = 430867611;

	t93 = ((x381^x382)<(x383%x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	static volatile int16_t x386 = INT16_MIN;
	int64_t x387 = -1LL;
	static int16_t x388 = 9114;
	static volatile int32_t t94 = 8367822;

	t94 = ((x385^x386)<(x387%x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x389 = 3U;
	static volatile int32_t x390 = -1;
	uint16_t x391 = 62U;
	static int32_t x392 = INT32_MIN;
	int32_t t95 = 149058;

	t95 = ((x389^x390)<(x391%x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = -1;
	volatile int32_t x394 = INT32_MIN;
	uint8_t x395 = 119U;
	uint8_t x396 = 31U;
	volatile int32_t t96 = 4400610;

	t96 = ((x393^x394)<(x395%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x397 = INT8_MIN;
	volatile uint32_t x398 = 1764696U;
	volatile int16_t x399 = 1;
	volatile int32_t x400 = 368;
	int32_t t97 = 19181693;

	t97 = ((x397^x398)<(x399%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = -1;
	int8_t x402 = -1;
	int8_t x403 = -1;
	int32_t x404 = -6;

	t98 = ((x401^x402)<(x403%x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = 0;
	volatile uint8_t x407 = 20U;
	volatile int32_t t99 = 473151;

	t99 = ((x405^x406)<(x407%x408));

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

