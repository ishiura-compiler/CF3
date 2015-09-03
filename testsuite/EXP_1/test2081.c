#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 1;
static volatile int8_t x9 = -38;
static int16_t x14 = INT16_MAX;
int8_t x21 = 15;
static volatile int64_t t5 = 42231LL;
uint16_t x27 = 17565U;
static uint32_t x29 = UINT32_MAX;
volatile int32_t x43 = -1084223;
uint32_t x45 = 43080597U;
uint64_t x48 = 29908272464775304LLU;
volatile uint64_t t11 = 40278LLU;
volatile int16_t x49 = 0;
volatile uint8_t x76 = UINT8_MAX;
int64_t t18 = 1LL;
static int64_t x84 = INT64_MIN;
uint8_t x95 = 4U;
static int32_t x96 = INT32_MAX;
uint64_t t22 = 1699392634058LLU;
int32_t t24 = -1;
int16_t x106 = INT16_MIN;
uint8_t x112 = 28U;
int64_t x113 = -7817LL;
int64_t t27 = -5188LL;
volatile uint16_t x119 = 9536U;
uint16_t x124 = UINT16_MAX;
uint64_t x125 = UINT64_MAX;
int64_t x126 = INT64_MIN;
static int64_t x128 = INT64_MAX;
int8_t x133 = 29;
volatile int8_t x136 = -18;
uint64_t t32 = 4901228559615LLU;
int8_t x138 = -1;
static volatile uint8_t x139 = 3U;
volatile int32_t t35 = -123868926;
int8_t x157 = 55;
uint8_t x162 = UINT8_MAX;
int64_t t39 = 429636497LL;
volatile uint8_t x167 = UINT8_MAX;
static int64_t t40 = 109818327LL;
static volatile int64_t t41 = 3995946648760LL;
static int32_t x175 = INT32_MIN;
volatile int32_t t42 = 121269;
static volatile int32_t x179 = INT32_MIN;
int8_t x184 = 9;
uint16_t x185 = 32074U;
int8_t x195 = -56;
uint64_t t48 = 51525705593272918LLU;
uint64_t x209 = 47384858196799503LLU;
static int16_t x210 = 1;
volatile int8_t x213 = INT8_MIN;
static int32_t x218 = INT32_MIN;
static volatile uint32_t x220 = 0U;
static int16_t x222 = INT16_MAX;
int16_t x223 = 1;
volatile uint32_t t55 = 8U;
int32_t x237 = INT32_MIN;
uint64_t x243 = 1841219197205371093LLU;
uint64_t t57 = 1092352LLU;
int64_t t58 = 116394725790461981LL;
uint32_t x250 = 291U;
volatile int32_t x252 = INT32_MAX;
uint32_t t59 = 47U;
int64_t x254 = -2044LL;
volatile int8_t x265 = INT8_MIN;
int16_t x270 = INT16_MAX;
volatile uint32_t x273 = UINT32_MAX;
int16_t x274 = INT16_MIN;
volatile uint8_t x277 = 19U;
int16_t x278 = 0;
uint64_t x280 = UINT64_MAX;
static int64_t x283 = -286077450423653LL;
uint64_t x286 = 8102598609539901LLU;
int64_t x288 = -1LL;
volatile int16_t x294 = INT16_MIN;
static int32_t x295 = INT32_MIN;
uint64_t x308 = 1303481481LLU;
uint8_t x309 = UINT8_MAX;
int16_t x314 = INT16_MIN;
volatile uint64_t t74 = 216286516LLU;
volatile uint64_t x318 = 464374007280888402LLU;
volatile int64_t t78 = 3027090LL;
uint8_t x335 = 43U;
static uint16_t x341 = 1U;
static volatile uint32_t x353 = 7U;
int64_t x358 = INT64_MAX;
static volatile int64_t t86 = 863067LL;
int32_t x375 = INT32_MIN;
uint8_t x376 = 1U;
static int32_t x381 = -132490890;
uint16_t x382 = UINT16_MAX;
int32_t t90 = -1706;
static int8_t x386 = -2;
int32_t x393 = 31776;
int16_t x394 = 1648;
int16_t x395 = INT16_MAX;
int32_t x404 = INT32_MIN;
uint16_t x405 = UINT16_MAX;
uint16_t x407 = UINT16_MAX;
volatile int64_t t97 = -110166LL;
uint16_t x426 = UINT16_MAX;
int16_t x428 = 3008;


void f0(void) {
	static int16_t x1 = -1;
	int64_t x2 = INT64_MIN;
	static int16_t x4 = 14622;
	int64_t t0 = 10528286080341266LL;

	t0 = (((x1^x2)%x3)+x4);

	if (t0 != 14622LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	static uint8_t x7 = UINT8_MAX;
	int64_t x8 = INT64_MAX;
	volatile int64_t t1 = INT64_MAX;

	t1 = (((x5^x6)%x7)+x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	static int8_t x11 = 1;
	static volatile int32_t x12 = -12;
	int32_t t2 = -12469;

	t2 = (((x9^x10)%x11)+x12);

	if (t2 != -12) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 15;
	int8_t x15 = 36;
	int32_t x16 = -1;
	int32_t t3 = -10;

	t3 = (((x13^x14)%x15)+x16);

	if (t3 != 27) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 27159U;
	int32_t x18 = 323458443;
	uint32_t x19 = 27078870U;
	uint8_t x20 = UINT8_MAX;
	uint32_t t4 = 377U;

	t4 = (((x17^x18)%x19)+x20);

	if (t4 != 25618281U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = UINT32_MAX;
	int32_t x23 = -1;
	volatile int64_t x24 = INT64_MIN;

	t5 = (((x21^x22)%x23)+x24);

	if (t5 != -9223372032559808528LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int64_t x26 = 20264616153887LL;
	int8_t x28 = INT8_MAX;
	int64_t t6 = -6218169LL;

	t6 = (((x25^x26)%x27)+x28);

	if (t6 != 4423LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = UINT32_MAX;
	static int8_t x31 = 1;
	int64_t x32 = INT64_MIN;
	int64_t t7 = INT64_MIN;

	t7 = (((x29^x30)%x31)+x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MAX;
	int8_t x35 = 14;
	int8_t x36 = -17;
	static volatile int64_t t8 = 214315663265LL;

	t8 = (((x33^x34)%x35)+x36);

	if (t8 != -24LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	int8_t x39 = -1;
	int16_t x40 = INT16_MIN;
	int64_t t9 = -97856814638566LL;

	t9 = (((x37^x38)%x39)+x40);

	if (t9 != -32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	static uint64_t x42 = 211132LLU;
	volatile int8_t x44 = INT8_MIN;
	uint64_t t10 = 213810LLU;

	t10 = (((x41^x42)%x43)+x44);

	if (t10 != 872962LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 3851;
	int8_t x47 = INT8_MAX;

	t11 = (((x45^x46)%x47)+x48);

	if (t11 != 29908272464775337LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x50 = INT8_MIN;
	uint64_t x51 = UINT64_MAX;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 1692457LLU;

	t12 = (((x49^x50)%x51)+x52);

	if (t12 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	uint16_t x54 = 77U;
	static int16_t x55 = -9375;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 789239062;

	t13 = (((x53^x54)%x55)+x56);

	if (t13 != 32817) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 4890U;
	int64_t x58 = INT64_MAX;
	int8_t x59 = -3;
	static uint32_t x60 = 366462502U;
	int64_t t14 = 9173039LL;

	t14 = (((x57^x58)%x59)+x60);

	if (t14 != 366462503LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = -1LL;
	uint64_t x67 = UINT64_MAX;
	static int8_t x68 = 7;
	uint64_t t15 = 851166LLU;

	t15 = (((x65^x66)%x67)+x68);

	if (t15 != 32774LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = -1LL;
	volatile uint8_t x70 = UINT8_MAX;
	uint8_t x71 = 3U;
	int32_t x72 = INT32_MAX;
	int64_t t16 = -1305972965LL;

	t16 = (((x69^x70)%x71)+x72);

	if (t16 != 2147483646LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MIN;
	uint32_t x74 = 409347099U;
	uint32_t x75 = UINT32_MAX;
	uint32_t t17 = 1975302U;

	t17 = (((x73^x74)%x75)+x76);

	if (t17 != 2556831002U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = -51;
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = 18U;

	t18 = (((x77^x78)%x79)+x80);

	if (t18 != 95LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MAX;
	int32_t x83 = -1;
	int64_t t19 = INT64_MIN;

	t19 = (((x81^x82)%x83)+x84);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t20 = 1;

	t20 = (((x85^x86)%x87)+x88);

	if (t20 != -130) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MAX;
	int8_t x92 = INT8_MIN;
	uint64_t t21 = UINT64_MAX;

	t21 = (((x89^x90)%x91)+x92);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = 230422946881LLU;

	t22 = (((x93^x94)%x95)+x96);

	if (t22 != 2147483649LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x97 = 51U;
	uint32_t x98 = 26U;
	int64_t x99 = INT64_MAX;
	int8_t x100 = INT8_MIN;
	volatile int64_t t23 = 1906LL;

	t23 = (((x97^x98)%x99)+x100);

	if (t23 != -87LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -209;
	static int8_t x102 = INT8_MAX;
	volatile uint8_t x103 = 2U;
	uint8_t x104 = 4U;

	t24 = (((x101^x102)%x103)+x104);

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = INT8_MIN;
	static int16_t x107 = -13155;
	uint8_t x108 = 8U;
	static volatile int32_t t25 = -15;

	t25 = (((x105^x106)%x107)+x108);

	if (t25 != 6338) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 248U;
	static int64_t x110 = INT64_MIN;
	static uint32_t x111 = 64841291U;
	int64_t t26 = -1149808165319LL;

	t26 = (((x109^x110)%x111)+x112);

	if (t26 != -8194921LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	volatile int8_t x116 = -51;

	t27 = (((x113^x114)%x115)+x116);

	if (t27 != 24900LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 11859833U;
	int8_t x118 = -1;
	static int8_t x120 = -1;
	uint32_t t28 = 205542870U;

	t28 = (((x117^x118)%x119)+x120);

	if (t28 != 3525U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	int16_t x122 = -39;
	int16_t x123 = -1;
	static int32_t t29 = 139779;

	t29 = (((x121^x122)%x123)+x124);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x127 = 3U;
	static volatile uint64_t t30 = 8882380671397LLU;

	t30 = (((x125^x126)%x127)+x128);

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	uint32_t x131 = 59945300U;
	static uint8_t x132 = 0U;
	volatile int64_t t31 = 39LL;

	t31 = (((x129^x130)%x131)+x132);

	if (t31 != -7702753LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x134 = 813377U;
	static uint64_t x135 = UINT64_MAX;

	t32 = (((x133^x134)%x135)+x136);

	if (t32 != 813386LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = -8;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = -335;

	t33 = (((x137^x138)%x139)+x140);

	if (t33 != 65536) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int8_t x142 = -1;
	uint8_t x143 = 1U;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 445372;

	t34 = (((x141^x142)%x143)+x144);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MAX;
	uint16_t x146 = 961U;
	volatile uint8_t x147 = 1U;
	uint16_t x148 = 0U;

	t35 = (((x145^x146)%x147)+x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -1LL;
	int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MIN;
	int16_t x152 = INT16_MIN;
	int64_t t36 = -25135708861655672LL;

	t36 = (((x149^x150)%x151)+x152);

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	int16_t x156 = INT16_MIN;
	static int64_t t37 = -2055075516601171LL;

	t37 = (((x153^x154)%x155)+x156);

	if (t37 != -32641LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x158 = INT8_MIN;
	uint8_t x159 = 7U;
	int64_t x160 = -7846980621LL;
	volatile int64_t t38 = -396243LL;

	t38 = (((x157^x158)%x159)+x160);

	if (t38 != -7846980624LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = 129148013908643898LL;
	int8_t x163 = INT8_MAX;
	static volatile uint8_t x164 = 5U;

	t39 = (((x161^x162)%x163)+x164);

	if (t39 != 111LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = -13328;
	int64_t x166 = -13655316001759135LL;
	int32_t x168 = INT32_MAX;

	t40 = (((x165^x166)%x167)+x168);

	if (t40 != 2147483895LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile int16_t x172 = -4596;

	t41 = (((x169^x170)%x171)+x172);

	if (t41 != -4597LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 1U;
	uint8_t x174 = UINT8_MAX;
	volatile int16_t x176 = INT16_MAX;

	t42 = (((x173^x174)%x175)+x176);

	if (t42 != 33021) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -1;
	int64_t x178 = INT64_MAX;
	uint64_t x180 = 197547419961LLU;
	volatile uint64_t t43 = 680489919LLU;

	t43 = (((x177^x178)%x179)+x180);

	if (t43 != 197547419961LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MIN;
	int64_t t44 = 11599LL;

	t44 = (((x181^x182)%x183)+x184);

	if (t44 != -9223372036854710264LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x186 = UINT64_MAX;
	int16_t x187 = INT16_MAX;
	uint16_t x188 = 1665U;
	volatile uint64_t t45 = 8969876000069LLU;

	t45 = (((x185^x186)%x187)+x188);

	if (t45 != 2373LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 18770U;
	int8_t x194 = -4;
	int8_t x196 = 0;
	volatile uint32_t t46 = 166423U;

	t46 = (((x193^x194)%x195)+x196);

	if (t46 != 4294948526U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 6048LLU;
	uint32_t x198 = 409551U;
	static volatile uint64_t x199 = 4548LLU;
	int64_t x200 = -194198250LL;
	volatile uint64_t t47 = 73749LLU;

	t47 = (((x197^x198)%x199)+x200);

	if (t47 != 18446744073515356709LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = -1LL;
	volatile uint64_t x204 = 483255985626527LLU;

	t48 = (((x201^x202)%x203)+x204);

	if (t48 != 483255985626527LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x205 = 776033354038LL;
	volatile int32_t x206 = -194;
	volatile int8_t x207 = -1;
	int64_t x208 = -1LL;
	volatile int64_t t49 = 639528476029LL;

	t49 = (((x205^x206)%x207)+x208);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x211 = 557215U;
	int32_t x212 = INT32_MIN;
	uint64_t t50 = 5LLU;

	t50 = (((x209^x210)%x211)+x212);

	if (t50 != 18446744071562410645LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x214 = 45U;
	int32_t x215 = INT32_MAX;
	static uint8_t x216 = 24U;
	int32_t t51 = -5;

	t51 = (((x213^x214)%x215)+x216);

	if (t51 != -59) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x217 = -1;
	uint32_t x219 = UINT32_MAX;
	uint32_t t52 = 4304611U;

	t52 = (((x217^x218)%x219)+x220);

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 56U;
	static int8_t x224 = 23;
	int32_t t53 = -4470;

	t53 = (((x221^x222)%x223)+x224);

	if (t53 != 23) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x229 = -111;
	int32_t x230 = -1;
	volatile int8_t x231 = -1;
	uint32_t x232 = 6U;
	volatile uint32_t t54 = 1908U;

	t54 = (((x229^x230)%x231)+x232);

	if (t54 != 6U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x233 = INT16_MIN;
	int32_t x234 = INT32_MIN;
	static volatile uint8_t x235 = 40U;
	volatile uint32_t x236 = 492798U;

	t55 = (((x233^x234)%x235)+x236);

	if (t55 != 492798U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x238 = -3;
	int32_t x239 = -1;
	static volatile int8_t x240 = INT8_MIN;
	int32_t t56 = -3;

	t56 = (((x237^x238)%x239)+x240);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x241 = 1U;
	volatile int32_t x242 = 383109;
	int32_t x244 = INT32_MIN;

	t57 = (((x241^x242)%x243)+x244);

	if (t57 != 18446744071562451076LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = 99693361434677585LL;
	static int8_t x246 = INT8_MAX;
	int32_t x247 = -87609424;
	uint8_t x248 = UINT8_MAX;

	t58 = (((x245^x246)%x247)+x248);

	if (t58 != 70437357LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = 0U;
	uint16_t x251 = 3U;

	t59 = (((x249^x250)%x251)+x252);

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x253 = -1;
	static int8_t x255 = INT8_MAX;
	uint64_t x256 = UINT64_MAX;
	uint64_t t60 = 33LLU;

	t60 = (((x253^x254)%x255)+x256);

	if (t60 != 10LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = -1;
	volatile int16_t x258 = INT16_MAX;
	uint64_t x259 = UINT64_MAX;
	static volatile uint64_t x260 = 835209LLU;
	static uint64_t t61 = 1869905324LLU;

	t61 = (((x257^x258)%x259)+x260);

	if (t61 != 802441LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MAX;
	uint8_t x263 = 31U;
	static int32_t x264 = 200855;
	int32_t t62 = -1683;

	t62 = (((x261^x262)%x263)+x264);

	if (t62 != 200825) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x266 = INT8_MAX;
	static int64_t x267 = -8740LL;
	volatile int32_t x268 = -942165855;
	static volatile int64_t t63 = 1LL;

	t63 = (((x265^x266)%x267)+x268);

	if (t63 != -942165856LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 405720U;
	int8_t x271 = -1;
	volatile uint8_t x272 = UINT8_MAX;
	volatile uint32_t t64 = 444543066U;

	t64 = (((x269^x270)%x271)+x272);

	if (t64 != 413734U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x275 = INT32_MIN;
	int32_t x276 = INT32_MIN;
	volatile uint32_t t65 = 5U;

	t65 = (((x273^x274)%x275)+x276);

	if (t65 != 2147516415U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x279 = -364LL;
	uint64_t t66 = 1025578339917498LLU;

	t66 = (((x277^x278)%x279)+x280);

	if (t66 != 18LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x281 = 171U;
	volatile int16_t x282 = -1;
	int32_t x284 = -28819;
	static volatile int64_t t67 = -1467843321564LL;

	t67 = (((x281^x282)%x283)+x284);

	if (t67 != -28991LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 85U;
	int8_t x287 = INT8_MIN;
	volatile uint64_t t68 = 5026483451948963894LLU;

	t68 = (((x285^x286)%x287)+x288);

	if (t68 != 8102598609539943LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	uint16_t x290 = UINT16_MAX;
	uint16_t x291 = 75U;
	uint32_t x292 = 92U;
	volatile int64_t t69 = 1LL;

	t69 = (((x289^x290)%x291)+x292);

	if (t69 != 69LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MAX;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t70 = 321U;

	t70 = (((x293^x294)%x295)+x296);

	if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = 293949229;
	volatile int64_t x298 = INT64_MIN;
	static int16_t x299 = -1;
	int16_t x300 = INT16_MAX;
	int64_t t71 = 120373794593915LL;

	t71 = (((x297^x298)%x299)+x300);

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = -29;
	volatile uint16_t x307 = 1U;
	uint64_t t72 = 227412030441347LLU;

	t72 = (((x305^x306)%x307)+x308);

	if (t72 != 1303481481LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x310 = UINT64_MAX;
	uint32_t x311 = 12U;
	volatile int16_t x312 = INT16_MAX;
	volatile uint64_t t73 = 530324248LLU;

	t73 = (((x309^x310)%x311)+x312);

	if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x313 = -1LL;
	uint64_t x315 = 62154571417411LLU;
	int8_t x316 = INT8_MIN;

	t74 = (((x313^x314)%x315)+x316);

	if (t74 != 32639LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x317 = INT16_MIN;
	int8_t x319 = 37;
	int16_t x320 = -1;
	uint64_t t75 = 307035763979LLU;

	t75 = (((x317^x318)%x319)+x320);

	if (t75 != 24LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x321 = 30;
	static uint16_t x322 = 205U;
	static uint16_t x323 = UINT16_MAX;
	static int16_t x324 = -1;
	volatile int32_t t76 = 173012;

	t76 = (((x321^x322)%x323)+x324);

	if (t76 != 210) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x325 = -35;
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = 1;
	int8_t x328 = 0;
	volatile int32_t t77 = 771;

	t77 = (((x325^x326)%x327)+x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MAX;
	int64_t x332 = -1LL;

	t78 = (((x329^x330)%x331)+x332);

	if (t78 != -257LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x333 = 377U;
	static uint64_t x334 = 11854502LLU;
	uint64_t x336 = 3LLU;
	uint64_t t79 = 354391689LLU;

	t79 = (((x333^x334)%x335)+x336);

	if (t79 != 19LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile int64_t x338 = -15520LL;
	int32_t x339 = -6647206;
	volatile uint8_t x340 = 5U;
	int64_t t80 = -13336184334LL;

	t80 = (((x337^x338)%x339)+x340);

	if (t80 != 17253LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x342 = 5215U;
	int8_t x343 = INT8_MIN;
	int32_t x344 = 179958;
	int32_t t81 = -44;

	t81 = (((x341^x342)%x343)+x344);

	if (t81 != 180052) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x345 = INT8_MIN;
	int8_t x346 = -1;
	volatile uint32_t x347 = UINT32_MAX;
	int32_t x348 = INT32_MIN;
	uint32_t t82 = 2550U;

	t82 = (((x345^x346)%x347)+x348);

	if (t82 != 2147483775U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	volatile uint64_t x350 = UINT64_MAX;
	static uint64_t x351 = 26693365383917LLU;
	int8_t x352 = -3;
	uint64_t t83 = 62296610693LLU;

	t83 = (((x349^x350)%x351)+x352);

	if (t83 != 32764LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x354 = -1;
	int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	volatile int64_t t84 = -19812777481353255LL;

	t84 = (((x353^x354)%x355)+x356);

	if (t84 != -9223372036854743045LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = -1;
	static uint64_t x359 = 1813247031068333705LLU;
	uint32_t x360 = UINT32_MAX;
	volatile uint64_t t85 = 2365409428LLU;

	t85 = (((x357^x358)%x359)+x360);

	if (t85 != 157136885808074578LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = 23262LL;
	int32_t x362 = INT32_MIN;
	int64_t x363 = -4659639522LL;
	int64_t x364 = -1568LL;

	t86 = (((x361^x362)%x363)+x364);

	if (t86 != -2147461954LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = 12317;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 2982LLU;
	uint32_t x368 = 4224U;
	volatile uint64_t t87 = 1239759726LLU;

	t87 = (((x365^x366)%x367)+x368);

	if (t87 != 4831LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MAX;
	static uint8_t x370 = 2U;
	static uint16_t x371 = 10U;
	uint32_t x372 = 1306U;
	uint32_t t88 = 1406246U;

	t88 = (((x369^x370)%x371)+x372);

	if (t88 != 1311U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x373 = 0U;
	int16_t x374 = 7;
	volatile int32_t t89 = -1015620;

	t89 = (((x373^x374)%x375)+x376);

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x383 = INT8_MIN;
	static uint16_t x384 = 341U;

	t90 = (((x381^x382)%x383)+x384);

	if (t90 != 222) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = -1LL;
	volatile int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MIN;
	static int64_t t91 = -71489979LL;

	t91 = (((x385^x386)%x387)+x388);

	if (t91 != -127LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x396 = INT8_MIN;
	int32_t t92 = 8080;

	t92 = (((x393^x394)%x395)+x396);

	if (t92 != 31184) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x401 = 572;
	static uint16_t x402 = 3429U;
	static uint32_t x403 = 20760359U;
	static volatile uint32_t t93 = 857692U;

	t93 = (((x401^x402)%x403)+x404);

	if (t93 != 2147487577U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x406 = UINT32_MAX;
	int16_t x408 = -1;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (((x405^x406)%x407)+x408);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x409 = 574U;
	int64_t x410 = -1LL;
	uint8_t x411 = 1U;
	static int32_t x412 = -1;
	int64_t t95 = -477078LL;

	t95 = (((x409^x410)%x411)+x412);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = -18287;
	int32_t x414 = -1;
	uint8_t x415 = 25U;
	int16_t x416 = -27;
	static volatile int32_t t96 = -7299;

	t96 = (((x413^x414)%x415)+x416);

	if (t96 != -16) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MIN;
	int32_t x419 = INT32_MAX;
	int16_t x420 = INT16_MAX;

	t97 = (((x417^x418)%x419)+x420);

	if (t97 != 32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x425 = -55968;
	int8_t x427 = INT8_MIN;
	volatile int32_t t98 = -12513442;

	t98 = (((x425^x426)%x427)+x428);

	if (t98 != 2911) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = -1;
	volatile int8_t x430 = 10;
	uint8_t x431 = UINT8_MAX;
	uint32_t x432 = UINT32_MAX;
	static volatile uint32_t t99 = 69876251U;

	t99 = (((x429^x430)%x431)+x432);

	if (t99 != 4294967284U) { NG(); } else { ; }
	
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

