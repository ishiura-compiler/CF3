#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t3 = 8;
int8_t x19 = -3;
int32_t t4 = -2876;
int32_t x23 = INT32_MIN;
uint32_t x24 = 247249U;
static uint16_t x26 = 2669U;
int32_t t6 = 0;
int8_t x31 = -1;
uint16_t x36 = 1U;
int32_t t9 = -2307263;
volatile int64_t x41 = INT64_MIN;
uint16_t x47 = 6617U;
volatile int32_t t14 = -98158;
int8_t x61 = INT8_MIN;
int64_t x62 = INT64_MAX;
int16_t x63 = INT16_MAX;
int64_t x64 = INT64_MIN;
static int32_t x70 = INT32_MIN;
int32_t t19 = -149181;
static volatile int64_t x82 = INT64_MIN;
volatile int32_t x87 = INT32_MAX;
volatile uint64_t x88 = UINT64_MAX;
uint16_t x89 = UINT16_MAX;
int8_t x104 = 17;
int8_t x108 = INT8_MAX;
int32_t t27 = -772250;
int64_t x113 = INT64_MAX;
int64_t x117 = INT64_MIN;
int8_t x118 = -3;
uint16_t x127 = 7799U;
int32_t x129 = -1;
uint8_t x138 = UINT8_MAX;
static int32_t x153 = INT32_MIN;
int8_t x160 = INT8_MAX;
uint32_t x168 = 3872797U;
static int64_t x177 = -1LL;
volatile int32_t t45 = 1986;
int32_t x187 = 405750521;
int32_t t46 = 17458124;
int32_t t47 = -31242375;
uint16_t x195 = 1880U;
int32_t x202 = INT32_MAX;
int32_t x205 = 1661651;
int32_t t51 = -20;
int32_t t52 = -1;
int8_t x213 = -1;
int8_t x219 = INT8_MIN;
volatile int64_t x221 = -1LL;
int64_t x222 = 200LL;
static volatile int64_t x225 = INT64_MIN;
static int64_t x228 = 3950339022444LL;
static int32_t t56 = -854285748;
static volatile uint8_t x230 = 111U;
int8_t x237 = INT8_MIN;
int16_t x238 = INT16_MIN;
static volatile uint64_t x243 = 44075407961LLU;
volatile int32_t t64 = -42685187;
int32_t x261 = INT32_MIN;
static int32_t x264 = -1;
uint8_t x274 = 1U;
int32_t x276 = 27718;
int16_t x277 = -1;
int32_t x282 = INT32_MIN;
volatile uint8_t x283 = 23U;
volatile int8_t x285 = 9;
volatile uint64_t x286 = 21757590412LLU;
int32_t x288 = 11312;
static uint8_t x297 = 0U;
uint16_t x300 = 29845U;
int8_t x302 = INT8_MIN;
int8_t x307 = INT8_MIN;
static volatile int8_t x308 = INT8_MAX;
static int8_t x311 = INT8_MAX;
int32_t t77 = 3346;
volatile int64_t x314 = 56450871689LL;
uint8_t x323 = 9U;
static volatile int32_t x327 = -1;
int64_t x328 = -1LL;
int32_t t81 = -7;
int32_t x331 = INT32_MIN;
int32_t t82 = -439;
int64_t x348 = -1556LL;
int16_t x349 = INT16_MAX;
uint16_t x354 = 126U;
int64_t x356 = INT64_MIN;
int64_t x359 = 158765778016891LL;
volatile int8_t x363 = INT8_MIN;
static int32_t t90 = 4;
static uint64_t x365 = 1LLU;
int8_t x370 = INT8_MIN;
uint64_t x375 = 6918823013852041LLU;
static uint16_t x384 = UINT16_MAX;
int32_t t96 = -4058;
uint32_t x391 = 57U;
int16_t x394 = INT16_MIN;
volatile int64_t x400 = INT64_MAX;


void f0(void) {
	int16_t x1 = -1;
	volatile int32_t x2 = -1;
	int32_t x3 = 851328;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -563;

	t0 = ((x1^x2)<=(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int64_t x6 = -33475379138LL;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 12151;

	t1 = ((x5^x6)<=(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 180;
	int64_t x10 = 1063550746047246LL;
	volatile uint64_t x11 = 1011006687044LLU;
	int64_t x12 = INT64_MIN;
	static int32_t t2 = 0;

	t2 = ((x9^x10)<=(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	uint64_t x14 = 3554961120LLU;
	int32_t x15 = -1;
	uint16_t x16 = UINT16_MAX;

	t3 = ((x13^x14)<=(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 52;
	volatile uint32_t x18 = 239010U;
	int16_t x20 = INT16_MAX;

	t4 = ((x17^x18)<=(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 41759771342LLU;
	volatile uint8_t x22 = 0U;
	int32_t t5 = -11;

	t5 = ((x21^x22)<=(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = 669LL;

	t6 = ((x25^x26)<=(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MAX;
	int32_t x32 = -64922;
	volatile int32_t t7 = 19423833;

	t7 = ((x29^x30)<=(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	volatile uint16_t x34 = 126U;
	volatile int8_t x35 = -1;
	int32_t t8 = 15490207;

	t8 = ((x33^x34)<=(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 653U;
	int8_t x38 = -2;
	uint64_t x39 = 1172715259994569014LLU;
	int16_t x40 = -1;

	t9 = ((x37^x38)<=(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 1289U;
	uint64_t x44 = 6774494939616LLU;
	static volatile int32_t t10 = -40564;

	t10 = ((x41^x42)<=(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 78U;
	int64_t x48 = -1LL;
	static volatile int32_t t11 = -455987;

	t11 = ((x45^x46)<=(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 11U;
	uint8_t x50 = 5U;
	static volatile int64_t x51 = INT64_MIN;
	static volatile int16_t x52 = INT16_MIN;
	int32_t t12 = 1664;

	t12 = ((x49^x50)<=(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MIN;
	int8_t x56 = -1;
	static volatile int32_t t13 = -324;

	t13 = ((x53^x54)<=(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	volatile uint8_t x58 = 7U;
	int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;

	t14 = ((x57^x58)<=(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t t15 = 446618391;

	t15 = ((x61^x62)<=(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MAX;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	static int32_t x68 = INT32_MAX;
	static int32_t t16 = 2770203;

	t16 = ((x65^x66)<=(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -98451000;
	int8_t x71 = INT8_MIN;
	static uint64_t x72 = 3925082586LLU;
	volatile int32_t t17 = 3500358;

	t17 = ((x69^x70)<=(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	static uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t18 = 272918;

	t18 = ((x73^x74)<=(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 95U;
	static uint16_t x78 = UINT16_MAX;
	volatile int32_t x79 = INT32_MAX;
	volatile int64_t x80 = 1LL;

	t19 = ((x77^x78)<=(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 4069849LL;
	int32_t x83 = INT32_MAX;
	int8_t x84 = 10;
	volatile int32_t t20 = -186;

	t20 = ((x81^x82)<=(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int32_t x86 = 1963816;
	volatile int32_t t21 = -217685;

	t21 = ((x85^x86)<=(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x90 = 12U;
	int16_t x91 = -1;
	volatile int8_t x92 = -8;
	static volatile int32_t t22 = -150589;

	t22 = ((x89^x90)<=(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint64_t x94 = 71680116098314LLU;
	volatile int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MAX;
	static int32_t t23 = 1;

	t23 = ((x93^x94)<=(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint64_t x98 = 45091832622LLU;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = 5;
	volatile int32_t t24 = 59;

	t24 = ((x97^x98)<=(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -445;
	int8_t x102 = INT8_MIN;
	int16_t x103 = -1;
	int32_t t25 = -199355;

	t25 = ((x101^x102)<=(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 1;
	uint16_t x106 = 9328U;
	uint64_t x107 = 16405611473086LLU;
	volatile int32_t t26 = -2868904;

	t26 = ((x105^x106)<=(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 15U;
	static int32_t x110 = INT32_MIN;
	int64_t x111 = -1LL;
	int32_t x112 = -1;

	t27 = ((x109^x110)<=(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = -5202;
	static uint8_t x115 = UINT8_MAX;
	static int16_t x116 = INT16_MAX;
	volatile int32_t t28 = 5172443;

	t28 = ((x113^x114)<=(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x119 = 1797624634751807LLU;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -1012917;

	t29 = ((x117^x118)<=(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = INT16_MIN;
	uint8_t x123 = 33U;
	int64_t x124 = INT64_MIN;
	int32_t t30 = 329892172;

	t30 = ((x121^x122)<=(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	uint16_t x126 = 2U;
	uint64_t x128 = 9425902020047LLU;
	static int32_t t31 = 9077;

	t31 = ((x125^x126)<=(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x130 = -1;
	volatile int32_t x131 = -1;
	volatile int32_t x132 = -1;
	volatile int32_t t32 = 249454;

	t32 = ((x129^x130)<=(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 126U;
	int64_t x134 = INT64_MAX;
	static uint16_t x135 = 490U;
	int8_t x136 = -2;
	int32_t t33 = -753;

	t33 = ((x133^x134)<=(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -224025691;
	uint16_t x139 = 685U;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 50;

	t34 = ((x137^x138)<=(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	volatile uint64_t x142 = UINT64_MAX;
	uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t35 = 12713;

	t35 = ((x141^x142)<=(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	uint64_t x146 = 238966LLU;
	volatile int16_t x147 = -7;
	uint32_t x148 = 89U;
	int32_t t36 = 10808707;

	t36 = ((x145^x146)<=(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile int32_t x150 = INT32_MIN;
	int32_t x151 = -1;
	int8_t x152 = 0;
	int32_t t37 = 1949;

	t37 = ((x149^x150)<=(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MAX;
	int64_t x155 = INT64_MIN;
	volatile uint8_t x156 = 31U;
	int32_t t38 = 484834572;

	t38 = ((x153^x154)<=(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = UINT32_MAX;
	volatile int8_t x158 = INT8_MIN;
	volatile int8_t x159 = INT8_MIN;
	int32_t t39 = -11675;

	t39 = ((x157^x158)<=(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 15149779610500LLU;
	static uint64_t x162 = UINT64_MAX;
	volatile int8_t x163 = -24;
	uint32_t x164 = 204U;
	volatile int32_t t40 = 1;

	t40 = ((x161^x162)<=(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint16_t x166 = 4305U;
	volatile int16_t x167 = INT16_MAX;
	volatile int32_t t41 = 17054;

	t41 = ((x165^x166)<=(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 462LLU;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = 7896LL;
	static uint16_t x172 = 15U;
	int32_t t42 = 0;

	t42 = ((x169^x170)<=(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MAX;
	int64_t x174 = 2043157LL;
	uint64_t x175 = 198084516LLU;
	int64_t x176 = 31LL;
	volatile int32_t t43 = -4284861;

	t43 = ((x173^x174)<=(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -1;
	static volatile int64_t x179 = -63423LL;
	volatile int64_t x180 = INT64_MAX;
	int32_t t44 = 55665;

	t44 = ((x177^x178)<=(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int16_t x182 = INT16_MAX;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = -4;

	t45 = ((x181^x182)<=(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 2665;
	static uint32_t x186 = UINT32_MAX;
	int8_t x188 = INT8_MAX;

	t46 = ((x185^x186)<=(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = 3925985560682230LL;
	static int16_t x190 = INT16_MIN;
	int8_t x191 = 1;
	int32_t x192 = INT32_MIN;

	t47 = ((x189^x190)<=(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x193 = 61701LLU;
	int64_t x194 = INT64_MIN;
	static int64_t x196 = INT64_MIN;
	int32_t t48 = -1;

	t48 = ((x193^x194)<=(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 21956;
	uint8_t x198 = 4U;
	int8_t x199 = 6;
	volatile uint64_t x200 = 4247764664834639LLU;
	volatile int32_t t49 = -9422147;

	t49 = ((x197^x198)<=(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MAX;
	volatile int8_t x203 = INT8_MAX;
	int16_t x204 = -45;
	static volatile int32_t t50 = 1860;

	t50 = ((x201^x202)<=(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x206 = 222;
	int8_t x207 = INT8_MIN;
	volatile uint64_t x208 = UINT64_MAX;

	t51 = ((x205^x206)<=(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 1;
	int32_t x210 = INT32_MIN;
	int32_t x211 = -1;
	uint16_t x212 = 3U;

	t52 = ((x209^x210)<=(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x214 = INT64_MIN;
	volatile uint16_t x215 = 802U;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = 210;

	t53 = ((x213^x214)<=(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	int32_t x218 = -1;
	volatile int32_t x220 = INT32_MIN;
	int32_t t54 = 284691894;

	t54 = ((x217^x218)<=(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x223 = 79101U;
	int64_t x224 = -1LL;
	int32_t t55 = -1556352;

	t55 = ((x221^x222)<=(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x226 = -1;
	static uint64_t x227 = 58LLU;

	t56 = ((x225^x226)<=(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x231 = INT64_MIN;
	static uint8_t x232 = 19U;
	int32_t t57 = -2076;

	t57 = ((x229^x230)<=(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 1;
	int16_t x234 = -1;
	int8_t x235 = -1;
	static uint8_t x236 = UINT8_MAX;
	static int32_t t58 = 0;

	t58 = ((x233^x234)<=(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x239 = 1U;
	int64_t x240 = -22310751167466LL;
	int32_t t59 = 986636276;

	t59 = ((x237^x238)<=(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -348085;
	int32_t x242 = INT32_MIN;
	int16_t x244 = INT16_MAX;
	static volatile int32_t t60 = -986111384;

	t60 = ((x241^x242)<=(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int32_t x246 = INT32_MIN;
	volatile int16_t x247 = 0;
	volatile int16_t x248 = -1;
	int32_t t61 = -2948084;

	t61 = ((x245^x246)<=(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = 8;
	int64_t x250 = INT64_MIN;
	static volatile int64_t x251 = INT64_MIN;
	static int32_t x252 = -1;
	int32_t t62 = -1036662;

	t62 = ((x249^x250)<=(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -1;
	static int16_t x254 = -32;
	int64_t x255 = -20982391239086LL;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -24473;

	t63 = ((x253^x254)<=(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = 2197U;
	int16_t x259 = INT16_MIN;
	volatile int8_t x260 = INT8_MAX;

	t64 = ((x257^x258)<=(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = -4189279;
	static volatile uint64_t x263 = UINT64_MAX;
	volatile int32_t t65 = -37015127;

	t65 = ((x261^x262)<=(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = 9;
	static int16_t x268 = -443;
	volatile int32_t t66 = -4679;

	t66 = ((x265^x266)<=(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile uint32_t x270 = 379142U;
	int16_t x271 = INT16_MAX;
	static int8_t x272 = -1;
	int32_t t67 = 9118258;

	t67 = ((x269^x270)<=(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int16_t x275 = INT16_MIN;
	int32_t t68 = 9;

	t68 = ((x273^x274)<=(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = 1;
	uint16_t x279 = 2936U;
	int64_t x280 = 6872075LL;
	int32_t t69 = -29132;

	t69 = ((x277^x278)<=(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	int16_t x284 = INT16_MIN;
	static int32_t t70 = 1;

	t70 = ((x281^x282)<=(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x287 = -3;
	volatile int32_t t71 = 1013;

	t71 = ((x285^x286)<=(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	volatile uint32_t x290 = UINT32_MAX;
	int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MIN;
	static volatile int32_t t72 = 1;

	t72 = ((x289^x290)<=(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint16_t x294 = UINT16_MAX;
	uint32_t x295 = 193692U;
	int64_t x296 = -399950349066123LL;
	volatile int32_t t73 = 6334356;

	t73 = ((x293^x294)<=(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x298 = 15024484U;
	int16_t x299 = 2817;
	static volatile int32_t t74 = 149;

	t74 = ((x297^x298)<=(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x301 = 2549U;
	static int32_t x303 = INT32_MAX;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = 27505629;

	t75 = ((x301^x302)<=(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	volatile int8_t x306 = INT8_MIN;
	int32_t t76 = 15;

	t76 = ((x305^x306)<=(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -630;
	volatile int16_t x310 = INT16_MAX;
	uint64_t x312 = 126660344660373LLU;

	t77 = ((x309^x310)<=(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	int32_t x316 = 29455;
	volatile int32_t t78 = -11082084;

	t78 = ((x313^x314)<=(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MAX;
	volatile int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MIN;
	int32_t t79 = -42683;

	t79 = ((x317^x318)<=(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 28U;
	int64_t x322 = 62381769604LL;
	int64_t x324 = -2070117879938LL;
	int32_t t80 = 5697740;

	t80 = ((x321^x322)<=(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = UINT64_MAX;
	uint16_t x326 = UINT16_MAX;

	t81 = ((x325^x326)<=(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 1;
	static int8_t x330 = INT8_MAX;
	volatile uint32_t x332 = 1057840900U;

	t82 = ((x329^x330)<=(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	uint64_t x334 = 5254614LLU;
	volatile int16_t x335 = INT16_MIN;
	int64_t x336 = INT64_MIN;
	int32_t t83 = 50798;

	t83 = ((x333^x334)<=(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	int32_t x338 = 16302;
	static volatile int16_t x339 = -9999;
	int32_t x340 = INT32_MIN;
	static int32_t t84 = 777;

	t84 = ((x337^x338)<=(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MIN;
	volatile int8_t x344 = INT8_MIN;
	int32_t t85 = 2;

	t85 = ((x341^x342)<=(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 47U;
	int16_t x346 = INT16_MIN;
	int64_t x347 = 2178172062000907LL;
	volatile int32_t t86 = 3;

	t86 = ((x345^x346)<=(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 0;

	t87 = ((x349^x350)<=(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	static volatile uint8_t x355 = 46U;
	volatile int32_t t88 = -1396;

	t88 = ((x353^x354)<=(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 61242U;
	static int8_t x358 = INT8_MIN;
	static volatile int64_t x360 = INT64_MIN;
	int32_t t89 = 736866710;

	t89 = ((x357^x358)<=(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MAX;
	int64_t x362 = INT64_MIN;
	static volatile uint8_t x364 = UINT8_MAX;

	t90 = ((x361^x362)<=(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = 36638LLU;
	static int16_t x367 = INT16_MIN;
	int16_t x368 = 3;
	int32_t t91 = 3764;

	t91 = ((x365^x366)<=(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 528530710480019554LL;
	int64_t x371 = -113146081511837686LL;
	volatile int16_t x372 = INT16_MIN;
	int32_t t92 = -426346;

	t92 = ((x369^x370)<=(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	static volatile int64_t x374 = INT64_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t93 = 1;

	t93 = ((x373^x374)<=(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 1;
	volatile uint64_t x378 = 2567LLU;
	uint64_t x379 = 7566116010111LLU;
	volatile int32_t x380 = 16272;
	int32_t t94 = 143;

	t94 = ((x377^x378)<=(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	uint64_t x382 = 16191674302696385LLU;
	volatile int32_t x383 = INT32_MIN;
	volatile int32_t t95 = -222427527;

	t95 = ((x381^x382)<=(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 8U;
	int32_t x386 = INT32_MIN;
	int8_t x387 = INT8_MIN;
	int16_t x388 = 150;

	t96 = ((x385^x386)<=(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	volatile uint64_t x390 = 183414LLU;
	uint8_t x392 = 54U;
	volatile int32_t t97 = -2;

	t97 = ((x389^x390)<=(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = 477988599U;
	int64_t x395 = INT64_MIN;
	static int64_t x396 = INT64_MAX;
	volatile int32_t t98 = -9;

	t98 = ((x393^x394)<=(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 40U;
	int32_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	volatile int32_t t99 = -340359;

	t99 = ((x397^x398)<=(x399<=x400));

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

