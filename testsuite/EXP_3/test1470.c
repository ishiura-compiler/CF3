#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
volatile int8_t x7 = -40;
int64_t x20 = INT64_MAX;
uint64_t x22 = UINT64_MAX;
volatile uint8_t x23 = 11U;
volatile int32_t x31 = INT32_MAX;
static int16_t x36 = INT16_MIN;
volatile int64_t x43 = -46965LL;
int8_t x44 = 31;
static int64_t x45 = INT64_MIN;
uint16_t x57 = 633U;
volatile int32_t t14 = -430;
static int64_t x63 = INT64_MIN;
int32_t x68 = INT32_MIN;
volatile uint8_t x72 = UINT8_MAX;
int16_t x75 = INT16_MIN;
int32_t t18 = 95863752;
volatile uint8_t x78 = UINT8_MAX;
int32_t t19 = 776346662;
int64_t x81 = -1LL;
static volatile int8_t x83 = INT8_MIN;
volatile int32_t t20 = 366803;
int32_t t22 = 41;
static int64_t x96 = INT64_MIN;
static int8_t x102 = INT8_MIN;
uint16_t x105 = 32311U;
volatile int32_t t26 = 30826;
uint8_t x109 = UINT8_MAX;
volatile int32_t t27 = 985495698;
volatile uint32_t x113 = 1227U;
int64_t x115 = INT64_MIN;
volatile int8_t x118 = INT8_MIN;
uint16_t x124 = 859U;
int32_t t31 = 28742769;
uint16_t x133 = UINT16_MAX;
uint8_t x147 = 1U;
volatile int32_t t37 = -19810640;
int32_t x157 = -1;
int8_t x162 = -1;
int8_t x171 = INT8_MIN;
uint32_t x174 = 126255041U;
volatile int32_t t43 = -912813;
static uint8_t x186 = 0U;
int8_t x190 = INT8_MAX;
static volatile uint16_t x192 = 49U;
static int64_t x194 = 3LL;
int8_t x199 = INT8_MIN;
int64_t x200 = INT64_MIN;
int32_t t49 = 564;
static int32_t x202 = INT32_MAX;
int32_t t50 = -658823686;
uint16_t x207 = UINT16_MAX;
uint8_t x210 = UINT8_MAX;
int16_t x212 = -1;
int8_t x216 = 4;
int16_t x225 = 1966;
int32_t t56 = -5128;
int16_t x239 = INT16_MIN;
int8_t x240 = INT8_MIN;
static volatile int32_t x243 = INT32_MAX;
static uint32_t x245 = UINT32_MAX;
volatile int32_t x250 = INT32_MIN;
volatile int64_t x256 = -27882LL;
volatile int32_t t63 = 3;
static int32_t x267 = -1;
static int64_t x268 = -1LL;
volatile int32_t t68 = -3;
static int16_t x278 = INT16_MAX;
uint64_t x283 = UINT64_MAX;
static volatile int64_t x287 = INT64_MAX;
int16_t x289 = -1353;
static volatile int32_t x291 = INT32_MIN;
uint16_t x292 = UINT16_MAX;
int32_t t72 = 421729;
static int8_t x295 = INT8_MIN;
uint64_t x296 = 176LLU;
int32_t x298 = -1;
static int64_t x300 = 0LL;
uint32_t x301 = 94U;
volatile int32_t t75 = 7502;
volatile int8_t x312 = 1;
volatile uint64_t x315 = UINT64_MAX;
static int32_t x317 = INT32_MIN;
int64_t x319 = 4LL;
int8_t x320 = -1;
int64_t x321 = 40069123112180206LL;
static volatile int32_t t82 = 2;
int16_t x335 = INT16_MIN;
int32_t x338 = INT32_MIN;
uint64_t x345 = 12611658LLU;
static int16_t x346 = 0;
int32_t t86 = -14697089;
static int32_t x360 = INT32_MAX;
volatile int32_t t89 = -5705;
uint32_t x362 = 61527U;
int32_t x366 = -1;
int32_t x369 = 941366;
int64_t x371 = INT64_MIN;
int64_t x374 = INT64_MIN;
uint8_t x375 = 4U;
int16_t x391 = INT16_MAX;
static int16_t x393 = 0;
volatile int16_t x394 = INT16_MIN;
int32_t t98 = 0;


void f0(void) {
	static uint16_t x1 = 652U;
	int64_t x2 = -583230365409658637LL;
	uint8_t x3 = 0U;
	int32_t t0 = -916994892;

	t0 = ((x1<=x2)+(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int16_t x6 = -1;
	int8_t x8 = -1;
	int32_t t1 = -15019;

	t1 = ((x5<=x6)+(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int8_t x10 = INT8_MIN;
	static int8_t x11 = 37;
	int64_t x12 = -1LL;
	int32_t t2 = 20737208;

	t2 = ((x9<=x10)+(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = 228LLU;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = 42005113U;
	int32_t t3 = 1421;

	t3 = ((x13<=x14)+(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile int8_t x18 = INT8_MIN;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t t4 = -55;

	t4 = ((x17<=x18)+(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 42705361LLU;
	volatile int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -784;

	t5 = ((x21<=x22)+(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 1LL;
	int16_t x26 = INT16_MIN;
	volatile uint64_t x27 = UINT64_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 9;

	t6 = ((x25<=x26)+(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 9U;
	volatile uint64_t x30 = 1944921465708LLU;
	volatile uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = -3786;

	t7 = ((x29<=x30)+(x31<x32));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2710U;
	int32_t x34 = INT32_MAX;
	static uint32_t x35 = 175U;
	volatile int32_t t8 = 16056550;

	t8 = ((x33<=x34)+(x35<x36));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int8_t x38 = INT8_MAX;
	uint8_t x39 = 20U;
	int64_t x40 = INT64_MAX;
	volatile int32_t t9 = 0;

	t9 = ((x37<=x38)+(x39<x40));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 2193064;
	int32_t x42 = INT32_MIN;
	static int32_t t10 = 10;

	t10 = ((x41<=x42)+(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	uint16_t x47 = UINT16_MAX;
	uint8_t x48 = 0U;
	int32_t t11 = -542313804;

	t11 = ((x45<=x46)+(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 203018515;
	int64_t x50 = -1LL;
	static int8_t x51 = INT8_MAX;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = 1;

	t12 = ((x49<=x50)+(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MIN;
	volatile int64_t x55 = INT64_MIN;
	static uint16_t x56 = 0U;
	int32_t t13 = -1;

	t13 = ((x53<=x54)+(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -1;
	static volatile int32_t x59 = -211;
	uint8_t x60 = 12U;

	t14 = ((x57<=x58)+(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint32_t x62 = UINT32_MAX;
	int32_t x64 = -1;
	volatile int32_t t15 = 144945785;

	t15 = ((x61<=x62)+(x63<x64));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = UINT16_MAX;
	uint16_t x66 = UINT16_MAX;
	volatile int8_t x67 = 0;
	volatile int32_t t16 = 2232304;

	t16 = ((x65<=x66)+(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	volatile int8_t x70 = 0;
	static int64_t x71 = INT64_MAX;
	int32_t t17 = -8;

	t17 = ((x69<=x70)+(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x74 = 1;
	int16_t x76 = -1;

	t18 = ((x73<=x74)+(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 1LL;
	int8_t x79 = 6;
	static int32_t x80 = -1;

	t19 = ((x77<=x78)+(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	uint32_t x84 = 5859147U;

	t20 = ((x81<=x82)+(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -263364451LL;
	int8_t x86 = INT8_MIN;
	int8_t x87 = 1;
	int8_t x88 = -1;
	int32_t t21 = -3;

	t21 = ((x85<=x86)+(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 935923175496424LLU;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MAX;
	int32_t x92 = INT32_MIN;

	t22 = ((x89<=x90)+(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	static volatile uint32_t x94 = 430598U;
	uint16_t x95 = UINT16_MAX;
	static volatile int32_t t23 = 855525;

	t23 = ((x93<=x94)+(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = 7;
	uint32_t x99 = UINT32_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -58;

	t24 = ((x97<=x98)+(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x103 = 314349U;
	static volatile int16_t x104 = -1;
	static int32_t t25 = -3938806;

	t25 = ((x101<=x102)+(x103<x104));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x106 = 75U;
	volatile int16_t x107 = -1;
	volatile int16_t x108 = -738;

	t26 = ((x105<=x106)+(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x110 = 57U;
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = 207425LL;

	t27 = ((x109<=x110)+(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MIN;
	uint32_t x116 = 122220597U;
	int32_t t28 = 1;

	t28 = ((x113<=x114)+(x115<x116));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MAX;
	int16_t x119 = 13;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -31385;

	t29 = ((x117<=x118)+(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = INT64_MAX;
	uint32_t x122 = UINT32_MAX;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t t30 = 8230070;

	t30 = ((x121<=x122)+(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	int16_t x126 = -7;
	uint32_t x127 = UINT32_MAX;
	int16_t x128 = -3369;

	t31 = ((x125<=x126)+(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int64_t x130 = -1LL;
	static int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MAX;
	volatile int32_t t32 = -511;

	t32 = ((x129<=x130)+(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 33;
	volatile uint16_t x135 = UINT16_MAX;
	uint8_t x136 = 29U;
	volatile int32_t t33 = -30194;

	t33 = ((x133<=x134)+(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	volatile int64_t x138 = INT64_MIN;
	static uint32_t x139 = 5U;
	static uint64_t x140 = UINT64_MAX;
	int32_t t34 = -4642596;

	t34 = ((x137<=x138)+(x139<x140));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	int32_t x142 = 6315775;
	uint64_t x143 = 115552917193568834LLU;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -1;

	t35 = ((x141<=x142)+(x143<x144));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 31037U;
	int16_t x146 = INT16_MIN;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 754244;

	t36 = ((x145<=x146)+(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 11U;
	int8_t x150 = -1;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;

	t37 = ((x149<=x150)+(x151<x152));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int64_t x154 = 7099556932789484LL;
	volatile int16_t x155 = INT16_MIN;
	uint16_t x156 = 2U;
	static int32_t t38 = 1395090;

	t38 = ((x153<=x154)+(x155<x156));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x158 = UINT32_MAX;
	volatile int8_t x159 = 1;
	static int8_t x160 = -1;
	int32_t t39 = 143247;

	t39 = ((x157<=x158)+(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x163 = UINT32_MAX;
	volatile int32_t x164 = -894685;
	static volatile int32_t t40 = -871693;

	t40 = ((x161<=x162)+(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MIN;
	int16_t x168 = 371;
	static int32_t t41 = -474006029;

	t41 = ((x165<=x166)+(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = 96268708442794757LL;
	int32_t x172 = INT32_MIN;
	int32_t t42 = 36900;

	t42 = ((x169<=x170)+(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = 678;
	int32_t x175 = -2046398;
	int8_t x176 = 16;

	t43 = ((x173<=x174)+(x175<x176));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = 2791U;
	volatile int8_t x179 = INT8_MAX;
	volatile int32_t x180 = INT32_MAX;
	int32_t t44 = -1;

	t44 = ((x177<=x178)+(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = 25537926366871939LL;
	int64_t x183 = INT64_MIN;
	static int32_t x184 = INT32_MIN;
	static int32_t t45 = 124;

	t45 = ((x181<=x182)+(x183<x184));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	uint16_t x187 = 0U;
	volatile int16_t x188 = 1;
	volatile int32_t t46 = -58168;

	t46 = ((x185<=x186)+(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 1U;
	int32_t x191 = -1;
	volatile int32_t t47 = 2305;

	t47 = ((x189<=x190)+(x191<x192));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 111775;
	uint32_t x195 = 1997795788U;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t48 = 647937;

	t48 = ((x193<=x194)+(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MAX;
	uint8_t x198 = 10U;

	t49 = ((x197<=x198)+(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 9716356817285033LLU;
	volatile int16_t x203 = INT16_MIN;
	volatile int64_t x204 = 7086250444408880LL;

	t50 = ((x201<=x202)+(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x205 = UINT32_MAX;
	int8_t x206 = 4;
	int8_t x208 = INT8_MAX;
	static volatile int32_t t51 = -1;

	t51 = ((x205<=x206)+(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 3U;
	uint32_t x211 = 10U;
	static int32_t t52 = 2;

	t52 = ((x209<=x210)+(x211<x212));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = UINT16_MAX;
	int8_t x214 = -1;
	int64_t x215 = -1LL;
	volatile int32_t t53 = 2645379;

	t53 = ((x213<=x214)+(x215<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 1999637U;
	int64_t x218 = -14816475807539LL;
	int64_t x219 = 660164655LL;
	int32_t x220 = INT32_MIN;
	int32_t t54 = 311;

	t54 = ((x217<=x218)+(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = 15;
	int8_t x222 = -1;
	uint16_t x223 = UINT16_MAX;
	volatile int64_t x224 = INT64_MIN;
	static int32_t t55 = -1;

	t55 = ((x221<=x222)+(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = 43342U;
	int16_t x227 = INT16_MIN;
	uint16_t x228 = 1U;

	t56 = ((x225<=x226)+(x227<x228));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = -7;
	int16_t x231 = 3148;
	uint8_t x232 = 1U;
	volatile int32_t t57 = -328;

	t57 = ((x229<=x230)+(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 40000431U;
	static int64_t x234 = -1LL;
	uint32_t x235 = UINT32_MAX;
	static volatile int16_t x236 = -738;
	static volatile int32_t t58 = -1;

	t58 = ((x233<=x234)+(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	volatile int32_t t59 = -114483505;

	t59 = ((x237<=x238)+(x239<x240));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = UINT8_MAX;
	static int16_t x242 = -332;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -68255233;

	t60 = ((x241<=x242)+(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x246 = UINT32_MAX;
	static int64_t x247 = INT64_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = -13047;

	t61 = ((x245<=x246)+(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	int16_t x251 = 7;
	int16_t x252 = -34;
	volatile int32_t t62 = -34;

	t62 = ((x249<=x250)+(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MAX;
	static uint16_t x254 = UINT16_MAX;
	uint32_t x255 = 698998244U;

	t63 = ((x253<=x254)+(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 3182;
	int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MIN;
	volatile int64_t x260 = -251582671810LL;
	static volatile int32_t t64 = 73876;

	t64 = ((x257<=x258)+(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x262 = INT16_MIN;
	static volatile int32_t x263 = -1;
	int8_t x264 = -3;
	int32_t t65 = 529609015;

	t65 = ((x261<=x262)+(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -15713;
	uint16_t x266 = 13697U;
	int32_t t66 = 3191289;

	t66 = ((x265<=x266)+(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 7U;
	int64_t x270 = INT64_MIN;
	static int64_t x271 = -14406LL;
	int64_t x272 = INT64_MIN;
	int32_t t67 = 444253;

	t67 = ((x269<=x270)+(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int64_t x274 = INT64_MAX;
	uint8_t x275 = 41U;
	static volatile int8_t x276 = INT8_MAX;

	t68 = ((x273<=x274)+(x275<x276));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = UINT8_MAX;
	static int64_t x279 = 3713599135LL;
	int8_t x280 = 1;
	static int32_t t69 = 31236;

	t69 = ((x277<=x278)+(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 9080771108836559285LLU;
	static int64_t x282 = INT64_MIN;
	uint8_t x284 = 10U;
	int32_t t70 = 15526976;

	t70 = ((x281<=x282)+(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile int8_t x286 = INT8_MIN;
	static int16_t x288 = -1963;
	static volatile int32_t t71 = 3;

	t71 = ((x285<=x286)+(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = 27636U;

	t72 = ((x289<=x290)+(x291<x292));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	uint8_t x294 = UINT8_MAX;
	int32_t t73 = -28215;

	t73 = ((x293<=x294)+(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 377755685LLU;
	volatile int8_t x299 = -1;
	volatile int32_t t74 = 1;

	t74 = ((x297<=x298)+(x299<x300));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = -39196727622302LL;
	int32_t x303 = INT32_MIN;
	int8_t x304 = -1;

	t75 = ((x301<=x302)+(x303<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 45085U;
	uint64_t x306 = 619075237348479155LLU;
	int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = 0;

	t76 = ((x305<=x306)+(x307<x308));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = -1;
	int8_t x310 = 47;
	uint8_t x311 = UINT8_MAX;
	static volatile int32_t t77 = 0;

	t77 = ((x309<=x310)+(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x313 = UINT32_MAX;
	int32_t x314 = -1;
	uint8_t x316 = 12U;
	volatile int32_t t78 = 9;

	t78 = ((x313<=x314)+(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x318 = 188867558LLU;
	int32_t t79 = 0;

	t79 = ((x317<=x318)+(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	static volatile int32_t x324 = -908128583;
	volatile int32_t t80 = -19487993;

	t80 = ((x321<=x322)+(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = INT64_MIN;
	volatile uint16_t x327 = 16288U;
	static int8_t x328 = 8;
	static int32_t t81 = 4321;

	t81 = ((x325<=x326)+(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 1953854430549121LLU;
	uint8_t x330 = 23U;
	int32_t x331 = 62194027;
	int32_t x332 = INT32_MIN;

	t82 = ((x329<=x330)+(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -426LL;
	int32_t x334 = INT32_MIN;
	volatile uint32_t x336 = 12062U;
	int32_t t83 = 32;

	t83 = ((x333<=x334)+(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	volatile int8_t x339 = 22;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = -684990;

	t84 = ((x337<=x338)+(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = -1;

	t85 = ((x341<=x342)+(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x347 = INT64_MAX;
	int16_t x348 = -24;

	t86 = ((x345<=x346)+(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 1U;
	uint8_t x350 = 63U;
	int32_t x351 = INT32_MIN;
	volatile uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = -256;

	t87 = ((x349<=x350)+(x351<x352));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MAX;
	static int8_t x354 = -14;
	int16_t x355 = INT16_MIN;
	int16_t x356 = 1;
	volatile int32_t t88 = -72;

	t88 = ((x353<=x354)+(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -15897LL;
	int64_t x358 = INT64_MAX;
	int32_t x359 = -56;

	t89 = ((x357<=x358)+(x359<x360));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -342980407478822965LL;
	static uint16_t x363 = 13U;
	int64_t x364 = -1792701510062LL;
	volatile int32_t t90 = 3310;

	t90 = ((x361<=x362)+(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	volatile int16_t x367 = 241;
	int64_t x368 = INT64_MAX;
	volatile int32_t t91 = -14106;

	t91 = ((x365<=x366)+(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -1;
	uint64_t x372 = 8001201616186459LLU;
	int32_t t92 = -170;

	t92 = ((x369<=x370)+(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	static volatile uint8_t x376 = 5U;
	static int32_t t93 = 119493;

	t93 = ((x373<=x374)+(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MAX;
	static uint8_t x379 = 4U;
	uint32_t x380 = UINT32_MAX;
	int32_t t94 = 21;

	t94 = ((x377<=x378)+(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 2783LLU;
	int8_t x382 = -15;
	volatile int32_t x383 = -1;
	uint8_t x384 = 0U;
	int32_t t95 = 3;

	t95 = ((x381<=x382)+(x383<x384));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 16;
	static int32_t x386 = INT32_MIN;
	static int64_t x387 = -1LL;
	int64_t x388 = INT64_MAX;
	volatile int32_t t96 = -111;

	t96 = ((x385<=x386)+(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 1U;
	uint32_t x390 = UINT32_MAX;
	volatile int64_t x392 = -1LL;
	int32_t t97 = 1465;

	t97 = ((x389<=x390)+(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x395 = -13;
	static uint64_t x396 = 58279194LLU;

	t98 = ((x393<=x394)+(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 10708;
	int16_t x398 = 827;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t99 = 15;

	t99 = ((x397<=x398)+(x399<x400));

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

