#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
volatile int8_t x6 = INT8_MIN;
int32_t t1 = -28033050;
static volatile int32_t t4 = -1209;
int16_t x30 = -1;
int32_t x33 = -1932349;
volatile int16_t x35 = -1;
int32_t x44 = -240592;
static int8_t x52 = INT8_MIN;
volatile int32_t x69 = INT32_MIN;
volatile uint32_t x70 = 202U;
int64_t x72 = INT64_MIN;
int32_t x76 = 12965339;
volatile int32_t x79 = -1;
static int32_t x89 = INT32_MIN;
static int16_t x90 = -6;
int8_t x100 = -16;
int32_t t24 = 49702111;
volatile int64_t x106 = INT64_MAX;
volatile uint8_t x110 = UINT8_MAX;
int64_t x112 = INT64_MIN;
volatile int32_t x113 = INT32_MIN;
volatile int8_t x117 = -8;
uint8_t x120 = 4U;
int64_t x121 = INT64_MIN;
int32_t x125 = INT32_MIN;
int32_t x130 = -1;
int16_t x132 = INT16_MIN;
static int8_t x134 = -3;
static int32_t x139 = 2;
int32_t x144 = INT32_MAX;
int32_t t35 = INT32_MAX;
volatile int8_t x158 = INT8_MAX;
int32_t t39 = 802747;
int64_t x161 = INT64_MIN;
volatile int32_t t43 = -656432516;
int8_t x178 = INT8_MAX;
int32_t t44 = INT32_MAX;
int8_t x184 = 3;
int32_t t45 = 54462917;
volatile uint32_t t49 = 2047U;
int16_t x203 = -1;
static int8_t x206 = -1;
int8_t x217 = INT8_MAX;
static int16_t x218 = INT16_MIN;
uint32_t x220 = 23305974U;
volatile uint32_t t54 = 7483869U;
int64_t x226 = INT64_MIN;
uint32_t t57 = UINT32_MAX;
int32_t t58 = 419;
uint16_t x238 = 4913U;
volatile uint64_t t62 = 72297LLU;
uint64_t x254 = 0LLU;
int32_t x268 = INT32_MIN;
static int32_t t66 = INT32_MIN;
uint16_t x269 = 4791U;
int8_t x273 = -3;
int16_t x283 = -1;
volatile uint16_t x286 = 0U;
volatile uint16_t x288 = 2U;
uint32_t x289 = 388570U;
volatile uint32_t x290 = UINT32_MAX;
int32_t t72 = 25018;
uint32_t x293 = UINT32_MAX;
static uint64_t x295 = UINT64_MAX;
static volatile uint64_t t73 = 994LLU;
int16_t x298 = 25;
int64_t x299 = 8385829338476LL;
int8_t x305 = -1;
static int64_t x307 = INT64_MAX;
int32_t x310 = -1;
uint16_t x313 = UINT16_MAX;
static uint16_t x318 = UINT16_MAX;
volatile int8_t x325 = 0;
int32_t x332 = INT32_MAX;
static int32_t x333 = -2803423;
int64_t x340 = 1LL;
int32_t x342 = -19367;
int64_t x348 = INT64_MAX;
static volatile int64_t t86 = INT64_MAX;
int32_t t87 = 346739;
static int16_t x354 = INT16_MIN;
volatile int64_t x356 = -1LL;
static int32_t t89 = 102;
volatile int64_t x368 = -28261LL;
static uint16_t x372 = 33U;
volatile int32_t t92 = -66;
int32_t x375 = INT32_MAX;
static uint64_t x377 = 95252157791341819LLU;
volatile uint64_t t94 = 28096LLU;
volatile int32_t t95 = -6169;
int16_t x389 = INT16_MAX;
uint16_t x390 = 14U;
int8_t x394 = INT8_MAX;
volatile int16_t x399 = -1;
static volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	uint8_t x1 = 5U;
	static volatile uint16_t x2 = 11313U;
	uint8_t x3 = UINT8_MAX;
	int16_t x4 = 3513;
	static int32_t t0 = 3;

	t0 = (((x1^x2)==x3)+x4);

	if (t0 != 3513) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;

	t1 = (((x5^x6)==x7)+x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int32_t x10 = INT32_MAX;
	uint64_t x11 = 4203975419LLU;
	uint16_t x12 = 28669U;
	volatile int32_t t2 = -1;

	t2 = (((x9^x10)==x11)+x12);

	if (t2 != 28669) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = 853;
	static int16_t x15 = INT16_MIN;
	static uint64_t x16 = 4379908LLU;
	uint64_t t3 = 1256273644645225851LLU;

	t3 = (((x13^x14)==x15)+x16);

	if (t3 != 4379908LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 110738907U;
	int32_t x18 = INT32_MAX;
	static uint8_t x19 = 1U;
	uint16_t x20 = 1837U;

	t4 = (((x17^x18)==x19)+x20);

	if (t4 != 1837) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int16_t x22 = INT16_MIN;
	static int32_t x23 = -1;
	uint8_t x24 = 7U;
	volatile int32_t t5 = -3608;

	t5 = (((x21^x22)==x23)+x24);

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 45U;
	int16_t x26 = INT16_MIN;
	volatile int32_t x27 = -30;
	static int64_t x28 = INT64_MIN;
	static int64_t t6 = INT64_MIN;

	t6 = (((x25^x26)==x27)+x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x31 = INT8_MIN;
	volatile int64_t x32 = -52LL;
	static int64_t t7 = -161841678272083LL;

	t7 = (((x29^x30)==x31)+x32);

	if (t7 != -52LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 55758471467LLU;
	volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = -125159516;

	t8 = (((x33^x34)==x35)+x36);

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -2;
	volatile uint16_t x38 = 4U;
	volatile int64_t x39 = 67351765838907820LL;
	uint32_t x40 = UINT32_MAX;
	static volatile uint32_t t9 = UINT32_MAX;

	t9 = (((x37^x38)==x39)+x40);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	static int64_t x42 = INT64_MAX;
	uint8_t x43 = 7U;
	static int32_t t10 = 1;

	t10 = (((x41^x42)==x43)+x44);

	if (t10 != -240592) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 15365557418LLU;
	int64_t x46 = INT64_MAX;
	int32_t x47 = -1;
	uint16_t x48 = 1912U;
	static int32_t t11 = -1;

	t11 = (((x45^x46)==x47)+x48);

	if (t11 != 1912) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int16_t x50 = 9913;
	int64_t x51 = -1LL;
	volatile int32_t t12 = -7505;

	t12 = (((x49^x50)==x51)+x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	int8_t x54 = 3;
	volatile int64_t x55 = -1LL;
	int64_t x56 = INT64_MAX;
	int64_t t13 = INT64_MAX;

	t13 = (((x53^x54)==x55)+x56);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint16_t x58 = 1U;
	int16_t x59 = -768;
	int32_t x60 = 317;
	volatile int32_t t14 = -87851282;

	t14 = (((x57^x58)==x59)+x60);

	if (t14 != 317) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 946079882U;
	volatile uint32_t x62 = UINT32_MAX;
	uint8_t x63 = 108U;
	uint8_t x64 = 0U;
	volatile int32_t t15 = 603210;

	t15 = (((x61^x62)==x63)+x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 36U;
	uint8_t x66 = 7U;
	uint64_t x67 = 95LLU;
	uint32_t x68 = 737U;
	uint32_t t16 = 25556481U;

	t16 = (((x65^x66)==x67)+x68);

	if (t16 != 737U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x71 = INT8_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = (((x69^x70)==x71)+x72);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 4;
	static uint32_t x74 = UINT32_MAX;
	int16_t x75 = -1156;
	volatile int32_t t18 = 514;

	t18 = (((x73^x74)==x75)+x76);

	if (t18 != 12965339) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 8;
	int8_t x78 = INT8_MAX;
	int64_t x80 = -1LL;
	volatile int64_t t19 = -2LL;

	t19 = (((x77^x78)==x79)+x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = 3LL;
	int32_t x82 = -6780;
	int32_t x83 = INT32_MIN;
	uint8_t x84 = 4U;
	int32_t t20 = -3;

	t20 = (((x81^x82)==x83)+x84);

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int8_t x86 = -1;
	static int8_t x87 = -5;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = INT32_MAX;

	t21 = (((x85^x86)==x87)+x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x91 = INT8_MIN;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = (((x89^x90)==x91)+x92);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	volatile int64_t x95 = 18472836LL;
	volatile int8_t x96 = 43;
	volatile int32_t t23 = 192694241;

	t23 = (((x93^x94)==x95)+x96);

	if (t23 != 43) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = 9;
	int64_t x98 = INT64_MIN;
	uint64_t x99 = UINT64_MAX;

	t24 = (((x97^x98)==x99)+x100);

	if (t24 != -16) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	uint16_t x102 = 349U;
	int16_t x103 = INT16_MIN;
	int32_t x104 = -1;
	volatile int32_t t25 = -6625;

	t25 = (((x101^x102)==x103)+x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 0U;
	volatile int64_t x107 = 86624460522794LL;
	uint16_t x108 = 29188U;
	int32_t t26 = 122;

	t26 = (((x105^x106)==x107)+x108);

	if (t26 != 29188) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 711U;
	volatile int16_t x111 = -1;
	volatile int64_t t27 = INT64_MIN;

	t27 = (((x109^x110)==x111)+x112);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 3U;
	static int64_t x115 = INT64_MIN;
	static volatile uint32_t x116 = 35U;
	uint32_t t28 = 167U;

	t28 = (((x113^x114)==x115)+x116);

	if (t28 != 35U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -143133644;
	int8_t x119 = -1;
	int32_t t29 = 819530086;

	t29 = (((x117^x118)==x119)+x120);

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = -1;
	int64_t x123 = -887987596160171LL;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = -13;

	t30 = (((x121^x122)==x123)+x124);

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x126 = 1U;
	int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t31 = INT64_MIN;

	t31 = (((x125^x126)==x127)+x128);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	uint64_t x131 = 62LLU;
	static int32_t t32 = 1;

	t32 = (((x129^x130)==x131)+x132);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = UINT64_MAX;
	int64_t x135 = 281389431LL;
	static uint16_t x136 = 874U;
	volatile int32_t t33 = 7;

	t33 = (((x133^x134)==x135)+x136);

	if (t33 != 874) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -6;
	int32_t x138 = INT32_MIN;
	int32_t x140 = INT32_MIN;
	static volatile int32_t t34 = INT32_MIN;

	t34 = (((x137^x138)==x139)+x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = 37U;
	volatile int8_t x142 = -8;
	volatile int8_t x143 = INT8_MIN;

	t35 = (((x141^x142)==x143)+x144);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	static int32_t x146 = 0;
	int64_t x147 = INT64_MAX;
	int64_t x148 = INT64_MIN;
	static int64_t t36 = INT64_MIN;

	t36 = (((x145^x146)==x147)+x148);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MAX;
	int64_t x151 = INT64_MIN;
	static uint8_t x152 = 3U;
	int32_t t37 = -1318;

	t37 = (((x149^x150)==x151)+x152);

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 23840U;
	static int64_t x154 = 0LL;
	int16_t x155 = 28;
	int32_t x156 = -921;
	int32_t t38 = 0;

	t38 = (((x153^x154)==x155)+x156);

	if (t38 != -921) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 17104370U;
	int32_t x159 = 1;
	uint16_t x160 = 28U;

	t39 = (((x157^x158)==x159)+x160);

	if (t39 != 28) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;
	volatile int32_t t40 = 8732;

	t40 = (((x161^x162)==x163)+x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 12U;
	int64_t x167 = INT64_MAX;
	int8_t x168 = INT8_MAX;
	int32_t t41 = 1688;

	t41 = (((x165^x166)==x167)+x168);

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	volatile int32_t x170 = 132732582;
	uint64_t x171 = UINT64_MAX;
	static volatile int8_t x172 = INT8_MIN;
	int32_t t42 = -4;

	t42 = (((x169^x170)==x171)+x172);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x173 = INT8_MIN;
	uint8_t x174 = 7U;
	static volatile int64_t x175 = INT64_MIN;
	static int32_t x176 = -1;

	t43 = (((x173^x174)==x175)+x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int8_t x179 = -1;
	static volatile int32_t x180 = INT32_MAX;

	t44 = (((x177^x178)==x179)+x180);

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MAX;
	int32_t x183 = INT32_MIN;

	t45 = (((x181^x182)==x183)+x184);

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int32_t x187 = -1;
	volatile int16_t x188 = -123;
	int32_t t46 = 440602995;

	t46 = (((x185^x186)==x187)+x188);

	if (t46 != -123) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MIN;
	uint32_t x190 = 781U;
	int32_t x191 = -3;
	static int8_t x192 = 1;
	int32_t t47 = 26;

	t47 = (((x189^x190)==x191)+x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = 1487444;
	int8_t x195 = INT8_MIN;
	volatile uint32_t x196 = 54U;
	volatile uint32_t t48 = 0U;

	t48 = (((x193^x194)==x195)+x196);

	if (t48 != 54U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -6004;
	int32_t x198 = 1414954;
	static int8_t x199 = INT8_MIN;
	uint32_t x200 = 160U;

	t49 = (((x197^x198)==x199)+x200);

	if (t49 != 160U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = 103;
	volatile int32_t x204 = 953279;
	int32_t t50 = -1;

	t50 = (((x201^x202)==x203)+x204);

	if (t50 != 953279) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int64_t x207 = -573742863284LL;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 2;

	t51 = (((x205^x206)==x207)+x208);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 109U;
	int64_t x210 = -1LL;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -1;
	volatile int32_t t52 = -1;

	t52 = (((x209^x210)==x211)+x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	uint32_t x214 = 32U;
	static int16_t x215 = INT16_MIN;
	static int64_t x216 = -1LL;
	volatile int64_t t53 = -1373LL;

	t53 = (((x213^x214)==x215)+x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x219 = 39173863U;

	t54 = (((x217^x218)==x219)+x220);

	if (t54 != 23305974U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 2071203067U;
	int64_t x222 = INT64_MIN;
	volatile int16_t x223 = -1;
	uint8_t x224 = 15U;
	volatile int32_t t55 = -3056;

	t55 = (((x221^x222)==x223)+x224);

	if (t55 != 15) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -11130780LL;
	int64_t x227 = -5075229329005LL;
	volatile int16_t x228 = INT16_MAX;
	int32_t t56 = 63180;

	t56 = (((x225^x226)==x227)+x228);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 0;
	uint64_t x230 = 2445377917LLU;
	volatile int8_t x231 = 29;
	uint32_t x232 = UINT32_MAX;

	t57 = (((x229^x230)==x231)+x232);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -7;
	static uint16_t x234 = 2682U;
	int32_t x235 = -140067;
	static int8_t x236 = -1;

	t58 = (((x233^x234)==x235)+x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	uint64_t x239 = 18747786396697LLU;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (((x237^x238)==x239)+x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -80059;
	int32_t x242 = INT32_MAX;
	int8_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = -50563;

	t60 = (((x241^x242)==x243)+x244);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 1254U;
	uint8_t x248 = 70U;
	volatile int32_t t61 = 112627774;

	t61 = (((x245^x246)==x247)+x248);

	if (t61 != 70) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	uint32_t x250 = 292064U;
	uint64_t x251 = 1650LLU;
	uint64_t x252 = 516060826688700LLU;

	t62 = (((x249^x250)==x251)+x252);

	if (t62 != 516060826688700LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	uint16_t x255 = 0U;
	int16_t x256 = 1;
	volatile int32_t t63 = 12916533;

	t63 = (((x253^x254)==x255)+x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	uint8_t x258 = UINT8_MAX;
	uint8_t x259 = UINT8_MAX;
	int8_t x260 = -1;
	volatile int32_t t64 = -2;

	t64 = (((x257^x258)==x259)+x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 49U;
	int16_t x262 = INT16_MIN;
	int16_t x263 = -1;
	volatile int64_t x264 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = (((x261^x262)==x263)+x264);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MIN;
	static uint32_t x267 = 980138652U;

	t66 = (((x265^x266)==x267)+x268);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	int64_t x271 = -225LL;
	static uint16_t x272 = UINT16_MAX;
	int32_t t67 = 99;

	t67 = (((x269^x270)==x271)+x272);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x274 = INT8_MAX;
	int32_t x275 = -22;
	static int32_t x276 = 2;
	static volatile int32_t t68 = -62153;

	t68 = (((x273^x274)==x275)+x276);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 7329919430126LLU;
	volatile int16_t x278 = -3097;
	uint8_t x279 = 20U;
	volatile uint8_t x280 = 0U;
	int32_t t69 = 414337261;

	t69 = (((x277^x278)==x279)+x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	int8_t x282 = -4;
	int64_t x284 = -1LL;
	volatile int64_t t70 = -9LL;

	t70 = (((x281^x282)==x283)+x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 5336;
	int8_t x287 = -34;
	int32_t t71 = -884;

	t71 = (((x285^x286)==x287)+x288);

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x291 = INT8_MAX;
	static int16_t x292 = INT16_MIN;

	t72 = (((x289^x290)==x291)+x292);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -1;
	uint64_t x296 = 375709500LLU;

	t73 = (((x293^x294)==x295)+x296);

	if (t73 != 375709500LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	volatile int32_t x300 = -1;
	volatile int32_t t74 = 19568241;

	t74 = (((x297^x298)==x299)+x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MIN;
	uint8_t x303 = 48U;
	volatile int16_t x304 = INT16_MIN;
	int32_t t75 = 1865;

	t75 = (((x301^x302)==x303)+x304);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = 3;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = 106375;

	t76 = (((x305^x306)==x307)+x308);

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	uint64_t x311 = 4939898LLU;
	int8_t x312 = -1;
	int32_t t77 = -8;

	t77 = (((x309^x310)==x311)+x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x314 = 7737444802LLU;
	uint32_t x315 = 598U;
	static int64_t x316 = INT64_MAX;
	volatile int64_t t78 = INT64_MAX;

	t78 = (((x313^x314)==x315)+x316);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = 658;
	static int32_t x319 = 790852;
	volatile int8_t x320 = INT8_MIN;
	int32_t t79 = 10992060;

	t79 = (((x317^x318)==x319)+x320);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 1586605347U;
	volatile int32_t x322 = 1527106;
	uint16_t x323 = 1525U;
	static int8_t x324 = INT8_MIN;
	static volatile int32_t t80 = -32790990;

	t80 = (((x321^x322)==x323)+x324);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x326 = -6723;
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = -47;
	volatile int32_t t81 = 135369;

	t81 = (((x325^x326)==x327)+x328);

	if (t81 != -47) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 25659U;
	static volatile uint32_t x330 = 58666090U;
	int64_t x331 = -1LL;
	static volatile int32_t t82 = INT32_MAX;

	t82 = (((x329^x330)==x331)+x332);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = 48450319LLU;
	static uint8_t x335 = UINT8_MAX;
	uint16_t x336 = 2U;
	volatile int32_t t83 = -7;

	t83 = (((x333^x334)==x335)+x336);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	int64_t x338 = 5916132159035LL;
	static volatile int64_t x339 = -2LL;
	static volatile int64_t t84 = 18LL;

	t84 = (((x337^x338)==x339)+x340);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -4413912;
	static int8_t x343 = 20;
	static uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = -1920;

	t85 = (((x341^x342)==x343)+x344);

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 74388LLU;

	t86 = (((x345^x346)==x347)+x348);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 3U;
	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MAX;
	volatile int16_t x352 = INT16_MAX;

	t87 = (((x349^x350)==x351)+x352);

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	static uint16_t x355 = 3U;
	volatile int64_t t88 = -3472970751128973812LL;

	t88 = (((x353^x354)==x355)+x356);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	int32_t x358 = -1;
	static int8_t x359 = -9;
	volatile int8_t x360 = -1;

	t89 = (((x357^x358)==x359)+x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 27021U;
	uint32_t x362 = 25U;
	static volatile uint16_t x363 = 7U;
	static uint16_t x364 = UINT16_MAX;
	int32_t t90 = 154408746;

	t90 = (((x361^x362)==x363)+x364);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = 819U;
	static int16_t x366 = -4;
	int32_t x367 = INT32_MIN;
	volatile int64_t t91 = -5566363712806434LL;

	t91 = (((x365^x366)==x367)+x368);

	if (t91 != -28261LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -180780036273885LL;
	int16_t x370 = 449;
	int64_t x371 = INT64_MIN;

	t92 = (((x369^x370)==x371)+x372);

	if (t92 != 33) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	volatile int64_t x374 = INT64_MIN;
	volatile uint16_t x376 = UINT16_MAX;
	int32_t t93 = -54;

	t93 = (((x373^x374)==x375)+x376);

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	int16_t x379 = -1;
	static volatile uint64_t x380 = 359915LLU;

	t94 = (((x377^x378)==x379)+x380);

	if (t94 != 359915LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = -50;
	int8_t x383 = INT8_MIN;
	int32_t x384 = 8;

	t95 = (((x381^x382)==x383)+x384);

	if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -4;
	uint8_t x386 = 5U;
	int16_t x387 = -554;
	int32_t x388 = -1;
	int32_t t96 = 2;

	t96 = (((x385^x386)==x387)+x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x391 = 19U;
	static volatile int16_t x392 = -19;
	volatile int32_t t97 = -19171;

	t97 = (((x389^x390)==x391)+x392);

	if (t97 != -19) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -1LL;
	int8_t x395 = -1;
	int16_t x396 = INT16_MIN;
	int32_t t98 = -163;

	t98 = (((x393^x394)==x395)+x396);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	volatile uint16_t x398 = 1699U;
	static volatile uint32_t x400 = UINT32_MAX;

	t99 = (((x397^x398)==x399)+x400);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

