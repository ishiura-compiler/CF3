#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x9 = 15U;
static int32_t t2 = 9019090;
int8_t x13 = -1;
uint16_t x16 = 777U;
static volatile uint64_t x18 = 110484671LLU;
int32_t t4 = 0;
int32_t x22 = -1;
int16_t x39 = 12;
volatile uint16_t x47 = 22U;
uint64_t x49 = 20380728LLU;
int8_t x50 = INT8_MIN;
uint64_t x54 = 76407006321LLU;
int32_t t13 = 2592;
static int16_t x58 = INT16_MIN;
volatile int32_t t14 = 102098523;
volatile int32_t t16 = 3;
uint64_t x70 = 195LLU;
static volatile int32_t x72 = -1;
int64_t x85 = -201314918146LL;
static int8_t x89 = 26;
int32_t x93 = INT32_MAX;
int32_t x94 = INT32_MIN;
volatile int64_t x101 = -1LL;
static int16_t x107 = -5;
int64_t x117 = 13328183LL;
int16_t x120 = INT16_MAX;
int32_t x122 = INT32_MIN;
volatile int32_t t30 = -34;
static int64_t x128 = INT64_MIN;
static volatile int32_t t31 = -746952975;
volatile int16_t x129 = -92;
uint32_t x131 = UINT32_MAX;
static int64_t x135 = 13948928LL;
uint64_t x137 = 198093374655430625LLU;
int32_t x140 = INT32_MIN;
static uint64_t x144 = UINT64_MAX;
int64_t x147 = -1LL;
volatile int32_t t37 = -2945765;
static int8_t x157 = INT8_MIN;
uint8_t x159 = 56U;
int8_t x160 = 5;
int8_t x161 = 1;
uint8_t x163 = 13U;
int32_t t40 = -1102635;
int16_t x168 = INT16_MIN;
volatile int32_t t41 = -70;
static uint32_t x169 = UINT32_MAX;
int16_t x170 = 17;
volatile int64_t x172 = 971237879LL;
volatile int32_t x173 = INT32_MIN;
volatile int32_t x199 = -37;
static volatile int32_t x200 = -16;
int32_t x201 = INT32_MIN;
static uint64_t x202 = 554388622796952LLU;
static int16_t x204 = INT16_MIN;
int16_t x213 = INT16_MAX;
int32_t x216 = INT32_MIN;
volatile int32_t t53 = 1776;
static int8_t x222 = -49;
int64_t x223 = -449LL;
int64_t x224 = INT64_MIN;
int32_t t55 = -118336;
static int32_t x225 = -1;
int64_t x227 = INT64_MAX;
uint16_t x235 = 2U;
int8_t x238 = INT8_MIN;
int8_t x243 = INT8_MIN;
int32_t t61 = 1169039;
int64_t x251 = -7911410741251LL;
int8_t x254 = -1;
volatile int64_t x255 = INT64_MAX;
volatile int32_t t64 = 2132;
static int8_t x268 = INT8_MIN;
int32_t t67 = -755;
int8_t x274 = INT8_MAX;
int8_t x275 = -1;
int16_t x279 = INT16_MAX;
static int32_t t69 = 5;
volatile int32_t x285 = INT32_MAX;
int64_t x287 = 0LL;
int32_t x296 = -46262;
int16_t x297 = INT16_MAX;
int32_t x298 = INT32_MIN;
int32_t t75 = 147163721;
int8_t x306 = INT8_MIN;
uint8_t x308 = UINT8_MAX;
volatile int64_t x311 = INT64_MAX;
static int32_t t77 = -50862980;
int32_t x316 = INT32_MIN;
int64_t x319 = 6876197921LL;
static uint16_t x322 = 127U;
int64_t x327 = -1LL;
volatile int32_t t81 = 108;
volatile int32_t t82 = 30827511;
static uint32_t x336 = 40579943U;
uint16_t x337 = 557U;
int32_t t85 = -5;
int32_t t87 = 12763;
int64_t x355 = -1LL;
static uint64_t x361 = 17588981LLU;
volatile int32_t x363 = 864;
uint8_t x375 = 51U;
int16_t x378 = -1;
uint32_t x379 = UINT32_MAX;
uint32_t x381 = 902U;
int8_t x382 = 14;
uint32_t x384 = 762634998U;
uint64_t x386 = 14203168643LLU;
int16_t x392 = INT16_MAX;
uint64_t x400 = 270561664072104698LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MIN;
	int32_t x3 = -1;
	int8_t x4 = -1;
	int32_t t0 = 17;

	t0 = ((x1==x2)^(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = -1;
	volatile int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -5596768;

	t1 = ((x5==x6)^(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 36U;
	int8_t x11 = INT8_MIN;
	int32_t x12 = -46550;

	t2 = ((x9==x10)^(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MAX;
	volatile int32_t x15 = INT32_MAX;
	int32_t t3 = -196220;

	t3 = ((x13==x14)^(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	volatile uint16_t x19 = 66U;
	int64_t x20 = -2035614514192036LL;

	t4 = ((x17==x18)^(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 4562LLU;
	int8_t x23 = INT8_MIN;
	static int64_t x24 = -1LL;
	int32_t t5 = -1;

	t5 = ((x21==x22)^(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1722246LLU;
	int32_t x26 = INT32_MIN;
	int32_t x27 = 1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 55174776;

	t6 = ((x25==x26)^(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = 970474042LL;
	volatile uint16_t x31 = 208U;
	volatile int8_t x32 = INT8_MIN;
	static int32_t t7 = 2143;

	t7 = ((x29==x30)^(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -5254;
	int8_t x34 = -15;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 8;

	t8 = ((x33==x34)^(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -899580006385162LL;
	int16_t x38 = -1;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 53;

	t9 = ((x37==x38)^(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 629265018LL;
	int8_t x42 = 1;
	uint32_t x43 = UINT32_MAX;
	volatile int64_t x44 = INT64_MIN;
	int32_t t10 = -3453049;

	t10 = ((x41==x42)^(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x46 = -20256192046739LL;
	volatile uint16_t x48 = 6U;
	int32_t t11 = -25923;

	t11 = ((x45==x46)^(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x51 = INT64_MIN;
	static int8_t x52 = INT8_MAX;
	volatile int32_t t12 = 201937;

	t12 = ((x49==x50)^(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	volatile int8_t x55 = INT8_MIN;
	static volatile uint16_t x56 = UINT16_MAX;

	t13 = ((x53==x54)^(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -38759198221592LL;
	int16_t x59 = -124;
	volatile uint64_t x60 = UINT64_MAX;

	t14 = ((x57==x58)^(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 111U;
	uint64_t x62 = 27786LLU;
	int8_t x63 = INT8_MAX;
	static uint16_t x64 = UINT16_MAX;
	int32_t t15 = -27253559;

	t15 = ((x61==x62)^(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	static uint8_t x67 = 38U;
	static int8_t x68 = 1;

	t16 = ((x65==x66)^(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 106714069810LLU;
	int64_t x71 = -1LL;
	int32_t t17 = -316149037;

	t17 = ((x69==x70)^(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	uint32_t x74 = UINT32_MAX;
	int8_t x75 = 4;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 15233192;

	t18 = ((x73==x74)^(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MAX;
	int32_t x79 = 3548955;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = -103065315;

	t19 = ((x77==x78)^(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -27;
	volatile int64_t x82 = 1541666323992062062LL;
	uint16_t x83 = 227U;
	static int16_t x84 = -1;
	static int32_t t20 = -517119;

	t20 = ((x81==x82)^(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = 1014;
	int32_t t21 = 63921332;

	t21 = ((x85==x86)^(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	uint32_t x91 = 15950U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 840;

	t22 = ((x89==x90)^(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x95 = -1;
	int8_t x96 = -1;
	int32_t t23 = 13;

	t23 = ((x93==x94)^(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 0U;
	int32_t x98 = INT32_MAX;
	int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t24 = 3886;

	t24 = ((x97==x98)^(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x102 = INT16_MIN;
	uint32_t x103 = 9U;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 4073;

	t25 = ((x101==x102)^(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	int16_t x106 = INT16_MIN;
	volatile int8_t x108 = -17;
	int32_t t26 = -273;

	t26 = ((x105==x106)^(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 8286;
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MIN;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = -444;

	t27 = ((x109==x110)^(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x114 = 11U;
	static int64_t x115 = 0LL;
	int16_t x116 = -1;
	volatile int32_t t28 = -214729487;

	t28 = ((x113==x114)^(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x118 = 5U;
	int8_t x119 = -4;
	volatile int32_t t29 = -59;

	t29 = ((x117==x118)^(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint8_t x123 = 41U;
	uint64_t x124 = 28051377549824228LLU;

	t30 = ((x121==x122)^(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 203LL;
	volatile int8_t x126 = 2;
	uint32_t x127 = UINT32_MAX;

	t31 = ((x125==x126)^(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = 6609;
	int16_t x132 = INT16_MIN;
	int32_t t32 = -15;

	t32 = ((x129==x130)^(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MAX;
	static uint64_t x134 = UINT64_MAX;
	static int16_t x136 = -2;
	int32_t t33 = 871859151;

	t33 = ((x133==x134)^(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x138 = 10843690U;
	static volatile uint8_t x139 = UINT8_MAX;
	int32_t t34 = -1;

	t34 = ((x137==x138)^(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -3086284;
	int64_t x142 = -215LL;
	int64_t x143 = 19173692668LL;
	int32_t t35 = -33735741;

	t35 = ((x141==x142)^(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 190793778U;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -337501;

	t36 = ((x145==x146)^(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	uint32_t x150 = UINT32_MAX;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;

	t37 = ((x149==x150)^(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 3U;
	uint16_t x154 = 53U;
	int64_t x155 = -206LL;
	volatile int64_t x156 = -396LL;
	int32_t t38 = 9560890;

	t38 = ((x153==x154)^(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x158 = 126U;
	volatile int32_t t39 = 28859;

	t39 = ((x157==x158)^(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x162 = INT64_MIN;
	volatile int32_t x164 = INT32_MAX;

	t40 = ((x161==x162)^(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -202362841875607081LL;
	int16_t x166 = 0;
	int16_t x167 = INT16_MIN;

	t41 = ((x165==x166)^(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x171 = 1162105244U;
	int32_t t42 = -12395;

	t42 = ((x169==x170)^(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x174 = 66063206879LLU;
	int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -14;

	t43 = ((x173==x174)^(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 16;
	volatile uint64_t x178 = 8287664789080764898LLU;
	uint8_t x179 = 29U;
	int16_t x180 = 1556;
	int32_t t44 = -349953767;

	t44 = ((x177==x178)^(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 12102;
	int8_t x182 = 7;
	uint32_t x183 = 313U;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 0;

	t45 = ((x181==x182)^(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint64_t x186 = 18425884841LLU;
	int16_t x187 = INT16_MIN;
	volatile int32_t x188 = 0;
	static volatile int32_t t46 = -7913818;

	t46 = ((x185==x186)^(x187<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	static int16_t x190 = INT16_MAX;
	static int16_t x191 = 1;
	uint16_t x192 = UINT16_MAX;
	int32_t t47 = -25653;

	t47 = ((x189==x190)^(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MAX;
	uint64_t x194 = 685211LLU;
	volatile uint32_t x195 = 31019288U;
	int64_t x196 = INT64_MIN;
	int32_t t48 = 217865;

	t48 = ((x193==x194)^(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MAX;
	int64_t x198 = -235649771LL;
	volatile int32_t t49 = 20737575;

	t49 = ((x197==x198)^(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x203 = 218104U;
	static volatile int32_t t50 = 257817;

	t50 = ((x201==x202)^(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	volatile uint8_t x206 = UINT8_MAX;
	static uint64_t x207 = 492098494209651LLU;
	static volatile int64_t x208 = -389811682LL;
	volatile int32_t t51 = 698;

	t51 = ((x205==x206)^(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x209 = UINT64_MAX;
	volatile uint64_t x210 = 58746517873792340LLU;
	uint16_t x211 = 1U;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -1;

	t52 = ((x209==x210)^(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x214 = UINT16_MAX;
	int8_t x215 = 10;

	t53 = ((x213==x214)^(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	uint32_t x218 = 1U;
	uint32_t x219 = 347U;
	volatile int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = 96555204;

	t54 = ((x217==x218)^(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -60;

	t55 = ((x221==x222)^(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x226 = INT8_MAX;
	int8_t x228 = INT8_MAX;
	static int32_t t56 = -3;

	t56 = ((x225==x226)^(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = -1;
	static volatile int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MAX;
	uint8_t x232 = 0U;
	static volatile int32_t t57 = -25586113;

	t57 = ((x229==x230)^(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 57932638;
	int32_t x234 = INT32_MAX;
	int8_t x236 = INT8_MIN;
	static int32_t t58 = -2;

	t58 = ((x233==x234)^(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 12U;
	volatile int64_t x239 = INT64_MAX;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 855;

	t59 = ((x237==x238)^(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	static uint64_t x242 = 36917532LLU;
	static int32_t x244 = 787542823;
	volatile int32_t t60 = 301344718;

	t60 = ((x241==x242)^(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 1895;
	uint16_t x246 = 18U;
	static int32_t x247 = -1;
	static int32_t x248 = INT32_MAX;

	t61 = ((x245==x246)^(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	uint8_t x250 = 115U;
	uint8_t x252 = UINT8_MAX;
	int32_t t62 = 2904730;

	t62 = ((x249==x250)^(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x256 = -1;
	int32_t t63 = -90072;

	t63 = ((x253==x254)^(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 1U;
	uint16_t x258 = 7U;
	int64_t x259 = 159794833144460630LL;
	uint8_t x260 = 76U;

	t64 = ((x257==x258)^(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	volatile int64_t x262 = INT64_MIN;
	static int32_t x263 = -1;
	int32_t x264 = -1;
	static int32_t t65 = 3163;

	t65 = ((x261==x262)^(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 10938U;
	int8_t x266 = -1;
	volatile uint32_t x267 = 1U;
	volatile int32_t t66 = -1;

	t66 = ((x265==x266)^(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 2537U;
	static volatile int32_t x270 = INT32_MIN;
	uint8_t x271 = 1U;
	static volatile int64_t x272 = 177042LL;

	t67 = ((x269==x270)^(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile uint32_t x276 = 58U;
	int32_t t68 = 22547;

	t68 = ((x273==x274)^(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MIN;
	int16_t x280 = -1;

	t69 = ((x277==x278)^(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	int16_t x282 = INT16_MAX;
	static int64_t x283 = INT64_MIN;
	volatile uint32_t x284 = UINT32_MAX;
	static int32_t t70 = 43110;

	t70 = ((x281==x282)^(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = -1;
	int32_t x288 = -1;
	static int32_t t71 = 1;

	t71 = ((x285==x286)^(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	uint16_t x290 = 66U;
	int16_t x291 = INT16_MIN;
	static int64_t x292 = INT64_MIN;
	static volatile int32_t t72 = 898247215;

	t72 = ((x289==x290)^(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 23990U;
	volatile int32_t t73 = -87995936;

	t73 = ((x293==x294)^(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x299 = 7U;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 183060;

	t74 = ((x297==x298)^(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 122125241575559451LLU;
	uint64_t x302 = 946609767106504LLU;
	static int16_t x303 = -1;
	uint64_t x304 = 21990673952LLU;

	t75 = ((x301==x302)^(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	volatile uint8_t x307 = UINT8_MAX;
	volatile int32_t t76 = -72;

	t76 = ((x305==x306)^(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int32_t x310 = 2742;
	static volatile uint8_t x312 = 4U;

	t77 = ((x309==x310)^(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	int32_t x314 = -1;
	int16_t x315 = INT16_MIN;
	int32_t t78 = -3;

	t78 = ((x313==x314)^(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	static int64_t x318 = 3678308419519LL;
	uint32_t x320 = 0U;
	volatile int32_t t79 = -1759;

	t79 = ((x317==x318)^(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int32_t x323 = 620438729;
	static int32_t x324 = -1;
	int32_t t80 = 56;

	t80 = ((x321==x322)^(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -11927LL;
	uint8_t x326 = 1U;
	volatile uint8_t x328 = 0U;

	t81 = ((x325==x326)^(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 1;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = -633730;
	volatile int32_t x332 = INT32_MIN;

	t82 = ((x329==x330)^(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	static uint32_t x334 = UINT32_MAX;
	uint8_t x335 = UINT8_MAX;
	int32_t t83 = -273716804;

	t83 = ((x333==x334)^(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x338 = 514098287023070LLU;
	static uint64_t x339 = 1467334165102642998LLU;
	uint8_t x340 = 30U;
	volatile int32_t t84 = 31;

	t84 = ((x337==x338)^(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	static uint64_t x342 = 15755074LLU;
	int32_t x343 = INT32_MIN;
	volatile int16_t x344 = -1;

	t85 = ((x341==x342)^(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	int32_t x347 = INT32_MIN;
	static int32_t x348 = -1;
	int32_t t86 = -2087536;

	t86 = ((x345==x346)^(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 0;
	uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 67U;
	int16_t x352 = INT16_MAX;

	t87 = ((x349==x350)^(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 4190878LLU;
	int32_t x354 = INT32_MAX;
	uint32_t x356 = UINT32_MAX;
	int32_t t88 = 102847;

	t88 = ((x353==x354)^(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	volatile int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	static volatile uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = 776774;

	t89 = ((x357==x358)^(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 1U;
	volatile uint64_t x364 = 43768LLU;
	static int32_t t90 = 82;

	t90 = ((x361==x362)^(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 11U;
	int64_t x366 = INT64_MAX;
	volatile int16_t x367 = -22;
	int32_t x368 = INT32_MIN;
	int32_t t91 = 457848;

	t91 = ((x365==x366)^(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = 1;
	static volatile uint64_t x370 = 1451151092705444LLU;
	int8_t x371 = -1;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 1;

	t92 = ((x369==x370)^(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 2LL;
	int64_t x374 = -7597LL;
	uint8_t x376 = 3U;
	volatile int32_t t93 = 15286;

	t93 = ((x373==x374)^(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 1808U;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -8;

	t94 = ((x377==x378)^(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x383 = 5781LLU;
	int32_t t95 = -631027;

	t95 = ((x381==x382)^(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x387 = 95052576U;
	int64_t x388 = INT64_MIN;
	int32_t t96 = 850355;

	t96 = ((x385==x386)^(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 57U;
	uint64_t x390 = 10276LLU;
	static volatile int16_t x391 = INT16_MAX;
	volatile int32_t t97 = 6;

	t97 = ((x389==x390)^(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 13886514341517054LL;
	int16_t x394 = INT16_MAX;
	int64_t x395 = 64771429590LL;
	int16_t x396 = -1;
	int32_t t98 = 872562;

	t98 = ((x393==x394)^(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int8_t x398 = 3;
	int8_t x399 = INT8_MAX;
	volatile int32_t t99 = 64276;

	t99 = ((x397==x398)^(x399<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

