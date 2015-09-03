#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 126U;
int32_t t1 = 112;
int32_t x16 = -90233;
int32_t x18 = -1;
int32_t x31 = INT32_MIN;
int32_t t9 = -6;
int32_t x53 = -188052651;
static uint64_t x61 = 1872494LLU;
static int64_t x69 = INT64_MAX;
static volatile int32_t x77 = INT32_MAX;
uint8_t x80 = UINT8_MAX;
int32_t t20 = 288564244;
int32_t t21 = 0;
static volatile int16_t x89 = 2375;
int16_t x95 = INT16_MIN;
int8_t x96 = -1;
int32_t x97 = INT32_MIN;
int32_t x102 = -1;
int8_t x103 = -26;
int16_t x119 = INT16_MIN;
static int32_t x124 = -1;
uint16_t x131 = 9316U;
volatile uint8_t x133 = 0U;
int64_t x135 = INT64_MAX;
uint32_t x143 = 6921U;
int64_t x144 = -3729580938212LL;
volatile uint64_t x148 = 43789672025490406LLU;
static int8_t x150 = -7;
uint32_t x156 = 6U;
int32_t t38 = 88100392;
volatile int32_t t39 = -63;
int64_t x164 = INT64_MAX;
uint32_t x165 = 80149943U;
uint64_t x172 = UINT64_MAX;
volatile int32_t x179 = INT32_MAX;
uint16_t x181 = 7142U;
static volatile int32_t t45 = -6929;
uint16_t x188 = UINT16_MAX;
static uint64_t x189 = 8527487440147LLU;
int16_t x196 = INT16_MIN;
volatile int32_t t48 = 30544;
volatile int8_t x198 = INT8_MIN;
uint16_t x199 = 1U;
int16_t x201 = INT16_MIN;
int8_t x203 = -1;
int8_t x206 = 1;
int32_t t52 = -469014145;
volatile int32_t t54 = -15019;
uint64_t x223 = UINT64_MAX;
volatile int32_t t56 = 2635;
uint64_t x229 = 39LLU;
uint16_t x232 = UINT16_MAX;
int64_t x235 = 26563544LL;
uint16_t x243 = 6U;
int64_t x249 = -1LL;
int32_t t63 = -252049;
int8_t x258 = INT8_MAX;
int8_t x262 = INT8_MAX;
int32_t x265 = 445654;
uint64_t x268 = 13209697681704LLU;
int32_t t66 = -10137430;
volatile int16_t x269 = -1147;
volatile int32_t t69 = 1;
uint32_t x282 = UINT32_MAX;
volatile int16_t x283 = INT16_MIN;
int32_t x284 = 1288788;
uint8_t x288 = 9U;
int32_t t71 = -8783;
uint16_t x291 = 4223U;
static int32_t t72 = 476228;
int32_t x303 = 4;
static volatile uint32_t x304 = 7363U;
static int32_t t76 = -1;
uint32_t x311 = 0U;
int32_t t77 = -189192;
static int16_t x315 = INT16_MAX;
int16_t x316 = -956;
int32_t t80 = 423437;
volatile int8_t x342 = INT8_MIN;
int64_t x345 = INT64_MAX;
int8_t x349 = -1;
int32_t t88 = 183928686;
int32_t t90 = 1;
int16_t x371 = INT16_MIN;
uint16_t x372 = 2U;
volatile int32_t x374 = INT32_MIN;
static int64_t x376 = INT64_MAX;
volatile int32_t t94 = -77499;
uint8_t x381 = 122U;
volatile int8_t x383 = INT8_MIN;
int16_t x384 = INT16_MIN;
uint32_t x388 = 3231496U;
int32_t t98 = -88704;
int8_t x398 = -1;
static uint32_t x400 = 111U;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	uint8_t x2 = 66U;
	int32_t x3 = -6325555;
	volatile int32_t t0 = -70;

	t0 = ((x1<=x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int16_t x6 = INT16_MIN;
	static uint8_t x7 = 63U;
	uint8_t x8 = 11U;

	t1 = ((x5<=x6)==(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -34622659;
	int64_t x10 = INT64_MIN;
	volatile int8_t x11 = INT8_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -236558;

	t2 = ((x9<=x10)==(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = 432;
	int16_t x15 = INT16_MIN;
	static volatile int32_t t3 = -2;

	t3 = ((x13<=x14)==(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	static volatile int32_t x19 = 15376;
	int8_t x20 = 60;
	volatile int32_t t4 = -42624;

	t4 = ((x17<=x18)==(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 1;
	static volatile int64_t x22 = -1LL;
	volatile int64_t x23 = 1LL;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 40;

	t5 = ((x21<=x22)==(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 1;
	static volatile uint16_t x26 = 397U;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -47697787;

	t6 = ((x25<=x26)==(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -11823;

	t7 = ((x29<=x30)==(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 3;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = INT32_MIN;
	int64_t x36 = 475266LL;
	volatile int32_t t8 = -418310448;

	t8 = ((x33<=x34)==(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	static int64_t x39 = INT64_MIN;
	volatile uint8_t x40 = 21U;

	t9 = ((x37<=x38)==(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	static int64_t x42 = 34LL;
	volatile int16_t x43 = INT16_MIN;
	static uint8_t x44 = 11U;
	volatile int32_t t10 = -14;

	t10 = ((x41<=x42)==(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = INT8_MAX;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -95;

	t11 = ((x45<=x46)==(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -345;
	uint64_t x50 = UINT64_MAX;
	volatile uint8_t x51 = 0U;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = 19;

	t12 = ((x49<=x50)==(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = INT16_MAX;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = 3;

	t13 = ((x53<=x54)==(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 4U;
	volatile int64_t x58 = INT64_MAX;
	int8_t x59 = -1;
	int32_t x60 = -1;
	int32_t t14 = -26961;

	t14 = ((x57<=x58)==(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MAX;
	volatile int16_t x63 = INT16_MIN;
	static uint8_t x64 = 1U;
	volatile int32_t t15 = 15177;

	t15 = ((x61<=x62)==(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	int32_t x66 = -6096916;
	int8_t x67 = INT8_MAX;
	int64_t x68 = INT64_MIN;
	volatile int32_t t16 = 46723;

	t16 = ((x65<=x66)==(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = INT16_MIN;
	int16_t x71 = -12;
	static volatile uint32_t x72 = 22U;
	volatile int32_t t17 = -3855;

	t17 = ((x69<=x70)==(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x74 = 3928920LLU;
	volatile uint64_t x75 = UINT64_MAX;
	uint64_t x76 = 78241804457LLU;
	volatile int32_t t18 = 77756;

	t18 = ((x73<=x74)==(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = 4;
	static uint8_t x79 = 31U;
	int32_t t19 = 25960699;

	t19 = ((x77<=x78)==(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = 1;
	int32_t x84 = -1;

	t20 = ((x81<=x82)==(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 0;
	static uint64_t x86 = 2785398093561973548LLU;
	static uint8_t x87 = 18U;
	int32_t x88 = INT32_MIN;

	t21 = ((x85<=x86)==(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	volatile uint64_t x92 = 35194266166270LLU;
	int32_t t22 = 2596824;

	t22 = ((x89<=x90)==(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MAX;
	static int32_t x94 = INT32_MAX;
	int32_t t23 = -1;

	t23 = ((x93<=x94)==(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = INT32_MIN;
	static volatile int64_t x99 = 15623795443454883LL;
	static int16_t x100 = -1;
	int32_t t24 = 64444728;

	t24 = ((x97<=x98)==(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	static int32_t x104 = -1;
	int32_t t25 = 1218;

	t25 = ((x101<=x102)==(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 19912998618748747LLU;
	int16_t x106 = 77;
	uint32_t x107 = 24U;
	static int8_t x108 = -1;
	volatile int32_t t26 = 7627511;

	t26 = ((x105<=x106)==(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x109 = 4U;
	int32_t x110 = 12686;
	volatile uint32_t x111 = UINT32_MAX;
	volatile int8_t x112 = -1;
	int32_t t27 = -1;

	t27 = ((x109<=x110)==(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	static int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = 332U;
	volatile int32_t t28 = 1337612;

	t28 = ((x113<=x114)==(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -7;
	int64_t x118 = -1LL;
	int64_t x120 = -1LL;
	int32_t t29 = 662;

	t29 = ((x117<=x118)==(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 733U;
	uint32_t x122 = UINT32_MAX;
	int32_t x123 = 233930927;
	int32_t t30 = -952138;

	t30 = ((x121<=x122)==(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 284U;
	uint32_t x126 = 2097069826U;
	int32_t x127 = -11600;
	uint32_t x128 = 2988763U;
	static int32_t t31 = -1;

	t31 = ((x125<=x126)==(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	volatile uint64_t x130 = 64LLU;
	uint8_t x132 = 40U;
	static int32_t t32 = -8758208;

	t32 = ((x129<=x130)==(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x134 = 5523231LLU;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 651471213;

	t33 = ((x133<=x134)==(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 1;
	static volatile int8_t x138 = -1;
	int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t34 = -7;

	t34 = ((x137<=x138)==(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	static uint8_t x142 = 35U;
	volatile int32_t t35 = 2758241;

	t35 = ((x141<=x142)==(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 62U;
	int16_t x146 = -1;
	int64_t x147 = -642125852303LL;
	volatile int32_t t36 = -13;

	t36 = ((x145<=x146)==(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -13;
	uint64_t x151 = UINT64_MAX;
	uint8_t x152 = 7U;
	static volatile int32_t t37 = -2;

	t37 = ((x149<=x150)==(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	static uint16_t x154 = 24U;
	uint16_t x155 = 0U;

	t38 = ((x153<=x154)==(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = -5;
	static int64_t x159 = -1LL;
	int8_t x160 = INT8_MAX;

	t39 = ((x157<=x158)==(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 5U;
	int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MAX;
	int32_t t40 = -9513191;

	t40 = ((x161<=x162)==(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MIN;
	uint8_t x167 = 8U;
	static volatile int64_t x168 = -3LL;
	volatile int32_t t41 = -275089;

	t41 = ((x165<=x166)==(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -3;
	volatile int64_t x170 = -9LL;
	static int32_t x171 = INT32_MIN;
	int32_t t42 = -112877;

	t42 = ((x169<=x170)==(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = 1LL;
	volatile int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MIN;
	int64_t x176 = -1780839LL;
	int32_t t43 = 828689240;

	t43 = ((x173<=x174)==(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	uint16_t x178 = 21600U;
	int64_t x180 = INT64_MIN;
	static int32_t t44 = -79;

	t44 = ((x177<=x178)==(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = UINT8_MAX;
	int8_t x183 = 0;
	uint64_t x184 = UINT64_MAX;

	t45 = ((x181<=x182)==(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = -1;
	int32_t x187 = -1;
	int32_t t46 = 13813;

	t46 = ((x185<=x186)==(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	volatile uint8_t x191 = 6U;
	static int16_t x192 = -1;
	volatile int32_t t47 = 16231;

	t47 = ((x189<=x190)==(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	uint64_t x194 = 6751033849LLU;
	uint32_t x195 = 149734U;

	t48 = ((x193<=x194)==(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 12;
	uint64_t x200 = 119393805722LLU;
	volatile int32_t t49 = -3;

	t49 = ((x197<=x198)==(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x202 = 845864448304471LL;
	uint32_t x204 = 506759062U;
	volatile int32_t t50 = 7215;

	t50 = ((x201<=x202)==(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = 0;
	int32_t x207 = INT32_MAX;
	volatile int64_t x208 = -1LL;
	volatile int32_t t51 = -324216152;

	t51 = ((x205<=x206)==(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 41213991;
	uint8_t x210 = 3U;
	int16_t x211 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;

	t52 = ((x209<=x210)==(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = INT8_MAX;
	int32_t x214 = -1;
	int8_t x215 = INT8_MAX;
	int64_t x216 = -501143900622244953LL;
	static int32_t t53 = -4;

	t53 = ((x213<=x214)==(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static int64_t x218 = -1LL;
	int8_t x219 = -10;
	int8_t x220 = -1;

	t54 = ((x217<=x218)==(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 6U;
	static uint8_t x222 = 113U;
	int16_t x224 = INT16_MIN;
	int32_t t55 = -1973;

	t55 = ((x221<=x222)==(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MAX;
	int64_t x226 = 144074LL;
	int32_t x227 = INT32_MIN;
	static volatile int16_t x228 = 988;

	t56 = ((x225<=x226)==(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 59U;
	static int8_t x231 = INT8_MIN;
	volatile int32_t t57 = -254240;

	t57 = ((x229<=x230)==(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = 9741;
	uint32_t x234 = UINT32_MAX;
	volatile int16_t x236 = INT16_MIN;
	int32_t t58 = -735;

	t58 = ((x233<=x234)==(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MAX;
	int64_t x238 = -442261879273513936LL;
	static int32_t x239 = INT32_MIN;
	volatile int8_t x240 = -45;
	volatile int32_t t59 = -1928655;

	t59 = ((x237<=x238)==(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	volatile uint32_t x244 = 145661647U;
	volatile int32_t t60 = -20303;

	t60 = ((x241<=x242)==(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MIN;
	int32_t x247 = 170408;
	uint64_t x248 = UINT64_MAX;
	static volatile int32_t t61 = -1;

	t61 = ((x245<=x246)==(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	static int8_t x251 = INT8_MIN;
	int16_t x252 = -1;
	int32_t t62 = -43445;

	t62 = ((x249<=x250)==(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 2U;
	int16_t x254 = INT16_MAX;
	static uint16_t x255 = 7U;
	static volatile int8_t x256 = -1;

	t63 = ((x253<=x254)==(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = 0;
	volatile int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = 140456;

	t64 = ((x257<=x258)==(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = -304748691LL;
	int64_t x263 = INT64_MIN;
	int32_t x264 = -57079945;
	volatile int32_t t65 = 54930;

	t65 = ((x261<=x262)==(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = -1;
	int16_t x267 = -1;

	t66 = ((x265<=x266)==(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = 1;
	int16_t x272 = -1;
	volatile int32_t t67 = 7600675;

	t67 = ((x269<=x270)==(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	volatile uint64_t x274 = UINT64_MAX;
	uint16_t x275 = 110U;
	uint16_t x276 = 1U;
	static volatile int32_t t68 = -6779;

	t68 = ((x273<=x274)==(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	volatile uint8_t x278 = 4U;
	uint16_t x279 = 1U;
	int64_t x280 = INT64_MIN;

	t69 = ((x277<=x278)==(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 55U;
	static int32_t t70 = 1111;

	t70 = ((x281<=x282)==(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 0U;
	int64_t x286 = 2073464000941115LL;
	static uint16_t x287 = 981U;

	t71 = ((x285<=x286)==(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = UINT16_MAX;
	static int8_t x290 = 1;
	volatile int32_t x292 = INT32_MAX;

	t72 = ((x289<=x290)==(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -35LL;
	static int64_t x294 = INT64_MIN;
	static int32_t x295 = -1;
	int64_t x296 = -1246LL;
	static volatile int32_t t73 = -977797632;

	t73 = ((x293<=x294)==(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	uint8_t x298 = 23U;
	uint32_t x299 = UINT32_MAX;
	volatile int16_t x300 = INT16_MIN;
	int32_t t74 = -64882706;

	t74 = ((x297<=x298)==(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 0U;
	int16_t x302 = -13;
	volatile int32_t t75 = -1021953;

	t75 = ((x301<=x302)==(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 3U;
	volatile uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;

	t76 = ((x305<=x306)==(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	volatile int8_t x310 = 0;
	volatile int64_t x312 = 0LL;

	t77 = ((x309<=x310)==(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x313 = 0U;
	volatile uint64_t x314 = 1194085LLU;
	int32_t t78 = 14;

	t78 = ((x313<=x314)==(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	volatile int32_t x318 = 2972082;
	int64_t x319 = INT64_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t79 = -274;

	t79 = ((x317<=x318)==(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static uint16_t x322 = 777U;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = 21U;

	t80 = ((x321<=x322)==(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	volatile uint16_t x326 = UINT16_MAX;
	volatile int64_t x327 = INT64_MIN;
	static volatile uint32_t x328 = 0U;
	int32_t t81 = -130767865;

	t81 = ((x325<=x326)==(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	volatile int16_t x330 = INT16_MAX;
	int32_t x331 = INT32_MIN;
	int64_t x332 = 2510127347421237LL;
	int32_t t82 = -32221556;

	t82 = ((x329<=x330)==(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 1672404LLU;
	volatile int64_t x334 = 5132523LL;
	int64_t x335 = -37761LL;
	int16_t x336 = -1;
	int32_t t83 = 488;

	t83 = ((x333<=x334)==(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 998LLU;
	static int8_t x338 = -3;
	volatile int16_t x339 = -1;
	static uint16_t x340 = UINT16_MAX;
	int32_t t84 = 0;

	t84 = ((x337<=x338)==(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 372361788LLU;
	uint8_t x343 = 21U;
	uint16_t x344 = 3U;
	int32_t t85 = 3575735;

	t85 = ((x341<=x342)==(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = 1;
	int32_t x347 = 718175036;
	int32_t x348 = INT32_MAX;
	volatile int32_t t86 = -1;

	t86 = ((x345<=x346)==(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x350 = INT32_MIN;
	volatile uint32_t x351 = 57033856U;
	int32_t x352 = 6515268;
	int32_t t87 = -1077;

	t87 = ((x349<=x350)==(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	uint8_t x354 = 5U;
	static int8_t x355 = INT8_MIN;
	uint16_t x356 = 1U;

	t88 = ((x353<=x354)==(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 2LLU;
	int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	int32_t x360 = -1;
	volatile int32_t t89 = -3383667;

	t89 = ((x357<=x358)==(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	uint8_t x362 = 7U;
	static volatile int64_t x363 = INT64_MAX;
	int16_t x364 = 1;

	t90 = ((x361<=x362)==(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	uint64_t x366 = UINT64_MAX;
	int64_t x367 = -15553345541596306LL;
	int8_t x368 = -1;
	volatile int32_t t91 = -377;

	t91 = ((x365<=x366)==(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = UINT64_MAX;
	static int8_t x370 = -1;
	int32_t t92 = 257691714;

	t92 = ((x369<=x370)==(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1U;
	int16_t x375 = 2807;
	volatile int32_t t93 = 336;

	t93 = ((x373<=x374)==(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static int16_t x378 = -1919;
	int16_t x379 = INT16_MIN;
	uint32_t x380 = 69690562U;

	t94 = ((x377<=x378)==(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x382 = UINT8_MAX;
	int32_t t95 = 493;

	t95 = ((x381<=x382)==(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x385 = 33;
	int64_t x386 = -401188462292LL;
	int16_t x387 = INT16_MAX;
	int32_t t96 = -232529;

	t96 = ((x385<=x386)==(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -154755387048316LL;
	int64_t x390 = INT64_MIN;
	volatile int16_t x391 = INT16_MIN;
	static volatile int64_t x392 = 30603747LL;
	static volatile int32_t t97 = -444;

	t97 = ((x389<=x390)==(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -1;
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = 31;
	int32_t x396 = INT32_MIN;

	t98 = ((x393<=x394)==(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -10133;
	int8_t x399 = 1;
	volatile int32_t t99 = -7588313;

	t99 = ((x397<=x398)==(x399|x400));

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

