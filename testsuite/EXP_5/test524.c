#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 44139;
int32_t x10 = -3609017;
static volatile int32_t x12 = -1;
volatile int16_t x13 = INT16_MIN;
volatile uint32_t t3 = 9010U;
int8_t x23 = -1;
static int16_t x27 = INT16_MIN;
int8_t x30 = -1;
volatile uint32_t t8 = 1277674275U;
int8_t x39 = INT8_MAX;
int32_t x42 = 449816;
int8_t x44 = INT8_MIN;
volatile int32_t t10 = 0;
volatile int32_t x46 = INT32_MIN;
uint8_t x54 = 2U;
uint64_t x63 = 18285510LLU;
volatile uint64_t t14 = 19781982LLU;
static uint64_t x67 = UINT64_MAX;
static int64_t x70 = INT64_MAX;
int16_t x71 = INT16_MIN;
int64_t x75 = 293661087080LL;
int32_t x82 = -1;
volatile int16_t x88 = INT16_MIN;
static uint64_t x100 = 793245667275LLU;
volatile uint64_t t21 = 126449080244885LLU;
volatile int16_t x104 = -3407;
uint32_t x110 = 70231U;
uint32_t x123 = 3U;
volatile uint8_t x127 = 4U;
volatile uint16_t x134 = 9U;
static volatile uint16_t x135 = 14879U;
int64_t x141 = -1LL;
uint64_t t32 = 3775825276338557092LLU;
int32_t x151 = -854176249;
int32_t t34 = -84956;
int16_t x172 = INT16_MIN;
volatile int32_t t37 = -7515;
int16_t x183 = INT16_MIN;
int8_t x184 = INT8_MAX;
volatile uint32_t x185 = 580719884U;
volatile uint64_t t39 = 787383058LLU;
static uint16_t x189 = 8100U;
int64_t t40 = 9215545222570272LL;
volatile int32_t x209 = -1;
int16_t x212 = 8654;
static volatile int32_t t44 = -1;
int32_t x214 = INT32_MIN;
static volatile int64_t t45 = 716957654LL;
int32_t x224 = INT32_MAX;
uint64_t t46 = 744602LLU;
volatile int8_t x233 = 20;
static volatile int32_t t50 = 1;
volatile uint16_t x241 = 562U;
static int8_t x244 = -40;
int32_t t51 = -2688;
int64_t x249 = 5391979088370LL;
uint32_t x254 = 22U;
uint32_t x262 = UINT32_MAX;
int64_t t56 = -169406LL;
int16_t x273 = 223;
int16_t x276 = INT16_MIN;
uint16_t x293 = 654U;
int32_t x298 = -1;
volatile uint64_t x300 = UINT64_MAX;
volatile int8_t x301 = 35;
int8_t x302 = INT8_MAX;
uint64_t x309 = UINT64_MAX;
uint64_t x310 = UINT64_MAX;
int32_t x318 = -1;
static uint32_t x319 = 1547U;
uint32_t x324 = UINT32_MAX;
volatile uint64_t t70 = 1630860LLU;
uint32_t t72 = 1799U;
int16_t x338 = -11584;
volatile int64_t t74 = INT64_MIN;
int8_t x347 = INT8_MIN;
static uint16_t x349 = 2017U;
int16_t x354 = INT16_MIN;
int32_t x358 = INT32_MAX;
int32_t x360 = 0;
int32_t t78 = 7719;
volatile int8_t x363 = INT8_MAX;
int16_t x369 = 470;
static volatile uint32_t t81 = 68600611U;
uint64_t x373 = 39LLU;
volatile uint64_t t82 = 8547343751LLU;
int32_t x384 = INT32_MAX;
int16_t x393 = INT16_MIN;
int16_t x394 = 112;
int16_t x396 = INT16_MAX;
uint32_t t88 = 30674873U;
int16_t x401 = 198;
volatile int64_t x408 = -228LL;
uint64_t x409 = 45843089358LLU;
volatile int16_t x411 = INT16_MAX;
int64_t x423 = INT64_MIN;
int32_t t95 = 8154;
static volatile int16_t x437 = INT16_MAX;
int32_t x439 = 1;
int32_t x445 = -3171;


void f0(void) {
	uint16_t x1 = 0U;
	uint8_t x2 = 13U;
	static int16_t x3 = 8;
	int16_t x4 = -230;

	t0 = (x1/((x2/x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 11U;
	int16_t x6 = INT16_MIN;
	uint16_t x7 = 11U;
	static int16_t x8 = -3;
	volatile int32_t t1 = 4826381;

	t1 = (x5/((x6/x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile int16_t x11 = -1;
	int32_t t2 = -135;

	t2 = (x9/((x10/x11)-x12));

	if (t2 != -595) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	static uint32_t x16 = UINT32_MAX;

	t3 = (x13/((x14/x15)-x16));

	if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	volatile int16_t x18 = 4478;
	int64_t x19 = 233256LL;
	int16_t x20 = INT16_MAX;
	int64_t t4 = 20570137LL;

	t4 = (x17/((x18/x19)-x20));

	if (t4 != -131076LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int8_t x22 = INT8_MIN;
	static uint16_t x24 = 0U;
	static int32_t t5 = 273;

	t5 = (x21/((x22/x23)-x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int8_t x26 = -1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 3869;

	t6 = (x25/((x26/x27)-x28));

	if (t6 != -65536) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MIN;
	static int64_t t7 = -4621543851386LL;

	t7 = (x29/((x30/x31)-x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1U;
	int32_t x34 = INT32_MAX;
	int8_t x35 = -1;
	volatile int16_t x36 = INT16_MIN;

	t8 = (x33/((x34/x35)-x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MAX;
	uint64_t x40 = 18500422LLU;
	volatile uint64_t t9 = 216506LLU;

	t9 = (x37/((x38/x39)-x40));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 83U;
	int8_t x43 = INT8_MIN;

	t10 = (x41/((x42/x43)-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 50U;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = 24U;
	volatile uint32_t t11 = 130695460U;

	t11 = (x45/((x46/x47)-x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	uint32_t x55 = 62121U;
	int32_t x56 = -1;
	int64_t t12 = -68818720462LL;

	t12 = (x53/((x54/x55)-x56));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 88601267334052LLU;
	int64_t x58 = INT64_MIN;
	int16_t x59 = 6;
	static int8_t x60 = INT8_MIN;
	volatile uint64_t t13 = 10236LLU;

	t13 = (x57/((x58/x59)-x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	uint16_t x62 = 24U;
	uint32_t x64 = 24024645U;

	t14 = (x61/((x62/x63)-x64));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = 5003778LL;
	uint64_t x68 = 19010LLU;
	volatile uint64_t t15 = 342807582896LLU;

	t15 = (x65/((x66/x67)-x68));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int16_t x72 = INT16_MAX;
	volatile int64_t t16 = -356312LL;

	t16 = (x69/((x70/x71)-x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -13256770;
	int32_t x74 = 10;
	static int64_t x76 = -1LL;
	volatile int64_t t17 = 295746954LL;

	t17 = (x73/((x74/x75)-x76));

	if (t17 != -13256770LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 1;
	int64_t x83 = 1927445033080745863LL;
	static uint16_t x84 = UINT16_MAX;
	volatile int64_t t18 = 147LL;

	t18 = (x81/((x82/x83)-x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	volatile int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	int32_t t19 = 15533;

	t19 = (x85/((x86/x87)-x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = 747;
	int8_t x90 = -1;
	int16_t x91 = INT16_MAX;
	static int8_t x92 = 2;
	static int32_t t20 = 0;

	t20 = (x89/((x90/x91)-x92));

	if (t20 != -373) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	static uint32_t x98 = 1286U;
	static int32_t x99 = -1;

	t21 = (x97/((x98/x99)-x100));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	static int64_t x102 = -1LL;
	int16_t x103 = INT16_MIN;
	volatile int64_t t22 = -3920LL;

	t22 = (x101/((x102/x103)-x104));

	if (t22 != -2707182869637445LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 774LLU;
	int8_t x111 = -28;
	int32_t x112 = INT32_MIN;
	static uint64_t t23 = 30LLU;

	t23 = (x109/((x110/x111)-x112));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = INT8_MIN;
	volatile int32_t x114 = -274233361;
	volatile int16_t x115 = INT16_MIN;
	uint8_t x116 = 24U;
	int32_t t24 = 44;

	t24 = (x113/((x114/x115)-x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -376;
	int64_t x118 = -1120171788280LL;
	static volatile int16_t x119 = INT16_MAX;
	int8_t x120 = -15;
	volatile int64_t t25 = 98990491788975LL;

	t25 = (x117/((x118/x119)-x120));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	volatile int64_t t26 = -3LL;

	t26 = (x121/((x122/x123)-x124));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = -12098;
	volatile int32_t x128 = -483096;
	volatile int32_t t27 = -10134020;

	t27 = (x125/((x126/x127)-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -110394;
	static int32_t x130 = -1;
	int64_t x131 = INT64_MAX;
	uint16_t x132 = UINT16_MAX;
	static volatile int64_t t28 = -1189LL;

	t28 = (x129/((x130/x131)-x132));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = 1;
	volatile uint32_t x136 = 5121U;
	uint32_t t29 = 85U;

	t29 = (x133/((x134/x135)-x136));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = 9;
	volatile int32_t x139 = INT32_MIN;
	int8_t x140 = -1;
	volatile int32_t t30 = -516935;

	t30 = (x137/((x138/x139)-x140));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x142 = INT64_MIN;
	static int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MIN;
	volatile int64_t t31 = -461465926LL;

	t31 = (x141/((x142/x143)-x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 5045548197880686LLU;
	int32_t x146 = 4;
	uint64_t x147 = UINT64_MAX;
	uint64_t x148 = 59354LLU;

	t32 = (x145/((x146/x147)-x148));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x149 = 66304494634128680LL;
	uint64_t x150 = UINT64_MAX;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t33 = 1704291LLU;

	t33 = (x149/((x150/x151)-x152));

	if (t33 != 513988330497121LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -1;
	int16_t x162 = INT16_MAX;
	int8_t x163 = 11;
	int32_t x164 = INT32_MAX;

	t34 = (x161/((x162/x163)-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x165 = INT16_MIN;
	int8_t x166 = -1;
	static uint8_t x167 = 1U;
	static int8_t x168 = 1;
	static int32_t t35 = -9000518;

	t35 = (x165/((x166/x167)-x168));

	if (t35 != 16384) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = 95377U;
	uint64_t x170 = UINT64_MAX;
	uint16_t x171 = 7U;
	uint64_t t36 = 1183739959LLU;

	t36 = (x169/((x170/x171)-x172));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x177 = UINT16_MAX;
	volatile int32_t x178 = INT32_MIN;
	static int8_t x179 = 23;
	static int8_t x180 = -6;

	t37 = (x177/((x178/x179)-x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x181 = 1U;
	uint64_t x182 = 82715717878740059LLU;
	volatile uint64_t t38 = 79858485LLU;

	t38 = (x181/((x182/x183)-x184));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x186 = INT32_MIN;
	volatile uint64_t x187 = UINT64_MAX;
	uint32_t x188 = 30926U;

	t39 = (x185/((x186/x187)-x188));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x190 = UINT32_MAX;
	volatile int32_t x191 = INT32_MAX;
	static int64_t x192 = 86951847799863035LL;

	t40 = (x189/((x190/x191)-x192));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MAX;
	static uint32_t x195 = UINT32_MAX;
	volatile int64_t x196 = INT64_MAX;
	static volatile int64_t t41 = 7280323148LL;

	t41 = (x193/((x194/x195)-x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x201 = 1U;
	int64_t x202 = -195254LL;
	uint64_t x203 = 2015245994989006220LLU;
	volatile int64_t x204 = -1LL;
	uint64_t t42 = 2010554627LLU;

	t42 = (x201/((x202/x203)-x204));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x205 = 1616018956U;
	volatile int16_t x206 = -1;
	volatile int16_t x207 = 105;
	int8_t x208 = -2;
	volatile uint32_t t43 = 35U;

	t43 = (x205/((x206/x207)-x208));

	if (t43 != 808009478U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x210 = 0U;
	volatile uint8_t x211 = 1U;

	t44 = (x209/((x210/x211)-x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MIN;
	static volatile int16_t x215 = INT16_MIN;
	int64_t x216 = -25483067915LL;

	t45 = (x213/((x214/x215)-x216));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = 0U;
	volatile uint64_t x222 = UINT64_MAX;
	int8_t x223 = 3;

	t46 = (x221/((x222/x223)-x224));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int16_t x226 = -253;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t47 = 17552028367018671LLU;

	t47 = (x225/((x226/x227)-x228));

	if (t47 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int16_t x230 = -1;
	int16_t x231 = 2;
	static int32_t x232 = 4;
	volatile uint32_t t48 = 995877084U;

	t48 = (x229/((x230/x231)-x232));

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x234 = 2033U;
	volatile int8_t x235 = INT8_MAX;
	int64_t x236 = -7696507LL;
	int64_t t49 = 167098476LL;

	t49 = (x233/((x234/x235)-x236));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = INT32_MAX;
	volatile int32_t x238 = -1;
	static int32_t x239 = INT32_MIN;
	volatile int32_t x240 = INT32_MAX;

	t50 = (x237/((x238/x239)-x240));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x242 = 0U;
	volatile int32_t x243 = INT32_MIN;

	t51 = (x241/((x242/x243)-x244));

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x245 = -11874;
	int8_t x246 = 39;
	volatile int8_t x247 = INT8_MIN;
	volatile int16_t x248 = -1;
	static volatile int32_t t52 = -444820;

	t52 = (x245/((x246/x247)-x248));

	if (t52 != -11874) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x250 = INT8_MAX;
	volatile int64_t x251 = -1LL;
	int64_t x252 = 73613258571103LL;
	int64_t t53 = 13622385788738512LL;

	t53 = (x249/((x250/x251)-x252));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = UINT64_MAX;
	static int64_t x255 = INT64_MAX;
	static int8_t x256 = -1;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x253/((x254/x255)-x256));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = 118U;
	uint64_t x258 = 68010205819LLU;
	int16_t x259 = -1;
	int64_t x260 = INT64_MAX;
	uint64_t t55 = 11982781709LLU;

	t55 = (x257/((x258/x259)-x260));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x261 = INT64_MAX;
	int16_t x263 = INT16_MIN;
	static volatile int8_t x264 = -1;

	t56 = (x261/((x262/x263)-x264));

	if (t56 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = -1;
	int16_t x266 = 3;
	uint64_t x267 = 2535LLU;
	uint64_t x268 = 27LLU;
	uint64_t t57 = 670LLU;

	t57 = (x265/((x266/x267)-x268));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x269 = -1;
	static int64_t x270 = 403716479972446LL;
	volatile int64_t x271 = INT64_MAX;
	int32_t x272 = 21;
	int64_t t58 = -6540376570563673LL;

	t58 = (x269/((x270/x271)-x272));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x274 = -1;
	int16_t x275 = 5;
	volatile int32_t t59 = -1886833;

	t59 = (x273/((x274/x275)-x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = INT16_MAX;
	int32_t x278 = INT32_MIN;
	volatile int32_t x279 = INT32_MAX;
	uint32_t x280 = 946570U;
	uint32_t t60 = 1558U;

	t60 = (x277/((x278/x279)-x280));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x285 = 44U;
	uint16_t x286 = UINT16_MAX;
	static int64_t x287 = INT64_MAX;
	static int32_t x288 = -1;
	volatile int64_t t61 = -54373896601575LL;

	t61 = (x285/((x286/x287)-x288));

	if (t61 != 44LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x294 = 30;
	volatile uint16_t x295 = 274U;
	static uint16_t x296 = 89U;
	volatile int32_t t62 = -1494;

	t62 = (x293/((x294/x295)-x296));

	if (t62 != -7) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	int8_t x299 = -1;
	static uint64_t t63 = 221622LLU;

	t63 = (x297/((x298/x299)-x300));

	if (t63 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x303 = 150347882LLU;
	static int16_t x304 = -1;
	volatile uint64_t t64 = 124LLU;

	t64 = (x301/((x302/x303)-x304));

	if (t64 != 35LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = INT32_MIN;
	static int16_t x306 = -1;
	int8_t x307 = -1;
	int8_t x308 = 0;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x305/((x306/x307)-x308));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x311 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t66 = 68LLU;

	t66 = (x309/((x310/x311)-x312));

	if (t66 != 32766LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x313 = INT32_MIN;
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	uint64_t t67 = 5LLU;

	t67 = (x313/((x314/x315)-x316));

	if (t67 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MIN;
	volatile uint8_t x320 = 65U;
	volatile uint32_t t68 = 58986U;

	t68 = (x317/((x318/x319)-x320));

	if (t68 != 1547U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = -1;
	volatile uint64_t x322 = 382526LLU;
	static uint32_t x323 = 31955718U;
	volatile uint64_t t69 = 4574327329280LLU;

	t69 = (x321/((x322/x323)-x324));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -4;
	static int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	static uint64_t x328 = 79629232938LLU;

	t70 = (x325/((x326/x327)-x328));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = -15;
	static int8_t x331 = -50;
	uint16_t x332 = UINT16_MAX;
	static volatile int32_t t71 = -336843155;

	t71 = (x329/((x330/x331)-x332));

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x333 = -1;
	int16_t x334 = INT16_MIN;
	volatile int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = 85U;

	t72 = (x333/((x334/x335)-x336));

	if (t72 != 25116767U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x337 = INT64_MIN;
	uint64_t x339 = 31408217LLU;
	static uint16_t x340 = 25U;
	volatile uint64_t t73 = 4037LLU;

	t73 = (x337/((x338/x339)-x340));

	if (t73 != 15704108LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = INT64_MIN;
	uint8_t x342 = 3U;
	int64_t x343 = -468690275552331LL;
	static int32_t x344 = -1;

	t74 = (x341/((x342/x343)-x344));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = INT8_MIN;
	int32_t x346 = -1;
	int8_t x348 = -9;
	int32_t t75 = -135673;

	t75 = (x345/((x346/x347)-x348));

	if (t75 != -14) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x350 = INT16_MIN;
	int16_t x351 = 2;
	int64_t x352 = -305726612113202576LL;
	int64_t t76 = 80371386LL;

	t76 = (x349/((x350/x351)-x352));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x353 = -2;
	static uint16_t x355 = 1051U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t77 = 15;

	t77 = (x353/((x354/x355)-x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x357 = 1225U;
	volatile uint16_t x359 = 1U;

	t78 = (x357/((x358/x359)-x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x361 = 384562LLU;
	int32_t x362 = INT32_MIN;
	static int64_t x364 = 356122774LL;
	static volatile uint64_t t79 = 204LLU;

	t79 = (x361/((x362/x363)-x364));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x365 = 12334U;
	int32_t x366 = INT32_MAX;
	static int64_t x367 = -1LL;
	volatile int32_t x368 = INT32_MIN;
	volatile int64_t t80 = 0LL;

	t80 = (x365/((x366/x367)-x368));

	if (t80 != 12334LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x370 = 109U;
	volatile uint32_t x371 = 30073U;
	int8_t x372 = 1;

	t81 = (x369/((x370/x371)-x372));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	static uint64_t x376 = UINT64_MAX;

	t82 = (x373/((x374/x375)-x376));

	if (t82 != 39LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x377 = UINT16_MAX;
	volatile uint8_t x378 = UINT8_MAX;
	volatile uint8_t x379 = 26U;
	static uint64_t x380 = UINT64_MAX;
	static volatile uint64_t t83 = 1686358LLU;

	t83 = (x377/((x378/x379)-x380));

	if (t83 != 6553LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MAX;
	static volatile int64_t x382 = -3335LL;
	int16_t x383 = INT16_MIN;
	volatile int64_t t84 = -495696005790LL;

	t84 = (x381/((x382/x383)-x384));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x385 = 6U;
	static uint32_t x386 = UINT32_MAX;
	static uint32_t x387 = 334U;
	int32_t x388 = -6969;
	uint32_t t85 = 25146U;

	t85 = (x385/((x386/x387)-x388));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x389 = 14U;
	uint32_t x390 = UINT32_MAX;
	static int16_t x391 = 227;
	int64_t x392 = -19713025LL;
	volatile int64_t t86 = 1225LL;

	t86 = (x389/((x390/x391)-x392));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x395 = INT8_MIN;
	volatile int32_t t87 = 39;

	t87 = (x393/((x394/x395)-x396));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = INT32_MIN;
	volatile int32_t x398 = INT32_MAX;
	uint16_t x399 = 3160U;
	uint32_t x400 = UINT32_MAX;

	t88 = (x397/((x398/x399)-x400));

	if (t88 != 3159U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x402 = -4633849427LL;
	int64_t x403 = 1525630817151LL;
	static int8_t x404 = 1;
	volatile int64_t t89 = -14871736163LL;

	t89 = (x401/((x402/x403)-x404));

	if (t89 != -198LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = INT32_MAX;
	uint8_t x406 = UINT8_MAX;
	static volatile int16_t x407 = INT16_MIN;
	int64_t t90 = 2259055261LL;

	t90 = (x405/((x406/x407)-x408));

	if (t90 != 9418787LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x410 = 209875716LL;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t91 = 321LLU;

	t91 = (x409/((x410/x411)-x412));

	if (t91 != 7017157LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = INT8_MAX;
	uint8_t x414 = UINT8_MAX;
	int32_t x415 = INT32_MIN;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t92 = 5442822;

	t92 = (x413/((x414/x415)-x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = UINT8_MAX;
	int8_t x418 = 28;
	volatile int64_t x419 = 693LL;
	int16_t x420 = INT16_MAX;
	int64_t t93 = 8547LL;

	t93 = (x417/((x418/x419)-x420));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x421 = 0U;
	int16_t x422 = -1;
	volatile int32_t x424 = 3013297;
	int64_t t94 = 1350070610515340645LL;

	t94 = (x421/((x422/x423)-x424));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x425 = -1;
	static volatile uint16_t x426 = 8U;
	volatile int32_t x427 = INT32_MIN;
	int32_t x428 = -1;

	t95 = (x425/((x426/x427)-x428));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = -1;
	volatile int32_t x434 = -38;
	int64_t x435 = -1LL;
	uint8_t x436 = 44U;
	volatile int64_t t96 = -2496080703LL;

	t96 = (x433/((x434/x435)-x436));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x438 = 0;
	static int16_t x440 = INT16_MIN;
	volatile int32_t t97 = -6675;

	t97 = (x437/((x438/x439)-x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MIN;
	volatile uint16_t x442 = 180U;
	static int16_t x443 = INT16_MIN;
	int8_t x444 = 7;
	volatile int32_t t98 = 11;

	t98 = (x441/((x442/x443)-x444));

	if (t98 != 18) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x446 = INT16_MIN;
	volatile int8_t x447 = INT8_MIN;
	int32_t x448 = -363786;
	volatile int32_t t99 = 36845298;

	t99 = (x445/((x446/x447)-x448));

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

