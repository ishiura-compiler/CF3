#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = -1;
int16_t x7 = INT16_MIN;
static int64_t x9 = INT64_MIN;
uint8_t x11 = 3U;
volatile uint16_t x12 = 6U;
static uint16_t x14 = UINT16_MAX;
int64_t x18 = INT64_MIN;
int64_t x20 = INT64_MIN;
int32_t t4 = 103474252;
int16_t x21 = INT16_MAX;
volatile int32_t x22 = -1;
int64_t x24 = INT64_MIN;
int8_t x27 = -1;
int64_t x34 = -1LL;
static int64_t x51 = INT64_MAX;
volatile int32_t t12 = -1;
int16_t x57 = -1;
static int8_t x61 = 1;
int16_t x70 = INT16_MIN;
uint16_t x72 = 4541U;
static uint32_t x75 = UINT32_MAX;
int64_t x80 = INT64_MIN;
int32_t t22 = -14982;
uint64_t x98 = 67LLU;
int16_t x106 = INT16_MIN;
int16_t x107 = -1;
int64_t x112 = INT64_MAX;
static volatile int32_t t29 = 0;
volatile uint32_t x122 = 192598863U;
int32_t x129 = INT32_MIN;
int64_t x141 = -18846654LL;
static volatile int32_t t35 = -1;
static uint8_t x147 = 16U;
uint64_t x157 = 27LLU;
static uint8_t x167 = 3U;
int32_t x168 = -22678;
int16_t x170 = INT16_MIN;
static int32_t x175 = -1;
volatile int32_t t44 = -178542080;
uint16_t x184 = 0U;
uint64_t x186 = UINT64_MAX;
volatile int32_t t46 = 54;
uint8_t x191 = UINT8_MAX;
int32_t t48 = 242988211;
volatile uint64_t x206 = UINT64_MAX;
int8_t x212 = INT8_MIN;
int8_t x220 = INT8_MIN;
int32_t x228 = INT32_MIN;
volatile int32_t t56 = -712284;
int64_t x230 = 109082087227LL;
uint64_t x234 = UINT64_MAX;
int64_t x236 = INT64_MIN;
int16_t x240 = INT16_MIN;
uint16_t x245 = 127U;
uint8_t x248 = UINT8_MAX;
int16_t x249 = INT16_MIN;
static uint32_t x263 = UINT32_MAX;
int32_t t65 = 1372;
volatile uint8_t x265 = 14U;
int32_t t66 = -196;
volatile int32_t t68 = 171417807;
uint8_t x287 = 125U;
int16_t x290 = INT16_MAX;
int16_t x292 = 1;
volatile uint8_t x293 = UINT8_MAX;
uint32_t x303 = UINT32_MAX;
int16_t x304 = -1;
int8_t x306 = INT8_MAX;
uint16_t x308 = 216U;
int32_t t77 = 14886;
int8_t x314 = -4;
int16_t x320 = 1404;
uint32_t x322 = 0U;
int16_t x325 = 63;
volatile int16_t x331 = -1;
int32_t x339 = -1;
int32_t t84 = 1;
uint16_t x343 = UINT16_MAX;
static int32_t t86 = 434;
uint16_t x361 = 4756U;
int32_t t91 = -1241350;
volatile uint32_t x375 = UINT32_MAX;
volatile int32_t t93 = 236826966;
volatile int32_t t94 = 3001364;
int64_t x381 = INT64_MIN;
uint64_t x386 = 95505332LLU;
static int8_t x391 = 5;
volatile int8_t x392 = INT8_MIN;
uint16_t x393 = 471U;
volatile int16_t x395 = -1;
uint32_t x397 = 112998173U;


void f0(void) {
	static uint16_t x1 = 15255U;
	int32_t x2 = INT32_MIN;
	static int8_t x3 = INT8_MIN;
	volatile int32_t t0 = 574;

	t0 = ((x1^x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	uint32_t x6 = 170488254U;
	static volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = 798;

	t1 = ((x5^x6)==(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MAX;
	int32_t t2 = -16358350;

	t2 = ((x9^x10)==(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 1922;

	t3 = ((x13^x14)==(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 54;
	volatile int64_t x19 = INT64_MAX;

	t4 = ((x17^x18)==(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x23 = 95U;
	static int32_t t5 = -1039552064;

	t5 = ((x21^x22)==(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static uint32_t x26 = 47U;
	int64_t x28 = -1LL;
	volatile int32_t t6 = -25370626;

	t6 = ((x25^x26)==(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 662U;
	int32_t x30 = INT32_MAX;
	static volatile uint32_t x31 = 120U;
	uint16_t x32 = 144U;
	int32_t t7 = 243141;

	t7 = ((x29^x30)==(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 29U;
	volatile int64_t x35 = INT64_MIN;
	volatile int16_t x36 = INT16_MAX;
	static int32_t t8 = 42813;

	t8 = ((x33^x34)==(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 0;
	volatile int32_t x38 = -91;
	int16_t x39 = 51;
	volatile uint8_t x40 = 123U;
	volatile int32_t t9 = -239474789;

	t9 = ((x37^x38)==(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 561692071785822LLU;
	int64_t x42 = INT64_MAX;
	static int8_t x43 = -54;
	int64_t x44 = -1LL;
	static int32_t t10 = 1845913;

	t10 = ((x41^x42)==(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 48253083245073LLU;
	int32_t x46 = 1021888;
	int32_t x47 = -235;
	static int8_t x48 = -52;
	static int32_t t11 = -23854;

	t11 = ((x45^x46)==(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 15U;
	volatile int16_t x50 = -1;
	volatile uint64_t x52 = UINT64_MAX;

	t12 = ((x49^x50)==(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -2;
	int32_t x54 = 0;
	int8_t x55 = -1;
	uint32_t x56 = 452122874U;
	int32_t t13 = 0;

	t13 = ((x53^x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MAX;
	volatile int32_t x59 = INT32_MIN;
	volatile int8_t x60 = -1;
	volatile int32_t t14 = 1;

	t14 = ((x57^x58)==(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x62 = INT32_MIN;
	static int16_t x63 = 14;
	uint64_t x64 = 64897431943419560LLU;
	int32_t t15 = 7901990;

	t15 = ((x61^x62)==(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 24U;
	int64_t x66 = -1LL;
	uint8_t x67 = 1U;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = -3010402;

	t16 = ((x65^x66)==(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 178707628;
	uint32_t x71 = UINT32_MAX;
	volatile int32_t t17 = -60693070;

	t17 = ((x69^x70)==(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 30;
	static int16_t x74 = -1;
	int16_t x76 = -3;
	volatile int32_t t18 = -34;

	t18 = ((x73^x74)==(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int8_t x78 = 1;
	volatile int8_t x79 = -1;
	int32_t t19 = -546879149;

	t19 = ((x77^x78)==(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 262111480LLU;
	int32_t x82 = -32177280;
	uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 27301;

	t20 = ((x81^x82)==(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 9;
	static int8_t x86 = 5;
	int16_t x87 = 1;
	int8_t x88 = 3;
	volatile int32_t t21 = 61972;

	t21 = ((x85^x86)==(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 4507U;
	int32_t x90 = INT32_MAX;
	static int64_t x91 = INT64_MAX;
	int64_t x92 = INT64_MIN;

	t22 = ((x89^x90)==(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MAX;
	static int16_t x94 = 2;
	int16_t x95 = INT16_MIN;
	static int32_t x96 = -1;
	volatile int32_t t23 = 6;

	t23 = ((x93^x94)==(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	volatile int32_t x99 = INT32_MIN;
	volatile uint32_t x100 = 56315175U;
	int32_t t24 = -6;

	t24 = ((x97^x98)==(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = 87271LL;
	static volatile int64_t x102 = -1LL;
	uint64_t x103 = 19697456920420LLU;
	volatile int32_t x104 = INT32_MAX;
	volatile int32_t t25 = 6;

	t25 = ((x101^x102)==(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 559779820;

	t26 = ((x105^x106)==(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	static int64_t x110 = INT64_MIN;
	volatile int16_t x111 = -1;
	int32_t t27 = 809617195;

	t27 = ((x109^x110)==(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	uint64_t x114 = 8921321443522LLU;
	volatile uint8_t x115 = 13U;
	int32_t x116 = -1;
	static volatile int32_t t28 = 3342951;

	t28 = ((x113^x114)==(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -86;
	static volatile int8_t x118 = -1;
	int64_t x119 = -475LL;
	uint64_t x120 = UINT64_MAX;

	t29 = ((x117^x118)==(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 128;
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t30 = 1745;

	t30 = ((x121^x122)==(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -526455512;
	uint16_t x126 = 8617U;
	int16_t x127 = 0;
	int64_t x128 = 97261372LL;
	int32_t t31 = 13328;

	t31 = ((x125^x126)==(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = UINT8_MAX;
	static volatile int16_t x131 = INT16_MAX;
	static uint16_t x132 = 17390U;
	int32_t t32 = -500444007;

	t32 = ((x129^x130)==(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	volatile int16_t x135 = -1;
	int32_t x136 = 1179257;
	static volatile int32_t t33 = 8;

	t33 = ((x133^x134)==(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	uint32_t x138 = 1480598U;
	volatile int32_t x139 = INT32_MIN;
	int8_t x140 = -1;
	int32_t t34 = -13465166;

	t34 = ((x137^x138)==(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = -1;
	int16_t x143 = INT16_MAX;
	volatile uint8_t x144 = UINT8_MAX;

	t35 = ((x141^x142)==(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint16_t x146 = UINT16_MAX;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = 45601798;

	t36 = ((x145^x146)==(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	static uint64_t x150 = 15300472573293682LLU;
	int32_t x151 = INT32_MIN;
	int32_t x152 = 0;
	int32_t t37 = -461610004;

	t37 = ((x149^x150)==(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 471U;
	static int8_t x154 = 0;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;
	static int32_t t38 = 624322;

	t38 = ((x153^x154)==(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x158 = 1U;
	int8_t x159 = -1;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = -614368891;

	t39 = ((x157^x158)==(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 25U;
	volatile int64_t x162 = INT64_MAX;
	int8_t x163 = INT8_MIN;
	static volatile int8_t x164 = INT8_MAX;
	int32_t t40 = 109758618;

	t40 = ((x161^x162)==(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = 195;
	int32_t t41 = 329275;

	t41 = ((x165^x166)==(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 1;
	static volatile int16_t x171 = -1;
	int32_t x172 = -1;
	int32_t t42 = 522;

	t42 = ((x169^x170)==(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -13;
	static uint8_t x174 = 2U;
	uint32_t x176 = 1U;
	volatile int32_t t43 = 0;

	t43 = ((x173^x174)==(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 2165636171020LL;
	volatile int64_t x178 = INT64_MAX;
	volatile int32_t x179 = INT32_MAX;
	static uint8_t x180 = 11U;

	t44 = ((x177^x178)==(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	volatile int32_t x182 = INT32_MIN;
	volatile int8_t x183 = INT8_MIN;
	volatile int32_t t45 = 8927;

	t45 = ((x181^x182)==(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 78U;
	uint32_t x187 = 0U;
	uint16_t x188 = 27112U;

	t46 = ((x185^x186)==(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 710219230LLU;
	static int32_t x190 = -1;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t47 = -27697;

	t47 = ((x189^x190)==(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int64_t x194 = 2798420061731LL;
	uint32_t x195 = 1409430416U;
	static int8_t x196 = 41;

	t48 = ((x193^x194)==(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	uint8_t x198 = 2U;
	uint32_t x199 = 119751383U;
	int32_t x200 = -1;
	int32_t t49 = -39254;

	t49 = ((x197^x198)==(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 2U;
	int64_t x202 = INT64_MIN;
	volatile uint8_t x203 = 39U;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 14;

	t50 = ((x201^x202)==(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	volatile uint8_t x207 = 1U;
	static uint64_t x208 = 11554456560LLU;
	static volatile int32_t t51 = -638;

	t51 = ((x205^x206)==(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static int32_t x210 = -1;
	int64_t x211 = INT64_MAX;
	volatile int32_t t52 = 3;

	t52 = ((x209^x210)==(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	uint32_t x214 = 15U;
	volatile int32_t x215 = -1;
	static int32_t x216 = -3;
	int32_t t53 = -450158;

	t53 = ((x213^x214)==(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = -13;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = 91;
	int32_t t54 = 22968418;

	t54 = ((x217^x218)==(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 5904988U;
	int16_t x222 = INT16_MIN;
	int32_t x223 = 1;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -1046065;

	t55 = ((x221^x222)==(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -1;
	volatile int32_t x226 = INT32_MIN;
	static int16_t x227 = INT16_MAX;

	t56 = ((x225^x226)==(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -102;
	static volatile uint64_t x231 = 29217LLU;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t57 = 759144671;

	t57 = ((x229^x230)==(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	uint16_t x235 = 2910U;
	static int32_t t58 = -488654;

	t58 = ((x233^x234)==(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 545562109961742LL;
	int32_t x238 = 3157895;
	int32_t x239 = INT32_MIN;
	volatile int32_t t59 = 0;

	t59 = ((x237^x238)==(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = 58U;
	uint16_t x244 = 70U;
	volatile int32_t t60 = 0;

	t60 = ((x241^x242)==(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x246 = INT64_MAX;
	static volatile int16_t x247 = -53;
	int32_t t61 = -7076;

	t61 = ((x245^x246)==(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -261;
	static volatile int64_t x251 = INT64_MIN;
	int8_t x252 = 8;
	int32_t t62 = 123100803;

	t62 = ((x249^x250)==(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 2U;
	int8_t x254 = INT8_MIN;
	uint16_t x255 = 2774U;
	int16_t x256 = 2170;
	int32_t t63 = 0;

	t63 = ((x253^x254)==(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MAX;
	int8_t x258 = 3;
	static int8_t x259 = -1;
	static uint8_t x260 = 7U;
	static volatile int32_t t64 = -5492952;

	t64 = ((x257^x258)==(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 827669740933568597LLU;
	static uint64_t x262 = 2LLU;
	static volatile int8_t x264 = -1;

	t65 = ((x261^x262)==(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = -1;
	uint64_t x267 = 361881837737223994LLU;
	volatile uint16_t x268 = 875U;

	t66 = ((x265^x266)==(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = 1248;
	static uint32_t x270 = 18U;
	uint32_t x271 = 204U;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 2005421;

	t67 = ((x269^x270)==(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MIN;
	volatile int64_t x275 = -1LL;
	static int32_t x276 = -1409916;

	t68 = ((x273^x274)==(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	volatile uint32_t x278 = UINT32_MAX;
	static int32_t x279 = -1;
	static volatile int32_t x280 = -15;
	static int32_t t69 = 29917925;

	t69 = ((x277^x278)==(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 502662242LL;
	volatile uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MAX;
	volatile int32_t t70 = 97019;

	t70 = ((x281^x282)==(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x286 = INT8_MIN;
	volatile uint8_t x288 = 111U;
	volatile int32_t t71 = 56306438;

	t71 = ((x285^x286)==(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 12035408U;
	int16_t x291 = 1473;
	volatile int32_t t72 = 102;

	t72 = ((x289^x290)==(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x294 = -1;
	volatile int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MAX;
	volatile int32_t t73 = 4;

	t73 = ((x293^x294)==(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MIN;
	int16_t x299 = -1;
	volatile int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 1481;

	t74 = ((x297^x298)==(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = -1LL;
	int32_t t75 = -52242962;

	t75 = ((x301^x302)==(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 59254115014LLU;
	int16_t x307 = -1;
	volatile int32_t t76 = 6231060;

	t76 = ((x305^x306)==(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = 49;
	uint8_t x310 = UINT8_MAX;
	int64_t x311 = -6387LL;
	uint32_t x312 = 3453625U;

	t77 = ((x309^x310)==(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -25267LL;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;
	static volatile int32_t t78 = -16326601;

	t78 = ((x313^x314)==(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -1LL;
	static int64_t x318 = INT64_MIN;
	static int16_t x319 = INT16_MIN;
	volatile int32_t t79 = 331;

	t79 = ((x317^x318)==(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -4;
	uint16_t x323 = UINT16_MAX;
	int32_t x324 = 0;
	volatile int32_t t80 = -1;

	t80 = ((x321^x322)==(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = -16078;
	int8_t x327 = 49;
	volatile int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 62;

	t81 = ((x325^x326)==(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = -381;
	volatile int16_t x330 = -1;
	static volatile int8_t x332 = 1;
	static volatile int32_t t82 = 1469;

	t82 = ((x329^x330)==(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MAX;
	volatile int64_t x335 = INT64_MIN;
	uint8_t x336 = 9U;
	volatile int32_t t83 = 22;

	t83 = ((x333^x334)==(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -1;
	volatile int32_t x338 = -1;
	uint64_t x340 = 5479470933278LLU;

	t84 = ((x337^x338)==(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	static uint64_t x342 = 418280LLU;
	uint64_t x344 = UINT64_MAX;
	int32_t t85 = 2;

	t85 = ((x341^x342)==(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 30013;
	int8_t x346 = -1;
	volatile int32_t x347 = INT32_MIN;
	volatile int32_t x348 = INT32_MIN;

	t86 = ((x345^x346)==(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	volatile uint16_t x350 = 235U;
	static volatile uint16_t x351 = UINT16_MAX;
	static int32_t x352 = INT32_MAX;
	int32_t t87 = -24778772;

	t87 = ((x349^x350)==(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 717U;
	int32_t x355 = INT32_MIN;
	int8_t x356 = 1;
	int32_t t88 = -16;

	t88 = ((x353^x354)==(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	volatile int16_t x358 = INT16_MAX;
	int16_t x359 = -339;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = 353805;

	t89 = ((x357^x358)==(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = 2LLU;
	int32_t x363 = -20519705;
	uint8_t x364 = 31U;
	volatile int32_t t90 = 46;

	t90 = ((x361^x362)==(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	int16_t x366 = INT16_MIN;
	static int32_t x367 = -1;
	int64_t x368 = 12359616736LL;

	t91 = ((x365^x366)==(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile int8_t x370 = INT8_MIN;
	uint64_t x371 = 21396873031306674LLU;
	static uint64_t x372 = 1945822806916714804LLU;
	int32_t t92 = -26;

	t92 = ((x369^x370)==(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	uint32_t x374 = UINT32_MAX;
	int8_t x376 = -36;

	t93 = ((x373^x374)==(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 6U;
	int64_t x378 = -8375323889810LL;
	volatile int16_t x379 = INT16_MAX;
	int8_t x380 = INT8_MIN;

	t94 = ((x377^x378)==(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = 40182;
	int32_t x383 = INT32_MIN;
	int8_t x384 = -1;
	int32_t t95 = -151;

	t95 = ((x381^x382)==(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t96 = 2268;

	t96 = ((x385^x386)==(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 5U;
	uint32_t x390 = UINT32_MAX;
	volatile int32_t t97 = 11846747;

	t97 = ((x389^x390)==(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MIN;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 16056;

	t98 = ((x393^x394)==(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MAX;
	int32_t x399 = -1;
	int32_t x400 = -1;
	volatile int32_t t99 = -14;

	t99 = ((x397^x398)==(x399<=x400));

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

