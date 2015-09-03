#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
int16_t x6 = INT16_MAX;
static int64_t x9 = -1997385723769LL;
int64_t x12 = -1LL;
int32_t x14 = 147469514;
static int64_t x15 = -10706LL;
uint8_t x24 = UINT8_MAX;
static int32_t t5 = -896;
int32_t x27 = INT32_MIN;
static int64_t x31 = 8LL;
static int16_t x32 = INT16_MIN;
volatile uint64_t t8 = 2141827836689LLU;
uint16_t x42 = 625U;
volatile int32_t t10 = 0;
static int32_t x57 = INT32_MAX;
volatile int32_t t15 = -5749;
static int64_t t16 = 4019494228670854LL;
volatile int16_t x74 = INT16_MIN;
uint16_t x77 = 31477U;
uint16_t x88 = UINT16_MAX;
int64_t x91 = -1LL;
uint16_t x93 = 0U;
static uint64_t x98 = UINT64_MAX;
volatile int16_t x99 = 0;
int16_t x104 = INT16_MAX;
static int64_t x108 = -3LL;
uint8_t x109 = 10U;
int8_t x112 = 1;
uint64_t x114 = 1935402517200233LLU;
uint8_t x122 = 0U;
uint64_t x123 = 28379543LLU;
int32_t x124 = INT32_MIN;
int64_t x129 = INT64_MAX;
int16_t x130 = INT16_MAX;
uint64_t x135 = 14LLU;
static volatile int64_t x142 = -121LL;
static volatile uint64_t t36 = 8934535075822LLU;
uint32_t x155 = 7887182U;
uint8_t x161 = 4U;
int32_t x169 = INT32_MIN;
static int32_t x178 = -1;
int32_t x181 = INT32_MIN;
volatile int32_t t45 = INT32_MAX;
uint8_t x187 = UINT8_MAX;
static uint64_t t46 = 25916470378919109LLU;
int64_t x192 = INT64_MIN;
volatile uint32_t t49 = 14873771U;
int16_t x204 = INT16_MAX;
uint64_t x206 = UINT64_MAX;
static volatile uint32_t x207 = UINT32_MAX;
uint64_t t51 = 143268261800LLU;
volatile int64_t t52 = -24LL;
int64_t x219 = INT64_MIN;
int32_t t54 = 359;
int32_t x221 = INT32_MAX;
uint16_t x223 = UINT16_MAX;
uint64_t x224 = UINT64_MAX;
int16_t x228 = -1;
volatile int64_t t57 = -5303751224173088LL;
static uint32_t x241 = 569U;
int16_t x249 = -1;
int16_t x257 = -1441;
static int32_t x258 = INT32_MIN;
uint32_t x260 = 138468750U;
int32_t x262 = INT32_MIN;
uint64_t x265 = UINT64_MAX;
int64_t x266 = 26400138LL;
uint64_t t66 = 7061LLU;
static int8_t x271 = INT8_MAX;
volatile int32_t t67 = -4624;
int8_t x273 = 0;
uint8_t x274 = 10U;
uint32_t x280 = 45379U;
int8_t x281 = -29;
uint16_t x282 = UINT16_MAX;
int16_t x284 = 216;
volatile uint64_t t72 = 58370320LLU;
volatile int32_t x294 = 118499;
int64_t x298 = INT64_MIN;
static int8_t x300 = INT8_MIN;
int16_t x301 = -2366;
uint64_t x304 = 0LLU;
static int64_t t78 = INT64_MIN;
int16_t x322 = 29;
int32_t x327 = -1;
int32_t x331 = -11999769;
static uint64_t x335 = 315LLU;
volatile int64_t t83 = 91051114LL;
int32_t x340 = INT32_MAX;
uint32_t x342 = 85830161U;
int32_t x344 = -1942;
volatile uint32_t t85 = 2856U;
int64_t x349 = -1LL;
int32_t x352 = -1;
int16_t x353 = 536;
int8_t x354 = -1;
static int16_t x357 = -194;
volatile int16_t x359 = INT16_MIN;
int64_t x361 = 162LL;
uint64_t x365 = UINT64_MAX;
static int64_t x369 = 166266979362625LL;
uint32_t x372 = UINT32_MAX;
volatile uint16_t x377 = 2482U;
int32_t x381 = INT32_MAX;
int16_t x386 = -1;
int8_t x387 = 1;
static int16_t x388 = 358;
uint64_t x391 = 8173LLU;
volatile uint64_t t97 = 4164775618LLU;
uint32_t x398 = 64480U;
int8_t x399 = -20;
uint64_t t99 = 226LLU;


void f0(void) {
	volatile uint16_t x2 = 0U;
	uint16_t x3 = UINT16_MAX;
	static int16_t x4 = 2;
	int64_t t0 = INT64_MIN;

	t0 = ((x1^x2)+(x3==x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile uint64_t x7 = 109114379263LLU;
	volatile int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 7951785;

	t1 = ((x5^x6)+(x7==x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	static uint64_t x11 = 847995656LLU;
	volatile int64_t t2 = -11694134991762LL;

	t2 = ((x9^x10)+(x11==x12));

	if (t2 != 1997385699463LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x16 = 6946605;
	int64_t t3 = 0LL;

	t3 = ((x13^x14)+(x15==x16));

	if (t3 != -9223372036707306294LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MAX;
	static int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;
	volatile int64_t t4 = 241LL;

	t4 = ((x17^x18)+(x19==x20));

	if (t4 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = UINT16_MAX;
	uint16_t x22 = UINT16_MAX;
	static int64_t x23 = -9265LL;

	t5 = ((x21^x22)+(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int64_t x26 = INT64_MAX;
	volatile uint32_t x28 = UINT32_MAX;
	static volatile int64_t t6 = 2661685276164LL;

	t6 = ((x25^x26)+(x27==x28));

	if (t6 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	uint32_t x30 = 8551164U;
	uint32_t t7 = 661U;

	t7 = ((x29^x30)+(x31==x32));

	if (t7 != 2138932483U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 0LLU;
	static int64_t x34 = INT64_MIN;
	volatile int64_t x35 = INT64_MIN;
	int32_t x36 = 23458616;

	t8 = ((x33^x34)+(x35==x36));

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint8_t x38 = 13U;
	int64_t x39 = INT64_MIN;
	volatile int8_t x40 = INT8_MIN;
	int32_t t9 = 105730974;

	t9 = ((x37^x38)+(x39==x40));

	if (t9 != -115) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static int32_t x43 = INT32_MAX;
	static int8_t x44 = 3;

	t10 = ((x41^x42)+(x43==x44));

	if (t10 != -2147483023) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -95031713588556920LL;
	volatile int64_t x46 = -954833355950830683LL;
	static volatile int64_t x47 = INT64_MAX;
	static int64_t x48 = INT64_MIN;
	volatile int64_t t11 = 3844054LL;

	t11 = ((x45^x46)+(x47==x48));

	if (t11 != 869653464210407469LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MAX;
	int8_t x50 = INT8_MAX;
	volatile int8_t x51 = INT8_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	int32_t t12 = -235952;

	t12 = ((x49^x50)+(x51==x52));

	if (t12 != 2147483520) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint64_t x54 = 0LLU;
	static int16_t x55 = -1;
	uint32_t x56 = UINT32_MAX;
	uint64_t t13 = 78183258299285984LLU;

	t13 = ((x53^x54)+(x55==x56));

	if (t13 != 32768LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MAX;
	uint64_t x59 = 271156640559LLU;
	static uint64_t x60 = UINT64_MAX;
	int32_t t14 = -279104;

	t14 = ((x57^x58)+(x59==x60));

	if (t14 != 2147450880) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 3U;
	int32_t x62 = 13826956;
	static int16_t x63 = INT16_MAX;
	int64_t x64 = INT64_MIN;

	t15 = ((x61^x62)+(x63==x64));

	if (t15 != 13826959) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = 4;
	int64_t x67 = 911LL;
	int16_t x68 = -1581;

	t16 = ((x65^x66)+(x67==x68));

	if (t16 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 1U;
	static uint16_t x70 = UINT16_MAX;
	static uint8_t x71 = 3U;
	volatile uint8_t x72 = 0U;
	int32_t t17 = -20132;

	t17 = ((x69^x70)+(x71==x72));

	if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int64_t x75 = INT64_MAX;
	volatile int8_t x76 = -1;
	int32_t t18 = 10535;

	t18 = ((x73^x74)+(x75==x76));

	if (t18 != 32640) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 15U;
	uint16_t x79 = UINT16_MAX;
	static int8_t x80 = 19;
	volatile uint32_t t19 = 143446205U;

	t19 = ((x77^x78)+(x79==x80));

	if (t19 != 31482U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -184241100;
	static uint16_t x82 = 3U;
	int32_t x83 = -7864104;
	volatile int16_t x84 = -5711;
	static volatile int32_t t20 = 0;

	t20 = ((x81^x82)+(x83==x84));

	if (t20 != -184241097) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = -44;
	volatile uint16_t x87 = UINT16_MAX;
	int64_t t21 = -465LL;

	t21 = ((x85^x86)+(x87==x88));

	if (t21 != 9223372036854775765LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int64_t x90 = -1LL;
	volatile int16_t x92 = INT16_MAX;
	volatile int64_t t22 = -1976334204559563122LL;

	t22 = ((x89^x90)+(x91==x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = -1LL;
	static volatile int32_t x95 = -1;
	static int64_t x96 = INT64_MAX;
	volatile int64_t t23 = 987877170414932LL;

	t23 = ((x93^x94)+(x95==x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile int64_t x100 = -1LL;
	uint64_t t24 = 3872764429503188950LLU;

	t24 = ((x97^x98)+(x99==x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	volatile int32_t t25 = 125013312;

	t25 = ((x101^x102)+(x103==x104));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 14;
	volatile uint64_t x106 = UINT64_MAX;
	uint32_t x107 = UINT32_MAX;
	static volatile uint64_t t26 = 114LLU;

	t26 = ((x105^x106)+(x107==x108));

	if (t26 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MIN;
	volatile int16_t x111 = 0;
	volatile int32_t t27 = -6270;

	t27 = ((x109^x110)+(x111==x112));

	if (t27 != -118) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x115 = -1LL;
	int64_t x116 = INT64_MAX;
	volatile uint64_t t28 = 304436998503630874LLU;

	t28 = ((x113^x114)+(x115==x116));

	if (t28 != 1935406693548694LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 12U;
	uint8_t x118 = 44U;
	int64_t x119 = -1LL;
	int32_t x120 = -6294;
	volatile int32_t t29 = 11653;

	t29 = ((x117^x118)+(x119==x120));

	if (t29 != 32) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	volatile int32_t t30 = 675836;

	t30 = ((x121^x122)+(x123==x124));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	uint16_t x126 = 704U;
	uint16_t x127 = UINT16_MAX;
	int16_t x128 = 3;
	int64_t t31 = -235LL;

	t31 = ((x125^x126)+(x127==x128));

	if (t31 != -705LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x131 = 7U;
	int64_t x132 = -1LL;
	static int64_t t32 = -28224426042892LL;

	t32 = ((x129^x130)+(x131==x132));

	if (t32 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 1U;
	volatile uint8_t x134 = 115U;
	int16_t x136 = -10;
	int32_t t33 = -253141691;

	t33 = ((x133^x134)+(x135==x136));

	if (t33 != 114) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 2;
	int16_t x138 = -2;
	static uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 0;

	t34 = ((x137^x138)+(x139==x140));

	if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = 0;
	uint16_t x143 = 363U;
	int8_t x144 = 22;
	static volatile int64_t t35 = -1726524925556LL;

	t35 = ((x141^x142)+(x143==x144));

	if (t35 != -121LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 23LLU;
	int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	uint64_t x148 = UINT64_MAX;

	t36 = ((x145^x146)+(x147==x148));

	if (t36 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	static int8_t x152 = 2;
	int64_t t37 = 51808LL;

	t37 = ((x149^x150)+(x151==x152));

	if (t37 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint8_t x154 = 0U;
	int8_t x156 = 4;
	static uint32_t t38 = UINT32_MAX;

	t38 = ((x153^x154)+(x155==x156));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	volatile int8_t x158 = -1;
	int32_t x159 = -1;
	int16_t x160 = INT16_MAX;
	int64_t t39 = INT64_MAX;

	t39 = ((x157^x158)+(x159==x160));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MAX;
	uint16_t x163 = 1605U;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 6414;

	t40 = ((x161^x162)+(x163==x164));

	if (t40 != 2147483643) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 46U;
	uint16_t x166 = UINT16_MAX;
	uint8_t x167 = 0U;
	int32_t x168 = INT32_MAX;
	int32_t t41 = 85584;

	t41 = ((x165^x166)+(x167==x168));

	if (t41 != 65489) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x170 = 30U;
	volatile int32_t x171 = 16;
	int32_t x172 = 29;
	volatile int32_t t42 = -110388462;

	t42 = ((x169^x170)+(x171==x172));

	if (t42 != -2147483618) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x173 = INT8_MIN;
	static int8_t x174 = 27;
	int32_t x175 = INT32_MAX;
	uint16_t x176 = 50U;
	static int32_t t43 = 7815;

	t43 = ((x173^x174)+(x175==x176));

	if (t43 != -101) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int64_t x179 = -25503252701006810LL;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 53855498;

	t44 = ((x177^x178)+(x179==x180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = 19;

	t45 = ((x181^x182)+(x183==x184));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint64_t x186 = 2LLU;
	int8_t x188 = 1;

	t46 = ((x185^x186)+(x187==x188));

	if (t46 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	volatile int32_t t47 = 2;

	t47 = ((x189^x190)+(x191==x192));

	if (t47 != 2147483520) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -3230333407031423280LL;
	uint32_t x194 = 42938495U;
	volatile int64_t x195 = INT64_MAX;
	uint8_t x196 = 0U;
	int64_t t48 = 6701010675914854LL;

	t48 = ((x193^x194)+(x195==x196));

	if (t48 != -3230333407072371025LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 100261U;
	int8_t x198 = 15;
	int8_t x199 = INT8_MAX;
	volatile uint8_t x200 = 32U;

	t49 = ((x197^x198)+(x199==x200));

	if (t49 != 100266U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = UINT8_MAX;
	uint8_t x202 = 46U;
	uint8_t x203 = UINT8_MAX;
	static int32_t t50 = 6;

	t50 = ((x201^x202)+(x203==x204));

	if (t50 != 209) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -58398018LL;
	int16_t x208 = -1;

	t51 = ((x205^x206)+(x207==x208));

	if (t51 != 58398018LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = INT64_MIN;
	uint8_t x210 = 3U;
	int32_t x211 = 7;
	volatile uint8_t x212 = 1U;

	t52 = ((x209^x210)+(x211==x212));

	if (t52 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = -2;
	uint32_t x214 = 13U;
	static int32_t x215 = 266737;
	int32_t x216 = INT32_MAX;
	uint32_t t53 = 1U;

	t53 = ((x213^x214)+(x215==x216));

	if (t53 != 4294967283U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = -1;
	uint32_t x220 = UINT32_MAX;

	t54 = ((x217^x218)+(x219==x220));

	if (t54 != -65536) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = 1769LL;
	volatile int64_t t55 = 1214LL;

	t55 = ((x221^x222)+(x223==x224));

	if (t55 != 2147481878LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1;
	int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = 250598526100430LLU;
	static volatile int32_t t56 = 62073048;

	t56 = ((x225^x226)+(x227==x228));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 0U;
	static int64_t x230 = -1LL;
	static volatile uint16_t x231 = 93U;
	int8_t x232 = 0;

	t57 = ((x229^x230)+(x231==x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	uint16_t x234 = UINT16_MAX;
	int64_t x235 = -1LL;
	uint64_t x236 = 220799281LLU;
	int32_t t58 = -1453232;

	t58 = ((x233^x234)+(x235==x236));

	if (t58 != 65280) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = UINT8_MAX;
	int16_t x238 = 62;
	int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -457293;

	t59 = ((x237^x238)+(x239==x240));

	if (t59 != 193) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x242 = INT32_MIN;
	volatile uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;
	volatile uint32_t t60 = 1U;

	t60 = ((x241^x242)+(x243==x244));

	if (t60 != 2147484217U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	int8_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	int8_t x248 = 1;
	int64_t t61 = -2823779653LL;

	t61 = ((x245^x246)+(x247==x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = UINT8_MAX;
	int64_t x251 = INT64_MIN;
	int16_t x252 = -1;
	static int32_t t62 = 468;

	t62 = ((x249^x250)+(x251==x252));

	if (t62 != -256) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	static volatile int8_t x254 = INT8_MIN;
	static int64_t x255 = INT64_MIN;
	uint16_t x256 = UINT16_MAX;
	uint64_t t63 = 50218LLU;

	t63 = ((x253^x254)+(x255==x256));

	if (t63 != 127LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x259 = 459604LL;
	volatile int32_t t64 = -79;

	t64 = ((x257^x258)+(x259==x260));

	if (t64 != 2147482207) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint16_t x263 = 27937U;
	static volatile uint8_t x264 = 1U;
	volatile int32_t t65 = -121205485;

	t65 = ((x261^x262)+(x263==x264));

	if (t65 != 2147483520) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = 63;
	int32_t x268 = 7601;

	t66 = ((x265^x266)+(x267==x268));

	if (t66 != 18446744073683151477LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 1206U;
	int32_t x270 = INT32_MIN;
	static uint64_t x272 = 1529568208282804814LLU;

	t67 = ((x269^x270)+(x271==x272));

	if (t67 != -2147482442) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x275 = -78028719583LL;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = -404505;

	t68 = ((x273^x274)+(x275==x276));

	if (t68 != 10) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x277 = UINT8_MAX;
	uint8_t x278 = 1U;
	int8_t x279 = INT8_MIN;
	volatile int32_t t69 = 14741438;

	t69 = ((x277^x278)+(x279==x280));

	if (t69 != 254) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x283 = UINT32_MAX;
	int32_t t70 = -7;

	t70 = ((x281^x282)+(x283==x284));

	if (t70 != -65508) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = 2U;
	int16_t x287 = -1;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -76616902;

	t71 = ((x285^x286)+(x287==x288));

	if (t71 != -126) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 2U;
	static uint16_t x291 = 18139U;
	int8_t x292 = INT8_MIN;

	t72 = ((x289^x290)+(x291==x292));

	if (t72 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	uint64_t x295 = 3603331959544919246LLU;
	int32_t x296 = INT32_MAX;
	int32_t t73 = 750211;

	t73 = ((x293^x294)+(x295==x296));

	if (t73 != 2147365148) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MAX;
	int16_t x299 = INT16_MIN;
	static volatile int64_t t74 = -20453266467469LL;

	t74 = ((x297^x298)+(x299==x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = INT16_MIN;
	static uint32_t t75 = 1U;

	t75 = ((x301^x302)+(x303==x304));

	if (t75 != 2365U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 5U;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = -1;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 2174;

	t76 = ((x305^x306)+(x307==x308));

	if (t76 != 65530) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile uint8_t x310 = 3U;
	static int32_t x311 = INT32_MIN;
	uint8_t x312 = 2U;
	volatile int32_t t77 = 0;

	t77 = ((x309^x310)+(x311==x312));

	if (t77 != -125) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MAX;
	int8_t x314 = -1;
	volatile int64_t x315 = 224947LL;
	uint32_t x316 = 205138U;

	t78 = ((x313^x314)+(x315==x316));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 4733388U;
	uint64_t x318 = 212736346179972889LLU;
	int64_t x319 = INT64_MIN;
	int64_t x320 = -23185LL;
	uint64_t t79 = 141729LLU;

	t79 = ((x317^x318)+(x319==x320));

	if (t79 != 212736346175248085LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 71U;
	static int64_t x323 = -1LL;
	volatile int32_t x324 = INT32_MIN;
	uint32_t t80 = 1821180227U;

	t80 = ((x321^x322)+(x323==x324));

	if (t80 != 90U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	int32_t x326 = -20712126;
	int32_t x328 = INT32_MIN;
	static volatile int32_t t81 = -2;

	t81 = ((x325^x326)+(x327==x328));

	if (t81 != 20712130) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MAX;
	volatile uint32_t x330 = 968941003U;
	int32_t x332 = INT32_MIN;
	volatile uint32_t t82 = 3U;

	t82 = ((x329^x330)+(x331==x332));

	if (t82 != 968940980U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 602867841U;
	volatile int64_t x334 = INT64_MIN;
	static volatile int32_t x336 = INT32_MIN;

	t83 = ((x333^x334)+(x335==x336));

	if (t83 != -9223372036251907967LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	uint64_t t84 = 1502888502017176463LLU;

	t84 = ((x337^x338)+(x339==x340));

	if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 40U;
	int32_t x343 = INT32_MAX;

	t85 = ((x341^x342)+(x343==x344));

	if (t85 != 85830201U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MIN;
	static int16_t x346 = 1925;
	int16_t x347 = INT16_MIN;
	static int8_t x348 = -1;
	volatile int32_t t86 = -6967692;

	t86 = ((x345^x346)+(x347==x348));

	if (t86 != -2147481723) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x350 = INT8_MIN;
	uint32_t x351 = 26U;
	int64_t t87 = -7817721394426803LL;

	t87 = ((x349^x350)+(x351==x352));

	if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x355 = -1;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 2031744;

	t88 = ((x353^x354)+(x355==x356));

	if (t88 != -537) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x358 = INT32_MAX;
	volatile int32_t x360 = INT32_MAX;
	int32_t t89 = 53412;

	t89 = ((x357^x358)+(x359==x360));

	if (t89 != -2147483455) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MIN;
	uint64_t x363 = 253303293572LLU;
	volatile int16_t x364 = 260;
	int64_t t90 = -712903LL;

	t90 = ((x361^x362)+(x363==x364));

	if (t90 != -222LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = INT32_MIN;
	static int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MAX;
	uint64_t t91 = 49727554889621LLU;

	t91 = ((x365^x366)+(x367==x368));

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MIN;
	int64_t t92 = 751272549624388LL;

	t92 = ((x369^x370)+(x371==x372));

	if (t92 != -166266979375295LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 35;

	t93 = ((x373^x374)+(x375==x376));

	if (t93 != 32512) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x378 = -671152;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = 27043;

	t94 = ((x377^x378)+(x379==x380));

	if (t94 != -668701) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x382 = 208U;
	uint8_t x383 = 26U;
	volatile int64_t x384 = 62889893LL;
	int32_t t95 = 143;

	t95 = ((x381^x382)+(x383==x384));

	if (t95 != 2147483439) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = 138791LLU;
	uint64_t t96 = 385070LLU;

	t96 = ((x385^x386)+(x387==x388));

	if (t96 != 18446744073709412824LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -49;
	static uint64_t x390 = 3649519901LLU;
	static int64_t x392 = INT64_MAX;

	t97 = ((x389^x390)+(x391==x392));

	if (t97 != 18446744070060031698LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 108574LL;
	int32_t x394 = INT32_MAX;
	static int8_t x395 = INT8_MIN;
	int32_t x396 = -1;
	int64_t t98 = 7348378596717849LL;

	t98 = ((x393^x394)+(x395==x396));

	if (t98 != 2147375073LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = 273138636738984976LLU;
	uint16_t x400 = 77U;

	t99 = ((x397^x398)+(x399==x400));

	if (t99 != 273138636738922480LLU) { NG(); } else { ; }
	
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

