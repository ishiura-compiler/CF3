#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 174098;
int8_t x12 = INT8_MIN;
volatile int32_t t2 = 23157;
static volatile int32_t x16 = -1;
static uint8_t x19 = UINT8_MAX;
static uint32_t x21 = 12U;
int64_t x23 = INT64_MIN;
int32_t x24 = -262263058;
int16_t x31 = -14;
int32_t x32 = -1;
volatile int64_t x37 = -7LL;
static volatile int32_t t9 = 976132421;
int8_t x41 = INT8_MIN;
int32_t t11 = -6496013;
volatile int32_t t13 = 1;
uint16_t x59 = 2350U;
int32_t x63 = INT32_MAX;
uint32_t x68 = UINT32_MAX;
static uint8_t x75 = 0U;
volatile int32_t t18 = -27581211;
uint32_t x80 = UINT32_MAX;
volatile int64_t x86 = INT64_MAX;
static volatile int8_t x93 = INT8_MAX;
int8_t x94 = -16;
int16_t x95 = -2042;
int32_t t23 = -146665;
int64_t x97 = INT64_MIN;
uint8_t x101 = UINT8_MAX;
uint8_t x104 = UINT8_MAX;
uint16_t x105 = 1966U;
volatile uint16_t x109 = 683U;
uint16_t x110 = 2655U;
int16_t x114 = INT16_MIN;
static int32_t x116 = INT32_MAX;
volatile int32_t t28 = -185;
uint64_t x124 = 23LLU;
static int64_t x127 = INT64_MAX;
static int32_t x129 = -153341546;
uint32_t x133 = 165470255U;
uint8_t x134 = 1U;
volatile int32_t t33 = 97077321;
int64_t x143 = INT64_MAX;
int16_t x146 = INT16_MIN;
uint8_t x147 = 21U;
volatile int32_t t36 = -5336940;
int8_t x153 = -26;
uint16_t x160 = UINT16_MAX;
int16_t x162 = -1;
int8_t x166 = -1;
int8_t x172 = 59;
uint16_t x173 = 84U;
int8_t x175 = -1;
static uint16_t x178 = 1784U;
volatile int8_t x180 = INT8_MIN;
int32_t x197 = INT32_MIN;
static uint8_t x199 = 44U;
int16_t x204 = 1;
uint8_t x206 = UINT8_MAX;
int8_t x208 = INT8_MIN;
volatile int32_t x210 = -1;
int64_t x212 = INT64_MIN;
int32_t x213 = -746372;
int8_t x215 = 0;
volatile int32_t t53 = 120;
volatile int32_t t54 = 3037;
static volatile int64_t x226 = 2097LL;
int64_t x232 = -3053346340239484975LL;
int32_t x236 = INT32_MIN;
volatile int32_t t58 = -15093482;
volatile int32_t x239 = INT32_MIN;
volatile int32_t t59 = -1126;
int32_t t60 = 205549758;
int16_t x246 = -1;
uint16_t x251 = 0U;
uint32_t x252 = 12U;
int64_t x256 = INT64_MAX;
static uint64_t x261 = 34094915430LLU;
int16_t x262 = INT16_MIN;
int16_t x264 = INT16_MIN;
uint16_t x265 = 14586U;
int64_t x272 = -1LL;
int64_t x273 = INT64_MAX;
int16_t x274 = 282;
int32_t x293 = 93;
volatile int64_t x297 = 96365939078100LL;
static int32_t t76 = -114;
int32_t x318 = -284085093;
volatile int32_t t79 = -752798;
uint32_t x321 = 390993U;
int16_t x323 = -1;
int64_t x324 = -7520851908654863LL;
volatile uint32_t x328 = UINT32_MAX;
uint16_t x330 = 2621U;
int32_t x335 = 0;
uint8_t x337 = 7U;
volatile int32_t t84 = -78316027;
int64_t x342 = INT64_MIN;
volatile int64_t x349 = -1LL;
volatile int32_t x351 = -30153484;
int32_t t87 = 2410;
volatile int16_t x354 = INT16_MIN;
static volatile int32_t t88 = -461500;
int16_t x359 = INT16_MAX;
static uint32_t x361 = 4064400U;
int64_t x364 = INT64_MIN;
int32_t t90 = 1190;
int16_t x367 = -1;
uint64_t x376 = 183LLU;
static int32_t t93 = -186;
int32_t x387 = INT32_MIN;
static volatile int32_t t96 = 788901630;
volatile uint8_t x396 = UINT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint16_t x2 = 4U;
	int64_t x3 = INT64_MAX;
	volatile int64_t x4 = 1481880358LL;

	t0 = ((x1<=x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1U;
	volatile int64_t x6 = 397360060169463241LL;
	int16_t x7 = 27;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = -781784575;

	t1 = ((x5<=x6)<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -11342228865LL;
	int64_t x10 = INT64_MIN;
	static int64_t x11 = -1LL;

	t2 = ((x9<=x10)<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint16_t x14 = 36U;
	volatile uint64_t x15 = UINT64_MAX;
	static volatile int32_t t3 = 171708985;

	t3 = ((x13<=x14)<(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	int8_t x18 = -7;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 1116;

	t4 = ((x17<=x18)<(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -9312635LL;
	int32_t t5 = 0;

	t5 = ((x21<=x22)<(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -80;
	uint16_t x26 = 23314U;
	static int32_t x27 = 6;
	static uint64_t x28 = 111172LLU;
	volatile int32_t t6 = -5;

	t6 = ((x25<=x26)<(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x30 = 0U;
	int32_t t7 = -66;

	t7 = ((x29<=x30)<(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	int32_t x35 = -7303;
	int64_t x36 = 191261854513LL;
	volatile int32_t t8 = -6698;

	t8 = ((x33<=x34)<(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x38 = -609;
	volatile int32_t x39 = INT32_MAX;
	static volatile int64_t x40 = INT64_MIN;

	t9 = ((x37<=x38)<(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -450998442029059LL;
	int16_t x43 = -1;
	uint8_t x44 = UINT8_MAX;
	static volatile int32_t t10 = 994147573;

	t10 = ((x41<=x42)<(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -52603694;
	int32_t x48 = INT32_MIN;

	t11 = ((x45<=x46)<(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 33U;
	volatile int8_t x50 = 55;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MIN;
	int32_t t12 = -327536;

	t12 = ((x49<=x50)<(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	int16_t x54 = INT16_MIN;
	volatile uint32_t x55 = UINT32_MAX;
	volatile uint64_t x56 = UINT64_MAX;

	t13 = ((x53<=x54)<(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 2339353341102516254LLU;
	static uint64_t x58 = 2486638740LLU;
	int64_t x60 = -335636440358LL;
	volatile int32_t t14 = 238630955;

	t14 = ((x57<=x58)<(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 939U;
	int32_t x62 = -163;
	static uint16_t x64 = 8U;
	volatile int32_t t15 = -2945;

	t15 = ((x61<=x62)<(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile int64_t x66 = -1LL;
	volatile int8_t x67 = -1;
	volatile int32_t t16 = -172293;

	t16 = ((x65<=x66)<(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1392847207361820600LL;
	volatile int64_t x70 = INT64_MIN;
	static int8_t x71 = 49;
	int16_t x72 = 63;
	static volatile int32_t t17 = 53042;

	t17 = ((x69<=x70)<(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 9U;
	volatile uint32_t x74 = 92U;
	volatile int8_t x76 = 1;

	t18 = ((x73<=x74)<(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int16_t x78 = INT16_MAX;
	int8_t x79 = INT8_MAX;
	int32_t t19 = -28212;

	t19 = ((x77<=x78)<(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	static uint8_t x82 = UINT8_MAX;
	int16_t x83 = INT16_MAX;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = -28255214;

	t20 = ((x81<=x82)<(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x87 = -43;
	int64_t x88 = INT64_MIN;
	static volatile int32_t t21 = 0;

	t21 = ((x85<=x86)<(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static int32_t x90 = INT32_MIN;
	static uint16_t x91 = 7768U;
	uint32_t x92 = 1208U;
	int32_t t22 = 7991704;

	t22 = ((x89<=x90)<(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x96 = 861961991U;

	t23 = ((x93<=x94)<(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -3560;
	int32_t x99 = INT32_MIN;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 1;

	t24 = ((x97<=x98)<(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 0;
	int32_t x103 = INT32_MIN;
	volatile int32_t t25 = -849539;

	t25 = ((x101<=x102)<(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x106 = 94U;
	volatile uint64_t x107 = UINT64_MAX;
	volatile uint64_t x108 = 20601726LLU;
	volatile int32_t t26 = -903556;

	t26 = ((x105<=x106)<(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x111 = 22U;
	int32_t x112 = INT32_MIN;
	int32_t t27 = -8211663;

	t27 = ((x109<=x110)<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 105U;
	int16_t x115 = -1;

	t28 = ((x113<=x114)<(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 139141993404519152LLU;
	int8_t x118 = 0;
	int8_t x119 = INT8_MAX;
	int8_t x120 = 2;
	volatile int32_t t29 = -480;

	t29 = ((x117<=x118)<(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = 53;
	int64_t x123 = -1LL;
	int32_t t30 = -235;

	t30 = ((x121<=x122)<(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	volatile int16_t x126 = -1;
	static int16_t x128 = -1;
	int32_t t31 = 0;

	t31 = ((x125<=x126)<(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x130 = 2U;
	static uint8_t x131 = 123U;
	int64_t x132 = -1LL;
	int32_t t32 = -132753849;

	t32 = ((x129<=x130)<(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x135 = 5U;
	volatile uint32_t x136 = 220U;

	t33 = ((x133<=x134)<(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	int16_t x138 = -1;
	volatile uint64_t x139 = 56343928LLU;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 152559;

	t34 = ((x137<=x138)<(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	int64_t x142 = 116951625085LL;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -1287;

	t35 = ((x141<=x142)<(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	uint64_t x148 = 180385939LLU;

	t36 = ((x145<=x146)<(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	volatile uint16_t x150 = 2U;
	int8_t x151 = -45;
	int32_t x152 = 1;
	static volatile int32_t t37 = 55093040;

	t37 = ((x149<=x150)<(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x154 = 1432U;
	static volatile int16_t x155 = -1;
	static volatile uint16_t x156 = 2017U;
	int32_t t38 = 29664472;

	t38 = ((x153<=x154)<(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -6653813458647LL;
	volatile int8_t x158 = -1;
	volatile int8_t x159 = -1;
	volatile int32_t t39 = 4;

	t39 = ((x157<=x158)<(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 288559804651LLU;
	uint32_t x163 = 2631495U;
	static int32_t x164 = INT32_MIN;
	static int32_t t40 = 2194443;

	t40 = ((x161<=x162)<(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MAX;
	int8_t x167 = INT8_MAX;
	int16_t x168 = -1;
	volatile int32_t t41 = -2988;

	t41 = ((x165<=x166)<(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	int8_t x170 = 0;
	uint64_t x171 = 38LLU;
	static volatile int32_t t42 = -836;

	t42 = ((x169<=x170)<(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = -59;
	volatile uint16_t x176 = 288U;
	volatile int32_t t43 = 1;

	t43 = ((x173<=x174)<(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	static int32_t x179 = 194540500;
	volatile int32_t t44 = 3317;

	t44 = ((x177<=x178)<(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -61839LL;
	uint16_t x182 = 28512U;
	uint16_t x183 = 1294U;
	volatile int16_t x184 = INT16_MAX;
	int32_t t45 = -2;

	t45 = ((x181<=x182)<(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = 24U;
	volatile int8_t x186 = -1;
	volatile uint64_t x187 = 38336548565455LLU;
	static uint8_t x188 = 50U;
	volatile int32_t t46 = 8208975;

	t46 = ((x185<=x186)<(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -2287;
	static int16_t x190 = 2014;
	uint32_t x191 = UINT32_MAX;
	static int64_t x192 = 22LL;
	volatile int32_t t47 = -2382;

	t47 = ((x189<=x190)<(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	uint32_t x194 = 117167U;
	static uint32_t x195 = UINT32_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t48 = -118;

	t48 = ((x193<=x194)<(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x198 = 9U;
	int64_t x200 = -131241830LL;
	volatile int32_t t49 = 1;

	t49 = ((x197<=x198)<(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -1498;
	int32_t x202 = -1;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t50 = -20292478;

	t50 = ((x201<=x202)<(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int16_t x207 = INT16_MAX;
	volatile int32_t t51 = -30127;

	t51 = ((x205<=x206)<(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MAX;
	static int16_t x211 = INT16_MIN;
	volatile int32_t t52 = -586987;

	t52 = ((x209<=x210)<(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	static volatile int8_t x216 = -1;

	t53 = ((x213<=x214)<(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int16_t x218 = INT16_MIN;
	static int32_t x219 = -1;
	int8_t x220 = -2;

	t54 = ((x217<=x218)<(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x222 = UINT32_MAX;
	uint32_t x223 = 3U;
	int32_t x224 = 12643;
	int32_t t55 = -14;

	t55 = ((x221<=x222)<(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int32_t x227 = INT32_MIN;
	static int32_t x228 = -1;
	volatile int32_t t56 = 81965;

	t56 = ((x225<=x226)<(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = UINT32_MAX;
	uint64_t x230 = 418LLU;
	int16_t x231 = INT16_MIN;
	static int32_t t57 = -113;

	t57 = ((x229<=x230)<(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	static uint8_t x234 = UINT8_MAX;
	uint64_t x235 = 427694166892512615LLU;

	t58 = ((x233<=x234)<(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -1;
	static int8_t x238 = INT8_MIN;
	volatile int16_t x240 = 8;

	t59 = ((x237<=x238)<(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MAX;
	volatile uint8_t x243 = 18U;
	static int32_t x244 = -66574;

	t60 = ((x241<=x242)<(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	int16_t x247 = 11;
	volatile int64_t x248 = INT64_MAX;
	volatile int32_t t61 = -142;

	t61 = ((x245<=x246)<(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 0U;
	uint8_t x250 = 1U;
	volatile int32_t t62 = 103612902;

	t62 = ((x249<=x250)<(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = 9U;
	uint16_t x255 = 7U;
	volatile int32_t t63 = 76;

	t63 = ((x253<=x254)<(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -69;
	int64_t x258 = INT64_MIN;
	int64_t x259 = -3840986560971529LL;
	int32_t x260 = -1888;
	static int32_t t64 = 6825764;

	t64 = ((x257<=x258)<(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x263 = -1092016729018604576LL;
	static volatile int32_t t65 = -668019795;

	t65 = ((x261<=x262)<(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	static volatile int64_t x268 = -48982LL;
	static int32_t t66 = -82246;

	t66 = ((x265<=x266)<(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	static int64_t x270 = -6221LL;
	uint16_t x271 = 52U;
	volatile int32_t t67 = 3;

	t67 = ((x269<=x270)<(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x275 = -36000;
	int64_t x276 = 4164384LL;
	volatile int32_t t68 = -1;

	t68 = ((x273<=x274)<(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = 20;
	static int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MAX;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t69 = -27114550;

	t69 = ((x277<=x278)<(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	static volatile uint64_t x282 = UINT64_MAX;
	uint16_t x283 = 97U;
	int32_t x284 = INT32_MIN;
	int32_t t70 = 22;

	t70 = ((x281<=x282)<(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = -1;
	int16_t x287 = 20;
	int32_t x288 = -260;
	volatile int32_t t71 = -650886;

	t71 = ((x285<=x286)<(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 93;
	volatile uint16_t x290 = 1U;
	uint16_t x291 = UINT16_MAX;
	volatile int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 7895;

	t72 = ((x289<=x290)<(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 17785U;
	int32_t x295 = 36;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = 28;

	t73 = ((x293<=x294)<(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MIN;
	int16_t x299 = -39;
	volatile int32_t x300 = -6338543;
	volatile int32_t t74 = -426085;

	t74 = ((x297<=x298)<(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 184;
	static int64_t x302 = INT64_MIN;
	int32_t x303 = 108352248;
	uint8_t x304 = 4U;
	static volatile int32_t t75 = 1;

	t75 = ((x301<=x302)<(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	volatile uint64_t x306 = UINT64_MAX;
	uint16_t x307 = UINT16_MAX;
	uint32_t x308 = 26355113U;

	t76 = ((x305<=x306)<(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 6U;
	int32_t x310 = INT32_MAX;
	int8_t x311 = -2;
	int8_t x312 = -1;
	volatile int32_t t77 = 98;

	t77 = ((x309<=x310)<(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 1;
	int32_t x314 = -1;
	static uint32_t x315 = 127944960U;
	uint16_t x316 = 121U;
	int32_t t78 = 341886765;

	t78 = ((x313<=x314)<(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 11458474722LL;
	int16_t x319 = -1;
	static int16_t x320 = -1;

	t79 = ((x317<=x318)<(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x322 = 15U;
	volatile int32_t t80 = -65422;

	t80 = ((x321<=x322)<(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -15;
	int16_t x326 = -13;
	int16_t x327 = -1;
	volatile int32_t t81 = -69;

	t81 = ((x325<=x326)<(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 1;
	static volatile uint32_t x331 = 3342U;
	static uint64_t x332 = UINT64_MAX;
	static volatile int32_t t82 = 12656;

	t82 = ((x329<=x330)<(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	static uint16_t x334 = UINT16_MAX;
	int8_t x336 = -5;
	int32_t t83 = -3521;

	t83 = ((x333<=x334)<(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MIN;
	uint8_t x339 = 15U;
	static volatile int16_t x340 = 153;

	t84 = ((x337<=x338)<(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	volatile int64_t x343 = INT64_MIN;
	uint32_t x344 = 0U;
	volatile int32_t t85 = -377220;

	t85 = ((x341<=x342)<(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = 4U;
	int64_t x346 = INT64_MIN;
	static uint8_t x347 = 2U;
	uint16_t x348 = 1374U;
	int32_t t86 = -3646041;

	t86 = ((x345<=x346)<(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 59U;
	int32_t x352 = INT32_MAX;

	t87 = ((x349<=x350)<(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	uint8_t x355 = UINT8_MAX;
	static uint64_t x356 = 29LLU;

	t88 = ((x353<=x354)<(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -6549926348055LL;
	static int64_t x358 = INT64_MIN;
	static int8_t x360 = INT8_MIN;
	int32_t t89 = 76598;

	t89 = ((x357<=x358)<(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = -529;
	int16_t x363 = INT16_MIN;

	t90 = ((x361<=x362)<(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	static int64_t x366 = -1LL;
	volatile int32_t x368 = 1;
	int32_t t91 = 489503;

	t91 = ((x365<=x366)<(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	uint32_t x370 = 863U;
	static uint32_t x371 = UINT32_MAX;
	uint32_t x372 = 2396U;
	static int32_t t92 = -799413;

	t92 = ((x369<=x370)<(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 347U;
	int32_t x374 = INT32_MIN;
	int64_t x375 = 9289460878626680LL;

	t93 = ((x373<=x374)<(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x377 = -1;
	int32_t x378 = INT32_MAX;
	static int64_t x379 = INT64_MIN;
	volatile uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = 247;

	t94 = ((x377<=x378)<(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 16617537;
	int8_t x382 = 14;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = 3772692639982LLU;
	int32_t t95 = -179;

	t95 = ((x381<=x382)<(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = 40661000;
	static int64_t x386 = INT64_MAX;
	uint64_t x388 = UINT64_MAX;

	t96 = ((x385<=x386)<(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = 17U;
	uint16_t x390 = UINT16_MAX;
	uint8_t x391 = UINT8_MAX;
	volatile uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = 0;

	t97 = ((x389<=x390)<(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -908;
	volatile int16_t x394 = -10;
	static int8_t x395 = -1;
	int32_t t98 = 2445974;

	t98 = ((x393<=x394)<(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	static uint64_t x398 = 298136151008LLU;
	volatile int64_t x399 = INT64_MIN;
	volatile int8_t x400 = INT8_MIN;
	static volatile int32_t t99 = -872;

	t99 = ((x397<=x398)<(x399<=x400));

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

