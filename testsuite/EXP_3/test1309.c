#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
volatile int32_t t0 = 30705262;
static int64_t x5 = 33130694463124228LL;
uint16_t x6 = UINT16_MAX;
int32_t x7 = INT32_MAX;
int64_t x8 = -30292LL;
static volatile int32_t t1 = 443704;
static uint8_t x15 = 0U;
volatile int32_t t4 = -1944288;
uint64_t x29 = UINT64_MAX;
int16_t x34 = -333;
int16_t x41 = INT16_MAX;
volatile int32_t t10 = -915;
uint8_t x45 = 119U;
static volatile int32_t t11 = 483342;
int64_t x49 = INT64_MAX;
volatile int8_t x50 = INT8_MAX;
int64_t x51 = INT64_MIN;
volatile uint16_t x56 = 260U;
static volatile int8_t x62 = -6;
int64_t x63 = INT64_MIN;
uint64_t x65 = UINT64_MAX;
uint64_t x66 = 2973179973LLU;
static int32_t t16 = -5;
int16_t x70 = INT16_MAX;
volatile uint16_t x73 = 217U;
static int32_t x78 = INT32_MAX;
volatile int32_t t19 = -126916;
volatile int32_t x81 = INT32_MAX;
static uint32_t x82 = 3U;
int16_t x85 = INT16_MIN;
int32_t x94 = -499;
int32_t t23 = -24;
int32_t x100 = 120;
int32_t x102 = -1;
volatile int32_t t25 = 156;
int16_t x105 = INT16_MIN;
int8_t x106 = INT8_MIN;
int64_t x116 = INT64_MIN;
static volatile int32_t t29 = 14504223;
static int16_t x130 = INT16_MAX;
uint8_t x139 = 5U;
int32_t t35 = 3;
int8_t x147 = -1;
static volatile uint64_t x152 = 878019502687494016LLU;
uint8_t x159 = 4U;
volatile int64_t x160 = INT64_MIN;
static int16_t x161 = -1;
int8_t x163 = -9;
int8_t x171 = INT8_MAX;
uint32_t x173 = 14U;
volatile int32_t x178 = INT32_MIN;
int64_t x181 = INT64_MIN;
int8_t x190 = INT8_MAX;
uint16_t x195 = UINT16_MAX;
static volatile int32_t t50 = 184;
int8_t x210 = 13;
int32_t t52 = -17236;
int8_t x218 = 12;
uint8_t x222 = 11U;
int8_t x233 = -15;
int16_t x234 = 12944;
int64_t x245 = -1LL;
volatile uint32_t x252 = 0U;
volatile int32_t t63 = -392501;
int16_t x258 = -1;
int8_t x259 = 63;
uint32_t x261 = UINT32_MAX;
uint8_t x267 = UINT8_MAX;
uint16_t x268 = 20577U;
int32_t t66 = -3534818;
static int8_t x276 = INT8_MIN;
volatile int8_t x278 = INT8_MIN;
static uint8_t x282 = UINT8_MAX;
int64_t x288 = 6976654957335LL;
int64_t x291 = INT64_MIN;
int16_t x295 = INT16_MIN;
static uint8_t x296 = 7U;
int32_t x297 = -18;
volatile int32_t t74 = -475;
int64_t x304 = INT64_MIN;
int32_t x306 = INT32_MAX;
uint32_t x309 = 23425U;
volatile int32_t t78 = -4721;
int64_t x320 = -239786562LL;
static volatile int16_t x325 = -1;
uint32_t x328 = 258U;
int64_t x330 = INT64_MIN;
int32_t x331 = -229570464;
int64_t x335 = 33576517865LL;
volatile uint16_t x339 = 1U;
volatile int32_t t84 = 0;
int32_t x345 = 0;
static int64_t x348 = INT64_MIN;
volatile int32_t t86 = -113132556;
volatile uint64_t x349 = 1565LLU;
int16_t x351 = -9458;
uint64_t x353 = 12536LLU;
uint32_t x354 = 2357U;
int32_t x355 = -1;
static int32_t x359 = 587;
int8_t x360 = INT8_MIN;
int64_t x361 = 108357624551878468LL;
static int64_t x371 = 3201864588689021LL;
volatile int8_t x385 = INT8_MIN;
uint8_t x386 = 0U;
int32_t t97 = 89;
static uint32_t x395 = 40224U;
volatile int32_t t98 = 212587;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int32_t x2 = INT32_MIN;
	int64_t x3 = -189LL;

	t0 = ((x1<=x2)<(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {


	t1 = ((x5<=x6)<(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 2782851856620016LLU;
	int8_t x10 = -1;
	volatile int64_t x11 = -2725219229521LL;
	volatile uint32_t x12 = UINT32_MAX;
	static int32_t t2 = -62792273;

	t2 = ((x9<=x10)<(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 306909170;
	volatile int32_t x14 = INT32_MAX;
	uint32_t x16 = UINT32_MAX;
	int32_t t3 = -15996;

	t3 = ((x13<=x14)<(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 210U;
	int16_t x18 = INT16_MAX;
	volatile int32_t x19 = INT32_MAX;
	int64_t x20 = 198007000141913LL;

	t4 = ((x17<=x18)<(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	int16_t x22 = -1;
	volatile uint16_t x23 = UINT16_MAX;
	int64_t x24 = -1LL;
	int32_t t5 = -118;

	t5 = ((x21<=x22)<(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 10U;
	volatile uint64_t x26 = UINT64_MAX;
	int64_t x27 = -17LL;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 84164;

	t6 = ((x25<=x26)<(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	volatile int64_t x31 = -1LL;
	volatile int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 66233;

	t7 = ((x29<=x30)<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int64_t x35 = -203LL;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -15;

	t8 = ((x33<=x34)<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 290;
	volatile uint32_t x38 = 0U;
	static volatile uint64_t x39 = UINT64_MAX;
	uint64_t x40 = UINT64_MAX;
	int32_t t9 = -10;

	t9 = ((x37<=x38)<(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 726695118U;
	volatile uint16_t x43 = UINT16_MAX;
	volatile int32_t x44 = INT32_MIN;

	t10 = ((x41<=x42)<(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = -1;
	static int32_t x47 = INT32_MIN;
	int32_t x48 = -1;

	t11 = ((x45<=x46)<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x52 = -1LL;
	volatile int32_t t12 = 23976085;

	t12 = ((x49<=x50)<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int16_t x54 = INT16_MIN;
	volatile uint32_t x55 = 18U;
	int32_t t13 = -1463;

	t13 = ((x53<=x54)<(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 7906U;
	int16_t x58 = -1;
	static volatile int8_t x59 = INT8_MAX;
	int64_t x60 = 695328942697047100LL;
	int32_t t14 = 458270;

	t14 = ((x57<=x58)<(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	static volatile int8_t x64 = 1;
	int32_t t15 = -24558955;

	t15 = ((x61<=x62)<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = -1;
	int32_t x68 = 450;

	t16 = ((x65<=x66)<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static int8_t x71 = INT8_MAX;
	int64_t x72 = -1LL;
	int32_t t17 = 1515002;

	t17 = ((x69<=x70)<(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 54885U;
	static uint32_t x75 = UINT32_MAX;
	int32_t x76 = 47923;
	volatile int32_t t18 = -22892;

	t18 = ((x73<=x74)<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -486962732;
	int8_t x79 = INT8_MIN;
	volatile uint32_t x80 = UINT32_MAX;

	t19 = ((x77<=x78)<(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 1;

	t20 = ((x81<=x82)<(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	volatile int64_t x87 = 7848762LL;
	volatile uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -2494;

	t21 = ((x85<=x86)<(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	uint8_t x90 = 24U;
	uint16_t x91 = 26780U;
	static int32_t x92 = INT32_MAX;
	volatile int32_t t22 = 1581659;

	t22 = ((x89<=x90)<(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 66;
	int8_t x95 = INT8_MAX;
	static int16_t x96 = INT16_MIN;

	t23 = ((x93<=x94)<(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	uint64_t x98 = 44041385119607364LLU;
	volatile uint64_t x99 = 29868968LLU;
	volatile int32_t t24 = 0;

	t24 = ((x97<=x98)<(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	volatile uint32_t x103 = 14872U;
	static volatile uint8_t x104 = UINT8_MAX;

	t25 = ((x101<=x102)<(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x107 = -1;
	volatile int16_t x108 = -347;
	int32_t t26 = 168265;

	t26 = ((x105<=x106)<(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 5U;
	volatile int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MAX;
	int32_t t27 = -16660;

	t27 = ((x109<=x110)<(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	volatile int32_t x114 = INT32_MIN;
	volatile int64_t x115 = INT64_MAX;
	volatile int32_t t28 = -134;

	t28 = ((x113<=x114)<(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	static int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	volatile int32_t x120 = -1;

	t29 = ((x117<=x118)<(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	int64_t x122 = 506545005189LL;
	static int16_t x123 = -998;
	int8_t x124 = -2;
	int32_t t30 = -1400;

	t30 = ((x121<=x122)<(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MIN;
	static uint32_t x128 = 0U;
	volatile int32_t t31 = 229677977;

	t31 = ((x125<=x126)<(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 14768;
	int32_t x131 = -1;
	int8_t x132 = -1;
	volatile int32_t t32 = 1;

	t32 = ((x129<=x130)<(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 524;
	int64_t x134 = -1LL;
	int32_t x135 = 8097;
	int64_t x136 = 136LL;
	int32_t t33 = -556;

	t33 = ((x133<=x134)<(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	volatile int8_t x138 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t34 = 17424537;

	t34 = ((x137<=x138)<(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static int16_t x142 = INT16_MIN;
	static int64_t x143 = 135279830042868358LL;
	uint32_t x144 = 9405U;

	t35 = ((x141<=x142)<(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1;
	uint64_t x146 = 212LLU;
	uint64_t x148 = 1525677325LLU;
	int32_t t36 = -182;

	t36 = ((x145<=x146)<(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = -8008;
	int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	volatile int32_t t37 = -5834;

	t37 = ((x149<=x150)<(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -479623861LL;
	int32_t x154 = INT32_MAX;
	int8_t x155 = INT8_MIN;
	uint64_t x156 = 14870949856LLU;
	volatile int32_t t38 = -90;

	t38 = ((x153<=x154)<(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint32_t x158 = 2281314U;
	int32_t t39 = -185;

	t39 = ((x157<=x158)<(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MAX;
	volatile int16_t x164 = -1;
	static int32_t t40 = -1966546;

	t40 = ((x161<=x162)<(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MIN;
	static int8_t x167 = INT8_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 558560155;

	t41 = ((x165<=x166)<(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = 1;
	static int16_t x170 = 11916;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = -96967003;

	t42 = ((x169<=x170)<(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	volatile int32_t x175 = 1248079;
	static int64_t x176 = 3912184389418LL;
	int32_t t43 = 1723;

	t43 = ((x173<=x174)<(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	volatile int64_t x179 = -589882508LL;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 52301681;

	t44 = ((x177<=x178)<(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = INT32_MAX;
	int32_t x183 = -1;
	static int8_t x184 = INT8_MAX;
	static int32_t t45 = -2;

	t45 = ((x181<=x182)<(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int64_t x186 = 1841497LL;
	int8_t x187 = INT8_MIN;
	uint64_t x188 = 1177546674339288004LLU;
	static volatile int32_t t46 = -1427;

	t46 = ((x185<=x186)<(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	uint32_t x191 = 1790341979U;
	static uint8_t x192 = UINT8_MAX;
	volatile int32_t t47 = -2;

	t47 = ((x189<=x190)<(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x194 = 3495LLU;
	int32_t x196 = -1;
	int32_t t48 = 1;

	t48 = ((x193<=x194)<(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 0U;
	int32_t x198 = -1;
	static volatile int16_t x199 = INT16_MIN;
	int64_t x200 = -1LL;
	volatile int32_t t49 = 136274;

	t49 = ((x197<=x198)<(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 1;
	int64_t x202 = -741LL;
	int32_t x203 = -1;
	static int64_t x204 = INT64_MIN;

	t50 = ((x201<=x202)<(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -1LL;
	static uint16_t x206 = 17U;
	static uint32_t x207 = 93931U;
	static uint8_t x208 = 1U;
	static volatile int32_t t51 = -222;

	t51 = ((x205<=x206)<(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MAX;
	int16_t x211 = INT16_MIN;
	static int64_t x212 = -904380176LL;

	t52 = ((x209<=x210)<(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x214 = 79011694LL;
	uint8_t x215 = 111U;
	static int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 7;

	t53 = ((x213<=x214)<(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = UINT8_MAX;
	static int32_t x219 = 69;
	int32_t x220 = INT32_MIN;
	int32_t t54 = -1439;

	t54 = ((x217<=x218)<(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -860;
	static int8_t x223 = -1;
	int32_t x224 = -1;
	int32_t t55 = -4135;

	t55 = ((x221<=x222)<(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int64_t x226 = INT64_MIN;
	static volatile int64_t x227 = -60308390478997941LL;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 4;

	t56 = ((x225<=x226)<(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -14676323439219327LL;
	uint16_t x230 = 4956U;
	int8_t x231 = INT8_MIN;
	int64_t x232 = 132818121491183LL;
	int32_t t57 = 1565193;

	t57 = ((x229<=x230)<(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x235 = -3370428717LL;
	volatile int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = -42166;

	t58 = ((x233<=x234)<(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	static int16_t x238 = 59;
	volatile int8_t x239 = -4;
	int16_t x240 = -1;
	volatile int32_t t59 = -46257;

	t59 = ((x237<=x238)<(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 30049044405929339LL;
	int64_t x242 = INT64_MAX;
	static uint64_t x243 = 3783764089LLU;
	uint8_t x244 = UINT8_MAX;
	int32_t t60 = 808596854;

	t60 = ((x241<=x242)<(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x246 = 126409LLU;
	static int16_t x247 = INT16_MIN;
	static volatile int16_t x248 = 5800;
	volatile int32_t t61 = -1107;

	t61 = ((x245<=x246)<(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	volatile int16_t x250 = INT16_MAX;
	static uint64_t x251 = 89310780170LLU;
	int32_t t62 = 148490352;

	t62 = ((x249<=x250)<(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MAX;
	uint8_t x254 = 5U;
	uint8_t x255 = UINT8_MAX;
	uint16_t x256 = 38U;

	t63 = ((x253<=x254)<(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 66223341660LLU;
	static uint16_t x260 = 4U;
	int32_t t64 = -334601123;

	t64 = ((x257<=x258)<(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = -1;
	uint32_t x263 = 58U;
	int16_t x264 = -1;
	volatile int32_t t65 = 1;

	t65 = ((x261<=x262)<(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	uint16_t x266 = 788U;

	t66 = ((x265<=x266)<(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 32U;
	uint16_t x270 = UINT16_MAX;
	int32_t x271 = INT32_MIN;
	static uint16_t x272 = 2194U;
	volatile int32_t t67 = -32;

	t67 = ((x269<=x270)<(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	int8_t x274 = 4;
	static int64_t x275 = INT64_MAX;
	int32_t t68 = 12312147;

	t68 = ((x273<=x274)<(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -209174395;
	int16_t x279 = -1;
	int64_t x280 = -1LL;
	static int32_t t69 = -302808;

	t69 = ((x277<=x278)<(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -41077;
	int16_t x283 = -1;
	static int64_t x284 = -450460593LL;
	volatile int32_t t70 = -12255;

	t70 = ((x281<=x282)<(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int32_t x286 = -1;
	int16_t x287 = INT16_MAX;
	int32_t t71 = 10914404;

	t71 = ((x285<=x286)<(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x289 = INT16_MAX;
	int16_t x290 = -1;
	volatile uint64_t x292 = UINT64_MAX;
	volatile int32_t t72 = -8882;

	t72 = ((x289<=x290)<(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 2532LLU;
	uint8_t x294 = UINT8_MAX;
	volatile int32_t t73 = -20439;

	t73 = ((x293<=x294)<(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MIN;
	int32_t x299 = -580733584;
	uint64_t x300 = 97221546889082051LLU;

	t74 = ((x297<=x298)<(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static int32_t x302 = -82605866;
	int64_t x303 = -1LL;
	static int32_t t75 = 1;

	t75 = ((x301<=x302)<(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int32_t x307 = 31964234;
	volatile uint64_t x308 = 61LLU;
	volatile int32_t t76 = 9;

	t76 = ((x305<=x306)<(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = UINT32_MAX;
	volatile int32_t x311 = INT32_MIN;
	volatile int64_t x312 = INT64_MAX;
	volatile int32_t t77 = 153980750;

	t77 = ((x309<=x310)<(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -13288;
	volatile int16_t x314 = INT16_MIN;
	static volatile int16_t x315 = -1;
	int32_t x316 = INT32_MIN;

	t78 = ((x313<=x314)<(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 10U;
	int64_t x318 = 1110LL;
	volatile uint8_t x319 = 2U;
	int32_t t79 = 1782940;

	t79 = ((x317<=x318)<(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x321 = UINT64_MAX;
	int8_t x322 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	int16_t x324 = -1;
	volatile int32_t t80 = 57;

	t80 = ((x321<=x322)<(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = UINT8_MAX;
	uint64_t x327 = 93289833165449372LLU;
	int32_t t81 = 6794338;

	t81 = ((x325<=x326)<(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 1U;
	volatile int32_t x332 = -8306;
	volatile int32_t t82 = -10784;

	t82 = ((x329<=x330)<(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MAX;
	uint32_t x334 = 13736829U;
	uint8_t x336 = UINT8_MAX;
	static volatile int32_t t83 = 55858111;

	t83 = ((x333<=x334)<(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	static uint8_t x338 = 0U;
	static int32_t x340 = INT32_MAX;

	t84 = ((x337<=x338)<(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -5041316LL;
	static int16_t x342 = -238;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = 587086579;
	int32_t t85 = 14;

	t85 = ((x341<=x342)<(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = 5;
	int16_t x347 = INT16_MIN;

	t86 = ((x345<=x346)<(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x350 = -1300032;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = -974125;

	t87 = ((x349<=x350)<(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x356 = 5015139U;
	volatile int32_t t88 = 46;

	t88 = ((x353<=x354)<(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x357 = UINT64_MAX;
	static int32_t x358 = 16624296;
	int32_t t89 = -14477;

	t89 = ((x357<=x358)<(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MAX;
	volatile int8_t x364 = INT8_MAX;
	volatile int32_t t90 = -460;

	t90 = ((x361<=x362)<(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	uint8_t x366 = 95U;
	uint32_t x367 = 90U;
	int64_t x368 = -24LL;
	static int32_t t91 = 0;

	t91 = ((x365<=x366)<(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 7410U;
	volatile int64_t x370 = INT64_MAX;
	int16_t x372 = 0;
	int32_t t92 = 258525;

	t92 = ((x369<=x370)<(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x373 = 107U;
	uint16_t x374 = 0U;
	volatile int8_t x375 = -13;
	static int8_t x376 = -1;
	int32_t t93 = 105602;

	t93 = ((x373<=x374)<(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 20641U;
	uint8_t x378 = 1U;
	static int16_t x379 = INT16_MIN;
	int32_t x380 = -600089193;
	static volatile int32_t t94 = -15;

	t94 = ((x377<=x378)<(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -1;
	int8_t x382 = -4;
	int8_t x383 = -1;
	volatile uint16_t x384 = 1U;
	volatile int32_t t95 = 750774;

	t95 = ((x381<=x382)<(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x387 = 29;
	volatile int16_t x388 = -1;
	int32_t t96 = 1385;

	t96 = ((x385<=x386)<(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -30;
	static int64_t x390 = INT64_MAX;
	static int32_t x391 = -1;
	static uint32_t x392 = UINT32_MAX;

	t97 = ((x389<=x390)<(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = -87;
	volatile int32_t x394 = -122470;
	int32_t x396 = INT32_MIN;

	t98 = ((x393<=x394)<(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MAX;
	int32_t x399 = -1;
	uint8_t x400 = UINT8_MAX;
	int32_t t99 = 4569585;

	t99 = ((x397<=x398)<(x399==x400));

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

