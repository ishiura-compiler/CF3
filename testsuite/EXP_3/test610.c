#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -1;
static int32_t t1 = -7110835;
volatile uint16_t x12 = 11395U;
int64_t x13 = -1LL;
static volatile int8_t x30 = INT8_MAX;
volatile int32_t x38 = 2795627;
int32_t x39 = -1;
int32_t x42 = 98754251;
int16_t x45 = 26;
uint64_t x57 = 7858005169480013LLU;
int8_t x59 = INT8_MIN;
int16_t x60 = INT16_MAX;
static int16_t x70 = INT16_MAX;
int16_t x74 = -86;
int32_t x76 = INT32_MAX;
volatile int64_t t17 = 445631026LL;
volatile int16_t x80 = -1;
int32_t t18 = 376268498;
int8_t x87 = -1;
volatile int64_t t21 = 1LL;
int16_t x95 = INT16_MAX;
int8_t x99 = 0;
int32_t x105 = INT32_MIN;
int64_t x110 = INT64_MIN;
uint16_t x114 = 2935U;
static int32_t t26 = 4;
uint64_t x118 = UINT64_MAX;
int64_t x120 = INT64_MIN;
volatile int32_t t31 = -1364585;
volatile uint64_t t32 = 48LLU;
int64_t t34 = -1LL;
int32_t x152 = -1;
static int32_t t35 = -113337392;
int32_t x157 = INT32_MAX;
int16_t x159 = 1;
uint32_t x163 = 84U;
int64_t x171 = INT64_MIN;
int32_t x174 = -1;
int64_t x175 = 2LL;
int64_t x183 = INT64_MIN;
volatile int64_t t43 = -1934862500LL;
volatile int32_t x192 = INT32_MIN;
static uint64_t x193 = 90585201970165LLU;
int8_t x195 = INT8_MIN;
volatile uint8_t x197 = UINT8_MAX;
static int16_t x200 = INT16_MIN;
volatile int8_t x204 = -1;
int32_t t47 = -2;
int8_t x212 = -44;
int8_t x214 = INT8_MIN;
int32_t x215 = INT32_MAX;
volatile uint64_t x219 = 2305213567234376195LLU;
int32_t t52 = -315594;
int16_t x228 = -1694;
int32_t t53 = -9;
static uint32_t x234 = 161848571U;
int8_t x247 = -1;
int64_t x248 = 706756979870LL;
int64_t t60 = 3466917387587258LL;
uint8_t x261 = 14U;
int16_t x265 = INT16_MIN;
static uint32_t x274 = 83369U;
static uint32_t x281 = UINT32_MAX;
int8_t x287 = INT8_MAX;
uint8_t x298 = 18U;
uint8_t x304 = UINT8_MAX;
int32_t x307 = -1;
static volatile uint32_t x308 = 62266U;
uint32_t t71 = 880434565U;
uint32_t x312 = 2590U;
static int32_t t73 = -206678;
static volatile int32_t x323 = INT32_MAX;
volatile int32_t t75 = -28262;
int16_t x331 = 894;
static volatile uint64_t x333 = UINT64_MAX;
volatile int8_t x334 = INT8_MIN;
int16_t x335 = 1889;
int8_t x338 = -12;
int8_t x341 = -1;
uint16_t x349 = UINT16_MAX;
int32_t x356 = 427;
static int32_t t83 = -683;
int64_t x362 = INT64_MAX;
static volatile int32_t x366 = INT32_MIN;
uint64_t x373 = 6266682414LLU;
int8_t x374 = INT8_MAX;
static int8_t x377 = INT8_MIN;
int8_t x394 = INT8_MIN;
static int32_t x399 = INT32_MIN;
volatile uint8_t x400 = 31U;
static int16_t x404 = 78;
static int16_t x406 = -45;
int64_t x414 = 707LL;
int8_t x415 = -41;
int16_t x416 = INT16_MIN;
int8_t x417 = 1;


void f0(void) {
	int16_t x1 = -1;
	static volatile int16_t x2 = INT16_MIN;
	volatile uint64_t x3 = 2LLU;
	int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 27724976747954LLU;

	t0 = ((x1==x2)|(x3/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 7555131LLU;
	int32_t x7 = INT32_MIN;
	volatile int8_t x8 = INT8_MIN;

	t1 = ((x5==x6)|(x7/x8));

	if (t1 != 16777216) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int64_t x10 = 11LL;
	int8_t x11 = INT8_MAX;
	static volatile int32_t t2 = -3204;

	t2 = ((x9==x10)|(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MAX;
	volatile uint64_t x15 = 1LLU;
	uint32_t x16 = UINT32_MAX;
	uint64_t t3 = 26LLU;

	t3 = ((x13==x14)|(x15/x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 243963;
	volatile int32_t x18 = INT32_MAX;
	uint16_t x19 = UINT16_MAX;
	volatile int8_t x20 = -39;
	volatile int32_t t4 = -2584;

	t4 = ((x17==x18)|(x19/x20));

	if (t4 != -1680) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint8_t x22 = 1U;
	int8_t x23 = 46;
	int64_t x24 = INT64_MAX;
	static volatile int64_t t5 = -1458820087LL;

	t5 = ((x21==x22)|(x23/x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	static int16_t x26 = -2;
	uint16_t x27 = 4462U;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -519;

	t6 = ((x25==x26)|(x27/x28));

	if (t6 != 17) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	volatile int32_t x31 = INT32_MIN;
	static int64_t x32 = -64076512270206185LL;
	volatile int64_t t7 = -110698LL;

	t7 = ((x29==x30)|(x31/x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	int32_t x35 = 1;
	int8_t x36 = 1;
	int32_t t8 = -30112862;

	t8 = ((x33==x34)|(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 4296;

	t9 = ((x37==x38)|(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x43 = UINT8_MAX;
	uint8_t x44 = 1U;
	volatile int32_t t10 = 698086343;

	t10 = ((x41==x42)|(x43/x44));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	static int64_t x47 = INT64_MIN;
	uint8_t x48 = UINT8_MAX;
	volatile int64_t t11 = -1467LL;

	t11 = ((x45==x46)|(x47/x48));

	if (t11 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 193405U;
	static uint8_t x51 = 3U;
	int16_t x52 = -1;
	static int32_t t12 = 11973;

	t12 = ((x49==x50)|(x51/x52));

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 2U;
	uint16_t x54 = 5U;
	static volatile uint32_t x55 = 10U;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = -16LL;

	t13 = ((x53==x54)|(x55/x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	static int32_t t14 = 26373;

	t14 = ((x57==x58)|(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 46;
	int16_t x62 = INT16_MAX;
	int16_t x63 = INT16_MIN;
	volatile int16_t x64 = 8;
	int32_t t15 = 13839;

	t15 = ((x61==x62)|(x63/x64));

	if (t15 != -4096) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	int8_t x71 = 14;
	static uint8_t x72 = UINT8_MAX;
	int32_t t16 = 3;

	t16 = ((x69==x70)|(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	int64_t x75 = INT64_MIN;

	t17 = ((x73==x74)|(x75/x76));

	if (t17 != -4294967298LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 30212U;
	int64_t x78 = INT64_MIN;
	static volatile int32_t x79 = 4;

	t18 = ((x77==x78)|(x79/x80));

	if (t18 != -4) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = INT64_MIN;
	static volatile int16_t x82 = INT16_MIN;
	volatile int16_t x83 = -1;
	int64_t x84 = -1LL;
	int64_t t19 = -141801597985010526LL;

	t19 = ((x81==x82)|(x83/x84));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	int16_t x88 = -108;
	volatile int32_t t20 = -42451948;

	t20 = ((x85==x86)|(x87/x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 0LL;
	int64_t x90 = -1LL;
	int32_t x91 = INT32_MIN;
	int64_t x92 = 3759LL;

	t21 = ((x89==x90)|(x91/x92));

	if (t21 != -571291LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	int8_t x94 = -46;
	static int16_t x96 = INT16_MIN;
	int32_t t22 = 29;

	t22 = ((x93==x94)|(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MAX;
	int32_t x98 = INT32_MAX;
	volatile int32_t x100 = INT32_MAX;
	int32_t t23 = 886;

	t23 = ((x97==x98)|(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x106 = INT16_MIN;
	static int8_t x107 = INT8_MIN;
	static uint16_t x108 = UINT16_MAX;
	volatile int32_t t24 = -76705;

	t24 = ((x105==x106)|(x107/x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -6;
	int32_t x111 = 15197;
	uint16_t x112 = 489U;
	int32_t t25 = -621516;

	t25 = ((x109==x110)|(x111/x112));

	if (t25 != 31) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 7U;
	int16_t x115 = 5388;
	int16_t x116 = 123;

	t26 = ((x113==x114)|(x115/x116));

	if (t26 != 43) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = -1;
	uint16_t x119 = 63U;
	static int64_t t27 = -441016692LL;

	t27 = ((x117==x118)|(x119/x120));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = 0;
	volatile int8_t x122 = INT8_MIN;
	int16_t x123 = INT16_MAX;
	int64_t x124 = INT64_MAX;
	volatile int64_t t28 = -96671233395LL;

	t28 = ((x121==x122)|(x123/x124));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = -135928409;
	int64_t x126 = -1LL;
	int64_t x127 = 34082412054LL;
	int64_t x128 = -1LL;
	static volatile int64_t t29 = -35432LL;

	t29 = ((x125==x126)|(x127/x128));

	if (t29 != -34082412054LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	static uint8_t x130 = 60U;
	static volatile int32_t x131 = INT32_MIN;
	static volatile int8_t x132 = 4;
	int32_t t30 = 23670548;

	t30 = ((x129==x130)|(x131/x132));

	if (t30 != -536870912) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 1022293149906133LLU;
	uint32_t x134 = 56U;
	static int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MIN;

	t31 = ((x133==x134)|(x135/x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = INT16_MAX;
	uint32_t x138 = 837U;
	uint64_t x139 = 44033LLU;
	int32_t x140 = INT32_MAX;

	t32 = ((x137==x138)|(x139/x140));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 12953LLU;
	static int32_t x142 = INT32_MAX;
	int8_t x143 = -1;
	int8_t x144 = -1;
	int32_t t33 = 30574;

	t33 = ((x141==x142)|(x143/x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = -1;
	int32_t x146 = 2847877;
	int64_t x147 = INT64_MIN;
	static int16_t x148 = INT16_MIN;

	t34 = ((x145==x146)|(x147/x148));

	if (t34 != 281474976710656LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 5U;
	static int16_t x150 = INT16_MAX;
	int32_t x151 = 719;

	t35 = ((x149==x150)|(x151/x152));

	if (t35 != -719) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x153 = UINT32_MAX;
	volatile int32_t x154 = 11;
	int16_t x155 = -7244;
	int64_t x156 = INT64_MIN;
	static int64_t t36 = -609127221392991270LL;

	t36 = ((x153==x154)|(x155/x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = -1;
	static int8_t x160 = -10;
	int32_t t37 = 216480125;

	t37 = ((x157==x158)|(x159/x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MIN;
	uint64_t x162 = UINT64_MAX;
	int64_t x164 = -1LL;
	volatile int64_t t38 = -22LL;

	t38 = ((x161==x162)|(x163/x164));

	if (t38 != -84LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = 56;
	uint16_t x166 = 38U;
	int32_t x167 = 760225058;
	static int64_t x168 = INT64_MAX;
	volatile int64_t t39 = -1LL;

	t39 = ((x165==x166)|(x167/x168));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x169 = UINT16_MAX;
	uint8_t x170 = 12U;
	int64_t x172 = -1760069242465281LL;
	volatile int64_t t40 = -7529030LL;

	t40 = ((x169==x170)|(x171/x172));

	if (t40 != 5240LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x173 = INT8_MAX;
	static int64_t x176 = -1LL;
	int64_t t41 = 230212LL;

	t41 = ((x173==x174)|(x175/x176));

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -396467976626LL;
	static uint64_t x178 = 6865425483055789544LLU;
	int16_t x179 = 690;
	static int8_t x180 = -1;
	static int32_t t42 = 996127;

	t42 = ((x177==x178)|(x179/x180));

	if (t42 != -690) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x181 = INT8_MIN;
	int8_t x182 = 1;
	static int64_t x184 = INT64_MIN;

	t43 = ((x181==x182)|(x183/x184));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MAX;
	uint8_t x190 = 0U;
	uint64_t x191 = UINT64_MAX;
	uint64_t t44 = 37857803523453LLU;

	t44 = ((x189==x190)|(x191/x192));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x194 = INT16_MIN;
	uint32_t x196 = 1762U;
	uint32_t t45 = 57U;

	t45 = ((x193==x194)|(x195/x196));

	if (t45 != 2437552U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MAX;
	int32_t t46 = -79;

	t46 = ((x197==x198)|(x199/x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x201 = 52278353928LLU;
	int16_t x202 = 269;
	int32_t x203 = 0;

	t47 = ((x201==x202)|(x203/x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x205 = -1;
	int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	uint64_t x208 = 3LLU;
	volatile uint64_t t48 = 339583335256109LLU;

	t48 = ((x205==x206)|(x207/x208));

	if (t48 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x209 = 14587U;
	static int64_t x210 = INT64_MIN;
	uint32_t x211 = UINT32_MAX;
	volatile uint32_t t49 = 79148984U;

	t49 = ((x209==x210)|(x211/x212));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x213 = 35;
	uint16_t x216 = UINT16_MAX;
	int32_t t50 = -3764;

	t50 = ((x213==x214)|(x215/x216));

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MAX;
	static volatile int32_t x218 = INT32_MAX;
	uint64_t x220 = 25519428641565825LLU;
	static volatile uint64_t t51 = 6585348LLU;

	t51 = ((x217==x218)|(x219/x220));

	if (t51 != 90LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = -1;
	int32_t x224 = -1;

	t52 = ((x221==x222)|(x223/x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = UINT16_MAX;
	static volatile int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;

	t53 = ((x225==x226)|(x227/x228));

	if (t53 != 19) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 33U;
	int32_t x230 = -98851;
	uint16_t x231 = UINT16_MAX;
	uint64_t x232 = UINT64_MAX;
	uint64_t t54 = 14945528727119LLU;

	t54 = ((x229==x230)|(x231/x232));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = UINT16_MAX;
	static int32_t x235 = -1;
	int64_t x236 = INT64_MIN;
	volatile int64_t t55 = -2293LL;

	t55 = ((x233==x234)|(x235/x236));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MAX;
	int64_t x238 = INT64_MIN;
	uint16_t x239 = 105U;
	int64_t x240 = -52793265LL;
	int64_t t56 = 333958250242930LL;

	t56 = ((x237==x238)|(x239/x240));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x241 = 3U;
	volatile uint32_t x242 = UINT32_MAX;
	uint64_t x243 = 49182155723341898LLU;
	int8_t x244 = 4;
	static volatile uint64_t t57 = 498378289750148LLU;

	t57 = ((x241==x242)|(x243/x244));

	if (t57 != 12295538930835474LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = INT8_MAX;
	volatile int8_t x246 = 2;
	int64_t t58 = -31114LL;

	t58 = ((x245==x246)|(x247/x248));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = UINT16_MAX;
	static uint32_t x250 = 1878259109U;
	int64_t x251 = -24510LL;
	volatile int16_t x252 = INT16_MIN;
	volatile int64_t t59 = 30282398370LL;

	t59 = ((x249==x250)|(x251/x252));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = -6;
	int64_t x255 = -7454674848144LL;
	int32_t x256 = INT32_MIN;

	t60 = ((x253==x254)|(x255/x256));

	if (t60 != 3471LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	static uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 2305796978LLU;
	uint64_t t61 = 610948970LLU;

	t61 = ((x257==x258)|(x259/x260));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x262 = -1;
	int8_t x263 = -1;
	int16_t x264 = -316;
	static int32_t t62 = 3738;

	t62 = ((x261==x262)|(x263/x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x266 = 0U;
	int16_t x267 = -1;
	static int64_t x268 = INT64_MIN;
	volatile int64_t t63 = 37701136215622LL;

	t63 = ((x265==x266)|(x267/x268));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = 34592346776354027LLU;
	int64_t x275 = INT64_MIN;
	int32_t x276 = INT32_MAX;
	volatile int64_t t64 = 25696LL;

	t64 = ((x273==x274)|(x275/x276));

	if (t64 != -4294967298LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x282 = UINT64_MAX;
	volatile int16_t x283 = -1;
	int32_t x284 = 848;
	static int32_t t65 = -14415461;

	t65 = ((x281==x282)|(x283/x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = -15;
	uint64_t x288 = 402230875LLU;
	volatile uint64_t t66 = 1840742451850560019LLU;

	t66 = ((x285==x286)|(x287/x288));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MIN;
	volatile int64_t x291 = INT64_MIN;
	volatile int32_t x292 = INT32_MAX;
	volatile int64_t t67 = 5785821162LL;

	t67 = ((x289==x290)|(x291/x292));

	if (t67 != -4294967298LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x293 = INT64_MIN;
	int32_t x294 = -20714560;
	int64_t x295 = -24816500916946078LL;
	int32_t x296 = INT32_MIN;
	int64_t t68 = -1014001478LL;

	t68 = ((x293==x294)|(x295/x296));

	if (t68 != 11556083LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = 3;
	int16_t x299 = -1;
	uint16_t x300 = 11U;
	volatile int32_t t69 = -675915181;

	t69 = ((x297==x298)|(x299/x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = -18547;
	int64_t x302 = INT64_MAX;
	volatile int64_t x303 = -557976869392613LL;
	int64_t t70 = -540528220085307330LL;

	t70 = ((x301==x302)|(x303/x304));

	if (t70 != -2188144585853LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x305 = UINT8_MAX;
	uint16_t x306 = UINT16_MAX;

	t71 = ((x305==x306)|(x307/x308));

	if (t71 != 68977U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x309 = INT8_MIN;
	static volatile uint32_t x310 = 181963001U;
	int64_t x311 = INT64_MIN;
	static volatile int64_t t72 = 720882449LL;

	t72 = ((x309==x310)|(x311/x312));

	if (t72 != -3561147504577133LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x313 = INT64_MIN;
	volatile int8_t x314 = INT8_MAX;
	static int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MAX;

	t73 = ((x313==x314)|(x315/x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x317 = 280065459545499LLU;
	static int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	static int32_t x320 = -1;
	int32_t t74 = 341053594;

	t74 = ((x317==x318)|(x319/x320));

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	int32_t x324 = INT32_MAX;

	t75 = ((x321==x322)|(x323/x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x325 = INT32_MIN;
	int64_t x326 = -11LL;
	uint8_t x327 = UINT8_MAX;
	uint32_t x328 = UINT32_MAX;
	static uint32_t t76 = 8211402U;

	t76 = ((x325==x326)|(x327/x328));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = UINT64_MAX;
	volatile int64_t x330 = -107104239150683606LL;
	static int32_t x332 = -5;
	volatile int32_t t77 = 124822609;

	t77 = ((x329==x330)|(x331/x332));

	if (t77 != -178) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t78 = 7540403430338753LLU;

	t78 = ((x333==x334)|(x335/x336));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x337 = -1LL;
	volatile int32_t x339 = INT32_MAX;
	int64_t x340 = -1LL;
	volatile int64_t t79 = -689704059950022628LL;

	t79 = ((x337==x338)|(x339/x340));

	if (t79 != -2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x342 = 1735707718904198LLU;
	int64_t x343 = INT64_MIN;
	uint16_t x344 = 1U;
	int64_t t80 = INT64_MIN;

	t80 = ((x341==x342)|(x343/x344));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x345 = UINT64_MAX;
	static int32_t x346 = 89560;
	volatile int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;
	int32_t t81 = 11130;

	t81 = ((x345==x346)|(x347/x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x350 = -1;
	static uint64_t x351 = 407926896LLU;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t82 = 172205269504030396LLU;

	t82 = ((x349==x350)|(x351/x352));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = 5781;
	int8_t x354 = INT8_MIN;
	volatile int8_t x355 = 14;

	t83 = ((x353==x354)|(x355/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = INT32_MIN;
	uint64_t x358 = UINT64_MAX;
	uint8_t x359 = 93U;
	volatile int16_t x360 = INT16_MAX;
	volatile int32_t t84 = -73478429;

	t84 = ((x357==x358)|(x359/x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = 6553720170LL;
	static int16_t x363 = -19;
	int8_t x364 = 13;
	volatile int32_t t85 = -3519758;

	t85 = ((x361==x362)|(x363/x364));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = -99;
	uint64_t x367 = UINT64_MAX;
	static uint8_t x368 = UINT8_MAX;
	uint64_t t86 = 3632146955691856779LLU;

	t86 = ((x365==x366)|(x367/x368));

	if (t86 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x369 = 2761383650023828LLU;
	int8_t x370 = INT8_MIN;
	volatile uint64_t x371 = UINT64_MAX;
	int32_t x372 = INT32_MIN;
	uint64_t t87 = 27LLU;

	t87 = ((x369==x370)|(x371/x372));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x375 = -3312385461LL;
	uint8_t x376 = UINT8_MAX;
	int64_t t88 = -3026970138258450LL;

	t88 = ((x373==x374)|(x375/x376));

	if (t88 != -12989746LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x378 = 1U;
	static uint8_t x379 = 120U;
	int8_t x380 = -1;
	volatile int32_t t89 = 19524;

	t89 = ((x377==x378)|(x379/x380));

	if (t89 != -120) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x381 = INT64_MIN;
	volatile uint32_t x382 = UINT32_MAX;
	volatile uint64_t x383 = 71027269669927LLU;
	int16_t x384 = -1;
	volatile uint64_t t90 = 19132966783LLU;

	t90 = ((x381==x382)|(x383/x384));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = INT64_MAX;
	static uint64_t x386 = UINT64_MAX;
	static volatile int32_t x387 = INT32_MIN;
	uint32_t x388 = 6U;
	volatile uint32_t t91 = 39443U;

	t91 = ((x385==x386)|(x387/x388));

	if (t91 != 357913941U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x390 = 530588684U;
	static volatile int64_t x391 = INT64_MAX;
	int8_t x392 = INT8_MIN;
	static volatile int64_t t92 = 0LL;

	t92 = ((x389==x390)|(x391/x392));

	if (t92 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = -87;
	int32_t x395 = 0;
	int64_t x396 = INT64_MIN;
	int64_t t93 = 35868LL;

	t93 = ((x393==x394)|(x395/x396));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x397 = INT64_MIN;
	uint16_t x398 = UINT16_MAX;
	int32_t t94 = 2195;

	t94 = ((x397==x398)|(x399/x400));

	if (t94 != -69273666) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x401 = INT64_MIN;
	static int16_t x402 = -3;
	int32_t x403 = 1;
	volatile int32_t t95 = 0;

	t95 = ((x401==x402)|(x403/x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x405 = INT64_MAX;
	uint32_t x407 = 1925557110U;
	int32_t x408 = 153189903;
	static uint32_t t96 = 7U;

	t96 = ((x405==x406)|(x407/x408));

	if (t96 != 12U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = -11;
	int32_t x410 = -100865662;
	int16_t x411 = INT16_MAX;
	int32_t x412 = -15618012;
	volatile int32_t t97 = 130;

	t97 = ((x409==x410)|(x411/x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int32_t t98 = 802944;

	t98 = ((x413==x414)|(x415/x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x418 = INT16_MAX;
	uint64_t x419 = UINT64_MAX;
	volatile int16_t x420 = -6;
	volatile uint64_t t99 = 3777964852468813LLU;

	t99 = ((x417==x418)|(x419/x420));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

